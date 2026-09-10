// ==========================================================================
//  ACharacter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ACHARACTER_H
#define BRZ_SDK_JOGO_ACHARACTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UActorComponent;
struct UAnimMontage;
struct UCapsuleComponent;
struct UCharacterMovementComponent;
struct UPawnMovementComponent;
struct USkeletalMeshComponent;

#include "APrimalPawn.h"

struct ACharacter : public APrimalPawn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ACharacter"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ApplyAsyncOutput(FCharacterAsyncOutput&)
    // endereco: cache_pdb_25090264
    BrzPonteiro ApplyAsyncOutput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ACharacter.ApplyAsyncOutput(FCharacterAsyncOutput&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ApplyDamageMomentum(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "ACharacter.ApplyDamageMomentum(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.BaseChange()
    // endereco: casamento de bytes com a build de referencia
    void BaseChange() const
    {
        NativeCall<void>(this, "ACharacter.BaseChange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.BeginPlay()
    // classe: a funcao mora em APawn, e ACharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APawn.BeginPlay()");
    }

    // jogo_confirmou_dump
    //   ACharacter.CacheInitialMeshOffset(UE::Math::TVector<double>,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    void CacheInitialMeshOffset(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ACharacter.CacheInitialMeshOffset(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.CanCrouch()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanCrouch() const
    {
        return NativeCall<bool>(this, "ACharacter.CanCrouch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.CanJump()
    // endereco: casamento de bytes com a build de referencia
    bool CanJump() const
    {
        return NativeCall<bool>(this, "ACharacter.CanJump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.CanJumpInternal_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanJumpInternal_Implementation() const
    {
        return NativeCall<bool>(this, "ACharacter.CanJumpInternal_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.CheckJumpInput(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void CheckJumpInput(float a0) const
    {
        NativeCall<void, float>(this, "ACharacter.CheckJumpInput(float)", a0);
    }

    // dump_sobre_sdk_287a0
    //   ACharacter.ClearCrossLevelReferences()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=21]]
    void ClearCrossLevelReferences() const
    {
        NativeCall<void>(this, "ACharacter.ClearCrossLevelReferences()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClearJumpInput(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=88]]
    void ClearJumpInput(float a0) const
    {
        NativeCall<void, float>(this, "ACharacter.ClearJumpInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ClientAdjustPosition(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimi
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientAdjustPosition(float a0, void* a1, void* a2, void* a3, unsigned long long a4, bool a5, bool a6, unsigned char a7) const
    {
        return NativeCall<void*, float, void*, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "ACharacter.ClientAdjustPosition(float,UE::Math::TVector<double>,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClientAdjustRootMotionSourcePosition(float,FRootMotionSourceGroup,bool,float,UE::Math
    // endereco: casamento de bytes com a build de referencia
    void ClientAdjustRootMotionSourcePosition(float a0, void* a1, bool a2, float a3, void* a4, void* a5, float a6, void* a7, unsigned long long a8, bool a9, bool a10, unsigned char a11) const
    {
        NativeCall<void, float, void*, bool, float, void*, void*, float, void*, unsigned long long, bool, bool, unsigned char>(this, "ACharacter.ClientAdjustRootMotionSourcePosition(float,FRootMotionSourceGroup,bool,float,UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClientCheatFly_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientCheatFly_Implementation() const
    {
        NativeCall<void>(this, "ACharacter.ClientCheatFly_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClientCheatGhost_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    void ClientCheatGhost_Implementation() const
    {
        NativeCall<void>(this, "ACharacter.ClientCheatGhost_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClientCheatWalk_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientCheatWalk_Implementation() const
    {
        NativeCall<void>(this, "ACharacter.ClientCheatWalk_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ClientForceUpdateMovement(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientForceUpdateMovement(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ACharacter.ClientForceUpdateMovement(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ClientForceUpdateMovement_Implementation(UE::Math::TVector<double>,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    void ClientForceUpdateMovement_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ACharacter.ClientForceUpdateMovement_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ClientVeryShortAdjustPosition(float,UE::Math::TVector<double>,UPrimitiveComponent*,FN
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientVeryShortAdjustPosition(float a0, void* a1, void* a2, unsigned long long a3, bool a4, bool a5, unsigned char a6) const
    {
        return NativeCall<void*, float, void*, void*, unsigned long long, bool, bool, unsigned char>(this, "ACharacter.ClientVeryShortAdjustPosition(float,UE::Math::TVector<double>,UPrimitiveComponent*,FName,bool,bool,unsignedchar)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.Crouch(bool)
    // endereco: casamento de bytes com a build de referencia
    void Crouch(bool a0) const
    {
        NativeCall<void, bool>(this, "ACharacter.Crouch(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    void DisplayDebug(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "ACharacter.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.FillAsyncInput(FCharacterAsyncInput&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=176]]
    BrzPonteiro FillAsyncInput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ACharacter.FillAsyncInput(FCharacterAsyncInput&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.FindComponentByClass(TSubclassOf<UActorComponent>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=267]]
    UActorComponent* FindComponentByClass(void* a0) const
    {
        return NativeCall<UActorComponent*, void*>(this, "ACharacter.FindComponentByClass(TSubclassOf<UActorComponent>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.FindComponentByClass<UDragonHornDinoComponent>()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindComponentByClass_UDragonHornDinoComponent_() const
    {
        return NativeCall<void*>(this, "ACharacter.FindComponentByClass<UDragonHornDinoComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GatherCurrentMovement()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    BrzPonteiro GatherCurrentMovement() const
    {
        return NativeCall<void*>(this, "ACharacter.GatherCurrentMovement()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetAnimRootMotionTranslationScale()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAnimRootMotionTranslationScale() const
    {
        return NativeCall<void*>(this, "ACharacter.GetAnimRootMotionTranslationScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetBaseRotationOffset()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetBaseRotationOffset() const
    {
        return NativeCall<void*>(this, "ACharacter.GetBaseRotationOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetCurrentMontage()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    UAnimMontage* GetCurrentMontage() const
    {
        return NativeCall<UAnimMontage*>(this, "ACharacter.GetCurrentMontage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.GetDefaultHalfHeight()
    // endereco: casamento de bytes com a build de referencia
    float GetDefaultHalfHeight() const
    {
        return NativeCall<float>(this, "ACharacter.GetDefaultHalfHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetGravityDirection()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetGravityDirection() const
    {
        return NativeCall<void*>(this, "ACharacter.GetGravityDirection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetGravityTransform()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetGravityTransform() const
    {
        return NativeCall<void*>(this, "ACharacter.GetGravityTransform()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.GetJumpMaxHoldTime()
    // endereco: cache_pdb_25090264
    float GetJumpMaxHoldTime() const
    {
        return NativeCall<float>(this, "ACharacter.GetJumpMaxHoldTime()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.GetMovementComponent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UPawnMovementComponent* GetMovementComponent() const
    {
        return NativeCall<UPawnMovementComponent*>(this, "ACharacter.GetMovementComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetNavAgentLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNavAgentLocation() const
    {
        return NativeCall<void*>(this, "ACharacter.GetNavAgentLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)
    // endereco: casamento de bytes com a build de referencia
    void GetReplicatedCustomConditionState(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetReplicatedGravityDirection()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetReplicatedGravityDirection() const
    {
        return NativeCall<void*>(this, "ACharacter.GetReplicatedGravityDirection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.GetRootMotionAnimMontageInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRootMotionAnimMontageInstance() const
    {
        return NativeCall<void*>(this, "ACharacter.GetRootMotionAnimMontageInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.InitializeAsyncOutput(FCharacterAsyncOutput&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeAsyncOutput(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ACharacter.InitializeAsyncOutput(FCharacterAsyncOutput&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.IsBasedOnDynamicActor()
    // endereco: casamento de bytes com a build de referencia
    bool IsBasedOnDynamicActor() const
    {
        return NativeCall<bool>(this, "ACharacter.IsBasedOnDynamicActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.IsJumpProvidingForce()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    bool IsJumpProvidingForce() const
    {
        return NativeCall<bool>(this, "ACharacter.IsJumpProvidingForce()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.IsPlayingNetworkedRootMotionMontage()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsPlayingNetworkedRootMotionMontage() const
    {
        return NativeCall<void*>(this, "ACharacter.IsPlayingNetworkedRootMotionMontage()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.IsPlayingRootMotion()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsPlayingRootMotion() const
    {
        return NativeCall<void*>(this, "ACharacter.IsPlayingRootMotion()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.Jump()
    // endereco: cache_pdb_25090264
    void Jump() const
    {
        NativeCall<void>(this, "ACharacter.Jump()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.Landed(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void Landed(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.Landed(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void LaunchCharacter(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "ACharacter.LaunchCharacter(UE::Math::TVector<double>,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ModifyRootMotion(FRootMotionMovementParams&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModifyRootMotion(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "ACharacter.ModifyRootMotion(FRootMotionMovementParams&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.NotifyJumpApex()
    // endereco: cache_pdb_25090264
    void NotifyJumpApex() const
    {
        NativeCall<void>(this, "ACharacter.NotifyJumpApex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnEndCrouch(float,float)
    // endereco: casamento de bytes com a build de referencia
    void OnEndCrouch(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "ACharacter.OnEndCrouch(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnJumped()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnJumped() const
    {
        NativeCall<void>(this, "ACharacter.OnJumped()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnLanded(FHitResult&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnLanded(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.OnLanded(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=269]]
    void OnMovementModeChanged(int a0, unsigned char a1) const
    {
        NativeCall<void, int, unsigned char>(this, "ACharacter.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // jogo_confirmou_dump
    //   ACharacter.OnRep_IsCrouched()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102]]
    void OnRep_IsCrouched() const
    {
        NativeCall<void>(this, "ACharacter.OnRep_IsCrouched()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnRep_ReplicatedBasedMovement()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicatedBasedMovement() const
    {
        NativeCall<void>(this, "ACharacter.OnRep_ReplicatedBasedMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnRep_ReplicatedMovement()
    // classe: a funcao mora em AActor, e ACharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void OnRep_ReplicatedMovement() const
    {
        NativeCall<void>(this, "AActor.OnRep_ReplicatedMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnStartCrouch(float,float)
    // endereco: casamento de bytes com a build de referencia
    void OnStartCrouch(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "ACharacter.OnStartCrouch(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnUpdateSimulatedPosition(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ACharacter.OnUpdateSimulatedPosition(UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.OnWalkingOffLedge(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWalkingOffLedge(void* a0, void* a1, void* a2, float a3) const
    {
        return NativeCall<void*, void*, void*, void*, float>(this, "ACharacter.OnWalkingOffLedge(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PawnClientRestart()
    // endereco: casamento de bytes com a build de referencia
    void PawnClientRestart() const
    {
        NativeCall<void>(this, "ACharacter.PawnClientRestart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)
    // endereco: casamento de bytes com a build de referencia
    float PlayAnimMontage(void* a0, float a1, unsigned long long a2, bool a3, bool a4, float a5, float a6) const
    {
        return NativeCall<float, void*, float, unsigned long long, bool, bool, float, float>(this, "ACharacter.PlayAnimMontage(UAnimMontage*,float,FName,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PossessedBy(AController*)
    // endereco: casamento de bytes com a build de referencia
    void PossessedBy(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.PossessedBy(AController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "ACharacter.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.PostLoad()
    // classe: a funcao mora em AActor, e ACharacter herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "AActor.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PostNetReceive()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=273]]
    void PostNetReceive() const
    {
        NativeCall<void>(this, "ACharacter.PostNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PostNetReceiveLocationAndRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void PostNetReceiveLocationAndRotation() const
    {
        NativeCall<void>(this, "ACharacter.PostNetReceiveLocationAndRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PreNetReceive()
    // endereco: cache_pdb_25090264
    void PreNetReceive() const
    {
        NativeCall<void>(this, "ACharacter.PreNetReceive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PreReplication(IRepChangedPropertyTracker&)
    // endereco: casamento de bytes com a build de referencia
    void PreReplication(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.PreReplication(IRepChangedPropertyTracker&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.PreReplicationForReplay(IRepChangedPropertyTracker&)
    // endereco: casamento de bytes com a build de referencia
    void PreReplicationForReplay(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.PreReplicationForReplay(IRepChangedPropertyTracker&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.RecalculateBaseEyeHeight()
    // classe: a funcao mora em APawn, e ACharacter herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void RecalculateBaseEyeHeight() const
    {
        NativeCall<void>(this, "APawn.RecalculateBaseEyeHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.RecalculateCrouchedEyeHeight()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RecalculateCrouchedEyeHeight() const
    {
        return NativeCall<void*>(this, "ACharacter.RecalculateCrouchedEyeHeight()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ResetJumpState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    void ResetJumpState() const
    {
        NativeCall<void>(this, "ACharacter.ResetJumpState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.Restart()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=99]]
    void Restart() const
    {
        NativeCall<void>(this, "ACharacter.Restart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.RestoreReplicatedMove(FSimulatedRootMotionReplicatedMove&)
    // endereco: casamento de bytes com a build de referencia
    bool RestoreReplicatedMove(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ACharacter.RestoreReplicatedMove(FSimulatedRootMotionReplicatedMove&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.SaveRelativeBasedMovement(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool
    // endereco: cache_pdb_25090264
    BrzPonteiro SaveRelativeBasedMovement(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "ACharacter.SaveRelativeBasedMovement(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.ServerMovePacked(FCharacterServerMovePackedBits&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=177+grafo=4/4]]
    BrzPonteiro ServerMovePacked(void* a0) const
    {
        return NativeCall<void*, void*>(this, "ACharacter.ServerMovePacked(FCharacterServerMovePackedBits&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ACharacter.SetAnimRootMotionTranslationScale(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetAnimRootMotionTranslationScale(float a0) const
    {
        return NativeCall<void*, float>(this, "ACharacter.SetAnimRootMotionTranslationScale(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.SetBase(UPrimitiveComponent*,FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetBase(void* a0, unsigned long long a1, bool a2) const
    {
        NativeCall<void, void*, unsigned long long, bool>(this, "ACharacter.SetBase(UPrimitiveComponent*,FName,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.SetReplicateMovement(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetReplicateMovement(bool a0) const
    {
        NativeCall<void, bool>(this, "ACharacter.SetReplicateMovement(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.ShouldNotifyLanded(FHitResult&)
    // endereco: cache_pdb_25090264
    bool ShouldNotifyLanded(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ACharacter.ShouldNotifyLanded(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.SimulatedRootMotionPositionFixup(float)
    // endereco: casamento de bytes com a build de referencia
    void SimulatedRootMotionPositionFixup(float a0) const
    {
        NativeCall<void, float>(this, "ACharacter.SimulatedRootMotionPositionFixup(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.StopAnimMontage(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    void StopAnimMontage(void* a0) const
    {
        NativeCall<void, void*>(this, "ACharacter.StopAnimMontage(UAnimMontage*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.StopJumping()
    // endereco: cache_pdb_25090264
    void StopJumping() const
    {
        NativeCall<void>(this, "ACharacter.StopJumping()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.TurnOff()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=216]]
    void TurnOff() const
    {
        NativeCall<void>(this, "ACharacter.TurnOff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.UnCrouch(bool)
    // endereco: cache_pdb_25090264
    void UnCrouch(bool a0) const
    {
        NativeCall<void, bool>(this, "ACharacter.UnCrouch(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACharacter.UnPossessed()
    // endereco: casamento de bytes com a build de referencia
    void UnPossessed() const
    {
        NativeCall<void>(this, "ACharacter.UnPossessed()");
    }

    float& AnimRootMotionTranslationScaleField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.AnimRootMotionTranslationScale"); }
    BrzCampoPonteiro BaseRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.BaseRotationOffset")); }
    BrzCampoPonteiro BaseTranslationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.BaseTranslationOffset")); }
    BrzCampoPonteiro BasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.BasedMovement")); }
    TObjectPtr<UCapsuleComponent>& CapsuleComponentField() const
    { return *GetNativePointerField<TObjectPtr<UCapsuleComponent>*>(this, "ACharacter.CapsuleComponent"); }
    TObjectPtr<UCharacterMovementComponent>& CharacterMovementField() const
    { return *GetNativePointerField<TObjectPtr<UCharacterMovementComponent>*>(this, "ACharacter.CharacterMovement"); }
    BrzCampoPonteiro ClientRootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.ClientRootMotionParams")); }
    float& CrouchedEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.CrouchedEyeHeight"); }
    int& JumpCurrentCountField() const
    { return *GetNativePointerField<int*>(this, "ACharacter.JumpCurrentCount"); }
    int& JumpCurrentCountPreJumpField() const
    { return *GetNativePointerField<int*>(this, "ACharacter.JumpCurrentCountPreJump"); }
    float& JumpForceTimeRemainingField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.JumpForceTimeRemaining"); }
    float& JumpKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.JumpKeyHoldTime"); }
    int& JumpMaxCountField() const
    { return *GetNativePointerField<int*>(this, "ACharacter.JumpMaxCount"); }
    float& JumpMaxHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.JumpMaxHoldTime"); }
    float& JumpOfWaterKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.JumpOfWaterKeyHoldTime"); }
    BrzCampoPonteiro LandedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.LandedDelegate")); }
    TObjectPtr<USkeletalMeshComponent>& MeshField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "ACharacter.Mesh"); }
    BrzCampoPonteiro MovementModeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.MovementModeChangedDelegate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `JumpCurrentCountPreJump` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6AC; confianca alta)
    void*& NumActorOverlapEventsCounterField() const
    { return BrzCampoAncorado<void*>(this, "JumpCurrentCountPreJump", 4); }
    BrzCampoPonteiro OnCharacterMovementUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.OnCharacterMovementUpdated")); }
    BrzCampoPonteiro OnReachedJumpApexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.OnReachedJumpApex")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ReplicatedGravityDirection` +24, medido na build 25090264
    //  (offset absoluto medido: 0x660; confianca alta)
    void*& PreNetReceivedGravityDirectionField() const
    { return BrzCampoAncorado<void*>(this, "ReplicatedGravityDirection", 24); }
    float& ProxyJumpForceStartedTimeField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.ProxyJumpForceStartedTime"); }
    BrzCampoPonteiro RepRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.RepRootMotion")); }
    float& ReplayLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<float*>(this, "ACharacter.ReplayLastTransformUpdateTimeStamp"); }
    BrzCampoPonteiro ReplicatedBasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.ReplicatedBasedMovement")); }
    BrzCampoPonteiro ReplicatedGravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.ReplicatedGravityDirection")); }
    unsigned char& ReplicatedMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "ACharacter.ReplicatedMovementMode"); }
    double& ReplicatedServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "ACharacter.ReplicatedServerLastTransformUpdateTimeStamp"); }
    TArray<void*>& RootMotionRepMovesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ACharacter.RootMotionRepMoves"); }
    BrzCampoPonteiro SavedRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ACharacter.SavedRootMotion")); }
    bool& bInBaseReplicationField() const
    { return *GetNativePointerField<bool*>(this, "ACharacter.bInBaseReplication"); }
    BitFieldValue<bool, unsigned __int32> bIsCrouched()
    { return { (void*)this, "bIsCrouched" }; }
    BitFieldValue<bool, unsigned __int32> bProxyIsJumpForceApplied()
    { return { (void*)this, "bProxyIsJumpForceApplied" }; }
    BitFieldValue<bool, unsigned __int32> bCurrentlyUpdatingRootMotion()
    { return { (void*)this, "bCurrentlyUpdatingRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bPressedJump()
    { return { (void*)this, "bPressedJump" }; }
    BitFieldValue<bool, unsigned __int32> bClientUpdating()
    { return { (void*)this, "bClientUpdating" }; }
    BitFieldValue<bool, unsigned __int32> bClientWasFalling()
    { return { (void*)this, "bClientWasFalling" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotion()
    { return { (void*)this, "bClientResimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotionSources()
    { return { (void*)this, "bClientResimulateRootMotionSources" }; }
    BitFieldValue<bool, unsigned __int32> bSimGravityDisabled()
    { return { (void*)this, "bSimGravityDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bClientCheckEncroachmentOnNetUpdate()
    { return { (void*)this, "bClientCheckEncroachmentOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bServerMoveIgnoreRootMotion()
    { return { (void*)this, "bServerMoveIgnoreRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bWasJumping()
    { return { (void*)this, "bWasJumping" }; }
    BitFieldValue<bool, unsigned __int32> bInBaseReplication()
    { return { (void*)this, "bInBaseReplication" }; }

};

#endif  // BRZ_SDK_JOGO_ACHARACTER_H
