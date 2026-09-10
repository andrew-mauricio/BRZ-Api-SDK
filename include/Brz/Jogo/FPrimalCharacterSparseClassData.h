// ==========================================================================
//  FPrimalCharacterSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCHARACTERSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALCHARACTERSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UNiagaraSystem;
struct UParticleSystem;
struct USoundBase;
struct UTexture2D;


struct FPrimalCharacterSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCharacterSparseClassData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalCharacterSparseClassData.operator=(FPrimalCharacterSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalCharacterSparseClassData.operator=(FPrimalCharacterSparseClassData&)", a0);
    }

    float& AdditionalMaxUseDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.AdditionalMaxUseDistance"); }
    float& ArmorDurabilityPercentUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ArmorDurabilityPercentUpdateInterval"); }
    BrzCampoPonteiro BasedUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.BasedUI")); }
    unsigned char& BeingDraggedMovementComponentTickGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalCharacterSparseClassData.BeingDraggedMovementComponentTickGroup"); }
    BrzCampoPonteiro CarryingUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.CarryingUI")); }
    float& CharacterDamageImpulseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CharacterDamageImpulseMultiplier"); }
    TArray<UParticleSystem*>& CharacterOverrideParticleFromField() const
    { return *GetNativePointerField<TArray<UParticleSystem*>*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleFrom"); }
    TArray<UParticleSystem*>& CharacterOverrideParticleToField() const
    { return *GetNativePointerField<TArray<UParticleSystem*>*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideParticleTo"); }
    TArray<USoundBase*>& CharacterOverrideSoundFromField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundFrom"); }
    TArray<USoundBase*>& CharacterOverrideSoundToField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "FPrimalCharacterSparseClassData.CharacterOverrideSoundTo"); }
    float& ClientRotationInterpSpeedMultiplierGroundField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ClientRotationInterpSpeedMultiplierGround"); }
    TObjectPtr<UTexture2D>& ColorizeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ColorizeIcon"); }
    BrzCampoPonteiro CombatDayMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.CombatDayMusic")); }
    BrzCampoPonteiro CombatNightMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.CombatNightMusic")); }
    BrzCampoPonteiro CombatTimeoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.CombatTimeout")); }
    float& ControlledInventoryAccessDistanceOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ControlledInventoryAccessDistanceOffset"); }
    float& CorpseDraggedDecayRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.CorpseDraggedDecayRate"); }
    UNiagaraSystem*& DamageImpactFXForAttackerField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "FPrimalCharacterSparseClassData.DamageImpactFXForAttacker"); }
    float& DamageImpactFXSizeOverrideField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageImpactFXSizeOverride"); }
    float& DamageNotifyTeamAggroMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroMultiplier"); }
    float& DamageNotifyTeamAggroRangeFalloffField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageNotifyTeamAggroRangeFalloff"); }
    BrzCampoPonteiro DamageTheMeleeDamageCauserDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserDamageType")); }
    float& DamageTheMeleeDamageCauserPercentField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DamageTheMeleeDamageCauserPercent"); }
    BrzCampoPonteiro DeathActorTargetingOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.DeathActorTargetingOffset")); }
    BrzCampoPonteiro DeathDepositLifespanOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.DeathDepositLifespanOverride")); }
    FName& DediOverrideCapsuleCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideCapsuleCollisionProfileName"); }
    FName& DediOverrideMeshCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DediOverrideMeshCollisionProfileName"); }
    FName& DefaultCameraStyleField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.DefaultCameraStyle"); }
    float& DefaultTPVZoomField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DefaultTPVZoom"); }
    TObjectPtr<UTexture2D>& DragBodyIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.DragBodyIcon"); }
    unsigned char& DraggedMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalCharacterSparseClassData.DraggedMovementMode"); }
    float& DraggingInterpDurationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpDuration"); }
    float& DraggingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DraggingInterpSpeed"); }
    unsigned char& DraggingMovementComponentTickGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalCharacterSparseClassData.DraggingMovementComponentTickGroup"); }
    float& DurabilityDegrateTheMeleeDamageCauserPercentField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.DurabilityDegrateTheMeleeDamageCauserPercent"); }
    USoundBase*& EndDraggedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EndDraggedSound"); }
    USoundBase*& EnteredSleepingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EnteredSleepingSound"); }
    USoundBase*& EnteredSwimmingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.EnteredSwimmingSound"); }
    float& FallingDamageHealthScaleBaseField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FallingDamageHealthScaleBase"); }
    float& FootPhysicalSurfaceCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.FootPhysicalSurfaceCheckInterval"); }
    BrzCampoPonteiro JumpAnimBlendInTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.JumpAnimBlendInTime")); }
    float& JumpBaseLockingThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.JumpBaseLockingThreshold"); }
    TArray<USoundBase*>& LandedSoundsPhysMatField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "FPrimalCharacterSparseClassData.LandedSoundsPhysMat"); }
    USoundBase*& LeftSleepingSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.LeftSleepingSound"); }
    float& MaxCursorHUDDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxCursorHUDDistance"); }
    float& MaxRagdollDeathVelocityImpulseField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxRagdollDeathVelocityImpulse"); }
    float& MaxTPVZoomField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MaxTPVZoom"); }
    FName& MeshRootSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.MeshRootSocketName"); }
    float& MinTPVZoomField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTPVZoom"); }
    float& MinTimeBetweenFootstepsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootsteps"); }
    float& MinTimeBetweenFootstepsRunningField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MinTimeBetweenFootstepsRunning"); }
    float& MontageSyncIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.MontageSyncInterval"); }
    TObjectPtr<UTexture2D>& MoveCloserIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.MoveCloserIcon"); }
    BrzCampoPonteiro NearbyCombatMusicRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.NearbyCombatMusicRange")); }
    BrzCampoPonteiro NonLocationalDamageHurtFXScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXScaleOverride")); }
    FName& NonLocationalDamageHurtFXSocketField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.NonLocationalDamageHurtFXSocket"); }
    BrzCampoPonteiro OldRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.OldRotation")); }
    float& OrbitCamMaxZoomLevelField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMaxZoomLevel"); }
    float& OrbitCamMinZoomLevelField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamMinZoomLevel"); }
    float& OrbitCamZoomStepSizeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.OrbitCamZoomStepSize"); }
    BrzCampoPonteiro PassengerUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.PassengerUI")); }
    float& PoopAltItemChanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PoopAltItemChance"); }
    UTexture2D*& PoopIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterSparseClassData.PoopIcon"); }
    TArray<void*>& PreventBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalCharacterSparseClassData.PreventBuffClasses"); }
    float& PreviewCameraDefaultZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraDistanceScaleFactorField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraMaxZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.PreviewCameraMaxZoomMultiplier"); }
    BrzCampoPonteiro PreviewCameraPivotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.PreviewCameraPivotOffset")); }
    BrzCampoPonteiro PrimalCameraModesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.PrimalCameraModes")); }
    float& RagdollDeathImpulseScalerField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollDeathImpulseScaler"); }
    float& RagdollImpactDamageMinDecelerationSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageMinDecelerationSpeed"); }
    float& RagdollImpactDamageVelocityScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RagdollImpactDamageVelocityScale"); }
    TObjectPtr<UTexture2D>& ReleaseBodyIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ReleaseBodyIcon"); }
    BrzCampoPonteiro RidingUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.RidingUI")); }
    FName& RootBodyBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.RootBodyBoneName"); }
    float& RunningMaxDesiredRotDeltaField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.RunningMaxDesiredRotDelta"); }
    float& ScaleDeathHarvestHealthyByMaxHealthBaseField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.ScaleDeathHarvestHealthyByMaxHealthBase"); }
    FName& SnaredFromSocketField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SnaredFromSocket"); }
    FName& SocketOverrideTargetingLocationField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalCharacterSparseClassData.SocketOverrideTargetingLocation"); }
    USoundBase*& StartDraggedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalCharacterSparseClassData.StartDraggedSound"); }
    float& StartFallingImpactRagdollTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.StartFallingImpactRagdollTimeInterval"); }
    float& TPVStructurePlacingHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TPVStructurePlacingHeightMultiplier"); }
    float& TamedDinoCallOutRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalCharacterSparseClassData.TamedDinoCallOutRange"); }
    BrzCampoPonteiro TargetPathfindingLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterSparseClassData.TargetPathfindingLocationOffset")); }
    TObjectPtr<UTexture2D>& TogglePOIIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.TogglePOIIcon"); }
    TObjectPtr<UTexture2D>& ToggleTrackingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.ToggleTrackingIcon"); }
    TObjectPtr<UTexture2D>& TrackingInfoIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalCharacterSparseClassData.TrackingInfoIcon"); }
    BitFieldValue<bool, unsigned __int32> bAllowCapsuleDamageAfterDeath()
    { return { (void*)this, "bAllowCapsuleDamageAfterDeath" }; }
    BitFieldValue<bool, unsigned __int32> bUseHealthDamageMaterialOverlay()
    { return { (void*)this, "bUseHealthDamageMaterialOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bIsBigDino()
    { return { (void*)this, "bIsBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanNotifyTeamAggroAI()
    { return { (void*)this, "bUseBPCanNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCameraTargetOriginLocation()
    { return { (void*)this, "bUseBP_OverrideCameraTargetOriginLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage()
    { return { (void*)this, "bUseBPPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyIsDamageCauserOfAddedBuff()
    { return { (void*)this, "bUseBPNotifyIsDamageCauserOfAddedBuff" }; }
    BitFieldValue<bool, unsigned __int32> bPreventProjectileAttachment()
    { return { (void*)this, "bPreventProjectileAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bForceTriggerIgnoredTraps()
    { return { (void*)this, "bForceTriggerIgnoredTraps" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetDidLand()
    { return { (void*)this, "bForceNetDidLand" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSimpleIK()
    { return { (void*)this, "bPreventSimpleIK" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowRunningWhileFlying()
    { return { (void*)this, "bOnlyAllowRunningWhileFlying" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyPlayPoopAnimWhileWalking()
    { return { (void*)this, "bOnlyPlayPoopAnimWhileWalking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomEvent()
    { return { (void*)this, "bUseBlueprintAnimNotifyCustomEvent" }; }
    BitFieldValue<bool, unsigned __int32> bPreventImmobilization()
    { return { (void*)this, "bPreventImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bSleepingUseRagdoll()
    { return { (void*)this, "bSleepingUseRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bDediForceUnregisterSKMesh()
    { return { (void*)this, "bDediForceUnregisterSKMesh" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterDino()
    { return { (void*)this, "bIsWaterDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlyerDino()
    { return { (void*)this, "bIsFlyerDino" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreTargetingCarnivores()
    { return { (void*)this, "bIgnoreTargetingCarnivores" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCharacterPainting()
    { return { (void*)this, "bAllowCharacterPainting" }; }
    BitFieldValue<bool, unsigned __int32> bTickStatusComponent()
    { return { (void*)this, "bTickStatusComponent" }; }
    BitFieldValue<bool, unsigned __int32> bBPHUDOverideBuffProgressBar()
    { return { (void*)this, "bBPHUDOverideBuffProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBumpedByPawn()
    { return { (void*)this, "bUseBPNotifyBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBumpedPawn()
    { return { (void*)this, "bUseBPNotifyBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTargetingByTurrets()
    { return { (void*)this, "bPreventTargetingByTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bDelayFootstepsUnderMinInterval()
    { return { (void*)this, "bDelayFootstepsUnderMinInterval" }; }
    BitFieldValue<bool, unsigned __int32> bSleepingDisableIK()
    { return { (void*)this, "bSleepingDisableIK" }; }
    BitFieldValue<bool, unsigned __int32> bRagdollRetainAnimations()
    { return { (void*)this, "bRagdollRetainAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachments()
    { return { (void*)this, "bUseBPAddedAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyHasRunningAnimationWhenWalking()
    { return { (void*)this, "bOnlyHasRunningAnimationWhenWalking" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreventInputType()
    { return { (void*)this, "bBPPreventInputType" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis()
    { return { (void*)this, "bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreSerializeSaveGame()
    { return { (void*)this, "bUseBPPreSerializeSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostLoadedFromSaveGame()
    { return { (void*)this, "bUseBPPostLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bUseHeavyCombatMusic()
    { return { (void*)this, "bUseHeavyCombatMusic" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges()
    { return { (void*)this, "bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnStaminaDrained()
    { return { (void*)this, "bUseBPOnStaminaDrained" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGrabDebugSnapshot()
    { return { (void*)this, "bUseBPGrabDebugSnapshot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustTorpidityDamage()
    { return { (void*)this, "bUseBPAdjustTorpidityDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemovedAsPassenger()
    { return { (void*)this, "bUseBPRemovedAsPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIkOnDeath()
    { return { (void*)this, "bDisableIkOnDeath" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptAttemptedCarriedBy()
    { return { (void*)this, "bUseBPInterceptAttemptedCarriedBy" }; }
    BitFieldValue<bool, unsigned __int32> bIsNPC()
    { return { (void*)this, "bIsNPC" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRunningWhileWalking()
    { return { (void*)this, "bPreventRunningWhileWalking" }; }
    BitFieldValue<bool, unsigned __int32> bCanLandOnWater()
    { return { (void*)this, "bCanLandOnWater" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustMoveForward()
    { return { (void*)this, "bUseBPAdjustMoveForward" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustMoveRight()
    { return { (void*)this, "bUseBPAdjustMoveRight" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageWhenMounted()
    { return { (void*)this, "bAllowDamageWhenMounted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAttachmentReplication()
    { return { (void*)this, "bUseBPOnAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMovementModeChangedNotify()
    { return { (void*)this, "bUseBPOnMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAnimPlayedNotify()
    { return { (void*)this, "bUseBPOnAnimPlayedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnSetRunningEvent()
    { return { (void*)this, "bUseBP_OnSetRunningEvent" }; }
    BitFieldValue<bool, unsigned __int32> bForceTurretFastTargeting()
    { return { (void*)this, "bForceTurretFastTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bFlyingOrWaterDinoPreventBackwardsRun()
    { return { (void*)this, "bFlyingOrWaterDinoPreventBackwardsRun" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideFlyingVelocity()
    { return { (void*)this, "bUseBPOverrideFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasisWhenDead()
    { return { (void*)this, "bDestroyOnStasisWhenDead" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMeshAndCollision()
    { return { (void*)this, "bForceAlwaysUpdateMeshAndCollision" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWalkingVelocity()
    { return { (void*)this, "bUseBPOverrideWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStructurePlacement()
    { return { (void*)this, "bUseBPPreventStructurePlacement" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMassTeleportEvent()
    { return { (void*)this, "bUseBPOnMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements()
    { return { (void*)this, "bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeBaseForCharacter()
    { return { (void*)this, "bUseBPCanBeBaseForCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBaseOnCharacter()
    { return { (void*)this, "bUseBPCanBaseOnCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLanded()
    { return { (void*)this, "bUseBPOnLanded" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMoveCollapsing()
    { return { (void*)this, "bEnableMoveCollapsing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckJumpInput()
    { return { (void*)this, "bUseBPCheckJumpInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideHurtAnim()
    { return { (void*)this, "bUseBPOverrideHurtAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage()
    { return { (void*)this, "bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse()
    { return { (void*)this, "bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyFOVInterpSpeed()
    { return { (void*)this, "bUseBPModifyFOVInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bVerifyBasingForSaddleStructures()
    { return { (void*)this, "bVerifyBasingForSaddleStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ShouldForceDisableTPVCameraInterpolation()
    { return { (void*)this, "bUseBP_ShouldForceDisableTPVCameraInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bIsBigPusher()
    { return { (void*)this, "bIsBigPusher" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifyCustomState()
    { return { (void*)this, "bUseBlueprintAnimNotifyCustomState" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound()
    { return { (void*)this, "bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ModifySavedMoveAcceleration_PreRep()
    { return { (void*)this, "bUseBP_ModifySavedMoveAcceleration_PreRep" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ModifySavedMoveAcceleration_PostRep()
    { return { (void*)this, "bUseBP_ModifySavedMoveAcceleration_PostRep" }; }
    BitFieldValue<bool, unsigned __int32> bUsesRootMotion()
    { return { (void*)this, "bUsesRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUnconsciousMeshBasing()
    { return { (void*)this, "bPreventUnconsciousMeshBasing" }; }
    BitFieldValue<bool, unsigned __int32> bCorrectMeshRelativeZOffsetWhileDragged()
    { return { (void*)this, "bCorrectMeshRelativeZOffsetWhileDragged" }; }
    BitFieldValue<bool, unsigned __int32> bReturnToCapsuleCenterWhenDroppedInWater()
    { return { (void*)this, "bReturnToCapsuleCenterWhenDroppedInWater" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkClientsUpdateBasedMovementOnTick()
    { return { (void*)this, "bNetworkClientsUpdateBasedMovementOnTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseArmorDurabilityVFX()
    { return { (void*)this, "bUseArmorDurabilityVFX" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStaggeredMovement()
    { return { (void*)this, "bPreventStaggeredMovement" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceUseOldASECamera()
    { return { (void*)this, "bBPForceUseOldASECamera" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWaterFinLocking()
    { return { (void*)this, "bUsesWaterFinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnNearbyCharacterDied()
    { return { (void*)this, "bUseBPOnNearbyCharacterDied" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustValuesByBPGameComponent()
    { return { (void*)this, "bAdjustValuesByBPGameComponent" }; }
    BitFieldValue<bool, unsigned __int32> bBPFilterMultiUseFilterTargetEntries()
    { return { (void*)this, "bBPFilterMultiUseFilterTargetEntries" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerCharacterFaceTowardsMeWhilePossessingMe()
    { return { (void*)this, "bPlayerCharacterFaceTowardsMeWhilePossessingMe" }; }
    BitFieldValue<bool, unsigned __int32> bShowSecondaryStatusBarsWhenBased()
    { return { (void*)this, "bShowSecondaryStatusBarsWhenBased" }; }
    BitFieldValue<bool, unsigned __int32> bTreatAsFlyerDinoForSpeedLeveling()
    { return { (void*)this, "bTreatAsFlyerDinoForSpeedLeveling" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowMovementModeNoneFixes()
    { return { (void*)this, "bUseBPAllowMovementModeNoneFixes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsValidForStatusRecovery()
    { return { (void*)this, "bUseBPOverrideIsValidForStatusRecovery" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning()
    { return { (void*)this, "bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRefreshColorization()
    { return { (void*)this, "bUseBPRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAggressiveURO()
    { return { (void*)this, "bUsesAggressiveURO" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAnimSharing()
    { return { (void*)this, "bUsesAnimSharing" }; }
    BitFieldValue<bool, unsigned __int32> bUsesFightCircle()
    { return { (void*)this, "bUsesFightCircle" }; }
    BitFieldValue<bool, unsigned __int32> bUsesMassMoving()
    { return { (void*)this, "bUsesMassMoving" }; }
    BitFieldValue<bool, unsigned __int32> bUsesSkelMeshDataChannels()
    { return { (void*)this, "bUsesSkelMeshDataChannels" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCHARACTERSPARSECLASSDATA_H
