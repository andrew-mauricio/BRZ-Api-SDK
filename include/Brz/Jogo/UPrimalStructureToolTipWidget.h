// ==========================================================================
//  UPrimalStructureToolTipWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSTRUCTURETOOLTIPWIDGET_H
#define BRZ_SDK_JOGO_UPRIMALSTRUCTURETOOLTIPWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalStructureToolTipWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalStructureToolTipWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalStructureToolTipWidget.CreateModuleForItemsToDisplay(FString,TArray<FItemToDisplayInStruc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateModuleForItemsToDisplay(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalStructureToolTipWidget.CreateModuleForItemsToDisplay(FString,TArray<FItemToDisplayInStructureTooltip,TSizedDefaultAllocator<32>>)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateModuleForItemsToDisplay(FString* a0, void* a1) const
    { return CreateModuleForItemsToDisplay(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalStructureToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInter
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalStructureToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalStructureToolTipWidget.UpdateToolTip(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalStructureToolTipWidget.UpdateToolTip(float)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalStructureToolTipWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalStructureToolTipWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalStructureToolTipWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalStructureToolTipWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalStructureToolTipWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalStructureToolTipWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalStructureToolTipWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalStructureToolTipWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalStructureToolTipWidget.DPIScaler"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.DesiredFocusWidget")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalStructureToolTipWidget.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.HandleVisibilityWithInput")); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalStructureToolTipWidget.InputComponent"); }
    BrzCampoPonteiro ItemsToDisplayModuleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ItemsToDisplayModuleTemplate")); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Navigation")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalStructureToolTipWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.Slot"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalStructureToolTipWidget.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.VisibilityKBMInput")); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalStructureToolTipWidget.WidgetWidth"); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoOverlayFadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bDoOverlayFade")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bDontRenderHighlight")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bIsFocusable")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bIsVolatile")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bOverride_Cursor")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bStopAction")); }
    BrzCampoPonteiro bUseBPInitToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bUseBPInitToolTip")); }
    BrzCampoPonteiro bUseBPUpdateToolTipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bUseBPUpdateToolTip")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalStructureToolTipWidget.bUseWindowClippingForHighlight")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALSTRUCTURETOOLTIPWIDGET_H
