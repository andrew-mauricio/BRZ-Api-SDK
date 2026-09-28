// ==========================================================================
//  UInventoryDinoAncestryPanel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINVENTORYDINOANCESTRYPANEL_H
#define BRZ_SDK_JOGO_UINVENTORYDINOANCESTRYPANEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UInventoryDinoAncestryPanel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInventoryDinoAncestryPanel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.ClickedButton(UWidget*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClickedButton(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryDinoAncestryPanel.ClickedButton(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.EscapeClosed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro EscapeClosed() const
    {
        return NativeCall<void*>(this, "UInventoryDinoAncestryPanel.EscapeClosed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.GameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UInventoryDinoAncestryPanel.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.Init(UUI_Inventory*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryDinoAncestryPanel.Init(UUI_Inventory*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.OnVirtualCursorinit()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnVirtualCursorinit() const
    {
        return NativeCall<void*>(this, "UInventoryDinoAncestryPanel.OnVirtualCursorinit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.RefreshAncestry(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshAncestry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryDinoAncestryPanel.RefreshAncestry(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryDinoAncestryPanel.UpdateAncestry()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateAncestry() const
    {
        return NativeCall<void*>(this, "UInventoryDinoAncestryPanel.UpdateAncestry()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryDinoAncestryPanel.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryDinoAncestryPanel.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryDinoAncestryPanel.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryDinoAncestryPanel.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.AnalogDeltaY"); }
    BrzCampoPonteiro AncestryEntryWidgetTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.AncestryEntryWidgetTemplate")); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ConfirmationDialogUITemplate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryDinoAncestryPanel.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryDinoAncestryPanel.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryDinoAncestryPanel.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryDinoAncestryPanel.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryDinoAncestryPanel.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.HTTPGetResponseEvent")); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.HandleVisibilityWithInput")); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryDinoAncestryPanel.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryDinoAncestryPanel.InputComponent"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryDinoAncestryPanel.ItemContainer"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Navigation")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OriginalUnstretchedSize")); }
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.OverrideButtonSounds")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.SceneStackPriority"); }
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ShouldStretchMainScreenWhenHandheld")); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryDinoAncestryPanel.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsClosing")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsGameplayUI")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsTopUI")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryDinoAncestryPanel.bWantsPrimalItemNotifications")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UInventoryDinoAncestryPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYDINOANCESTRYPANEL_H
