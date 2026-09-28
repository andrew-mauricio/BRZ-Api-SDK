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
    BrzCampoPonteiro ColdStoredItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ColdStoredItems")); }
    BrzCampoPonteiro ColdStoredRichItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.ColdStoredRichItems")); }
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
    BrzCampoPonteiro bAddMaxInventoryItemsToDefaultItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAddMaxInventoryItemsToDefaultItems")); }
    BrzCampoPonteiro bAllDefaultInventoryIsEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllDefaultInventoryIsEngrams")); }
    BrzCampoPonteiro bAllowAddingToArkTributeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowAddingToArkTribute")); }
    BrzCampoPonteiro bAllowDeactivatedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowDeactivatedCrafting")); }
    BrzCampoPonteiro bAllowItemColdStorageOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowItemColdStorageOnStasis")); }
    BrzCampoPonteiro bAllowItemStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowItemStacking")); }
    BrzCampoPonteiro bAllowRemoteCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowRemoteCrafting")); }
    BrzCampoPonteiro bAllowRemoteInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowRemoteInventory")); }
    BrzCampoPonteiro bAllowRemoteRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowRemoteRepairing")); }
    BrzCampoPonteiro bAllowWorldSettingsInventoryComponentAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAllowWorldSettingsInventoryComponentAppends")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bAutoActivate")); }
    BrzCampoPonteiro bBPAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPAllowUseInInventory")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPForceCustomRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPForceCustomRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bBPHandleAccessInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPHandleAccessInventory")); }
    BrzCampoPonteiro bBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPNotifyItemAdded")); }
    BrzCampoPonteiro bBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPNotifyItemRemoved")); }
    BrzCampoPonteiro bBPOverrideItemMinimumUseIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPOverrideItemMinimumUseInterval")); }
    BrzCampoPonteiro bBPRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bBPRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bCanEquipItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCanEquipItems")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCanInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCanInventoryItems")); }
    BrzCampoPonteiro bCanUseWeaponAsEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCanUseWeaponAsEquipment")); }
    BrzCampoPonteiro bCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bColdStorageDeferInflateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bColdStorageDeferInflate")); }
    BrzCampoPonteiro bConsumeCraftingRepairingRequirementsOnStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bConsumeCraftingRepairingRequirementsOnStart")); }
    BrzCampoPonteiro bCraftingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bCraftingEnabled")); }
    BrzCampoPonteiro bDataListPadMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDataListPadMaxInventoryItems")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDeferCheckForAutoCraftBlueprintsOnInventoryChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDeferCheckForAutoCraftBlueprintsOnInventoryChange")); }
    BrzCampoPonteiro bDisableDropAllItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDisableDropAllItems")); }
    BrzCampoPonteiro bDisableTransferEquipmentOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDisableTransferEquipmentOnTransferAll")); }
    BrzCampoPonteiro bDropPhysicalInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bDropPhysicalInventoryDeposit")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEditableWhenInherited")); }
    BrzCampoPonteiro bEnableDediSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEnableDediSortingInputs")); }
    BrzCampoPonteiro bEnableSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEnableSorting")); }
    BrzCampoPonteiro bEnableSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEnableSortingInputs")); }
    BrzCampoPonteiro bEquipmentForceIgnoreExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEquipmentForceIgnoreExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentMustRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEquipmentMustRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentPlayerForceRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bEquipmentPlayerForceRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bForceAllowAllUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForceAllowAllUseInInventory")); }
    bool& bForceAllowCustomFoldersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent_Static.bForceAllowCustomFolders"); }
    BrzCampoPonteiro bForceGenerateItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForceGenerateItemSets")); }
    BrzCampoPonteiro bForceInventoryBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForceInventoryBlueprints")); }
    BrzCampoPonteiro bForceInventoryNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForceInventoryNonRemovable")); }
    BrzCampoPonteiro bForceInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForceInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bForcePreventDropInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bForcePreventDropInventory")); }
    BrzCampoPonteiro bFreeCraftingModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bFreeCraftingMode")); }
    BrzCampoPonteiro bGivesAchievementItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bGivesAchievementItems")); }
    BrzCampoPonteiro bGrinderCanGrindAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bGrinderCanGrindAll")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHideDefaultInventoryItemsFromDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHideDefaultInventoryItemsFromDisplay")); }
    BrzCampoPonteiro bHideEnableSortingButtonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHideEnableSortingButton")); }
    BrzCampoPonteiro bHideSaddleFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHideSaddleFromInventoryDisplay")); }
    BrzCampoPonteiro bHideSlotCountFromHudField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHideSlotCountFromHud")); }
    BrzCampoPonteiro bHideTributeUploadDinosPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bHideTributeUploadDinosPanel")); }
    BrzCampoPonteiro bIgnoreDLCEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreDLCEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreEngramEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreEngramEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreItemMaxDurabilityForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreItemMaxDurabilityForItemRepair")); }
    BrzCampoPonteiro bIgnoreItemRequiresInventoryForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreItemRequiresInventoryForItemRepair")); }
    BrzCampoPonteiro bIgnoreMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreMaxInventoryItems")); }
    BrzCampoPonteiro bIgnoreNextItemUseCDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIgnoreNextItemUseCD")); }
    BrzCampoPonteiro bInitializedMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bInitializedMe")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIsEditorOnly")); }
    BrzCampoPonteiro bIsSecondaryInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIsSecondaryInventory")); }
    BrzCampoPonteiro bIsTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIsTaxidermyBase")); }
    BrzCampoPonteiro bIsTributeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bIsTributeInventory")); }
    BrzCampoPonteiro bLastNotifyCraftingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bLastNotifyCraftingState")); }
    BrzCampoPonteiro bMaxInventoryWeightUseCharacterStatusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bMaxInventoryWeightUseCharacterStatus")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bNetAddressable")); }
    BrzCampoPonteiro bNotNearWirelessCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bNotNearWirelessCrafting")); }
    BrzCampoPonteiro bNotifyAddedOnClientReceiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bNotifyAddedOnClientReceive")); }
    BrzCampoPonteiro bNotifyCraftingStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bNotifyCraftingStateChanged")); }
    BrzCampoPonteiro bNotifyWirelessTribeGroupInventoryRankChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bNotifyWirelessTribeGroupInventoryRankChanged")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOneCraftQueueItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bOnlyOneCraftQueueItem")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOverrideCraftingMinDurabilityRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bOverrideCraftingMinDurabilityRequirement")); }
    BrzCampoPonteiro bOverrideInventoryDepositClassDontForceDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bOverrideInventoryDepositClassDontForceDrop")); }
    BrzCampoPonteiro bPreventAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventAutoDecreaseDurability")); }
    BrzCampoPonteiro bPreventCraftingResourceConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventCraftingResourceConsumption")); }
    BrzCampoPonteiro bPreventDropInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventDropInventoryDeposit")); }
    BrzCampoPonteiro bPreventInventoryViewTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventInventoryViewTrace")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPreventSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bPreventSortingInputs")); }
    BrzCampoPonteiro bReceivingArkInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReceivingArkInventoryItems")); }
    BrzCampoPonteiro bReceivingEquippedItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReceivingEquippedItems")); }
    BrzCampoPonteiro bReceivingInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReceivingInventoryItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRemoteInventoryOnlyAllowSelf")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRemoteInventoryOnlyAllowTribe")); }
    BrzCampoPonteiro bRemoteOnlyAllowBlueprintsOrItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRemoteOnlyAllowBlueprintsOrItemClasses")); }
    BrzCampoPonteiro bRepairingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bRepairingEnabled")); }
    BrzCampoPonteiro bReplicateComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReplicateComponent")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bReplicates")); }
    BrzCampoPonteiro bSetCraftingEnabledCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bSetCraftingEnabledCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bSetsRandomWithoutReplacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bSetsRandomWithoutReplacement")); }
    BrzCampoPonteiro bShowHiddenDefaultInventoryItemsDuringCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bShowHiddenDefaultInventoryItemsDuringCrafting")); }
    BrzCampoPonteiro bShowHiddenRemoteInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bShowHiddenRemoteInventoryItems")); }
    BrzCampoPonteiro bShowItemDefaultFoldersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bShowItemDefaultFolders")); }
    BrzCampoPonteiro bShowQuickSlotPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bShowQuickSlotPanel")); }
    BrzCampoPonteiro bSpawnActorOnTopOfStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bSpawnActorOnTopOfStructure")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bStasisPreventUnregister")); }
    BrzCampoPonteiro bTriggerHotbarItemUsedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bTriggerHotbarItemUsedEvent")); }
    BrzCampoPonteiro bUseBPAllowAddInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPAllowAddInventoryItem")); }
    BrzCampoPonteiro bUseBPAllowRepairingItemInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPAllowRepairingItemInInventory")); }
    BrzCampoPonteiro bUseBPCanGrindItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPCanGrindItems")); }
    BrzCampoPonteiro bUseBPGetExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPGetExtraItemDisplay")); }
    BrzCampoPonteiro bUseBPGetExtraItemRepairResourceRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPGetExtraItemRepairResourceRequirements")); }
    BrzCampoPonteiro bUseBPInitializeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPInitializeInventory")); }
    BrzCampoPonteiro bUseBPInventoryRefreshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPInventoryRefresh")); }
    BrzCampoPonteiro bUseBPIsCraftingAllowedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPIsCraftingAllowed")); }
    BrzCampoPonteiro bUseBPIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPIsValidCraftingResource")); }
    BrzCampoPonteiro bUseBPModifyCustomAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPModifyCustomAutoDecreaseDurability")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseBPOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPOnTransferAll")); }
    BrzCampoPonteiro bUseBPOverrideDropItemTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPOverrideDropItemTransform")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPRemoteInventoryAllowCrafting")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowViewingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPRemoteInventoryAllowViewing")); }
    BrzCampoPonteiro bUseBPRemoteInventoryGetMaxVisibleSlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPRemoteInventoryGetMaxVisibleSlots")); }
    BrzCampoPonteiro bUseBPUseCraftQueueForItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseBPUseCraftQueueForItem")); }
    BrzCampoPonteiro bUseCheatInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseCheatInventory")); }
    BrzCampoPonteiro bUseCraftQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseCraftQueue")); }
    BrzCampoPonteiro bUseCustomSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseCustomSorting")); }
    BrzCampoPonteiro bUseExtendedCharacterCraftingFunctionalityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseExtendedCharacterCraftingFunctionality")); }
    BrzCampoPonteiro bUseInventoryBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseInventoryBPDrawItemIcon")); }
    BrzCampoPonteiro bUseItemCountInsteadOfInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseItemCountInsteadOfInventory")); }
    BrzCampoPonteiro bUseItemQuantityUpdateEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseItemQuantityUpdateEvents")); }
    BrzCampoPonteiro bUseParentStructureIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseParentStructureIsValidCraftingResource")); }
    BrzCampoPonteiro bUseSortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Static.bUseSortingInputAmounts")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_STATIC_H
