# rm

# rm em C++

Comando `rm` do Linux recriado para Windows em C++.

---

## Como compilar

No terminal (cmd ou PowerShell), navegue até o diretório do projeto e rode:

```bash
g++ index.cpp -o rm.exe
```

---

## Como usar

No PowerShell ou cmd, execute o programa assim (atenção ao `.\` no PowerShell):

```powershell
.\rm.exe nome_do_arquivo.ext
```

Exemplo:

```powershell
.\rm.exe teste.py
```

### Remover diretórios (flag `-r`)

Para remover pastas e seu conteúdo, use a flag `-r`:

```powershell
.\rm.exe -r nome_da_pasta
```

---

## Como adicionar ao PATH (Windows)

Para facilitar a execução do comando de qualquer lugar:

1. Mova ou copie o arquivo `rm.exe` para uma pasta de sua preferência (exemplo: `C:\tools\rm`).

2. Adicione essa pasta ao PATH do Windows:

   - Pressione `Win + R`, digite `sysdm.cpl` e pressione Enter.
   - Vá na aba **Avançado** > **Variáveis de Ambiente**.
   - Em **Variáveis do sistema**, selecione a variável `Path` e clique em **Editar**.
   - Clique em **Novo** e adicione o caminho completo da pasta, ex: `C:\tools\rm`.
   - Clique em OK para fechar todas as janelas.

3. Agora abra um novo terminal e rode:

```powershell
rm.exe nome_do_arquivo.ext
```

ou para diretórios:

```powershell
rm.exe -r pasta
```

---

## Uso do `rm.bat`

Você também pode criar um arquivo `rm.bat` para facilitar a execução local:

Conteúdo do `rm.bat`:

```bat
@echo off
.\rm.exe %*
```

Coloque o `rm.bat` na mesma pasta do `rm.exe` e execute o comando no terminal como:

```powershell
rm.bat nome_do_arquivo.ext
```

---

## Observações

- Sem a flag `-r`, o programa remove apenas **arquivos**.
- Com a flag `-r`, é possível remover **diretórios e seu conteúdo**.
- Caminhos inválidos ou inexistentes não serão removidos.
- Assim como no Linux, use com cuidado, pois os arquivos/pastas removidos não vão para a lixeira.

---
