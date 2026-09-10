// ==========================================================================
//  UPrimalItemInventoryToolTipWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_H
#define BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;
struct UPrimalItem;


struct UPrimalItemInventoryToolTipWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItemInventoryToolTipWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.GetItemSpoilTimeFormatted(FString&,UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetItemSpoilTimeFormatted(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItemInventoryToolTipWidget.GetItemSpoilTimeFormatted(FString&,UPrimalItem&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetItemSpoilTimeFormatted(FString* a0, void* a1) const
    { return GetItemSpoilTimeFormatted(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryI
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalItemInventoryToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.ResetColors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetColors() const
    {
        return NativeCall<void*>(this, "UPrimalItemInventoryToolTipWidget.ResetColors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateCraftInfo(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCraftInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateCraftInfo(UPrimalItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateGeneralInfo(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateGeneralInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateGeneralInfo(UPrimalItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateMainInfo(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateMainInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateMainInfo(UPrimalItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateStatsInfo(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateStatsInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateStatsInfo(UPrimalItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateTitleBar(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTitleBar(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateTitleBar(UPrimalItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateToolTip(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalItemInventoryToolTipWidget.UpdateToolTip(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget.UpdateTraitsInfo(UPrimalItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTraitsInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemInventoryToolTipWidget.UpdateTraitsInfo(UPrimalItem&)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.AnimationTickManager")); }
    BrzCampoPonteiro BlueprintBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.BlueprintBg")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ColorAndOpacityDelegate")); }
    float& Craft_GroupFreqField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Craft_GroupFreq"); }
    BrzCampoPonteiro Craft_RequirementsMetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsMet")); }
    BrzCampoPonteiro Craft_RequirementsUnmetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsUnmet")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ItemQualityOverlay` +8, medido na build 25090264
    //  (offset absoluto medido: 0x568; confianca alta)
    void*& CraftingRequirementsCustomLabelField() const
    { return BrzCampoAncorado<void*>(this, "ItemQualityOverlay", 8); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemInventoryToolTipWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalItemInventoryToolTipWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.DPIScaler"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.DesiredFocusWidget")); }
    BrzCampoPonteiro DurabilityAboveMaxColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.DurabilityAboveMaxColor")); }
    BrzCampoPonteiro EngramBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.EngramBg")); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.GamepadSelectClosestDistanceMultiplier"); }
    float& General_GroupFreqField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.General_GroupFreq"); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalItemInventoryToolTipWidget.InputComponent"); }
    BrzCampoPonteiro ItemQualityOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ItemQualityOverlay")); }
    BrzCampoPonteiro MainInfoColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.MainInfoColor")); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Navigation")); }
    BrzCampoPonteiro NormalGeneralTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.NormalGeneralTextColor")); }
    BrzCampoPonteiro NormalSecondTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.NormalSecondTextColor")); }
    BrzCampoPonteiro NormalTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.NormalTextColor")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.OnVisibilityChanged")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.Slot"); }
    float& Stat_GroupFreqField() const
    { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Stat_GroupFreq"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.StoppedSequencePlayers")); }
    BrzCampoPonteiro TekgramBgField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.TekgramBg")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemInventoryToolTipWidget.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.ToolTipWidgetDelegate")); }
    FName& TraitGroupNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.TraitGroupName"); }
    BrzCampoPonteiro TraitIconNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.TraitIconNames")); }
    BrzCampoPonteiro TraitLabelNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.TraitLabelNames")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.VisibilityKBMInput")); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalItemInventoryToolTipWidget.WidgetWidth"); }
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
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.bIsEnabledDelegate")); }
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
    FName& fnameCraftPanelField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftPanel"); }
    FName& fnameCraftTitleLabelField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftTitleLabel"); }
    BrzCampoPonteiro fnameCraft_GroupNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_GroupNames")); }
    BrzCampoPonteiro fnameCraft_RequirementIconsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementIcons")); }
    BrzCampoPonteiro fnameCraft_RequirementLabelsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementLabels")); }
    BrzCampoPonteiro fnameGeneral_GroupNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_GroupNames")); }
    BrzCampoPonteiro fnameGeneral_LabelNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_LabelNames")); }
    FName& fnameMainInfo_DescOnly_DescriptionLabelField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_DescOnly_DescriptionLabel"); }
    FName& fnameMainInfo_Full_DescriptionLabelField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_DescriptionLabel"); }
    FName& fnameMainInfo_Full_IconField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_Icon"); }
    FName& fnameMainInfo_SwitcherField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Switcher"); }
    BrzCampoPonteiro fnameStat_GroupNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_GroupNames")); }
    BrzCampoPonteiro fnameStat_LabelNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_LabelNames")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_H
