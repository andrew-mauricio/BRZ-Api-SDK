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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BP_GetAnalogueInputModifier() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.BP_GetAnalogueInputModifier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.BP_PerformMovement(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro BP_PerformMovement(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterCharacterMovement.BP_PerformMovement(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.CanCrouchInCurrentState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=48]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=305]]
    BrzPonteiro LocalClientPostAdjustPosition() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.LocalClientPostAdjustPosition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.LocalClientPreAdjustPosition()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=92]]
    BrzPonteiro LocalClientPreAdjustPosition() const
    {
        return NativeCall<void*>(this, "UShooterCharacterMovement.LocalClientPreAdjustPosition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterCharacterMovement.OnMovementModeChanged(EMovementMode,unsignedchar)
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=49]]
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
    BitFieldValue<bool, unsigned __int32> Velocity()
    { return { (void*)this, "Velocity" }; }
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
    BitFieldValue<bool, unsigned __int32> bAccelerationFollowsRotation()
    { return { (void*)this, "bAccelerationFollowsRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowImpactDeflection()
    { return { (void*)this, "bAllowImpactDeflection" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPhysicsRotationDuringAnimRootMotion()
    { return { (void*)this, "bAllowPhysicsRotationDuringAnimRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSimulatedTickDistanceSkip()
    { return { (void*)this, "bAllowSimulatedTickDistanceSkip" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckFloor()
    { return { (void*)this, "bAlwaysCheckFloor" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckForInvallidFloor()
    { return { (void*)this, "bAlwaysCheckForInvallidFloor" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bApplyGravityWhileJumping()
    { return { (void*)this, "bApplyGravityWhileJumping" }; }
    BitFieldValue<bool, unsigned __int32> bAssumeSymmetricalRotation()
    { return { (void*)this, "bAssumeSymmetricalRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterPhysicsVolumeUpdates()
    { return { (void*)this, "bAutoRegisterPhysicsVolumeUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterUpdatedComponent()
    { return { (void*)this, "bAutoRegisterUpdatedComponent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateTickRegistration()
    { return { (void*)this, "bAutoUpdateTickRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bBaseOnAttachmentRoot()
    { return { (void*)this, "bBaseOnAttachmentRoot" }; }
    BitFieldValue<bool, unsigned __int32> bBasedMovementIgnorePhysicsBase()
    { return { (void*)this, "bBasedMovementIgnorePhysicsBase" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCanSlide()
    { return { (void*)this, "bCanSlide" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedges()
    { return { (void*)this, "bCanWalkOffLedges" }; }
    BitFieldValue<bool, unsigned __int32> bCanWalkOffLedgesWhenCrouching()
    { return { (void*)this, "bCanWalkOffLedgesWhenCrouching" }; }
    BitFieldValue<bool, unsigned __int32> bCheatFlying()
    { return { (void*)this, "bCheatFlying" }; }
    BitFieldValue<bool, unsigned __int32> bCheckFallingAITempIgnoreDinoRiderMesh()
    { return { (void*)this, "bCheckFallingAITempIgnoreDinoRiderMesh" }; }
    BitFieldValue<bool, unsigned __int32> bClippedToWaterSurface()
    { return { (void*)this, "bClippedToWaterSurface" }; }
    BitFieldValue<bool, unsigned __int32> bComponentShouldUpdatePhysicsVolume()
    { return { (void*)this, "bComponentShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainToPlane()
    { return { (void*)this, "bConstrainToPlane" }; }
    BitFieldValue<bool, unsigned __int32> bCrouchMaintainsBaseLocation()
    { return { (void*)this, "bCrouchMaintainsBaseLocation" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDeferUpdateMoveComponent()
    { return { (void*)this, "bDeferUpdateMoveComponent" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSimulatedMovement()
    { return { (void*)this, "bDisableSimulatedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bDontClearRequestedVelocity()
    { return { (void*)this, "bDontClearRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bDontFallBelowJumpZVelocityDuringJump()
    { return { (void*)this, "bDontFallBelowJumpZVelocityDuringJump" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePhysicsInteraction()
    { return { (void*)this, "bEnablePhysicsInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnableScopedMovementUpdates()
    { return { (void*)this, "bEnableScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bEnableServerDualMoveScopedMovementUpdates()
    { return { (void*)this, "bEnableServerDualMoveScopedMovementUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSwimmingOutsideOfWater()
    { return { (void*)this, "bEnableSwimmingOutsideOfWater" }; }
    BitFieldValue<bool, unsigned __int32> bFallVelocityRecursionGuard()
    { return { (void*)this, "bFallVelocityRecursionGuard" }; }
    BitFieldValue<bool, unsigned __int32> bFastAttachedMove()
    { return { (void*)this, "bFastAttachedMove" }; }
    BitFieldValue<bool, unsigned __int32> bForceAccelerationFollowsRotationInSwimming()
    { return { (void*)this, "bForceAccelerationFollowsRotationInSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bForceDontAllowDesiredRotationWhenFalling()
    { return { (void*)this, "bForceDontAllowDesiredRotationWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bForceMaxAccel()
    { return { (void*)this, "bForceMaxAccel" }; }
    BitFieldValue<bool, unsigned __int32> bForceModifyDesiredRotation()
    { return { (void*)this, "bForceModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNextFloorCheck()
    { return { (void*)this, "bForceNextFloorCheck" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater()
    { return { (void*)this, "bForcePreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHasRequestedVelocity()
    { return { (void*)this, "bHasRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreBaseRotation()
    { return { (void*)this, "bIgnoreBaseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreClientMovementErrorChecksAndCorrection()
    { return { (void*)this, "bIgnoreClientMovementErrorChecksAndCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreRotationAccelerationWhenSwimming()
    { return { (void*)this, "bIgnoreRotationAccelerationWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseAngularVelocity()
    { return { (void*)this, "bImpartBaseAngularVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityX()
    { return { (void*)this, "bImpartBaseVelocityX" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityY()
    { return { (void*)this, "bImpartBaseVelocityY" }; }
    BitFieldValue<bool, unsigned __int32> bImpartBaseVelocityZ()
    { return { (void*)this, "bImpartBaseVelocityZ" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bJustTeleported()
    { return { (void*)this, "bJustTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bLastHasRequestedVelocity()
    { return { (void*)this, "bLastHasRequestedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bMaintainHorizontalGroundVelocity()
    { return { (void*)this, "bMaintainHorizontalGroundVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bMovementInProgress()
    { return { (void*)this, "bMovementInProgress" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkAlwaysReplicateTransformUpdateTimestamp()
    { return { (void*)this, "bNetworkAlwaysReplicateTransformUpdateTimestamp" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkGravityDirectionChanged()
    { return { (void*)this, "bNetworkGravityDirectionChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkMovementModeChanged()
    { return { (void*)this, "bNetworkMovementModeChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSkipProxyPredictionOnNetUpdate()
    { return { (void*)this, "bNetworkSkipProxyPredictionOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkUpdateReceived()
    { return { (void*)this, "bNetworkUpdateReceived" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyApex()
    { return { (void*)this, "bNotifyApex" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAcceleration()
    { return { (void*)this, "bOnlyForwardsInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyForwardsInputAccelerationWalking()
    { return { (void*)this, "bOnlyForwardsInputAccelerationWalking" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseRotationAccelerationWhenNoLinearAcceleration()
    { return { (void*)this, "bOnlyUseRotationAccelerationWhenNoLinearAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOrientRotationToMovement()
    { return { (void*)this, "bOrientRotationToMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPerformingJumpOff()
    { return { (void*)this, "bPerformingJumpOff" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAddingImpulse()
    { return { (void*)this, "bPreventAddingImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEnteringWater()
    { return { (void*)this, "bPreventEnteringWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventExitingWater()
    { return { (void*)this, "bPreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPhysicsModeChange()
    { return { (void*)this, "bPreventPhysicsModeChange" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSlidingWhileFalling()
    { return { (void*)this, "bPreventSlidingWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterSurfaceHopping()
    { return { (void*)this, "bPreventWaterSurfaceHopping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroPitchAndRollWhileFalling()
    { return { (void*)this, "bPreventZeroPitchAndRollWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshOnBothWorldChannels()
    { return { (void*)this, "bProjectNavMeshOnBothWorldChannels" }; }
    BitFieldValue<bool, unsigned __int32> bProjectNavMeshWalking()
    { return { (void*)this, "bProjectNavMeshWalking" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceScaledToMass()
    { return { (void*)this, "bPushForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bPushForceUsingZOffset()
    { return { (void*)this, "bPushForceUsingZOffset" }; }
    BitFieldValue<bool, unsigned __int32> bReduceBackwardsMovement()
    { return { (void*)this, "bReduceBackwardsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveUseAcceleration()
    { return { (void*)this, "bRequestedMoveUseAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bRequestedMoveWithMaxSpeed()
    { return { (void*)this, "bRequestedMoveWithMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bRequireAccelerationForUseControllerDesiredRotation()
    { return { (void*)this, "bRequireAccelerationForUseControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bRunPhysicsWithNoController()
    { return { (void*)this, "bRunPhysicsWithNoController" }; }
    BitFieldValue<bool, unsigned __int32> bSaveNonLocallyControlledRootMotion()
    { return { (void*)this, "bSaveNonLocallyControlledRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bScalePushForceToVelocity()
    { return { (void*)this, "bScalePushForceToVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bServerAcceptClientAuthoritativePosition()
    { return { (void*)this, "bServerAcceptClientAuthoritativePosition" }; }
    BitFieldValue<bool, unsigned __int32> bServerCorrectForMovementModeChanges()
    { return { (void*)this, "bServerCorrectForMovementModeChanges" }; }
    BitFieldValue<bool, unsigned __int32> bShrinkProxyCapsule()
    { return { (void*)this, "bShrinkProxyCapsule" }; }
    BitFieldValue<bool, unsigned __int32> bSlipOffLedges()
    { return { (void*)this, "bSlipOffLedges" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToPlaneAtStart()
    { return { (void*)this, "bSnapToPlaneAtStart" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bStayBasedInAir()
    { return { (void*)this, "bStayBasedInAir" }; }
    BitFieldValue<bool, unsigned __int32> bSweepWhileNavWalking()
    { return { (void*)this, "bSweepWhileNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bTickBeforeOwner()
    { return { (void*)this, "bTickBeforeOwner" }; }
    BitFieldValue<bool, unsigned __int32> bTouchForceScaledToMass()
    { return { (void*)this, "bTouchForceScaledToMass" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateNavAgentWithOwnersCollision()
    { return { (void*)this, "bUpdateNavAgentWithOwnersCollision" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOnlyIfRendered()
    { return { (void*)this, "bUpdateOnlyIfRendered" }; }
    BitFieldValue<bool, unsigned __int32> bUseAccelerationForPaths()
    { return { (void*)this, "bUseAccelerationForPaths" }; }
    BitFieldValue<bool, unsigned __int32> bUseAsyncWalking()
    { return { (void*)this, "bUseAsyncWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAcknowledgeServerCorrection()
    { return { (void*)this, "bUseBPAcknowledgeServerCorrection" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustServerMoveDeltaTime()
    { return { (void*)this, "bUseBPAdjustServerMoveDeltaTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseCharacterInterpolationAndStops()
    { return { (void*)this, "bUseCharacterInterpolationAndStops" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerDesiredRotation()
    { return { (void*)this, "bUseControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedBrakingDistanceForPaths()
    { return { (void*)this, "bUseFixedBrakingDistanceForPaths" }; }
    BitFieldValue<bool, unsigned __int32> bUseFlatBaseForFloorChecks()
    { return { (void*)this, "bUseFlatBaseForFloorChecks" }; }
    BitFieldValue<bool, unsigned __int32> bUseRVOAvoidance()
    { return { (void*)this, "bUseRVOAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseRotationAcceleration()
    { return { (void*)this, "bUseRotationAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bUseSeparateBrakingFriction()
    { return { (void*)this, "bUseSeparateBrakingFriction" }; }
    BitFieldValue<bool, unsigned __int32> bUseWaveLocking()
    { return { (void*)this, "bUseWaveLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseWeaponSpeedMultiplierByDirection()
    { return { (void*)this, "bUseWeaponSpeedMultiplierByDirection" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToCrouch()
    { return { (void*)this, "bWantsToCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToDodge()
    { return { (void*)this, "bWantsToDodge" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToLeaveNavWalking()
    { return { (void*)this, "bWantsToLeaveNavWalking" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToProne()
    { return { (void*)this, "bWantsToProne" }; }
    BitFieldValue<bool, unsigned __int32> bWasAvoidanceUpdated()
    { return { (void*)this, "bWasAvoidanceUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bWasSimulatingRootMotion()
    { return { (void*)this, "bWasSimulatingRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bZeroPitchWhenNoAcceleration()
    { return { (void*)this, "bZeroPitchWhenNoAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWaterWalking()
    { return { (void*)this, "bAllowWaterWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdditionalLinePenetrationChecks()
    { return { (void*)this, "bUseAdditionalLinePenetrationChecks" }; }
    BitFieldValue<bool, unsigned __int32> bWaterBaseOnly()
    { return { (void*)this, "bWaterBaseOnly" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERCHARACTERMOVEMENT_H
