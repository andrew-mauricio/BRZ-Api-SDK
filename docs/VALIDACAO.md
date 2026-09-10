# Validação desta distribuição

Executada no Windows de desenvolvimento, com MSVC x64, C++17 e `/MT`, usando os headers de `C:\ark\SDK` e `C:\ark\compilados\lib\winmm.lib`.

| Verificação | Resultado |
|---|---|
| Compilação e link dos dois exemplos | Passou |
| Análise sintática do agregador `Brz/Ark.h` junto à tabela | Passou |
| BrzOla carregado por um processo de teste Windows | Passou |
| Configuração inválida impede registro inicial | Passou |
| Resposta do comando e reload válido | Passou |
| Reload inválido preserva configuração anterior | Passou |
| Descarregamento remove comandos e tolera repetição | Passou |
| BrzDinoInfo importa `winmm.dll` | Passou |

Reprodução: `tools\build-examples.bat`, seguido por `tools\test-examples.bat`. O teste de carga usa uma tabela simulada, sem motor e sem servidor. Os arquivos temporários ficam na pasta de saída dos testes.

## Limites da prova

Não foi executado teste de gameplay, de `IsBaby()` em dinossauro real, nem varredura de todas as funções/endereço/offset/tipo do jogo nesta publicação. A análise conjunta dos headers não é compilação isolada de cada header. Também não foram testados todos os compiladores, outros builds ou compatibilidade binária com plugins de terceiros.

O código fonte de origem contém comentários históricos e conhecimento de diferentes etapas do desenvolvimento. Compilação bem-sucedida não elimina eventuais lacunas de resolução ou tipagem. Trate cada nova chamada como um contrato a validar no motor e jogo correspondentes.

`inventario-sdk.json` registra hashes SHA-256 e tamanhos dos arquivos distribuídos do SDK e da biblioteca de importação. A release fornece também o hash do ZIP completo.
