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
    // endereco: casamento de bytes com a build de referencia
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
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.HandleVisibilityWithInput")); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryQuickSlotsPanel.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Highlightable")); }
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
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.OverrideButtonSounds")); }
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
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.ShouldStretchMainScreenWhenHandheld")); }
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
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsClosing")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsGameplayUI")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsTopUI")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryQuickSlotsPanel.bWantsPrimalItemNotifications")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UInventoryQuickSlotsPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYQUICKSLOTSPANEL_H
