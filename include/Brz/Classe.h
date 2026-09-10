// ═══════════════════════════════════════════════════════════════════════════════
//  Classe.h — `X::StaticClass()`, resolvido pela reflexao viva
//
//  Todo plugin de ARK escreve
//
//      if (ator->IsA(APrimalStructure::StaticClass())) ...
//
//  Em outras APIs isso devolve um ponteiro que veio de um dump. Aqui a classe e'
//  procurada pelo NOME, na reflexao do jogo que esta' rodando: o mesmo nome vale
//  em toda build, e nenhum numero envelhece entre atualizacoes.
//
//  Quando a classe nao existe nesta build, volta nulo — e `IsA(nullptr)` e' falso,
//  que e' a resposta certa para "e' de um tipo que nao existe aqui".
// ═══════════════════════════════════════════════════════════════════════════════
#ifndef BRZ_SDK_CLASSE_H
#define BRZ_SDK_CLASSE_H

#include "Base.h"

struct UClass;

BRZ_API UClass* BrzClassePorNome(const char* nome);

// ── `ator->IsA(X::StaticClass())` ──────────────────────────────────────────
//
//  Pergunta se o objeto DESCENDE da classe, e nao se e' exatamente ela: um
//  `Wyvern_Character_BP_Fire_C` tem de responder `true` para
//  `APrimalDinoCharacter::StaticClass()`. Comparar so' a classe imediata faria a
//  metade dos atores do mundo escapar do teste, e o plugin nao veria nada errado.
//
//  Classe nula devolve falso — e' a resposta certa para "e' de um tipo que nao
//  existe nesta build", e evita que quem esqueceu de conferir escreva num objeto
//  do tipo errado.
BRZ_API bool BrzEhDaClasse(const void* objeto, const UClass* classe);

#endif  // BRZ_SDK_CLASSE_H
