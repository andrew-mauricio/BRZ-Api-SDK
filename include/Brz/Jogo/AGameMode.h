// ==========================================================================
//  AGameMode — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMEMODE_H
#define BRZ_SDK_JOGO_AGAMEMODE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "AGameModeBase.h"

struct AGameMode : public AGameModeBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameMode"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.AddInactivePlayer(APlayerState*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void AddInactivePlayer(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameMode.AddInactivePlayer(APlayerState*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.Broadcast(AActor*,FString&,FName)
    // endereco: casamento de bytes com a build de referencia
    void Broadcast(void* a0, const FString& a1, unsigned long long a2) const
    {
        NativeCall<void, void*, void*, unsigned long long>(this, "AGameMode.Broadcast(AActor*,FString&,FName)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Broadcast(void* a0, FString* a1, unsigned long long a2) const
    { Broadcast(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.BroadcastLocalized(AActor*,TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,
    // endereco: casamento de bytes com a build de referencia
    void BroadcastLocalized(void* a0, void* a1, int a2, void* a3, void* a4, void* a5) const
    {
        NativeCall<void, void*, void*, int, void*, void*, void*>(this, "AGameMode.BroadcastLocalized(AActor*,TSubclassOf<ULocalMessage>,int,APlayerState*,APlayerState*,UObject*)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.CanServerTravel(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanServerTravel(const FString& a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "AGameMode.CanServerTravel(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool CanServerTravel(FString* a0, bool a1) const
    { return CanServerTravel(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.EndMatch()
    // endereco: casamento de bytes com a build de referencia
    void EndMatch() const
    {
        NativeCall<void>(this, "AGameMode.EndMatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.FindInactivePlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool FindInactivePlayer(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameMode.FindInactivePlayer(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.GetNetworkNumber()
    // endereco: casamento de bytes com a build de referencia
    void GetNetworkNumber(void* retorno) const
    {
        NativeCall<void, void*>(this, "AGameMode.GetNetworkNumber()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.GetNumPlayers()
    // classe: a funcao mora em AGameModeBase, e AGameMode herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    int GetNumPlayers() const
    {
        return NativeCall<int>(this, "AGameModeBase.GetNumPlayers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.GetNumSpectators()
    // classe: a funcao mora em AGameModeBase, e AGameMode herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    int GetNumSpectators() const
    {
        return NativeCall<int>(this, "AGameModeBase.GetNumSpectators()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleDisconnect(UWorld*,UNetDriver*)
    // endereco: cache_pdb_25090264
    void HandleDisconnect(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameMode.HandleDisconnect(UWorld*,UNetDriver*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleMatchHasEnded()
    // endereco: casamento de bytes com a build de referencia
    void HandleMatchHasEnded() const
    {
        NativeCall<void>(this, "AGameMode.HandleMatchHasEnded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleMatchHasStarted()
    // endereco: casamento de bytes com a build de referencia
    void HandleMatchHasStarted() const
    {
        NativeCall<void>(this, "AGameMode.HandleMatchHasStarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleMatchIsWaitingToStart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=74]]
    void HandleMatchIsWaitingToStart() const
    {
        NativeCall<void>(this, "AGameMode.HandleMatchIsWaitingToStart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleSeamlessTravelPlayer(AController*&)
    // endereco: casamento de bytes com a build de referencia
    void HandleSeamlessTravelPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.HandleSeamlessTravelPlayer(AController*&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.HandleStartingNewPlayer_Implementation(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=142]]
    void HandleStartingNewPlayer_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.HandleStartingNewPlayer_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.InitGame(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitGame(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AGameMode.InitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitGame(FString* a0, FString* a1, FString* a2) const
    { InitGame(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.InitSeamlessTravelPlayer(AController*)
    // endereco: casamento de bytes com a build de referencia
    void InitSeamlessTravelPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.InitSeamlessTravelPlayer(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.IsHandlingReplays()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    bool IsHandlingReplays() const
    {
        return NativeCall<bool>(this, "AGameMode.IsHandlingReplays()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.Logout(AController*)
    // endereco: casamento de bytes com a build de referencia
    void Logout(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.Logout(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.OnMatchStateSet()
    // endereco: casamento de bytes com a build de referencia
    void OnMatchStateSet() const
    {
        NativeCall<void>(this, "AGameMode.OnMatchStateSet()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.PlayerCanRestart_Implementation(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool PlayerCanRestart_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameMode.PlayerCanRestart_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.PostLogin(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void PostLogin(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.PostLogin(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.PostSeamlessTravel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=6]]
    void PostSeamlessTravel() const
    {
        NativeCall<void>(this, "AGameMode.PostSeamlessTravel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.ReadyToStartMatch()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ReadyToStartMatch() const
    {
        return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.ReadyToStartMatch_Implementation()
    // endereco: cache_pdb_25090264
    bool ReadyToStartMatch_Implementation() const
    {
        return NativeCall<bool>(this, "AGameMode.ReadyToStartMatch_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.RestartGame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void RestartGame() const
    {
        NativeCall<void>(this, "AGameMode.RestartGame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.Say(FString&)
    // endereco: cache_pdb_25090264
    void Say(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.Say(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Say(FString* a0) const
    { Say(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.SetMatchState(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void SetMatchState(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AGameMode.SetMatchState(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.SetSeamlessTravelViewTarget(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SetSeamlessTravelViewTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameMode.SetSeamlessTravelViewTarget(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.StartMatch()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void StartMatch() const
    {
        NativeCall<void>(this, "AGameMode.StartMatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.StartPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=93]]
    void StartPlay() const
    {
        NativeCall<void>(this, "AGameMode.StartPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameMode.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AGameMode.Tick(float)", a0);
    }

    BrzCampoPonteiro EngineMessageClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameMode.EngineMessageClass")); }
    TArray<void*>& InactivePlayerArrayField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AGameMode.InactivePlayerArray"); }
    float& InactivePlayerStateLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AGameMode.InactivePlayerStateLifeSpan"); }
    FName& MatchStateField() const
    { return *GetNativePointerField<FName*>(this, "AGameMode.MatchState"); }
    int& MaxInactivePlayersField() const
    { return *GetNativePointerField<int*>(this, "AGameMode.MaxInactivePlayers"); }
    float& MinRespawnDelayField() const
    { return *GetNativePointerField<float*>(this, "AGameMode.MinRespawnDelay"); }
    int& NumBotsField() const
    { return *GetNativePointerField<int*>(this, "AGameMode.NumBots"); }
    int& NumPlayersField() const
    { return *GetNativePointerField<int*>(this, "AGameMode.NumPlayers"); }
    int& NumSpectatorsField() const
    { return *GetNativePointerField<int*>(this, "AGameMode.NumSpectators"); }
    int& NumTravellingPlayersField() const
    { return *GetNativePointerField<int*>(this, "AGameMode.NumTravellingPlayers"); }
    BitFieldValue<bool, unsigned __int32> bDelayedStart()
    { return { (void*)this, "bDelayedStart" }; }
    BitFieldValue<bool, unsigned __int32> bHandleDedicatedServerReplays()
    { return { (void*)this, "bHandleDedicatedServerReplays" }; }

};

#endif  // BRZ_SDK_JOGO_AGAMEMODE_H
