// ==========================================================================
//  AController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ACONTROLLER_H
#define BRZ_SDK_JOGO_ACONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ACharacter;
struct APawn;
struct APlayerState;
struct FName;
struct USceneComponent;

#include "AActor.h"

struct AController : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.AddPawnTickDependency(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=25]]
    void AddPawnTickDependency(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.AddPawnTickDependency(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.AttachToPawn(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=280]]
    void AttachToPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.AttachToPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ChangeState(FName)
    // endereco: casamento de bytes com a build de referencia
    void ChangeState(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "AController.ChangeState(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.CleanupPlayerState()
    // endereco: casamento de bytes com a build de referencia
    void CleanupPlayerState() const
    {
        NativeCall<void>(this, "AController.CleanupPlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ClientSetLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double
    // endereco: casamento de bytes com a build de referencia
    void ClientSetLocation_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AController.ClientSetLocation_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ClientSetRotation(UE::Math::TRotator<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetRotation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AController.ClientSetRotation(UE::Math::TRotator<double>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ClientSetRotation_Implementation(UE::Math::TRotator<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    void ClientSetRotation_Implementation(void* a0, long long a1) const
    {
        NativeCall<void, void*, long long>(this, "AController.ClientSetRotation_Implementation(UE::Math::TRotator<double>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=109+grafo=3/3]]
    void Destroyed() const
    {
        NativeCall<void>(this, "AController.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.DetachFromPawn()
    // endereco: casamento de bytes com a build de referencia
    void DetachFromPawn() const
    {
        NativeCall<void>(this, "AController.DetachFromPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AController.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.FailedToSpawnPawn()
    // endereco: casamento de bytes com a build de referencia
    void FailedToSpawnPawn() const
    {
        NativeCall<void>(this, "AController.FailedToSpawnPawn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AController.GetControlRotation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetControlRotation() const
    {
        return NativeCall<void*>(this, "AController.GetControlRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.GetHumanReadableName()
    // endereco: casamento de bytes com a build de referencia
    void GetHumanReadableName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AController.GetHumanReadableName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,f
    // endereco: cache_pdb_25090264
    void GetMoveGoalReachTest(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "AController.GetMoveGoalReachTest(AActor*,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AController.GetNavAgentLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNavAgentLocation() const
    {
        return NativeCall<void*>(this, "AController.GetNavAgentLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.GetNavAgentPropertiesRef()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetNavAgentPropertiesRef() const
    {
        return NativeCall<void*>(this, "AController.GetNavAgentPropertiesRef()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AController.GetPawn<APrimalPawn>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    BrzPonteiro GetPawn_APrimalPawn_() const
    {
        return NativeCall<void*>(this, "AController.GetPawn<APrimalPawn>()");
    }

    // ── NAO EXISTE COMO FUNCAO: e' `inline` na Unreal ──────────────
    //
    //   AController.GetStateName() nao tem endereco nesta build e nao vai ter:
    //   o compilador dissolve o getter dentro de quem chama.
    //   Ate' 09/09/2026 esta chamada devolvia o ZERO do tipo.
    //
    //   Agora le' o campo, pela reflexao viva, como o resto do SDK.
    FName GetStateName() const { return StateNameField(); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.InitPlayerState()
    // endereco: casamento de bytes com a build de referencia
    void InitPlayerState() const
    {
        NativeCall<void>(this, "AController.InitPlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.InstigatedAnyDamage(float,UDamageType*,AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void InstigatedAnyDamage(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "AController.InstigatedAnyDamage(float,UDamageType*,AActor*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.IsInState(FName)
    // endereco: cache_pdb_25090264
    bool IsInState(unsigned long long a0) const
    {
        return NativeCall<bool, unsigned long long>(this, "AController.IsInState(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.IsLocalController()
    // endereco: casamento de bytes com a build de referencia
    bool IsLocalController() const
    {
        return NativeCall<bool>(this, "AController.IsLocalController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.IsLookInputIgnored()
    // endereco: cache_pdb_25090264
    bool IsLookInputIgnored() const
    {
        return NativeCall<bool>(this, "AController.IsLookInputIgnored()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.IsMoveInputIgnored()
    // endereco: cache_pdb_25090264
    bool IsMoveInputIgnored() const
    {
        return NativeCall<bool>(this, "AController.IsMoveInputIgnored()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool LineOfSightTo(void* a0, void* a1, long long a2) const
    {
        return NativeCall<bool, void*, void*, long long>(this, "AController.LineOfSightTo(AActor*,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.OnPossess(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.OnPossess(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.OnRep_Pawn()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_Pawn() const
    {
        NativeCall<void>(this, "AController.OnRep_Pawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.OnRep_PlayerState()
    // endereco: cache_pdb_25090264
    void OnRep_PlayerState() const
    {
        NativeCall<void>(this, "AController.OnRep_PlayerState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.OnUnPossess()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    void OnUnPossess() const
    {
        NativeCall<void>(this, "AController.OnUnPossess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.PawnPendingDestroy(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void PawnPendingDestroy(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.PawnPendingDestroy(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.Possess(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void Possess(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.Possess(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AController.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.RemovePawnTickDependency(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
    void RemovePawnTickDependency(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.RemovePawnTickDependency(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Reset() const
    {
        NativeCall<void>(this, "AController.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ResetIgnoreLookInput()
    // endereco: cache_pdb_25090264
    void ResetIgnoreLookInput() const
    {
        NativeCall<void>(this, "AController.ResetIgnoreLookInput()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ResetIgnoreMoveInput()
    // endereco: cache_pdb_25090264
    void ResetIgnoreMoveInput() const
    {
        NativeCall<void>(this, "AController.ResetIgnoreMoveInput()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.SetControlRotation(UE::Math::TRotator<double>&)
    // endereco: casamento de bytes com a build de referencia
    void SetControlRotation(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.SetControlRotation(UE::Math::TRotator<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.SetIgnoreLookInput(bool)
    // endereco: cache_pdb_25090264
    void SetIgnoreLookInput(bool a0) const
    {
        NativeCall<void, bool>(this, "AController.SetIgnoreLookInput(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.SetIgnoreMoveInput(bool)
    // endereco: cache_pdb_25090264
    void SetIgnoreMoveInput(bool a0) const
    {
        NativeCall<void, bool>(this, "AController.SetIgnoreMoveInput(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&
    // endereco: casamento de bytes com a build de referencia
    void SetInitialLocationAndRotation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AController.SetInitialLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.SetPawn(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "AController.SetPawn(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AController.SetPawnFromRep(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    BrzPonteiro SetPawnFromRep(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AController.SetPawnFromRep(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AController.SetPlayerState(APlayerState*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetPlayerState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AController.SetPlayerState(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ShouldParticipateInSeamlessTravel()
    // endereco: cache_pdb_25090264
    bool ShouldParticipateInSeamlessTravel() const
    {
        return NativeCall<bool>(this, "AController.ShouldParticipateInSeamlessTravel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.ShouldPostponePathUpdates()
    // endereco: cache_pdb_25090264
    bool ShouldPostponePathUpdates() const
    {
        return NativeCall<bool>(this, "AController.ShouldPostponePathUpdates()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.TickActor(float,ELevelTick,FActorTickFunction&)
    // classe: a funcao mora em AActor, e AController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void TickActor(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "AActor.TickActor(float,ELevelTick,FActorTickFunction&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AController.UnPossess()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UnPossess() const
    {
        NativeCall<void>(this, "AController.UnPossess()");
    }

    TObjectPtr<ACharacter>& CharacterField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "AController.Character"); }
    BrzCampoPonteiro ControlRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AController.ControlRotation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Pawn` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4D8; confianca alta)
    TWeakObjectPtr<void>& OldPawnField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "Pawn", 8); }
    BrzCampoPonteiro OnInstigatedAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AController.OnInstigatedAnyDamage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TransformComponent` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4F0; confianca alta)
    void*& OnNewPawnField() const
    { return BrzCampoAncorado<void*>(this, "TransformComponent", 8); }
    BrzCampoPonteiro OnPossessedPawnChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AController.OnPossessedPawnChanged")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AController.Pawn"); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AController.PlayerState"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerState` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4A0; confianca alta)
    TWeakObjectPtr<void>& StartSpotField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "PlayerState", 8); }
    FName& StateNameField() const
    { return *GetNativePointerField<FName*>(this, "AController.StateName"); }
    TObjectPtr<USceneComponent>& TransformComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AController.TransformComponent"); }
    BitFieldValue<bool, unsigned __int32> bAttachToPawn()
    { return { (void*)this, "bAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayerController()
    { return { (void*)this, "bIsPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bCanPossessWithoutAuthority()
    { return { (void*)this, "bCanPossessWithoutAuthority" }; }

};

#endif  // BRZ_SDK_JOGO_ACONTROLLER_H
