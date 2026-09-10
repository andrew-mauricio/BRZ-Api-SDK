// ==========================================================================
//  AGameState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMESTATE_H
#define BRZ_SDK_JOGO_AGAMESTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "AGameStateBase.h"

struct AGameState : public AGameStateBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameState"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.DefaultTimer()
    // endereco: casamento de bytes com a build de referencia
    void DefaultTimer() const
    {
        NativeCall<void>(this, "AGameState.DefaultTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.GetPlayerRespawnDelay(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=248]]
    float GetPlayerRespawnDelay(void* a0) const
    {
        return NativeCall<float, void*>(this, "AGameState.GetPlayerRespawnDelay(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.GetPlayerStartTime(AController*)
    // endereco: cache_pdb_25090264
    float GetPlayerStartTime(void* a0) const
    {
        return NativeCall<float, void*>(this, "AGameState.GetPlayerStartTime(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.HandleMatchHasStarted()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    void HandleMatchHasStarted() const
    {
        NativeCall<void>(this, "AGameState.HandleMatchHasStarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.HandleMatchIsWaitingToStart()
    // endereco: casamento de bytes com a build de referencia
    void HandleMatchIsWaitingToStart() const
    {
        NativeCall<void>(this, "AGameState.HandleMatchIsWaitingToStart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.OnRep_MatchState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=153]]
    void OnRep_MatchState() const
    {
        NativeCall<void>(this, "AGameState.OnRep_MatchState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AGameState.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameState.ReceivedGameModeClass()
    // endereco: casamento de bytes com a build de referencia
    void ReceivedGameModeClass() const
    {
        NativeCall<void>(this, "AGameState.ReceivedGameModeClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AGameState.SetMatchState(FName)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetMatchState(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "AGameState.SetMatchState(FName)", a0);
    }

    int& ElapsedTimeField() const
    { return *GetNativePointerField<int*>(this, "AGameState.ElapsedTime"); }
    FName& MatchStateField() const
    { return *GetNativePointerField<FName*>(this, "AGameState.MatchState"); }
    FName& PreviousMatchStateField() const
    { return *GetNativePointerField<FName*>(this, "AGameState.PreviousMatchState"); }
};

#endif  // BRZ_SDK_JOGO_AGAMESTATE_H
