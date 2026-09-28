// ==========================================================================
//  UPrimalItem_Dye — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_DYE_H
#define BRZ_SDK_JOGO_UPRIMALITEM_DYE_H

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


struct UPrimalItem_Dye
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_Dye"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Dye.CanUseWithItemSource(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseWithItemSource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem_Dye.CanUseWithItemSource(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Dye.GetHUDIconMaterial()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UMaterialInterface* GetHUDIconMaterial() const
    {
        return NativeCall<UMaterialInterface*>(this, "UPrimalItem_Dye.GetHUDIconMaterial()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Dye.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalUseItemOntoItem(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItem_Dye.LocalUseItemOntoItem(AShooterPlayerController*,UPrimalItem*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Dye.Used(UPrimalItem*,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Used(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalItem_Dye.Used(UPrimalItem*,int)", a0, a1);
    }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Dye.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.AllowClassesToBeUsedAsParentSkin"); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers")); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters")); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Dye.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Dye.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Dye.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Dye.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Dye.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Dye.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_Dye.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Dye.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_Dye.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_Dye.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Dye.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.DurabilityStringShort"); }
    BrzCampoPonteiro DyeColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.DyeColor")); }
    BrzCampoPonteiro DyeUISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.DyeUISceneTemplate")); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_Dye.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_Dye.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_Dye.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Dye.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_Dye.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_Dye.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Dye.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_Dye.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_Dye.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_Dye.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_Dye.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_Dye.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Dye.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_Dye.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Dye.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_Dye.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_Dye.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Dye.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Dye.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Dye.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_Dye.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_Dye.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Dye.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Dye.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Dye.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.WidgetCustomBrokenOverlayStyleBrush")); }
    BrzCampoPonteiro bAllowCraftingWithStarterAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowCraftingWithStarterAmmo")); }
    BrzCampoPonteiro bAllowCustomColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowCustomColors")); }
    BrzCampoPonteiro bAllowDefaultCharacterAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowDefaultCharacterAttachment")); }
    BrzCampoPonteiro bAllowEquppingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowEquppingItem")); }
    BrzCampoPonteiro bAllowInvalidItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowInvalidItemVersion")); }
    BrzCampoPonteiro bAllowInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowInventoryItem")); }
    BrzCampoPonteiro bAllowOverrideItemAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowOverrideItemAutoDecreaseDurability")); }
    BrzCampoPonteiro bAllowRemoteUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowRemoteUseInInventory")); }
    BrzCampoPonteiro bAllowRemovalFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowRemovalFromInventory")); }
    BrzCampoPonteiro bAllowRemoveFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowRemoveFromSteamInventory")); }
    BrzCampoPonteiro bAllowRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowRepair")); }
    BrzCampoPonteiro bAllowUseIgnoreMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowUseIgnoreMovementMode")); }
    BrzCampoPonteiro bAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowUseInInventory")); }
    BrzCampoPonteiro bAllowUseWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowUseWhileRiding")); }
    BrzCampoPonteiro bAllowWakingTameZeroAffinityEffectivenessMultiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAllowWakingTameZeroAffinityEffectivenessMulti")); }
    BrzCampoPonteiro bAlwaysLearnedEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAlwaysLearnedEngram")); }
    BrzCampoPonteiro bAlwaysTriggerTributeDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAlwaysTriggerTributeDownloaded")); }
    BrzCampoPonteiro bAppendPrimaryColorToNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAppendPrimaryColorToName")); }
    BrzCampoPonteiro bAutoCraftBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAutoCraftBlueprint")); }
    BrzCampoPonteiro bAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bAutoTameSpawnedActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bAutoTameSpawnedActor")); }
    BrzCampoPonteiro bBPAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bBPAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bBPAllowRemoteRemoveFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bBPAllowRemoteRemoveFromInventory")); }
    BrzCampoPonteiro bBPCanUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bBPCanUse")); }
    BrzCampoPonteiro bBPInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bBPInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bCanBeArkTributeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCanBeArkTributeItem")); }
    BrzCampoPonteiro bCanBeBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCanBeBlueprint")); }
    BrzCampoPonteiro bCanBuildStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCanBuildStructures")); }
    BrzCampoPonteiro bCanSlotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCanSlot")); }
    BrzCampoPonteiro bCanUseSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCanUseSwimming")); }
    BrzCampoPonteiro bCensoredItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCensoredItemSkin")); }
    BrzCampoPonteiro bCheckBPAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCheckBPAllowCrafting")); }
    BrzCampoPonteiro bClearSkinOnInventoryRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bClearSkinOnInventoryRemoval")); }
    BrzCampoPonteiro bConfirmBeforeUsingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bConfirmBeforeUsing")); }
    BrzCampoPonteiro bConsumeItemOnUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bConsumeItemOnUse")); }
    BrzCampoPonteiro bCopyCustomDescriptionIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCopyCustomDescriptionIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyDurabilityIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCopyDurabilityIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyItemDurabilityFromCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCopyItemDurabilityFromCraftingResource")); }
    BrzCampoPonteiro bCostumeHideSaddleMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCostumeHideSaddleMesh")); }
    BrzCampoPonteiro bCraftDontActuallyGiveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCraftDontActuallyGiveItem")); }
    BrzCampoPonteiro bCraftedRequestCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCraftedRequestCustomItemDescription")); }
    BrzCampoPonteiro bCustomBrokenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCustomBrokenIcon")); }
    BrzCampoPonteiro bCustomBrokenOverlayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bCustomBrokenOverlayIcon")); }
    BrzCampoPonteiro bDeferWeaponBeginPlayToAssociatedItemSetTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDeferWeaponBeginPlayToAssociatedItemSetTime")); }
    BrzCampoPonteiro bDeprecateBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDeprecateBlueprint")); }
    BrzCampoPonteiro bDeprecateItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDeprecateItem")); }
    BrzCampoPonteiro bDestroyBrokenItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDestroyBrokenItem")); }
    BrzCampoPonteiro bDisableAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDisableAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bDisableItemUITooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDisableItemUITooltip")); }
    BrzCampoPonteiro bDivideTimeToCraftByGlobalCropGrowthSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDivideTimeToCraftByGlobalCropGrowthSpeed")); }
    BrzCampoPonteiro bDoApplyOriginalColorsWhenUnskinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDoApplyOriginalColorsWhenUnskinned")); }
    BrzCampoPonteiro bDontCountItemForUploadRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDontCountItemForUploadRestrictions")); }
    BrzCampoPonteiro bDontRemoveOnEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDontRemoveOnEquip")); }
    BrzCampoPonteiro bDontResetAttachmentIfNotUpdatingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDontResetAttachmentIfNotUpdatingItem")); }
    BrzCampoPonteiro bDontScaleSnapshotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDontScaleSnapshot")); }
    BrzCampoPonteiro bDontUseDurabilityDamageOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDontUseDurabilityDamageOverlay")); }
    BrzCampoPonteiro bDragClearDyedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDragClearDyedItem")); }
    BrzCampoPonteiro bDroppedItemAllowDinoPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDroppedItemAllowDinoPickup")); }
    BrzCampoPonteiro bDurabilityRequirementIgnoredInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bDurabilityRequirementIgnoredInWater")); }
    BrzCampoPonteiro bEggSpoilsWhenFertilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEggSpoilsWhenFertilized")); }
    BrzCampoPonteiro bEquipAddTekExtendedInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipAddTekExtendedInfo")); }
    BrzCampoPonteiro bEquipPreventsCharacterSkinsCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipPreventsCharacterSkinsCosmetics")); }
    BrzCampoPonteiro bEquipRequiresDLC_AberrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipRequiresDLC_Aberration")); }
    BrzCampoPonteiro bEquipRequiresDLC_ExtinctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipRequiresDLC_Extinction")); }
    BrzCampoPonteiro bEquipRequiresDLC_GenesisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipRequiresDLC_Genesis")); }
    BrzCampoPonteiro bEquipRequiresDLC_ScorchedEarthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipRequiresDLC_ScorchedEarth")); }
    BrzCampoPonteiro bEquipmentForceHairHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipmentForceHairHiding")); }
    BrzCampoPonteiro bEquipmentForceHideAllHairComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipmentForceHideAllHairComponents")); }
    BrzCampoPonteiro bEquipmentHatHideItemEyeHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipmentHatHideItemEyeHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemFacialHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipmentHatHideItemFacialHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemHeadHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquipmentHatHideItemHeadHair")); }
    BrzCampoPonteiro bEquippedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bEquippedItem")); }
    BrzCampoPonteiro bForceAllowCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceAllowCustomItemDescription")); }
    BrzCampoPonteiro bForceAllowDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceAllowDragging")); }
    BrzCampoPonteiro bForceAllowGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceAllowGrinding")); }
    BrzCampoPonteiro bForceAllowRemovalWhenDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceAllowRemovalWhenDead")); }
    BrzCampoPonteiro bForceAllowSkinColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceAllowSkinColorization")); }
    BrzCampoPonteiro bForceDediAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceDediAttachments")); }
    BrzCampoPonteiro bForceDisplayInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceDisplayInInventory")); }
    BrzCampoPonteiro bForceDropDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceDropDestruction")); }
    BrzCampoPonteiro bForceHideAllDefaultPawnAttachmentsWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceHideAllDefaultPawnAttachmentsWhenEquipped")); }
    BrzCampoPonteiro bForceNoLearnedEngramRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceNoLearnedEngramRequirement")); }
    BrzCampoPonteiro bForceNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceNotificationItemCombatMode")); }
    BrzCampoPonteiro bForcePreventConsumableWhileHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForcePreventConsumableWhileHandcuffed")); }
    BrzCampoPonteiro bForcePreventGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForcePreventGrinding")); }
    BrzCampoPonteiro bForceQualityColorOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceQualityColorOverlay")); }
    BrzCampoPonteiro bForceRequiresExplicitOwnerChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceRequiresExplicitOwnerChecks")); }
    BrzCampoPonteiro bForceUseItemAddCharacterStatsOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bForceUseItemAddCharacterStatsOnDinos")); }
    BrzCampoPonteiro bFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bFromSteamInventory")); }
    BrzCampoPonteiro bGiveItemWhenUsedCopyItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bGiveItemWhenUsedCopyItemStats")); }
    BrzCampoPonteiro bHideCustomDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bHideCustomDescription")); }
    BrzCampoPonteiro bHideFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bHideFromInventoryDisplay")); }
    BrzCampoPonteiro bHideFromRemoteInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bHideFromRemoteInventoryDisplay")); }
    BrzCampoPonteiro bHideMoreOptionsIfNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bHideMoreOptionsIfNonRemovable")); }
    BrzCampoPonteiro bIgnoreDrawingItemButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIgnoreDrawingItemButtonIcon")); }
    BrzCampoPonteiro bIgnoreMinimumUseIntervalForDinoAutoEatingFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIgnoreMinimumUseIntervalForDinoAutoEatingFood")); }
    BrzCampoPonteiro bIsAbstractItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsAbstractItem")); }
    BrzCampoPonteiro bIsBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsBlueprint")); }
    BrzCampoPonteiro bIsCharacterSkinOrCosmeticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsCharacterSkinOrCosmetic")); }
    BrzCampoPonteiro bIsClubArkRewardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsClubArkReward")); }
    BrzCampoPonteiro bIsClubArkTradeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsClubArkTrade")); }
    BrzCampoPonteiro bIsCookingIngredientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsCookingIngredient")); }
    BrzCampoPonteiro bIsCustomRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsCustomRecipe")); }
    BrzCampoPonteiro bIsDescriptionOnlyItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsDescriptionOnlyItem")); }
    BrzCampoPonteiro bIsDinoAutoHealingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsDinoAutoHealingItem")); }
    BrzCampoPonteiro bIsEggField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsEgg")); }
    BrzCampoPonteiro bIsEmbryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsEmbryo")); }
    BrzCampoPonteiro bIsEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsEngram")); }
    BrzCampoPonteiro bIsFoodRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsFoodRecipe")); }
    BrzCampoPonteiro bIsFromAllClustersInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsFromAllClustersInventory")); }
    BrzCampoPonteiro bIsGhostItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsGhostItemSkin")); }
    BrzCampoPonteiro bIsInitialItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsInitialItem")); }
    BrzCampoPonteiro bIsItemAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsItemAccessory")); }
    BrzCampoPonteiro bIsItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsItemSkin")); }
    BrzCampoPonteiro bIsMisssionItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsMisssionItem")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bIsRepairing")); }
    BrzCampoPonteiro bItemIsUsableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemIsUsable")); }
    BrzCampoPonteiro bItemSkinAllowEquippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinAllowEquipping")); }
    BrzCampoPonteiro bItemSkinIgnoreSkinIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinIgnoreSkinIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinKeepOriginalIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinKeepOriginalItemName")); }
    BrzCampoPonteiro bItemSkinKeepOriginalWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinKeepOriginalWeaponTemplate")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinReceiveOwnerEquippedBlueprintEvents")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bItemSkinReceiveOwnerEquippedBlueprintTick")); }
    BrzCampoPonteiro bMergeCustomDataFromCraftingResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bMergeCustomDataFromCraftingResources")); }
    BrzCampoPonteiro bMuteExtraEquipmentSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bMuteExtraEquipmentSounds")); }
    BrzCampoPonteiro bNameForceNoStatQualityRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bNameForceNoStatQualityRank")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_Dye.bNetInfoFromClient"); }
    BrzCampoPonteiro bNewWeaponAutoFillClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bNewWeaponAutoFillClipAmmo")); }
    BrzCampoPonteiro bNonBlockingShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bNonBlockingShield")); }
    BrzCampoPonteiro bOnlyCanUseInFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bOnlyCanUseInFalling")); }
    BrzCampoPonteiro bOnlyCanUseInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bOnlyCanUseInWater")); }
    BrzCampoPonteiro bOnlyEquipWhenUnconsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bOnlyEquipWhenUnconscious")); }
    BrzCampoPonteiro bOverrideExactClassCraftingRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bOverrideExactClassCraftingRequirement")); }
    BrzCampoPonteiro bOverrideRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bOverrideRepairingRequirements")); }
    BrzCampoPonteiro bPickupEggAlertsDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPickupEggAlertsDinos")); }
    BrzCampoPonteiro bPickupEggForceAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPickupEggForceAggro")); }
    BrzCampoPonteiro bPreventArmorDurabiltyConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventArmorDurabiltyConsumption")); }
    BrzCampoPonteiro bPreventCheatGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventCheatGive")); }
    BrzCampoPonteiro bPreventColdStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventColdStorage")); }
    BrzCampoPonteiro bPreventConsumeItemOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventConsumeItemOnDrag")); }
    BrzCampoPonteiro bPreventCraftingResourceAtFullDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventCraftingResourceAtFullDurability")); }
    BrzCampoPonteiro bPreventDepositDroppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventDepositDropping")); }
    BrzCampoPonteiro bPreventDinoAutoConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventDinoAutoConsume")); }
    BrzCampoPonteiro bPreventDragOntoOtherItemIfSameCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventDragOntoOtherItemIfSameCustomData")); }
    BrzCampoPonteiro bPreventEquipOnTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventEquipOnTaxidermyBase")); }
    BrzCampoPonteiro bPreventItemBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventItemBlueprint")); }
    BrzCampoPonteiro bPreventItemSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventItemSkins")); }
    BrzCampoPonteiro bPreventModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventModifyArmorValue")); }
    BrzCampoPonteiro bPreventNativeItemBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventNativeItemBroken")); }
    BrzCampoPonteiro bPreventNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventNotificationItemCombatMode")); }
    BrzCampoPonteiro bPreventOnFullEquippedSuitHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventOnFullEquippedSuitHUD")); }
    BrzCampoPonteiro bPreventOnSkinTabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventOnSkinTab")); }
    BrzCampoPonteiro bPreventRegularDroppingButStillDropInBulkAndDestructionCachesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches")); }
    BrzCampoPonteiro bPreventRemovingClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventRemovingClipAmmo")); }
    BrzCampoPonteiro bPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUpload")); }
    BrzCampoPonteiro bPreventUploadingWeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUploadingWeaponClipAmmo")); }
    BrzCampoPonteiro bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned")); }
    BrzCampoPonteiro bPreventUseAtTameLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUseAtTameLimit")); }
    BrzCampoPonteiro bPreventUseByDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUseByDinos")); }
    BrzCampoPonteiro bPreventUseByHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUseByHumans")); }
    BrzCampoPonteiro bPreventUseWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bPreventUseWhenSleeping")); }
    BrzCampoPonteiro bRefreshOnDyeUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bRefreshOnDyeUsed")); }
    BrzCampoPonteiro bRequiresBobsTallTalesToCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bRequiresBobsTallTalesToCraft")); }
    BrzCampoPonteiro bResourcePreventGivingFromDemolitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bResourcePreventGivingFromDemolition")); }
    BrzCampoPonteiro bRestoreDurabilityWhenColorizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bRestoreDurabilityWhenColorized")); }
    BrzCampoPonteiro bSaddleUseRegularDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSaddleUseRegularDurability")); }
    BrzCampoPonteiro bScaleOverridenRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bScaleOverridenRepairingRequirements")); }
    BrzCampoPonteiro bSetCraftingActorToSpawnTeamFromCrafterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSetCraftingActorToSpawnTeamFromCrafter")); }
    BrzCampoPonteiro bShowItemRatingAsPercentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bShowItemRatingAsPercent")); }
    BrzCampoPonteiro bShowTooltipColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bShowTooltipColors")); }
    BrzCampoPonteiro bSkinAddWeightToSkinnedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSkinAddWeightToSkinnedItem")); }
    BrzCampoPonteiro bSkinDisableWhenSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSkinDisableWhenSubmerged")); }
    BrzCampoPonteiro bSkinReequipOnClientBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSkinReequipOnClientBeginPlay")); }
    BrzCampoPonteiro bSkipEquipAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSkipEquipAnimation")); }
    BrzCampoPonteiro bSpawnActorOnWaterOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSpawnActorOnWaterOnly")); }
    BrzCampoPonteiro bSupportDragOntoOtherItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bSupportDragOntoOtherItem")); }
    BrzCampoPonteiro bTekItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bTekItem")); }
    BrzCampoPonteiro bThrowOnHotKeyUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bThrowOnHotKeyUse")); }
    BrzCampoPonteiro bThrowUsesSecondaryActionDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bThrowUsesSecondaryActionDrop")); }
    BrzCampoPonteiro bUnappliedItemSkinIgnoreItemAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUnappliedItemSkinIgnoreItemAttachments")); }
    BrzCampoPonteiro bUnlockAsPersistentProfileItemOnCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUnlockAsPersistentProfileItemOnCraft")); }
    BrzCampoPonteiro bUsableWithTekGrenadeLauncherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUsableWithTekGrenadeLauncher")); }
    BrzCampoPonteiro bUseBPAddedAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPAddedAttachments")); }
    BrzCampoPonteiro bUseBPAddedToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPAddedToInventory")); }
    BrzCampoPonteiro bUseBPAllowAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPAllowAddToInventory")); }
    BrzCampoPonteiro bUseBPCanPlayerUseItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCanPlayerUseItem")); }
    BrzCampoPonteiro bUseBPConsumeProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPConsumeProjectileImpact")); }
    BrzCampoPonteiro bUseBPCraftedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCrafted")); }
    BrzCampoPonteiro bUseBPCustomAutoDecreaseDurabilityPerIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomAutoDecreaseDurabilityPerInterval")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomDurabilityText")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomDurabilityTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomInventoryWidgetTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextForBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPCustomInventoryWidgetTextForBlueprint")); }
    BrzCampoPonteiro bUseBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPDrawItemIcon")); }
    BrzCampoPonteiro bUseBPEquippedItemOnXPEarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPEquippedItemOnXPEarning")); }
    BrzCampoPonteiro bUseBPForceAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPForceAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bUseBPGetItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemDescription")); }
    BrzCampoPonteiro bUseBPGetItemDurabilityPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemDurabilityPercentage")); }
    BrzCampoPonteiro bUseBPGetItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemIcon")); }
    BrzCampoPonteiro bUseBPGetItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemName")); }
    BrzCampoPonteiro bUseBPGetItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemNetInfo")); }
    BrzCampoPonteiro bUseBPGetItemStatStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetItemStatString")); }
    BrzCampoPonteiro bUseBPGetMaxAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPGetMaxAmmo")); }
    BrzCampoPonteiro bUseBPInitFromItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPInitFromItemNetInfo")); }
    BrzCampoPonteiro bUseBPInitItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPInitItemColors")); }
    BrzCampoPonteiro bUseBPInitializeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPInitializeItem")); }
    BrzCampoPonteiro bUseBPIsValidForCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPIsValidForCrafting")); }
    BrzCampoPonteiro bUseBPNotifyDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPNotifyDropped")); }
    BrzCampoPonteiro bUseBPNotifyItemRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPNotifyItemRefreshed")); }
    BrzCampoPonteiro bUseBPOnCropPhaseIncreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOnCropPhaseIncrease")); }
    BrzCampoPonteiro bUseBPOnItemConsumedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOnItemConsumed")); }
    BrzCampoPonteiro bUseBPOnUpdatedItemContextMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOnUpdatedItemContextMenu")); }
    BrzCampoPonteiro bUseBPOverrideAnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideAnimMontage")); }
    BrzCampoPonteiro bUseBPOverrideCraftingConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideCraftingConsumption")); }
    BrzCampoPonteiro bUseBPOverrideDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideDeathAnim")); }
    BrzCampoPonteiro bUseBPOverrideHoldItemSlotActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideHoldItemSlotAction")); }
    BrzCampoPonteiro bUseBPOverrideInheritedStatWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideInheritedStatWeight")); }
    BrzCampoPonteiro bUseBPOverrideProjectileTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideProjectileType")); }
    BrzCampoPonteiro bUseBPOverrideRemainingCooldownTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideRemainingCooldownTime")); }
    BrzCampoPonteiro bUseBPOverrideSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPOverrideSound")); }
    BrzCampoPonteiro bUseBPPostAddBuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPPostAddBuffToGiveOwnerCharacter")); }
    BrzCampoPonteiro bUseBPPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPPreventUpload")); }
    BrzCampoPonteiro bUseBPPreventUseOntoItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPPreventUseOntoItem")); }
    BrzCampoPonteiro bUseBPPrimalDinoCharacterConsumedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPPrimalDinoCharacterConsumedItem")); }
    BrzCampoPonteiro bUseBPRemovedFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPRemovedFromInventory")); }
    BrzCampoPonteiro bUseBPSetupHUDIconMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBPSetupHUDIconMaterial")); }
    BrzCampoPonteiro bUseBlueprintEquippedNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseBlueprintEquippedNotifications")); }
    BrzCampoPonteiro bUseEquippedItemBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseEquippedItemBlueprintTick")); }
    BrzCampoPonteiro bUseEquippedItemNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseEquippedItemNativeTick")); }
    BrzCampoPonteiro bUseInWaterRestoreDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseInWaterRestoreDurability")); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_Dye.bUseItemColor" }; }
    BrzCampoPonteiro bUseItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseItemColors")); }
    BrzCampoPonteiro bUseItemDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseItemDurability")); }
    BrzCampoPonteiro bUseItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseItemStats")); }
    BrzCampoPonteiro bUseMultiSaddleMeshOverrideMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseMultiSaddleMeshOverrideMap")); }
    BrzCampoPonteiro bUseOnItemSetIndexAsDestinationItemCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseOnItemSetIndexAsDestinationItemCustomData")); }
    BrzCampoPonteiro bUseOnItemWeaponRemoveClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseOnItemWeaponRemoveClipAmmo")); }
    BrzCampoPonteiro bUseOntoItemRequiresImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseOntoItemRequiresImmobilization")); }
    BrzCampoPonteiro bUseScaleStatEffectivenessByDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseScaleStatEffectivenessByDurability")); }
    BrzCampoPonteiro bUseSkinDroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSkinDroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro bUseSkinnedBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSkinnedBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseSlottedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSlottedTick")); }
    BrzCampoPonteiro bUseSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSpawnActor")); }
    BrzCampoPonteiro bUseSpawnActorRelativeLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSpawnActorRelativeLoc")); }
    BrzCampoPonteiro bUseSpawnActorTakeOwnerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSpawnActorTakeOwnerRotation")); }
    BrzCampoPonteiro bUseSpawnActorWhenRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUseSpawnActorWhenRiding")); }
    BrzCampoPonteiro bUsesCreationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUsesCreationTime")); }
    BrzCampoPonteiro bUsingRequiresStandingOnSolidGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bUsingRequiresStandingOnSolidGround")); }
    BrzCampoPonteiro bValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Dye.bValidCraftingResource")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_DYE_H
