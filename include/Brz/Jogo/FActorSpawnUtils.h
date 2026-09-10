// ==========================================================================
//  FActorSpawnUtils — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
//
//  BRZ Api — MIT, Copyright (c) 2026 andrew-mauricio.
//
//  Uma casca sobre `void*`: sem vtable, sem membro, nada do nosso codigo dentro
//  do seu DLL alem de `inline`. Voce compila com o compilador que quiser.
//
//  O CAMPO e' resolvido pelo NOME, em tempo de execucao, pela reflexao viva da
//  build que esta' rodando — e nao por offset cravado aqui, que apodreceria na
//  proxima atualizacao do jogo sem ninguem notar.
//
//  A FUNCAO vem da tabela de simbolos desta build. Simbolo que so' existe por
//  inferencia de posicao e' RECUSADO com o nome no log, em vez de chutado: um
//  endereco errado nao devolve valor esquisito, ele derruba o servidor ou faz
//  outra coisa com sucesso.
// ==========================================================================
#ifndef BRZ_SDK_JOGO_FACTORSPAWNUTILS_H
#define BRZ_SDK_JOGO_FACTORSPAWNUTILS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FActorSpawnUtils
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorSpawnUtils"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorSpawnUtils.IsGloballyUniqueName(FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsGloballyUniqueName(unsigned long long a0)
    {
        return NativeCall<void*, unsigned long long>(nullptr, "FActorSpawnUtils.IsGloballyUniqueName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorSpawnUtils.MakeUniqueActorName(ULevel*,UClass*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro MakeUniqueActorName(void* a0, void* a1, unsigned long long a2, bool a3)
    {
        return NativeCall<void*, void*, void*, unsigned long long, bool>(nullptr, "FActorSpawnUtils.MakeUniqueActorName(ULevel*,UClass*,FName,bool)", a0, a1, a2, a3);
    }

};

#endif  // BRZ_SDK_JOGO_FACTORSPAWNUTILS_H
