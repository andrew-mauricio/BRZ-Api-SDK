// ==========================================================================
//  UShooterPendingNetGame — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERPENDINGNETGAME_H
#define BRZ_SDK_JOGO_USHOOTERPENDINGNETGAME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UNetDriver;


struct UShooterPendingNetGame
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterPendingNetGame"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPendingNetGame.GetPlatformAuthToken()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=241+grafo=3/3]]
    BrzPonteiro GetPlatformAuthToken() const
    {
        return NativeCall<void*>(this, "UShooterPendingNetGame.GetPlatformAuthToken()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPendingNetGame.IsUsingSharedAccount(FUniqueNetIdRepl&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=214+grafo=3/3]]
    BrzPonteiro IsUsingSharedAccount(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterPendingNetGame.IsUsingSharedAccount(FUniqueNetIdRepl&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPendingNetGame.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyControlMessage(void* a0, unsigned char a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned char, void*>(this, "UShooterPendingNetGame.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterPendingNetGame.SendInitialJoin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SendInitialJoin() const
    {
        return NativeCall<void*>(this, "UShooterPendingNetGame.SendInitialJoin()");
    }

    BrzCampoPonteiro DemoNetDriverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterPendingNetGame.DemoNetDriver")); }
    TObjectPtr<UNetDriver>& NetDriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UShooterPendingNetGame.NetDriver"); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERPENDINGNETGAME_H
