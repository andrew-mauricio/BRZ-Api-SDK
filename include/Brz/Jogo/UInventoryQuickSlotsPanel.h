// ==========================================================================
//  UInventoryQuickSlotsPanel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINVENTORYQUICKSLOTSPANEL_H
#define BRZ_SDK_JOGO_UINVENTORYQUICKSLOTSPANEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UInventoryQuickSlotsPanel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInventoryQuickSlotsPanel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryQuickSlotsPanel.GetParentPrimalUI()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetParentPrimalUI() const
    {
        return NativeCall<void*>(this, "UInventoryQuickSlotsPanel.GetParentPrimalUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryQuickSlotsPanel.Init(UUI_Inventory*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryQuickSlotsPanel.Init(UUI_Inventory*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryQuickSlotsPanel.RefreshPanel(IDataListProviderInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshPanel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryQuickSlotsPanel.RefreshPanel(IDataListProviderInterface*)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryQuickSlotsPanel.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryQuickSlotsPanel.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryQuickSlotsPanel.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryQuickSlotsPanel.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ConfirmationDialogUITemplate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryQuickSlotsPanel.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.HTTPGetResponseEvent")); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.HighlightStartPointType"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryQuickSlotsPanel.InputComponent"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryQuickSlotsPanel.ItemContainer"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Navigation")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OriginalUnstretchedSize")); }
    BitFieldValue<bool, unsigned __int32> OverrideButtonSounds()
    { return { (void*)this, "OverrideButtonSounds" }; }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.SceneStackPriority"); }
    BitFieldValue<bool, unsigned __int32> ShouldStretchMainScreenWhenHandheld()
    { return { (void*)this, "ShouldStretchMainScreenWhenHandheld" }; }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryQuickSlotsPanel.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityKBMInput")); }
    BitFieldValue<bool, unsigned __int32> WasInHandheldMode()
    { return { (void*)this, "WasInHandheldMode" }; }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.XBoxFooterUITemplate")); }
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
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsEnabledDelegate")); }
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
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYQUICKSLOTSPANEL_H
