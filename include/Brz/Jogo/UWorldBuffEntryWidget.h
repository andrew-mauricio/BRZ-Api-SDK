// ==========================================================================
//  UWorldBuffEntryWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDBUFFENTRYWIDGET_H
#define BRZ_SDK_JOGO_UWORLDBUFFENTRYWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;
struct UPrimalWorldBuffData;


struct UWorldBuffEntryWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldBuffEntryWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.BeginExpiring()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginExpiring() const
    {
        return NativeCall<void*>(this, "UWorldBuffEntryWidget.BeginExpiring()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.Collapse()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Collapse() const
    {
        return NativeCall<void*>(this, "UWorldBuffEntryWidget.Collapse()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.FadeOut()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FadeOut() const
    {
        return NativeCall<void*>(this, "UWorldBuffEntryWidget.FadeOut()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.InitializeMe(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeMe(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldBuffEntryWidget.InitializeMe(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.SetDifficultyValues(FWorldBuffDefinition&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDifficultyValues(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldBuffEntryWidget.SetDifficultyValues(FWorldBuffDefinition&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldBuffEntryWidget.SyncData(FWorldBuffPersistantData&,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncData(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "UWorldBuffEntryWidget.SyncData(FWorldBuffPersistantData&,bool,bool,bool)", a0, a1, a2, a3);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldBuffEntryWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldBuffEntryWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldBuffEntryWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldBuffEntryWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldBuffEntryWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UWorldBuffEntryWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldBuffEntryWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldBuffEntryWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UWorldBuffEntryWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.DPIScaler"); }
    float& DefaultDisplayTimeField() const
    { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.DefaultDisplayTime"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.DesiredFocusWidget")); }
    float& ExpiringSoonDisplayTimeField() const
    { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.ExpiringSoonDisplayTime"); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.HandleVisibilityWithInput")); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UWorldBuffEntryWidget.InputComponent"); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Navigation")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldBuffEntryWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UWorldBuffEntryWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldBuffEntryWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UWorldBuffEntryWidget.Slot"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UWorldBuffEntryWidget.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.VisibilityKBMInput")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.WidgetTree")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bDontRenderHighlight")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bIsFocusable")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bIsVolatile")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bOverride_Cursor")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bStopAction")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldBuffEntryWidget.bUseWindowClippingForHighlight")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDBUFFENTRYWIDGET_H
