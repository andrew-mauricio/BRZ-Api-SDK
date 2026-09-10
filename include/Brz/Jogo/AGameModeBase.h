// ==========================================================================
//  AGameModeBase — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMEMODEBASE_H
#define BRZ_SDK_JOGO_AGAMEMODEBASE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AGameSession;
struct AGameStateBase;
struct APawn;
struct APlayerController;
struct AServerStatReplicator;
struct UClass;

#include "AInfo.h"

struct AGameModeBase : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameModeBase"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.AllowCheats(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowCheats(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.AllowCheats(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.AllowPausing(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowPausing(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.AllowPausing(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.CanServerTravel(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanServerTravel(const FString& a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "AGameModeBase.CanServerTravel(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool CanServerTravel(FString* a0, bool a1) const
    { return CanServerTravel(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AGameModeBase.CanSpectate(APlayerController*,APlayerState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanSpectate(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AGameModeBase.CanSpectate(APlayerController*,APlayerState*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ChangeName(AController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ChangeName(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AGameModeBase.ChangeName(AController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ChangeName(void* a0, FString* a1, bool a2) const
    { ChangeName(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ChoosePlayerStart(AController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    AActor* ChoosePlayerStart(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "AGameModeBase.ChoosePlayerStart(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ChoosePlayerStart_Implementation(AController*)
    // endereco: casamento de bytes com a build de referencia
    AActor* ChoosePlayerStart_Implementation(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "AGameModeBase.ChoosePlayerStart_Implementation(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ClearPause()
    // endereco: casamento de bytes com a build de referencia
    bool ClearPause() const
    {
        return NativeCall<bool>(this, "AGameModeBase.ClearPause()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AGameModeBase.DispatchPostLogin(AController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DispatchPostLogin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AGameModeBase.DispatchPostLogin(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.FindPlayerStart(AController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    AActor* FindPlayerStart(void* a0, const FString& a1) const
    {
        return NativeCall<AActor*, void*, void*>(this, "AGameModeBase.FindPlayerStart(AController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    AActor* FindPlayerStart(void* a0, FString* a1) const
    { return FindPlayerStart(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.FindPlayerStart_Implementation(AController*,FString&)
    // endereco: casamento de bytes com a build de referencia
    AActor* FindPlayerStart_Implementation(void* a0, const FString& a1) const
    {
        return NativeCall<AActor*, void*, void*>(this, "AGameModeBase.FindPlayerStart_Implementation(AController*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    AActor* FindPlayerStart_Implementation(void* a0, FString* a1) const
    { return FindPlayerStart_Implementation(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.FinishRestartPlayer(AController*,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void FinishRestartPlayer(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameModeBase.FinishRestartPlayer(AController*,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ForceClearUnpauseDelegates(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ForceClearUnpauseDelegates(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.ForceClearUnpauseDelegates(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GenericPlayerInitialization(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=83]]
    void GenericPlayerInitialization(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.GenericPlayerInitialization(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GetDefaultPawnClassForController(AController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=142+chamadores=2]]
    UClass* GetDefaultPawnClassForController(void* a0) const
    {
        return NativeCall<UClass*, void*>(this, "AGameModeBase.GetDefaultPawnClassForController(AController*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AGameModeBase.GetGameSessionClass()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=144]]
    void** GetGameSessionClass() const
    {
        return NativeCall<void**>(this, "AGameModeBase.GetGameSessionClass()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GetGameState<AShooterGameState>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameState_AShooterGameState_() const
    {
        return NativeCall<void*>(this, "AGameModeBase.GetGameState<AShooterGameState>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GetNumPlayers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    int GetNumPlayers() const
    {
        return NativeCall<int>(this, "AGameModeBase.GetNumPlayers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GetNumSpectators()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    int GetNumSpectators() const
    {
        return NativeCall<int>(this, "AGameModeBase.GetNumSpectators()");
    }

    // dump_sobre_sdk_287a0
    //   AGameModeBase.GetPlayerControllerClassToSpawnForSeamlessTravel(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void** GetPlayerControllerClassToSpawnForSeamlessTravel(void* a0) const
    {
        return NativeCall<void**, void*>(this, "AGameModeBase.GetPlayerControllerClassToSpawnForSeamlessTravel(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetSeamlessTravelActorList(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AGameModeBase.GetSeamlessTravelActorList(bool,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.HandleSeamlessTravelPlayer(AController*&)
    // endereco: casamento de bytes com a build de referencia
    void HandleSeamlessTravelPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.HandleSeamlessTravelPlayer(AController*&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.HandleStartingNewPlayer_Implementation(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void HandleStartingNewPlayer_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.HandleStartingNewPlayer_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.InitGame(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitGame(const FString& a0, const FString& a1, const FString& a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AGameModeBase.InitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitGame(FString* a0, FString* a1, FString* a2) const
    { InitGame(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.InitGameState()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void InitGameState() const
    {
        NativeCall<void>(this, "AGameModeBase.InitGameState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitNewPlayer(void* retorno, void* a0, void* a1, const FString& a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "AGameModeBase.InitNewPlayer(APlayerController*,FUniqueNetIdRepl&,FString&,FString&)", retorno, a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitNewPlayer(void* retorno, void* a0, void* a1, FString* a2, FString* a3) const
    { InitNewPlayer(retorno, a0, a1, *a2, *a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.InitSeamlessTravelPlayer(AController*)
    // endereco: casamento de bytes com a build de referencia
    void InitSeamlessTravelPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.InitSeamlessTravelPlayer(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.InitializeHUDForPlayer_Implementation(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void InitializeHUDForPlayer_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.InitializeHUDForPlayer_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.IsPaused()
    // endereco: cache_pdb_25090264
    bool IsPaused() const
    {
        return NativeCall<bool>(this, "AGameModeBase.IsPaused()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.Login(UPlayer*,ENetRole,FString&,FString&,FUniqueNetIdRepl&,FString&)
    // endereco: casamento de bytes com a build de referencia
    APlayerController* Login(void* a0, int a1, const FString& a2, const FString& a3, void* a4, const FString& a5) const
    {
        return NativeCall<APlayerController*, void*, int, void*, void*, void*, void*>(this, "AGameModeBase.Login(UPlayer*,ENetRole,FString&,FString&,FUniqueNetIdRepl&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    APlayerController* Login(void* a0, int a1, FString* a2, FString* a3, void* a4, FString* a5) const
    { return Login(a0, a1, *a2, *a3, a4, *a5); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.Logout(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88]]
    void Logout(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.Logout(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.MustSpectate(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=141+chamadores=10]]
    bool MustSpectate(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.MustSpectate(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.MustSpectate_Implementation(APlayerController*)
    // endereco: cache_pdb_25090264
    bool MustSpectate_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.MustSpectate_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PlayerCanRestart(APlayerController*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool PlayerCanRestart(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.PlayerCanRestart(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PlayerCanRestart_Implementation(APlayerController*)
    // endereco: cache_pdb_25090264
    bool PlayerCanRestart_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AGameModeBase.PlayerCanRestart_Implementation(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PostLogin(APlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=111]]
    void PostLogin(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.PostLogin(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PostSeamlessTravel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=6]]
    void PostSeamlessTravel() const
    {
        NativeCall<void>(this, "AGameModeBase.PostSeamlessTravel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "AGameModeBase.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void PreLogin(const FString& a0, const FString& a1, void* a2, const FString& a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AGameModeBase.PreLogin(FString&,FString&,FUniqueNetIdRepl&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void PreLogin(FString* a0, FString* a1, void* a2, FString* a3) const
    { PreLogin(*a0, *a1, a2, *a3); }

    // dump_sobre_sdk_287a0
    //   AGameModeBase.ProcessClientTravel(FString&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    APlayerController* ProcessClientTravel(const FString& a0, bool a1, bool a2) const
    {
        return NativeCall<APlayerController*, void*, bool, bool>(this, "AGameModeBase.ProcessClientTravel(FString&,bool,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    APlayerController* ProcessClientTravel(FString* a0, bool a1, bool a2) const
    { return ProcessClientTravel(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ProcessServerTravel(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessServerTravel(const FString& a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AGameModeBase.ProcessServerTravel(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessServerTravel(FString* a0, bool a1) const
    { ProcessServerTravel(*a0, a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ReplicateStreamingStatus(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void ReplicateStreamingStatus(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.ReplicateStreamingStatus(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ResetLevel()
    // endereco: casamento de bytes com a build de referencia
    void ResetLevel() const
    {
        NativeCall<void>(this, "AGameModeBase.ResetLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.RestartPlayer(AController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=57]]
    void RestartPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.RestartPlayer(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.RestartPlayerAtPlayerStart(AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void RestartPlayerAtPlayerStart(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameModeBase.RestartPlayerAtPlayerStart(AController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.RestartPlayerAtTransform(AController*,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    void RestartPlayerAtTransform(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameModeBase.RestartPlayerAtTransform(AController*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.ShouldStartInCinematicMode(APlayerController*,bool&,bool&,bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldStartInCinematicMode(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<bool, void*, void*, void*, void*, void*>(this, "AGameModeBase.ShouldStartInCinematicMode(APlayerController*,bool&,bool&,bool&,bool&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SpawnDefaultPawnAtTransform(AController*,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    APawn* SpawnDefaultPawnAtTransform(void* a0, void* a1) const
    {
        return NativeCall<APawn*, void*, void*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform(AController*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SpawnDefaultPawnAtTransform_Implementation(AController*,UE::Math::TTransform<doubl
    // endereco: casamento de bytes com a build de referencia
    APawn* SpawnDefaultPawnAtTransform_Implementation(void* a0, void* a1) const
    {
        return NativeCall<APawn*, void*, void*>(this, "AGameModeBase.SpawnDefaultPawnAtTransform_Implementation(AController*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SpawnDefaultPawnFor_Implementation(AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    APawn* SpawnDefaultPawnFor_Implementation(void* a0, void* a1) const
    {
        return NativeCall<APawn*, void*, void*>(this, "AGameModeBase.SpawnDefaultPawnFor_Implementation(AController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SpawnPlayerController(ENetRole,FString&)
    // endereco: casamento de bytes com a build de referencia
    APlayerController* SpawnPlayerController(int a0, const FString& a1) const
    {
        return NativeCall<APlayerController*, int, void*>(this, "AGameModeBase.SpawnPlayerController(ENetRole,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    APlayerController* SpawnPlayerController(int a0, FString* a1) const
    { return SpawnPlayerController(a0, *a1); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SpawnPlayerControllerCommon(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator
    // endereco: casamento de bytes com a build de referencia
    APlayerController* SpawnPlayerControllerCommon(int a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<APlayerController*, int, void*, void*, void*>(this, "AGameModeBase.SpawnPlayerControllerCommon(ENetRole,UE::Math::TVector<double>&,UE::Math::TRotator<double>&,TSubclassOf<APlayerController>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.SwapPlayerControllers(APlayerController*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void SwapPlayerControllers(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AGameModeBase.SwapPlayerControllers(APlayerController*,APlayerController*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.UpdateGameplayMuteList(APlayerController*)
    // endereco: cache_pdb_25090264
    void UpdateGameplayMuteList(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameModeBase.UpdateGameplayMuteList(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameModeBase.UpdatePlayerStartSpot(AController*,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    bool UpdatePlayerStartSpot(void* a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "AGameModeBase.UpdatePlayerStartSpot(AController*,FString&,FString&)", a0, const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool UpdatePlayerStartSpot(void* a0, FString* a1, FString* a2) const
    { return UpdatePlayerStartSpot(a0, *a1, *a2); }

    BrzCampoPonteiro DefaultPawnClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.DefaultPawnClass")); }
    BrzCampoPonteiro DefaultPlayerNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.DefaultPlayerName")); }
    BrzCampoPonteiro GameNetDriverReplicationSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.GameNetDriverReplicationSystem")); }
    TObjectPtr<AGameSession>& GameSessionField() const
    { return *GetNativePointerField<TObjectPtr<AGameSession>*>(this, "AGameModeBase.GameSession"); }
    BrzCampoPonteiro GameSessionClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.GameSessionClass")); }
    TObjectPtr<AGameStateBase>& GameStateField() const
    { return *GetNativePointerField<TObjectPtr<AGameStateBase>*>(this, "AGameModeBase.GameState"); }
    BrzCampoPonteiro GameStateClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.GameStateClass")); }
    BrzCampoPonteiro HUDClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.HUDClass")); }
    FString& OptionsStringField() const
    { return *GetNativePointerField<FString*>(this, "AGameModeBase.OptionsString"); }
    BrzCampoPonteiro PlayerControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.PlayerControllerClass")); }
    BrzCampoPonteiro PlayerStateClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.PlayerStateClass")); }
    BrzCampoPonteiro ReplaySpectatorPlayerControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.ReplaySpectatorPlayerControllerClass")); }
    TObjectPtr<AServerStatReplicator>& ServerStatReplicatorField() const
    { return *GetNativePointerField<TObjectPtr<AServerStatReplicator>*>(this, "AGameModeBase.ServerStatReplicator"); }
    BrzCampoPonteiro ServerStatReplicatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.ServerStatReplicatorClass")); }
    BrzCampoPonteiro SpectatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameModeBase.SpectatorClass")); }
    BitFieldValue<bool, unsigned __int32> bUseSeamlessTravel()
    { return { (void*)this, "bUseSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bStartPlayersAsSpectators()
    { return { (void*)this, "bStartPlayersAsSpectators" }; }
    BitFieldValue<bool, unsigned __int32> bPauseable()
    { return { (void*)this, "bPauseable" }; }

};

#endif  // BRZ_SDK_JOGO_AGAMEMODEBASE_H
