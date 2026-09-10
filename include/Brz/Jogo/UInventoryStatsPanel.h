// ==========================================================================
//  UInventoryStatsPanel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINVENTORYSTATSPANEL_H
#define BRZ_SDK_JOGO_UINVENTORYSTATSPANEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UInventoryStatsPanel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInventoryStatsPanel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.ClickedButton(UWidget*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClickedButton(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryStatsPanel.ClickedButton(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.GetCurrentlyViewingInventory()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetCurrentlyViewingInventory() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.GetCurrentlyViewingInventory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.GetParentPrimalUI()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetParentPrimalUI() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.GetParentPrimalUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.GotoNextTab()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GotoNextTab() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.GotoNextTab()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.Init(UUI_Inventory*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=642+grafo=11/11]]
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryStatsPanel.Init(UUI_Inventory*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.RefreshItemLists()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshItemLists() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.RefreshItemLists()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.RefreshPanelHeight()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=21]]
    BrzPonteiro RefreshPanelHeight() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.RefreshPanelHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.SetRemoteInventoryComp(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetRemoteInventoryComp(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryStatsPanel.SetRemoteInventoryComp(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.SetupSpecialWidgetAdjacents(UWidget*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetupSpecialWidgetAdjacents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryStatsPanel.SetupSpecialWidgetAdjacents(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.ShowCustomCosmeticTab(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowCustomCosmeticTab(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UInventoryStatsPanel.ShowCustomCosmeticTab(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.ShowLocalStats()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ShowLocalStats() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.ShowLocalStats()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryStatsPanel.ShowRemoteStats()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ShowRemoteStats() const
    {
        return NativeCall<void*>(this, "UInventoryStatsPanel.ShowRemoteStats()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.AnimationTickManager")); }
    BrzCampoPonteiro CharacterStatsPanelUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.CharacterStatsPanelUITemplate")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ConfirmationDialogUITemplate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryStatsPanel.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryStatsPanel.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryStatsPanel.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryStatsPanel.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.HTTPGetResponseEvent")); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +88, medido na build 25090264
    //  (offset absoluto medido: 0x8C8; confianca media)
    void*& HeaderPanelField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 88); }
    FName& HeaderPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.HeaderPanelName"); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryStatsPanel.HighlightStartPointType"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryStatsPanel.InputComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +16, medido na build 25090264
    //  (offset absoluto medido: 0x880; confianca alta)
    void*& InventoryUIField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 16); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryStatsPanel.ItemContainer"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.Navigation")); }
    BrzCampoPonteiro ObeliskStatsPanelUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ObeliskStatsPanelUITemplate")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.OriginalUnstretchedSize")); }
    BitFieldValue<bool, unsigned __int32> OverrideButtonSounds()
    { return { (void*)this, "OverrideButtonSounds" }; }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.PixelSnapping")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +72, medido na build 25090264
    //  (offset absoluto medido: 0x8B8; confianca media)
    void*& PlayerEnabledEffectField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 72); }
    FName& PlayerEnabledEffectNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerEnabledEffectName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +32, medido na build 25090264
    //  (offset absoluto medido: 0x890; confianca alta)
    void*& PlayerStatsPanelField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 32); }
    FName& PlayerStatsPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsPanelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +48, medido na build 25090264
    //  (offset absoluto medido: 0x8A0; confianca media)
    void*& PlayerStatsTabButtonField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 48); }
    FName& PlayerStatsTabButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsTabButtonName"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.QueuedWidgetAnimationTransitions")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +80, medido na build 25090264
    //  (offset absoluto medido: 0x8C0; confianca media)
    void*& RemoteEnabledEffectField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 80); }
    FName& RemoteEnabledEffectNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteEnabledEffectName"); }
    BrzCampoPonteiro RemoteStatsPanelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.RemoteStatsPanel")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +56, medido na build 25090264
    //  (offset absoluto medido: 0x8A8; confianca media)
    void*& RemoteStatsTabButtonField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 56); }
    FName& RemoteStatsTabButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabButtonName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +64, medido na build 25090264
    //  (offset absoluto medido: 0x8B0; confianca media)
    void*& RemoteStatsTabNameField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 64); }
    FName& RemoteStatsTabTextBlockNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabTextBlockName"); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.RenderTransformPivot")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +96, medido na build 25090264
    //  (offset absoluto medido: 0x8D0; confianca media)
    void*& RootSizeBoxField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 96); }
    FName& RootSizeBoxNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RootSizeBoxName"); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.SceneStackPriority"); }
    BitFieldValue<bool, unsigned __int32> ShouldStretchMainScreenWhenHandheld()
    { return { (void*)this, "ShouldStretchMainScreenWhenHandheld" }; }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryStatsPanel.SplitscreenDPIScaler"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +24, medido na build 25090264
    //  (offset absoluto medido: 0x888; confianca alta)
    void*& StatsWidgetSwitcherField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 24); }
    FName& StatsWidgetSwitcherNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.StatsWidgetSwitcherName"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.StretchedHandheldSize")); }
    BrzCampoPonteiro StructureStatsPanelUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.StructureStatsPanelUITemplate")); }
    BrzCampoPonteiro SwitcherTextActiveColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.SwitcherTextActiveColor")); }
    BrzCampoPonteiro SwitcherTextInactiveColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.SwitcherTextInactiveColor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SwitcherTextInactiveColor` +40, medido na build 25090264
    //  (offset absoluto medido: 0x898; confianca media)
    void*& TabBgSwitcherField() const
    { return BrzCampoAncorado<void*>(this, "SwitcherTextInactiveColor", 40); }
    FName& TabBgSwitcherNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.TabBgSwitcherName"); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.VisibilityKBMInput")); }
    BitFieldValue<bool, unsigned __int32> WasInHandheldMode()
    { return { (void*)this, "WasInHandheldMode" }; }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.XBoxFooterUITemplate")); }
    BitFieldValue<bool, unsigned __int32> bAutoProcessSplitscreenScaling()
    { return { (void*)this, "bAutoProcessSplitscreenScaling" }; }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyRegisterInputOnConstruction()
    { return { (void*)this, "bAutomaticallyRegisterInputOnConstruction" }; }
    BitFieldValue<bool, unsigned __int32> bCachedIsGamepadActive()
    { return { (void*)this, "bCachedIsGamepadActive" }; }
    BitFieldValue<bool, unsigned __int32> bCaptureMouseInput()
    { return { (void*)this, "bCaptureMouseInput" }; }
    BitFieldValue<bool, unsigned __int32> bClickClosesMenu()
    { return { (void*)this, "bClickClosesMenu" }; }
    BitFieldValue<bool, unsigned __int32> bCloseOnPlayerDie()
    { return { (void*)this, "bCloseOnPlayerDie" }; }
    BitFieldValue<bool, unsigned __int32> bConstrainVirtualCursor()
    { return { (void*)this, "bConstrainVirtualCursor" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    BitFieldValue<bool, unsigned __int32> bDoExtraDataListButtonPanelFilteringChecks()
    { return { (void*)this, "bDoExtraDataListButtonPanelFilteringChecks" }; }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bEscapeClosesMenu()
    { return { (void*)this, "bEscapeClosesMenu" }; }
    BitFieldValue<bool, unsigned __int32> bEscapeOpensPauseMenu()
    { return { (void*)this, "bEscapeOpensPauseMenu" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableFrameGen()
    { return { (void*)this, "bForceDisableFrameGen" }; }
    BitFieldValue<bool, unsigned __int32> bForceFullscreenVirtualCursor()
    { return { (void*)this, "bForceFullscreenVirtualCursor" }; }
    BitFieldValue<bool, unsigned __int32> bForceVirtualCursorEnabled()
    { return { (void*)this, "bForceVirtualCursorEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedPaint()
    { return { (void*)this, "bHasScriptImplementedPaint" }; }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedTick()
    { return { (void*)this, "bHasScriptImplementedTick" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreUIScaling()
    { return { (void*)this, "bIgnoreUIScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIsClosing()
    { return { (void*)this, "bIsClosing" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryStatsPanel.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsFocusable()
    { return { (void*)this, "bIsFocusable" }; }
    BitFieldValue<bool, unsigned __int32> bIsGameplayUI()
    { return { (void*)this, "bIsGameplayUI" }; }
    BitFieldValue<bool, unsigned __int32> bIsTopUI()
    { return { (void*)this, "bIsTopUI" }; }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    BitFieldValue<bool, unsigned __int32> bMenuSupportSlomo()
    { return { (void*)this, "bMenuSupportSlomo" }; }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventGamepadDpadNavegation()
    { return { (void*)this, "bPreventGamepadDpadNavegation" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    BitFieldValue<bool, unsigned __int32> bScaleScreenResolution()
    { return { (void*)this, "bScaleScreenResolution" }; }
    BitFieldValue<bool, unsigned __int32> bShouldValidateInputOnRemove()
    { return { (void*)this, "bShouldValidateInputOnRemove" }; }
    BitFieldValue<bool, unsigned __int32> bShowAcceptIcon()
    { return { (void*)this, "bShowAcceptIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowBumpersIcon()
    { return { (void*)this, "bShowBumpersIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowCancelIcon()
    { return { (void*)this, "bShowCancelIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowFaceBtnBottomIcon()
    { return { (void*)this, "bShowFaceBtnBottomIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowFaceBtnLeftIcon()
    { return { (void*)this, "bShowFaceBtnLeftIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowFaceBtnRightIcon()
    { return { (void*)this, "bShowFaceBtnRightIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowFaceBtnTopIcon()
    { return { (void*)this, "bShowFaceBtnTopIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowLStickIcon()
    { return { (void*)this, "bShowLStickIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowLTBtnIcon()
    { return { (void*)this, "bShowLTBtnIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowLeftShoulderBtnIcon()
    { return { (void*)this, "bShowLeftShoulderBtnIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowRStickIcon()
    { return { (void*)this, "bShowRStickIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowRTBtnIcon()
    { return { (void*)this, "bShowRTBtnIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowStartBtnIcon()
    { return { (void*)this, "bShowStartBtnIcon" }; }
    BitFieldValue<bool, unsigned __int32> bShowXBoxFooter()
    { return { (void*)this, "bShowXBoxFooter" }; }
    BitFieldValue<bool, unsigned __int32> bSpecialRightOpensPauseMenu()
    { return { (void*)this, "bSpecialRightOpensPauseMenu" }; }
    BitFieldValue<bool, unsigned __int32> bStopAction()
    { return { (void*)this, "bStopAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitForObjects()
    { return { (void*)this, "bUseBPInitForObjects" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPrimalItemNotifications()
    { return { (void*)this, "bWantsPrimalItemNotifications" }; }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UInventoryStatsPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYSTATSPANEL_H
