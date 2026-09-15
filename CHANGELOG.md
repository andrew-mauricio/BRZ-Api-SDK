# Histórico

## Build 25241345 — API 29 (14/09/2026)

- `BrzPluginApi.h`: `BrzPluginDescarregar` **é chamada** desde 10/09/2026, só na recarga a quente (`Brz-Api\RECARREGAR`); o comentário que a dizia reservada foi trocado junto com o código. Continua não rodando no encerramento do processo e o DLL nunca é descarregado.
- `Brz/Comum/BrzDino.h`: `MortoOuMorrendo` pergunta primeiro à native `APrimalCharacter.IsDeadOrDying()` (casamento de bytes); o bit `bIsDead` virou reserva e, quando responde -1, avisa uma vez no log em vez de mentir. Motivo: em 12–13/09 a API mediu o layout do `FBoolProperty` cedo demais e todo bit respondia -1; `-1 != 0` fazia todo dino parecer morto.
- Tabela de símbolos da build 25241345 disponível (139.982 símbolos). Os headers não mudaram de forma; plugins compilados contra o snapshot anterior continuam válidos.

## Snapshot build 25090264 — API 29

Primeira distribuição pública desta edição: headers de `C:\ark\SDK`, biblioteca de importação do motor unificado, exemplos BrzOla e BrzDinoInfo, scripts de compilação e teste, documentação e imagens. Não inclui o motor nem altera os headers de origem.
