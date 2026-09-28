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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro InitializeItem(bool a0, void* a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UPrimalItem_Radio.InitializeItem(bool,UWorld*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItem_Radio.IsRadioActive()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AllowToggleDisableCharacterCustomizationProportionsForSkin_BoneModifiers")); }
    BrzCampoPonteiro AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.AllowToggleDisableCharacterCustomizationProportionsForSkin_MaterialParameters")); }
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
    BrzCampoPonteiro bAllowCraftingWithStarterAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowCraftingWithStarterAmmo")); }
    BrzCampoPonteiro bAllowCustomColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowCustomColors")); }
    BrzCampoPonteiro bAllowDefaultCharacterAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowDefaultCharacterAttachment")); }
    BrzCampoPonteiro bAllowEquppingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowEquppingItem")); }
    BrzCampoPonteiro bAllowInvalidItemVersionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowInvalidItemVersion")); }
    BrzCampoPonteiro bAllowInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowInventoryItem")); }
    BrzCampoPonteiro bAllowOverrideItemAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowOverrideItemAutoDecreaseDurability")); }
    BrzCampoPonteiro bAllowRemoteUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowRemoteUseInInventory")); }
    BrzCampoPonteiro bAllowRemovalFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowRemovalFromInventory")); }
    BrzCampoPonteiro bAllowRemoveFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowRemoveFromSteamInventory")); }
    BrzCampoPonteiro bAllowRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowRepair")); }
    BrzCampoPonteiro bAllowUseIgnoreMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowUseIgnoreMovementMode")); }
    BrzCampoPonteiro bAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowUseInInventory")); }
    BrzCampoPonteiro bAllowUseWhileRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowUseWhileRiding")); }
    BrzCampoPonteiro bAllowVoiceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowVoice")); }
    BrzCampoPonteiro bAllowWakingTameZeroAffinityEffectivenessMultiField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAllowWakingTameZeroAffinityEffectivenessMulti")); }
    BrzCampoPonteiro bAlwaysLearnedEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAlwaysLearnedEngram")); }
    BrzCampoPonteiro bAlwaysTriggerTributeDownloadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAlwaysTriggerTributeDownloaded")); }
    BrzCampoPonteiro bAppendPrimaryColorToNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAppendPrimaryColorToName")); }
    BrzCampoPonteiro bAutoCraftBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAutoCraftBlueprint")); }
    BrzCampoPonteiro bAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bAutoTameSpawnedActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bAutoTameSpawnedActor")); }
    BrzCampoPonteiro bBPAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bBPAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bBPAllowRemoteRemoveFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bBPAllowRemoteRemoveFromInventory")); }
    BrzCampoPonteiro bBPCanUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bBPCanUse")); }
    BrzCampoPonteiro bBPInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bBPInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bCanBeArkTributeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCanBeArkTributeItem")); }
    BrzCampoPonteiro bCanBeBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCanBeBlueprint")); }
    BrzCampoPonteiro bCanBuildStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCanBuildStructures")); }
    BrzCampoPonteiro bCanSlotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCanSlot")); }
    BrzCampoPonteiro bCanUseSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCanUseSwimming")); }
    BrzCampoPonteiro bCensoredItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCensoredItemSkin")); }
    BrzCampoPonteiro bCheckBPAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCheckBPAllowCrafting")); }
    BrzCampoPonteiro bClearSkinOnInventoryRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bClearSkinOnInventoryRemoval")); }
    BrzCampoPonteiro bConfirmBeforeUsingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bConfirmBeforeUsing")); }
    BrzCampoPonteiro bConsumeItemOnUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bConsumeItemOnUse")); }
    BrzCampoPonteiro bCopyCustomDescriptionIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCopyCustomDescriptionIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyDurabilityIntoSpoiledItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCopyDurabilityIntoSpoiledItem")); }
    BrzCampoPonteiro bCopyItemDurabilityFromCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCopyItemDurabilityFromCraftingResource")); }
    BrzCampoPonteiro bCostumeHideSaddleMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCostumeHideSaddleMesh")); }
    BrzCampoPonteiro bCraftDontActuallyGiveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCraftDontActuallyGiveItem")); }
    BrzCampoPonteiro bCraftedRequestCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCraftedRequestCustomItemDescription")); }
    BrzCampoPonteiro bCustomBrokenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCustomBrokenIcon")); }
    BrzCampoPonteiro bCustomBrokenOverlayIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bCustomBrokenOverlayIcon")); }
    BrzCampoPonteiro bDeferWeaponBeginPlayToAssociatedItemSetTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDeferWeaponBeginPlayToAssociatedItemSetTime")); }
    BrzCampoPonteiro bDeprecateBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDeprecateBlueprint")); }
    BrzCampoPonteiro bDeprecateItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDeprecateItem")); }
    BrzCampoPonteiro bDestroyBrokenItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDestroyBrokenItem")); }
    BrzCampoPonteiro bDisableAutoDecreaseDurabilityOverTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDisableAutoDecreaseDurabilityOverTime")); }
    BrzCampoPonteiro bDisableItemUITooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDisableItemUITooltip")); }
    BrzCampoPonteiro bDivideTimeToCraftByGlobalCropGrowthSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDivideTimeToCraftByGlobalCropGrowthSpeed")); }
    BrzCampoPonteiro bDoApplyOriginalColorsWhenUnskinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDoApplyOriginalColorsWhenUnskinned")); }
    BrzCampoPonteiro bDontCountItemForUploadRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDontCountItemForUploadRestrictions")); }
    BrzCampoPonteiro bDontRemoveOnEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDontRemoveOnEquip")); }
    BrzCampoPonteiro bDontResetAttachmentIfNotUpdatingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDontResetAttachmentIfNotUpdatingItem")); }
    BrzCampoPonteiro bDontScaleSnapshotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDontScaleSnapshot")); }
    BrzCampoPonteiro bDontUseDurabilityDamageOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDontUseDurabilityDamageOverlay")); }
    BrzCampoPonteiro bDragClearDyedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDragClearDyedItem")); }
    BrzCampoPonteiro bDroppedItemAllowDinoPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDroppedItemAllowDinoPickup")); }
    BrzCampoPonteiro bDurabilityRequirementIgnoredInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bDurabilityRequirementIgnoredInWater")); }
    BrzCampoPonteiro bEggSpoilsWhenFertilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEggSpoilsWhenFertilized")); }
    BrzCampoPonteiro bEquipAddTekExtendedInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipAddTekExtendedInfo")); }
    BrzCampoPonteiro bEquipPreventsCharacterSkinsCosmeticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipPreventsCharacterSkinsCosmetics")); }
    BrzCampoPonteiro bEquipRequiresDLC_AberrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipRequiresDLC_Aberration")); }
    BrzCampoPonteiro bEquipRequiresDLC_ExtinctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipRequiresDLC_Extinction")); }
    BrzCampoPonteiro bEquipRequiresDLC_GenesisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipRequiresDLC_Genesis")); }
    BrzCampoPonteiro bEquipRequiresDLC_ScorchedEarthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipRequiresDLC_ScorchedEarth")); }
    BrzCampoPonteiro bEquipmentForceHairHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipmentForceHairHiding")); }
    BrzCampoPonteiro bEquipmentForceHideAllHairComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipmentForceHideAllHairComponents")); }
    BrzCampoPonteiro bEquipmentHatHideItemEyeHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipmentHatHideItemEyeHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemFacialHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipmentHatHideItemFacialHair")); }
    BrzCampoPonteiro bEquipmentHatHideItemHeadHairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquipmentHatHideItemHeadHair")); }
    BrzCampoPonteiro bEquippedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bEquippedItem")); }
    BrzCampoPonteiro bForceAllowCustomItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceAllowCustomItemDescription")); }
    BrzCampoPonteiro bForceAllowDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceAllowDragging")); }
    BrzCampoPonteiro bForceAllowGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceAllowGrinding")); }
    BrzCampoPonteiro bForceAllowRemovalWhenDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceAllowRemovalWhenDead")); }
    BrzCampoPonteiro bForceAllowSkinColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceAllowSkinColorization")); }
    BrzCampoPonteiro bForceDediAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceDediAttachments")); }
    BrzCampoPonteiro bForceDisplayInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceDisplayInInventory")); }
    BrzCampoPonteiro bForceDropDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceDropDestruction")); }
    BrzCampoPonteiro bForceHideAllDefaultPawnAttachmentsWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceHideAllDefaultPawnAttachmentsWhenEquipped")); }
    BrzCampoPonteiro bForceNoLearnedEngramRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceNoLearnedEngramRequirement")); }
    BrzCampoPonteiro bForceNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceNotificationItemCombatMode")); }
    BrzCampoPonteiro bForcePreventConsumableWhileHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForcePreventConsumableWhileHandcuffed")); }
    BrzCampoPonteiro bForcePreventGrindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForcePreventGrinding")); }
    BrzCampoPonteiro bForceQualityColorOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceQualityColorOverlay")); }
    BrzCampoPonteiro bForceRequiresExplicitOwnerChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceRequiresExplicitOwnerChecks")); }
    BrzCampoPonteiro bForceUseItemAddCharacterStatsOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bForceUseItemAddCharacterStatsOnDinos")); }
    BrzCampoPonteiro bFromSteamInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bFromSteamInventory")); }
    BrzCampoPonteiro bGiveItemWhenUsedCopyItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bGiveItemWhenUsedCopyItemStats")); }
    BrzCampoPonteiro bHideCustomDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bHideCustomDescription")); }
    BrzCampoPonteiro bHideFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bHideFromInventoryDisplay")); }
    BrzCampoPonteiro bHideFromRemoteInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bHideFromRemoteInventoryDisplay")); }
    BrzCampoPonteiro bHideMoreOptionsIfNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bHideMoreOptionsIfNonRemovable")); }
    BrzCampoPonteiro bIgnoreDrawingItemButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIgnoreDrawingItemButtonIcon")); }
    BrzCampoPonteiro bIgnoreMinimumUseIntervalForDinoAutoEatingFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIgnoreMinimumUseIntervalForDinoAutoEatingFood")); }
    BrzCampoPonteiro bIsAbstractItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsAbstractItem")); }
    BrzCampoPonteiro bIsBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsBlueprint")); }
    BrzCampoPonteiro bIsCharacterSkinOrCosmeticField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsCharacterSkinOrCosmetic")); }
    BrzCampoPonteiro bIsClubArkRewardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsClubArkReward")); }
    BrzCampoPonteiro bIsClubArkTradeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsClubArkTrade")); }
    BrzCampoPonteiro bIsCookingIngredientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsCookingIngredient")); }
    BrzCampoPonteiro bIsCustomRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsCustomRecipe")); }
    BrzCampoPonteiro bIsDescriptionOnlyItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsDescriptionOnlyItem")); }
    BrzCampoPonteiro bIsDinoAutoHealingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsDinoAutoHealingItem")); }
    BrzCampoPonteiro bIsEggField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsEgg")); }
    BrzCampoPonteiro bIsEmbryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsEmbryo")); }
    BrzCampoPonteiro bIsEngramField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsEngram")); }
    BrzCampoPonteiro bIsFoodRecipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsFoodRecipe")); }
    BrzCampoPonteiro bIsFromAllClustersInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsFromAllClustersInventory")); }
    BrzCampoPonteiro bIsGhostItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsGhostItemSkin")); }
    BrzCampoPonteiro bIsInitialItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsInitialItem")); }
    BrzCampoPonteiro bIsItemAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsItemAccessory")); }
    BrzCampoPonteiro bIsItemSkinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsItemSkin")); }
    BrzCampoPonteiro bIsMisssionItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsMisssionItem")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bIsRepairing")); }
    BrzCampoPonteiro bItemIsUsableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemIsUsable")); }
    BrzCampoPonteiro bItemSkinAllowEquippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinAllowEquipping")); }
    BrzCampoPonteiro bItemSkinIgnoreSkinIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinIgnoreSkinIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinKeepOriginalIcon")); }
    BrzCampoPonteiro bItemSkinKeepOriginalItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinKeepOriginalItemName")); }
    BrzCampoPonteiro bItemSkinKeepOriginalWeaponTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinKeepOriginalWeaponTemplate")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinReceiveOwnerEquippedBlueprintEvents")); }
    BrzCampoPonteiro bItemSkinReceiveOwnerEquippedBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bItemSkinReceiveOwnerEquippedBlueprintTick")); }
    BrzCampoPonteiro bMergeCustomDataFromCraftingResourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bMergeCustomDataFromCraftingResources")); }
    BrzCampoPonteiro bMuteExtraEquipmentSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bMuteExtraEquipmentSounds")); }
    BrzCampoPonteiro bNameForceNoStatQualityRankField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bNameForceNoStatQualityRank")); }
    bool& bNetInfoFromClientField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalItem_Radio.bNetInfoFromClient"); }
    BrzCampoPonteiro bNewWeaponAutoFillClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bNewWeaponAutoFillClipAmmo")); }
    BrzCampoPonteiro bNonBlockingShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bNonBlockingShield")); }
    BrzCampoPonteiro bOnlyCanUseInFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bOnlyCanUseInFalling")); }
    BrzCampoPonteiro bOnlyCanUseInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bOnlyCanUseInWater")); }
    BrzCampoPonteiro bOnlyEquipWhenUnconsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bOnlyEquipWhenUnconscious")); }
    BrzCampoPonteiro bOverrideExactClassCraftingRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bOverrideExactClassCraftingRequirement")); }
    BrzCampoPonteiro bOverrideRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bOverrideRepairingRequirements")); }
    BrzCampoPonteiro bPickupEggAlertsDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPickupEggAlertsDinos")); }
    BrzCampoPonteiro bPickupEggForceAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPickupEggForceAggro")); }
    BrzCampoPonteiro bPreventArmorDurabiltyConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventArmorDurabiltyConsumption")); }
    BrzCampoPonteiro bPreventCheatGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventCheatGive")); }
    BrzCampoPonteiro bPreventColdStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventColdStorage")); }
    BrzCampoPonteiro bPreventConsumeItemOnDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventConsumeItemOnDrag")); }
    BrzCampoPonteiro bPreventCraftingResourceAtFullDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventCraftingResourceAtFullDurability")); }
    BrzCampoPonteiro bPreventDepositDroppingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventDepositDropping")); }
    BrzCampoPonteiro bPreventDinoAutoConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventDinoAutoConsume")); }
    BrzCampoPonteiro bPreventDragOntoOtherItemIfSameCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventDragOntoOtherItemIfSameCustomData")); }
    BrzCampoPonteiro bPreventEquipOnTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventEquipOnTaxidermyBase")); }
    BrzCampoPonteiro bPreventItemBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventItemBlueprint")); }
    BrzCampoPonteiro bPreventItemSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventItemSkins")); }
    BrzCampoPonteiro bPreventModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventModifyArmorValue")); }
    BrzCampoPonteiro bPreventNativeItemBrokenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventNativeItemBroken")); }
    BrzCampoPonteiro bPreventNotificationItemCombatModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventNotificationItemCombatMode")); }
    BrzCampoPonteiro bPreventOnFullEquippedSuitHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventOnFullEquippedSuitHUD")); }
    BrzCampoPonteiro bPreventOnSkinTabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventOnSkinTab")); }
    BrzCampoPonteiro bPreventRegularDroppingButStillDropInBulkAndDestructionCachesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventRegularDroppingButStillDropInBulkAndDestructionCaches")); }
    BrzCampoPonteiro bPreventRemovingClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventRemovingClipAmmo")); }
    BrzCampoPonteiro bPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUpload")); }
    BrzCampoPonteiro bPreventUploadingWeaponClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUploadingWeaponClipAmmo")); }
    BrzCampoPonteiro bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUseAndShouldShowDLCPurchaseItemWhenAttemptingToUseIfDLCIsNotOwned")); }
    BrzCampoPonteiro bPreventUseAtTameLimitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUseAtTameLimit")); }
    BrzCampoPonteiro bPreventUseByDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUseByDinos")); }
    BrzCampoPonteiro bPreventUseByHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUseByHumans")); }
    BrzCampoPonteiro bPreventUseWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bPreventUseWhenSleeping")); }
    BrzCampoPonteiro bRefreshOnDyeUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bRefreshOnDyeUsed")); }
    BrzCampoPonteiro bRequiresBobsTallTalesToCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bRequiresBobsTallTalesToCraft")); }
    BrzCampoPonteiro bResourcePreventGivingFromDemolitionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bResourcePreventGivingFromDemolition")); }
    BrzCampoPonteiro bRestoreDurabilityWhenColorizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bRestoreDurabilityWhenColorized")); }
    BrzCampoPonteiro bSaddleUseRegularDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSaddleUseRegularDurability")); }
    BrzCampoPonteiro bScaleOverridenRepairingRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bScaleOverridenRepairingRequirements")); }
    BrzCampoPonteiro bSetCraftingActorToSpawnTeamFromCrafterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSetCraftingActorToSpawnTeamFromCrafter")); }
    BrzCampoPonteiro bShowItemRatingAsPercentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bShowItemRatingAsPercent")); }
    BrzCampoPonteiro bShowTooltipColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bShowTooltipColors")); }
    BrzCampoPonteiro bSkinAddWeightToSkinnedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSkinAddWeightToSkinnedItem")); }
    BrzCampoPonteiro bSkinDisableWhenSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSkinDisableWhenSubmerged")); }
    BrzCampoPonteiro bSkinReequipOnClientBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSkinReequipOnClientBeginPlay")); }
    BrzCampoPonteiro bSkipEquipAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSkipEquipAnimation")); }
    BrzCampoPonteiro bSpawnActorOnWaterOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSpawnActorOnWaterOnly")); }
    BrzCampoPonteiro bSupportDragOntoOtherItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bSupportDragOntoOtherItem")); }
    BrzCampoPonteiro bTekItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bTekItem")); }
    BrzCampoPonteiro bThrowOnHotKeyUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bThrowOnHotKeyUse")); }
    BrzCampoPonteiro bThrowUsesSecondaryActionDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bThrowUsesSecondaryActionDrop")); }
    BrzCampoPonteiro bUnappliedItemSkinIgnoreItemAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUnappliedItemSkinIgnoreItemAttachments")); }
    BrzCampoPonteiro bUnlockAsPersistentProfileItemOnCraftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUnlockAsPersistentProfileItemOnCraft")); }
    BrzCampoPonteiro bUsableWithTekGrenadeLauncherField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUsableWithTekGrenadeLauncher")); }
    BrzCampoPonteiro bUseBPAddedAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPAddedAttachments")); }
    BrzCampoPonteiro bUseBPAddedToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPAddedToInventory")); }
    BrzCampoPonteiro bUseBPAllowAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPAllowAddToInventory")); }
    BrzCampoPonteiro bUseBPCanPlayerUseItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCanPlayerUseItem")); }
    BrzCampoPonteiro bUseBPConsumeProjectileImpactField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPConsumeProjectileImpact")); }
    BrzCampoPonteiro bUseBPCraftedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCrafted")); }
    BrzCampoPonteiro bUseBPCustomAutoDecreaseDurabilityPerIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomAutoDecreaseDurabilityPerInterval")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomDurabilityText")); }
    BrzCampoPonteiro bUseBPCustomDurabilityTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomDurabilityTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomInventoryWidgetTextColor")); }
    BrzCampoPonteiro bUseBPCustomInventoryWidgetTextForBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPCustomInventoryWidgetTextForBlueprint")); }
    BrzCampoPonteiro bUseBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPDrawItemIcon")); }
    BrzCampoPonteiro bUseBPEquippedItemOnXPEarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPEquippedItemOnXPEarning")); }
    BrzCampoPonteiro bUseBPForceAllowRemoteAddToInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPForceAllowRemoteAddToInventory")); }
    BrzCampoPonteiro bUseBPGetItemDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemDescription")); }
    BrzCampoPonteiro bUseBPGetItemDurabilityPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemDurabilityPercentage")); }
    BrzCampoPonteiro bUseBPGetItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemIcon")); }
    BrzCampoPonteiro bUseBPGetItemNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemName")); }
    BrzCampoPonteiro bUseBPGetItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemNetInfo")); }
    BrzCampoPonteiro bUseBPGetItemStatStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetItemStatString")); }
    BrzCampoPonteiro bUseBPGetMaxAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPGetMaxAmmo")); }
    BrzCampoPonteiro bUseBPInitFromItemNetInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPInitFromItemNetInfo")); }
    BrzCampoPonteiro bUseBPInitItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPInitItemColors")); }
    BrzCampoPonteiro bUseBPInitializeItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPInitializeItem")); }
    BrzCampoPonteiro bUseBPIsValidForCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPIsValidForCrafting")); }
    BrzCampoPonteiro bUseBPNotifyDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPNotifyDropped")); }
    BrzCampoPonteiro bUseBPNotifyItemRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPNotifyItemRefreshed")); }
    BrzCampoPonteiro bUseBPOnCropPhaseIncreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOnCropPhaseIncrease")); }
    BrzCampoPonteiro bUseBPOnItemConsumedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOnItemConsumed")); }
    BrzCampoPonteiro bUseBPOnUpdatedItemContextMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOnUpdatedItemContextMenu")); }
    BrzCampoPonteiro bUseBPOverrideAnimMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideAnimMontage")); }
    BrzCampoPonteiro bUseBPOverrideCraftingConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideCraftingConsumption")); }
    BrzCampoPonteiro bUseBPOverrideDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideDeathAnim")); }
    BrzCampoPonteiro bUseBPOverrideHoldItemSlotActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideHoldItemSlotAction")); }
    BrzCampoPonteiro bUseBPOverrideInheritedStatWeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideInheritedStatWeight")); }
    BrzCampoPonteiro bUseBPOverrideProjectileTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideProjectileType")); }
    BrzCampoPonteiro bUseBPOverrideRemainingCooldownTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideRemainingCooldownTime")); }
    BrzCampoPonteiro bUseBPOverrideSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPOverrideSound")); }
    BrzCampoPonteiro bUseBPPostAddBuffToGiveOwnerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPPostAddBuffToGiveOwnerCharacter")); }
    BrzCampoPonteiro bUseBPPreventUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPPreventUpload")); }
    BrzCampoPonteiro bUseBPPreventUseOntoItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPPreventUseOntoItem")); }
    BrzCampoPonteiro bUseBPPrimalDinoCharacterConsumedItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPPrimalDinoCharacterConsumedItem")); }
    BrzCampoPonteiro bUseBPRemovedFromInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPRemovedFromInventory")); }
    BrzCampoPonteiro bUseBPSetupHUDIconMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBPSetupHUDIconMaterial")); }
    BrzCampoPonteiro bUseBlueprintEquippedNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseBlueprintEquippedNotifications")); }
    BrzCampoPonteiro bUseEquippedItemBlueprintTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseEquippedItemBlueprintTick")); }
    BrzCampoPonteiro bUseEquippedItemNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseEquippedItemNativeTick")); }
    BrzCampoPonteiro bUseInWaterRestoreDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseInWaterRestoreDurability")); }
    FieldArray<unsigned char> bUseItemColorField() const
    { return { (void*)this, "UPrimalItem_Radio.bUseItemColor" }; }
    BrzCampoPonteiro bUseItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseItemColors")); }
    BrzCampoPonteiro bUseItemDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseItemDurability")); }
    BrzCampoPonteiro bUseItemStatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseItemStats")); }
    BrzCampoPonteiro bUseMultiSaddleMeshOverrideMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseMultiSaddleMeshOverrideMap")); }
    BrzCampoPonteiro bUseOnItemSetIndexAsDestinationItemCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseOnItemSetIndexAsDestinationItemCustomData")); }
    BrzCampoPonteiro bUseOnItemWeaponRemoveClipAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseOnItemWeaponRemoveClipAmmo")); }
    BrzCampoPonteiro bUseOntoItemRequiresImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseOntoItemRequiresImmobilization")); }
    BrzCampoPonteiro bUseScaleStatEffectivenessByDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseScaleStatEffectivenessByDurability")); }
    BrzCampoPonteiro bUseSkinDroppedItemTemplateForSecondryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSkinDroppedItemTemplateForSecondryAction")); }
    BrzCampoPonteiro bUseSkinnedBPCustomInventoryWidgetTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSkinnedBPCustomInventoryWidgetText")); }
    BrzCampoPonteiro bUseSlottedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSlottedTick")); }
    BrzCampoPonteiro bUseSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSpawnActor")); }
    BrzCampoPonteiro bUseSpawnActorRelativeLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSpawnActorRelativeLoc")); }
    BrzCampoPonteiro bUseSpawnActorTakeOwnerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSpawnActorTakeOwnerRotation")); }
    BrzCampoPonteiro bUseSpawnActorWhenRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUseSpawnActorWhenRiding")); }
    BrzCampoPonteiro bUsesCreationTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUsesCreationTime")); }
    BrzCampoPonteiro bUsingRequiresStandingOnSolidGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bUsingRequiresStandingOnSolidGround")); }
    BrzCampoPonteiro bValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItem_Radio.bValidCraftingResource")); }
    BitFieldValue<bool, unsigned __int32> bAllowVoice()
    { return { (void*)this, "bAllowVoice" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALITEM_RADIO_H
