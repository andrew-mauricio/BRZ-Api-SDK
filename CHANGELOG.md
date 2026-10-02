# Histórico

## Build 25683903 — API 29 (02/10/2026)

- `Brz/Jogo/*.h` regerados para a build 25683903, pelo gerador. Os totais não mudaram (16.327 chamadas, 2.571 estáticas, 5.419 bits); mudou a procedência anotada em cada método e o seguinte:
- **A troca pela classe-mãe ficou só para quem não tem implementação própria.** Quando a chave da própria classe não estava na tabela, o gerador passava a chamar a da classe-mãe — certo para quem de fato não sobrescreve (`AActor::IsInOrOwnedBy` mora em `UObject`), errado para quem sobrescreve e só não casou naquela build: `APrimalBotCharacter::Die` virava `APrimalDinoCharacter::Die`, pulando o código do bot, sem erro nenhum. Agora, se a chave da própria classe já teve endereço em qualquer tabela, ela fica a da própria classe (e o header diz que não resolve nesta build). Desfeitas 46 trocas que já estavam no SDK da 25535041 (ex.: `AGameMode::Tick` chamava `AActor::Tick`) e evitadas 63 que esta build criaria (13 do `AShooterCharacter`).
- O comentário dos campos ancorados dizia "medido na build <atual>"; a distância vem do porte de 06/09 (24159508 → 25090264) e se resolve por nome a cada boot. O comentário agora diz isso.


## Build 25535041 — API 29 (28/09/2026)

- `Brz/Jogo/*.h` regerados para a build 25535041, pelo gerador (nunca à mão). Três leituras de ZERO caladas no gerador foram corrigidas, e elas mudavam o SDK sem erro:
  - **estáticas por nome**: o gerador marcava `static` qualquer método cujo NOME fosse estático em alguma classe do SDK de referência. `UVictoryCore::GetDefaultObject` é estática — e com isso `UClass::GetDefaultObject(bool)` (de instância) saía `static`, passando `nullptr` como `this`. Agora é por (classe, método): **79 métodos voltaram a ser de instância**, nenhum virou estático;
  - **herança vazia**: o SDK de referência era procurado num caminho que não existia; sem herança, os bits de cada classe eram repetidos em todas as filhas (21.311 declarações). Agora cada bit mora na classe que o declara e as filhas herdam (5.419);
  - **tipagem vazia**: pelo mesmo caminho morto, as classes que só o SDK de referência descreve saíam SEM métodos (`AAIController` com 0). Voltaram.
- `Brz/Campos.h`: os acessores `XField()` desreferenciavam o nulo quando o campo não existe na build (`*GetNativePointerField<T*>` com nulo = queda em `0x0`/`0x8`). Agora o campo ausente devolve o **vazio zerado** (o mesmo dos campos ancorados) e o nome vai ao log; quem precisa saber se o campo existe pergunta `GetAddress(obj, "Classe.Campo")`.
- `Brz/Campos.h`: `BitFieldValue::Estado()` devolve **-1 / 0 / 1** (campo ausente ou layout do bool não medido / falso / verdadeiro) — para quem precisa RECUSAR na dúvida, como o cofre que não guarda o que não sabe se é engrama.
- `Brz/Comum/BrzDino.h` e `BrzPluginComum.h`: os atalhos passaram a chamar os headers tipados (`bIsAdmin()` com leitura de volta, `GetAimedUseActor`, `IsA`, `MyCharacterStatusComponentField`, `BuffsField`, `StaticAddBuff`, `ProcessOrderAttackTarget`, `Destroy`, `IsDeadOrDying`). Saíram os atalhos que liam por nome (`Simbolo`, `Bit`, `EscreverBit`, `DirecaoDoOlhar`, `CosDoOlharPara` e outros sem uso).
- Chaves provadas nesta build (antes recusadas por ordem): `APrimalDinoCharacter.SetTurretMode(bool)`, `NetUpdateDinoNameStrings`, `UPrimalCharacterStatusComponent.NetSyncMaxStatusValues`, `AShooterCharacter.RenamePlayer`, entre 1.387 — ver o repositório de tabelas.

## Build 25241345 — API 29 (14/09/2026)

- `BrzPluginApi.h`: `BrzPluginDescarregar` **é chamada** desde 10/09/2026, só na recarga a quente (`Brz-Api\RECARREGAR`); o comentário que a dizia reservada foi trocado junto com o código. Continua não rodando no encerramento do processo e o DLL nunca é descarregado.
- `Brz/Comum/BrzDino.h`: `MortoOuMorrendo` pergunta primeiro à native `APrimalCharacter.IsDeadOrDying()` (casamento de bytes); o bit `bIsDead` virou reserva e, quando responde -1, avisa uma vez no log em vez de mentir. Motivo: em 12–13/09 a API mediu o layout do `FBoolProperty` cedo demais e todo bit respondia -1; `-1 != 0` fazia todo dino parecer morto.
- Tabela de símbolos da build 25241345 disponível (139.982 símbolos). Os headers não mudaram de forma; plugins compilados contra o snapshot anterior continuam válidos.

## Snapshot build 25090264 — API 29

Primeira distribuição pública desta edição: headers de `C:\ark\SDK`, biblioteca de importação do motor unificado, exemplos BrzOla e BrzDinoInfo, scripts de compilação e teste, documentação e imagens. Não inclui o motor nem altera os headers de origem.
