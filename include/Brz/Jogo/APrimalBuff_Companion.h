// ==========================================================================
//  APrimalBuff_Companion — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_COMPANION_H
#define BRZ_SDK_JOGO_APRIMALBUFF_COMPANION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AShooterHUD;
struct FName;
struct UAudioComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UParticleSystemComponent;
struct USceneComponent;
struct USoundAttenuation;
struct USoundCue;
struct USoundWave;
struct USphereComponent;
struct UTexture2D;

#include "APrimalBuff.h"

struct APrimalBuff_Companion : public APrimalBuff
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_Companion"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.AddCompanionReaction(FCompanionReactionData&,bool,UMaterialInterface*,int)
    // endereco: casamento de bytes com a build de referencia
    void AddCompanionReaction(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "APrimalBuff_Companion.AddCompanionReaction(FCompanionReactionData&,bool,UMaterialInterface*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.AddCompanionReaction_Internal(FCompanionReactionData&,bool,UMaterialInterf
    // endereco: casamento de bytes com a build de referencia
    void AddCompanionReaction_Internal(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "APrimalBuff_Companion.AddCompanionReaction_Internal(FCompanionReactionData&,bool,UMaterialInterface*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.AnimateInHLNASubtitleIcon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    void AnimateInHLNASubtitleIcon() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.AnimateInHLNASubtitleIcon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.AnimateOutHLNASubtitleIcon()
    // endereco: casamento de bytes com a build de referencia
    void AnimateOutHLNASubtitleIcon() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.AnimateOutHLNASubtitleIcon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.BPServerside_IsPerMapExplorerNoteUnlocked(int,bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    void BPServerside_IsPerMapExplorerNoteUnlocked(int a0, void* a1, void* a2) const
    {
        NativeCall<void, int, void*, void*>(this, "APrimalBuff_Companion.BPServerside_IsPerMapExplorerNoteUnlocked(int,bool&,bool&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.CanPlayCompanionReaction(FCompanionReactionData&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=345+grafo=5/5]]
    bool CanPlayCompanionReaction(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction(FCompanionReactionData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.CanPlayCompanionReaction_Implementation(FCompanionReactionData&)
    // endereco: casamento de bytes com a build de referencia
    bool CanPlayCompanionReaction_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Companion.CanPlayCompanionReaction_Implementation(FCompanionReactionData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction(FCompanionReactionData&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CanPlayEnvironmentalCompanionReaction(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Companion.CanPlayEnvironmentalCompanionReaction(FCompanionReactionData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.CanRemotelyFocusOnRemoteActorForTooltip(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool CanRemotelyFocusOnRemoteActorForTooltip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Companion.CanRemotelyFocusOnRemoteActorForTooltip(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.CanStartCompanionEvent(AActor*,FCompanionEventData&)
    // endereco: casamento de bytes com a build de referencia
    bool CanStartCompanionEvent(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalBuff_Companion.CanStartCompanionEvent(AActor*,FCompanionEventData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.CanStartCompanionEvent_Implementation(AActor*,FCompanionEventData&)
    // endereco: casamento de bytes com a build de referencia
    bool CanStartCompanionEvent_Implementation(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalBuff_Companion.CanStartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ClientAllowVRTeleport_Implementation()
    // endereco: cache_pdb_25090264
    void ClientAllowVRTeleport_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.ClientAllowVRTeleport_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ClientOutputAsyncLoadedFiles_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientOutputAsyncLoadedFiles_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.ClientOutputAsyncLoadedFiles_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.ClientToggleForceMonologue(bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientToggleForceMonologue(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ClientToggleForceMonologue_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ClientToggleForceMonologue_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff_Companion.ClientToggleForceMonologue_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Client_AddCompanionReaction(FCompanionReactionData,bool,UMaterialInterface
    // endereco: casamento de bytes com a build de referencia
    void Client_AddCompanionReaction(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction(FCompanionReactionData,bool,UMaterialInterface*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Client_AddCompanionReaction_Implementation(FCompanionReactionData,bool,UMa
    // endereco: casamento de bytes com a build de referencia
    void Client_AddCompanionReaction_Implementation(void* a0, bool a1, void* a2, int a3) const
    {
        NativeCall<void, void*, bool, void*, int>(this, "APrimalBuff_Companion.Client_AddCompanionReaction_Implementation(FCompanionReactionData,bool,UMaterialInterface*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Deactivate()
    // endereco: casamento de bytes com a build de referencia
    void Deactivate() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.Deactivate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.DrawFocusedActorToolTip(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void DrawFocusedActorToolTip(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.DrawFocusedActorToolTip(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.FinishAsyncLoading()
    // endereco: casamento de bytes com a build de referencia
    void FinishAsyncLoading() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.FinishAsyncLoading()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.FocusOnRemoteTarget()
    // endereco: cache_pdb_25090264
    void FocusOnRemoteTarget() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.FocusOnRemoteTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.ForceHibernateAtLocation(UE::Math::TVector<double>,TArray<AActor*,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceHibernateAtLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Companion.ForceHibernateAtLocation(UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ForceUnhibernateAtLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    long long ForceUnhibernateAtLocation(void* a0) const
    {
        return NativeCall<long long, void*>(this, "APrimalBuff_Companion.ForceUnhibernateAtLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.GetAllExplorerNotesInWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllExplorerNotesInWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Companion.GetAllExplorerNotesInWorld(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    bool GetClosestNearbyPointOfInterest(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalBuff_Companion.GetClosestNearbyPointOfInterest(FPointOfInterestData_ForCompanion&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.GetCompanionWorldLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCompanionWorldLocation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Companion.GetCompanionWorldLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.GetCurrentCompanionEventData()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetCurrentCompanionEventData() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Companion.GetCurrentCompanionEventData()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.GetCurrentCompanionReactionData()
    // endereco: casamento de bytes com a build de referencia
    void GetCurrentCompanionReactionData(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.GetCurrentCompanionReactionData()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.GetInterpolatedLocation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInterpolatedLocation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Companion.GetInterpolatedLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalBuff_Companion.GetMyPlayerHUD()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    AShooterHUD* GetMyPlayerHUD() const
    {
        return NativeCall<AShooterHUD*>(this, "APrimalBuff_Companion.GetMyPlayerHUD()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.GetPointCompanionWorldOrbitOrigin(FPointOfInterestData_ForCompanion&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPointCompanionWorldOrbitOrigin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Companion.GetPointCompanionWorldOrbitOrigin(FPointOfInterestData_ForCompanion&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.GetTradeOptionsAvailable_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTradeOptionsAvailable_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Companion.GetTradeOptionsAvailable_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.HasCompanionReachedPointOrbit(FPointOfInterestData_ForCompanion&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasCompanionReachedPointOrbit(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit(FPointOfInterestData_ForCompanion&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.HasCompanionReachedPointOrbit_Implementation(FPointOfInterestData_ForCompa
    // endereco: casamento de bytes com a build de referencia
    bool HasCompanionReachedPointOrbit_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Companion.HasCompanionReachedPointOrbit_Implementation(FPointOfInterestData_ForCompanion&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.IsCompanionAbleToMonologue()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsCompanionAbleToMonologue() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionAbleToMonologue()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.IsCompanionReadyToMonologue()
    // endereco: casamento de bytes com a build de referencia
    bool IsCompanionReadyToMonologue() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Companion.IsCompanionReadyToMonologue()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.IsPlayerADS_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    bool IsPlayerADS_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayerADS_Implementation()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.IsPlayerLookingAtCompanion_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    bool IsPlayerLookingAtCompanion_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayerLookingAtCompanion_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.IsPlayingCompanionReaction()
    // endereco: casamento de bytes com a build de referencia
    bool IsPlayingCompanionReaction() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Companion.IsPlayingCompanionReaction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.LoadAudioTimeout()
    // endereco: casamento de bytes com a build de referencia
    void LoadAudioTimeout() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.LoadAudioTimeout()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Net_SetCompanionState(TEnumAsByte<ECompanionState::Type>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void Net_SetCompanionState(unsigned char a0) const
    {
        NativeCall<void, unsigned char>(this, "APrimalBuff_Companion.Net_SetCompanionState(TEnumAsByte<ECompanionState::Type>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter>)
    // endereco: casamento de bytes com a build de referencia
    void NotifyHasTamedDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.NotifyHasTamedDino(TSubclassOf<APrimalDinoCharacter>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger_Implementation(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=22]]
    void OnBeginOverlapCompanionEventTrigger_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.OnBeginOverlapCompanionEventTrigger_Implementation(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.OnCompanionEventEnded(FCompanionEventData&)
    // endereco: cache_pdb_25090264
    void OnCompanionEventEnded(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.OnCompanionEventEnded(FCompanionEventData&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.OnCompanionReactionPlayed(FCompanionReactionData&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=351+grafo=5/5]]
    void OnCompanionReactionPlayed(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed(FCompanionReactionData&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnCompanionReactionPlayed_Implementation(FCompanionReactionData&,int)
    // endereco: cache_pdb_25090264
    void OnCompanionReactionPlayed_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBuff_Companion.OnCompanionReactionPlayed_Implementation(FCompanionReactionData&,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.OnCompanionReactionStopped(FCompanionReactionData&,int)
    // endereco: cache_pdb_25090264
    void OnCompanionReactionStopped(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped(FCompanionReactionData&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnCompanionReactionStopped_Implementation(FCompanionReactionData&,int)
    // endereco: casamento de bytes com a build de referencia
    void OnCompanionReactionStopped_Implementation(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBuff_Companion.OnCompanionReactionStopped_Implementation(FCompanionReactionData&,int)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.OnCompanionStateChanged()
    // endereco: casamento de bytes com a build de referencia
    void OnCompanionStateChanged() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.OnCompanionStateChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger_Implementation(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=9]]
    void OnEndOverlapCompanionEventTrigger_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.OnEndOverlapCompanionEventTrigger_Implementation(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.OnFoundPoI(FPointOfInterestData_ForCompanion&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void OnFoundPoI(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Companion.OnFoundPoI(FPointOfInterestData_ForCompanion&,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void OnFoundPoI_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Companion.OnFoundPoI_Implementation(FPointOfInterestData_ForCompanion&,AActor*)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.OnMadeHexagonPurchase()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void OnMadeHexagonPurchase() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.OnMadeHexagonPurchase()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData*,AMission
    // endereco: casamento de bytes com a build de referencia
    void OnMyPlayerMissionComplete_Implementation(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalBuff_Companion.OnMyPlayerMissionComplete_Implementation(APrimalBuff_MissionData*,AMissionType*,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData*,AMissionT
    // endereco: casamento de bytes com a build de referencia
    void OnMyPlayerMissionStarted_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Companion.OnMyPlayerMissionStarted_Implementation(APrimalBuff_MissionData*,AMissionType*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OnPlayerDeath_Implementation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnPlayerDeath_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.OnPlayerDeath_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.OnPlayerPlayAnimation(UAnimMontage*,float,FName)
    // endereco: casamento de bytes com a build de referencia
    void OnPlayerPlayAnimation(void* a0, float a1, unsigned long long a2) const
    {
        NativeCall<void, void*, float, unsigned long long>(this, "APrimalBuff_Companion.OnPlayerPlayAnimation(UAnimMontage*,float,FName)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Companion.OnSpawnedForPlayer()
    // endereco: cache_pdb_25090264
    void OnSpawnedForPlayer() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.OnSpawnedForPlayer()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.OnSpawnedForPlayer_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void OnSpawnedForPlayer_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.OnSpawnedForPlayer_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.OutputAsyncLoadedFiles()
    // endereco: cache_pdb_25090264
    void OutputAsyncLoadedFiles() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.OutputAsyncLoadedFiles()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.PlayCompanionMontage(UAnimMontage*,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    float PlayCompanionMontage(void* a0, float a1, float a2, float a3) const
    {
        return NativeCall<float, void*, float, float, float>(this, "APrimalBuff_Companion.PlayCompanionMontage(UAnimMontage*,float,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.PlayCompanionReaction(FCompanionReactionData&)
    // endereco: casamento de bytes com a build de referencia
    void PlayCompanionReaction(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Companion.PlayCompanionReaction(FCompanionReactionData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.RefreshCompanionColorization()
    // endereco: thunk
    void RefreshCompanionColorization() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.RefreshCompanionColorization_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void RefreshCompanionColorization_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.RefreshCompanionColorization_Implementation()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.RequestLoadFallbackSubtitlesAudio()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=950+grafo=10/10]]
    void RequestLoadFallbackSubtitlesAudio() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.RequestLoadFallbackSubtitlesAudio()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Server_SetCompanionState(ECompanionState::Type)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Server_SetCompanionState(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff_Companion.Server_SetCompanionState(ECompanionState::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Server_SetCompanionState_Implementation(ECompanionState::Type)
    // endereco: cache_pdb_25090264
    void Server_SetCompanionState_Implementation(int a0) const
    {
        NativeCall<void, int>(this, "APrimalBuff_Companion.Server_SetCompanionState_Implementation(ECompanionState::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.SetCompaionHiddenSetting_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetCompaionHiddenSetting_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBuff_Companion.SetCompaionHiddenSetting_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.SetUpAnimTexture()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void SetUpAnimTexture() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.SetUpAnimTexture()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.SetupForInstigator()
    // endereco: casamento de bytes com a build de referencia
    void SetupForInstigator() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.SetupForInstigator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ShouldOrbitPointOfInterest(FPointOfInterestData_ForCompanion&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldOrbitPointOfInterest(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Companion.ShouldOrbitPointOfInterest(FPointOfInterestData_ForCompanion&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StartCompanionEvent(AActor*,FCompanionEventData&)
    // endereco: thunk
    void StartCompanionEvent(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Companion.StartCompanionEvent(AActor*,FCompanionEventData&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Companion.StartCompanionEventExternal(AActor*,FCompanionEventData&)
    // endereco: thunk
    BrzPonteiro StartCompanionEventExternal(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Companion.StartCompanionEventExternal(AActor*,FCompanionEventData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StartCompanionEvent_Implementation(AActor*,FCompanionEventData&)
    // endereco: casamento de bytes com a build de referencia
    void StartCompanionEvent_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Companion.StartCompanionEvent_Implementation(AActor*,FCompanionEventData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StaticRegisterNativesAPrimalBuff_Companion()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesAPrimalBuff_Companion()
    {
        NativeCall<void>(nullptr, "APrimalBuff_Companion.StaticRegisterNativesAPrimalBuff_Companion()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StopCompanionEvent_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=258+grafo=4/4]]
    void StopCompanionEvent_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionEvent_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StopCompanionMontage(UAnimMontage*,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88]]
    void StopCompanionMontage(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Companion.StopCompanionMontage(UAnimMontage*,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.StopCompanionReaction()
    // endereco: casamento de bytes com a build de referencia
    void StopCompanionReaction() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.StopCompanionReaction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.Tick_CompanionEvents(float)
    // endereco: cache_pdb_25090264
    void Tick_CompanionEvents(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_CompanionEvents_Implementation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=317+grafo=4/4]]
    void Tick_CompanionEvents_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionEvents_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_CompanionReactions(float)
    // endereco: cache_pdb_25090264
    void Tick_CompanionReactions(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_CompanionReactions_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_CompanionReactions_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionReactions_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_CompanionSearchForPOIs(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=126]]
    void Tick_CompanionSearchForPOIs(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_CompanionSearchForPOIs_Implementation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=293+grafo=5/5]]
    void Tick_CompanionSearchForPOIs_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_CompanionSearchForPOIs_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.Tick_UpdateCompanionState(float)
    // endereco: cache_pdb_25090264
    void Tick_UpdateCompanionState(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Tick_UpdateCompanionState_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_UpdateCompanionState_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionState_Implementation(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Companion.Tick_UpdateCompanionTransform(float)
    // endereco: cache_pdb_25090264
    void Tick_UpdateCompanionTransform(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Companion.Tick_UpdateCompanionTransform(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.Timer_CheckForValidInstigator()
    // endereco: casamento de bytes com a build de referencia
    void Timer_CheckForValidInstigator() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.Timer_CheckForValidInstigator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.ToggleForceMonologue()
    // endereco: casamento de bytes com a build de referencia
    void ToggleForceMonologue() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.ToggleForceMonologue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Companion.TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    bool TraceForCompanionBlockersFromPlayer_Implementation(void* a0, void* a1, void* a2, bool a3, float a4) const
    {
        return NativeCall<bool, void*, void*, void*, bool, float>(this, "APrimalBuff_Companion.TraceForCompanionBlockersFromPlayer_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,float)", a0, a1, a2, a3, a4);
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Companion.UnloadAsyncLoadedAudioAndTexture()
    // endereco: cache_pdb_25090264
    void UnloadAsyncLoadedAudioAndTexture() const
    {
        NativeCall<void>(this, "APrimalBuff_Companion.UnloadAsyncLoadedAudioAndTexture()");
    }

    float& AllowedHLNAFocusedSelectedRemoteTargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AllowedHLNAFocusedSelectedRemoteTargetDistance"); }
    float& AnimTextureDurationOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.AnimTextureDurationOffset"); }
    FName& AnimTextureDurationParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureDurationParamName"); }
    FName& AnimTextureParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureParamName"); }
    FName& AnimTextureStartTimeParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.AnimTextureStartTimeParamName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReactionExplorerNotesToUnlock` +32, medido na build 25090264
    //  (offset absoluto medido: 0x12E8; confianca alta)
    void*& AnimateOutHLNASubtitleIconHandleField() const
    { return BrzCampoAncorado<void*>(this, "ReactionExplorerNotesToUnlock", 32); }
    UTexture2D*& AsyncLoadedDialogueAnimTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_Companion.AsyncLoadedDialogueAnimTexture"); }
    USoundCue*& AsyncLoadedSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Companion.AsyncLoadedSoundCue"); }
    USoundWave*& AsyncLoadedSoundWaveField() const
    { return *GetNativePointerField<USoundWave**>(this, "APrimalBuff_Companion.AsyncLoadedSoundWave"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AllowedHLNAFocusedSelectedRemoteTargetDistance` +24, medido na build 25090264
    //  (offset absoluto medido: 0x14C8; confianca alta)
    float& CompanionAmbientSoundReductionMultiplierField() const
    { return BrzCampoAncorado<float>(this, "AllowedHLNAFocusedSelectedRemoteTargetDistance", 24); }
    BrzCampoPonteiro CompanionMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CompanionMeshComp")); }
    UMaterialInterface*& CompanionReactionSubtitleIconField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalBuff_Companion.CompanionReactionSubtitleIcon"); }
    USceneComponent*& CompanionRootField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalBuff_Companion.CompanionRoot"); }
    USoundAttenuation*& CompanionSoundAttenuationField() const
    { return *GetNativePointerField<USoundAttenuation**>(this, "APrimalBuff_Companion.CompanionSoundAttenuation"); }
    unsigned char& CompanionState_CurrentField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Companion.CompanionState_Current"); }
    unsigned char& CompanionState_PreviousField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Companion.CompanionState_Previous"); }
    USphereComponent*& CompanionUseSphereCompField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalBuff_Companion.CompanionUseSphereComp"); }
    float& CompanionViewDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.CompanionViewDot"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AllowedHLNAFocusedSelectedRemoteTargetDistance` +28, medido na build 25090264
    //  (offset absoluto medido: 0x14CC; confianca alta)
    float& CompanionVoiceVolumeMultiplierVRBiomeField() const
    { return BrzCampoAncorado<float>(this, "AllowedHLNAFocusedSelectedRemoteTargetDistance", 28); }
    BrzCampoPonteiro CurrentAnimTextureStringAssetReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentAnimTextureStringAssetReference")); }
    UAudioComponent*& CurrentCompanionReactionSFXField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionSFX"); }
    UParticleSystemComponent*& CurrentCompanionReactionVFXField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalBuff_Companion.CurrentCompanionReactionVFX"); }
    AActor*& CurrentEventActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalBuff_Companion.CurrentEventActor"); }
    BrzCampoPonteiro CurrentEventDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentEventData")); }
    BrzCampoPonteiro CurrentFocusedLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentFocusedLocation")); }
    BrzCampoPonteiro CurrentFocusedPointDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentFocusedPointData")); }
    TArray<void*>& CurrentIDStackField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Companion.CurrentIDStack"); }
    TArray<void*>& CurrentPointsOfInterestField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Companion.CurrentPointsOfInterest"); }
    int& CurrentReactionSFXIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.CurrentReactionSFXIndex"); }
    BrzCampoPonteiro CurrentSoundCueStringAssetReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentSoundCueStringAssetReference")); }
    BrzCampoPonteiro CurrentSoundWaveStringAssetReferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.CurrentSoundWaveStringAssetReference")); }
    bool& DebugBypassVRTeleportRestrictionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Companion.DebugBypassVRTeleportRestrictions"); }
    BrzCampoPonteiro DefaultMissionCompanionReactionDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.DefaultMissionCompanionReactionData")); }
    BrzCampoPonteiro DefaultReactionAnimtextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.DefaultReactionAnimtexture")); }
    TArray<UMaterialInterface*>& DialogueIconOverrideStackField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff_Companion.DialogueIconOverrideStack"); }
    BrzCampoPonteiro FallbackSubtitleAudioStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.FallbackSubtitleAudioString")); }
    BrzCampoPonteiro FinalBossFightEasyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.FinalBossFightEasy")); }
    BrzCampoPonteiro FinalBossFightFlowTestField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.FinalBossFightFlowTest")); }
    BrzCampoPonteiro FinalBossFightHardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.FinalBossFightHard")); }
    BrzCampoPonteiro FinalBossFightMedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.FinalBossFightMed")); }
    TArray<void*>& FullyTranslatedLanguagesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Companion.FullyTranslatedLanguages"); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetExtendedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.HUDOverlayToolTipWidgetExtended")); }
    double& LastPlayedReactionNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Companion.LastPlayedReactionNetworkTime"); }
    FName& LastPointTag_ReachedOrbitField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_ReachedOrbit"); }
    FName& LastPointTag_StartOrbitField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Companion.LastPointTag_StartOrbit"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReactionExplorerNotesToUnlock` +16, medido na build 25090264
    //  (offset absoluto medido: 0x12D8; confianca alta)
    void*& LoadAudioTimeoutHandleField() const
    { return BrzCampoAncorado<void*>(this, "ReactionExplorerNotesToUnlock", 16); }
    BrzCampoPonteiro LocalizedAudioTracksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.LocalizedAudioTracks")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReactionExplorerNotesToUnlock` +24, medido na build 25090264
    //  (offset absoluto medido: 0x12E0; confianca alta)
    void*& MaxReactionLimitTimeoutHandleField() const
    { return BrzCampoAncorado<void*>(this, "ReactionExplorerNotesToUnlock", 24); }
    TArray<UMaterialInstanceDynamic*>& MeshDynamicMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalBuff_Companion.MeshDynamicMaterials"); }
    TWeakObjectPtr<void>& MyPCField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Companion.MyPC"); }
    TWeakObjectPtr<void>& MyPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Companion.MyPlayer"); }
    BrzCampoPonteiro OnReactionAnimPlayed_DelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.OnReactionAnimPlayed_Delegate")); }
    BrzCampoPonteiro OnReactionComponentSpawned_SFX_DelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_SFX_Delegate")); }
    BrzCampoPonteiro OnReactionComponentSpawned_VFX_DelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.OnReactionComponentSpawned_VFX_Delegate")); }
    BrzCampoPonteiro OnReactionPlayed_DelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.OnReactionPlayed_Delegate")); }
    BrzCampoPonteiro OnReactionStopped_DelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.OnReactionStopped_Delegate")); }
    int& PreviousReactionSFXIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Companion.PreviousReactionSFXIndex"); }
    BrzCampoPonteiro PreviouslyPlayedReactionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Companion.PreviouslyPlayedReaction")); }
    float& ReachPointOrbitWithinDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReachPointOrbitWithinDist"); }
    float& ReactionDialogVolumeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Companion.ReactionDialogVolumeMultiplier"); }
    TArray<void*>& ReactionExplorerNotesToUnlockField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Companion.ReactionExplorerNotesToUnlock"); }
    TArray<void*>& ReactionStackField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Companion.ReactionStack"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AllowedHLNAFocusedSelectedRemoteTargetDistance` +8, medido na build 25090264
    //  (offset absoluto medido: 0x14B8; confianca alta)
    TArray<void*>& StreamedAssetsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "AllowedHLNAFocusedSelectedRemoteTargetDistance", 8); }
    BitFieldValue<bool, unsigned __int32> bDebugCompanion()
    { return { (void*)this, "bDebugCompanion" }; }
    BitFieldValue<bool, unsigned __int32> bIsOrbitingPointOfInterest()
    { return { (void*)this, "bIsOrbitingPointOfInterest" }; }
    BitFieldValue<bool, unsigned __int32> bHasReachedPointOrbit()
    { return { (void*)this, "bHasReachedPointOrbit" }; }
    BitFieldValue<bool, unsigned __int32> bShowsHexagonsInInventory()
    { return { (void*)this, "bShowsHexagonsInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugReactions()
    { return { (void*)this, "bEnableDebugReactions" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayEnglishLinesAsLocalizationFallback()
    { return { (void*)this, "bDontPlayEnglishLinesAsLocalizationFallback" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedTexture()
    { return { (void*)this, "bIsAwaitingLoadedTexture" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingTexture()
    { return { (void*)this, "bHasFinishedLoadingTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundCue()
    { return { (void*)this, "bIsAwaitingLoadedSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundWave()
    { return { (void*)this, "bHasFinishedLoadingSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingLoadedSoundWave()
    { return { (void*)this, "bIsAwaitingLoadedSoundWave" }; }
    BitFieldValue<bool, unsigned __int32> bIsAwaitingFallbackSubtitleAudio()
    { return { (void*)this, "bIsAwaitingFallbackSubtitleAudio" }; }
    BitFieldValue<bool, unsigned __int32> bHasFinishedLoadingSoundCue()
    { return { (void*)this, "bHasFinishedLoadingSoundCue" }; }
    BitFieldValue<bool, unsigned __int32> bProbablyPlayingReaction()
    { return { (void*)this, "bProbablyPlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bHasSomePaddingBeforePlayingReaction()
    { return { (void*)this, "bHasSomePaddingBeforePlayingReaction" }; }
    BitFieldValue<bool, unsigned __int32> bGoingToTryToSplitSoundCueForLocalization()
    { return { (void*)this, "bGoingToTryToSplitSoundCueForLocalization" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayedDefaultReactionAnimTexture()
    { return { (void*)this, "bHasPlayedDefaultReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingFallbackReactionAnimTexture()
    { return { (void*)this, "bIsPlayingFallbackReactionAnimTexture" }; }
    BitFieldValue<bool, unsigned __int32> bForceCompanionHidden()
    { return { (void*)this, "bForceCompanionHidden" }; }
    BitFieldValue<bool, unsigned __int32> DebugBypassVRTeleportRestrictions()
    { return { (void*)this, "DebugBypassVRTeleportRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> ForcedMonologueCheat()
    { return { (void*)this, "ForcedMonologueCheat" }; }
    BitFieldValue<bool, unsigned __int32> IsUsingLocalizedAudioTrack()
    { return { (void*)this, "IsUsingLocalizedAudioTrack" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_COMPANION_H
