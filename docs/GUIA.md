# Guia de desenvolvimento

## Compilar

Use Windows x64, MSVC com suporte a C++17, Windows SDK e o componente C++ do Visual Studio. Execute `tools\build-examples.bat` no Prompt de Comando. O script configura `vcvars64.bat` automaticamente.

Para aproveitar uma instalação existente sem copiar seus headers:

```bat
set "BRZ_SDK_ROOT=C:\ark\SDK"
set "BRZ_LIB_DIR=C:\ark\compilados\lib"
set "BRZ_OUTPUT_DIR=C:\ark\compilados\publicacao-sdk"
tools\build-examples.bat
tools\test-examples.bat
```

`BRZ_SDK_ROOT` aponta para a pasta que contém `include`. `BRZ_LIB_DIR` contém `winmm.lib`. Sem essas variáveis, o pacote usa seus próprios arquivos e grava em `build\plugins`.

## Criar seu plugin

Parta do BrzOla para serviços da tabela, ou do BrzDinoInfo para acesso tipado ao jogo. Renomeie a pasta, os comandos, o nome passado a `CaminhoConfig` e os metadados juntos. Acrescente seu projeto à lista de compilação do script ou configure um projeto DLL x64 no Visual Studio com os mesmos includes, biblioteca e opções.

Exporte `BrzPluginCarregar(const BrzApiTabela*)` e `BrzPluginDescarregar()` com ligação C. Valide tamanho, versão e funções necessárias da tabela antes de usá-la. Registre callbacks somente após validar a configuração. Se um registro falhar, desfaça os anteriores. Ao descarregar, remova todos os registros que o plugin criou.

Leia o novo JSON para variáveis temporárias, valide os tipos e só então troque a configuração ativa. Não guarde ponteiros para objetos do jogo além de seu ciclo de vida. Operações no jogo precisam respeitar a thread e o contexto exigidos pelo motor; um worker genérico não torna essas operações seguras.

## Bibliotecas e contratos

`winmm.lib` resolve símbolos implementados pelo `winmm.dll` da BRZ Api. Não é a biblioteca de multimídia padrão do Windows, apesar do nome. Configure o diretório da biblioteca fornecida, como faz o script. Plugins que chamam somente ponteiros da tabela podem não importar funções do motor diretamente; o BrzDinoInfo demonstra o caminho tipado que importa.

O caminho C++ tipado depende de ABI, layout, build e motor compatíveis. Os comentários sobre uma tabela C não significam que todos os tipos C++ sejam portáveis entre compiladores. O alvo verificado desta entrega é MSVC x64.

## Instalar e exercitar

Em um servidor de teste com o motor BRZ Api compatível, use a estrutura de plugins esperada por essa instalação, normalmente `Brz-Api\Plugins\<Nome>`. Entregue a DLL, `config.json` e `PluginInfo.json`; o PDB pode acompanhar para diagnóstico. Não distribua `.obj`, `.exp` ou a `.lib` intermediária do plugin como dependências de execução.

Carregue pelo procedimento suportado pelo motor e confira os logs de registro. Teste os comandos dos exemplos, o reload válido e inválido e o descarregamento. Não substitua uma DLL que está carregada. O teste automatizado deste pacote não instala plugins e não se conecta por RCON.

## Diagnóstico

| Sintoma | Verificação |
|---|---|
| Include não encontrado | SDK root deve conter `include\Brz` |
| `vswhere` ou compilador ausente | Instale o componente C++ e Windows SDK |
| Símbolo externo não resolvido | Caminho da `winmm.lib`, arquitetura x64 e motor da mesma edição |
| DLL não carrega | Dependências, exportações e versão/tamanho da tabela |
| Código compila, chamada falha no jogo | Assinatura, validade do objeto, thread, build, endereço e layout |

Não contorne uma incompatibilidade alterando casts ou offsets por tentativa. Reduza a um caso reproduzível e verifique o contrato na versão alvo.

## Baixar o motor

O pacote de execução e o guia de instalação estão no [repositório BRZ Api](https://github.com/andrew-mauricio/BRZ-Api). Use a edição correspondente ao SDK e ao jogo.
