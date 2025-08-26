#include <iostream>
#include <filesystem>
#include <string>

int main(int arg, char* argv[]){
    int parameterCont = 1;
    std::string argv1Parameter = argv[1];
    bool Debug = true;

    std::string arg1 = argv[1]; // para fazer a troca de char para string para o C++ moderno ler de forma facilitada 
    if (arg < 2) {
        std::cout << "Uso: " << argv[0] << " <nome_arquivo>\n";
        return 1;
    }
    
    if (std::string(argv[1]) == "-r") {
        parameterCont = 2;
        if(Debug){std::cout << "[DEBUG] Flag -r detectada\n";}
    }

    std::filesystem::path path = argv[parameterCont];

    if (std::filesystem::is_directory(path) && parameterCont == 2) {
        std::cout << "[DEBUG] Removendo diretório: " << path << "\n";
        size_t removed = std::filesystem::remove_all(path);
    }
    else if (std::filesystem::is_regular_file(path)) {
        std::cout << "[DEBUG] Removendo arquivo: " << path << "\n";
        std::filesystem::remove(path);
    }
    else {
        std::cout << "[DEBUG] Caminho inválido ou nao encontrado: " << path << "\n";
    }
}