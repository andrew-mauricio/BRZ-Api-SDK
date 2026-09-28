// ==========================================================================
//  UPrimalItem_HotbarSkill — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_HOTBARSKILL_H
#define BRZ_SDK_JOGO_UPRIMALITEM_HOTBARSKILL_H

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


struct UPrimalItem_HotbarSkill
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_HotbarSkill"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_HotbarSkill.AddToSlot(int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToSlot(int a0, bool a1, bool a2) const
    {
        return NativeCall<void*, int, bool, bool>(this, "UPrimalItem_HotbarSkill.AddToSlot(int,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_HotbarSkill.RemoveFromSlot(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromSlot(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UPrimalItem_HotbarSkill.RemoveFromSlot(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_HotbarSkill.Used(UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Used(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalItem_HotbarSkill.Used(UPrimalItem*,int)", a0, a1);
    }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_HotbarSkill.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.AllowClassesToBeUsedAsParentSkin"); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers")); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters")); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_HotbarSkill.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_HotbarSkill.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_HotbarSkill.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_HotbarSkill.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_HotbarSkill.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_HotbarSkill.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_HotbarSkill.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_HotbarSkill.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_HotbarSkill.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_HotbarSkill.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_HotbarSkill.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.DurabilityStringShort"); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_HotbarSkill.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_HotbarSkill.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_HotbarSkill.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_HotbarSkill.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_HotbarSkill.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_HotbarSkill.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_HotbarSkill.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_HotbarSkill.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_HotbarSkill.MyItemType"); }
    FName& MySkillNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_HotbarSkill.MySkillName"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_HotbarSkill.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_HotbarSkill.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_HotbarSkill.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_HotbarSkill.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_HotbarSkill.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_HotbarSkill.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_HotbarSkill.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_HotbarSkill.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_HotbarSkill.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.WidgetCustomBrokenOverlayStyleBrush")); }
    BrzCampoPonteiro bAllowCraftingWithStarterAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowCraftingWithStarterAmmo")); }
    BrzCampoPonteiro bAllowCustomColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowCustomColors")); }
    BrzCampoPonteiro bAllowDefaultCharacterAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowDefaultCharacterAttachment")); }
    BrzCampoPonteiro bAllowEquppingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowEquppingItem")); }
    BrzCampoPonteiro bAllowInvalidItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowInvalidItemVersion")); }
    BrzCampoPonteiro bAllowInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowInventoryItem")); }
    BrzCampoPonteiro bAllowOverrideItemAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowOverrideItemAutoDecreaseDurability")); }
    BrzCampoPonteiro bAllowRemoteUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowRemoteUseInInventory")); }
    BrzCampoPonteiro bAllowRemovalFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowRemovalFromInventory")); }
    BrzCampoPonteiro bAllowRemoveFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowRemoveFromSteamInventory")); }
    BrzCampoPonteiro bAllowRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowRepair")); }
    BrzCampoPonteiro bAllowUseIgnoreMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowUseIgnoreMovementMode")); }
    BrzCampoPonteiro bAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowUseInInventory")); }
    BrzCampoPonteiro bAllowUseWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowUseWhileRiding")); }
    BrzCampoPonteiro bAllowWakingTameZeroAffinityEffectivenessMultiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAllowWakingTameZeroAffinityEffectivenessMulti")); }
    BrzCampoPonteiro bAlwaysLearnedEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAlwaysLearnedEngram")); }
    BrzCampoPonteiro bAlwaysTriggerTributeDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAlwaysTriggerTributeDownloaded")); }
    BrzCampoPonteiro bAppendPrimaryColorToNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAppendPrimaryColorToName")); }
    BrzCampoPonteiro bAutoCraftBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAutoCraftBlueprint")); }
    BrzCampoPonteiro bAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bAutoTameSpawnedActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bAutoTameSpawnedActor")); }
    BrzCampoPonteiro bBPAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bBPAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bBPAllowRemoteRemoveFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bBPAllowRemoteRemoveFromInventory")); }
    BrzCampoPonteiro bBPCanUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bBPCanUse")); }
    BrzCampoPonteiro bBPInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bBPInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bCanBeArkTributeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCanBeArkTributeItem")); }
    BrzCampoPonteiro bCanBeBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCanBeBlueprint")); }
    BrzCampoPonteiro bCanBuildStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCanBuildStructures")); }
    BrzCampoPonteiro bCanSlotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCanSlot")); }
    BrzCampoPonteiro bCanUseSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCanUseSwimming")); }
    BrzCampoPonteiro bCensoredItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCensoredItemSkin")); }
    BrzCampoPonteiro bCheckBPAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCheckBPAllowCrafting")); }
    BrzCampoPonteiro bClearSkinOnInventoryRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bClearSkinOnInventoryRemoval")); }
    BrzCampoPonteiro bConfirmBeforeUsingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bConfirmBeforeUsing")); }
    BrzCampoPonteiro bConsumeItemOnUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bConsumeItemOnUse")); }
    BrzCampoPonteiro bCopyCustomDescriptionIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCopyCustomDescriptionIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyDurabilityIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCopyDurabilityIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyItemDurabilityFromCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCopyItemDurabilityFromCraftingResource")); }
    BrzCampoPonteiro bCostumeHideSaddleMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCostumeHideSaddleMesh")); }
    BrzCampoPonteiro bCraftDontActuallyGiveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCraftDontActuallyGiveItem")); }
    BrzCampoPonteiro bCraftedRequestCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCraftedRequestCustomItemDescription")); }
    BrzCampoPonteiro bCustomBrokenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCustomBrokenIcon")); }
    BrzCampoPonteiro bCustomBrokenOverlayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bCustomBrokenOverlayIcon")); }
    BrzCampoPonteiro bDeferWeaponBeginPlayToAssociatedItemSetTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDeferWeaponBeginPlayToAssociatedItemSetTime")); }
    BrzCampoPonteiro bDeprecateBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDeprecateBlueprint")); }
    BrzCampoPonteiro bDeprecateItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDeprecateItem")); }
    BrzCampoPonteiro bDestroyBrokenItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDestroyBrokenItem")); }
    BrzCampoPonteiro bDisableAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDisableAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bDisableItemUITooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDisableItemUITooltip")); }
    BrzCampoPonteiro bDivideTimeToCraftByGlobalCropGrowthSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDivideTimeToCraftByGlobalCropGrowthSpeed")); }
    BrzCampoPonteiro bDoApplyOriginalColorsWhenUnskinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDoApplyOriginalColorsWhenUnskinned")); }
    BrzCampoPonteiro bDontCountItemForUploadRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDontCountItemForUploadRestrictions")); }
    BrzCampoPonteiro bDontRemoveOnEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDontRemoveOnEquip")); }
    BrzCampoPonteiro bDontResetAttachmentIfNotUpdatingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDontResetAttachmentIfNotUpdatingItem")); }
    BrzCampoPonteiro bDontScaleSnapshotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDontScaleSnapshot")); }
    BrzCampoPonteiro bDontUseDurabilityDamageOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDontUseDurabilityDamageOverlay")); }
    BrzCampoPonteiro bDragClearDyedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDragClearDyedItem")); }
    BrzCampoPonteiro bDroppedItemAllowDinoPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDroppedItemAllowDinoPickup")); }
    BrzCampoPonteiro bDurabilityRequirementIgnoredInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bDurabilityRequirementIgnoredInWater")); }
    BrzCampoPonteiro bEggSpoilsWhenFertilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEggSpoilsWhenFertilized")); }
    BrzCampoPonteiro bEquipAddTekExtendedInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipAddTekExtendedInfo")); }
    BrzCampoPonteiro bEquipPreventsCharacterSkinsCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipPreventsCharacterSkinsCosmetics")); }
    BrzCampoPonteiro bEquipRequiresDLC_AberrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipRequiresDLC_Aberration")); }
    BrzCampoPonteiro bEquipRequiresDLC_ExtinctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipRequiresDLC_Extinction")); }
    BrzCampoPonteiro bEquipRequiresDLC_GenesisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipRequiresDLC_Genesis")); }
    BrzCampoPonteiro bEquipRequiresDLC_ScorchedEarthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipRequiresDLC_ScorchedEarth")); }
    BrzCampoPonteiro bEquipmentForceHairHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipmentForceHairHiding")); }
    BrzCampoPonteiro bEquipmentForceHideAllHairComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipmentForceHideAllHairComponents")); }
    BrzCampoPonteiro bEquipmentHatHideItemEyeHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipmentHatHideItemEyeHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemFacialHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipmentHatHideItemFacialHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemHeadHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquipmentHatHideItemHeadHair")); }
    BrzCampoPonteiro bEquippedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bEquippedItem")); }
    BrzCampoPonteiro bForceAllowCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceAllowCustomItemDescription")); }
    BrzCampoPonteiro bForceAllowDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceAllowDragging")); }
    BrzCampoPonteiro bForceAllowGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceAllowGrinding")); }
    BrzCampoPonteiro bForceAllowRemovalWhenDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceAllowRemovalWhenDead")); }
    BrzCampoPonteiro bForceAllowSkinColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceAllowSkinColorization")); }
    BrzCampoPonteiro bForceDediAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceDediAttachments")); }
    BrzCampoPonteiro bForceDisplayInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceDisplayInInventory")); }
    BrzCampoPonteiro bForceDropDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceDropDestruction")); }
    BrzCampoPonteiro bForceHideAllDefaultPawnAttachmentsWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceHideAllDefaultPawnAttachmentsWhenEquipped")); }
    BrzCampoPonteiro bForceNoLearnedEngramRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceNoLearnedEngramRequirement")); }
    BrzCampoPonteiro bForceNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceNotificationItemCombatMode")); }
    BrzCampoPonteiro bForcePreventConsumableWhileHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForcePreventConsumableWhileHandcuffed")); }
    BrzCampoPonteiro bForcePreventGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForcePreventGrinding")); }
    BrzCampoPonteiro bForceQualityColorOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceQualityColorOverlay")); }
    BrzCampoPonteiro bForceRequiresExplicitOwnerChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceRequiresExplicitOwnerChecks")); }
    BrzCampoPonteiro bForceUseItemAddCharacterStatsOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bForceUseItemAddCharacterStatsOnDinos")); }
    BrzCampoPonteiro bFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bFromSteamInventory")); }
    BrzCampoPonteiro bGiveItemWhenUsedCopyItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bGiveItemWhenUsedCopyItemStats")); }
    BrzCampoPonteiro bHideCustomDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bHideCustomDescription")); }
    BrzCampoPonteiro bHideFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bHideFromInventoryDisplay")); }
    BrzCampoPonteiro bHideFromRemoteInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bHideFromRemoteInventoryDisplay")); }
    BrzCampoPonteiro bHideMoreOptionsIfNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bHideMoreOptionsIfNonRemovable")); }
    BrzCampoPonteiro bIgnoreDrawingItemButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIgnoreDrawingItemButtonIcon")); }
    BrzCampoPonteiro bIgnoreMinimumUseIntervalForDinoAutoEatingFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIgnoreMinimumUseIntervalForDinoAutoEatingFood")); }
    BrzCampoPonteiro bIsAbstractItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsAbstractItem")); }
    BrzCampoPonteiro bIsBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsBlueprint")); }
    BrzCampoPonteiro bIsCharacterSkinOrCosmeticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsCharacterSkinOrCosmetic")); }
    BrzCampoPonteiro bIsClubArkRewardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsClubArkReward")); }
    BrzCampoPonteiro bIsClubArkTradeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsClubArkTrade")); }
    BrzCampoPonteiro bIsCookingIngredientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsCookingIngredient")); }
    BrzCampoPonteiro bIsCustomRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsCustomRecipe")); }
    BrzCampoPonteiro bIsDescriptionOnlyItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsDescriptionOnlyItem")); }
    BrzCampoPonteiro bIsDinoAutoHealingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsDinoAutoHealingItem")); }
    BrzCampoPonteiro bIsEggField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsEgg")); }
    BrzCampoPonteiro bIsEmbryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsEmbryo")); }
    BrzCampoPonteiro bIsEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsEngram")); }
    BrzCampoPonteiro bIsFoodRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsFoodRecipe")); }
    BrzCampoPonteiro bIsFromAllClustersInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsFromAllClustersInventory")); }
    BrzCampoPonteiro bIsGhostItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsGhostItemSkin")); }
    BrzCampoPonteiro bIsInitialItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsInitialItem")); }
    BrzCampoPonteiro bIsItemAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsItemAccessory")); }
    BrzCampoPonteiro bIsItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsItemSkin")); }
    BrzCampoPonteiro bIsMisssionItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsMisssionItem")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bIsRepairing")); }
    BrzCampoPonteiro bItemIsUsableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemIsUsable")); }
    BrzCampoPonteiro bItemSkinAllowEquippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinAllowEquipping")); }
    BrzCampoPonteiro bItemSkinIgnoreSkinIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinIgnoreSkinIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinKeepOriginalIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinKeepOriginalItemName")); }
    BrzCampoPonteiro bItemSkinKeepOriginalWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinKeepOriginalWeaponTemplate")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinReceiveOwnerEquippedBlueprintEvents")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bItemSkinReceiveOwnerEquippedBlueprintTick")); }
    BrzCampoPonteiro bMergeCustomDataFromCraftingResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bMergeCustomDataFromCraftingResources")); }
    BrzCampoPonteiro bMuteExtraEquipmentSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bMuteExtraEquipmentSounds")); }
    BrzCampoPonteiro bNameForceNoStatQualityRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bNameForceNoStatQualityRank")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_HotbarSkill.bNetInfoFromClient"); }
    BrzCampoPonteiro bNewWeaponAutoFillClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bNewWeaponAutoFillClipAmmo")); }
    BrzCampoPonteiro bNonBlockingShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bNonBlockingShield")); }
    BrzCampoPonteiro bOnlyCanUseInFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bOnlyCanUseInFalling")); }
    BrzCampoPonteiro bOnlyCanUseInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bOnlyCanUseInWater")); }
    BrzCampoPonteiro bOnlyEquipWhenUnconsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bOnlyEquipWhenUnconscious")); }
    BrzCampoPonteiro bOverrideExactClassCraftingRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bOverrideExactClassCraftingRequirement")); }
    BrzCampoPonteiro bOverrideRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bOverrideRepairingRequirements")); }
    BrzCampoPonteiro bPickupEggAlertsDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPickupEggAlertsDinos")); }
    BrzCampoPonteiro bPickupEggForceAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPickupEggForceAggro")); }
    BrzCampoPonteiro bPreventArmorDurabiltyConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventArmorDurabiltyConsumption")); }
    BrzCampoPonteiro bPreventCheatGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventCheatGive")); }
    BrzCampoPonteiro bPreventColdStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventColdStorage")); }
    BrzCampoPonteiro bPreventConsumeItemOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventConsumeItemOnDrag")); }
    BrzCampoPonteiro bPreventCraftingResourceAtFullDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventCraftingResourceAtFullDurability")); }
    BrzCampoPonteiro bPreventDepositDroppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventDepositDropping")); }
    BrzCampoPonteiro bPreventDinoAutoConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventDinoAutoConsume")); }
    BrzCampoPonteiro bPreventDragOntoOtherItemIfSameCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventDragOntoOtherItemIfSameCustomData")); }
    BrzCampoPonteiro bPreventEquipOnTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventEquipOnTaxidermyBase")); }
    BrzCampoPonteiro bPreventItemBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventItemBlueprint")); }
    BrzCampoPonteiro bPreventItemSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventItemSkins")); }
    BrzCampoPonteiro bPreventModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventModifyArmorValue")); }
    BrzCampoPonteiro bPreventNativeItemBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventNativeItemBroken")); }
    BrzCampoPonteiro bPreventNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventNotificationItemCombatMode")); }
    BrzCampoPonteiro bPreventOnFullEquippedSuitHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventOnFullEquippedSuitHUD")); }
    BrzCampoPonteiro bPreventOnSkinTabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventOnSkinTab")); }
    BrzCampoPonteiro bPreventRegularDroppingButStillDropInBulkAndDestructionCachesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches")); }
    BrzCampoPonteiro bPreventRemovingClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventRemovingClipAmmo")); }
    BrzCampoPonteiro bPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUpload")); }
    BrzCampoPonteiro bPreventUploadingWeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUploadingWeaponClipAmmo")); }
    BrzCampoPonteiro bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned")); }
    BrzCampoPonteiro bPreventUseAtTameLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUseAtTameLimit")); }
    BrzCampoPonteiro bPreventUseByDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUseByDinos")); }
    BrzCampoPonteiro bPreventUseByHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUseByHumans")); }
    BrzCampoPonteiro bPreventUseWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bPreventUseWhenSleeping")); }
    BrzCampoPonteiro bRefreshOnDyeUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bRefreshOnDyeUsed")); }
    BrzCampoPonteiro bRequiresBobsTallTalesToCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bRequiresBobsTallTalesToCraft")); }
    BrzCampoPonteiro bResourcePreventGivingFromDemolitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bResourcePreventGivingFromDemolition")); }
    BrzCampoPonteiro bRestoreDurabilityWhenColorizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bRestoreDurabilityWhenColorized")); }
    BrzCampoPonteiro bSaddleUseRegularDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSaddleUseRegularDurability")); }
    BrzCampoPonteiro bScaleOverridenRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bScaleOverridenRepairingRequirements")); }
    BrzCampoPonteiro bSetCraftingActorToSpawnTeamFromCrafterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSetCraftingActorToSpawnTeamFromCrafter")); }
    BrzCampoPonteiro bShowItemRatingAsPercentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bShowItemRatingAsPercent")); }
    BrzCampoPonteiro bShowTooltipColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bShowTooltipColors")); }
    BrzCampoPonteiro bSkinAddWeightToSkinnedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSkinAddWeightToSkinnedItem")); }
    BrzCampoPonteiro bSkinDisableWhenSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSkinDisableWhenSubmerged")); }
    BrzCampoPonteiro bSkinReequipOnClientBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSkinReequipOnClientBeginPlay")); }
    BrzCampoPonteiro bSkipEquipAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSkipEquipAnimation")); }
    BrzCampoPonteiro bSpawnActorOnWaterOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSpawnActorOnWaterOnly")); }
    BrzCampoPonteiro bSupportDragOntoOtherItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bSupportDragOntoOtherItem")); }
    BrzCampoPonteiro bTekItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bTekItem")); }
    BrzCampoPonteiro bThrowOnHotKeyUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bThrowOnHotKeyUse")); }
    BrzCampoPonteiro bThrowUsesSecondaryActionDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bThrowUsesSecondaryActionDrop")); }
    BrzCampoPonteiro bUnappliedItemSkinIgnoreItemAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUnappliedItemSkinIgnoreItemAttachments")); }
    BrzCampoPonteiro bUnlockAsPersistentProfileItemOnCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUnlockAsPersistentProfileItemOnCraft")); }
    BrzCampoPonteiro bUsableWithTekGrenadeLauncherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUsableWithTekGrenadeLauncher")); }
    BrzCampoPonteiro bUseBPAddedAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPAddedAttachments")); }
    BrzCampoPonteiro bUseBPAddedToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPAddedToInventory")); }
    BrzCampoPonteiro bUseBPAllowAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPAllowAddToInventory")); }
    BrzCampoPonteiro bUseBPCanPlayerUseItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCanPlayerUseItem")); }
    BrzCampoPonteiro bUseBPConsumeProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPConsumeProjectileImpact")); }
    BrzCampoPonteiro bUseBPCraftedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCrafted")); }
    BrzCampoPonteiro bUseBPCustomAutoDecreaseDurabilityPerIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomAutoDecreaseDurabilityPerInterval")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomDurabilityText")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomDurabilityTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomInventoryWidgetTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextForBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPCustomInventoryWidgetTextForBlueprint")); }
    BrzCampoPonteiro bUseBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPDrawItemIcon")); }
    BrzCampoPonteiro bUseBPEquippedItemOnXPEarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPEquippedItemOnXPEarning")); }
    BrzCampoPonteiro bUseBPForceAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPForceAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bUseBPGetItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemDescription")); }
    BrzCampoPonteiro bUseBPGetItemDurabilityPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemDurabilityPercentage")); }
    BrzCampoPonteiro bUseBPGetItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemIcon")); }
    BrzCampoPonteiro bUseBPGetItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemName")); }
    BrzCampoPonteiro bUseBPGetItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemNetInfo")); }
    BrzCampoPonteiro bUseBPGetItemStatStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetItemStatString")); }
    BrzCampoPonteiro bUseBPGetMaxAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPGetMaxAmmo")); }
    BrzCampoPonteiro bUseBPInitFromItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPInitFromItemNetInfo")); }
    BrzCampoPonteiro bUseBPInitItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPInitItemColors")); }
    BrzCampoPonteiro bUseBPInitializeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPInitializeItem")); }
    BrzCampoPonteiro bUseBPIsValidForCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPIsValidForCrafting")); }
    BrzCampoPonteiro bUseBPNotifyDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPNotifyDropped")); }
    BrzCampoPonteiro bUseBPNotifyItemRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPNotifyItemRefreshed")); }
    BrzCampoPonteiro bUseBPOnCropPhaseIncreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOnCropPhaseIncrease")); }
    BrzCampoPonteiro bUseBPOnItemConsumedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOnItemConsumed")); }
    BrzCampoPonteiro bUseBPOnUpdatedItemContextMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOnUpdatedItemContextMenu")); }
    BrzCampoPonteiro bUseBPOverrideAnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideAnimMontage")); }
    BrzCampoPonteiro bUseBPOverrideCraftingConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideCraftingConsumption")); }
    BrzCampoPonteiro bUseBPOverrideDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideDeathAnim")); }
    BrzCampoPonteiro bUseBPOverrideHoldItemSlotActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideHoldItemSlotAction")); }
    BrzCampoPonteiro bUseBPOverrideInheritedStatWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideInheritedStatWeight")); }
    BrzCampoPonteiro bUseBPOverrideProjectileTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideProjectileType")); }
    BrzCampoPonteiro bUseBPOverrideRemainingCooldownTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideRemainingCooldownTime")); }
    BrzCampoPonteiro bUseBPOverrideSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPOverrideSound")); }
    BrzCampoPonteiro bUseBPPostAddBuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPPostAddBuffToGiveOwnerCharacter")); }
    BrzCampoPonteiro bUseBPPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPPreventUpload")); }
    BrzCampoPonteiro bUseBPPreventUseOntoItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPPreventUseOntoItem")); }
    BrzCampoPonteiro bUseBPPrimalDinoCharacterConsumedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPPrimalDinoCharacterConsumedItem")); }
    BrzCampoPonteiro bUseBPRemovedFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPRemovedFromInventory")); }
    BrzCampoPonteiro bUseBPSetupHUDIconMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBPSetupHUDIconMaterial")); }
    BrzCampoPonteiro bUseBlueprintEquippedNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseBlueprintEquippedNotifications")); }
    BrzCampoPonteiro bUseEquippedItemBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseEquippedItemBlueprintTick")); }
    BrzCampoPonteiro bUseEquippedItemNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseEquippedItemNativeTick")); }
    BrzCampoPonteiro bUseInWaterRestoreDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseInWaterRestoreDurability")); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_HotbarSkill.bUseItemColor" }; }
    BrzCampoPonteiro bUseItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseItemColors")); }
    BrzCampoPonteiro bUseItemDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseItemDurability")); }
    BrzCampoPonteiro bUseItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseItemStats")); }
    BrzCampoPonteiro bUseMultiSaddleMeshOverrideMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseMultiSaddleMeshOverrideMap")); }
    BrzCampoPonteiro bUseOnItemSetIndexAsDestinationItemCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseOnItemSetIndexAsDestinationItemCustomData")); }
    BrzCampoPonteiro bUseOnItemWeaponRemoveClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseOnItemWeaponRemoveClipAmmo")); }
    BrzCampoPonteiro bUseOntoItemRequiresImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseOntoItemRequiresImmobilization")); }
    BrzCampoPonteiro bUseScaleStatEffectivenessByDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseScaleStatEffectivenessByDurability")); }
    BrzCampoPonteiro bUseSkinDroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSkinDroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro bUseSkinnedBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSkinnedBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseSlottedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSlottedTick")); }
    BrzCampoPonteiro bUseSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSpawnActor")); }
    BrzCampoPonteiro bUseSpawnActorRelativeLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSpawnActorRelativeLoc")); }
    BrzCampoPonteiro bUseSpawnActorTakeOwnerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSpawnActorTakeOwnerRotation")); }
    BrzCampoPonteiro bUseSpawnActorWhenRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUseSpawnActorWhenRiding")); }
    BrzCampoPonteiro bUsesCreationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUsesCreationTime")); }
    BrzCampoPonteiro bUsingRequiresStandingOnSolidGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bUsingRequiresStandingOnSolidGround")); }
    BrzCampoPonteiro bValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_HotbarSkill.bValidCraftingResource")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_HOTBARSKILL_H
