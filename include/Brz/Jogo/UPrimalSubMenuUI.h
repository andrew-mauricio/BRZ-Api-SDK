// ==========================================================================
//  UPrimalSubMenuUI — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSUBMENUUI_H
#define BRZ_SDK_JOGO_UPRIMALSUBMENUUI_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalSubMenuUI
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalSubMenuUI"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalSubMenuUI.HighlightDefaultWidget(UPanelWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightDefaultWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalSubMenuUI.HighlightDefaultWidget(UPanelWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalSubMenuUI.InitializeSubMenu(UUI_Hub*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeSubMenu(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalSubMenuUI.InitializeSubMenu(UUI_Hub*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalSubMenuUI.OnHide()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnHide() const
    {
        return NativeCall<void*>(this, "UPrimalSubMenuUI.OnHide()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalSubMenuUI.RestoreHighlightedState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RestoreHighlightedState() const
    {
        return NativeCall<void*>(this, "UPrimalSubMenuUI.RestoreHighlightedState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalSubMenuUI.StoreHighlightedState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StoreHighlightedState() const
    {
        return NativeCall<void*>(this, "UPrimalSubMenuUI.StoreHighlightedState()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalSubMenuUI.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalSubMenuUI.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalSubMenuUI.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalSubMenuUI.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ConfirmationDialogUITemplate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalSubMenuUI.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalSubMenuUI.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalSubMenuUI.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalSubMenuUI.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalSubMenuUI.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.HTTPGetResponseEvent")); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.HandleVisibilityWithInput")); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalSubMenuUI.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalSubMenuUI.InputComponent"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalSubMenuUI.ItemContainer"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Navigation")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OriginalUnstretchedSize")); }
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.OverrideButtonSounds")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.SceneStackPriority"); }
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ShouldStretchMainScreenWhenHandheld")); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalSubMenuUI.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsClosing")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsGameplayUI")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsTopUI")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalSubMenuUI.bWantsPrimalItemNotifications")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalSubMenuUI.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALSUBMENUUI_H
