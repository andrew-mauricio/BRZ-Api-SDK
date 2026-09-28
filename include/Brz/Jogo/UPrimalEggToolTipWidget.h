// ==========================================================================
//  UPrimalEggToolTipWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_H
#define BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalEggToolTipWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalEggToolTipWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalEggToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget.SetGenderState(bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetGenderState(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "UPrimalEggToolTipWidget.SetGenderState(bool,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget.SetPoweredState(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPoweredState(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "UPrimalEggToolTipWidget.SetPoweredState(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget.UpdateToolTip(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalEggToolTipWidget.UpdateToolTip(float)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.DPIScaler"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro GenderColor_FemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderColor_Female")); }
    BrzCampoPonteiro GenderColor_MaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderColor_Male")); }
    BrzCampoPonteiro GenderColor_UnknownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderColor_Unknown")); }
    BrzCampoPonteiro GenderIcon_FemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderIcon_Female")); }
    BrzCampoPonteiro GenderIcon_MaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderIcon_Male")); }
    BrzCampoPonteiro GenderIcon_UnknownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.GenderIcon_Unknown")); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.HandleVisibilityWithInput")); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalEggToolTipWidget.InputComponent"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Navigation")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.RenderTransformPivot")); }
    float& RightColumnWidthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.RightColumnWidth"); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.Slot"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro TemperatureColor_BoostedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_Boosted")); }
    BrzCampoPonteiro TemperatureColor_CoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_Cool")); }
    BrzCampoPonteiro TemperatureColor_PerfectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_Perfect")); }
    BrzCampoPonteiro TemperatureColor_TooColdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooCold")); }
    BrzCampoPonteiro TemperatureColor_TooHotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_TooHot")); }
    BrzCampoPonteiro TemperatureColor_WarmField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TemperatureColor_Warm")); }
    float& TemperatureGaugeIndicatorHorizontalOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeIndicatorHorizontalOffset"); }
    float& TemperatureGaugeTotalDegreesToDisplayField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget.TemperatureGaugeTotalDegreesToDisplay"); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalEggToolTipWidget.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.VisibilityKBMInput")); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget.WidgetWidth"); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoOverlayFadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bDoOverlayFade")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bDontRenderHighlight")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bIsFocusable")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bIsVolatile")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bOverride_Cursor")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bStopAction")); }
    BrzCampoPonteiro bUseBPInitToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bUseBPInitToolTip")); }
    BrzCampoPonteiro bUseBPUpdateToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bUseBPUpdateToolTip")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget.bUseWindowClippingForHighlight")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_H
