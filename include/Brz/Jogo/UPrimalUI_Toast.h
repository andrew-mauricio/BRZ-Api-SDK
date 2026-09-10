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
    // endereco: cache_pdb_25090264
    BrzPonteiro InitCounter_Implementation(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UPrimalUI_Toast.InitCounter_Implementation(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI_Toast.OverrideCounterStart(int)
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI_Toast.HighlightStartPointType"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
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
    BitFieldValue<bool, unsigned __int32> OverrideButtonSounds()
    { return { (void*)this, "OverrideButtonSounds" }; }
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
    BitFieldValue<bool, unsigned __int32> ShouldStretchMainScreenWhenHandheld()
    { return { (void*)this, "ShouldStretchMainScreenWhenHandheld" }; }
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
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.VisibilityKBMInput")); }
    BitFieldValue<bool, unsigned __int32> WasInHandheldMode()
    { return { (void*)this, "WasInHandheldMode" }; }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.XBoxFooterUITemplate")); }
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
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI_Toast.bIsEnabledDelegate")); }
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
    { return *GetNativePointerField<int*>(this, "UPrimalUI_Toast.virtualCursorFrames"); }
    BitFieldValue<bool, unsigned __int32> bWillSetCounter()
    { return { (void*)this, "bWillSetCounter" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALUI_TOAST_H
