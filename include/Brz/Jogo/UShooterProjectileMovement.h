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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UShooterProjectileMovement.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterProjectileMovement.UpdateHomingMissTracking(UE::Math::TVector<double>&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    float& TamedEnemyHomingAccelerationMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "UShooterProjectileMovement.TamedEnemyHomingAccelerationMagnitude"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterProjectileMovement.UCSSerializationIndex"); }
    TObjectPtr<USceneComponent>& UpdatedComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "UShooterProjectileMovement.UpdatedComponent"); }
    TObjectPtr<UPrimitiveComponent>& UpdatedPrimitiveField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UShooterProjectileMovement.UpdatedPrimitive"); }
    BrzCampoPonteiro VelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.Velocity")); }
    BrzCampoPonteiro bAffectedByBasedCompRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAffectedByBasedCompRotation")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAutoActivate")); }
    BrzCampoPonteiro bAutoRegisterPhysicsVolumeUpdatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAutoRegisterPhysicsVolumeUpdates")); }
    BrzCampoPonteiro bAutoRegisterUpdatedComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAutoRegisterUpdatedComponent")); }
    BrzCampoPonteiro bAutoUpdateTickRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bAutoUpdateTickRegistration")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCheckForProjectileUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bCheckForProjectileUnderwater")); }
    BrzCampoPonteiro bComponentShouldUpdatePhysicsVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bComponentShouldUpdatePhysicsVolume")); }
    BrzCampoPonteiro bConstrainToPlaneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bConstrainToPlane")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDisableHomingAfterMissField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bDisableHomingAfterMiss")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bEditableWhenInherited")); }
    BrzCampoPonteiro bForceSubSteppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bForceSubStepping")); }
    BrzCampoPonteiro bHasHomingMissTrackingDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bHasHomingMissTrackingDistance")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHomingTargetWasApproachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bHomingTargetWasApproached")); }
    BrzCampoPonteiro bInitialVelocityInLocalSpaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bInitialVelocityInLocalSpace")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bIsEditorOnly")); }
    BrzCampoPonteiro bIsHomingProjectileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bIsHomingProjectile")); }
    BrzCampoPonteiro bIsProjectileUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bIsProjectileUnderwater")); }
    BrzCampoPonteiro bKeepInitialBasedOnComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bKeepInitialBasedOnComponent")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bReplicates")); }
    BrzCampoPonteiro bRotationFollowsVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bRotationFollowsVelocity")); }
    BrzCampoPonteiro bShouldBounceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bShouldBounce")); }
    BrzCampoPonteiro bSnapToPlaneAtStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bSnapToPlaneAtStart")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bStasisPreventUnregister")); }
    BrzCampoPonteiro bTickBeforeOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bTickBeforeOwner")); }
    BrzCampoPonteiro bTriggerBounceImpactNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bTriggerBounceImpactNotification")); }
    BrzCampoPonteiro bUpdateOnlyIfRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bUpdateOnlyIfRendered")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseTamedEnemyHomingAccelerationMagnitudeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterProjectileMovement.bUseTamedEnemyHomingAccelerationMagnitude")); }
    BitFieldValue<bool, unsigned __int32> bDisableHomingAfterMiss()
    { return { (void*)this, "bDisableHomingAfterMiss" }; }
    BitFieldValue<bool, unsigned __int32> bHasHomingMissTrackingDistance()
    { return { (void*)this, "bHasHomingMissTrackingDistance" }; }
    BitFieldValue<bool, unsigned __int32> bHomingTargetWasApproached()
    { return { (void*)this, "bHomingTargetWasApproached" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERPROJECTILEMOVEMENT_H
