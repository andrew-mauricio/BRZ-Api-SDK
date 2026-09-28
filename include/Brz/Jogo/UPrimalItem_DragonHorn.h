// ==========================================================================
//  UPrimalItem_DragonHorn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_DRAGONHORN_H
#define BRZ_SDK_JOGO_UPRIMALITEM_DRAGONHORN_H

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


struct UPrimalItem_DragonHorn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_DragonHorn"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_DragonHorn.CanUse(bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CanUse(bool a0)
    {
        return NativeCall<void*, bool>(nullptr, "UPrimalItem_DragonHorn.CanUse(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_DragonHorn.LocalUse(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro LocalUse(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalItem_DragonHorn.LocalUse(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_DragonHorn.OpenDragonHornRadial(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro OpenDragonHornRadial(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalItem_DragonHorn.OpenDragonHornRadial(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_DragonHorn.SyncDisplayFromDragonHornBuff(APrimalBuff_DragonHorn*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro SyncDisplayFromDragonHornBuff(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalItem_DragonHorn.SyncDisplayFromDragonHornBuff(APrimalBuff_DragonHorn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_DragonHorn.Use(bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Use(bool a0)
    {
        return NativeCall<void*, bool>(nullptr, "UPrimalItem_DragonHorn.Use(bool)", a0);
    }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DragonHorn.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.AllowClassesToBeUsedAsParentSkin"); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers")); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters")); }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DragonHorn.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DragonHorn.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DragonHorn.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DragonHorn.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DragonHorn.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DragonHorn.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_DragonHorn.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_DragonHorn.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_DragonHorn.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_DragonHorn.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DragonHorn.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.DurabilityStringShort"); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_DragonHorn.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_DragonHorn.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_DragonHorn.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_DragonHorn.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_DragonHorn.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_DragonHorn.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DragonHorn.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_DragonHorn.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_DragonHorn.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_DragonHorn.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_DragonHorn.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DragonHorn.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_DragonHorn.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_DragonHorn.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.SavedDurability"); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_DragonHorn.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_DragonHorn.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_DragonHorn.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_DragonHorn.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.WidgetCustomBrokenOverlayStyleBrush")); }
    BrzCampoPonteiro bAllowCraftingWithStarterAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowCraftingWithStarterAmmo")); }
    BrzCampoPonteiro bAllowCustomColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowCustomColors")); }
    BrzCampoPonteiro bAllowDefaultCharacterAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowDefaultCharacterAttachment")); }
    BrzCampoPonteiro bAllowEquppingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowEquppingItem")); }
    BrzCampoPonteiro bAllowInvalidItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowInvalidItemVersion")); }
    BrzCampoPonteiro bAllowInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowInventoryItem")); }
    BrzCampoPonteiro bAllowOverrideItemAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowOverrideItemAutoDecreaseDurability")); }
    BrzCampoPonteiro bAllowRemoteUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowRemoteUseInInventory")); }
    BrzCampoPonteiro bAllowRemovalFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowRemovalFromInventory")); }
    BrzCampoPonteiro bAllowRemoveFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowRemoveFromSteamInventory")); }
    BrzCampoPonteiro bAllowRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowRepair")); }
    BrzCampoPonteiro bAllowUseIgnoreMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowUseIgnoreMovementMode")); }
    BrzCampoPonteiro bAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowUseInInventory")); }
    BrzCampoPonteiro bAllowUseWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowUseWhileRiding")); }
    BrzCampoPonteiro bAllowWakingTameZeroAffinityEffectivenessMultiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAllowWakingTameZeroAffinityEffectivenessMulti")); }
    BrzCampoPonteiro bAlwaysLearnedEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAlwaysLearnedEngram")); }
    BrzCampoPonteiro bAlwaysTriggerTributeDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAlwaysTriggerTributeDownloaded")); }
    BrzCampoPonteiro bAppendPrimaryColorToNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAppendPrimaryColorToName")); }
    BrzCampoPonteiro bAutoCraftBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAutoCraftBlueprint")); }
    BrzCampoPonteiro bAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bAutoTameSpawnedActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bAutoTameSpawnedActor")); }
    BrzCampoPonteiro bBPAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bBPAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bBPAllowRemoteRemoveFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bBPAllowRemoteRemoveFromInventory")); }
    BrzCampoPonteiro bBPCanUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bBPCanUse")); }
    BrzCampoPonteiro bBPInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bBPInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bCanBeArkTributeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCanBeArkTributeItem")); }
    BrzCampoPonteiro bCanBeBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCanBeBlueprint")); }
    BrzCampoPonteiro bCanBuildStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCanBuildStructures")); }
    BrzCampoPonteiro bCanSlotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCanSlot")); }
    BrzCampoPonteiro bCanUseSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCanUseSwimming")); }
    BrzCampoPonteiro bCensoredItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCensoredItemSkin")); }
    BrzCampoPonteiro bCheckBPAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCheckBPAllowCrafting")); }
    BrzCampoPonteiro bClearSkinOnInventoryRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bClearSkinOnInventoryRemoval")); }
    BrzCampoPonteiro bConfirmBeforeUsingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bConfirmBeforeUsing")); }
    BrzCampoPonteiro bConsumeItemOnUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bConsumeItemOnUse")); }
    BrzCampoPonteiro bCopyCustomDescriptionIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCopyCustomDescriptionIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyDurabilityIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCopyDurabilityIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyItemDurabilityFromCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCopyItemDurabilityFromCraftingResource")); }
    BrzCampoPonteiro bCostumeHideSaddleMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCostumeHideSaddleMesh")); }
    BrzCampoPonteiro bCraftDontActuallyGiveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCraftDontActuallyGiveItem")); }
    BrzCampoPonteiro bCraftedRequestCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCraftedRequestCustomItemDescription")); }
    BrzCampoPonteiro bCustomBrokenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCustomBrokenIcon")); }
    BrzCampoPonteiro bCustomBrokenOverlayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bCustomBrokenOverlayIcon")); }
    BrzCampoPonteiro bDeferWeaponBeginPlayToAssociatedItemSetTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDeferWeaponBeginPlayToAssociatedItemSetTime")); }
    BrzCampoPonteiro bDeprecateBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDeprecateBlueprint")); }
    BrzCampoPonteiro bDeprecateItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDeprecateItem")); }
    BrzCampoPonteiro bDestroyBrokenItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDestroyBrokenItem")); }
    BrzCampoPonteiro bDisableAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDisableAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bDisableItemUITooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDisableItemUITooltip")); }
    BrzCampoPonteiro bDivideTimeToCraftByGlobalCropGrowthSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDivideTimeToCraftByGlobalCropGrowthSpeed")); }
    BrzCampoPonteiro bDoApplyOriginalColorsWhenUnskinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDoApplyOriginalColorsWhenUnskinned")); }
    BrzCampoPonteiro bDontCountItemForUploadRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDontCountItemForUploadRestrictions")); }
    BrzCampoPonteiro bDontRemoveOnEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDontRemoveOnEquip")); }
    BrzCampoPonteiro bDontResetAttachmentIfNotUpdatingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDontResetAttachmentIfNotUpdatingItem")); }
    BrzCampoPonteiro bDontScaleSnapshotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDontScaleSnapshot")); }
    BrzCampoPonteiro bDontUseDurabilityDamageOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDontUseDurabilityDamageOverlay")); }
    BrzCampoPonteiro bDragClearDyedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDragClearDyedItem")); }
    BrzCampoPonteiro bDroppedItemAllowDinoPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDroppedItemAllowDinoPickup")); }
    BrzCampoPonteiro bDurabilityRequirementIgnoredInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bDurabilityRequirementIgnoredInWater")); }
    BrzCampoPonteiro bEggSpoilsWhenFertilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEggSpoilsWhenFertilized")); }
    BrzCampoPonteiro bEquipAddTekExtendedInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipAddTekExtendedInfo")); }
    BrzCampoPonteiro bEquipPreventsCharacterSkinsCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipPreventsCharacterSkinsCosmetics")); }
    BrzCampoPonteiro bEquipRequiresDLC_AberrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipRequiresDLC_Aberration")); }
    BrzCampoPonteiro bEquipRequiresDLC_ExtinctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipRequiresDLC_Extinction")); }
    BrzCampoPonteiro bEquipRequiresDLC_GenesisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipRequiresDLC_Genesis")); }
    BrzCampoPonteiro bEquipRequiresDLC_ScorchedEarthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipRequiresDLC_ScorchedEarth")); }
    BrzCampoPonteiro bEquipmentForceHairHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipmentForceHairHiding")); }
    BrzCampoPonteiro bEquipmentForceHideAllHairComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipmentForceHideAllHairComponents")); }
    BrzCampoPonteiro bEquipmentHatHideItemEyeHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipmentHatHideItemEyeHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemFacialHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipmentHatHideItemFacialHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemHeadHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquipmentHatHideItemHeadHair")); }
    BrzCampoPonteiro bEquippedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bEquippedItem")); }
    BrzCampoPonteiro bForceAllowCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceAllowCustomItemDescription")); }
    BrzCampoPonteiro bForceAllowDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceAllowDragging")); }
    BrzCampoPonteiro bForceAllowGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceAllowGrinding")); }
    BrzCampoPonteiro bForceAllowRemovalWhenDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceAllowRemovalWhenDead")); }
    BrzCampoPonteiro bForceAllowSkinColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceAllowSkinColorization")); }
    BrzCampoPonteiro bForceDediAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceDediAttachments")); }
    BrzCampoPonteiro bForceDisplayInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceDisplayInInventory")); }
    BrzCampoPonteiro bForceDropDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceDropDestruction")); }
    BrzCampoPonteiro bForceHideAllDefaultPawnAttachmentsWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceHideAllDefaultPawnAttachmentsWhenEquipped")); }
    BrzCampoPonteiro bForceNoLearnedEngramRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceNoLearnedEngramRequirement")); }
    BrzCampoPonteiro bForceNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceNotificationItemCombatMode")); }
    BrzCampoPonteiro bForcePreventConsumableWhileHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForcePreventConsumableWhileHandcuffed")); }
    BrzCampoPonteiro bForcePreventGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForcePreventGrinding")); }
    BrzCampoPonteiro bForceQualityColorOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceQualityColorOverlay")); }
    BrzCampoPonteiro bForceRequiresExplicitOwnerChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceRequiresExplicitOwnerChecks")); }
    BrzCampoPonteiro bForceUseItemAddCharacterStatsOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bForceUseItemAddCharacterStatsOnDinos")); }
    BrzCampoPonteiro bFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bFromSteamInventory")); }
    BrzCampoPonteiro bGiveItemWhenUsedCopyItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bGiveItemWhenUsedCopyItemStats")); }
    BrzCampoPonteiro bHideCustomDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bHideCustomDescription")); }
    BrzCampoPonteiro bHideFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bHideFromInventoryDisplay")); }
    BrzCampoPonteiro bHideFromRemoteInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bHideFromRemoteInventoryDisplay")); }
    BrzCampoPonteiro bHideMoreOptionsIfNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bHideMoreOptionsIfNonRemovable")); }
    BrzCampoPonteiro bIgnoreDrawingItemButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIgnoreDrawingItemButtonIcon")); }
    BrzCampoPonteiro bIgnoreMinimumUseIntervalForDinoAutoEatingFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIgnoreMinimumUseIntervalForDinoAutoEatingFood")); }
    BrzCampoPonteiro bIsAbstractItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsAbstractItem")); }
    BrzCampoPonteiro bIsBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsBlueprint")); }
    BrzCampoPonteiro bIsCharacterSkinOrCosmeticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsCharacterSkinOrCosmetic")); }
    BrzCampoPonteiro bIsClubArkRewardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsClubArkReward")); }
    BrzCampoPonteiro bIsClubArkTradeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsClubArkTrade")); }
    BrzCampoPonteiro bIsCookingIngredientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsCookingIngredient")); }
    BrzCampoPonteiro bIsCustomRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsCustomRecipe")); }
    BrzCampoPonteiro bIsDescriptionOnlyItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsDescriptionOnlyItem")); }
    BrzCampoPonteiro bIsDinoAutoHealingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsDinoAutoHealingItem")); }
    BrzCampoPonteiro bIsEggField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsEgg")); }
    BrzCampoPonteiro bIsEmbryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsEmbryo")); }
    BrzCampoPonteiro bIsEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsEngram")); }
    BrzCampoPonteiro bIsFoodRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsFoodRecipe")); }
    BrzCampoPonteiro bIsFromAllClustersInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsFromAllClustersInventory")); }
    BrzCampoPonteiro bIsGhostItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsGhostItemSkin")); }
    BrzCampoPonteiro bIsInitialItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsInitialItem")); }
    BrzCampoPonteiro bIsItemAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsItemAccessory")); }
    BrzCampoPonteiro bIsItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsItemSkin")); }
    BrzCampoPonteiro bIsMisssionItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsMisssionItem")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bIsRepairing")); }
    BrzCampoPonteiro bItemIsUsableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemIsUsable")); }
    BrzCampoPonteiro bItemSkinAllowEquippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinAllowEquipping")); }
    BrzCampoPonteiro bItemSkinIgnoreSkinIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinIgnoreSkinIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinKeepOriginalIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinKeepOriginalItemName")); }
    BrzCampoPonteiro bItemSkinKeepOriginalWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinKeepOriginalWeaponTemplate")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinReceiveOwnerEquippedBlueprintEvents")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bItemSkinReceiveOwnerEquippedBlueprintTick")); }
    BrzCampoPonteiro bMergeCustomDataFromCraftingResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bMergeCustomDataFromCraftingResources")); }
    BrzCampoPonteiro bMuteExtraEquipmentSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bMuteExtraEquipmentSounds")); }
    BrzCampoPonteiro bNameForceNoStatQualityRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bNameForceNoStatQualityRank")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_DragonHorn.bNetInfoFromClient"); }
    BrzCampoPonteiro bNewWeaponAutoFillClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bNewWeaponAutoFillClipAmmo")); }
    BrzCampoPonteiro bNonBlockingShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bNonBlockingShield")); }
    BrzCampoPonteiro bOnlyCanUseInFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bOnlyCanUseInFalling")); }
    BrzCampoPonteiro bOnlyCanUseInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bOnlyCanUseInWater")); }
    BrzCampoPonteiro bOnlyEquipWhenUnconsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bOnlyEquipWhenUnconscious")); }
    BrzCampoPonteiro bOverrideExactClassCraftingRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bOverrideExactClassCraftingRequirement")); }
    BrzCampoPonteiro bOverrideRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bOverrideRepairingRequirements")); }
    BrzCampoPonteiro bPickupEggAlertsDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPickupEggAlertsDinos")); }
    BrzCampoPonteiro bPickupEggForceAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPickupEggForceAggro")); }
    BrzCampoPonteiro bPreventArmorDurabiltyConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventArmorDurabiltyConsumption")); }
    BrzCampoPonteiro bPreventCheatGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventCheatGive")); }
    BrzCampoPonteiro bPreventColdStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventColdStorage")); }
    BrzCampoPonteiro bPreventConsumeItemOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventConsumeItemOnDrag")); }
    BrzCampoPonteiro bPreventCraftingResourceAtFullDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventCraftingResourceAtFullDurability")); }
    BrzCampoPonteiro bPreventDepositDroppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventDepositDropping")); }
    BrzCampoPonteiro bPreventDinoAutoConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventDinoAutoConsume")); }
    BrzCampoPonteiro bPreventDragOntoOtherItemIfSameCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventDragOntoOtherItemIfSameCustomData")); }
    BrzCampoPonteiro bPreventEquipOnTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventEquipOnTaxidermyBase")); }
    BrzCampoPonteiro bPreventItemBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventItemBlueprint")); }
    BrzCampoPonteiro bPreventItemSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventItemSkins")); }
    BrzCampoPonteiro bPreventModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventModifyArmorValue")); }
    BrzCampoPonteiro bPreventNativeItemBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventNativeItemBroken")); }
    BrzCampoPonteiro bPreventNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventNotificationItemCombatMode")); }
    BrzCampoPonteiro bPreventOnFullEquippedSuitHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventOnFullEquippedSuitHUD")); }
    BrzCampoPonteiro bPreventOnSkinTabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventOnSkinTab")); }
    BrzCampoPonteiro bPreventRegularDroppingButStillDropInBulkAndDestructionCachesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches")); }
    BrzCampoPonteiro bPreventRemovingClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventRemovingClipAmmo")); }
    BrzCampoPonteiro bPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUpload")); }
    BrzCampoPonteiro bPreventUploadingWeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUploadingWeaponClipAmmo")); }
    BrzCampoPonteiro bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned")); }
    BrzCampoPonteiro bPreventUseAtTameLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUseAtTameLimit")); }
    BrzCampoPonteiro bPreventUseByDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUseByDinos")); }
    BrzCampoPonteiro bPreventUseByHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUseByHumans")); }
    BrzCampoPonteiro bPreventUseWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bPreventUseWhenSleeping")); }
    BrzCampoPonteiro bRefreshOnDyeUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bRefreshOnDyeUsed")); }
    BrzCampoPonteiro bRequiresBobsTallTalesToCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bRequiresBobsTallTalesToCraft")); }
    BrzCampoPonteiro bResourcePreventGivingFromDemolitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bResourcePreventGivingFromDemolition")); }
    BrzCampoPonteiro bRestoreDurabilityWhenColorizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bRestoreDurabilityWhenColorized")); }
    BrzCampoPonteiro bSaddleUseRegularDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSaddleUseRegularDurability")); }
    BrzCampoPonteiro bScaleOverridenRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bScaleOverridenRepairingRequirements")); }
    BrzCampoPonteiro bSetCraftingActorToSpawnTeamFromCrafterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSetCraftingActorToSpawnTeamFromCrafter")); }
    BrzCampoPonteiro bShowItemRatingAsPercentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bShowItemRatingAsPercent")); }
    BrzCampoPonteiro bShowTooltipColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bShowTooltipColors")); }
    BrzCampoPonteiro bSkinAddWeightToSkinnedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSkinAddWeightToSkinnedItem")); }
    BrzCampoPonteiro bSkinDisableWhenSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSkinDisableWhenSubmerged")); }
    BrzCampoPonteiro bSkinReequipOnClientBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSkinReequipOnClientBeginPlay")); }
    BrzCampoPonteiro bSkipEquipAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSkipEquipAnimation")); }
    BrzCampoPonteiro bSpawnActorOnWaterOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSpawnActorOnWaterOnly")); }
    BrzCampoPonteiro bSupportDragOntoOtherItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bSupportDragOntoOtherItem")); }
    BrzCampoPonteiro bTekItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bTekItem")); }
    BrzCampoPonteiro bThrowOnHotKeyUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bThrowOnHotKeyUse")); }
    BrzCampoPonteiro bThrowUsesSecondaryActionDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bThrowUsesSecondaryActionDrop")); }
    BrzCampoPonteiro bUnappliedItemSkinIgnoreItemAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUnappliedItemSkinIgnoreItemAttachments")); }
    BrzCampoPonteiro bUnlockAsPersistentProfileItemOnCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUnlockAsPersistentProfileItemOnCraft")); }
    BrzCampoPonteiro bUsableWithTekGrenadeLauncherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUsableWithTekGrenadeLauncher")); }
    BrzCampoPonteiro bUseBPAddedAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPAddedAttachments")); }
    BrzCampoPonteiro bUseBPAddedToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPAddedToInventory")); }
    BrzCampoPonteiro bUseBPAllowAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPAllowAddToInventory")); }
    BrzCampoPonteiro bUseBPCanPlayerUseItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCanPlayerUseItem")); }
    BrzCampoPonteiro bUseBPConsumeProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPConsumeProjectileImpact")); }
    BrzCampoPonteiro bUseBPCraftedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCrafted")); }
    BrzCampoPonteiro bUseBPCustomAutoDecreaseDurabilityPerIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomAutoDecreaseDurabilityPerInterval")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomDurabilityText")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomDurabilityTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomInventoryWidgetTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextForBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPCustomInventoryWidgetTextForBlueprint")); }
    BrzCampoPonteiro bUseBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPDrawItemIcon")); }
    BrzCampoPonteiro bUseBPEquippedItemOnXPEarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPEquippedItemOnXPEarning")); }
    BrzCampoPonteiro bUseBPForceAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPForceAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bUseBPGetItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemDescription")); }
    BrzCampoPonteiro bUseBPGetItemDurabilityPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemDurabilityPercentage")); }
    BrzCampoPonteiro bUseBPGetItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemIcon")); }
    BrzCampoPonteiro bUseBPGetItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemName")); }
    BrzCampoPonteiro bUseBPGetItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemNetInfo")); }
    BrzCampoPonteiro bUseBPGetItemStatStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetItemStatString")); }
    BrzCampoPonteiro bUseBPGetMaxAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPGetMaxAmmo")); }
    BrzCampoPonteiro bUseBPInitFromItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPInitFromItemNetInfo")); }
    BrzCampoPonteiro bUseBPInitItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPInitItemColors")); }
    BrzCampoPonteiro bUseBPInitializeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPInitializeItem")); }
    BrzCampoPonteiro bUseBPIsValidForCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPIsValidForCrafting")); }
    BrzCampoPonteiro bUseBPNotifyDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPNotifyDropped")); }
    BrzCampoPonteiro bUseBPNotifyItemRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPNotifyItemRefreshed")); }
    BrzCampoPonteiro bUseBPOnCropPhaseIncreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOnCropPhaseIncrease")); }
    BrzCampoPonteiro bUseBPOnItemConsumedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOnItemConsumed")); }
    BrzCampoPonteiro bUseBPOnUpdatedItemContextMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOnUpdatedItemContextMenu")); }
    BrzCampoPonteiro bUseBPOverrideAnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideAnimMontage")); }
    BrzCampoPonteiro bUseBPOverrideCraftingConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideCraftingConsumption")); }
    BrzCampoPonteiro bUseBPOverrideDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideDeathAnim")); }
    BrzCampoPonteiro bUseBPOverrideHoldItemSlotActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideHoldItemSlotAction")); }
    BrzCampoPonteiro bUseBPOverrideInheritedStatWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideInheritedStatWeight")); }
    BrzCampoPonteiro bUseBPOverrideProjectileTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideProjectileType")); }
    BrzCampoPonteiro bUseBPOverrideRemainingCooldownTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideRemainingCooldownTime")); }
    BrzCampoPonteiro bUseBPOverrideSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPOverrideSound")); }
    BrzCampoPonteiro bUseBPPostAddBuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPPostAddBuffToGiveOwnerCharacter")); }
    BrzCampoPonteiro bUseBPPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPPreventUpload")); }
    BrzCampoPonteiro bUseBPPreventUseOntoItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPPreventUseOntoItem")); }
    BrzCampoPonteiro bUseBPPrimalDinoCharacterConsumedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPPrimalDinoCharacterConsumedItem")); }
    BrzCampoPonteiro bUseBPRemovedFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPRemovedFromInventory")); }
    BrzCampoPonteiro bUseBPSetupHUDIconMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBPSetupHUDIconMaterial")); }
    BrzCampoPonteiro bUseBlueprintEquippedNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseBlueprintEquippedNotifications")); }
    BrzCampoPonteiro bUseEquippedItemBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseEquippedItemBlueprintTick")); }
    BrzCampoPonteiro bUseEquippedItemNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseEquippedItemNativeTick")); }
    BrzCampoPonteiro bUseInWaterRestoreDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseInWaterRestoreDurability")); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_DragonHorn.bUseItemColor" }; }
    BrzCampoPonteiro bUseItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseItemColors")); }
    BrzCampoPonteiro bUseItemDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseItemDurability")); }
    BrzCampoPonteiro bUseItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseItemStats")); }
    BrzCampoPonteiro bUseMultiSaddleMeshOverrideMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseMultiSaddleMeshOverrideMap")); }
    BrzCampoPonteiro bUseOnItemSetIndexAsDestinationItemCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseOnItemSetIndexAsDestinationItemCustomData")); }
    BrzCampoPonteiro bUseOnItemWeaponRemoveClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseOnItemWeaponRemoveClipAmmo")); }
    BrzCampoPonteiro bUseOntoItemRequiresImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseOntoItemRequiresImmobilization")); }
    BrzCampoPonteiro bUseScaleStatEffectivenessByDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseScaleStatEffectivenessByDurability")); }
    BrzCampoPonteiro bUseSkinDroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSkinDroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro bUseSkinnedBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSkinnedBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseSlottedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSlottedTick")); }
    BrzCampoPonteiro bUseSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSpawnActor")); }
    BrzCampoPonteiro bUseSpawnActorRelativeLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSpawnActorRelativeLoc")); }
    BrzCampoPonteiro bUseSpawnActorTakeOwnerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSpawnActorTakeOwnerRotation")); }
    BrzCampoPonteiro bUseSpawnActorWhenRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUseSpawnActorWhenRiding")); }
    BrzCampoPonteiro bUsesCreationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUsesCreationTime")); }
    BrzCampoPonteiro bUsingRequiresStandingOnSolidGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bUsingRequiresStandingOnSolidGround")); }
    BrzCampoPonteiro bValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_DragonHorn.bValidCraftingResource")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_DRAGONHORN_H
