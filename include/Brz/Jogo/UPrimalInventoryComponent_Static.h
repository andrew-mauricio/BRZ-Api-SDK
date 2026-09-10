// ==========================================================================
//  UPrimalInventoryComponent_Static — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STATIC_H
#define BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STATIC_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerController;
struct FActorComponentTickFunction;
struct FName;
struct UPrimalItem;
struct UTexture2D;


struct UPrimalInventoryComponent_Static
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalInventoryComponent_Static"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    int& AbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.AbsoluteMaxInventoryItems"); }
    int& AbsoluteMaxVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.AbsoluteMaxVanityItems"); }
    TObjectPtr<UTexture2D>& AccessInventoryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalInventoryComponent_Static.AccessInventoryIcon"); }
    int& ActionWheelAccessInventoryPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.ActionWheelAccessInventoryPriority"); }
    float& ActiveInventoryRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.ActiveInventoryRefreshInterval"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.AdditionalItemSets"); }
    TArray<UPrimalItem*>& AllCustomCosmeticItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.AllCustomCosmeticItems"); }
    TArray<UPrimalItem*>& AllDyeColorItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.AllDyeColorItems"); }
    BrzCampoPonteiro AllSortingInputItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.AllSortingInputItems")); }
    TArray<UPrimalItem*>& ArkTributeItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.ArkTributeItems"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.AssetUserData"); }
    TArray<void*>& CheatInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.CheatInventoryItems"); }
    BrzCampoPonteiro CloseInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.CloseInventorySound")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ComponentTags"); }
    float& CraftingItemSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.CraftingItemSpeed"); }
    TArray<UPrimalItem*>& CraftingItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.CraftingItems"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.CreationMethod"); }
    int& CurrentSlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.CurrentSlotMaxMagicNumber"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.CustomData"); }
    TArray<void*>& CustomFolderItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.CustomFolderItems"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalInventoryComponent_Static.CustomTag"); }
    BrzCampoPonteiro DataListEntryWidgetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DataListEntryWidgetOverride")); }
    int& DefaultCraftingQuantityMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.DefaultCraftingQuantityMultiplier"); }
    float& DefaultCraftingRequirementsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.DefaultCraftingRequirementsMultiplier"); }
    TArray<void*>& DefaultEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEngrams"); }
    TArray<void*>& DefaultEngrams2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEngrams2"); }
    TArray<void*>& DefaultEngrams3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEngrams3"); }
    TArray<void*>& DefaultEngrams4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEngrams4"); }
    TArray<void*>& DefaultEquippedItemSkinsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEquippedItemSkins"); }
    TArray<void*>& DefaultEquippedItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultEquippedItems"); }
    TArray<void*>& DefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItems"); }
    TArray<void*>& DefaultInventoryItems2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItems2"); }
    TArray<void*>& DefaultInventoryItems3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItems3"); }
    TArray<void*>& DefaultInventoryItems4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItems4"); }
    BrzCampoPonteiro DefaultInventoryItemsClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItemsClasses")); }
    BrzCampoPonteiro DefaultInventoryItemsClassesNewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItemsClassesNew")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItemsRandomCustomStrings")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DefaultInventoryItemsRandomCustomStringsWeights")); }
    TArray<void*>& DefaultInventoryQualitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultInventoryQualities"); }
    BrzCampoPonteiro DefaultInventoryQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DefaultInventoryQuantities")); }
    TArray<void*>& DefaultSlotItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.DefaultSlotItems"); }
    BrzCampoPonteiro DisabledItemsTEMPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DisabledItemsTEMP")); }
    int& DisplayDefaultItemInventoryCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.DisplayDefaultItemInventoryCount"); }
    BrzCampoPonteiro DropItemRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DropItemRotationOffset")); }
    BrzCampoPonteiro DroppedItemTemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.DroppedItemTemplateOverride")); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.EngramRequirementClassOverride")); }
    TArray<void*>& EquippableItemTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.EquippableItemTypes"); }
    BrzCampoPonteiro EquippableItemTypesHiddenInStatsPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.EquippableItemTypesHiddenInStatsPanel")); }
    TArray<UPrimalItem*>& EquippedItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.EquippedItems"); }
    TArray<void*>& EventItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.EventItems"); }
    BrzCampoPonteiro ExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ExtraItemDisplay")); }
    float& ExtraMaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.ExtraMaxInventoryWeight"); }
    BrzCampoPonteiro ForceAllowCraftingForInventoryComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ForceAllowCraftingForInventoryComponents")); }
    BrzCampoPonteiro ForceAllowItemStackingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ForceAllowItemStackings")); }
    int& ForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.ForceDefaultInventoryRefreshVersion"); }
    int& FreeCraftingModeQuantityValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.FreeCraftingModeQuantityValue"); }
    float& GenerateItemSetsQualityMultiplierMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.GenerateItemSetsQualityMultiplierMax"); }
    float& GenerateItemSetsQualityMultiplierMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.GenerateItemSetsQualityMultiplierMin"); }
    BrzCampoPonteiro GroundDropTraceLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.GroundDropTraceLocationOffset")); }
    BrzCampoPonteiro IgnoreDefaultCraftingQuantityMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.IgnoreDefaultCraftingQuantityMultiplierEngrams")); }
    BrzCampoPonteiro IgnoreDefaultCraftingRequirementsMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.IgnoreDefaultCraftingRequirementsMultiplierEngrams")); }
    int& InvUpdatedFrameField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.InvUpdatedFrame"); }
    TArray<UPrimalItem*>& InventoryItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.InventoryItems"); }
    FString& InventoryNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_Static.InventoryNameOverride"); }
    TArray<void*>& ItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemClassWeightMultipliers"); }
    TArray<void*>& ItemCraftQueueEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemCraftQueueEntries"); }
    TArray<void*>& ItemCraftingConsumptionReplenishmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemCraftingConsumptionReplenishments"); }
    BrzCampoPonteiro ItemCraftingSoundOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ItemCraftingSoundOverride")); }
    BrzCampoPonteiro ItemRemovedBySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ItemRemovedBySound")); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ItemSetsOverride")); }
    TArray<UPrimalItem*>& ItemSlotsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Static.ItemSlots"); }
    TArray<void*>& ItemSpawnActorClassOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemSpawnActorClassOverrides"); }
    TArray<void*>& ItemSpoilingTimeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.ItemSpoilingTimeMultipliers"); }
    double& LastCraftRequestTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Static.LastCraftRequestTime"); }
    double& LastInventoryRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Static.LastInventoryRefreshTime"); }
    double& LastRefreshCheckItemTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Static.LastRefreshCheckItemTime"); }
    BrzCampoPonteiro LastWirelessCraftingCheckLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.LastWirelessCraftingCheckLoc")); }
    BrzCampoPonteiro LinkedToStorageInterfacesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.LinkedToStorageInterfaces")); }
    float& MaxInventoryAccessDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MaxInventoryAccessDistance"); }
    int& MaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.MaxInventoryItems"); }
    float& MaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MaxInventoryWeight"); }
    float& MaxItemCooldownTimeClearField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MaxItemCooldownTimeClear"); }
    int& MaxItemCraftQueueEntriesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.MaxItemCraftQueueEntries"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MaxItemSets"); }
    TArray<void*>& MaxItemTemplateQuantitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.MaxItemTemplateQuantities"); }
    int& MaxNumberOfSortingInputsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.MaxNumberOfSortingInputs"); }
    float& MaxRemoteInventoryViewingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MaxRemoteInventoryViewingDistance"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.MinItemSets"); }
    BrzCampoPonteiro MultiUseButtonStyleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.MultiUseButtonStyleOverrides")); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.NumItemSetsPower"); }
    int& NumSlotsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.NumSlots"); }
    int& NumUndroppableVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.NumUndroppableVanityItems"); }
    int& NumVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.NumVanityItems"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnComponentDeactivated")); }
    BrzCampoPonteiro OnInventoryHotbarItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryHotbarItemUsed")); }
    BrzCampoPonteiro OnInventoryItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryItemAdded")); }
    BrzCampoPonteiro OnInventoryItemCountQtyIncrementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryItemCountQtyIncrement")); }
    BrzCampoPonteiro OnInventoryItemFinishedRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryItemFinishedRepairing")); }
    BrzCampoPonteiro OnInventoryItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryItemRemoved")); }
    BrzCampoPonteiro OnInventoryItemStartedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnInventoryItemStartedCrafting")); }
    BrzCampoPonteiro OnlyAllowCraftingItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OnlyAllowCraftingItemClasses")); }
    BrzCampoPonteiro OpenInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OpenInventorySound")); }
    BrzCampoPonteiro OverrideCraftingFinishedSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.OverrideCraftingFinishedSound")); }
    int& OverrideInventoryDefaultTabField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.OverrideInventoryDefaultTab"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalInventoryComponent_Static.PrimaryComponentTick"); }
    BrzCampoPonteiro RemoteAddItemOnlyAllowItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.RemoteAddItemOnlyAllowItemClasses")); }
    BrzCampoPonteiro RemoteAddItemPreventItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.RemoteAddItemPreventItemClasses")); }
    FString& RemoteInventoryDescriptionStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_Static.RemoteInventoryDescriptionString"); }
    TArray<AShooterPlayerController*>& RemoteViewingInventoryPlayerControllersField() const
    { return *GetNativePointerField<TArray<AShooterPlayerController*>*>(this, "UPrimalInventoryComponent_Static.RemoteViewingInventoryPlayerControllers"); }
    int& SavedForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.SavedForceDefaultInventoryRefreshVersion"); }
    TArray<void*>& SetQuantityValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.SetQuantityValues"); }
    TArray<void*>& SetQuantityWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.SetQuantityWeights"); }
    int& SlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.SlotMaxMagicNumber"); }
    BrzCampoPonteiro SortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.SortingInputAmounts")); }
    BrzCampoPonteiro SortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.SortingInputs")); }
    int& StartingAbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.StartingAbsoluteMaxInventoryItems"); }
    float& StructureCraftingItemSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Static.StructureCraftingItemSpeedModifier"); }
    BrzCampoPonteiro TamedDinoForceConsiderFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.TamedDinoForceConsiderFoodTypes")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalInventoryComponent_Static.TribeGroupInventoryRank"); }
    TArray<void*>& TribeInventoryAccessRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.TribeInventoryAccessRankSelectionIcons"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Static.UCSSerializationIndex"); }
    TArray<void*>& WeaponAsEquipmentAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Static.WeaponAsEquipmentAttachmentInfos"); }
    BrzCampoPonteiro WirelessExchangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.WirelessExchanges")); }
    BitFieldValue<bool, unsigned __int32> bAddMaxInventoryItemsToDefaultItems()
    { return { (void*)this, "bAddMaxInventoryItemsToDefaultItems" }; }
    BitFieldValue<bool, unsigned __int32> bAllDefaultInventoryIsEngrams()
    { return { (void*)this, "bAllDefaultInventoryIsEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAddingToArkTribute()
    { return { (void*)this, "bAllowAddingToArkTribute" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDeactivatedCrafting()
    { return { (void*)this, "bAllowDeactivatedCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowItemStacking()
    { return { (void*)this, "bAllowItemStacking" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteCrafting()
    { return { (void*)this, "bAllowRemoteCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteInventory()
    { return { (void*)this, "bAllowRemoteInventory" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRemoteRepairing()
    { return { (void*)this, "bAllowRemoteRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWorldSettingsInventoryComponentAppends()
    { return { (void*)this, "bAllowWorldSettingsInventoryComponentAppends" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysReplicatePropertyConditional()
    { return { (void*)this, "bAlwaysReplicatePropertyConditional" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivate()
    { return { (void*)this, "bAutoActivate" }; }
    BitFieldValue<bool, unsigned __int32> bBPAllowUseInInventory()
    { return { (void*)this, "bBPAllowUseInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowAddItems()
    { return { (void*)this, "bBPForceCustomRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPForceCustomRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bBPForceCustomRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bBPHandleAccessInventory()
    { return { (void*)this, "bBPHandleAccessInventory" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemAdded()
    { return { (void*)this, "bBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyItemRemoved()
    { return { (void*)this, "bBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideItemMinimumUseInterval()
    { return { (void*)this, "bBPOverrideItemMinimumUseInterval" }; }
    BitFieldValue<bool, unsigned __int32> bBPRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bBPRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bCanEquipItems()
    { return { (void*)this, "bCanEquipItems" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverAffectNavigation()
    { return { (void*)this, "bCanEverAffectNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bCanInventoryItems()
    { return { (void*)this, "bCanInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseWeaponAsEquipment()
    { return { (void*)this, "bCanUseWeaponAsEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForAutoCraftBlueprints()
    { return { (void*)this, "bCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeCraftingRepairingRequirementsOnStart()
    { return { (void*)this, "bConsumeCraftingRepairingRequirementsOnStart" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingEnabled()
    { return { (void*)this, "bCraftingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bDataListPadMaxInventoryItems()
    { return { (void*)this, "bDataListPadMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bDedicatedForceTickingEveryFrame()
    { return { (void*)this, "bDedicatedForceTickingEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bDeferCheckForAutoCraftBlueprintsOnInventoryChange()
    { return { (void*)this, "bDeferCheckForAutoCraftBlueprintsOnInventoryChange" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDropAllItems()
    { return { (void*)this, "bDisableDropAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTransferEquipmentOnTransferAll()
    { return { (void*)this, "bDisableTransferEquipmentOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bDropPhysicalInventoryDeposit()
    { return { (void*)this, "bDropPhysicalInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bEditableWhenInherited()
    { return { (void*)this, "bEditableWhenInherited" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDediSortingInputs()
    { return { (void*)this, "bEnableDediSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSorting()
    { return { (void*)this, "bEnableSorting" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSortingInputs()
    { return { (void*)this, "bEnableSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentForceIgnoreExplicitOwnerClass()
    { return { (void*)this, "bEquipmentForceIgnoreExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentMustRequireExplicitOwnerClass()
    { return { (void*)this, "bEquipmentMustRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bEquipmentPlayerForceRequireExplicitOwnerClass()
    { return { (void*)this, "bEquipmentPlayerForceRequireExplicitOwnerClass" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAllUseInInventory()
    { return { (void*)this, "bForceAllowAllUseInInventory" }; }
    bool& bForceAllowCustomFoldersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent_Static.bForceAllowCustomFolders"); }
    BitFieldValue<bool, unsigned __int32> bForceGenerateItemSets()
    { return { (void*)this, "bForceGenerateItemSets" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryBlueprints()
    { return { (void*)this, "bForceInventoryBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNonRemovable()
    { return { (void*)this, "bForceInventoryNonRemovable" }; }
    BitFieldValue<bool, unsigned __int32> bForceInventoryNotifyCraftingFinished()
    { return { (void*)this, "bForceInventoryNotifyCraftingFinished" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventDropInventory()
    { return { (void*)this, "bForcePreventDropInventory" }; }
    BitFieldValue<bool, unsigned __int32> bFreeCraftingMode()
    { return { (void*)this, "bFreeCraftingMode" }; }
    BitFieldValue<bool, unsigned __int32> bGivesAchievementItems()
    { return { (void*)this, "bGivesAchievementItems" }; }
    BitFieldValue<bool, unsigned __int32> bGrinderCanGrindAll()
    { return { (void*)this, "bGrinderCanGrindAll" }; }
    BitFieldValue<bool, unsigned __int32> bHasMultiUseEntries()
    { return { (void*)this, "bHasMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bHideDefaultInventoryItemsFromDisplay()
    { return { (void*)this, "bHideDefaultInventoryItemsFromDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bHideEnableSortingButton()
    { return { (void*)this, "bHideEnableSortingButton" }; }
    BitFieldValue<bool, unsigned __int32> bHideSaddleFromInventoryDisplay()
    { return { (void*)this, "bHideSaddleFromInventoryDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bHideSlotCountFromHud()
    { return { (void*)this, "bHideSlotCountFromHud" }; }
    BitFieldValue<bool, unsigned __int32> bHideTributeUploadDinosPanel()
    { return { (void*)this, "bHideTributeUploadDinosPanel" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDLCEquipRestrictions()
    { return { (void*)this, "bIgnoreDLCEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEngramEquipRestrictions()
    { return { (void*)this, "bIgnoreEngramEquipRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreItemMaxDurabilityForItemRepair()
    { return { (void*)this, "bIgnoreItemMaxDurabilityForItemRepair" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreItemRequiresInventoryForItemRepair()
    { return { (void*)this, "bIgnoreItemRequiresInventoryForItemRepair" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMaxInventoryItems()
    { return { (void*)this, "bIgnoreMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNextItemUseCD()
    { return { (void*)this, "bIgnoreNextItemUseCD" }; }
    BitFieldValue<bool, unsigned __int32> bInitializedMe()
    { return { (void*)this, "bInitializedMe" }; }
    BitFieldValue<bool, unsigned __int32> bIsActive()
    { return { (void*)this, "bIsActive" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnly()
    { return { (void*)this, "bIsEditorOnly" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryInventory()
    { return { (void*)this, "bIsSecondaryInventory" }; }
    BitFieldValue<bool, unsigned __int32> bIsTaxidermyBase()
    { return { (void*)this, "bIsTaxidermyBase" }; }
    BitFieldValue<bool, unsigned __int32> bIsTributeInventory()
    { return { (void*)this, "bIsTributeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bLastNotifyCraftingState()
    { return { (void*)this, "bLastNotifyCraftingState" }; }
    BitFieldValue<bool, unsigned __int32> bMaxInventoryWeightUseCharacterStatus()
    { return { (void*)this, "bMaxInventoryWeightUseCharacterStatus" }; }
    BitFieldValue<bool, unsigned __int32> bNetAddressable()
    { return { (void*)this, "bNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bNotNearWirelessCrafting()
    { return { (void*)this, "bNotNearWirelessCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyAddedOnClientReceive()
    { return { (void*)this, "bNotifyAddedOnClientReceive" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyCraftingStateChanged()
    { return { (void*)this, "bNotifyCraftingStateChanged" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyWirelessTribeGroupInventoryRankChanged()
    { return { (void*)this, "bNotifyWirelessTribeGroupInventoryRankChanged" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOneCraftQueueItem()
    { return { (void*)this, "bOnlyOneCraftQueueItem" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCraftingMinDurabilityRequirement()
    { return { (void*)this, "bOverrideCraftingMinDurabilityRequirement" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryDepositClassDontForceDrop()
    { return { (void*)this, "bOverrideInventoryDepositClassDontForceDrop" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAutoDecreaseDurability()
    { return { (void*)this, "bPreventAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCraftingResourceConsumption()
    { return { (void*)this, "bPreventCraftingResourceConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDropInventoryDeposit()
    { return { (void*)this, "bPreventDropInventoryDeposit" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryViewTrace()
    { return { (void*)this, "bPreventInventoryViewTrace" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnClient()
    { return { (void*)this, "bPreventOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnConsoles()
    { return { (void*)this, "bPreventOnConsoles" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnNonDedicatedHost()
    { return { (void*)this, "bPreventOnNonDedicatedHost" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSortingInputs()
    { return { (void*)this, "bPreventSortingInputs" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingArkInventoryItems()
    { return { (void*)this, "bReceivingArkInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingEquippedItems()
    { return { (void*)this, "bReceivingEquippedItems" }; }
    BitFieldValue<bool, unsigned __int32> bReceivingInventoryItems()
    { return { (void*)this, "bReceivingInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowAddItems()
    { return { (void*)this, "bRemoteInventoryAllowAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryAllowRemoveItems()
    { return { (void*)this, "bRemoteInventoryAllowRemoveItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowSelf()
    { return { (void*)this, "bRemoteInventoryOnlyAllowSelf" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryOnlyAllowTribe()
    { return { (void*)this, "bRemoteInventoryOnlyAllowTribe" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteOnlyAllowBlueprintsOrItemClasses()
    { return { (void*)this, "bRemoteOnlyAllowBlueprintsOrItemClasses" }; }
    BitFieldValue<bool, unsigned __int32> bRepairingEnabled()
    { return { (void*)this, "bRepairingEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateComponent()
    { return { (void*)this, "bReplicateComponent" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSetCraftingEnabledCheckForAutoCraftBlueprints()
    { return { (void*)this, "bSetCraftingEnabledCheckForAutoCraftBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bSetsRandomWithoutReplacement()
    { return { (void*)this, "bSetsRandomWithoutReplacement" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenDefaultInventoryItemsDuringCrafting()
    { return { (void*)this, "bShowHiddenDefaultInventoryItemsDuringCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bShowHiddenRemoteInventoryItems()
    { return { (void*)this, "bShowHiddenRemoteInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bShowItemDefaultFolders()
    { return { (void*)this, "bShowItemDefaultFolders" }; }
    BitFieldValue<bool, unsigned __int32> bShowQuickSlotPanel()
    { return { (void*)this, "bShowQuickSlotPanel" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnActorOnTopOfStructure()
    { return { (void*)this, "bSpawnActorOnTopOfStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStasisPreventUnregister()
    { return { (void*)this, "bStasisPreventUnregister" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerHotbarItemUsedEvent()
    { return { (void*)this, "bTriggerHotbarItemUsedEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowAddInventoryItem()
    { return { (void*)this, "bUseBPAllowAddInventoryItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowRepairingItemInInventory()
    { return { (void*)this, "bUseBPAllowRepairingItemInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanGrindItems()
    { return { (void*)this, "bUseBPCanGrindItems" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemDisplay()
    { return { (void*)this, "bUseBPGetExtraItemDisplay" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraItemRepairResourceRequirements()
    { return { (void*)this, "bUseBPGetExtraItemRepairResourceRequirements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializeInventory()
    { return { (void*)this, "bUseBPInitializeInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryRefresh()
    { return { (void*)this, "bUseBPInventoryRefresh" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCraftingAllowed()
    { return { (void*)this, "bUseBPIsCraftingAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidCraftingResource()
    { return { (void*)this, "bUseBPIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyCustomAutoDecreaseDurability()
    { return { (void*)this, "bUseBPModifyCustomAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentCreated()
    { return { (void*)this, "bUseBPOnComponentCreated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentDestroyed()
    { return { (void*)this, "bUseBPOnComponentDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnComponentTick()
    { return { (void*)this, "bUseBPOnComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTransferAll()
    { return { (void*)this, "bUseBPOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDropItemTransform()
    { return { (void*)this, "bUseBPOverrideDropItemTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowCrafting()
    { return { (void*)this, "bUseBPRemoteInventoryAllowCrafting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryAllowViewing()
    { return { (void*)this, "bUseBPRemoteInventoryAllowViewing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemoteInventoryGetMaxVisibleSlots()
    { return { (void*)this, "bUseBPRemoteInventoryGetMaxVisibleSlots" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUseCraftQueueForItem()
    { return { (void*)this, "bUseBPUseCraftQueueForItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseCheatInventory()
    { return { (void*)this, "bUseCheatInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseCraftQueue()
    { return { (void*)this, "bUseCraftQueue" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomSorting()
    { return { (void*)this, "bUseCustomSorting" }; }
    BitFieldValue<bool, unsigned __int32> bUseExtendedCharacterCraftingFunctionality()
    { return { (void*)this, "bUseExtendedCharacterCraftingFunctionality" }; }
    BitFieldValue<bool, unsigned __int32> bUseInventoryBPDrawItemIcon()
    { return { (void*)this, "bUseInventoryBPDrawItemIcon" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemCountInsteadOfInventory()
    { return { (void*)this, "bUseItemCountInsteadOfInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseItemQuantityUpdateEvents()
    { return { (void*)this, "bUseItemQuantityUpdateEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseParentStructureIsValidCraftingResource()
    { return { (void*)this, "bUseParentStructureIsValidCraftingResource" }; }
    BitFieldValue<bool, unsigned __int32> bUseSortingInputAmounts()
    { return { (void*)this, "bUseSortingInputAmounts" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STATIC_H
