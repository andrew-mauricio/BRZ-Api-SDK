// ==========================================================================
//  UShooterProjectileMovement — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERPROJECTILEMOVEMENT_H
#define BRZ_SDK_JOGO_USHOOTERPROJECTILEMOVEMENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;
struct UPrimitiveComponent;
struct USceneComponent;


struct UShooterProjectileMovement
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterProjectileMovement"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterProjectileMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: cache_pdb_25090264
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UShooterProjectileMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterProjectileMovement.UpdateHomingMissTracking(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateHomingMissTracking(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterProjectileMovement.UpdateHomingMissTracking(UE::Math::TVector<double>&)", a0);
    }

    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterProjectileMovement.AssetUserData"); }
    BrzCampoPonteiro BasedLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.BasedLocation")); }
    BrzCampoPonteiro BasedOnComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.BasedOnComponent")); }
    BrzCampoPonteiro BasedRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.BasedRotation")); }
    BrzCampoPonteiro BasedVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.BasedVelocity")); }
    float& BounceVelocityStopSimulatingThresholdField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.BounceVelocityStopSimulatingThreshold"); }
    float& BouncinessField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.Bounciness"); }
    float& BuoyancyField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.Buoyancy"); }
    float& ClosestHomingTargetDistanceSqField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ClosestHomingTargetDistanceSq"); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UShooterProjectileMovement.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UShooterProjectileMovement.CustomTag"); }
    float& ElapsedLifespanField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ElapsedLifespan"); }
    float& FallingProjectileDampingFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.FallingProjectileDampingFactor"); }
    float& FrictionField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.Friction"); }
    float& HomingAccelerationMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.HomingAccelerationMagnitude"); }
    TWeakObjectPtr<void>& HomingMissTrackingTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UShooterProjectileMovement.HomingMissTrackingTarget"); }
    BrzCampoPonteiro HomingMissTrackingTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.HomingMissTrackingTargetOffset")); }
    TWeakObjectPtr<void>& HomingTargetComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UShooterProjectileMovement.HomingTargetComponent"); }
    BrzCampoPonteiro HomingTargetComponentOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.HomingTargetComponentOffset")); }
    float& InitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.InitialSpeed"); }
    BrzCampoPonteiro LastHomingToTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.LastHomingToTarget")); }
    int& MaxSimulationIterationsField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.MaxSimulationIterations"); }
    float& MaxSimulationTimeStepField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.MaxSimulationTimeStep"); }
    float& MaxSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.MaxSpeed"); }
    float& MinLifespanToUpdateField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.MinLifespanToUpdate"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.OnComponentDeactivated")); }
    BrzCampoPonteiro OnProjectileBounceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.OnProjectileBounce")); }
    BrzCampoPonteiro OnProjectileStopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.OnProjectileStop")); }
    int& PlaneConstraintAxisSettingField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.PlaneConstraintAxisSetting"); }
    BrzCampoPonteiro PlaneConstraintNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.PlaneConstraintNormal")); }
    BrzCampoPonteiro PlaneConstraintOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.PlaneConstraintOrigin")); }
    BrzCampoPonteiro PreviousVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.PreviousVelocity")); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UShooterProjectileMovement.PrimaryComponentTick"); }
    float& ProjectileDampingFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ProjectileDampingFactor"); }
    float& ProjectileGravityScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ProjectileGravityScale"); }
    float& ProjectileUnderwaterExtraGravityScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ProjectileUnderwaterExtraGravityScale"); }
    float& ProjectileUnderwaterExtraSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.ProjectileUnderwaterExtraSpeedScale"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.UCSSerializationIndex"); }
    TObjectPtr<USceneComponent>& UpdatedComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UShooterProjectileMovement.UpdatedComponent"); }
    TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UShooterProjectileMovement.UpdatedPrimitive"); }
    BitFieldValue<bool, unsigned __int32> Velocity()
    { return { (void*)this, "Velocity" }; }
    BitFieldValue<bool, unsigned __int32> bAffectedByBasedCompRotation()
    { return { (void*)this, "bAffectedByBasedCompRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterPhysicsVolumeUpdates()
    { return { (void*)this, "bAutoRegisterPhysicsVolumeUpdates" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRegisterUpdatedComponent()
    { return { (void*)this, "bAutoRegisterUpdatedComponent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoUpdateTickRegistration()
    { return { (void*)this, "bAutoUpdateTickRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForProjectileUnderwater()
    { return { (void*)this, "bCheckForProjectileUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bComponentShouldUpdatePhysicsVolume()
    { return { (void*)this, "bComponentShouldUpdatePhysicsVolume" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainToPlane()
    { return { (void*)this, "bConstrainToPlane" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bForceSubStepping()
    { return { (void*)this, "bForceSubStepping" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bInitialVelocityInLocalSpace()
    { return { (void*)this, "bInitialVelocityInLocalSpace" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bIsHomingProjectile()
    { return { (void*)this, "bIsHomingProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bIsProjectileUnderwater()
    { return { (void*)this, "bIsProjectileUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bKeepInitialBasedOnComponent()
    { return { (void*)this, "bKeepInitialBasedOnComponent" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRotationFollowsVelocity()
    { return { (void*)this, "bRotationFollowsVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBounce()
    { return { (void*)this, "bShouldBounce" }; }
    BitFieldValue<bool, unsigned __int32> bSnapToPlaneAtStart()
    { return { (void*)this, "bSnapToPlaneAtStart" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bTickBeforeOwner()
    { return { (void*)this, "bTickBeforeOwner" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBounceImpactNotification()
    { return { (void*)this, "bTriggerBounceImpactNotification" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateOnlyIfRendered()
    { return { (void*)this, "bUpdateOnlyIfRendered" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHomingAfterMiss()
    { return { (void*)this, "bDisableHomingAfterMiss" }; }
    BitFieldValue<bool, unsigned __int32> bHasHomingMissTrackingDistance()
    { return { (void*)this, "bHasHomingMissTrackingDistance" }; }
    BitFieldValue<bool, unsigned __int32> bHomingTargetWasApproached()
    { return { (void*)this, "bHomingTargetWasApproached" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERPROJECTILEMOVEMENT_H
