// ==========================================================================
//  FPrimalItemSparseClassData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALITEMSPARSECLASSDATA_H
#define BRZ_SDK_JOGO_FPRIMALITEMSPARSECLASSDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UMaterialInterface;
struct USoundBase;
struct USoundCue;


struct FPrimalItemSparseClassData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalItemSparseClassData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FPrimalItemSparseClassData.operator=(FPrimalItemSparseClassData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FPrimalItemSparseClassData.operator=(FPrimalItemSparseClassData&)", a0);
    }

    FString& AbstractItemCraftingDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.AbstractItemCraftingDescription"); }
    BrzCampoPonteiro AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.AlwaysShowInFolderStartIgnoringFolderPathsWhenFoldersDisabledDepth")); }
    TArray<void*>& AmmoSupportDragOntoWeaponItemWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.AmmoSupportDragOntoWeaponItemWeaponTemplates"); }
    int& ArkTributeVersionField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ArkTributeVersion"); }
    float& AutoDecreaseMinDurabilityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDecreaseMinDurability"); }
    float& AutoDurabilityDecreaseIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.AutoDurabilityDecreaseInterval"); }
    float& BaseRepairingXPField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BaseRepairingXP"); }
    BrzCampoPonteiro BlockingShieldFPVRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.BlockingShieldFPVRotation")); }
    BrzCampoPonteiro BlockingShieldFPVTranslationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.BlockingShieldFPVTranslation")); }
    int& BlueprintAllowMaxCraftingsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.BlueprintAllowMaxCraftings"); }
    float& BlueprintWeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.BlueprintWeight"); }
    BrzCampoPonteiro BrokenGiveItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.BrokenGiveItemClass")); }
    BrzCampoPonteiro BuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.BuffToGiveOwnerCharacter")); }
    float& ClearColorDurabilityThresholdField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ClearColorDurabilityThreshold"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.CostumeDinoSaddleOverrideMesh")); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideTorchMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.CostumeDinoSaddleOverrideTorchMesh")); }
    FString& CraftItemButtonStringOverrideField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CraftItemButtonStringOverride"); }
    BrzCampoPonteiro CraftingActorToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.CraftingActorToSpawn")); }
    int& CraftingConsumesDurabilityField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingConsumesDurability"); }
    float& CraftingCooldownIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingCooldownInterval"); }
    int& CraftingGiveItemCountField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGiveItemCount"); }
    int& CraftingGivesItemQuantityOverrideField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingGivesItemQuantityOverride"); }
    int& CraftingMinLevelRequirementField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.CraftingMinLevelRequirement"); }
    float& CraftingSkillQualityMultiplierMaxField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMax"); }
    float& CraftingSkillQualityMultiplierMinField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CraftingSkillQualityMultiplierMin"); }
    float& CropGrowingFertilizerConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingFertilizerConsumptionRate"); }
    float& CropGrowingWaterConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropGrowingWaterConsumptionRate"); }
    float& CropMaxFruitFertilizerConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitFertilizerConsumptionRate"); }
    float& CropMaxFruitWaterConsumptionRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropMaxFruitWaterConsumptionRate"); }
    float& CropNoFertilizerOrWaterCacheReductionRateField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CropNoFertilizerOrWaterCacheReductionRate"); }
    TArray<void*>& CropPhasesDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.CropPhasesData"); }
    BrzCampoPonteiro CustomBrokenBorderColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.CustomBrokenBorderColor")); }
    TArray<void*>& CustomContextOptionDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.CustomContextOptionData"); }
    TArray<void*>& CustomContextSubMenusField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.CustomContextSubMenus"); }
    float& CustomInventoryWidgetTextVerticalOffsetField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.CustomInventoryWidgetTextVerticalOffset"); }
    BrzCampoPonteiro CustomItemTooltipOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.CustomItemTooltipOverride")); }
    FString& CustomRepairTextField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.CustomRepairText"); }
    float& DamageTorpidityArmorRatingField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DamageTorpidityArmorRating"); }
    FName& DefaultWeaponMeshNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.DefaultWeaponMeshName"); }
    float& DinoAutoHealingThresholdPercentField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingThresholdPercent"); }
    float& DinoAutoHealingUseTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DinoAutoHealingUseTimeInterval"); }
    BrzCampoPonteiro DroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro DroppedItemTemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DroppedItemTemplateOverride")); }
    UMaterialInterface*& DroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "FPrimalItemSparseClassData.DroppedMeshMaterialOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DroppedMeshOverride")); }
    BrzCampoPonteiro DurabilityBarColorBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DurabilityBarColorBackground")); }
    BrzCampoPonteiro DurabilityBarColorForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DurabilityBarColorForeground")); }
    float& DurabilityDecreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityDecreaseMultiplier"); }
    float& DurabilityIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityIncreaseMultiplier"); }
    float& DurabilityNotifyThresholdValueField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.DurabilityNotifyThresholdValue"); }
    BrzCampoPonteiro DyeEquippedSkinPreviewMeshOverrideSMField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DyeEquippedSkinPreviewMeshOverrideSM")); }
    BrzCampoPonteiro DyePreviewMeshOverrideSKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DyePreviewMeshOverrideSK")); }
    BrzCampoPonteiro DyePreviewMeshOverrideSMField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.DyePreviewMeshOverrideSM")); }
    float& EggAlertDinosAggroAmountField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroAmount"); }
    TArray<void*>& EggAlertDinosAggroTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.EggAlertDinosAggroTags"); }
    float& EggAlertDinosForcedAggroTimeField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggAlertDinosForcedAggroTime"); }
    float& EggMaximumDistanceFromOriginalDropToAlertDinosField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EggMaximumDistanceFromOriginalDropToAlertDinos"); }
    BrzCampoPonteiro EngramRequirementItemClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.EngramRequirementItemClassOverride")); }
    USoundBase*& EquipSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.EquipSound"); }
    float& EquippedReduceDurabilityIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityInterval"); }
    float& EquippedReduceDurabilityPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.EquippedReduceDurabilityPerInterval"); }
    FName& EquippingCosmeticRequiresUnlockedEmoteNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.EquippingCosmeticRequiresUnlockedEmoteName"); }
    int& ExtraItemCategoryFlagsField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.ExtraItemCategoryFlags"); }
    USoundBase*& ExtraThrowItemSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ExtraThrowItemSound"); }
    float& FertilizerEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.FertilizerEffectivenessMultiplier"); }
    BrzCampoPonteiro GiveItemWhenUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.GiveItemWhenUsed")); }
    float& GlobalTameAffinityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.GlobalTameAffinityMultiplier"); }
    UAnimMontage*& HideAnimationFemaleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.HideAnimationFemale"); }
    UAnimMontage*& HideAnimationMaleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.HideAnimationMale"); }
    float& ImprintingQualitySpeedField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ImprintingQualitySpeed"); }
    float& IndirectTorpidityArmorRatingField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.IndirectTorpidityArmorRating"); }
    float& Ingredient_FoodIncreasePerQuantityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_FoodIncreasePerQuantity"); }
    float& Ingredient_HealthIncreasePerQuantityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_HealthIncreasePerQuantity"); }
    float& Ingredient_StaminaIncreasePerQuantityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_StaminaIncreasePerQuantity"); }
    float& Ingredient_WaterIncreasePerQuantityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WaterIncreasePerQuantity"); }
    float& Ingredient_WeightIncreasePerQuantityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.Ingredient_WeightIncreasePerQuantity"); }
    USoundBase*& ItemBrokenSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ItemBrokenSound"); }
    BrzCampoPonteiro ItemClassToUseAsInitialCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.ItemClassToUseAsInitialCustomData")); }
    float& ItemIconScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ItemIconScale"); }
    FString& ItemRatingStringField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.ItemRatingString"); }
    int& MaxCustomItemDescriptionLengthField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.MaxCustomItemDescriptionLength"); }
    float& MinBlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinBlueprintTimeToCraft"); }
    float& MinDurabilityForCraftingResourceField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinDurabilityForCraftingResource"); }
    float& MinimumUseIntervalField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.MinimumUseInterval"); }
    int& NoLevelEngramSortingPriorityField() const
    { return *GetNativePointerField<int*>(this, "FPrimalItemSparseClassData.NoLevelEngramSortingPriority"); }
    BrzCampoPonteiro OverrideCooldownTimeItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.OverrideCooldownTimeItemClass")); }
    TArray<void*>& OverrideRepairingRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.OverrideRepairingRequirements"); }
    FString& OverrideUseStringField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalItemSparseClassData.OverrideUseString"); }
    UAnimMontage*& PlayAnimationOnUseField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.PlayAnimationOnUse"); }
    BrzCampoPonteiro PreservingItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.PreservingItemClass")); }
    float& PreservingItemSpoilingTimeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreservingItemSpoilingTimeMultiplier"); }
    unsigned char& PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLCField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalItemSparseClassData.PreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned_WhichDLC"); }
    float& PreviewCameraDefaultZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDefaultZoomMultiplier"); }
    float& PreviewCameraDistanceScaleFactorField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraDistanceScaleFactor"); }
    float& PreviewCameraMaxZoomMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.PreviewCameraMaxZoomMultiplier"); }
    BrzCampoPonteiro PreviewCameraPivotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.PreviewCameraPivotOffset")); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.PreviewCameraRotation")); }
    float& RandomChanceToBeBlueprintField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RandomChanceToBeBlueprint"); }
    float& RecipeCraftingSkillScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RecipeCraftingSkillScale"); }
    USoundBase*& RemovedFromOtherItemSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.RemovedFromOtherItemSound"); }
    float& RepairResourceRequirementMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.RepairResourceRequirementMultiplier"); }
    unsigned char& RequiresDLCField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalItemSparseClassData.RequiresDLC"); }
    float& ResourceRequirementIncreaseRatingPowerField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementIncreaseRatingPower"); }
    float& ResourceRequirementRatingIncreasePercentageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingIncreasePercentage"); }
    float& ResourceRequirementRatingScaleField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ResourceRequirementRatingScale"); }
    FName& SaddleOverrideRiderSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.SaddleOverrideRiderSocketName"); }
    BrzCampoPonteiro SendToClientClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.SendToClientClassOverride")); }
    float& ShieldBlockDamagePercentageField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldBlockDamagePercentage"); }
    float& ShieldDamageToDurabilityRatioField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.ShieldDamageToDurabilityRatio"); }
    USoundBase*& ShieldHitSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.ShieldHitSound"); }
    UAnimMontage*& ShowAnimationFemaleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.ShowAnimationFemale"); }
    UAnimMontage*& ShowAnimationMaleField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "FPrimalItemSparseClassData.ShowAnimationMale"); }
    float& SinglePlayerCraftingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.SinglePlayerCraftingSpeedMultiplier"); }
    BrzCampoPonteiro SkinWeaponTemplatesForAmmo_PerWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.SkinWeaponTemplatesForAmmo_PerWeapon")); }
    BrzCampoPonteiro SpawnOnWaterEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.SpawnOnWaterEncroachmentBoxExtent")); }
    BrzCampoPonteiro SpoilingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.SpoilingItem")); }
    TArray<void*>& SupportDragOntoItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.SupportDragOntoItemClasses"); }
    float& TimeForFullRepairField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.TimeForFullRepair"); }
    TArray<void*>& TopLevelCustomContextMenuOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalItemSparseClassData.TopLevelCustomContextMenuOptions"); }
    USoundBase*& UnEquipSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UnEquipSound"); }
    float& UseDecreaseDurabilityField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurability"); }
    float& UseDecreaseDurabilityMinField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseDecreaseDurabilityMin"); }
    float& UseGiveDinoTameAffinityPercentField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseGiveDinoTameAffinityPercent"); }
    USoundBase*& UseItemOnItemSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UseItemOnItemSound"); }
    USoundCue*& UseItemSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "FPrimalItemSparseClassData.UseItemSound"); }
    float& UseMinDurabilityRequirementField() const
    { return *GetNativePointerField<float*>(this, "FPrimalItemSparseClassData.UseMinDurabilityRequirement"); }
    BrzCampoPonteiro UseParticleEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.UseParticleEffect")); }
    FName& UseParticleEffectSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseParticleEffectSocketName"); }
    BrzCampoPonteiro UseSpawnActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.UseSpawnActorClass")); }
    BrzCampoPonteiro UseSpawnActorLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalItemSparseClassData.UseSpawnActorLocOffset")); }
    FName& UseUnlocksEmoteNameField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalItemSparseClassData.UseUnlocksEmoteName"); }
    USoundBase*& UsedOnOtherItemSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "FPrimalItemSparseClassData.UsedOnOtherItemSound"); }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLocalUse()
    { return { (void*)this, "bUseBPOnLocalUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomContextMenuOptions()
    { return { (void*)this, "bUseCustomContextMenuOptions" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnItemAddedToInventory()
    { return { (void*)this, "bUseBPOnItemAddedToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bHideDuringEquipAnimation()
    { return { (void*)this, "bHideDuringEquipAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bHideWeaponDuringEquipAnimation()
    { return { (void*)this, "bHideWeaponDuringEquipAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifications()
    { return { (void*)this, "bUseBlueprintAnimNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bDontReplicateCustomItemDataClasses()
    { return { (void*)this, "bDontReplicateCustomItemDataClasses" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAnimUROIfEquipped()
    { return { (void*)this, "bDisableAnimUROIfEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bHideDurabilityBar()
    { return { (void*)this, "bHideDurabilityBar" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreConsumeSelfWhenCraftingPrevention()
    { return { (void*)this, "bIgnoreConsumeSelfWhenCraftingPrevention" }; }
    BitFieldValue<bool, unsigned __int32> bIsCursedItem()
    { return { (void*)this, "bIsCursedItem" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresDLCToCraftAndRepair()
    { return { (void*)this, "bRequiresDLCToCraftAndRepair" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMinimalUseInterval()
    { return { (void*)this, "bUseBPOverrideMinimalUseInterval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldAlwaysShowInFolder()
    { return { (void*)this, "bUseBPShouldAlwaysShowInFolder" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkinOverrideWeaponFPVMasterPoseComponent()
    { return { (void*)this, "bUseBPSkinOverrideWeaponFPVMasterPoseComponent" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALITEMSPARSECLASSDATA_H
