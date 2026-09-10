// ==========================================================================
//  APawn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APAWN_H
#define BRZ_SDK_JOGO_APAWN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AController;
struct APhysicsVolume;
struct APlayerController;
struct APlayerState;
struct UInputComponent;
struct UPlayer;

#include "AActor.h"

struct APawn : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APawn"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.AddMovementInput(UE::Math::TVector<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddMovementInput(void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "APawn.AddMovementInput(UE::Math::TVector<double>,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.BecomeViewTarget(APlayerController*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=222+grafo=3/3]]
    void BecomeViewTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.BecomeViewTarget(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APawn.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.CanBeBaseForCharacter(APawn*)
    // endereco: casamento de bytes com a build de referencia
    bool CanBeBaseForCharacter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APawn.CanBeBaseForCharacter(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.CreatePlayerInputComponent()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=400+grafo=7/7]]
    UInputComponent* CreatePlayerInputComponent() const
    {
        return NativeCall<UInputComponent*>(this, "APawn.CreatePlayerInputComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.DestroyPlayerInputComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=49]]
    void DestroyPlayerInputComponent() const
    {
        NativeCall<void>(this, "APawn.DestroyPlayerInputComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Destroyed() const
    {
        NativeCall<void>(this, "APawn.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.DetachFromControllerPendingDestroy()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void DetachFromControllerPendingDestroy() const
    {
        NativeCall<void>(this, "APawn.DetachFromControllerPendingDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.DisableInput(APlayerController*)
    // classe: a funcao mora em AActor, e APawn herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=146]]
    void DisableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.DisableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APawn.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.EnableInput(APlayerController*)
    // classe: a funcao mora em AActor, e APawn herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void EnableInput(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.EnableInput(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APawn.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.EndViewTarget(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void EndViewTarget(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.EndViewTarget(APlayerController*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APawn.FaceRotation(UE::Math::TRotator<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void FaceRotation(void* a0, float a1, bool a2) const
    {
        NativeCall<void, void*, float, bool>(this, "APawn.FaceRotation(UE::Math::TRotator<double>,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void GetActorEyesViewPoint(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APawn.GetActorEyesViewPoint(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetDamageInstigator(AController*,UDamageType&)
    // endereco: cache_pdb_25090264
    AController* GetDamageInstigator(void* a0, void* a1) const
    {
        return NativeCall<AController*, void*, void*>(this, "APawn.GetDamageInstigator(AController*,UDamageType&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetDefaultHalfHeight()
    // endereco: casamento de bytes com a build de referencia
    float GetDefaultHalfHeight() const
    {
        return NativeCall<float>(this, "APawn.GetDefaultHalfHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetHumanReadableName()
    // endereco: casamento de bytes com a build de referencia
    void GetHumanReadableName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APawn.GetHumanReadableName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=273+grafo=10/10]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetLocalViewingPlayerController()
    // endereco: casamento de bytes com a build de referencia
    APlayerController* GetLocalViewingPlayerController() const
    {
        return NativeCall<APlayerController*>(this, "APawn.GetLocalViewingPlayerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void GetMoveGoalReachTest(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "APawn.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetNavAgentPropertiesRef()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=55]]
    BrzPonteiro GetNavAgentPropertiesRef() const
    {
        return NativeCall<void*>(this, "APawn.GetNavAgentPropertiesRef()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetNetOwningPlayer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    UPlayer* GetNetOwningPlayer() const
    {
        return NativeCall<UPlayer*>(this, "APawn.GetNetOwningPlayer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetPawnViewLocation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void GetPawnViewLocation(void* retorno) const
    {
        NativeCall<void, void*>(this, "APawn.GetPawnViewLocation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetPhysicsVolume()
    // endereco: casamento de bytes com a build de referencia
    APhysicsVolume* GetPhysicsVolume() const
    {
        return NativeCall<APhysicsVolume*>(this, "APawn.GetPhysicsVolume()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.GetPlayerState<AShooterPlayerState>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlayerState_AShooterPlayerState_() const
    {
        return NativeCall<void*>(this, "APawn.GetPlayerState<AShooterPlayerState>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.InFreeCam()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=299+grafo=4/4]]
    bool InFreeCam() const
    {
        return NativeCall<bool>(this, "APawn.InFreeCam()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.IsBasedOnActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOnActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APawn.IsBasedOnActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.IsBotControlled()
    // endereco: cache_pdb_25090264
    bool IsBotControlled() const
    {
        return NativeCall<bool>(this, "APawn.IsBotControlled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    bool IsNetRelevantFor(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "APawn.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.IsPawnControlled()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsPawnControlled() const
    {
        return NativeCall<bool>(this, "APawn.IsPawnControlled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.IsPlayerControlled()
    // endereco: cache_pdb_25090264
    bool IsPlayerControlled() const
    {
        return NativeCall<bool>(this, "APawn.IsPlayerControlled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.NotifyControllerChanged()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=262+grafo=3/3]]
    void NotifyControllerChanged() const
    {
        NativeCall<void>(this, "APawn.NotifyControllerChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.NotifyRestarted()
    // endereco: casamento de bytes com a build de referencia
    void NotifyRestarted() const
    {
        NativeCall<void>(this, "APawn.NotifyRestarted()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.OnRep_Controller()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    void OnRep_Controller() const
    {
        NativeCall<void>(this, "APawn.OnRep_Controller()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.OnRep_PlayerState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=175]]
    void OnRep_PlayerState() const
    {
        NativeCall<void>(this, "APawn.OnRep_PlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.OutsideWorldBounds()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void OutsideWorldBounds() const
    {
        NativeCall<void>(this, "APawn.OutsideWorldBounds()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PawnClientRestart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=317]]
    void PawnClientRestart() const
    {
        NativeCall<void>(this, "APawn.PawnClientRestart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PossessedBy(AController*)
    // endereco: casamento de bytes com a build de referencia
    void PossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.PossessedBy(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APawn.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PostNetReceiveLocationAndRotation()
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "APawn.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PostNetReceiveVelocity(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveVelocity(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.PostNetReceiveVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PostRegisterAllComponents()
    // classe: a funcao mora em AActor, e APawn herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostRegisterAllComponents() const
    {
        NativeCall<void>(this, "AActor.PostRegisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APawn.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.PreReplication(IRepChangedPropertyTracker&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=108]]
    void PreReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "APawn.PreReplication(IRepChangedPropertyTracker&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.ReachedDesiredRotation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ReachedDesiredRotation() const
    {
        return NativeCall<bool>(this, "APawn.ReachedDesiredRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.RecalculateBaseEyeHeight()
    // endereco: casamento de bytes com a build de referencia
    void RecalculateBaseEyeHeight() const
    {
        NativeCall<void>(this, "APawn.RecalculateBaseEyeHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void Reset() const
    {
        NativeCall<void>(this, "APawn.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.Restart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    void Restart() const
    {
        NativeCall<void>(this, "APawn.Restart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.SetCanAffectNavigationGeneration(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetCanAffectNavigationGeneration(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APawn.SetCanAffectNavigationGeneration(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.ShouldTickIfViewportsOnly()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldTickIfViewportsOnly() const
    {
        return NativeCall<bool>(this, "APawn.ShouldTickIfViewportsOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.SpawnDefaultController()
    // endereco: casamento de bytes com a build de referencia
    void SpawnDefaultController() const
    {
        NativeCall<void>(this, "APawn.SpawnDefaultController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "APawn.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.TeleportSucceeded(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void TeleportSucceeded(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APawn.TeleportSucceeded(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.TurnOff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=104]]
    void TurnOff() const
    {
        NativeCall<void>(this, "APawn.TurnOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.UnPossessed()
    // endereco: casamento de bytes com a build de referencia
    void UnPossessed() const
    {
        NativeCall<void>(this, "APawn.UnPossessed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APawn.UpdateNavAgent()
    // endereco: casamento de bytes com a build de referencia
    void UpdateNavAgent() const
    {
        NativeCall<void>(this, "APawn.UpdateNavAgent()");
    }

    BrzCampoPonteiro AIControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.AIControllerClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PreviousController` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4D0; confianca alta)
    float& AllowedYawErrorField() const
    { return BrzCampoAncorado<float>(this, "PreviousController", 8); }
    FieldArray<char> AutoPossessAIField() const
    { return { (void*)this, "APawn.AutoPossessAI" }; }
    BrzCampoPonteiro AutoPossessPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.AutoPossessPlayer")); }
    float& BaseEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APawn.BaseEyeHeight"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `RemoteViewPitch` +2, medido na build 25090264
    //  (offset absoluto medido: 0x4A4; confianca alta)
    float& BlendedReplayViewPitchField() const
    { return BrzCampoAncorado<float>(this, "RemoteViewPitch", 2); }
    BrzCampoPonteiro ControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.ControlInputVector")); }
    TObjectPtr<AController>& ControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.Controller"); }
    BrzCampoPonteiro LastControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.LastControlInputVector")); }
    TObjectPtr<AController>& LastHitByField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.LastHitBy"); }
    BrzCampoPonteiro OnMovementTetherSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.OnMovementTetherSet")); }
    BrzCampoPonteiro OverrideInputComponentClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.OverrideInputComponentClass")); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "APawn.PlayerState"); }
    TObjectPtr<AController>& PreviousControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APawn.PreviousController"); }
    BrzCampoPonteiro ReceiveControllerChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.ReceiveControllerChangedDelegate")); }
    BrzCampoPonteiro ReceiveRestartedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.ReceiveRestartedDelegate")); }
    BrzCampoPonteiro RemoteViewPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APawn.RemoteViewPitch")); }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationPitch()
    { return { (void*)this, "bUseControllerRotationPitch" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationYaw()
    { return { (void*)this, "bUseControllerRotationYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationRoll()
    { return { (void*)this, "bUseControllerRotationRoll" }; }
    BitFieldValue<bool, unsigned __int32> bCanAffectNavigationGeneration()
    { return { (void*)this, "bCanAffectNavigationGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseCustomCameraComponent()
    { return { (void*)this, "bForceUseCustomCameraComponent" }; }
    BitFieldValue<bool, unsigned __int32> bDisableControllerDesiredRotation()
    { return { (void*)this, "bDisableControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bInputEnabled()
    { return { (void*)this, "bInputEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bProcessingOutsideWorldBounds()
    { return { (void*)this, "bProcessingOutsideWorldBounds" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocalViewTarget()
    { return { (void*)this, "bIsLocalViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFaceRotation()
    { return { (void*)this, "bUseBPFaceRotation" }; }

};

#endif  // BRZ_SDK_JOGO_APAWN_H
