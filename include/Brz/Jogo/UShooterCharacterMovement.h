// ==========================================================================
//  UShooterCharacterMovement — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERCHARACTERMOVEMENT_H
#define BRZ_SDK_JOGO_USHOOTERCHARACTERMOVEMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct ACharacter;
struct APawn;
struct FActorComponentTickFunction;
struct FName;
struct UPrimitiveComponent;
struct USceneComponent;


struct UShooterCharacterMovement
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterCharacterMovement"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddImpulse(void* a0, bool a1, float a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, float, bool>(this, "UShooterCharacterMovement.AddImpulse(UE::Math::TVector<double>,bool,float,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.ApplyAccumulatedForces(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyAccumulatedForces(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterCharacterMovement.ApplyAccumulatedForces(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.BPApplyVelocityBraking(float,float,float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPApplyVelocityBraking(float a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, float, float, float, void*>(this, "UShooterCharacterMovement.BPApplyVelocityBraking(float,float,float,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.BP_GetAnalogueInputModifier()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BP_GetAnalogueInputModifier() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.BP_GetAnalogueInputModifier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.BP_PerformMovement(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BP_PerformMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterCharacterMovement.BP_PerformMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.CanCrouchInCurrentState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCrouchInCurrentState() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.CanCrouchInCurrentState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.CanProneInCurrentState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanProneInCurrentState() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.CanProneInCurrentState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.CheckWaterJump(UE::Math::TVector<double>,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckWaterJump(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterCharacterMovement.CheckWaterJump(UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConstrainInputAcceleration(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCharacterMovement.ConstrainInputAcceleration(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.DoWaterJump(UE::Math::TVector<double>,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoWaterJump(void* a0, unsigned char a1) const
    {
        return NativeCall<void*, void*, unsigned char>(this, "UShooterCharacterMovement.DoWaterJump(UE::Math::TVector<double>,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FloorSweepTest(void* a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*, void*>(this, "UShooterCharacterMovement.FloorSweepTest(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,ECollisionChannel,FCollisionShape&,FCollisionQueryParams&,FCollisionResponseParams&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.ForceControlledCharacterMove()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceControlledCharacterMove() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.ForceControlledCharacterMove()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.GetActorFeetLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorFeetLocation() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.GetActorFeetLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.GetDefaultMaxSpeed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultMaxSpeed() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.GetDefaultMaxSpeed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.GetGravityZ()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGravityZ() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.GetGravityZ()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.GetJumpZVelocity()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetJumpZVelocity() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.GetJumpZVelocity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.GetMaxSpeed_Internal()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMaxSpeed_Internal() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.GetMaxSpeed_Internal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleImpact(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UShooterCharacterMovement.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.IsUsingLadderPhysics()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsUsingLadderPhysics() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.IsUsingLadderPhysics()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.IsWalkable(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWalkable(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterCharacterMovement.IsWalkable(FHitResult&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.IsWaterWalking()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWaterWalking() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.IsWaterWalking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.LocalClientPostAdjustPosition()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalClientPostAdjustPosition() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.LocalClientPostAdjustPosition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.LocalClientPreAdjustPosition()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalClientPreAdjustPosition() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.LocalClientPreAdjustPosition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnMovementModeChanged(int a0, unsigned char a1) const
    {
        return NativeCall<void*, int, unsigned char>(this, "UShooterCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.PhysCustom(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysCustom(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "UShooterCharacterMovement.PhysCustom(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.PhysicsVolumeChanged(APhysicsVolume*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PhysicsVolumeChanged(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCharacterMovement.PhysicsVolumeChanged(APhysicsVolume*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.PostCalcVelocity(float,float,bool,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostCalcVelocity(float a0, float a1, bool a2, float a3) const
    {
        return NativeCall<void*, float, float, bool, float>(this, "UShooterCharacterMovement.PostCalcVelocity(float,float,bool,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolvePenetrationImpl(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterCharacterMovement.ResolvePenetrationImpl(UE::Math::TVector<double>&,FHitResult&,UE::Math::TQuat<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.SetClimbingTarget(UE::Math::TVector<double>&,UE::Math::TRotator<double
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetClimbingTarget(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterCharacterMovement.SetClimbingTarget(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.SetCurrentAcceleration(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCurrentAcceleration(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterCharacterMovement.SetCurrentAcceleration(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SlideAlongSurface(void* a0, float a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, bool>(this, "UShooterCharacterMovement.SlideAlongSurface(UE::Math::TVector<double>&,float,UE::Math::TVector<double>&,FHitResult&,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.UpdateAnalogueInputModifier()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAnalogueInputModifier() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.UpdateAnalogueInputModifier()");
    }

    BrzCampoPonteiro AccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.Acceleration")); }
    float& AccelerationFollowsRotationMinDotField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AccelerationFollowsRotationMinDot"); }
    float& AccelerationFollowsRotationStopDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AccelerationFollowsRotationStopDistance"); }
    float& AirControlField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AirControl"); }
    float& AirControlBoostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AirControlBoostMultiplier"); }
    float& AirControlBoostVelocityThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AirControlBoostVelocityThreshold"); }
    float& AnalogInputModifierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AnalogInputModifier"); }
    float& AngleToStartRotationBrakingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AngleToStartRotationBraking"); }
    BrzCampoPonteiro AnimRootMotionVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.AnimRootMotionVelocity")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterCharacterMovement.AssetUserData"); }
    float& AvoidanceConsiderationRadiusField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AvoidanceConsiderationRadius"); }
    BrzCampoPonteiro AvoidanceGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.AvoidanceGroup")); }
    int& AvoidanceUIDField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.AvoidanceUID"); }
    float& AvoidanceWeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.AvoidanceWeight"); }
    float& BackwardsMaxSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BackwardsMaxSpeedMultiplier"); }
    float& BackwardsMovementDotThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BackwardsMovementDotThreshold"); }
    float& BrakingDecelerationFallingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingDecelerationFalling"); }
    float& BrakingDecelerationFlyingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingDecelerationFlying"); }
    float& BrakingDecelerationSwimmingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingDecelerationSwimming"); }
    float& BrakingDecelerationWalkingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingDecelerationWalking"); }
    float& BrakingFrictionField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingFriction"); }
    float& BrakingFrictionFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingFrictionFactor"); }
    float& BrakingSubStepTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.BrakingSubStepTime"); }
    float& BuoyancyField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.Buoyancy"); }
    TObjectPtr<ACharacter>& CharacterOwnerField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "UShooterCharacterMovement.CharacterOwner"); }
    float& ClientRunningPositionErrorToleranceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.ClientRunningPositionErrorTolerance"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterCharacterMovement.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.CreationMethod"); }
    float& CrouchedHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.CrouchedHalfHeight"); }
    BrzCampoPonteiro CurrentFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.CurrentFloor")); }
    BrzCampoPonteiro CurrentRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.CurrentRootMotion")); }
    BrzCampoPonteiro CurrentRotationSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.CurrentRotationSpeed")); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.CustomData"); }
    unsigned char& CustomMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterCharacterMovement.CustomMovementMode"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UShooterCharacterMovement.CustomTag"); }
    unsigned char& DefaultLandMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterCharacterMovement.DefaultLandMovementMode"); }
    unsigned char& DefaultWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterCharacterMovement.DefaultWaterMovementMode"); }
    TObjectPtr<USceneComponent>& DeferredUpdatedMoveComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UShooterCharacterMovement.DeferredUpdatedMoveComponent"); }
    float& DinoClientPositionErrorToleranceMovingFlyingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.DinoClientPositionErrorToleranceMovingFlying"); }
    float& DinoClientPositionErrorToleranceStoppedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.DinoClientPositionErrorToleranceStopped"); }
    double& DisableMovementPhysicsUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.DisableMovementPhysicsUntilTime"); }
    float& FallingLateralFrictionField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.FallingLateralFriction"); }
    float& FixedPathBrakingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.FixedPathBrakingDistance"); }
    float& FormerBaseVelocityDecayHalfLifeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.FormerBaseVelocityDecayHalfLife"); }
    BrzCampoPonteiro GravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.GravityDirection")); }
    float& GravityScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.GravityScale"); }
    BrzCampoPonteiro GravityToWorldTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.GravityToWorldTransform")); }
    float& GroundFrictionField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.GroundFriction"); }
    unsigned char& GroundMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterCharacterMovement.GroundMovementMode"); }
    BrzCampoPonteiro GroupsToAvoidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.GroupsToAvoid")); }
    BrzCampoPonteiro GroupsToIgnoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.GroupsToIgnore")); }
    float& InitialPushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.InitialPushForceFactor"); }
    float& JumpOffJumpZFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.JumpOffJumpZFactor"); }
    float& JumpOutOfWaterPitchField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.JumpOutOfWaterPitch"); }
    float& JumpZVelocityField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.JumpZVelocity"); }
    float& LandedPreventRequestedMoveIntervalField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LandedPreventRequestedMoveInterval"); }
    float& LandedPreventRequestedMoveMinVelocityMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LandedPreventRequestedMoveMinVelocityMagnitude"); }
    BrzCampoPonteiro LastForcedNetVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.LastForcedNetVelocity")); }
    float& LastLostDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LastLostDeltaTime"); }
    double& LastSwimTimeField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.LastSwimTime"); }
    BrzCampoPonteiro LastUpdateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.LastUpdateLocation")); }
    BrzCampoPonteiro LastUpdateRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.LastUpdateRequestedVelocity")); }
    BrzCampoPonteiro LastUpdateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.LastUpdateRotation")); }
    BrzCampoPonteiro LastUpdateVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.LastUpdateVelocity")); }
    float& LedgeCheckThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LedgeCheckThreshold"); }
    float& LedgeSlipCapsuleRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LedgeSlipCapsuleRadiusMultiplier"); }
    float& LedgeSlipPushVelocityField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LedgeSlipPushVelocity"); }
    float& LedgeSlipVelocityBuildUpMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LedgeSlipVelocityBuildUpMultiplier"); }
    float& ListenServerNetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.ListenServerNetworkSimulatedSmoothLocationTime"); }
    float& ListenServerNetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.ListenServerNetworkSimulatedSmoothRotationTime"); }
    float& LostDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.LostDeltaTime"); }
    float& MassField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.Mass"); }
    float& MaxAccelerationField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxAcceleration"); }
    float& MaxCustomMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxCustomMovementSpeed"); }
    float& MaxDepenetrationWithGeometryField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxDepenetrationWithGeometry"); }
    float& MaxDepenetrationWithGeometryAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxDepenetrationWithGeometryAsProxy"); }
    float& MaxDepenetrationWithPawnField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxDepenetrationWithPawn"); }
    float& MaxDepenetrationWithPawnAsProxyField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxDepenetrationWithPawnAsProxy"); }
    float& MaxFlySpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxFlySpeed"); }
    float& MaxImpulseVelocityMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxImpulseVelocityMagnitude"); }
    float& MaxImpulseVelocityZField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxImpulseVelocityZ"); }
    int& MaxJumpApexAttemptsPerSimulationField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.MaxJumpApexAttemptsPerSimulation"); }
    float& MaxOutOfWaterStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxOutOfWaterStepHeight"); }
    int& MaxSimulationIterationsField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.MaxSimulationIterations"); }
    float& MaxSimulationTimeStepField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxSimulationTimeStep"); }
    float& MaxSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxSpeedMultiplier"); }
    float& MaxStepHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxStepHeight"); }
    float& MaxSwimSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxSwimSpeed"); }
    float& MaxTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxTouchForce"); }
    float& MaxWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxWalkSpeed"); }
    float& MaxWalkSpeedCrouchedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxWalkSpeedCrouched"); }
    float& MaxWalkSpeedProneField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MaxWalkSpeedProne"); }
    float& MinAnalogWalkSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MinAnalogWalkSpeed"); }
    float& MinTimeBetweenTimeStampResetsField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MinTimeBetweenTimeStampResets"); }
    float& MinTouchForceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MinTouchForce"); }
    float& MinimumImpulseToApplyField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.MinimumImpulseToApply"); }
    unsigned char& MovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterCharacterMovement.MovementMode"); }
    BrzCampoPonteiro MovementStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.MovementState")); }
    BrzCampoPonteiro NavAgentPropsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.NavAgentProps")); }
    float& NavMeshProjectionHeightScaleDownField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavMeshProjectionHeightScaleDown"); }
    float& NavMeshProjectionHeightScaleUpField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavMeshProjectionHeightScaleUp"); }
    float& NavMeshProjectionInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavMeshProjectionInterpSpeed"); }
    float& NavMeshProjectionIntervalField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavMeshProjectionInterval"); }
    float& NavMeshProjectionTimerField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavMeshProjectionTimer"); }
    BrzCampoPonteiro NavMovementPropertiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.NavMovementProperties")); }
    float& NavWalkingFloorDistToleranceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NavWalkingFloorDistTolerance"); }
    float& NetProxyShrinkHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetProxyShrinkHalfHeight"); }
    float& NetProxyShrinkRadiusField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetProxyShrinkRadius"); }
    float& NetworkLargeClientCorrectionDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkLargeClientCorrectionDistance"); }
    float& NetworkMaxSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkMaxSmoothUpdateDistance"); }
    float& NetworkMinTimeBetweenClientAckGoodMovesField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkMinTimeBetweenClientAckGoodMoves"); }
    float& NetworkMinTimeBetweenClientAdjustmentsField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkMinTimeBetweenClientAdjustments"); }
    float& NetworkMinTimeBetweenClientAdjustmentsLargeCorrectionField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkMinTimeBetweenClientAdjustmentsLargeCorrection"); }
    float& NetworkNoSmoothUpdateDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkNoSmoothUpdateDistance"); }
    float& NetworkSimulatedSmoothLocationTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkSimulatedSmoothLocationTime"); }
    float& NetworkSimulatedSmoothRotationTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.NetworkSimulatedSmoothRotationTime"); }
    int& NetworkSmoothingModeField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.NetworkSmoothingMode"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.OnComponentDeactivated")); }
    float& OutofWaterZField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.OutofWaterZ"); }
    BrzCampoPonteiro PathFollowingCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PathFollowingComp")); }
    TObjectPtr<APawn>& PawnOwnerField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "UShooterCharacterMovement.PawnOwner"); }
    BrzCampoPonteiro PendingForceToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PendingForceToApply")); }
    BrzCampoPonteiro PendingImpulseToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PendingImpulseToApply")); }
    BrzCampoPonteiro PendingLaunchVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PendingLaunchVelocity")); }
    float& PerchAdditionalHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PerchAdditionalHeight"); }
    float& PerchRadiusThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PerchRadiusThreshold"); }
    int& PlaneConstraintAxisSettingField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.PlaneConstraintAxisSetting"); }
    BrzCampoPonteiro PlaneConstraintNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PlaneConstraintNormal")); }
    BrzCampoPonteiro PlaneConstraintOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PlaneConstraintOrigin")); }
    float& PlayerClientPositionErrorToleranceOverrideField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PlayerClientPositionErrorToleranceOverride"); }
    BrzCampoPonteiro PostPhysicsTickFunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.PostPhysicsTickFunction")); }
    float& PreventWaterHoppingPlaneOffsetField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PreventWaterHoppingPlaneOffset"); }
    double& PreventWaterHopping_LastTimeAtSurfaceField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.PreventWaterHopping_LastTimeAtSurface"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UShooterCharacterMovement.PrimaryComponentTick"); }
    float& ProneHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.ProneHalfHeight"); }
    float& PushForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PushForceFactor"); }
    float& PushForcePointZOffsetFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.PushForcePointZOffsetFactor"); }
    float& RepulsionForceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.RepulsionForce"); }
    BrzCampoPonteiro RequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.RequestedVelocity")); }
    BrzCampoPonteiro RootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.RootMotionParams")); }
    float& RotationAccelerationField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.RotationAcceleration"); }
    float& RotationBrakingField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.RotationBraking"); }
    BrzCampoPonteiro RotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.RotationRate")); }
    BrzCampoPonteiro ServerCorrectionRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.ServerCorrectionRootMotion")); }
    double& ServerLastClientAdjustmentTimeField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.ServerLastClientAdjustmentTime"); }
    double& ServerLastClientGoodMoveAckTimeField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.ServerLastClientGoodMoveAckTime"); }
    double& ServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "UShooterCharacterMovement.ServerLastTransformUpdateTimeStamp"); }
    float& SimulatedTickSkipDistanceSQField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SimulatedTickSkipDistanceSQ"); }
    float& SlopeJumpAirControlField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SlopeJumpAirControl"); }
    float& SlopeJumpMinNormalZField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SlopeJumpMinNormalZ"); }
    float& SlopeJumpTraceExtraDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SlopeJumpTraceExtraDistance"); }
    float& SlopeJumpZVelocityField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SlopeJumpZVelocity"); }
    float& StandingDownwardForceScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.StandingDownwardForceScale"); }
    float& StayBasedInAirHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.StayBasedInAirHeight"); }
    float& SwimmingAccelZMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.SwimmingAccelZMultiplier"); }
    float& TamedSwimmingAccelZMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.TamedSwimmingAccelZMultiplier"); }
    float& TimeLeftToForceTickEveryFrameField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.TimeLeftToForceTickEveryFrame"); }
    float& TouchForceFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.TouchForceFactor"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterCharacterMovement.UCSSerializationIndex"); }
    TObjectPtr<USceneComponent>& UpdatedComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UShooterCharacterMovement.UpdatedComponent"); }
    TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UShooterCharacterMovement.UpdatedPrimitive"); }
    BrzCampoPonteiro VelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.Velocity")); }
    float& WalkableFloorAngleField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.WalkableFloorAngle"); }
    float& WalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.WalkableFloorZ"); }
    BrzCampoPonteiro WantsToDodgeVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.WantsToDodgeVelocity")); }
    float& WaterDinoSurfacePitchClampCapsuleDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.WaterDinoSurfacePitchClampCapsuleDistanceMultiplier"); }
    float& WaterDinoSurfacePitchClampMaxPitchField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.WaterDinoSurfacePitchClampMaxPitch"); }
    float& WaveLockingMaxZOffsetField() const
    { return *GetNativePointerField<float*>(this, "UShooterCharacterMovement.WaveLockingMaxZOffset"); }
    BrzCampoPonteiro WorldToGravityTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.WorldToGravityTransform")); }
    BrzCampoPonteiro bAccelerationFollowsRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAccelerationFollowsRotation")); }
    BrzCampoPonteiro bAllowImpactDeflectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAllowImpactDeflection")); }
    BrzCampoPonteiro bAllowPhysicsRotationDuringAnimRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAllowPhysicsRotationDuringAnimRootMotion")); }
    BrzCampoPonteiro bAllowSimulatedTickDistanceSkipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAllowSimulatedTickDistanceSkip")); }
    BrzCampoPonteiro bAllowWaterWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAllowWaterWalking")); }
    BrzCampoPonteiro bAlwaysCheckFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAlwaysCheckFloor")); }
    BrzCampoPonteiro bAlwaysCheckForInvallidFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAlwaysCheckForInvallidFloor")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bApplyGravityWhileJumpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bApplyGravityWhileJumping")); }
    BrzCampoPonteiro bAssumeSymmetricalRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAssumeSymmetricalRotation")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAutoActivate")); }
    BrzCampoPonteiro bAutoRegisterPhysicsVolumeUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAutoRegisterPhysicsVolumeUpdates")); }
    BrzCampoPonteiro bAutoRegisterUpdatedComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAutoRegisterUpdatedComponent")); }
    BrzCampoPonteiro bAutoUpdateTickRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bAutoUpdateTickRegistration")); }
    BrzCampoPonteiro bBaseOnAttachmentRootField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bBaseOnAttachmentRoot")); }
    BrzCampoPonteiro bBasedMovementIgnorePhysicsBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bBasedMovementIgnorePhysicsBase")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCanSlideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCanSlide")); }
    BrzCampoPonteiro bCanWalkOffLedgesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCanWalkOffLedges")); }
    BrzCampoPonteiro bCanWalkOffLedgesWhenCrouchingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCanWalkOffLedgesWhenCrouching")); }
    BrzCampoPonteiro bCheatFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCheatFlying")); }
    BrzCampoPonteiro bCheckFallingAITempIgnoreDinoRiderMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCheckFallingAITempIgnoreDinoRiderMesh")); }
    BrzCampoPonteiro bClippedToWaterSurfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bClippedToWaterSurface")); }
    BrzCampoPonteiro bComponentShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bComponentShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bConstrainToPlaneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bConstrainToPlane")); }
    BrzCampoPonteiro bCrouchMaintainsBaseLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bCrouchMaintainsBaseLocation")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDeferUpdateMoveComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bDeferUpdateMoveComponent")); }
    BrzCampoPonteiro bDisableSimulatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bDisableSimulatedMovement")); }
    BrzCampoPonteiro bDontClearRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bDontClearRequestedVelocity")); }
    BrzCampoPonteiro bDontFallBelowJumpZVelocityDuringJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bDontFallBelowJumpZVelocityDuringJump")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bEditableWhenInherited")); }
    BrzCampoPonteiro bEnablePhysicsInteractionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bEnablePhysicsInteraction")); }
    BrzCampoPonteiro bEnableScopedMovementUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bEnableScopedMovementUpdates")); }
    BrzCampoPonteiro bEnableServerDualMoveScopedMovementUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bEnableServerDualMoveScopedMovementUpdates")); }
    BrzCampoPonteiro bEnableSwimmingOutsideOfWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bEnableSwimmingOutsideOfWater")); }
    BrzCampoPonteiro bFallVelocityRecursionGuardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bFallVelocityRecursionGuard")); }
    BrzCampoPonteiro bFastAttachedMoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bFastAttachedMove")); }
    BrzCampoPonteiro bForceAccelerationFollowsRotationInSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForceAccelerationFollowsRotationInSwimming")); }
    BrzCampoPonteiro bForceDontAllowDesiredRotationWhenFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForceDontAllowDesiredRotationWhenFalling")); }
    BrzCampoPonteiro bForceMaxAccelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForceMaxAccel")); }
    BrzCampoPonteiro bForceModifyDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForceModifyDesiredRotation")); }
    BrzCampoPonteiro bForceNextFloorCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForceNextFloorCheck")); }
    BrzCampoPonteiro bForcePreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bForcePreventExitingWater")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHasRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bHasRequestedVelocity")); }
    BrzCampoPonteiro bIgnoreBaseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bIgnoreBaseRotation")); }
    BrzCampoPonteiro bIgnoreClientMovementErrorChecksAndCorrectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bIgnoreClientMovementErrorChecksAndCorrection")); }
    BrzCampoPonteiro bIgnoreRotationAccelerationWhenSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bIgnoreRotationAccelerationWhenSwimming")); }
    BrzCampoPonteiro bImpartBaseAngularVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bImpartBaseAngularVelocity")); }
    BrzCampoPonteiro bImpartBaseVelocityXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bImpartBaseVelocityX")); }
    BrzCampoPonteiro bImpartBaseVelocityYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bImpartBaseVelocityY")); }
    BrzCampoPonteiro bImpartBaseVelocityZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bImpartBaseVelocityZ")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bIsEditorOnly")); }
    BrzCampoPonteiro bJustTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bJustTeleported")); }
    BrzCampoPonteiro bLastHasRequestedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bLastHasRequestedVelocity")); }
    BrzCampoPonteiro bMaintainHorizontalGroundVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bMaintainHorizontalGroundVelocity")); }
    BrzCampoPonteiro bMovementInProgressField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bMovementInProgress")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetAddressable")); }
    BrzCampoPonteiro bNetworkAlwaysReplicateTransformUpdateTimestampField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetworkAlwaysReplicateTransformUpdateTimestamp")); }
    BrzCampoPonteiro bNetworkGravityDirectionChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetworkGravityDirectionChanged")); }
    BrzCampoPonteiro bNetworkMovementModeChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetworkMovementModeChanged")); }
    BrzCampoPonteiro bNetworkSkipProxyPredictionOnNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetworkSkipProxyPredictionOnNetUpdate")); }
    BrzCampoPonteiro bNetworkUpdateReceivedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNetworkUpdateReceived")); }
    BrzCampoPonteiro bNotifyApexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bNotifyApex")); }
    BrzCampoPonteiro bOnlyForwardsInputAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOnlyForwardsInputAcceleration")); }
    BrzCampoPonteiro bOnlyForwardsInputAccelerationWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOnlyForwardsInputAccelerationWalking")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyUseRotationAccelerationWhenNoLinearAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOnlyUseRotationAccelerationWhenNoLinearAcceleration")); }
    BrzCampoPonteiro bOrientRotationToMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bOrientRotationToMovement")); }
    BrzCampoPonteiro bPerformingJumpOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPerformingJumpOff")); }
    BrzCampoPonteiro bPreventAddingImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventAddingImpulse")); }
    BrzCampoPonteiro bPreventEnteringWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventEnteringWater")); }
    BrzCampoPonteiro bPreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventExitingWater")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPreventPhysicsModeChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventPhysicsModeChange")); }
    BrzCampoPonteiro bPreventSlidingWhileFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventSlidingWhileFalling")); }
    BrzCampoPonteiro bPreventWaterSurfaceHoppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventWaterSurfaceHopping")); }
    BrzCampoPonteiro bPreventZeroPitchAndRollWhileFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPreventZeroPitchAndRollWhileFalling")); }
    BrzCampoPonteiro bProjectNavMeshOnBothWorldChannelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bProjectNavMeshOnBothWorldChannels")); }
    BrzCampoPonteiro bProjectNavMeshWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bProjectNavMeshWalking")); }
    BrzCampoPonteiro bPushForceScaledToMassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPushForceScaledToMass")); }
    BrzCampoPonteiro bPushForceUsingZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bPushForceUsingZOffset")); }
    BrzCampoPonteiro bReduceBackwardsMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bReduceBackwardsMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bReplicates")); }
    BrzCampoPonteiro bRequestedMoveUseAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bRequestedMoveUseAcceleration")); }
    BrzCampoPonteiro bRequestedMoveWithMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bRequestedMoveWithMaxSpeed")); }
    BrzCampoPonteiro bRequireAccelerationForUseControllerDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bRequireAccelerationForUseControllerDesiredRotation")); }
    BrzCampoPonteiro bRunPhysicsWithNoControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bRunPhysicsWithNoController")); }
    BrzCampoPonteiro bSaveNonLocallyControlledRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bSaveNonLocallyControlledRootMotion")); }
    BrzCampoPonteiro bScalePushForceToVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bScalePushForceToVelocity")); }
    BrzCampoPonteiro bServerAcceptClientAuthoritativePositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bServerAcceptClientAuthoritativePosition")); }
    BrzCampoPonteiro bServerCorrectForMovementModeChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bServerCorrectForMovementModeChanges")); }
    BrzCampoPonteiro bShrinkProxyCapsuleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bShrinkProxyCapsule")); }
    BrzCampoPonteiro bSlipOffLedgesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bSlipOffLedges")); }
    BrzCampoPonteiro bSnapToPlaneAtStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bSnapToPlaneAtStart")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bStasisPreventUnregister")); }
    BrzCampoPonteiro bStayBasedInAirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bStayBasedInAir")); }
    BrzCampoPonteiro bSweepWhileNavWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bSweepWhileNavWalking")); }
    BrzCampoPonteiro bTickBeforeOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bTickBeforeOwner")); }
    BrzCampoPonteiro bTouchForceScaledToMassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bTouchForceScaledToMass")); }
    BrzCampoPonteiro bUpdateNavAgentWithOwnersCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUpdateNavAgentWithOwnersCollision")); }
    BrzCampoPonteiro bUpdateOnlyIfRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUpdateOnlyIfRendered")); }
    BrzCampoPonteiro bUseAccelerationForPathsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseAccelerationForPaths")); }
    BrzCampoPonteiro bUseAdditionalLinePenetrationChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseAdditionalLinePenetrationChecks")); }
    BrzCampoPonteiro bUseAsyncWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseAsyncWalking")); }
    BrzCampoPonteiro bUseBPAcknowledgeServerCorrectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseBPAcknowledgeServerCorrection")); }
    BrzCampoPonteiro bUseBPAdjustServerMoveDeltaTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseBPAdjustServerMoveDeltaTime")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseCharacterInterpolationAndStopsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseCharacterInterpolationAndStops")); }
    BrzCampoPonteiro bUseControllerDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseControllerDesiredRotation")); }
    BrzCampoPonteiro bUseFixedBrakingDistanceForPathsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseFixedBrakingDistanceForPaths")); }
    BrzCampoPonteiro bUseFlatBaseForFloorChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseFlatBaseForFloorChecks")); }
    BrzCampoPonteiro bUseRVOAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseRVOAvoidance")); }
    BrzCampoPonteiro bUseRotationAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseRotationAcceleration")); }
    BrzCampoPonteiro bUseSeparateBrakingFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseSeparateBrakingFriction")); }
    BrzCampoPonteiro bUseWaveLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseWaveLocking")); }
    BrzCampoPonteiro bUseWeaponSpeedMultiplierByDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bUseWeaponSpeedMultiplierByDirection")); }
    BrzCampoPonteiro bWantsToCrouchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWantsToCrouch")); }
    BrzCampoPonteiro bWantsToDodgeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWantsToDodge")); }
    BrzCampoPonteiro bWantsToLeaveNavWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWantsToLeaveNavWalking")); }
    BrzCampoPonteiro bWantsToProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWantsToProne")); }
    BrzCampoPonteiro bWasAvoidanceUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWasAvoidanceUpdated")); }
    BrzCampoPonteiro bWasSimulatingRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWasSimulatingRootMotion")); }
    BrzCampoPonteiro bWaterBaseOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bWaterBaseOnly")); }
    BrzCampoPonteiro bZeroPitchWhenNoAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterCharacterMovement.bZeroPitchWhenNoAcceleration")); }
    BitFieldValue<bool, unsigned __int32> bAllowWaterWalking()
    { return { (void*)this, "bAllowWaterWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdditionalLinePenetrationChecks()
    { return { (void*)this, "bUseAdditionalLinePenetrationChecks" }; }
    BitFieldValue<bool, unsigned __int32> bWaterBaseOnly()
    { return { (void*)this, "bWaterBaseOnly" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERCHARACTERMOVEMENT_H
