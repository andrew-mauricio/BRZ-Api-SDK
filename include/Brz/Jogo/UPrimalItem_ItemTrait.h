// ==========================================================================
//  UPrimalItem_ItemTrait — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_ITEMTRAIT_H
#define BRZ_SDK_JOGO_UPRIMALITEM_ITEMTRAIT_H

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


struct UPrimalItem_ItemTrait
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_ItemTrait"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_ItemTrait.BPSupportUseOntoItem_Implementation(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSupportUseOntoItem_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem_ItemTrait.BPSupportUseOntoItem_Implementation(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_ItemTrait.GetItemQualityColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemQualityColor() const
    {
        return NativeCall<void*>(this, "UPrimalItem_ItemTrait.GetItemQualityColor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_ItemTrait.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnVersionChange(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UPrimalItem_ItemTrait.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_ItemTrait.Used(UPrimalItem*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Used(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalItem_ItemTrait.Used(UPrimalItem*,int)", a0, a1);
    }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_ItemTrait.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.AllowClassesToBeUsedAsParentSkin"); }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters" }; }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_ItemTrait.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_ItemTrait.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_ItemTrait.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_ItemTrait.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_ItemTrait.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_ItemTrait.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_ItemTrait.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_ItemTrait.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_ItemTrait.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_ItemTrait.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_ItemTrait.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.DurabilityStringShort"); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_ItemTrait.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_ItemTrait.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_ItemTrait.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_ItemTrait.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_ItemTrait.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_ItemTrait.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_ItemTrait.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_ItemTrait.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.MyItemTrait")); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_ItemTrait.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_ItemTrait.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_ItemTrait.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_ItemTrait.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_ItemTrait.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_ItemTrait.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.RandomColorSet")); }
    BrzCampoPonteiro RequiredInventoryToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.RequiredInventoryToApply")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_ItemTrait.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_ItemTrait.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_ItemTrait.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_ItemTrait.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_ItemTrait.WidgetCustomBrokenOverlayStyleBrush")); }
    BitFieldValue<bool, unsigned __int32> bAllowCraftingWithStarterAmmo()
    { return { (void*)this, "bAllowCraftingWithStarterAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomColors()
    { return { (void*)this, "bAllowCustomColors" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDefaultCharacterAttachment()
    { return { (void*)this, "bAllowDefaultCharacterAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEquppingItem()
    { return { (void*)this, "bAllowEquppingItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInvalidItemVersion()
    { return { (void*)this, "bAllowInvalidItemVersion" }; }
    BitFieldValue<bool, unsigned __int32> bAllowInventoryItem()
    { return { (void*)this, "bAllowInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOverrideItemAutoDecreaseDurability()
    { return { (void*)this, "bAllowOverrideItemAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteUseInInventory()
    { return { (void*)this, "bAllowRemoteUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemovalFromInventory()
    { return { (void*)this, "bAllowRemovalFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoveFromSteamInventory()
    { return { (void*)this, "bAllowRemoveFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRepair()
    { return { (void*)this, "bAllowRepair" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseIgnoreMovementMode()
    { return { (void*)this, "bAllowUseIgnoreMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseInInventory()
    { return { (void*)this, "bAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseWhileRiding()
    { return { (void*)this, "bAllowUseWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWakingTameZeroAffinityEffectivenessMulti()
    { return { (void*)this, "bAllowWakingTameZeroAffinityEffectivenessMulti" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysLearnedEngram()
    { return { (void*)this, "bAlwaysLearnedEngram" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysTriggerTributeDownloaded()
    { return { (void*)this, "bAlwaysTriggerTributeDownloaded" }; }
    BitFieldValue<bool, unsigned __int32> bAppendPrimaryColorToName()
    { return { (void*)this, "bAppendPrimaryColorToName" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCraftBlueprint()
    { return { (void*)this, "bAutoCraftBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDecreaseDurabilityOverTime()
    { return { (void*)this, "bAutoDecreaseDurabilityOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bAutoTameSpawnedActor()
    { return { (void*)this, "bAutoTameSpawnedActor" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteAddToInventory()
    { return { (void*)this, "bBPAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowRemoteRemoveFromInventory()
    { return { (void*)this, "bBPAllowRemoteRemoveFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPCanUse()
    { return { (void*)this, "bBPCanUse" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryNotifyCraftingFinished()
    { return { (void*)this, "bBPInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeArkTributeItem()
    { return { (void*)this, "bCanBeArkTributeItem" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeBlueprint()
    { return { (void*)this, "bCanBeBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bCanBuildStructures()
    { return { (void*)this, "bCanBuildStructures" }; }
    BitFieldValue<bool, unsigned __int32> bCanSlot()
    { return { (void*)this, "bCanSlot" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseSwimming()
    { return { (void*)this, "bCanUseSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bCensoredItemSkin()
    { return { (void*)this, "bCensoredItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPAllowCrafting()
    { return { (void*)this, "bCheckBPAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bClearSkinOnInventoryRemoval()
    { return { (void*)this, "bClearSkinOnInventoryRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bConfirmBeforeUsing()
    { return { (void*)this, "bConfirmBeforeUsing" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeItemOnUse()
    { return { (void*)this, "bConsumeItemOnUse" }; }
    BitFieldValue<bool, unsigned __int32> bCopyCustomDescriptionIntoSpoiledItem()
    { return { (void*)this, "bCopyCustomDescriptionIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCopyDurabilityIntoSpoiledItem()
    { return { (void*)this, "bCopyDurabilityIntoSpoiledItem" }; }
    BitFieldValue<bool, unsigned __int32> bCopyItemDurabilityFromCraftingResource()
    { return { (void*)this, "bCopyItemDurabilityFromCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bCostumeHideSaddleMesh()
    { return { (void*)this, "bCostumeHideSaddleMesh" }; }
    BitFieldValue<bool, unsigned __int32> bCraftDontActuallyGiveItem()
    { return { (void*)this, "bCraftDontActuallyGiveItem" }; }
    BitFieldValue<bool, unsigned __int32> bCraftedRequestCustomItemDescription()
    { return { (void*)this, "bCraftedRequestCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenIcon()
    { return { (void*)this, "bCustomBrokenIcon" }; }
    BitFieldValue<bool, unsigned __int32> bCustomBrokenOverlayIcon()
    { return { (void*)this, "bCustomBrokenOverlayIcon" }; }
    BitFieldValue<bool, unsigned __int32> bDeferWeaponBeginPlayToAssociatedItemSetTime()
    { return { (void*)this, "bDeferWeaponBeginPlayToAssociatedItemSetTime" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateBlueprint()
    { return { (void*)this, "bDeprecateBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bDeprecateItem()
    { return { (void*)this, "bDeprecateItem" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyBrokenItem()
    { return { (void*)this, "bDestroyBrokenItem" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAutoDecreaseDurabilityOverTime()
    { return { (void*)this, "bDisableAutoDecreaseDurabilityOverTime" }; }
    BitFieldValue<bool, unsigned __int32> bDisableItemUITooltip()
    { return { (void*)this, "bDisableItemUITooltip" }; }
    BitFieldValue<bool, unsigned __int32> bDivideTimeToCraftByGlobalCropGrowthSpeed()
    { return { (void*)this, "bDivideTimeToCraftByGlobalCropGrowthSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bDoApplyOriginalColorsWhenUnskinned()
    { return { (void*)this, "bDoApplyOriginalColorsWhenUnskinned" }; }
    BitFieldValue<bool, unsigned __int32> bDontCountItemForUploadRestrictions()
    { return { (void*)this, "bDontCountItemForUploadRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bDontRemoveOnEquip()
    { return { (void*)this, "bDontRemoveOnEquip" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetAttachmentIfNotUpdatingItem()
    { return { (void*)this, "bDontResetAttachmentIfNotUpdatingItem" }; }
    BitFieldValue<bool, unsigned __int32> bDontScaleSnapshot()
    { return { (void*)this, "bDontScaleSnapshot" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseDurabilityDamageOverlay()
    { return { (void*)this, "bDontUseDurabilityDamageOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bDragClearDyedItem()
    { return { (void*)this, "bDragClearDyedItem" }; }
    BitFieldValue<bool, unsigned __int32> bDroppedItemAllowDinoPickup()
    { return { (void*)this, "bDroppedItemAllowDinoPickup" }; }
    BitFieldValue<bool, unsigned __int32> bDurabilityRequirementIgnoredInWater()
    { return { (void*)this, "bDurabilityRequirementIgnoredInWater" }; }
    BitFieldValue<bool, unsigned __int32> bEggSpoilsWhenFertilized()
    { return { (void*)this, "bEggSpoilsWhenFertilized" }; }
    BitFieldValue<bool, unsigned __int32> bEquipAddTekExtendedInfo()
    { return { (void*)this, "bEquipAddTekExtendedInfo" }; }
    BitFieldValue<bool, unsigned __int32> bEquipPreventsCharacterSkinsCosmetics()
    { return { (void*)this, "bEquipPreventsCharacterSkinsCosmetics" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Aberration()
    { return { (void*)this, "bEquipRequiresDLC_Aberration" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Extinction()
    { return { (void*)this, "bEquipRequiresDLC_Extinction" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_Genesis()
    { return { (void*)this, "bEquipRequiresDLC_Genesis" }; }
    BitFieldValue<bool, unsigned __int32> bEquipRequiresDLC_ScorchedEarth()
    { return { (void*)this, "bEquipRequiresDLC_ScorchedEarth" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceHairHiding()
    { return { (void*)this, "bEquipmentForceHairHiding" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceHideAllHairComponents()
    { return { (void*)this, "bEquipmentForceHideAllHairComponents" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemEyeHair()
    { return { (void*)this, "bEquipmentHatHideItemEyeHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemFacialHair()
    { return { (void*)this, "bEquipmentHatHideItemFacialHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentHatHideItemHeadHair()
    { return { (void*)this, "bEquipmentHatHideItemHeadHair" }; }
    BitFieldValue<bool, unsigned __int32> bEquippedItem()
    { return { (void*)this, "bEquippedItem" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowCustomItemDescription()
    { return { (void*)this, "bForceAllowCustomItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowDragging()
    { return { (void*)this, "bForceAllowDragging" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowGrinding()
    { return { (void*)this, "bForceAllowGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowRemovalWhenDead()
    { return { (void*)this, "bForceAllowRemovalWhenDead" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowSkinColorization()
    { return { (void*)this, "bForceAllowSkinColorization" }; }
    BitFieldValue<bool, unsigned __int32> bForceDediAttachments()
    { return { (void*)this, "bForceDediAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayInInventory()
    { return { (void*)this, "bForceDisplayInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bForceDropDestruction()
    { return { (void*)this, "bForceDropDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideAllDefaultPawnAttachmentsWhenEquipped()
    { return { (void*)this, "bForceHideAllDefaultPawnAttachmentsWhenEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoLearnedEngramRequirement()
    { return { (void*)this, "bForceNoLearnedEngramRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bForceNotificationItemCombatMode()
    { return { (void*)this, "bForceNotificationItemCombatMode" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventConsumableWhileHandcuffed()
    { return { (void*)this, "bForcePreventConsumableWhileHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventGrinding()
    { return { (void*)this, "bForcePreventGrinding" }; }
    BitFieldValue<bool, unsigned __int32> bForceQualityColorOverlay()
    { return { (void*)this, "bForceQualityColorOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bForceRequiresExplicitOwnerChecks()
    { return { (void*)this, "bForceRequiresExplicitOwnerChecks" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseItemAddCharacterStatsOnDinos()
    { return { (void*)this, "bForceUseItemAddCharacterStatsOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bFromSteamInventory()
    { return { (void*)this, "bFromSteamInventory" }; }
    BitFieldValue<bool, unsigned __int32> bGiveItemWhenUsedCopyItemStats()
    { return { (void*)this, "bGiveItemWhenUsedCopyItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bHideCustomDescription()
    { return { (void*)this, "bHideCustomDescription" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromInventoryDisplay()
    { return { (void*)this, "bHideFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromRemoteInventoryDisplay()
    { return { (void*)this, "bHideFromRemoteInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bHideMoreOptionsIfNonRemovable()
    { return { (void*)this, "bHideMoreOptionsIfNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDrawingItemButtonIcon()
    { return { (void*)this, "bIgnoreDrawingItemButtonIcon" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMinimumUseIntervalForDinoAutoEatingFood()
    { return { (void*)this, "bIgnoreMinimumUseIntervalForDinoAutoEatingFood" }; }
    BitFieldValue<bool, unsigned __int32> bIsAbstractItem()
    { return { (void*)this, "bIsAbstractItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlueprint()
    { return { (void*)this, "bIsBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bIsCharacterSkinOrCosmetic()
    { return { (void*)this, "bIsCharacterSkinOrCosmetic" }; }
    BitFieldValue<bool, unsigned __int32> bIsClubArkReward()
    { return { (void*)this, "bIsClubArkReward" }; }
    BitFieldValue<bool, unsigned __int32> bIsClubArkTrade()
    { return { (void*)this, "bIsClubArkTrade" }; }
    BitFieldValue<bool, unsigned __int32> bIsCookingIngredient()
    { return { (void*)this, "bIsCookingIngredient" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustomRecipe()
    { return { (void*)this, "bIsCustomRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsDescriptionOnlyItem()
    { return { (void*)this, "bIsDescriptionOnlyItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsDinoAutoHealingItem()
    { return { (void*)this, "bIsDinoAutoHealingItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsEgg()
    { return { (void*)this, "bIsEgg" }; }
    BitFieldValue<bool, unsigned __int32> bIsEmbryo()
    { return { (void*)this, "bIsEmbryo" }; }
    BitFieldValue<bool, unsigned __int32> bIsEngram()
    { return { (void*)this, "bIsEngram" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoodRecipe()
    { return { (void*)this, "bIsFoodRecipe" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromAllClustersInventory()
    { return { (void*)this, "bIsFromAllClustersInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsGhostItemSkin()
    { return { (void*)this, "bIsGhostItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bIsInitialItem()
    { return { (void*)this, "bIsInitialItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsItemAccessory()
    { return { (void*)this, "bIsItemAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bIsItemSkin()
    { return { (void*)this, "bIsItemSkin" }; }
    BitFieldValue<bool, unsigned __int32> bIsMisssionItem()
    { return { (void*)this, "bIsMisssionItem" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bItemIsUsable()
    { return { (void*)this, "bItemIsUsable" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinAllowEquipping()
    { return { (void*)this, "bItemSkinAllowEquipping" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinIgnoreSkinIcon()
    { return { (void*)this, "bItemSkinIgnoreSkinIcon" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalIcon()
    { return { (void*)this, "bItemSkinKeepOriginalIcon" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalItemName()
    { return { (void*)this, "bItemSkinKeepOriginalItemName" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinKeepOriginalWeaponTemplate()
    { return { (void*)this, "bItemSkinKeepOriginalWeaponTemplate" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintEvents()
    { return { (void*)this, "bItemSkinReceiveOwnerEquippedBlueprintEvents" }; }
    BitFieldValue<bool, unsigned __int32> bItemSkinReceiveOwnerEquippedBlueprintTick()
    { return { (void*)this, "bItemSkinReceiveOwnerEquippedBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bMergeCustomDataFromCraftingResources()
    { return { (void*)this, "bMergeCustomDataFromCraftingResources" }; }
    BitFieldValue<bool, unsigned __int32> bMuteExtraEquipmentSounds()
    { return { (void*)this, "bMuteExtraEquipmentSounds" }; }
    BitFieldValue<bool, unsigned __int32> bNameForceNoStatQualityRank()
    { return { (void*)this, "bNameForceNoStatQualityRank" }; }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_ItemTrait.bNetInfoFromClient"); }
    BitFieldValue<bool, unsigned __int32> bNewWeaponAutoFillClipAmmo()
    { return { (void*)this, "bNewWeaponAutoFillClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingShield()
    { return { (void*)this, "bNonBlockingShield" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInFalling()
    { return { (void*)this, "bOnlyCanUseInFalling" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyCanUseInWater()
    { return { (void*)this, "bOnlyCanUseInWater" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyEquipWhenUnconscious()
    { return { (void*)this, "bOnlyEquipWhenUnconscious" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideExactClassCraftingRequirement()
    { return { (void*)this, "bOverrideExactClassCraftingRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRepairingRequirements()
    { return { (void*)this, "bOverrideRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggAlertsDinos()
    { return { (void*)this, "bPickupEggAlertsDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPickupEggForceAggro()
    { return { (void*)this, "bPickupEggForceAggro" }; }
    BitFieldValue<bool, unsigned __int32> bPreventArmorDurabiltyConsumption()
    { return { (void*)this, "bPreventArmorDurabiltyConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCheatGive()
    { return { (void*)this, "bPreventCheatGive" }; }
    BitFieldValue<bool, unsigned __int32> bPreventConsumeItemOnDrag()
    { return { (void*)this, "bPreventConsumeItemOnDrag" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceAtFullDurability()
    { return { (void*)this, "bPreventCraftingResourceAtFullDurability" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDepositDropping()
    { return { (void*)this, "bPreventDepositDropping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoAutoConsume()
    { return { (void*)this, "bPreventDinoAutoConsume" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDragOntoOtherItemIfSameCustomData()
    { return { (void*)this, "bPreventDragOntoOtherItemIfSameCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEquipOnTaxidermyBase()
    { return { (void*)this, "bPreventEquipOnTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemBlueprint()
    { return { (void*)this, "bPreventItemBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemSkins()
    { return { (void*)this, "bPreventItemSkins" }; }
    BitFieldValue<bool, unsigned __int32> bPreventModifyArmorValue()
    { return { (void*)this, "bPreventModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNativeItemBroken()
    { return { (void*)this, "bPreventNativeItemBroken" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNotificationItemCombatMode()
    { return { (void*)this, "bPreventNotificationItemCombatMode" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnFullEquippedSuitHUD()
    { return { (void*)this, "bPreventOnFullEquippedSuitHUD" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSkinTab()
    { return { (void*)this, "bPreventOnSkinTab" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularDroppingButStillDropInBulkAndDestructionCaches()
    { return { (void*)this, "bPreventRegularDroppingButStillDropInBulkAndDestructionCaches" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRemovingClipAmmo()
    { return { (void*)this, "bPreventRemovingClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUpload()
    { return { (void*)this, "bPreventUpload" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploadingWeaponClipAmmo()
    { return { (void*)this, "bPreventUploadingWeaponClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned()
    { return { (void*)this, "bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseAtTameLimit()
    { return { (void*)this, "bPreventUseAtTameLimit" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByDinos()
    { return { (void*)this, "bPreventUseByDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseByHumans()
    { return { (void*)this, "bPreventUseByHumans" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUseWhenSleeping()
    { return { (void*)this, "bPreventUseWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshOnDyeUsed()
    { return { (void*)this, "bRefreshOnDyeUsed" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresBobsTallTalesToCraft()
    { return { (void*)this, "bRequiresBobsTallTalesToCraft" }; }
    BitFieldValue<bool, unsigned __int32> bResourcePreventGivingFromDemolition()
    { return { (void*)this, "bResourcePreventGivingFromDemolition" }; }
    BitFieldValue<bool, unsigned __int32> bRestoreDurabilityWhenColorized()
    { return { (void*)this, "bRestoreDurabilityWhenColorized" }; }
    BitFieldValue<bool, unsigned __int32> bSaddleUseRegularDurability()
    { return { (void*)this, "bSaddleUseRegularDurability" }; }
    BitFieldValue<bool, unsigned __int32> bScaleOverridenRepairingRequirements()
    { return { (void*)this, "bScaleOverridenRepairingRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bSetCraftingActorToSpawnTeamFromCrafter()
    { return { (void*)this, "bSetCraftingActorToSpawnTeamFromCrafter" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemRatingAsPercent()
    { return { (void*)this, "bShowItemRatingAsPercent" }; }
    BitFieldValue<bool, unsigned __int32> bShowTooltipColors()
    { return { (void*)this, "bShowTooltipColors" }; }
    BitFieldValue<bool, unsigned __int32> bSkinAddWeightToSkinnedItem()
    { return { (void*)this, "bSkinAddWeightToSkinnedItem" }; }
    BitFieldValue<bool, unsigned __int32> bSkinDisableWhenSubmerged()
    { return { (void*)this, "bSkinDisableWhenSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bSkinReequipOnClientBeginPlay()
    { return { (void*)this, "bSkinReequipOnClientBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bSkipEquipAnimation()
    { return { (void*)this, "bSkipEquipAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnWaterOnly()
    { return { (void*)this, "bSpawnActorOnWaterOnly" }; }
    BitFieldValue<bool, unsigned __int32> bSupportDragOntoOtherItem()
    { return { (void*)this, "bSupportDragOntoOtherItem" }; }
    BitFieldValue<bool, unsigned __int32> bTekItem()
    { return { (void*)this, "bTekItem" }; }
    BitFieldValue<bool, unsigned __int32> bThrowOnHotKeyUse()
    { return { (void*)this, "bThrowOnHotKeyUse" }; }
    BitFieldValue<bool, unsigned __int32> bThrowUsesSecondaryActionDrop()
    { return { (void*)this, "bThrowUsesSecondaryActionDrop" }; }
    BitFieldValue<bool, unsigned __int32> bUnappliedItemSkinIgnoreItemAttachments()
    { return { (void*)this, "bUnappliedItemSkinIgnoreItemAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUnlockAsPersistentProfileItemOnCraft()
    { return { (void*)this, "bUnlockAsPersistentProfileItemOnCraft" }; }
    BitFieldValue<bool, unsigned __int32> bUsableWithTekGrenadeLauncher()
    { return { (void*)this, "bUsableWithTekGrenadeLauncher" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedAttachments()
    { return { (void*)this, "bUseBPAddedAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAddedToInventory()
    { return { (void*)this, "bUseBPAddedToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddToInventory()
    { return { (void*)this, "bUseBPAllowAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanPlayerUseItem()
    { return { (void*)this, "bUseBPCanPlayerUseItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPConsumeProjectileImpact()
    { return { (void*)this, "bUseBPConsumeProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCrafted()
    { return { (void*)this, "bUseBPCrafted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomAutoDecreaseDurabilityPerInterval()
    { return { (void*)this, "bUseBPCustomAutoDecreaseDurabilityPerInterval" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityText()
    { return { (void*)this, "bUseBPCustomDurabilityText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomDurabilityTextColor()
    { return { (void*)this, "bUseBPCustomDurabilityTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetText()
    { return { (void*)this, "bUseBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextColor()
    { return { (void*)this, "bUseBPCustomInventoryWidgetTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomInventoryWidgetTextForBlueprint()
    { return { (void*)this, "bUseBPCustomInventoryWidgetTextForBlueprint" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawItemIcon()
    { return { (void*)this, "bUseBPDrawItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPEquippedItemOnXPEarning()
    { return { (void*)this, "bUseBPEquippedItemOnXPEarning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowRemoteAddToInventory()
    { return { (void*)this, "bUseBPForceAllowRemoteAddToInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDescription()
    { return { (void*)this, "bUseBPGetItemDescription" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemDurabilityPercentage()
    { return { (void*)this, "bUseBPGetItemDurabilityPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemIcon()
    { return { (void*)this, "bUseBPGetItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemName()
    { return { (void*)this, "bUseBPGetItemName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemNetInfo()
    { return { (void*)this, "bUseBPGetItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetItemStatString()
    { return { (void*)this, "bUseBPGetItemStatString" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMaxAmmo()
    { return { (void*)this, "bUseBPGetMaxAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitFromItemNetInfo()
    { return { (void*)this, "bUseBPInitFromItemNetInfo" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitItemColors()
    { return { (void*)this, "bUseBPInitItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeItem()
    { return { (void*)this, "bUseBPInitializeItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidForCrafting()
    { return { (void*)this, "bUseBPIsValidForCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyDropped()
    { return { (void*)this, "bUseBPNotifyDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRefreshed()
    { return { (void*)this, "bUseBPNotifyItemRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCropPhaseIncrease()
    { return { (void*)this, "bUseBPOnCropPhaseIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnItemConsumed()
    { return { (void*)this, "bUseBPOnItemConsumed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnUpdatedItemContextMenu()
    { return { (void*)this, "bUseBPOnUpdatedItemContextMenu" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAnimMontage()
    { return { (void*)this, "bUseBPOverrideAnimMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCraftingConsumption()
    { return { (void*)this, "bUseBPOverrideCraftingConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDeathAnim()
    { return { (void*)this, "bUseBPOverrideDeathAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideHoldItemSlotAction()
    { return { (void*)this, "bUseBPOverrideHoldItemSlotAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideInheritedStatWeight()
    { return { (void*)this, "bUseBPOverrideInheritedStatWeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideProjectileType()
    { return { (void*)this, "bUseBPOverrideProjectileType" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRemainingCooldownTime()
    { return { (void*)this, "bUseBPOverrideRemainingCooldownTime" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideSound()
    { return { (void*)this, "bUseBPOverrideSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostAddBuffToGiveOwnerCharacter()
    { return { (void*)this, "bUseBPPostAddBuffToGiveOwnerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventUpload()
    { return { (void*)this, "bUseBPPreventUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventUseOntoItem()
    { return { (void*)this, "bUseBPPreventUseOntoItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPrimalDinoCharacterConsumedItem()
    { return { (void*)this, "bUseBPPrimalDinoCharacterConsumedItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemovedFromInventory()
    { return { (void*)this, "bUseBPRemovedFromInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupHUDIconMaterial()
    { return { (void*)this, "bUseBPSetupHUDIconMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintEquippedNotifications()
    { return { (void*)this, "bUseBlueprintEquippedNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemBlueprintTick()
    { return { (void*)this, "bUseEquippedItemBlueprintTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquippedItemNativeTick()
    { return { (void*)this, "bUseEquippedItemNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseInWaterRestoreDurability()
    { return { (void*)this, "bUseInWaterRestoreDurability" }; }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_ItemTrait.bUseItemColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemColors()
    { return { (void*)this, "bUseItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemDurability()
    { return { (void*)this, "bUseItemDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemStats()
    { return { (void*)this, "bUseItemStats" }; }
    BitFieldValue<bool, unsigned __int32> bUseMultiSaddleMeshOverrideMap()
    { return { (void*)this, "bUseMultiSaddleMeshOverrideMap" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemSetIndexAsDestinationItemCustomData()
    { return { (void*)this, "bUseOnItemSetIndexAsDestinationItemCustomData" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnItemWeaponRemoveClipAmmo()
    { return { (void*)this, "bUseOnItemWeaponRemoveClipAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bUseOntoItemRequiresImmobilization()
    { return { (void*)this, "bUseOntoItemRequiresImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bUseScaleStatEffectivenessByDurability()
    { return { (void*)this, "bUseScaleStatEffectivenessByDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinDroppedItemTemplateForSecondryAction()
    { return { (void*)this, "bUseSkinDroppedItemTemplateForSecondryAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseSkinnedBPCustomInventoryWidgetText()
    { return { (void*)this, "bUseSkinnedBPCustomInventoryWidgetText" }; }
    BitFieldValue<bool, unsigned __int32> bUseSlottedTick()
    { return { (void*)this, "bUseSlottedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActor()
    { return { (void*)this, "bUseSpawnActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorRelativeLoc()
    { return { (void*)this, "bUseSpawnActorRelativeLoc" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorTakeOwnerRotation()
    { return { (void*)this, "bUseSpawnActorTakeOwnerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnActorWhenRiding()
    { return { (void*)this, "bUseSpawnActorWhenRiding" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCreationTime()
    { return { (void*)this, "bUsesCreationTime" }; }
    BitFieldValue<bool, unsigned __int32> bUsingRequiresStandingOnSolidGround()
    { return { (void*)this, "bUsingRequiresStandingOnSolidGround" }; }
    BitFieldValue<bool, unsigned __int32> bValidCraftingResource()
    { return { (void*)this, "bValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bRequireActiveOwnerContainer()
    { return { (void*)this, "bRequireActiveOwnerContainer" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_ITEMTRAIT_H
