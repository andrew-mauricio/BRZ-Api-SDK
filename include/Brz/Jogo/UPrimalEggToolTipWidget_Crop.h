// ==========================================================================
//  UPrimalEggToolTipWidget_Crop — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_CROP_H
#define BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_CROP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalEggToolTipWidget_Crop
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalEggToolTipWidget_Crop"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget_Crop.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterf
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalEggToolTipWidget_Crop.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEggToolTipWidget_Crop.UpdateToolTip(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalEggToolTipWidget_Crop.UpdateToolTip(float)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget_Crop.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget_Crop.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget_Crop.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalEggToolTipWidget_Crop.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget_Crop.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEggToolTipWidget_Crop.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.DPIScaler"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro GenderColor_FemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Female")); }
    BrzCampoPonteiro GenderColor_MaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Male")); }
    BrzCampoPonteiro GenderColor_UnknownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderColor_Unknown")); }
    BrzCampoPonteiro GenderIcon_FemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Female")); }
    BrzCampoPonteiro GenderIcon_MaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Male")); }
    BrzCampoPonteiro GenderIcon_UnknownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.GenderIcon_Unknown")); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalEggToolTipWidget_Crop.InputComponent"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.Navigation")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.RenderTransformPivot")); }
    float& RightColumnWidthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.RightColumnWidth"); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.Slot"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.StoppedSequencePlayers")); }
    BrzCampoPonteiro TemperatureColor_BoostedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Boosted")); }
    BrzCampoPonteiro TemperatureColor_CoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Cool")); }
    BrzCampoPonteiro TemperatureColor_PerfectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Perfect")); }
    BrzCampoPonteiro TemperatureColor_TooColdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_TooCold")); }
    BrzCampoPonteiro TemperatureColor_TooHotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_TooHot")); }
    BrzCampoPonteiro TemperatureColor_WarmField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TemperatureColor_Warm")); }
    float& TemperatureGaugeIndicatorHorizontalOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureGaugeIndicatorHorizontalOffset"); }
    float& TemperatureGaugeTotalDegreesToDisplayField() const
    { return *GetNativePointerField<float*>(this, "UPrimalEggToolTipWidget_Crop.TemperatureGaugeTotalDegreesToDisplay"); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalEggToolTipWidget_Crop.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.VisibilityKBMInput")); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEggToolTipWidget_Crop.WidgetWidth"); }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyRegisterInputOnConstruction()
    { return { (void*)this, "bAutomaticallyRegisterInputOnConstruction" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    BitFieldValue<bool, unsigned __int32> bDoOverlayFade()
    { return { (void*)this, "bDoOverlayFade" }; }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedPaint()
    { return { (void*)this, "bHasScriptImplementedPaint" }; }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedTick()
    { return { (void*)this, "bHasScriptImplementedTick" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEggToolTipWidget_Crop.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsFocusable()
    { return { (void*)this, "bIsFocusable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    BitFieldValue<bool, unsigned __int32> bStopAction()
    { return { (void*)this, "bStopAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitToolTip()
    { return { (void*)this, "bUseBPInitToolTip" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateToolTip()
    { return { (void*)this, "bUseBPUpdateToolTip" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALEGGTOOLTIPWIDGET_CROP_H
