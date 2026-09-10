// ==========================================================================
//  UPrimalItem_Radio — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEM_RADIO_H
#define BRZ_SDK_JOGO_UPRIMALITEM_RADIO_H

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


struct UPrimalItem_Radio
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItem_Radio"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.GetMiscInfoFontScale()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMiscInfoFontScale() const
    {
        return NativeCall<void*>(this, "UPrimalItem_Radio.GetMiscInfoFontScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.GetMiscInfoString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMiscInfoString() const
    {
        return NativeCall<void*>(this, "UPrimalItem_Radio.GetMiscInfoString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.InitializeItem(bool,UWorld*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=38]]
    BrzPonteiro InitializeItem(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalItem_Radio.InitializeItem(bool,UWorld*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.IsRadioActive()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsRadioActive() const
    {
        return NativeCall<void*>(this, "UPrimalItem_Radio.IsRadioActive()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.LocalUse(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalUse(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItem_Radio.LocalUse(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalItem_Radio.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ProcessEditText(void* a0, FString* a1, bool a2) const
    { return ProcessEditText(a0, *a1, a2); }

    UTexture2D*& AccessoryActivatedIconOverrideField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Radio.AccessoryActivatedIconOverride"); }
    BrzCampoPonteiro AccessoryActivatedIconOverrideJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AccessoryActivatedIconOverrideJIT")); }
    unsigned char& AccessorySlotOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.AccessorySlotOverride"); }
    TArray<void*>& ActorClassAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.ActorClassAttachmentInfos"); }
    float& AddDinoTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.AddDinoTargetingRange"); }
    TArray<void*>& AllowClassesToBeUsedAsParentSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.AllowClassesToBeUsedAsParentSkin"); }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters()
    { return { (void*)this, "AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters" }; }
    UTexture2D*& AlternateItemIconBelowDurabilityField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Radio.AlternateItemIconBelowDurability"); }
    BrzCampoPonteiro AlternateItemIconBelowDurabilityJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AlternateItemIconBelowDurabilityJIT")); }
    float& AlternateItemIconBelowDurabilityValueField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.AlternateItemIconBelowDurabilityValue"); }
    BrzCampoPonteiro AlternativeCosmeticBaseForClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AlternativeCosmeticBaseForClasses")); }
    BrzCampoPonteiro AmmoSupportDragOntoWeaponItemWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AmmoSupportDragOntoWeaponItemWeaponTemplate")); }
    unsigned int& AssociatedDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Radio.AssociatedDinoID1"); }
    unsigned int& AssociatedDinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Radio.AssociatedDinoID2"); }
    TWeakObjectPtr<void>& AssociatedWeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Radio.AssociatedWeapon"); }
    float& AutoDecreaseDurabilityAmountPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.AutoDecreaseDurabilityAmountPerInterval"); }
    TArray<void*>& BaseCraftingResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.BaseCraftingResourceRequirements"); }
    float& BaseCraftingXPField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.BaseCraftingXP"); }
    float& BaseItemWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.BaseItemWeight"); }
    UTexture2D*& BlueprintBackgroundOverrideTextureField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Radio.BlueprintBackgroundOverrideTexture"); }
    BrzCampoPonteiro BlueprintBackgroundOverrideTextureJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.BlueprintBackgroundOverrideTextureJIT")); }
    float& BlueprintTimeToCraftField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.BlueprintTimeToCraft"); }
    UTexture2D*& BrokenIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Radio.BrokenIcon"); }
    BrzCampoPonteiro BrokenIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.BrokenIconJIT")); }
    BrzCampoPonteiro BuffToGiveOwnerWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.BuffToGiveOwnerWhenEquipped")); }
    FString& BuffToGiveOwnerWhenEquipped_BlueprintPathField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.BuffToGiveOwnerWhenEquipped_BlueprintPath"); }
    TArray<void*>& CachedStructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CachedStructuresToBuild"); }
    BrzCampoPonteiro CostumeDinoSaddleOverrideMeshMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.CostumeDinoSaddleOverrideMeshMap")); }
    unsigned short& CraftQueueField() const
    { return *GetNativePointerField<unsigned short*>(this, "UPrimalItem_Radio.CraftQueue"); }
    float& CraftedSkillBonusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.CraftedSkillBonus"); }
    FString& CrafterCharacterNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.CrafterCharacterName"); }
    FString& CrafterTribeNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.CrafterTribeName"); }
    TArray<void*>& CraftingAdditionalItemsToGiveField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CraftingAdditionalItemsToGive"); }
    TArray<void*>& CraftingRequiresInventoryComponentField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CraftingRequiresInventoryComponent"); }
    float& CraftingSkillField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.CraftingSkill"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.CreationTime"); }
    int& CropMaxFruitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.CropMaxFruits"); }
    UTexture2D*& CustomBrokenOverlayIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "UPrimalItem_Radio.CustomBrokenOverlayIcon"); }
    BrzCampoPonteiro CustomBrokenOverlayIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.CustomBrokenOverlayIconJIT")); }
    TArray<void*>& CustomColorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CustomColors"); }
    BrzCampoPonteiro CustomCosmeticAttachmentZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.CustomCosmeticAttachmentZOffset")); }
    BrzCampoPonteiro CustomCosmeticAuthVarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.CustomCosmeticAuthVars")); }
    long long& CustomCosmeticModSkinReplacementIDField() const
    { return *GetNativePointerField<long long*>(this, "UPrimalItem_Radio.CustomCosmeticModSkinReplacementID"); }
    BrzCampoPonteiro CustomCosmeticModSkinReplacementOriginalClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.CustomCosmeticModSkinReplacementOriginalClass")); }
    int& CustomCosmeticModSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.CustomCosmeticModSkinVariantID"); }
    int& CustomFlagsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.CustomFlags"); }
    TArray<void*>& CustomItemDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CustomItemDatas"); }
    FString& CustomItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.CustomItemDescription"); }
    int& CustomItemIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.CustomItemID"); }
    FString& CustomItemNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.CustomItemName"); }
    TArray<void*>& CustomResourceRequirementsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.CustomResourceRequirements"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItem_Radio.CustomTag"); }
    TArray<void*>& DefaultFolderPathsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.DefaultFolderPaths"); }
    FString& DescriptiveNameBaseField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.DescriptiveNameBase"); }
    BrzCampoPonteiro DisabledItemsOnDataListNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.DisabledItemsOnDataListName")); }
    TWeakObjectPtr<void>& DroppedItemActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Radio.DroppedItemActor"); }
    BrzCampoPonteiro DroppedItemCenterLocationOffsetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.DroppedItemCenterLocationOffsetOverride")); }
    float& DroppedItemLifeSpanOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.DroppedItemLifeSpanOverride"); }
    BrzCampoPonteiro DroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.DroppedMeshOverrideScale3D")); }
    FString& DurabilityStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.DurabilityString"); }
    FString& DurabilityStringShortField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.DurabilityStringShort"); }
    float& EggAlertDinosAggroRadiusField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggAlertDinosAggroRadius"); }
    FieldArray<unsigned char> EggColorSetIndicesField() const
    { return { (void*)this, "UPrimalItem_Radio.EggColorSetIndices" }; }
    TArray<void*>& EggDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EggDinoAncestors"); }
    TArray<void*>& EggDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EggDinoAncestorsMale"); }
    BrzCampoPonteiro EggDinoClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.EggDinoClassToSpawn")); }
    BrzCampoPonteiro EggDinoGeneTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.EggDinoGeneTraits")); }
    float& EggDroppedInvalidTempLoseItemRatingSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggDroppedInvalidTempLoseItemRatingSpeed"); }
    int& EggGenderOverrideField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.EggGenderOverride"); }
    float& EggLoseDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggLoseDurabilityPerSecond"); }
    float& EggMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggMaxTemperature"); }
    float& EggMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggMinTemperature"); }
    int& EggNewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.EggNewMutationCount"); }
    FieldArray<unsigned char> EggNumberMutationsAppliedField() const
    { return { (void*)this, "UPrimalItem_Radio.EggNumberMutationsApplied" }; }
    FieldArray<unsigned char> EggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "UPrimalItem_Radio.EggNumberOfLevelUpPointsApplied" }; }
    int& EggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.EggRandomMutationsFemale"); }
    int& EggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.EggRandomMutationsMale"); }
    float& EggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.EggTamedIneffectivenessModifier"); }
    TArray<void*>& EquipRequiresExplicitOwnerClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EquipRequiresExplicitOwnerClasses"); }
    TArray<void*>& EquipRequiresExplicitOwnerTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EquipRequiresExplicitOwnerTags"); }
    TArray<void*>& EquippedHideOtherEquipmentAttachTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EquippedHideOtherEquipmentAttachTypes"); }
    TArray<void*>& EquippingRequiresEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.EquippingRequiresEngrams"); }
    unsigned int& ExpirationTimeUTCField() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalItem_Radio.ExpirationTimeUTC"); }
    float& ExtraEggLoseDurabilityPerSecondMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.ExtraEggLoseDurabilityPerSecondMultiplier"); }
    UMaterialInstanceDynamic*& HUDIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_Radio.HUDIconMaterial"); }
    FieldArray<short> ItemColorIDField() const
    { return { (void*)this, "UPrimalItem_Radio.ItemColorID" }; }
    BrzCampoPonteiro ItemCustomClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemCustomClass")); }
    int& ItemCustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.ItemCustomData"); }
    FString& ItemDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItem_Radio.ItemDescription"); }
    float& ItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.ItemDurability"); }
    FItemNetID& ItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "UPrimalItem_Radio.ItemID"); }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemIcon")); }
    BrzCampoPonteiro ItemIconJITField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemIconJIT")); }
    UMaterialInstanceDynamic*& ItemIconMaterialField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "UPrimalItem_Radio.ItemIconMaterial"); }
    UMaterialInterface*& ItemIconMaterialParentField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_Radio.ItemIconMaterialParent"); }
    unsigned char& ItemQualityIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.ItemQualityIndex"); }
    int& ItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.ItemQuantity"); }
    float& ItemRatingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.ItemRating"); }
    BrzCampoPonteiro ItemRegistryTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemRegistryTags")); }
    TArray<void*>& ItemSkinAddItemAttachmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.ItemSkinAddItemAttachments"); }
    TArray<void*>& ItemSkinPreventOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.ItemSkinPreventOnItemClasses"); }
    BrzCampoPonteiro ItemSkinPreventOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemSkinPreventOnItemClassesSoft")); }
    BrzCampoPonteiro ItemSkinTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemSkinTemplate")); }
    int& ItemSkinTemplateIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.ItemSkinTemplateIndex"); }
    TArray<void*>& ItemSkinUseOnItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.ItemSkinUseOnItemClasses"); }
    BrzCampoPonteiro ItemSkinUseOnItemClassesSoftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.ItemSkinUseOnItemClassesSoft")); }
    float& ItemStatClampsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.ItemStatClampsMultiplier"); }
    FieldArray<FItemStatInfo> ItemStatInfosField() const
    { return { (void*)this, "UPrimalItem_Radio.ItemStatInfos" }; }
    FieldArray<unsigned short> ItemStatValuesField() const
    { return { (void*)this, "UPrimalItem_Radio.ItemStatValues" }; }
    unsigned char& ItemVersionField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.ItemVersion"); }
    double& LastAutoDurabilityDecreaseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.LastAutoDurabilityDecreaseTime"); }
    double& LastEquippedReduceDurabilityTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.LastEquippedReduceDurabilityTime"); }
    int& LastMarketIDField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.LastMarketID"); }
    TWeakObjectPtr<void>& LastOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Radio.LastOwnerPlayer"); }
    float& LastRepairSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.LastRepairSpeedMultiplier"); }
    int& LastSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.LastSlotIndex"); }
    double& LastSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.LastSpoilingTime"); }
    double& LastTimeToShowInfoField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.LastTimeToShowInfo"); }
    double& LastUseTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.LastUseTime"); }
    int& LastValidItemVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.LastValidItemVersion"); }
    float& MaxDurabiltiyOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.MaxDurabiltiyOverride"); }
    int& MaxItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.MaxItemQuantity"); }
    int& MaxNumItemTraitsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.MaxNumItemTraits"); }
    float& MinItemDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.MinItemDurability"); }
    unsigned char& MyConsumableTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.MyConsumableType"); }
    unsigned char& MyEquipmentTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.MyEquipmentType"); }
    UPrimalItem*& MyItemSkinField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_Radio.MyItemSkin"); }
    BrzCampoPonteiro MyItemTraitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.MyItemTraits")); }
    unsigned char& MyItemTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItem_Radio.MyItemType"); }
    UMaterialInterface*& NetDroppedMeshMaterialOverrideField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "UPrimalItem_Radio.NetDroppedMeshMaterialOverride"); }
    UStaticMesh*& NetDroppedMeshOverrideField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "UPrimalItem_Radio.NetDroppedMeshOverride"); }
    BrzCampoPonteiro NetDroppedMeshOverrideScale3DField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.NetDroppedMeshOverrideScale3D")); }
    float& NewItemDurabilityOverrideField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.NewItemDurabilityOverride"); }
    TWeakObjectPtr<void>& NewOwnerPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Radio.NewOwnerPlayer"); }
    double& NextCraftCompletionTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.NextCraftCompletionTime"); }
    float& NextRepairPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.NextRepairPercentage"); }
    double& NextSpoilingTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalItem_Radio.NextSpoilingTime"); }
    TArray<void*>& OnlyUsableOnSpecificClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.OnlyUsableOnSpecificClasses"); }
    BrzCampoPonteiro OriginalItemDropLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.OriginalItemDropLocation")); }
    float& OverrideCombatMusicPercentageChanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.OverrideCombatMusicPercentageChance"); }
    BrzCampoPonteiro OverrideCombatMusicSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.OverrideCombatMusicSound")); }
    BrzCampoPonteiro OverrideDinoRiderAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.OverrideDinoRiderAnimation")); }
    BrzCampoPonteiro OverrideDinoRiderMoveAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.OverrideDinoRiderMoveAnimation")); }
    TWeakObjectPtr<void>& OwnerInventoryField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalItem_Radio.OwnerInventory"); }
    BrzCampoPonteiro PendingSkinRefundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.PendingSkinRefund")); }
    FieldArray<short> PreSkinItemColorIDField() const
    { return { (void*)this, "UPrimalItem_Radio.PreSkinItemColorID" }; }
    BrzCampoPonteiro RandomColorSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.RandomColorSet")); }
    float& ResourceRarityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.ResourceRarity"); }
    TArray<void*>& SaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.SaddlePassengerSeats"); }
    float& SavedDurabilityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.SavedDurability"); }
    BrzCampoPonteiro SetFrequencySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.SetFrequencySound")); }
    TArray<void*>& SkinWeaponTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.SkinWeaponTemplates"); }
    TArray<void*>& SkinWeaponTemplatesForAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.SkinWeaponTemplatesForAmmo"); }
    UPrimalItem*& SkinnedOntoItemField() const
    { return *GetNativePointerField<UPrimalItem**>(this, "UPrimalItem_Radio.SkinnedOntoItem"); }
    int& SlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.SlotIndex"); }
    int& SpoilingItemQuantityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.SpoilingItemQuantity"); }
    float& SpoilingTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.SpoilingTime"); }
    TArray<void*>& SteamItemUserIDsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.SteamItemUserIDs"); }
    BrzCampoPonteiro StructureToBuildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.StructureToBuild")); }
    int& StructureToBuildIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.StructureToBuildIndex"); }
    TArray<void*>& StructuresToBuildField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.StructuresToBuild"); }
    TArray<void*>& SupportAmmoItemForWeaponSkinField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.SupportAmmoItemForWeaponSkin"); }
    BrzCampoPonteiro SupportDragOntoItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.SupportDragOntoItemClass")); }
    int& TempSlotIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.TempSlotIndex"); }
    TArray<void*>& UseItemAddCharacterStatusValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.UseItemAddCharacterStatusValues"); }
    TArray<void*>& UseRequiresOwnerActorClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.UseRequiresOwnerActorClasses"); }
    int& WeaponClipAmmoField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItem_Radio.WeaponClipAmmo"); }
    float& WeaponFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItem_Radio.WeaponFrequency"); }
    BrzCampoPonteiro WeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.WeaponTemplate")); }
    TArray<void*>& WheelItemsAmmoField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalItem_Radio.WheelItemsAmmo"); }
    BrzCampoPonteiro WidgetCustomBrokenOverlayStyleBrushField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.WidgetCustomBrokenOverlayStyleBrush")); }
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
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_Radio.bNetInfoFromClient"); }
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
    { return { (void*)this, "UPrimalItem_Radio.bUseItemColor" }; }
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
    BitFieldValue<bool, unsigned __int32> bAllowVoice()
    { return { (void*)this, "bAllowVoice" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_RADIO_H
