// ==========================================================================
//  FPrimalDinoCharacterSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALDINOCHARACTERSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALDINOCHARACTERSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct UMaterialInterface;
struct USkeletalMesh;
struct USoundBase;
struct UStaticMesh;
struct UTexture2D;

#include "FPrimalCharacterSparseClassData.h"

struct FPrimalDinoCharacterSparseClassData : public FPrimalCharacterSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalDinoCharacterSparseClassData"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalDinoCharacterSparseClassData.operator=(FPrimalDinoCharacterSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalDinoCharacterSparseClassData.operator=(FPrimalDinoCharacterSparseClassData&)", a0);
    }

    float& AIDinoForceActiveUntasisingRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AIDinoForceActiveUntasisingRange"); }
    float& AcceptableLandingRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AcceptableLandingRadius"); }
    TObjectPtr<UTexture2D>& AddClassToGroupIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AddClassToGroupIcon"); }
    TArray<void*>& AddClassToGroupSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.AddClassToGroupSelectionIcons"); }
    TObjectPtr<UTexture2D>& AddTameToGroupIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AddTameToGroupIcon"); }
    TArray<void*>& AddTameToGroupSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.AddTameToGroupSelectionIcons"); }
    float& AddToCarryDragWeight_CartMultiField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AddToCarryDragWeight_CartMulti"); }
    BrzCampoPonteiro AdditionalMatingClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.AdditionalMatingClasses")); }
    TObjectPtr<UTexture2D>& AllowSpecialAttacksIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.AllowSpecialAttacksIcon"); }
    float& AllowWaterSurfaceExtraJumpStaminaCostField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AllowWaterSurfaceExtraJumpStaminaCost"); }
    TArray<void*>& AttackAnimationsTimeFromEndToConsiderFinishedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.AttackAnimationsTimeFromEndToConsiderFinished"); }
    float& AttackForceWalkDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkDistanceMultiplier"); }
    float& AttackForceWalkRotationRateMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackForceWalkRotationRateMultiplier"); }
    FName& AttackLineOfSightMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.AttackLineOfSightMeshSocketName"); }
    float& AttackNoStaminaTorpidityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackNoStaminaTorpidityMultiplier"); }
    float& AttackPlayerDesirabilityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackPlayerDesirabilityMultiplier"); }
    float& AttackRangeOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AttackRangeOffset"); }
    float& AutoFadeOutAfterTameTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.AutoFadeOutAfterTameTime"); }
    float& BabyChanceOfTripletsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTriplets"); }
    float& BabyChanceOfTwinsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyChanceOfTwins"); }
    float& BabyCuddleWalkDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyCuddleWalkDistance"); }
    float& BabyGestationSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyGestationSpeed"); }
    float& BabyImprintingQualityTotalMaturationTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyImprintingQualityTotalMaturationTime"); }
    float& BabyMaxCuddleIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMaxCuddleInterval"); }
    float& BabyMinCuddleIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BabyMinCuddleInterval"); }
    BrzCampoPonteiro BackupStatusCompClassForTraitCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.BackupStatusCompClassForTraitCheck")); }
    BrzCampoPonteiro BaseEggClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.BaseEggClass")); }
    float& BasedCameraSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.BasedCameraSpeedMultiplier"); }
    TObjectPtr<UTexture2D>& BehaviourIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.BehaviourIcon"); }
    BrzCampoPonteiro BioGrinderKibbleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.BioGrinderKibbleOverride")); }
    BrzCampoPonteiro BioGrinderKibbleOverrideQuantityMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.BioGrinderKibbleOverrideQuantityMultiplier")); }
    BrzCampoPonteiro BossDinoTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.BossDinoType")); }
    bool& CalculateStructureDistanceFromSaddleField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddle"); }
    FName& CalculateStructureDistanceFromSaddleSocketOverrideField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureDistanceFromSaddleSocketOverride"); }
    bool& CalculateStructureHeightFromSaddleField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.CalculateStructureHeightFromSaddle"); }
    TObjectPtr<UTexture2D>& CantRepairIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CantRepairIcon"); }
    float& CarryCameraYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CarryCameraYawOffset"); }
    TObjectPtr<UTexture2D>& ChangeFollowDistanceIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ChangeFollowDistanceIcon"); }
    float& ChargeBumpDamageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamage"); }
    BrzCampoPonteiro ChargeBumpDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpDamageType")); }
    float& ChargeBumpImpulseField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeBumpImpulse"); }
    float& ChargeSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargeSpeedMultiplier"); }
    float& ChargingActivationConsumesStaminaField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationConsumesStamina"); }
    float& ChargingActivationRequiresStaminaField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingActivationRequiresStamina"); }
    UAnimMontage*& ChargingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnim"); }
    float& ChargingAnimDelayField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingAnimDelay"); }
    float& ChargingBlockedStopTimeThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingBlockedStopTimeThreshold"); }
    float& ChargingStaminaPerSecondDrainField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStaminaPerSecondDrain"); }
    float& ChargingStopDotTresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ChargingStopDotTreshold"); }
    float& CheckForWildAmbientHarvestingIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMax"); }
    float& CheckForWildAmbientHarvestingIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CheckForWildAmbientHarvestingIntervalMin"); }
    TObjectPtr<UTexture2D>& ClaimIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ClaimIcon"); }
    FieldArray<float> ColorSetIntensityMultipliersField() const
    { return { (void*)this, "FPrimalDinoCharacterSparseClassData.ColorSetIntensityMultipliers" }; }
    float& ColorizationIntensityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ColorizationIntensity"); }
    float& ControlFacePitchInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ControlFacePitchInterpSpeed"); }
    TObjectPtr<UTexture2D>& CopySettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsInRangeIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.CopySettingsInRangeWithPinCodeIcon"); }
    float& CorpseTargetingMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.CorpseTargetingMultiplier"); }
    BrzCampoPonteiro CosmeticRiderOffsetRange_MaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Max")); }
    BrzCampoPonteiro CosmeticRiderOffsetRange_MinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.CosmeticRiderOffsetRange_Min")); }
    TArray<void*>& DamageVictimClassesIgnoreBlockingGeomtryTraceField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.DamageVictimClassesIgnoreBlockingGeomtryTrace"); }
    FString& DeathGiveAchievementField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveAchievement"); }
    TArray<void*>& DeathGiveEngramClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveEngramClasses"); }
    TArray<void*>& DeathGiveItemChanceToBeBlueprintField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemChanceToBeBlueprint"); }
    float& DeathGiveItemQualityMaxField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMax"); }
    float& DeathGiveItemQualityMinField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGiveItemQualityMin"); }
    float& DeathGivesDossierDelayField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierDelay"); }
    int& DeathGivesDossierIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DeathGivesDossierIndex"); }
    float& DeathInventoryQualityPerLevelMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DeathInventoryQualityPerLevelMultiplier"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DecayDestructionPeriod"); }
    float& DediForceAttackAnimTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceAttackAnimTime"); }
    float& DediForceStartAttackAfterAnimTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DediForceStartAttackAfterAnimTime"); }
    float& DefaultActivateAttackRangeOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DefaultActivateAttackRangeOffset"); }
    USkeletalMesh*& DefaultCarriageSaddleMeshField() const
    { return *GetNativePointerField<USkeletalMesh**>(this, "FPrimalDinoCharacterSparseClassData.DefaultCarriageSaddleMesh"); }
    USkeletalMesh*& DefaultHarnessSaddleMeshField() const
    { return *GetNativePointerField<USkeletalMesh**>(this, "FPrimalDinoCharacterSparseClassData.DefaultHarnessSaddleMesh"); }
    TArray<void*>& DefaultTamedBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.DefaultTamedBuffs"); }
    TObjectPtr<UTexture2D>& DemolishIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DemolishIcon"); }
    int& DestroyTamesOverLevelClampOffsetField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.DestroyTamesOverLevelClampOffset"); }
    float& DieIfLeftWaterSpawnCapsuleDepthMultiField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DieIfLeftWaterSpawnCapsuleDepthMulti"); }
    float& DinoArmorDurabilityScalingMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoArmorDurabilityScalingMultiplier"); }
    float& DinoExtraIncreasePlayerCollisionActivationDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DinoExtraIncreasePlayerCollisionActivationDistanceSquared"); }
    TObjectPtr<UTexture2D>& DisableAllyLookingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableAllyLookingIcon"); }
    TObjectPtr<UTexture2D>& DisableFollowingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableFollowingIcon"); }
    TObjectPtr<UTexture2D>& DisableIgnoreGroupWhistlesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableIgnoreGroupWhistlesIcon"); }
    TObjectPtr<UTexture2D>& DisableMatingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableMatingIcon"); }
    TObjectPtr<UTexture2D>& DisableOnlyTargetConsciousIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableOnlyTargetConsciousIcon"); }
    TObjectPtr<UTexture2D>& DisablePublicSeatingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisablePublicSeatingIcon"); }
    TObjectPtr<UTexture2D>& DisableResourceHarvestingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableResourceHarvestingIcon"); }
    TObjectPtr<UTexture2D>& DisableSpecialAttacksIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableSpecialAttacksIcon"); }
    TObjectPtr<UTexture2D>& DisableTurretModeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableTurretModeIcon"); }
    TObjectPtr<UTexture2D>& DisableVictimItemCollectionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableVictimItemCollectionIcon"); }
    TObjectPtr<UTexture2D>& DisableWanderingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DisableWanderingIcon"); }
    TObjectPtr<UTexture2D>& DoesNotWantToBeTamedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DoesNotWantToBeTamedIcon"); }
    BrzCampoPonteiro DownloadRequiresMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.DownloadRequiresMap")); }
    TObjectPtr<UTexture2D>& DriveIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.DriveIcon"); }
    float& DurationBeforeMovingStuckPawnField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.DurationBeforeMovingStuckPawn"); }
    float& EggIntervalBetweenUnstasisChancesField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggIntervalBetweenUnstasisChances"); }
    UAnimMontage*& EggLayingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.EggLayingAnimation"); }
    int& EggMaximumNumberField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumber"); }
    int& EggMaximumNumberFromSameDinoTypeField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.EggMaximumNumberFromSameDinoType"); }
    float& EggRangeMaximumNumberField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumber"); }
    float& EggRangeMaximumNumberFromSameDinoTypeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.EggRangeMaximumNumberFromSameDinoType"); }
    FName& EggSpawnSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.EggSpawnSocketName"); }
    BrzCampoPonteiro EmbryoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.EmbryoItemTemplate")); }
    TObjectPtr<UTexture2D>& EnableAllyLookingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableAllyLookingIcon"); }
    TObjectPtr<UTexture2D>& EnableFollowingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableFollowingIcon"); }
    TObjectPtr<UTexture2D>& EnableIgnoreGroupWhistlesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableIgnoreGroupWhistlesIcon"); }
    TObjectPtr<UTexture2D>& EnableMatingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableMatingIcon"); }
    TObjectPtr<UTexture2D>& EnableOnlyTargetConsciousIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableOnlyTargetConsciousIcon"); }
    TObjectPtr<UTexture2D>& EnablePublicSeatingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnablePublicSeatingIcon"); }
    TObjectPtr<UTexture2D>& EnableResourceHarvestingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableResourceHarvestingIcon"); }
    TObjectPtr<UTexture2D>& EnableTurretModeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableTurretModeIcon"); }
    TObjectPtr<UTexture2D>& EnableVictimItemCollectionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableVictimItemCollectionIcon"); }
    TObjectPtr<UTexture2D>& EnableWanderingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EnableWanderingIcon"); }
    TObjectPtr<UTexture2D>& EquipSaddleToRideIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.EquipSaddleToRideIcon"); }
    TObjectPtr<UTexture2D>& ExportIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ExportIcon"); }
    float& ExtraBabyGestationSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraBabyGestationSpeedMultiplier"); }
    float& ExtraTamedBaseHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ExtraTamedBaseHealthMultiplier"); }
    TArray<void*>& FPVRiderBoneNamesToHideField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.FPVRiderBoneNamesToHide"); }
    TObjectPtr<UTexture2D>& FeedToComfortIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FeedToComfortIcon"); }
    TObjectPtr<UTexture2D>& FeedToTameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FeedToTameIcon"); }
    TArray<UMaterialInterface*>& FemaleMaterialOverridesField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMaterialOverrides"); }
    float& FemaleMatingRangeAdditionField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingRangeAddition"); }
    float& FemaleMatingTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FemaleMatingTime"); }
    float& FertilizedEggChanceToUseMateClassField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FertilizedEggChanceToUseMateClass"); }
    float& FinalNPCLevelMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FinalNPCLevelMultiplier"); }
    float& FlyerAttachedExplosiveSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerAttachedExplosiveSpeedMultiplier"); }
    float& FlyerHardBreakingOverrideField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyerHardBreakingOverride"); }
    TObjectPtr<UTexture2D>& FlyingMountsDisabledIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FlyingMountsDisabledIcon"); }
    UAnimMontage*& FlyingStartledAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.FlyingStartledAnimation"); }
    float& FlyingWanderFixedDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderFixedDistanceAmount"); }
    float& FlyingWanderRandomDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.FlyingWanderRandomDistanceAmount"); }
    TObjectPtr<UTexture2D>& FollowDistanceHighIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceHighIcon"); }
    TObjectPtr<UTexture2D>& FollowDistanceHighestIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceHighestIcon"); }
    TObjectPtr<UTexture2D>& FollowDistanceLowIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceLowIcon"); }
    TObjectPtr<UTexture2D>& FollowDistanceLowestIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceLowestIcon"); }
    TObjectPtr<UTexture2D>& FollowDistanceMediumIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.FollowDistanceMediumIcon"); }
    TArray<void*>& ForceAllowFoodAsConsumableListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.ForceAllowFoodAsConsumableList"); }
    float& ForcePawnBigPushingForTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingForTime"); }
    BrzCampoPonteiro ForcePawnBigPushingMaxDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.ForcePawnBigPushingMaxDistance")); }
    float& ForwardPlatformSaddleStructureDamageToDinoMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructureDamageToDinoMultiplier"); }
    FName& ForwardPlatformSaddleStructurePointDamageToBoneField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.ForwardPlatformSaddleStructurePointDamageToBone"); }
    float& GainStaminaWhenLatchedRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GainStaminaWhenLatchedRate"); }
    float& GangDamageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamage"); }
    float& GangDamageResistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.GangDamageResistance"); }
    FieldArray<float> GenderSpeedMultipliersField() const
    { return { (void*)this, "FPrimalDinoCharacterSparseClassData.GenderSpeedMultipliers" }; }
    BrzCampoPonteiro GestationBabyDinoClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.GestationBabyDinoClassOverride")); }
    TObjectPtr<UTexture2D>& GestationMonitoringCategoryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringCategoryIcon"); }
    TObjectPtr<UTexture2D>& GestationMonitoringHideEmbryoStatsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringHideEmbryoStatsIcon"); }
    TObjectPtr<UTexture2D>& GestationMonitoringResetGestationField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringResetGestation"); }
    TObjectPtr<UTexture2D>& GestationMonitoringViewEmbryoStatsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.GestationMonitoringViewEmbryoStatsIcon"); }
    BrzCampoPonteiro HardEndChargingShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.HardEndChargingShake")); }
    TObjectPtr<UTexture2D>& HarvestSettingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HarvestSettingIcon"); }
    float& HasRiderPoopAnimIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HasRiderPoopAnimInterval"); }
    float& HeldJumpSlowFallingGravityZScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HeldJumpSlowFallingGravityZScale"); }
    TObjectPtr<UTexture2D>& HideBoneIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HideBoneIcon"); }
    FString& HideBonesStringField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.HideBonesString"); }
    TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.HideCopySettingsVisualIcon"); }
    float& HighQualityLedgeDetectionExtraTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HighQualityLedgeDetectionExtraTraceDistance"); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.HypoThermiaInsulation"); }
    TObjectPtr<UTexture2D>& ImprintOnIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ImprintOnIcon"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.InsulationRange"); }
    float& LandingTraceMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LandingTraceMaxDistance"); }
    UAnimSequence*& LatchedRiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.LatchedRiderAnimOverride"); }
    BrzCampoPonteiro LightEndChargingShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.LightEndChargingShake")); }
    int& LoadDestroyWildDinosUnderVersionField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.LoadDestroyWildDinosUnderVersion"); }
    float& LocInterpolationSnapDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LocInterpolationSnapDistance"); }
    float& LoseStaminaWithRiderRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.LoseStaminaWithRiderRate"); }
    BrzCampoPonteiro LowHealthDinoSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.LowHealthDinoSettings")); }
    USoundBase*& LowHealthEnterSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.LowHealthEnterSound"); }
    USoundBase*& LowHealthExitSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.LowHealthExitSound"); }
    float& MateBoostDamageGiveMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageGiveMultiplier"); }
    float& MateBoostDamageReceiveMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostDamageReceiveMultiplier"); }
    float& MateBoostRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MateBoostRange"); }
    UAnimMontage*& MatingAnimationMaleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.MatingAnimationMale"); }
    float& MaxDinoKillerTransferWeightPercentField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoKillerTransferWeightPercent"); }
    int& MaxDinoTameLevelsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxDinoTameLevels"); }
    int& MaxGangCountField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxGangCount"); }
    float& MaxLandingTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MaxLandingTime"); }
    int& MaxSaddleStructuresHeightField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresHeight"); }
    int& MaxSaddleStructuresNumField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxSaddleStructuresNum"); }
    int& MaxTamedAmountPerTribeField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.MaxTamedAmountPerTribe"); }
    float& MeleeAttackStaminaCostField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeAttackStaminaCost"); }
    float& MeleeHarvestDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MeleeHarvestDamageMultiplier"); }
    TArray<void*>& MeleeSwingSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.MeleeSwingSockets"); }
    float& MinChargeIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinChargeInterval"); }
    float& MinStaminaForRiderField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MinStaminaForRider"); }
    UAnimMontage*& MountCharacterAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.MountCharacterAnimation"); }
    unsigned char& MountedBlendFilterSmoothTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalDinoCharacterSparseClassData.MountedBlendFilterSmoothType"); }
    float& MovementSpeedScalingRotationRatePowerField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MovementSpeedScalingRotationRatePower"); }
    float& MutagenBaseCostField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.MutagenBaseCost"); }
    float& NPCZoneVolumeCountWeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NPCZoneVolumeCountWeight"); }
    TObjectPtr<UTexture2D>& NeedLevelToFeedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.NeedLevelToFeedIcon"); }
    TObjectPtr<UTexture2D>& NeuterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.NeuterIcon"); }
    float& NewFemaleMaxTimeBetweenMatingField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMaxTimeBetweenMating"); }
    float& NewFemaleMinTimeBetweenMatingField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NewFemaleMinTimeBetweenMating"); }
    float& NoRiderRotationModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.NoRiderRotationModifier"); }
    UAnimMontage*& OpenDoorAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorAnim"); }
    float& OpenDoorDelayField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OpenDoorDelay"); }
    TObjectPtr<UTexture2D>& OptionsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.OptionsIcon"); }
    TObjectPtr<UTexture2D>& OrderGroupSettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.OrderGroupSettingsIcon"); }
    float& OutsideOriginalNPCVolumeStasisDestroyIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OutsideOriginalNPCVolumeStasisDestroyInterval"); }
    float& OverrideApproachRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideApproachRadius"); }
    float& OverrideDinoMaxExperiencePointsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoMaxExperiencePoints"); }
    int& OverrideDinoTameSoundIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.OverrideDinoTameSoundIndex"); }
    float& PaintConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PaintConsumptionMultiplier"); }
    int& PaintTextureResolutionField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.PaintTextureResolution"); }
    TObjectPtr<UTexture2D>& PassangerSeatsGenericIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PassangerSeatsGenericIcon"); }
    FName& PassengerBoneNameOverrideField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.PassengerBoneNameOverride"); }
    float& PersonalTamedDinosSaddleStructureCostMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PersonalTamedDinosSaddleStructureCostMultiplier"); }
    TObjectPtr<UTexture2D>& PickUpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PickUpIcon"); }
    float& PlatformSaddleMaxStructureBuildDistance2DField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.PlatformSaddleMaxStructureBuildDistance2D"); }
    UAnimMontage*& PlayAnimBelowHealthField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.PlayAnimBelowHealth"); }
    USoundBase*& PlayKillLocalSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.PlayKillLocalSound"); }
    UAnimMontage*& PlayerMountedCarryAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.PlayerMountedCarryAnimation"); }
    FieldArray<unsigned char> PreventColorizationRegionsField() const
    { return { (void*)this, "FPrimalDinoCharacterSparseClassData.PreventColorizationRegions" }; }
    TObjectPtr<UTexture2D>& PutItemInLastSlotToTameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PutItemInLastSlotToTameIcon"); }
    TObjectPtr<UTexture2D>& PutTamingFoodInLastSlotToTameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.PutTamingFoodInLastSlotToTameIcon"); }
    float& RandomMutationChanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationChance"); }
    float& RandomMutationGivePointsField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationGivePoints"); }
    int& RandomMutationRollsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.RandomMutationRolls"); }
    float& RandomPlayStartledAnimIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMax"); }
    float& RandomPlayStartledAnimIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RandomPlayStartledAnimIntervalMin"); }
    TArray<void*>& RemoveClassFromGroupSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.RemoveClassFromGroupSelectionIcons"); }
    TArray<void*>& RemoveTameFromGroupSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.RemoveTameFromGroupSelectionIcons"); }
    TObjectPtr<UTexture2D>& RemoveTameFromGroupsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RemoveTameFromGroupsIcon"); }
    TObjectPtr<UTexture2D>& RenameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RenameIcon"); }
    unsigned char& RenamePermissionField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalDinoCharacterSparseClassData.RenamePermission"); }
    float& RepairCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairCheckInterval"); }
    TObjectPtr<UTexture2D>& RepairIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RepairIcon"); }
    float& RepairPercentPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RepairPercentPerInterval"); }
    BrzCampoPonteiro RepairRequirementsItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.RepairRequirementsItem")); }
    unsigned char& RequiresDLCField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC"); }
    TObjectPtr<UTexture2D>& RequiresDLCIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLCIcon"); }
    BrzCampoPonteiro RequiresDLC_ClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.RequiresDLC_Class")); }
    TObjectPtr<UTexture2D>& RequiresEngramToMountIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RequiresEngramToMountIcon"); }
    FName& RestrictNonAlliedCarriedPlayerYawSocketField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RestrictNonAlliedCarriedPlayerYawSocket"); }
    BrzCampoPonteiro RestrictedCarriedPlayerViewEndLocFlyingOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.RestrictedCarriedPlayerViewEndLocFlyingOffset")); }
    float& RiddenStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiddenStasisRangeMultiplier"); }
    TObjectPtr<UTexture2D>& RideIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.RideIcon"); }
    float& RiderExtraMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderExtraMaxSpeedModifier"); }
    float& RiderFlyingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderFlyingRotationRateModifier"); }
    FName& RiderLatchedFPVCameraUseSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.RiderLatchedFPVCameraUseSocketName"); }
    float& RiderMaxImprintingQualityDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageMultiplier"); }
    float& RiderMaxImprintingQualityDamageReductionField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMaxImprintingQualityDamageReduction"); }
    float& RiderMovementSpeedScalingRotationRatePowerMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RiderMovementSpeedScalingRotationRatePowerMultiplier"); }
    float& RidingAnimSpeedFactorField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAnimSpeedFactor"); }
    BrzCampoPonteiro RidingAttackExtraVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocity")); }
    float& RidingAttackExtraVelocityDelayField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingAttackExtraVelocityDelay"); }
    BrzCampoPonteiro RidingFirstPersonViewLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.RidingFirstPersonViewLocationOffset")); }
    float& RidingSwimmingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.RidingSwimmingRunSpeedModifier"); }
    int& SaddlePivotOffsetField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.SaddlePivotOffset"); }
    FName& SaddleRiderMovementTraceThruSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.SaddleRiderMovementTraceThruSocketName"); }
    FString& SaddleSlotNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalDinoCharacterSparseClassData.SaddleSlotNameOverride"); }
    BrzCampoPonteiro SecondaryMountedDinoSetupsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.SecondaryMountedDinoSetups")); }
    float& SetAttackTargetTraceWidthField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SetAttackTargetTraceWidth"); }
    TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.ShowCopySettingsVisualIcon"); }
    BrzCampoPonteiro SignificanceThresholdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.SignificanceThresholds")); }
    float& SinglePlayerIncomingDamageModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerIncomingDamageModifier"); }
    float& SinglePlayerOutgoingDamageModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SinglePlayerOutgoingDamageModifier"); }
    UAnimMontage*& SlowFallingAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingAnim"); }
    float& SlowFallingStaminaCostPerSecondField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SlowFallingStaminaCostPerSecond"); }
    BrzCampoPonteiro SpecificHarvestResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.SpecificHarvestResources")); }
    BrzCampoPonteiro SpecificHarvestResouruceIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.SpecificHarvestResouruceIcon")); }
    TObjectPtr<UTexture2D>& StanceAggressiveIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceAggressiveIcon"); }
    TObjectPtr<UTexture2D>& StanceAttackTargetIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceAttackTargetIcon"); }
    TObjectPtr<UTexture2D>& StanceIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceIcon"); }
    TObjectPtr<UTexture2D>& StanceNeutralIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StanceNeutralIcon"); }
    TObjectPtr<UTexture2D>& StancePassiveFleeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StancePassiveFleeIcon"); }
    TObjectPtr<UTexture2D>& StancePassiveIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.StancePassiveIcon"); }
    UAnimMontage*& StartChargeAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartChargeAnimation"); }
    UAnimMontage*& StartRidingAnimOverrideField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartRidingAnimOverride"); }
    float& StartledAnimationCooldownField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationCooldown"); }
    UAnimMontage*& StartledAnimationLeftField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimationLeft"); }
    TArray<UAnimMontage*>& StartledAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "FPrimalDinoCharacterSparseClassData.StartledAnimations"); }
    float& StasisAutoDestroyIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisAutoDestroyInterval"); }
    float& StasisedDestroyIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StasisedDestroyInterval"); }
    float& StepDamageFootDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageAmount"); }
    float& StepDamageFootDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageInterval"); }
    float& StepDamageFootDamageRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRadius"); }
    float& StepDamageFootDamageRunningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepDamageFootDamageRunningMultiplier"); }
    float& StepRadialDamageOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.StepRadialDamageOffset"); }
    UAnimMontage*& StopRidingAnimOverrideField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.StopRidingAnimOverride"); }
    BrzCampoPonteiro StructureAlignToSaddlePerBoneAdjustedRotationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.StructureAlignToSaddlePerBoneAdjustedRotations")); }
    float& SwimOffsetInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimOffsetInterpSpeed"); }
    USoundBase*& SwimSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalDinoCharacterSparseClassData.SwimSound"); }
    float& SwimSoundIntervalPerHundredSpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.SwimSoundIntervalPerHundredSpeed"); }
    bool& TameGivesDossierField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.TameGivesDossier"); }
    float& TamedAllowNamingTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedAllowNamingTime"); }
    BrzCampoPonteiro TamedHarvestDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.TamedHarvestDamageType")); }
    float& TamedOverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedOverrideStasisComponentRadius"); }
    float& TamedSwimmingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedSwimmingRotationRateModifier"); }
    BrzCampoPonteiro TamedUnsleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.TamedUnsleepAnim")); }
    BrzCampoPonteiro TamedWanderHarvestCollectOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectOffset")); }
    float& TamedWanderHarvestCollectRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestCollectRadius"); }
    float& TamedWanderHarvestIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestInterval"); }
    float& TamedWanderHarvestSearchRangeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.TamedWanderHarvestSearchRange"); }
    TObjectPtr<UTexture2D>& TargetingOptionsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingOptionsIcon"); }
    TObjectPtr<UTexture2D>& TargetingRangeHighIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeHighIcon"); }
    TObjectPtr<UTexture2D>& TargetingRangeHighestIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeHighestIcon"); }
    TObjectPtr<UTexture2D>& TargetingRangeLowIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeLowIcon"); }
    TObjectPtr<UTexture2D>& TargetingRangeLowestIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeLowestIcon"); }
    TObjectPtr<UTexture2D>& TargetingRangeMediumIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TargetingRangeMediumIcon"); }
    TArray<void*>& TribeOrderRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.TribeOrderRankSelectionIcons"); }
    TObjectPtr<UTexture2D>& TribeRankSettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.TribeRankSettingsIcon"); }
    TArray<void*>& TribeRidingRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalDinoCharacterSparseClassData.TribeRidingRankSelectionIcons"); }
    UAnimSequence*& TurningLeftRiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.TurningLeftRiderAnimOverride"); }
    UAnimSequence*& TurningRightRiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "FPrimalDinoCharacterSparseClassData.TurningRightRiderAnimOverride"); }
    unsigned char& UnMountedBlendFilterSmoothTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalDinoCharacterSparseClassData.UnMountedBlendFilterSmoothType"); }
    BrzCampoPonteiro UnboardLocationTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.UnboardLocationTraceOffset")); }
    TObjectPtr<UTexture2D>& UnclaimIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.UnclaimIcon"); }
    TObjectPtr<UTexture2D>& UnhideBoneIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.UnhideBoneIcon"); }
    BrzCampoPonteiro UniqueDino_MapMarkerColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerColor")); }
    UStaticMesh*& UniqueDino_MapMarkerMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "FPrimalDinoCharacterSparseClassData.UniqueDino_MapMarkerMesh"); }
    UAnimMontage*& UnmountCharacterAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.UnmountCharacterAnimation"); }
    float& UntamedPoopTimeMaxIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMaxInterval"); }
    float& UntamedPoopTimeMinIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UntamedPoopTimeMinInterval"); }
    float& UseBedCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.UseBedCooldownTime"); }
    TObjectPtr<UTexture2D>& WaitUntilHungryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WaitUntilHungryIcon"); }
    float& WakingTameAllowFeedingFoodPercentageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAllowFeedingFoodPercentage"); }
    UAnimMontage*& WakingTameAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalDinoCharacterSparseClassData.WakingTameAnimation"); }
    int& WakingTameConsumeEntireStackMaxQuantityField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameConsumeEntireStackMaxQuantity"); }
    float& WakingTameDisableDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDisableDistance"); }
    FName& WakingTameDistanceSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameDistanceSocketName"); }
    float& WakingTameFoodAffinityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameFoodAffinityMultiplier"); }
    float& WakingTameMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WakingTameMaxDistance"); }
    float& WanderAroundActorMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WanderAroundActorMaxDistance"); }
    TArray<UAnimMontage*>& WanderIdleAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "FPrimalDinoCharacterSparseClassData.WanderIdleAnimations"); }
    TObjectPtr<UTexture2D>& WantsCareIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsCareIcon"); }
    TObjectPtr<UTexture2D>& WantsToCuddleIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsToCuddleIcon"); }
    TObjectPtr<UTexture2D>& WantsToGoOnAWalkIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FPrimalDinoCharacterSparseClassData.WantsToGoOnAWalkIcon"); }
    BrzCampoPonteiro WaterSurfaceExtraJumpVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.WaterSurfaceExtraJumpVector")); }
    float& WhistleTraceOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WhistleTraceOffset"); }
    float& WildAmbientHarvestingRadiusField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildAmbientHarvestingRadius"); }
    float& WildBabyAgeWeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildBabyAgeWeight"); }
    BrzCampoPonteiro WildIdleFidgetPlayFrequencyMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMax")); }
    BrzCampoPonteiro WildIdleFidgetPlayFrequencyMinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.WildIdleFidgetPlayFrequencyMin")); }
    float& WildSwimmingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoCharacterSparseClassData.WildSwimmingRotationRateModifier"); }
    BrzCampoPonteiro WildUnsleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoCharacterSparseClassData.WildUnsleepAnim")); }
    bool& bOnlyDrawFloatingHUDAsLocalPlayerControllerField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bOnlyDrawFloatingHUDAsLocalPlayerController"); }
    bool& bUntamedUseOverlapEventsField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUntamedUseOverlapEvents"); }
    bool& bUseBPIsValidUnStasisCasterField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalDinoCharacterSparseClassData.bUseBPIsValidUnStasisCaster"); }
    BitFieldValue<bool, unsigned __int32> bLocationBasedAttack()
    { return { (void*)this, "bLocationBasedAttack" }; }
    BitFieldValue<bool, unsigned __int32> bKeepBasedOnJumping()
    { return { (void*)this, "bKeepBasedOnJumping" }; }
    BitFieldValue<bool, unsigned __int32> bCanThrottleWandering()
    { return { (void*)this, "bCanThrottleWandering" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAnimUpdateRateOptimization()
    { return { (void*)this, "bEnableAnimUpdateRateOptimization" }; }
    BitFieldValue<bool, unsigned __int32> bEnableWildAnimUpdateRateOptimization()
    { return { (void*)this, "bEnableWildAnimUpdateRateOptimization" }; }
    BitFieldValue<bool, unsigned __int32> bTamedWanderHarvestAllowUsableHarvestingAsWell()
    { return { (void*)this, "bTamedWanderHarvestAllowUsableHarvestingAsWell" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPKilledSomethingEvent()
    { return { (void*)this, "bUseBPKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bKeepInventoryForWakingTame()
    { return { (void*)this, "bKeepInventoryForWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bTamedWanderCorpseHarvesting()
    { return { (void*)this, "bTamedWanderCorpseHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyStructurePlacedNearby()
    { return { (void*)this, "bUseBPNotifyStructurePlacedNearby" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceFlee()
    { return { (void*)this, "bUseBPShouldForceFlee" }; }
    BitFieldValue<bool, unsigned __int32> bIsBossDinoAllowLootDrop()
    { return { (void*)this, "bIsBossDinoAllowLootDrop" }; }
    BitFieldValue<bool, unsigned __int32> bForceWanderOverrideNPCZoneManager()
    { return { (void*)this, "bForceWanderOverrideNPCZoneManager" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateDino()
    { return { (void*)this, "bDeprecateDino" }; }
    BitFieldValue<bool, unsigned __int32> bForceFoodItemAutoConsume()
    { return { (void*)this, "bForceFoodItemAutoConsume" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerAllowFlyingWithExplosive()
    { return { (void*)this, "bFlyerAllowFlyingWithExplosive" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseDediAttackTiming()
    { return { (void*)this, "bForceUseDediAttackTiming" }; }
    BitFieldValue<bool, unsigned __int32> bWakingTameConsumeEntireStack()
    { return { (void*)this, "bWakingTameConsumeEntireStack" }; }
    BitFieldValue<bool, unsigned __int32> bWildDinoPreventWeight()
    { return { (void*)this, "bWildDinoPreventWeight" }; }
    BitFieldValue<bool, unsigned __int32> bRetainCarriedCharacterOnDismount()
    { return { (void*)this, "bRetainCarriedCharacterOnDismount" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTamedProcessOrder()
    { return { (void*)this, "bUseBPOnTamedProcessOrder" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnTamedOrderReceived()
    { return { (void*)this, "bUseBP_OnTamedOrderReceived" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttackWithCryoSickness()
    { return { (void*)this, "bAllowAttackWithCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanCryo()
    { return { (void*)this, "bUseBPCanCryo" }; }
    BitFieldValue<bool, unsigned __int32> bWildPreventTeleporting()
    { return { (void*)this, "bWildPreventTeleporting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPClampMaxHarvestHealth()
    { return { (void*)this, "bUseBPClampMaxHarvestHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBecameNewBaby()
    { return { (void*)this, "bUseBPBecameNewBaby" }; }
    BitFieldValue<bool, unsigned __int32> bTryAlwaysApplyCryoSickness()
    { return { (void*)this, "bTryAlwaysApplyCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetSimulatedInterpRollOverride()
    { return { (void*)this, "bUseBPSetSimulatedInterpRollOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetInitialAimOffsetTargets()
    { return { (void*)this, "bUseBPSetInitialAimOffsetTargets" }; }
    BitFieldValue<bool, unsigned __int32> bConsoleIgnoreSafeZonesForCrosshair()
    { return { (void*)this, "bConsoleIgnoreSafeZonesForCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawCrosshairWhenHUDIsHidden()
    { return { (void*)this, "bForceDrawCrosshairWhenHUDIsHidden" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanLand()
    { return { (void*)this, "bUseBPCanLand" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCheckRefreshDefaultInventoryItems()
    { return { (void*)this, "bAllowCheckRefreshDefaultInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForTamingDialog()
    { return { (void*)this, "bShowRequiresDLCForTamingDialog" }; }
    BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForRideAndMountDialog()
    { return { (void*)this, "bShowRequiresDLCForRideAndMountDialog" }; }
    BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForClaimingDialog()
    { return { (void*)this, "bShowRequiresDLCForClaimingDialog" }; }
    BitFieldValue<bool, unsigned __int32> bShowRequiresDLCForInventoryAccess()
    { return { (void*)this, "bShowRequiresDLCForInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bRideAndMountRequiresDLC()
    { return { (void*)this, "bRideAndMountRequiresDLC" }; }
    BitFieldValue<bool, unsigned __int32> bClaimingRequiresDLC()
    { return { (void*)this, "bClaimingRequiresDLC" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryAccessRequiresDLC()
    { return { (void*)this, "bInventoryAccessRequiresDLC" }; }
    BitFieldValue<bool, unsigned __int32> bIsBigBossDinoWithHighPrioritySounds()
    { return { (void*)this, "bIsBigBossDinoWithHighPrioritySounds" }; }
    BitFieldValue<bool, unsigned __int32> bMaleAllowPoopAltItemClass()
    { return { (void*)this, "bMaleAllowPoopAltItemClass" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsLandingOnDino()
    { return { (void*)this, "bUseBPIsLandingOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bCanCharge()
    { return { (void*)this, "bCanCharge" }; }
    BitFieldValue<bool, unsigned __int32> bChargeDamageStructures()
    { return { (void*)this, "bChargeDamageStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAutoTameable()
    { return { (void*)this, "bAutoTameable" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysSetTamingTeamOnItemAdd()
    { return { (void*)this, "bAlwaysSetTamingTeamOnItemAdd" }; }
    BitFieldValue<bool, unsigned __int32> bRiderUseDirectionalAttackIndex()
    { return { (void*)this, "bRiderUseDirectionalAttackIndex" }; }
    BitFieldValue<bool, unsigned __int32> bIKIgnoreSaddleStructures()
    { return { (void*)this, "bIKIgnoreSaddleStructures" }; }
    BitFieldValue<bool, unsigned __int32> bAttackTargetWhenLaunched()
    { return { (void*)this, "bAttackTargetWhenLaunched" }; }
    BitFieldValue<bool, unsigned __int32> bCanOpenLockedDoors()
    { return { (void*)this, "bCanOpenLockedDoors" }; }
    BitFieldValue<bool, unsigned __int32> bApplyColorToChildComponents()
    { return { (void*)this, "bApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAllowsFishingOnSaddle()
    { return { (void*)this, "bAllowsFishingOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bOverridePlatformStructureLimit()
    { return { (void*)this, "bOverridePlatformStructureLimit" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeAttackHarvetUsableComponents()
    { return { (void*)this, "bMeleeAttackHarvetUsableComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateCharsOnMeleeAttackHarvestUsable()
    { return { (void*)this, "bUpdateCharsOnMeleeAttackHarvestUsable" }; }
    BitFieldValue<bool, unsigned __int32> bPlatformSaddleIgnoreRotDotCheck()
    { return { (void*)this, "bPlatformSaddleIgnoreRotDotCheck" }; }
    BitFieldValue<bool, unsigned __int32> bPlatformSaddleAllowBasingUnderwater()
    { return { (void*)this, "bPlatformSaddleAllowBasingUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bUseInteprolatedVelocity()
    { return { (void*)this, "bUseInteprolatedVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bTamedWanderHarvestNonUsableHarvesting()
    { return { (void*)this, "bTamedWanderHarvestNonUsableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBasingWhenUntamed()
    { return { (void*)this, "bPreventBasingWhenUntamed" }; }
    BitFieldValue<bool, unsigned __int32> bChargingRequiresWalking()
    { return { (void*)this, "bChargingRequiresWalking" }; }
    BitFieldValue<bool, unsigned __int32> bDisplaySummonedNotification()
    { return { (void*)this, "bDisplaySummonedNotification" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayKilledNotification()
    { return { (void*)this, "bDisplayKilledNotification" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAttackWeight()
    { return { (void*)this, "bUseBPGetAttackWeight" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeaponsOnReequip()
    { return { (void*)this, "bPreventAllRiderWeaponsOnReequip" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDeathAutoGrab()
    { return { (void*)this, "bAllowDeathAutoGrab" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoUnstasisDestroy()
    { return { (void*)this, "bAllowAutoUnstasisDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUpdateAimOffsetInterpolation()
    { return { (void*)this, "bAlwaysUpdateAimOffsetInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> WildAmbientHarvestingAnimationServerTickPose()
    { return { (void*)this, "WildAmbientHarvestingAnimationServerTickPose" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSleepingTame()
    { return { (void*)this, "bPreventSleepingTame" }; }
    BitFieldValue<bool, unsigned __int32> bTamedWanderHarvest()
    { return { (void*)this, "bTamedWanderHarvest" }; }
    BitFieldValue<bool, unsigned __int32> bSimulatedNetLandCheckFloor()
    { return { (void*)this, "bSimulatedNetLandCheckFloor" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPreventRiderAutoFly()
    { return { (void*)this, "bFlyerPreventRiderAutoFly" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFlyerLandedRider()
    { return { (void*)this, "bAllowFlyerLandedRider" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFlyerFlyingRider()
    { return { (void*)this, "bPreventFlyerFlyingRider" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFlyerCapsuleExpansion()
    { return { (void*)this, "bPreventFlyerCapsuleExpansion" }; }
    BitFieldValue<bool, unsigned __int32> bIncludeCarryWeightOfBasedPawns()
    { return { (void*)this, "bIncludeCarryWeightOfBasedPawns" }; }
    BitFieldValue<bool, unsigned __int32> bForceRiderNetworkParent()
    { return { (void*)this, "bForceRiderNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bForcePerfectTame()
    { return { (void*)this, "bForcePerfectTame" }; }
    BitFieldValue<bool, unsigned __int32> bUseBabyGestation()
    { return { (void*)this, "bUseBabyGestation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUnalignedDinoBasing()
    { return { (void*)this, "bPreventUnalignedDinoBasing" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLevelMusicIfTamed()
    { return { (void*)this, "bOverrideLevelMusicIfTamed" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsSaddleStructures()
    { return { (void*)this, "bSupportsSaddleStructures" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired()
    { return { (void*)this, "bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDontAutoLandOnDismount()
    { return { (void*)this, "bFlyerDontAutoLandOnDismount" }; }
    BitFieldValue<bool, unsigned __int32> bUseTamedVisibleComponents()
    { return { (void*)this, "bUseTamedVisibleComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDemolish()
    { return { (void*)this, "bAllowDemolish" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintDrawFloatingHUD()
    { return { (void*)this, "bBlueprintDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTamedTick()
    { return { (void*)this, "bUseBPTamedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWantsToRun()
    { return { (void*)this, "bUseBPOverrideWantsToRun" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPlayDying()
    { return { (void*)this, "bUseBPPlayDying" }; }
    BitFieldValue<bool, unsigned __int32> bAddPassengerSeatMultiUseEntries()
    { return { (void*)this, "bAddPassengerSeatMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseSaddlePassengerSeatsWhenAvailable()
    { return { (void*)this, "bUseSaddlePassengerSeatsWhenAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bScaleInsulationByMeleeDamage()
    { return { (void*)this, "bScaleInsulationByMeleeDamage" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryOnlyAllowCraftingWhenWandering()
    { return { (void*)this, "bInventoryOnlyAllowCraftingWhenWandering" }; }
    BitFieldValue<bool, unsigned __int32> bHeldJumpSlowFalling()
    { return { (void*)this, "bHeldJumpSlowFalling" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bWildProduceEggDynamically()
    { return { (void*)this, "bWildProduceEggDynamically" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerAllowRidingInCaves()
    { return { (void*)this, "bFlyerAllowRidingInCaves" }; }
    BitFieldValue<bool, unsigned __int32> bScaleExtraRunningSpeedModifier()
    { return { (void*)this, "bScaleExtraRunningSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairLocation()
    { return { (void*)this, "bUseBPGetCrosshairLocation" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairSpread()
    { return { (void*)this, "bOverrideCrosshairSpread" }; }
    BitFieldValue<bool, unsigned __int32> bTreatCrouchInputAsAttack()
    { return { (void*)this, "bTreatCrouchInputAsAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetRiderUnboardLocation()
    { return { (void*)this, "bUseBPGetRiderUnboardLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetRiderUnboardDirection()
    { return { (void*)this, "bUseBPGetRiderUnboardDirection" }; }
    BitFieldValue<bool, unsigned __int32> bModifyBasedCamera()
    { return { (void*)this, "bModifyBasedCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRefreshColorization()
    { return { (void*)this, "bUseBPOnRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bHideAncestorsButton()
    { return { (void*)this, "bHideAncestorsButton" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDisplayTamedMessage()
    { return { (void*)this, "bUseBPDisplayTamedMessage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanMountOnCharacter()
    { return { (void*)this, "bUseBPCanMountOnCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMaleNursing()
    { return { (void*)this, "bAllowMaleNursing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetRiderSocket()
    { return { (void*)this, "bUseBPGetRiderSocket" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShowTamingPanel()
    { return { (void*)this, "bUseBPShowTamingPanel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMutationLabels()
    { return { (void*)this, "bUseBPOverrideMutationLabels" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMovementModeChangeForDinoPassengers()
    { return { (void*)this, "bPreventMovementModeChangeForDinoPassengers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRiderImmobilization()
    { return { (void*)this, "bPreventRiderImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreCopySettingsVisualRangeMultiuse()
    { return { (void*)this, "bIgnoreCopySettingsVisualRangeMultiuse" }; }
    BitFieldValue<bool, unsigned __int32> bAttackStopsMovement()
    { return { (void*)this, "bAttackStopsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByAllStationaryObjects()
    { return { (void*)this, "bMeleeSwingDamageBlockedByAllStationaryObjects" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChargingModifyInputAcceleration()
    { return { (void*)this, "bUseBPChargingModifyInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRepIsCharging()
    { return { (void*)this, "bUseBPOnRepIsCharging" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOrderAllowed()
    { return { (void*)this, "bUseBPPreventOrderAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bPassengerDinosUsePassengerAnim()
    { return { (void*)this, "bPassengerDinosUsePassengerAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPassengerAnimOnDinos()
    { return { (void*)this, "bUsesPassengerAnimOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRotationOnCarriedCharacter()
    { return { (void*)this, "bOverrideRotationOnCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bAdvancedCarryRelease()
    { return { (void*)this, "bAdvancedCarryRelease" }; }
    BitFieldValue<bool, unsigned __int32> bForceCarriedPlayerToCheckForWalls()
    { return { (void*)this, "bForceCarriedPlayerToCheckForWalls" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsBasedOnActor()
    { return { (void*)this, "bUseBPIsBasedOnActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyControlRotation()
    { return { (void*)this, "bUseBPModifyControlRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDinoFiredProjectile()
    { return { (void*)this, "bUseBPOnDinoFiredProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetRidingMultiUseEntries()
    { return { (void*)this, "bUseBPGetRidingMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bAddDefaultCategoryRidingMultiUseEntries()
    { return { (void*)this, "bAddDefaultCategoryRidingMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMountedMultiUseEntries()
    { return { (void*)this, "bUseBPGetMountedMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMatingWithParentClasses()
    { return { (void*)this, "bAllowMatingWithParentClasses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUnstasisConsumeFood()
    { return { (void*)this, "bUseBPUnstasisConsumeFood" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDinoStartled()
    { return { (void*)this, "bUseBPOnDinoStartled" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteDinoConsumesStaminaWhileRunning()
    { return { (void*)this, "bRemoteDinoConsumesStaminaWhileRunning" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHighQualityAIVolumeLedgeChecking()
    { return { (void*)this, "bDisableHighQualityAIVolumeLedgeChecking" }; }
    BitFieldValue<bool, unsigned __int32> bDoHighQualityLedgeChecking()
    { return { (void*)this, "bDoHighQualityLedgeChecking" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyDoStepDamageWhenRunning()
    { return { (void*)this, "bOnlyDoStepDamageWhenRunning" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPlatformSaddleMultiFloors()
    { return { (void*)this, "bPreventPlatformSaddleMultiFloors" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMountedDinoMeshHiding()
    { return { (void*)this, "bPreventMountedDinoMeshHiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTogglingPublicSeating()
    { return { (void*)this, "bAllowTogglingPublicSeating" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWaterSurfaceExtraJump()
    { return { (void*)this, "bAllowWaterSurfaceExtraJump" }; }
    BitFieldValue<bool, unsigned __int32> bUseVelocityForRequestedMoveIfStuck()
    { return { (void*)this, "bUseVelocityForRequestedMoveIfStuck" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDoAttack()
    { return { (void*)this, "bUseBPDoAttack" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageNonFoliageWithoutRunning()
    { return { (void*)this, "bStepDamageNonFoliageWithoutRunning" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageAllTargetables()
    { return { (void*)this, "bStepDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNonFoliageFeetSocketsOnly()
    { return { (void*)this, "bDamageNonFoliageFeetSocketsOnly" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDontBeBlockedByPawnMesh()
    { return { (void*)this, "bRiderDontBeBlockedByPawnMesh" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtendedUnstasisCheck()
    { return { (void*)this, "bUseExtendedUnstasisCheck" }; }
    BitFieldValue<bool, unsigned __int32> bDoStepDamageTamedOnly()
    { return { (void*)this, "bDoStepDamageTamedOnly" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageNonFoliageTamedOnly()
    { return { (void*)this, "bStepDamageNonFoliageTamedOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildDeathInventoryDeposit()
    { return { (void*)this, "bForceWildDeathInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanTakePassenger()
    { return { (void*)this, "bUseBPCanTakePassenger" }; }
    BitFieldValue<bool, unsigned __int32> bForwardPlatformSaddleStructureDamageToDino()
    { return { (void*)this, "bForwardPlatformSaddleStructureDamageToDino" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayAttackingMusic()
    { return { (void*)this, "bDontPlayAttackingMusic" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreRagdollHarvesting()
    { return { (void*)this, "bForceIgnoreRagdollHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetTargetLocation()
    { return { (void*)this, "bBPModifyAimOffsetTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bIsVehicle()
    { return { (void*)this, "bIsVehicle" }; }
    BitFieldValue<bool, unsigned __int32> bAttackStopsRotation()
    { return { (void*)this, "bAttackStopsRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreTargetingLiveUnriddenDinos()
    { return { (void*)this, "bIgnoreTargetingLiveUnriddenDinos" }; }
    BitFieldValue<bool, unsigned __int32> bSleepedForceCreateInventory()
    { return { (void*)this, "bSleepedForceCreateInventory" }; }
    BitFieldValue<bool, unsigned __int32> bLocalForceNearbySkelMeshUpdate()
    { return { (void*)this, "bLocalForceNearbySkelMeshUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDisableEnemyTargetingMaxDeltaZ()
    { return { (void*)this, "bFlyerDisableEnemyTargetingMaxDeltaZ" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAIToggleSpecialAttacks()
    { return { (void*)this, "bTamedAIToggleSpecialAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bRepeatPrimaryAttack()
    { return { (void*)this, "bRepeatPrimaryAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDoHarvestAttack()
    { return { (void*)this, "bUseBPDoHarvestAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestingQuantity()
    { return { (void*)this, "bUseBPModifyHarvestingQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestingWeightsArray()
    { return { (void*)this, "bUseBPModifyHarvestingWeightsArray" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyHarvestDamage()
    { return { (void*)this, "bUseBPModifyHarvestDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoPostBeginPlay()
    { return { (void*)this, "bUseBPDinoPostBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAutodrag()
    { return { (void*)this, "bUseBPCanAutodrag" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanDragCharacter()
    { return { (void*)this, "bUseBPCanDragCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDraggingWhileFalling()
    { return { (void*)this, "bAllowDraggingWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoLevelOnDecriptiveName()
    { return { (void*)this, "bPreventDinoLevelOnDecriptiveName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldCancelDoAttack()
    { return { (void*)this, "bUseBPShouldCancelDoAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseLocalSpaceDesiredRotationWithRider()
    { return { (void*)this, "bUseLocalSpaceDesiredRotationWithRider" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDesiredRotationIsLocalSpace()
    { return { (void*)this, "bUseBPDesiredRotationIsLocalSpace" }; }
    BitFieldValue<bool, unsigned __int32> bIsRobot()
    { return { (void*)this, "bIsRobot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_RotationRate()
    { return { (void*)this, "bUseBP_CustomModifier_RotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnStartLandingNotify()
    { return { (void*)this, "bUseBP_OnStartLandingNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttackForceWalkDistanceMultiplier()
    { return { (void*)this, "bUseAttackForceWalkDistanceMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceTurretFastTargeting()
    { return { (void*)this, "bUseBPForceTurretFastTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCollisionWithDinosWhenFlying()
    { return { (void*)this, "bDisableCollisionWithDinosWhenFlying" }; }
    BitFieldValue<bool, unsigned __int32> bIsTrapTamed()
    { return { (void*)this, "bIsTrapTamed" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPAllowClaiming()
    { return { (void*)this, "bCheckBPAllowClaiming" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNeuter()
    { return { (void*)this, "bPreventNeuter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDragSocketName()
    { return { (void*)this, "bUseBPGetDragSocketName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDragSocketDinoName()
    { return { (void*)this, "bUseBPGetDragSocketDinoName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetLookOffsetSocketName()
    { return { (void*)this, "bUseBPGetLookOffsetSocketName" }; }
    BitFieldValue<bool, unsigned __int32> bTargetEverythingIncludingSameTeamInPVE()
    { return { (void*)this, "bTargetEverythingIncludingSameTeamInPVE" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePhysicalFootSurfaceTrace()
    { return { (void*)this, "bForceUsePhysicalFootSurfaceTrace" }; }
    BitFieldValue<bool, unsigned __int32> bHideSaddleInFPV()
    { return { (void*)this, "bHideSaddleInFPV" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasisOnDedi()
    { return { (void*)this, "bPreventStasisOnDedi" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckForFloor()
    { return { (void*)this, "bAlwaysCheckForFloor" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCheckForFalling()
    { return { (void*)this, "bAlwaysCheckForFalling" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowCarryWaterDinos()
    { return { (void*)this, "bForceAllowCarryWaterDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AllowWalkableSlopeOverride()
    { return { (void*)this, "bUseBP_AllowWalkableSlopeOverride" }; }
    BitFieldValue<bool, unsigned __int32> bHasInvisiableSaddle()
    { return { (void*)this, "bHasInvisiableSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bUseWildDinoMapMultipliers()
    { return { (void*)this, "bUseWildDinoMapMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInvalidTameVersion()
    { return { (void*)this, "bAllowInvalidTameVersion" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowPvECarry()
    { return { (void*)this, "bForceAllowPvECarry" }; }
    BitFieldValue<bool, unsigned __int32> bUnderwaterMating()
    { return { (void*)this, "bUnderwaterMating" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckSeven()
    { return { (void*)this, "bUseBPCheckSeven" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMountStateChanged()
    { return { (void*)this, "bUseBPOnMountStateChanged" }; }
    BitFieldValue<bool, unsigned __int32> bHandleUseButtonPressBP()
    { return { (void*)this, "bHandleUseButtonPressBP" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBackwardsWalking()
    { return { (void*)this, "bPreventBackwardsWalking" }; }
    BitFieldValue<bool, unsigned __int32> bSupplyPlayerMountedCarryAnimation()
    { return { (void*)this, "bSupplyPlayerMountedCarryAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowMountedCarryRunning()
    { return { (void*)this, "bForceAllowMountedCarryRunning" }; }
    BitFieldValue<bool, unsigned __int32> bCanLatch()
    { return { (void*)this, "bCanLatch" }; }
    BitFieldValue<bool, unsigned __int32> bAllowNonFlyerLatching()
    { return { (void*)this, "bAllowNonFlyerLatching" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAutoLatchedMountedWeaponry()
    { return { (void*)this, "bPreventAutoLatchedMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bCanRideLatched()
    { return { (void*)this, "bCanRideLatched" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFedWakingTameEvent()
    { return { (void*)this, "bUseBPFedWakingTameEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomHealthBarColor()
    { return { (void*)this, "bUseCustomHealthBarColor" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPAllowCarryCharacter()
    { return { (void*)this, "bCheckBPAllowCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyMateBoostChanged()
    { return { (void*)this, "bUseBPNotifyMateBoostChanged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCarriedDinoBabyRescaled()
    { return { (void*)this, "bUseBPCarriedDinoBabyRescaled" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovementWithNoRider()
    { return { (void*)this, "bForceAllowBackwardsMovementWithNoRider" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideHealthBarOffset()
    { return { (void*)this, "bBPOverrideHealthBarOffset" }; }
    BitFieldValue<bool, unsigned __int32> bDinoFPVDisableMotionBlur()
    { return { (void*)this, "bDinoFPVDisableMotionBlur" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingUseSaddle()
    { return { (void*)this, "bPaintingUseSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bDinoDontOverrideControllerPitch()
    { return { (void*)this, "bDinoDontOverrideControllerPitch" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFlyerDinoSubmerging()
    { return { (void*)this, "bAllowFlyerDinoSubmerging" }; }
    BitFieldValue<bool, unsigned __int32> bPreventZeroingFlyerPitchWhenSwimming()
    { return { (void*)this, "bPreventZeroingFlyerPitchWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDisableAimOffset()
    { return { (void*)this, "bRiderDisableAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bRestrictNonAlliedCarriedPlayerYaw()
    { return { (void*)this, "bRestrictNonAlliedCarriedPlayerYaw" }; }
    BitFieldValue<bool, unsigned __int32> bWildDinoAlsoUseInvisibleSaddle()
    { return { (void*)this, "bWildDinoAlsoUseInvisibleSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSaddledStructLoaded()
    { return { (void*)this, "bUseBPOnSaddledStructLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSaddledStructRemoved()
    { return { (void*)this, "bUseBPOnSaddledStructRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bNeverAllowStrafing()
    { return { (void*)this, "bNeverAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidFoodItemForConsumption()
    { return { (void*)this, "bUseBPIsValidFoodItemForConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoCompanionAttachment()
    { return { (void*)this, "bAllowDinoCompanionAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bDebugMatingStats()
    { return { (void*)this, "bDebugMatingStats" }; }
    BitFieldValue<bool, unsigned __int32> bIsAlphaEliteMegaDino()
    { return { (void*)this, "bIsAlphaEliteMegaDino" }; }
    BitFieldValue<bool, unsigned __int32> bSetRiderHitWallSweepCheckLocationOnCarried()
    { return { (void*)this, "bSetRiderHitWallSweepCheckLocationOnCarried" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRandomLookAtTarget()
    { return { (void*)this, "bDebugRandomLookAtTarget" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRandomLookAtTargetSearchRadius()
    { return { (void*)this, "bDebugRandomLookAtTargetSearchRadius" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSetAttackIndex()
    { return { (void*)this, "bUseBPOnSetAttackIndex" }; }
    BitFieldValue<bool, unsigned __int32> CalculateStructureDistanceFromSaddle()
    { return { (void*)this, "CalculateStructureDistanceFromSaddle" }; }
    BitFieldValue<bool, unsigned __int32> CalculateStructureHeightFromSaddle()
    { return { (void*)this, "CalculateStructureHeightFromSaddle" }; }
    BitFieldValue<bool, unsigned __int32> TameGivesDossier()
    { return { (void*)this, "TameGivesDossier" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPlacingStructuresWhilePossessingUnriddenDino()
    { return { (void*)this, "bAllowPlacingStructuresWhilePossessingUnriddenDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTamedIdleFidgets()
    { return { (void*)this, "bAllowTamedIdleFidgets" }; }
    BitFieldValue<bool, unsigned __int32> bCanAlwaysHitCarriedCharacters()
    { return { (void*)this, "bCanAlwaysHitCarriedCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bCorruptedAllowDamagePlayerStructuresPVE()
    { return { (void*)this, "bCorruptedAllowDamagePlayerStructuresPVE" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedAllowRandomLookAtTargetAimOffsetIfHasRandomTarget()
    { return { (void*)this, "bDedicatedAllowRandomLookAtTargetAimOffsetIfHasRandomTarget" }; }
    BitFieldValue<bool, unsigned __int32> bDontDrawStatusHUDWhileRiding()
    { return { (void*)this, "bDontDrawStatusHUDWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bExtraPaintMeshesDontUseUniquePaintingTextures()
    { return { (void*)this, "bExtraPaintMeshesDontUseUniquePaintingTextures" }; }
    BitFieldValue<bool, unsigned __int32> bFindLocationAroundForBlockedClearedPassenger()
    { return { (void*)this, "bFindLocationAroundForBlockedClearedPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowWildString()
    { return { (void*)this, "bForceShowWildString" }; }
    BitFieldValue<bool, unsigned __int32> bHideDinoFloatingHUD()
    { return { (void*)this, "bHideDinoFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bIsBabyDinoAllowLootDrop()
    { return { (void*)this, "bIsBabyDinoAllowLootDrop" }; }
    BitFieldValue<bool, unsigned __int32> bMountCharacterBlueprintDrawFloatingHUD()
    { return { (void*)this, "bMountCharacterBlueprintDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyDrawFloatingHUDAsLocalPlayerController()
    { return { (void*)this, "bOnlyDrawFloatingHUDAsLocalPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCanAlwaysBeHitAsCarryingDino()
    { return { (void*)this, "bPreventCanAlwaysBeHitAsCarryingDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCrosshairDraw()
    { return { (void*)this, "bPreventCrosshairDraw" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEventColors()
    { return { (void*)this, "bPreventEventColors" }; }
    BitFieldValue<bool, unsigned __int32> bUntamedUseOverlapEvents()
    { return { (void*)this, "bUntamedUseOverlapEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddAlwaysHitMeleeActors()
    { return { (void*)this, "bUseBPAddAlwaysHitMeleeActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowDinoTargetingRange()
    { return { (void*)this, "bUseBPAllowDinoTargetingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAutoRequestSaddleItemContainerInventories()
    { return { (void*)this, "bUseBPAutoRequestSaddleItemContainerInventories" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanSetBabyAge()
    { return { (void*)this, "bUseBPCanSetBabyAge" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraBoneSetup()
    { return { (void*)this, "bUseBPGetExtraBoneSetup" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnStasisCaster()
    { return { (void*)this, "bUseBPIsValidUnStasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPMountCharacterNotifyMissionRewards()
    { return { (void*)this, "bUseBPMountCharacterNotifyMissionRewards" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyDealtDamage()
    { return { (void*)this, "bUseBPNotifyDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideFertilizedEggGender()
    { return { (void*)this, "bUseBPOverrideFertilizedEggGender" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIdleFidgetAnimation()
    { return { (void*)this, "bUseBPOverrideIdleFidgetAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMateBoostIcon()
    { return { (void*)this, "bUseBPOverrideMateBoostIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_SkipEnterFlightAnim()
    { return { (void*)this, "bUseBP_SkipEnterFlightAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBaseLevelForDeathInventoryQualityPerLevelMultiplier()
    { return { (void*)this, "bUseBaseLevelForDeathInventoryQualityPerLevelMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseRTSKeyToggle()
    { return { (void*)this, "bUseRTSKeyToggle" }; }
    BitFieldValue<bool, unsigned __int32> bUseSignificanceManager()
    { return { (void*)this, "bUseSignificanceManager" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpecificHarvestResource()
    { return { (void*)this, "bUseSpecificHarvestResource" }; }
    BitFieldValue<bool, unsigned __int32> bWildCanTargetSkipTeamMaxDistance()
    { return { (void*)this, "bWildCanTargetSkipTeamMaxDistance" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALDINOCHARACTERSPARSECLASSDATA_H
