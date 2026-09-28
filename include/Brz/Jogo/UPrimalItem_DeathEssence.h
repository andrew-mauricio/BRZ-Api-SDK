// ==========================================================================
//  UPrimalItem_DeathEssence — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_DEATHESSENCE_H
#define BRZ_SDK_JOGO_UPRIMALITEM_DEATHESSENCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FItemNetID;
struct FItemStatInfo;
struct FName;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UPrimalItem;
struct UStaticMesh;
struct UTexture2D;


struct UPrimalItem_DeathEssence
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_DeathEssence"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DeathEssence.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.AllowClassesToBeUsedAsParentSkin"); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers")); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters")); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DeathEssence.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DeathEssence.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DeathEssence.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DeathEssence.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DeathEssence.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DeathEssence.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_DeathEssence.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DeathEssence.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_DeathEssence.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_DeathEssence.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DeathEssence.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.DurabilityStringShort"); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DeathEssence.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_DeathEssence.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DeathEssence.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_DeathEssence.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_DeathEssence.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_DeathEssence.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DeathEssence.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_DeathEssence.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DeathEssence.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_DeathEssence.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_DeathEssence.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DeathEssence.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DeathEssence.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DeathEssence.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_DeathEssence.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DeathEssence.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DeathEssence.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DeathEssence.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.WidgetCustomBrokenOverlayStyleBrush")); }
    BrzCampoPonteiro bAllowCraftingWithStarterAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowCraftingWithStarterAmmo")); }
    BrzCampoPonteiro bAllowCustomColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowCustomColors")); }
    BrzCampoPonteiro bAllowDefaultCharacterAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowDefaultCharacterAttachment")); }
    BrzCampoPonteiro bAllowEquppingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowEquppingItem")); }
    BrzCampoPonteiro bAllowInvalidItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowInvalidItemVersion")); }
    BrzCampoPonteiro bAllowInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowInventoryItem")); }
    BrzCampoPonteiro bAllowOverrideItemAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowOverrideItemAutoDecreaseDurability")); }
    BrzCampoPonteiro bAllowRemoteUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowRemoteUseInInventory")); }
    BrzCampoPonteiro bAllowRemovalFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowRemovalFromInventory")); }
    BrzCampoPonteiro bAllowRemoveFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowRemoveFromSteamInventory")); }
    BrzCampoPonteiro bAllowRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowRepair")); }
    BrzCampoPonteiro bAllowUseIgnoreMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowUseIgnoreMovementMode")); }
    BrzCampoPonteiro bAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowUseInInventory")); }
    BrzCampoPonteiro bAllowUseWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowUseWhileRiding")); }
    BrzCampoPonteiro bAllowWakingTameZeroAffinityEffectivenessMultiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAllowWakingTameZeroAffinityEffectivenessMulti")); }
    BrzCampoPonteiro bAlwaysLearnedEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAlwaysLearnedEngram")); }
    BrzCampoPonteiro bAlwaysTriggerTributeDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAlwaysTriggerTributeDownloaded")); }
    BrzCampoPonteiro bAppendPrimaryColorToNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAppendPrimaryColorToName")); }
    BrzCampoPonteiro bAutoCraftBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAutoCraftBlueprint")); }
    BrzCampoPonteiro bAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bAutoTameSpawnedActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bAutoTameSpawnedActor")); }
    BrzCampoPonteiro bBPAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bBPAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bBPAllowRemoteRemoveFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bBPAllowRemoteRemoveFromInventory")); }
    BrzCampoPonteiro bBPCanUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bBPCanUse")); }
    BrzCampoPonteiro bBPInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bBPInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bCanBeArkTributeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCanBeArkTributeItem")); }
    BrzCampoPonteiro bCanBeBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCanBeBlueprint")); }
    BrzCampoPonteiro bCanBuildStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCanBuildStructures")); }
    BrzCampoPonteiro bCanSlotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCanSlot")); }
    BrzCampoPonteiro bCanUseSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCanUseSwimming")); }
    BrzCampoPonteiro bCensoredItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCensoredItemSkin")); }
    BrzCampoPonteiro bCheckBPAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCheckBPAllowCrafting")); }
    BrzCampoPonteiro bClearSkinOnInventoryRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bClearSkinOnInventoryRemoval")); }
    BrzCampoPonteiro bConfirmBeforeUsingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bConfirmBeforeUsing")); }
    BrzCampoPonteiro bConsumeItemOnUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bConsumeItemOnUse")); }
    BrzCampoPonteiro bCopyCustomDescriptionIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCopyCustomDescriptionIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyDurabilityIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCopyDurabilityIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyItemDurabilityFromCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCopyItemDurabilityFromCraftingResource")); }
    BrzCampoPonteiro bCostumeHideSaddleMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCostumeHideSaddleMesh")); }
    BrzCampoPonteiro bCraftDontActuallyGiveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCraftDontActuallyGiveItem")); }
    BrzCampoPonteiro bCraftedRequestCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCraftedRequestCustomItemDescription")); }
    BrzCampoPonteiro bCustomBrokenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCustomBrokenIcon")); }
    BrzCampoPonteiro bCustomBrokenOverlayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bCustomBrokenOverlayIcon")); }
    BrzCampoPonteiro bDeferWeaponBeginPlayToAssociatedItemSetTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDeferWeaponBeginPlayToAssociatedItemSetTime")); }
    BrzCampoPonteiro bDeprecateBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDeprecateBlueprint")); }
    BrzCampoPonteiro bDeprecateItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDeprecateItem")); }
    BrzCampoPonteiro bDestroyBrokenItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDestroyBrokenItem")); }
    BrzCampoPonteiro bDisableAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDisableAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bDisableItemUITooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDisableItemUITooltip")); }
    BrzCampoPonteiro bDivideTimeToCraftByGlobalCropGrowthSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDivideTimeToCraftByGlobalCropGrowthSpeed")); }
    BrzCampoPonteiro bDoApplyOriginalColorsWhenUnskinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDoApplyOriginalColorsWhenUnskinned")); }
    BrzCampoPonteiro bDontCountItemForUploadRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDontCountItemForUploadRestrictions")); }
    BrzCampoPonteiro bDontRemoveOnEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDontRemoveOnEquip")); }
    BrzCampoPonteiro bDontResetAttachmentIfNotUpdatingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDontResetAttachmentIfNotUpdatingItem")); }
    BrzCampoPonteiro bDontScaleSnapshotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDontScaleSnapshot")); }
    BrzCampoPonteiro bDontUseDurabilityDamageOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDontUseDurabilityDamageOverlay")); }
    BrzCampoPonteiro bDragClearDyedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDragClearDyedItem")); }
    BrzCampoPonteiro bDroppedItemAllowDinoPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDroppedItemAllowDinoPickup")); }
    BrzCampoPonteiro bDurabilityRequirementIgnoredInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bDurabilityRequirementIgnoredInWater")); }
    BrzCampoPonteiro bEggSpoilsWhenFertilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEggSpoilsWhenFertilized")); }
    BrzCampoPonteiro bEquipAddTekExtendedInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipAddTekExtendedInfo")); }
    BrzCampoPonteiro bEquipPreventsCharacterSkinsCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipPreventsCharacterSkinsCosmetics")); }
    BrzCampoPonteiro bEquipRequiresDLC_AberrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipRequiresDLC_Aberration")); }
    BrzCampoPonteiro bEquipRequiresDLC_ExtinctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipRequiresDLC_Extinction")); }
    BrzCampoPonteiro bEquipRequiresDLC_GenesisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipRequiresDLC_Genesis")); }
    BrzCampoPonteiro bEquipRequiresDLC_ScorchedEarthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipRequiresDLC_ScorchedEarth")); }
    BrzCampoPonteiro bEquipmentForceHairHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipmentForceHairHiding")); }
    BrzCampoPonteiro bEquipmentForceHideAllHairComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipmentForceHideAllHairComponents")); }
    BrzCampoPonteiro bEquipmentHatHideItemEyeHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipmentHatHideItemEyeHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemFacialHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipmentHatHideItemFacialHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemHeadHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquipmentHatHideItemHeadHair")); }
    BrzCampoPonteiro bEquippedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bEquippedItem")); }
    BrzCampoPonteiro bForceAllowCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceAllowCustomItemDescription")); }
    BrzCampoPonteiro bForceAllowDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceAllowDragging")); }
    BrzCampoPonteiro bForceAllowGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceAllowGrinding")); }
    BrzCampoPonteiro bForceAllowRemovalWhenDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceAllowRemovalWhenDead")); }
    BrzCampoPonteiro bForceAllowSkinColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceAllowSkinColorization")); }
    BrzCampoPonteiro bForceDediAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceDediAttachments")); }
    BrzCampoPonteiro bForceDisplayInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceDisplayInInventory")); }
    BrzCampoPonteiro bForceDropDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceDropDestruction")); }
    BrzCampoPonteiro bForceHideAllDefaultPawnAttachmentsWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceHideAllDefaultPawnAttachmentsWhenEquipped")); }
    BrzCampoPonteiro bForceNoLearnedEngramRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceNoLearnedEngramRequirement")); }
    BrzCampoPonteiro bForceNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceNotificationItemCombatMode")); }
    BrzCampoPonteiro bForcePreventConsumableWhileHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForcePreventConsumableWhileHandcuffed")); }
    BrzCampoPonteiro bForcePreventGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForcePreventGrinding")); }
    BrzCampoPonteiro bForceQualityColorOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceQualityColorOverlay")); }
    BrzCampoPonteiro bForceRequiresExplicitOwnerChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceRequiresExplicitOwnerChecks")); }
    BrzCampoPonteiro bForceUseItemAddCharacterStatsOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bForceUseItemAddCharacterStatsOnDinos")); }
    BrzCampoPonteiro bFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bFromSteamInventory")); }
    BrzCampoPonteiro bGiveItemWhenUsedCopyItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bGiveItemWhenUsedCopyItemStats")); }
    BrzCampoPonteiro bHideCustomDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bHideCustomDescription")); }
    BrzCampoPonteiro bHideFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bHideFromInventoryDisplay")); }
    BrzCampoPonteiro bHideFromRemoteInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bHideFromRemoteInventoryDisplay")); }
    BrzCampoPonteiro bHideMoreOptionsIfNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bHideMoreOptionsIfNonRemovable")); }
    BrzCampoPonteiro bIgnoreDrawingItemButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIgnoreDrawingItemButtonIcon")); }
    BrzCampoPonteiro bIgnoreMinimumUseIntervalForDinoAutoEatingFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIgnoreMinimumUseIntervalForDinoAutoEatingFood")); }
    BrzCampoPonteiro bIsAbstractItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsAbstractItem")); }
    BrzCampoPonteiro bIsBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsBlueprint")); }
    BrzCampoPonteiro bIsCharacterSkinOrCosmeticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsCharacterSkinOrCosmetic")); }
    BrzCampoPonteiro bIsClubArkRewardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsClubArkReward")); }
    BrzCampoPonteiro bIsClubArkTradeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsClubArkTrade")); }
    BrzCampoPonteiro bIsCookingIngredientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsCookingIngredient")); }
    BrzCampoPonteiro bIsCustomRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsCustomRecipe")); }
    BrzCampoPonteiro bIsDescriptionOnlyItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsDescriptionOnlyItem")); }
    BrzCampoPonteiro bIsDinoAutoHealingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsDinoAutoHealingItem")); }
    BrzCampoPonteiro bIsEggField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsEgg")); }
    BrzCampoPonteiro bIsEmbryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsEmbryo")); }
    BrzCampoPonteiro bIsEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsEngram")); }
    BrzCampoPonteiro bIsFoodRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsFoodRecipe")); }
    BrzCampoPonteiro bIsFromAllClustersInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsFromAllClustersInventory")); }
    BrzCampoPonteiro bIsGhostItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsGhostItemSkin")); }
    BrzCampoPonteiro bIsInitialItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsInitialItem")); }
    BrzCampoPonteiro bIsItemAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsItemAccessory")); }
    BrzCampoPonteiro bIsItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsItemSkin")); }
    BrzCampoPonteiro bIsMisssionItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsMisssionItem")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bIsRepairing")); }
    BrzCampoPonteiro bItemIsUsableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemIsUsable")); }
    BrzCampoPonteiro bItemSkinAllowEquippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinAllowEquipping")); }
    BrzCampoPonteiro bItemSkinIgnoreSkinIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinIgnoreSkinIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinKeepOriginalIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinKeepOriginalItemName")); }
    BrzCampoPonteiro bItemSkinKeepOriginalWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinKeepOriginalWeaponTemplate")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinReceiveOwnerEquippedBlueprintEvents")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bItemSkinReceiveOwnerEquippedBlueprintTick")); }
    BrzCampoPonteiro bMergeCustomDataFromCraftingResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bMergeCustomDataFromCraftingResources")); }
    BrzCampoPonteiro bMuteExtraEquipmentSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bMuteExtraEquipmentSounds")); }
    BrzCampoPonteiro bNameForceNoStatQualityRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bNameForceNoStatQualityRank")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_DeathEssence.bNetInfoFromClient"); }
    BrzCampoPonteiro bNewWeaponAutoFillClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bNewWeaponAutoFillClipAmmo")); }
    BrzCampoPonteiro bNonBlockingShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bNonBlockingShield")); }
    BrzCampoPonteiro bOnlyCanUseInFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bOnlyCanUseInFalling")); }
    BrzCampoPonteiro bOnlyCanUseInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bOnlyCanUseInWater")); }
    BrzCampoPonteiro bOnlyEquipWhenUnconsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bOnlyEquipWhenUnconscious")); }
    BrzCampoPonteiro bOverrideExactClassCraftingRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bOverrideExactClassCraftingRequirement")); }
    BrzCampoPonteiro bOverrideRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bOverrideRepairingRequirements")); }
    BrzCampoPonteiro bPickupEggAlertsDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPickupEggAlertsDinos")); }
    BrzCampoPonteiro bPickupEggForceAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPickupEggForceAggro")); }
    BrzCampoPonteiro bPreventArmorDurabiltyConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventArmorDurabiltyConsumption")); }
    BrzCampoPonteiro bPreventCheatGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventCheatGive")); }
    BrzCampoPonteiro bPreventColdStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventColdStorage")); }
    BrzCampoPonteiro bPreventConsumeItemOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventConsumeItemOnDrag")); }
    BrzCampoPonteiro bPreventCraftingResourceAtFullDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventCraftingResourceAtFullDurability")); }
    BrzCampoPonteiro bPreventDepositDroppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventDepositDropping")); }
    BrzCampoPonteiro bPreventDinoAutoConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventDinoAutoConsume")); }
    BrzCampoPonteiro bPreventDragOntoOtherItemIfSameCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventDragOntoOtherItemIfSameCustomData")); }
    BrzCampoPonteiro bPreventEquipOnTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventEquipOnTaxidermyBase")); }
    BrzCampoPonteiro bPreventItemBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventItemBlueprint")); }
    BrzCampoPonteiro bPreventItemSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventItemSkins")); }
    BrzCampoPonteiro bPreventModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventModifyArmorValue")); }
    BrzCampoPonteiro bPreventNativeItemBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventNativeItemBroken")); }
    BrzCampoPonteiro bPreventNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventNotificationItemCombatMode")); }
    BrzCampoPonteiro bPreventOnFullEquippedSuitHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventOnFullEquippedSuitHUD")); }
    BrzCampoPonteiro bPreventOnSkinTabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventOnSkinTab")); }
    BrzCampoPonteiro bPreventRegularDroppingButStillDropInBulkAndDestructionCachesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches")); }
    BrzCampoPonteiro bPreventRemovingClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventRemovingClipAmmo")); }
    BrzCampoPonteiro bPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUpload")); }
    BrzCampoPonteiro bPreventUploadingWeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUploadingWeaponClipAmmo")); }
    BrzCampoPonteiro bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned")); }
    BrzCampoPonteiro bPreventUseAtTameLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUseAtTameLimit")); }
    BrzCampoPonteiro bPreventUseByDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUseByDinos")); }
    BrzCampoPonteiro bPreventUseByHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUseByHumans")); }
    BrzCampoPonteiro bPreventUseWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bPreventUseWhenSleeping")); }
    BrzCampoPonteiro bRefreshOnDyeUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bRefreshOnDyeUsed")); }
    BrzCampoPonteiro bRequiresBobsTallTalesToCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bRequiresBobsTallTalesToCraft")); }
    BrzCampoPonteiro bResourcePreventGivingFromDemolitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bResourcePreventGivingFromDemolition")); }
    BrzCampoPonteiro bRestoreDurabilityWhenColorizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bRestoreDurabilityWhenColorized")); }
    BrzCampoPonteiro bSaddleUseRegularDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSaddleUseRegularDurability")); }
    BrzCampoPonteiro bScaleOverridenRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bScaleOverridenRepairingRequirements")); }
    BrzCampoPonteiro bSetCraftingActorToSpawnTeamFromCrafterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSetCraftingActorToSpawnTeamFromCrafter")); }
    BrzCampoPonteiro bShowItemRatingAsPercentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bShowItemRatingAsPercent")); }
    BrzCampoPonteiro bShowTooltipColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bShowTooltipColors")); }
    BrzCampoPonteiro bSkinAddWeightToSkinnedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSkinAddWeightToSkinnedItem")); }
    BrzCampoPonteiro bSkinDisableWhenSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSkinDisableWhenSubmerged")); }
    BrzCampoPonteiro bSkinReequipOnClientBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSkinReequipOnClientBeginPlay")); }
    BrzCampoPonteiro bSkipEquipAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSkipEquipAnimation")); }
    BrzCampoPonteiro bSpawnActorOnWaterOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSpawnActorOnWaterOnly")); }
    BrzCampoPonteiro bSupportDragOntoOtherItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bSupportDragOntoOtherItem")); }
    BrzCampoPonteiro bTekItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bTekItem")); }
    BrzCampoPonteiro bThrowOnHotKeyUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bThrowOnHotKeyUse")); }
    BrzCampoPonteiro bThrowUsesSecondaryActionDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bThrowUsesSecondaryActionDrop")); }
    BrzCampoPonteiro bUnappliedItemSkinIgnoreItemAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUnappliedItemSkinIgnoreItemAttachments")); }
    BrzCampoPonteiro bUnlockAsPersistentProfileItemOnCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUnlockAsPersistentProfileItemOnCraft")); }
    BrzCampoPonteiro bUsableWithTekGrenadeLauncherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUsableWithTekGrenadeLauncher")); }
    BrzCampoPonteiro bUseBPAddedAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPAddedAttachments")); }
    BrzCampoPonteiro bUseBPAddedToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPAddedToInventory")); }
    BrzCampoPonteiro bUseBPAllowAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPAllowAddToInventory")); }
    BrzCampoPonteiro bUseBPCanPlayerUseItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCanPlayerUseItem")); }
    BrzCampoPonteiro bUseBPConsumeProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPConsumeProjectileImpact")); }
    BrzCampoPonteiro bUseBPCraftedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCrafted")); }
    BrzCampoPonteiro bUseBPCustomAutoDecreaseDurabilityPerIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomAutoDecreaseDurabilityPerInterval")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomDurabilityText")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomDurabilityTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomInventoryWidgetTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextForBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPCustomInventoryWidgetTextForBlueprint")); }
    BrzCampoPonteiro bUseBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPDrawItemIcon")); }
    BrzCampoPonteiro bUseBPEquippedItemOnXPEarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPEquippedItemOnXPEarning")); }
    BrzCampoPonteiro bUseBPForceAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPForceAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bUseBPGetItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemDescription")); }
    BrzCampoPonteiro bUseBPGetItemDurabilityPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemDurabilityPercentage")); }
    BrzCampoPonteiro bUseBPGetItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemIcon")); }
    BrzCampoPonteiro bUseBPGetItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemName")); }
    BrzCampoPonteiro bUseBPGetItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemNetInfo")); }
    BrzCampoPonteiro bUseBPGetItemStatStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetItemStatString")); }
    BrzCampoPonteiro bUseBPGetMaxAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPGetMaxAmmo")); }
    BrzCampoPonteiro bUseBPInitFromItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPInitFromItemNetInfo")); }
    BrzCampoPonteiro bUseBPInitItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPInitItemColors")); }
    BrzCampoPonteiro bUseBPInitializeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPInitializeItem")); }
    BrzCampoPonteiro bUseBPIsValidForCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPIsValidForCrafting")); }
    BrzCampoPonteiro bUseBPNotifyDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPNotifyDropped")); }
    BrzCampoPonteiro bUseBPNotifyItemRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPNotifyItemRefreshed")); }
    BrzCampoPonteiro bUseBPOnCropPhaseIncreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOnCropPhaseIncrease")); }
    BrzCampoPonteiro bUseBPOnItemConsumedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOnItemConsumed")); }
    BrzCampoPonteiro bUseBPOnUpdatedItemContextMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOnUpdatedItemContextMenu")); }
    BrzCampoPonteiro bUseBPOverrideAnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideAnimMontage")); }
    BrzCampoPonteiro bUseBPOverrideCraftingConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideCraftingConsumption")); }
    BrzCampoPonteiro bUseBPOverrideDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideDeathAnim")); }
    BrzCampoPonteiro bUseBPOverrideHoldItemSlotActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideHoldItemSlotAction")); }
    BrzCampoPonteiro bUseBPOverrideInheritedStatWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideInheritedStatWeight")); }
    BrzCampoPonteiro bUseBPOverrideProjectileTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideProjectileType")); }
    BrzCampoPonteiro bUseBPOverrideRemainingCooldownTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideRemainingCooldownTime")); }
    BrzCampoPonteiro bUseBPOverrideSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPOverrideSound")); }
    BrzCampoPonteiro bUseBPPostAddBuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPPostAddBuffToGiveOwnerCharacter")); }
    BrzCampoPonteiro bUseBPPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPPreventUpload")); }
    BrzCampoPonteiro bUseBPPreventUseOntoItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPPreventUseOntoItem")); }
    BrzCampoPonteiro bUseBPPrimalDinoCharacterConsumedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPPrimalDinoCharacterConsumedItem")); }
    BrzCampoPonteiro bUseBPRemovedFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPRemovedFromInventory")); }
    BrzCampoPonteiro bUseBPSetupHUDIconMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBPSetupHUDIconMaterial")); }
    BrzCampoPonteiro bUseBlueprintEquippedNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseBlueprintEquippedNotifications")); }
    BrzCampoPonteiro bUseEquippedItemBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseEquippedItemBlueprintTick")); }
    BrzCampoPonteiro bUseEquippedItemNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseEquippedItemNativeTick")); }
    BrzCampoPonteiro bUseInWaterRestoreDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseInWaterRestoreDurability")); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_DeathEssence.bUseItemColor" }; }
    BrzCampoPonteiro bUseItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseItemColors")); }
    BrzCampoPonteiro bUseItemDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseItemDurability")); }
    BrzCampoPonteiro bUseItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseItemStats")); }
    BrzCampoPonteiro bUseMultiSaddleMeshOverrideMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseMultiSaddleMeshOverrideMap")); }
    BrzCampoPonteiro bUseOnItemSetIndexAsDestinationItemCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseOnItemSetIndexAsDestinationItemCustomData")); }
    BrzCampoPonteiro bUseOnItemWeaponRemoveClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseOnItemWeaponRemoveClipAmmo")); }
    BrzCampoPonteiro bUseOntoItemRequiresImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseOntoItemRequiresImmobilization")); }
    BrzCampoPonteiro bUseScaleStatEffectivenessByDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseScaleStatEffectivenessByDurability")); }
    BrzCampoPonteiro bUseSkinDroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSkinDroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro bUseSkinnedBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSkinnedBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseSlottedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSlottedTick")); }
    BrzCampoPonteiro bUseSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSpawnActor")); }
    BrzCampoPonteiro bUseSpawnActorRelativeLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSpawnActorRelativeLoc")); }
    BrzCampoPonteiro bUseSpawnActorTakeOwnerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSpawnActorTakeOwnerRotation")); }
    BrzCampoPonteiro bUseSpawnActorWhenRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUseSpawnActorWhenRiding")); }
    BrzCampoPonteiro bUsesCreationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUsesCreationTime")); }
    BrzCampoPonteiro bUsingRequiresStandingOnSolidGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bUsingRequiresStandingOnSolidGround")); }
    BrzCampoPonteiro bValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DeathEssence.bValidCraftingResource")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_DEATHESSENCE_H
