// ==========================================================================
//  UPrimalUI_Toast — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALUI_TOAST_H
#define BRZ_SDK_JOGO_UPRIMALUI_TOAST_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalUI_Toast
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalUI_Toast"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.GameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalUI_Toast.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.InitCounter(int,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro InitCounter(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalUI_Toast.InitCounter(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.InitCounter_Implementation(int,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro InitCounter_Implementation(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalUI_Toast.InitCounter_Implementation(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.OverrideCounterStart(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OverrideCounterStart(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI_Toast.OverrideCounterStart(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.OverrideTextValueWithString(FString&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideTextValueWithString(const FString& a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UPrimalUI_Toast.OverrideTextValueWithString(FString&,bool,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OverrideTextValueWithString(FString* a0, bool a1, bool a2) const
    { return OverrideTextValueWithString(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.SetCounter(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetCounter(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI_Toast.SetCounter(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.SetCounter_Implementation(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCounter_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI_Toast.SetCounter_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.incrementCounter()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro incrementCounter() const
    {
        return NativeCall<void*>(this, "UPrimalUI_Toast.incrementCounter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.incrementCounter_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro incrementCounter_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalUI_Toast.incrementCounter_Implementation()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI_Toast.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI_Toast.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI_Toast.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI_Toast.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ConfirmationDialogUITemplate")); }
    int& CounterField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.Counter"); }
    int& CounterMaxField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.CounterMax"); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI_Toast.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.HTTPGetResponseEvent")); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.HandleVisibilityWithInput")); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalUI_Toast.InputComponent"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalUI_Toast.ItemContainer"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Navigation")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OriginalUnstretchedSize")); }
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.OverrideButtonSounds")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.Priority"); }
    int& ProgressCounterField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.ProgressCounter"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.SceneStackPriority"); }
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ShouldStretchMainScreenWhenHandheld")); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI_Toast.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsClosing")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsGameplayUI")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsTopUI")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bWantsPrimalItemNotifications")); }
    BrzCampoPonteiro bWillSetCounterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bWillSetCounter")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.virtualCursorFrames"); }
    BitFieldValue<bool, unsigned __int32> bWillSetCounter()
    { return { (void*)this, "bWillSetCounter" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALUI_TOAST_H
