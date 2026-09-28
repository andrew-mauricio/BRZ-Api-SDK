// ==========================================================================
//  UPrimalItemToolTipWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEMTOOLTIPWIDGET_H
#define BRZ_SDK_JOGO_UPRIMALITEMTOOLTIPWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;
struct UPrimalItem;


struct UPrimalItemToolTipWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItemToolTipWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalItemToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemToolTipWidget.UpdateToolTip(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalItemToolTipWidget.UpdateToolTip(float)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.AnimationTickManager")); }
    BrzCampoPonteiro BlueprintBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.BlueprintBg")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemToolTipWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemToolTipWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemToolTipWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemToolTipWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemToolTipWidget.DPIScaler"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.DesiredFocusWidget")); }
    BrzCampoPonteiro EngramBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.EngramBg")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemToolTipWidget.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.HandleVisibilityWithInput")); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalItemToolTipWidget.InputComponent"); }
    FName& ItemCraftRepairInvReqLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftRepairInvReqLabelName"); }
    FName& ItemCraftingPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingPanelName"); }
    FName& ItemCraftingProgressBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingProgressBarName"); }
    FName& ItemCraftingQueueLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingQueueLabelName"); }
    FName& ItemCraftingRequirementsLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingRequirementsLabelName"); }
    FName& ItemCraftingTitleLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingTitleLabelName"); }
    FString& ItemDescriptionLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDescriptionLabelName"); }
    FString& ItemDurabilityLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDurabilityLabelName"); }
    FString& ItemIconImageNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemIconImageName"); }
    FString& ItemNameLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemNameLabelName"); }
    FString& ItemQualityImageNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQualityImageName"); }
    BrzCampoPonteiro ItemQualityOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ItemQualityOverlay")); }
    FString& ItemQuantityLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQuantityLabelName"); }
    FString& ItemStatsLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemStatsLabelName"); }
    FName& ItemStatsPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemStatsPanelName"); }
    FString& ItemSubTypeLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubTypeLabelName"); }
    FString& ItemSubtypePanelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubtypePanelName"); }
    FString& ItemTypeLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemTypeLabelName"); }
    FString& ItemWeightLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemWeightLabelName"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Navigation")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemToolTipWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.Slot"); }
    FName& SpoilIntoItemIconNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemIconName"); }
    FName& SpoilIntoItemNameLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemNameLabelName"); }
    FName& SpoilIntoItemPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemPanelName"); }
    FName& SpoilIntoItemTimeLabelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemTimeLabelName"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro TekgramBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.TekgramBg")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.VisibilityKBMInput")); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemToolTipWidget.WidgetWidth"); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoOverlayFadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bDoOverlayFade")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bDontRenderHighlight")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bIsFocusable")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bIsVolatile")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bOverride_Cursor")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bStopAction")); }
    BrzCampoPonteiro bUseBPInitToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bUseBPInitToolTip")); }
    BrzCampoPonteiro bUseBPUpdateToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bUseBPUpdateToolTip")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemToolTipWidget.bUseWindowClippingForHighlight")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEMTOOLTIPWIDGET_H
