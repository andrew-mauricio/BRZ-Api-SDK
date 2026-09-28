// ==========================================================================
//  UPrimalInventoryComponent_Market — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_MARKET_H
#define BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_MARKET_H

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


struct UPrimalInventoryComponent_Market
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalInventoryComponent_Market"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_Market.OnInventoryDataListRefreshed()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro OnInventoryDataListRefreshed()
    {
        return NativeCall<void*>(nullptr, "UPrimalInventoryComponent_Market.OnInventoryDataListRefreshed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalInventoryComponent_Market.RefreshDataListSellOrderOverlays(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RefreshDataListSellOrderOverlays(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UPrimalInventoryComponent_Market.RefreshDataListSellOrderOverlays(AShooterPlayerController*)", a0);
    }

    int& AbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.AbsoluteMaxInventoryItems"); }
    int& AbsoluteMaxVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.AbsoluteMaxVanityItems"); }
    TObjectPtr<UTexture2D>& AccessInventoryIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalInventoryComponent_Market.AccessInventoryIcon"); }
    int& ActionWheelAccessInventoryPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.ActionWheelAccessInventoryPriority"); }
    float& ActiveInventoryRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.ActiveInventoryRefreshInterval"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.AdditionalItemSets"); }
    TArray<UPrimalItem*>& AllCustomCosmeticItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.AllCustomCosmeticItems"); }
    TArray<UPrimalItem*>& AllDyeColorItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.AllDyeColorItems"); }
    BrzCampoPonteiro AllSortingInputItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.AllSortingInputItems")); }
    TArray<UPrimalItem*>& ArkTributeItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.ArkTributeItems"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.AssetUserData"); }
    TArray<void*>& CheatInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.CheatInventoryItems"); }
    BrzCampoPonteiro CloseInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.CloseInventorySound")); }
    BrzCampoPonteiro ColdStoredItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ColdStoredItems")); }
    BrzCampoPonteiro ColdStoredRichItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ColdStoredRichItems")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ComponentTags"); }
    float& CraftingItemSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.CraftingItemSpeed"); }
    TArray<UPrimalItem*>& CraftingItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.CraftingItems"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.CreationMethod"); }
    int& CurrentSlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.CurrentSlotMaxMagicNumber"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.CustomData"); }
    TArray<void*>& CustomFolderItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.CustomFolderItems"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalInventoryComponent_Market.CustomTag"); }
    BrzCampoPonteiro DataListEntryWidgetOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DataListEntryWidgetOverride")); }
    int& DefaultCraftingQuantityMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.DefaultCraftingQuantityMultiplier"); }
    float& DefaultCraftingRequirementsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.DefaultCraftingRequirementsMultiplier"); }
    TArray<void*>& DefaultEngramsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEngrams"); }
    TArray<void*>& DefaultEngrams2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEngrams2"); }
    TArray<void*>& DefaultEngrams3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEngrams3"); }
    TArray<void*>& DefaultEngrams4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEngrams4"); }
    TArray<void*>& DefaultEquippedItemSkinsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEquippedItemSkins"); }
    TArray<void*>& DefaultEquippedItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultEquippedItems"); }
    TArray<void*>& DefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItems"); }
    TArray<void*>& DefaultInventoryItems2Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItems2"); }
    TArray<void*>& DefaultInventoryItems3Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItems3"); }
    TArray<void*>& DefaultInventoryItems4Field() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItems4"); }
    BrzCampoPonteiro DefaultInventoryItemsClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItemsClasses")); }
    BrzCampoPonteiro DefaultInventoryItemsClassesNewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItemsClassesNew")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItemsRandomCustomStrings")); }
    BrzCampoPonteiro DefaultInventoryItemsRandomCustomStringsWeightsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DefaultInventoryItemsRandomCustomStringsWeights")); }
    TArray<void*>& DefaultInventoryQualitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultInventoryQualities"); }
    BrzCampoPonteiro DefaultInventoryQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DefaultInventoryQuantities")); }
    TArray<void*>& DefaultSlotItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.DefaultSlotItems"); }
    BrzCampoPonteiro DisabledItemsTEMPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DisabledItemsTEMP")); }
    int& DisplayDefaultItemInventoryCountField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.DisplayDefaultItemInventoryCount"); }
    BrzCampoPonteiro DropItemRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DropItemRotationOffset")); }
    BrzCampoPonteiro DroppedItemTemplateOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.DroppedItemTemplateOverride")); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.EngramRequirementClassOverride")); }
    TArray<void*>& EquippableItemTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.EquippableItemTypes"); }
    BrzCampoPonteiro EquippableItemTypesHiddenInStatsPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.EquippableItemTypesHiddenInStatsPanel")); }
    TArray<UPrimalItem*>& EquippedItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.EquippedItems"); }
    TArray<void*>& EventItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.EventItems"); }
    BrzCampoPonteiro ExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ExtraItemDisplay")); }
    float& ExtraMaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.ExtraMaxInventoryWeight"); }
    BrzCampoPonteiro ForceAllowCraftingForInventoryComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ForceAllowCraftingForInventoryComponents")); }
    BrzCampoPonteiro ForceAllowItemStackingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ForceAllowItemStackings")); }
    int& ForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.ForceDefaultInventoryRefreshVersion"); }
    int& FreeCraftingModeQuantityValueField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.FreeCraftingModeQuantityValue"); }
    float& GenerateItemSetsQualityMultiplierMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.GenerateItemSetsQualityMultiplierMax"); }
    float& GenerateItemSetsQualityMultiplierMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.GenerateItemSetsQualityMultiplierMin"); }
    BrzCampoPonteiro GroundDropTraceLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.GroundDropTraceLocationOffset")); }
    BrzCampoPonteiro IgnoreDefaultCraftingQuantityMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.IgnoreDefaultCraftingQuantityMultiplierEngrams")); }
    BrzCampoPonteiro IgnoreDefaultCraftingRequirementsMultiplierEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.IgnoreDefaultCraftingRequirementsMultiplierEngrams")); }
    int& InvUpdatedFrameField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.InvUpdatedFrame"); }
    TArray<UPrimalItem*>& InventoryItemsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.InventoryItems"); }
    FString& InventoryNameOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_Market.InventoryNameOverride"); }
    TArray<void*>& ItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemClassWeightMultipliers"); }
    TArray<void*>& ItemCraftQueueEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemCraftQueueEntries"); }
    TArray<void*>& ItemCraftingConsumptionReplenishmentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemCraftingConsumptionReplenishments"); }
    BrzCampoPonteiro ItemCraftingSoundOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ItemCraftingSoundOverride")); }
    BrzCampoPonteiro ItemRemovedBySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ItemRemovedBySound")); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.ItemSetsOverride")); }
    TArray<UPrimalItem*>& ItemSlotsField() const
    { return *GetNativePointerField<TArray<UPrimalItem*>*>(this, "UPrimalInventoryComponent_Market.ItemSlots"); }
    TArray<void*>& ItemSpawnActorClassOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemSpawnActorClassOverrides"); }
    TArray<void*>& ItemSpoilingTimeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.ItemSpoilingTimeMultipliers"); }
    double& LastCraftRequestTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Market.LastCraftRequestTime"); }
    double& LastInventoryRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Market.LastInventoryRefreshTime"); }
    double& LastRefreshCheckItemTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalInventoryComponent_Market.LastRefreshCheckItemTime"); }
    BrzCampoPonteiro LastWirelessCraftingCheckLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.LastWirelessCraftingCheckLoc")); }
    BrzCampoPonteiro LinkedToStorageInterfacesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.LinkedToStorageInterfaces")); }
    float& MaxInventoryAccessDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MaxInventoryAccessDistance"); }
    int& MaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.MaxInventoryItems"); }
    float& MaxInventoryWeightField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MaxInventoryWeight"); }
    float& MaxItemCooldownTimeClearField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MaxItemCooldownTimeClear"); }
    int& MaxItemCraftQueueEntriesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.MaxItemCraftQueueEntries"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MaxItemSets"); }
    TArray<void*>& MaxItemTemplateQuantitiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.MaxItemTemplateQuantities"); }
    int& MaxNumberOfSortingInputsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.MaxNumberOfSortingInputs"); }
    float& MaxRemoteInventoryViewingDistanceField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MaxRemoteInventoryViewingDistance"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.MinItemSets"); }
    BrzCampoPonteiro MultiUseButtonStyleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.MultiUseButtonStyleOverrides")); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.NumItemSetsPower"); }
    int& NumSlotsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.NumSlots"); }
    int& NumUndroppableVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.NumUndroppableVanityItems"); }
    int& NumVanityItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.NumVanityItems"); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnComponentDeactivated")); }
    BrzCampoPonteiro OnInventoryHotbarItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryHotbarItemUsed")); }
    BrzCampoPonteiro OnInventoryItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryItemAdded")); }
    BrzCampoPonteiro OnInventoryItemCountQtyIncrementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryItemCountQtyIncrement")); }
    BrzCampoPonteiro OnInventoryItemFinishedRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryItemFinishedRepairing")); }
    BrzCampoPonteiro OnInventoryItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryItemRemoved")); }
    BrzCampoPonteiro OnInventoryItemStartedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnInventoryItemStartedCrafting")); }
    BrzCampoPonteiro OnlyAllowCraftingItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OnlyAllowCraftingItemClasses")); }
    BrzCampoPonteiro OpenInventorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OpenInventorySound")); }
    BrzCampoPonteiro OverrideCraftingFinishedSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.OverrideCraftingFinishedSound")); }
    int& OverrideInventoryDefaultTabField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.OverrideInventoryDefaultTab"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalInventoryComponent_Market.PrimaryComponentTick"); }
    BrzCampoPonteiro RemoteAddItemOnlyAllowItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.RemoteAddItemOnlyAllowItemClasses")); }
    BrzCampoPonteiro RemoteAddItemPreventItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.RemoteAddItemPreventItemClasses")); }
    FString& RemoteInventoryDescriptionStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalInventoryComponent_Market.RemoteInventoryDescriptionString"); }
    TArray<AShooterPlayerController*>& RemoteViewingInventoryPlayerControllersField() const
    { return *GetNativePointerField<TArray<AShooterPlayerController*>*>(this, "UPrimalInventoryComponent_Market.RemoteViewingInventoryPlayerControllers"); }
    int& SavedForceDefaultInventoryRefreshVersionField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.SavedForceDefaultInventoryRefreshVersion"); }
    TArray<void*>& SetQuantityValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.SetQuantityValues"); }
    TArray<void*>& SetQuantityWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.SetQuantityWeights"); }
    int& SlotMaxMagicNumberField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.SlotMaxMagicNumber"); }
    BrzCampoPonteiro SortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.SortingInputAmounts")); }
    BrzCampoPonteiro SortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.SortingInputs")); }
    int& StartingAbsoluteMaxInventoryItemsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.StartingAbsoluteMaxInventoryItems"); }
    float& StructureCraftingItemSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalInventoryComponent_Market.StructureCraftingItemSpeedModifier"); }
    BrzCampoPonteiro TamedDinoForceConsiderFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.TamedDinoForceConsiderFoodTypes")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalInventoryComponent_Market.TribeGroupInventoryRank"); }
    TArray<void*>& TribeInventoryAccessRankSelectionIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.TribeInventoryAccessRankSelectionIcons"); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalInventoryComponent_Market.UCSSerializationIndex"); }
    TArray<void*>& WeaponAsEquipmentAttachmentInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalInventoryComponent_Market.WeaponAsEquipmentAttachmentInfos"); }
    BrzCampoPonteiro WirelessExchangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.WirelessExchanges")); }
    BrzCampoPonteiro bAddMaxInventoryItemsToDefaultItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAddMaxInventoryItemsToDefaultItems")); }
    BrzCampoPonteiro bAllDefaultInventoryIsEngramsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllDefaultInventoryIsEngrams")); }
    BrzCampoPonteiro bAllowAddingToArkTributeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowAddingToArkTribute")); }
    BrzCampoPonteiro bAllowDeactivatedCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowDeactivatedCrafting")); }
    BrzCampoPonteiro bAllowItemColdStorageOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowItemColdStorageOnStasis")); }
    BrzCampoPonteiro bAllowItemStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowItemStacking")); }
    BrzCampoPonteiro bAllowRemoteCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowRemoteCrafting")); }
    BrzCampoPonteiro bAllowRemoteInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowRemoteInventory")); }
    BrzCampoPonteiro bAllowRemoteRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowRemoteRepairing")); }
    BrzCampoPonteiro bAllowWorldSettingsInventoryComponentAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAllowWorldSettingsInventoryComponentAppends")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bAutoActivate")); }
    BrzCampoPonteiro bBPAllowUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPAllowUseInInventory")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPForceCustomRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bBPForceCustomRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPForceCustomRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bBPHandleAccessInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPHandleAccessInventory")); }
    BrzCampoPonteiro bBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPNotifyItemAdded")); }
    BrzCampoPonteiro bBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPNotifyItemRemoved")); }
    BrzCampoPonteiro bBPOverrideItemMinimumUseIntervalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPOverrideItemMinimumUseInterval")); }
    BrzCampoPonteiro bBPRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bBPRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bCanEquipItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCanEquipItems")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCanInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCanInventoryItems")); }
    BrzCampoPonteiro bCanUseWeaponAsEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCanUseWeaponAsEquipment")); }
    BrzCampoPonteiro bCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bColdStorageDeferInflateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bColdStorageDeferInflate")); }
    BrzCampoPonteiro bConsumeCraftingRepairingRequirementsOnStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bConsumeCraftingRepairingRequirementsOnStart")); }
    BrzCampoPonteiro bCraftingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bCraftingEnabled")); }
    BrzCampoPonteiro bDataListPadMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDataListPadMaxInventoryItems")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bDeferCheckForAutoCraftBlueprintsOnInventoryChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDeferCheckForAutoCraftBlueprintsOnInventoryChange")); }
    BrzCampoPonteiro bDisableDropAllItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDisableDropAllItems")); }
    BrzCampoPonteiro bDisableTransferEquipmentOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDisableTransferEquipmentOnTransferAll")); }
    BrzCampoPonteiro bDropPhysicalInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bDropPhysicalInventoryDeposit")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEditableWhenInherited")); }
    BrzCampoPonteiro bEnableDediSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEnableDediSortingInputs")); }
    BrzCampoPonteiro bEnableSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEnableSorting")); }
    BrzCampoPonteiro bEnableSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEnableSortingInputs")); }
    BrzCampoPonteiro bEquipmentForceIgnoreExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEquipmentForceIgnoreExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentMustRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEquipmentMustRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bEquipmentPlayerForceRequireExplicitOwnerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bEquipmentPlayerForceRequireExplicitOwnerClass")); }
    BrzCampoPonteiro bForceAllowAllUseInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForceAllowAllUseInInventory")); }
    bool& bForceAllowCustomFoldersField() const
    { return *GetNativePointerField<bool*>(this, "UPrimalInventoryComponent_Market.bForceAllowCustomFolders"); }
    BrzCampoPonteiro bForceGenerateItemSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForceGenerateItemSets")); }
    BrzCampoPonteiro bForceInventoryBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForceInventoryBlueprints")); }
    BrzCampoPonteiro bForceInventoryNonRemovableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForceInventoryNonRemovable")); }
    BrzCampoPonteiro bForceInventoryNotifyCraftingFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForceInventoryNotifyCraftingFinished")); }
    BrzCampoPonteiro bForcePreventDropInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bForcePreventDropInventory")); }
    BrzCampoPonteiro bFreeCraftingModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bFreeCraftingMode")); }
    BrzCampoPonteiro bGivesAchievementItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bGivesAchievementItems")); }
    BrzCampoPonteiro bGrinderCanGrindAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bGrinderCanGrindAll")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHasMultiUseEntries")); }
    BrzCampoPonteiro bHideDefaultInventoryItemsFromDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHideDefaultInventoryItemsFromDisplay")); }
    BrzCampoPonteiro bHideEnableSortingButtonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHideEnableSortingButton")); }
    BrzCampoPonteiro bHideSaddleFromInventoryDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHideSaddleFromInventoryDisplay")); }
    BrzCampoPonteiro bHideSlotCountFromHudField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHideSlotCountFromHud")); }
    BrzCampoPonteiro bHideTributeUploadDinosPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bHideTributeUploadDinosPanel")); }
    BrzCampoPonteiro bIgnoreDLCEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreDLCEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreEngramEquipRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreEngramEquipRestrictions")); }
    BrzCampoPonteiro bIgnoreItemMaxDurabilityForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreItemMaxDurabilityForItemRepair")); }
    BrzCampoPonteiro bIgnoreItemRequiresInventoryForItemRepairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreItemRequiresInventoryForItemRepair")); }
    BrzCampoPonteiro bIgnoreMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreMaxInventoryItems")); }
    BrzCampoPonteiro bIgnoreNextItemUseCDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIgnoreNextItemUseCD")); }
    BrzCampoPonteiro bInitializedMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bInitializedMe")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIsEditorOnly")); }
    BrzCampoPonteiro bIsSecondaryInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIsSecondaryInventory")); }
    BrzCampoPonteiro bIsTaxidermyBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIsTaxidermyBase")); }
    BrzCampoPonteiro bIsTributeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bIsTributeInventory")); }
    BrzCampoPonteiro bLastNotifyCraftingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bLastNotifyCraftingState")); }
    BrzCampoPonteiro bMaxInventoryWeightUseCharacterStatusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bMaxInventoryWeightUseCharacterStatus")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bNetAddressable")); }
    BrzCampoPonteiro bNotNearWirelessCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bNotNearWirelessCrafting")); }
    BrzCampoPonteiro bNotifyAddedOnClientReceiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bNotifyAddedOnClientReceive")); }
    BrzCampoPonteiro bNotifyCraftingStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bNotifyCraftingStateChanged")); }
    BrzCampoPonteiro bNotifyWirelessTribeGroupInventoryRankChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bNotifyWirelessTribeGroupInventoryRankChanged")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyOneCraftQueueItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bOnlyOneCraftQueueItem")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOverrideCraftingMinDurabilityRequirementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bOverrideCraftingMinDurabilityRequirement")); }
    BrzCampoPonteiro bOverrideInventoryDepositClassDontForceDropField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bOverrideInventoryDepositClassDontForceDrop")); }
    BrzCampoPonteiro bPreventAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventAutoDecreaseDurability")); }
    BrzCampoPonteiro bPreventCraftingResourceConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventCraftingResourceConsumption")); }
    BrzCampoPonteiro bPreventDropInventoryDepositField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventDropInventoryDeposit")); }
    BrzCampoPonteiro bPreventInventoryViewTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventInventoryViewTrace")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bPreventSortingInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bPreventSortingInputs")); }
    BrzCampoPonteiro bReceivingArkInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReceivingArkInventoryItems")); }
    BrzCampoPonteiro bReceivingEquippedItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReceivingEquippedItems")); }
    BrzCampoPonteiro bReceivingInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReceivingInventoryItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRemoteInventoryAllowAddItems")); }
    BrzCampoPonteiro bRemoteInventoryAllowRemoveItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRemoteInventoryAllowRemoveItems")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRemoteInventoryOnlyAllowSelf")); }
    BrzCampoPonteiro bRemoteInventoryOnlyAllowTribeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRemoteInventoryOnlyAllowTribe")); }
    BrzCampoPonteiro bRemoteOnlyAllowBlueprintsOrItemClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRemoteOnlyAllowBlueprintsOrItemClasses")); }
    BrzCampoPonteiro bRepairingEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bRepairingEnabled")); }
    BrzCampoPonteiro bReplicateComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReplicateComponent")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bReplicates")); }
    BrzCampoPonteiro bSetCraftingEnabledCheckForAutoCraftBlueprintsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bSetCraftingEnabledCheckForAutoCraftBlueprints")); }
    BrzCampoPonteiro bSetsRandomWithoutReplacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bSetsRandomWithoutReplacement")); }
    BrzCampoPonteiro bShowHiddenDefaultInventoryItemsDuringCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bShowHiddenDefaultInventoryItemsDuringCrafting")); }
    BrzCampoPonteiro bShowHiddenRemoteInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bShowHiddenRemoteInventoryItems")); }
    BrzCampoPonteiro bShowItemDefaultFoldersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bShowItemDefaultFolders")); }
    BrzCampoPonteiro bShowQuickSlotPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bShowQuickSlotPanel")); }
    BrzCampoPonteiro bSpawnActorOnTopOfStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bSpawnActorOnTopOfStructure")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bStasisPreventUnregister")); }
    BrzCampoPonteiro bTriggerHotbarItemUsedEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bTriggerHotbarItemUsedEvent")); }
    BrzCampoPonteiro bUseBPAllowAddInventoryItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPAllowAddInventoryItem")); }
    BrzCampoPonteiro bUseBPAllowRepairingItemInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPAllowRepairingItemInInventory")); }
    BrzCampoPonteiro bUseBPCanGrindItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPCanGrindItems")); }
    BrzCampoPonteiro bUseBPGetExtraItemDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPGetExtraItemDisplay")); }
    BrzCampoPonteiro bUseBPGetExtraItemRepairResourceRequirementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPGetExtraItemRepairResourceRequirements")); }
    BrzCampoPonteiro bUseBPInitializeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPInitializeInventory")); }
    BrzCampoPonteiro bUseBPInventoryRefreshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPInventoryRefresh")); }
    BrzCampoPonteiro bUseBPIsCraftingAllowedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPIsCraftingAllowed")); }
    BrzCampoPonteiro bUseBPIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPIsValidCraftingResource")); }
    BrzCampoPonteiro bUseBPModifyCustomAutoDecreaseDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPModifyCustomAutoDecreaseDurability")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPOnComponentTick")); }
    BrzCampoPonteiro bUseBPOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPOnTransferAll")); }
    BrzCampoPonteiro bUseBPOverrideDropItemTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPOverrideDropItemTransform")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowCraftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPRemoteInventoryAllowCrafting")); }
    BrzCampoPonteiro bUseBPRemoteInventoryAllowViewingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPRemoteInventoryAllowViewing")); }
    BrzCampoPonteiro bUseBPRemoteInventoryGetMaxVisibleSlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPRemoteInventoryGetMaxVisibleSlots")); }
    BrzCampoPonteiro bUseBPUseCraftQueueForItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseBPUseCraftQueueForItem")); }
    BrzCampoPonteiro bUseCheatInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseCheatInventory")); }
    BrzCampoPonteiro bUseCraftQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseCraftQueue")); }
    BrzCampoPonteiro bUseCustomSortingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseCustomSorting")); }
    BrzCampoPonteiro bUseExtendedCharacterCraftingFunctionalityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseExtendedCharacterCraftingFunctionality")); }
    BrzCampoPonteiro bUseInventoryBPDrawItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseInventoryBPDrawItemIcon")); }
    BrzCampoPonteiro bUseItemCountInsteadOfInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseItemCountInsteadOfInventory")); }
    BrzCampoPonteiro bUseItemQuantityUpdateEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseItemQuantityUpdateEvents")); }
    BrzCampoPonteiro bUseParentStructureIsValidCraftingResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseParentStructureIsValidCraftingResource")); }
    BrzCampoPonteiro bUseSortingInputAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalInventoryComponent_Market.bUseSortingInputAmounts")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALINVENTORYCOMPONENT_MARKET_H
