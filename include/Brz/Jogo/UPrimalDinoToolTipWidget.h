// ==========================================================================
//  UPrimalDinoToolTipWidget — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALDINOTOOLTIPWIDGET_H
#define BRZ_SDK_JOGO_UPRIMALDINOTOOLTIPWIDGET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UPrimalDinoToolTipWidget
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalDinoToolTipWidget"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitToolTip(void* a0, const FString& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalDinoToolTipWidget.InitToolTip(AShooterPlayerController*,FString&,IDataListEntryInterface*)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitToolTip(void* a0, FString* a1, void* a2) const
    { return InitToolTip(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoToolTipWidget.RefreshDinoNameText()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshDinoNameText() const
    {
        return NativeCall<void*>(this, "UPrimalDinoToolTipWidget.RefreshDinoNameText()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoToolTipWidget.RefreshDinoState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshDinoState() const
    {
        return NativeCall<void*>(this, "UPrimalDinoToolTipWidget.RefreshDinoState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoToolTipWidget.SetupRepairDino()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupRepairDino() const
    {
        return NativeCall<void*>(this, "UPrimalDinoToolTipWidget.SetupRepairDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalDinoToolTipWidget.UpdateToolTip(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateToolTip(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalDinoToolTipWidget.UpdateToolTip(float)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.AdjacentUpName"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ColorAndOpacityDelegate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoToolTipWidget.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.CustomData"); }
    FName& CustomProgressBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.CustomProgressBarName"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoToolTipWidget.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoToolTipWidget.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalDinoToolTipWidget.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoToolTipWidget.DPIScaler"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +244, medido na build 25090264
    //  (offset absoluto medido: 0x5E8; confianca baixa)
    void*& DamageBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 244); }
    FName& DamageBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DamageBarName"); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.DesiredFocusWidget")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +148, medido na build 25090264
    //  (offset absoluto medido: 0x588; confianca baixa)
    void*& DinoFoodTypeImageField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 148); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +140, medido na build 25090264
    //  (offset absoluto medido: 0x580; confianca baixa)
    void*& DinoIconImageField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 140); }
    FString& DinoIconImageNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoIconImageName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +44, medido na build 25090264
    //  (offset absoluto medido: 0x520; confianca media)
    void*& DinoNameLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 44); }
    FString& DinoNameLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.DinoNameLabelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +132, medido na build 25090264
    //  (offset absoluto medido: 0x578; confianca baixa)
    void*& DinoTamingPanelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 132); }
    FName& DinoTamingPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoTamingPanelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +124, medido na build 25090264
    //  (offset absoluto medido: 0x570; confianca media)
    void*& DinoUnconsciousPanelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 124); }
    FName& DinoUnconsciousPanelNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.DinoUnconsciousPanelName"); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.Extensions")); }
    BrzCampoPonteiro FemaleColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.FemaleColor")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.FlowDirectionPreference")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +204, medido na build 25090264
    //  (offset absoluto medido: 0x5C0; confianca baixa)
    void*& FoodBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 204); }
    BrzCampoPonteiro FoodBarDefaultBackgroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultBackground")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +284, medido na build 25090264
    //  (offset absoluto medido: 0x610; confianca baixa)
    void*& FoodBarDefaultDisplayStringField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 284); }
    BrzCampoPonteiro FoodBarDefaultForegroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.FoodBarDefaultForeground")); }
    FName& FoodBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.FoodBarName"); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ForegroundColorDelegate")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoToolTipWidget.GamepadSelectClosestDistanceMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +60, medido na build 25090264
    //  (offset absoluto medido: 0x530; confianca media)
    void*& GenderLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 60); }
    FString& GenderLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.GenderLabelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +276, medido na build 25090264
    //  (offset absoluto medido: 0x608; confianca baixa)
    void*& GenderSwitcherField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 276); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +116, medido na build 25090264
    //  (offset absoluto medido: 0x568; confianca media)
    void*& GeneTraitsLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 116); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +188, medido na build 25090264
    //  (offset absoluto medido: 0x5B0; confianca baixa)
    void*& HealthBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 188); }
    FName& HealthBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.HealthBarName"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +84, medido na build 25090264
    //  (offset absoluto medido: 0x548; confianca media)
    void*& InfoLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 84); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +92, medido na build 25090264
    //  (offset absoluto medido: 0x550; confianca media)
    void*& InfoLabel2Field() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 92); }
    FString& InfoLabel2NameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabel2Name"); }
    FString& InfoLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.InfoLabelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +300, medido na build 25090264
    //  (offset absoluto medido: 0x620; confianca baixa)
    void*& InfoPanelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 300); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalDinoToolTipWidget.InputComponent"); }
    BrzCampoPonteiro MaleColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.MaleColor")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +100, medido na build 25090264
    //  (offset absoluto medido: 0x558; confianca media)
    void*& MatingTimeLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 100); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +156, medido na build 25090264
    //  (offset absoluto medido: 0x590; confianca baixa)
    void*& MaxInventoryImageField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 156); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +268, medido na build 25090264
    //  (offset absoluto medido: 0x600; confianca baixa)
    void*& MultiUseActionWidget_UIField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 268); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +164, medido na build 25090264
    //  (offset absoluto medido: 0x598; confianca baixa)
    void*& MutagenIconField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 164); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +16, medido na build 25090264
    //  (offset absoluto medido: 0x504; confianca media)
    void*& MyDinoField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 16); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.Navigation")); }
    BrzCampoPonteiro NoGenderColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.NoGenderColor")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.OnVisibilityChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +236, medido na build 25090264
    //  (offset absoluto medido: 0x5E0; confianca baixa)
    void*& OxygenBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 236); }
    FName& OxygenBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.OxygenBarName"); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalDinoToolTipWidget.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.RenderTransformPivot")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +260, medido na build 25090264
    //  (offset absoluto medido: 0x5F8; confianca baixa)
    void*& RepairBoxField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 260); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +108, medido na build 25090264
    //  (offset absoluto medido: 0x560; confianca media)
    void*& RepairRequerimentLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 108); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.SceneStackPriority"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.Slot"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +252, medido na build 25090264
    //  (offset absoluto medido: 0x5F0; confianca baixa)
    void*& SpeedBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 252); }
    FName& SpeedBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.SpeedBarName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +196, medido na build 25090264
    //  (offset absoluto medido: 0x5B8; confianca baixa)
    void*& StaminaBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 196); }
    FName& StaminaBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.StaminaBarName"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.StoppedSequencePlayers")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +52, medido na build 25090264
    //  (offset absoluto medido: 0x528; confianca media)
    void*& TamedLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 52); }
    FString& TamedLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.TamedLabelName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +68, medido na build 25090264
    //  (offset absoluto medido: 0x538; confianca media)
    void*& TamingDescriptionLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +180, medido na build 25090264
    //  (offset absoluto medido: 0x5A8; confianca baixa)
    void*& TamingProgressBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 180); }
    FName& TamingProgressBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TamingProgressBarName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +28, medido na build 25090264
    //  (offset absoluto medido: 0x510; confianca media)
    void*& TextInfoArrayField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 28); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.TickFrequency")); }
    FString& ToolTipLabelNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalDinoToolTipWidget.ToolTipLabelName"); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.ToolTipWidgetDelegate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +228, medido na build 25090264
    //  (offset absoluto medido: 0x5D8; confianca baixa)
    void*& TorpidityBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 228); }
    FName& TorpidityBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityBarName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +172, medido na build 25090264
    //  (offset absoluto medido: 0x5A0; confianca baixa)
    void*& TorpidityProgressBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 172); }
    FName& TorpidityProgressBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.TorpidityProgressBarName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +76, medido na build 25090264
    //  (offset absoluto medido: 0x540; confianca media)
    void*& UnconsciousDescriptionLabelField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 76); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.VisibilityKBMInput")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +212, medido na build 25090264
    //  (offset absoluto medido: 0x5C8; confianca baixa)
    void*& WeightBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 212); }
    FName& WeightBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.WeightBarName"); }
    int& WidgetHeightField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.WidgetHeight"); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.WidgetTree")); }
    int& WidgetWidthField() const
    { return *GetNativePointerField<int*>(this, "UPrimalDinoToolTipWidget.WidgetWidth"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NoGenderColor` +220, medido na build 25090264
    //  (offset absoluto medido: 0x5D0; confianca baixa)
    void*& XPBarField() const
    { return BrzCampoAncorado<void*>(this, "NoGenderColor", 220); }
    FName& XPBarNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalDinoToolTipWidget.XPBarName"); }
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
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalDinoToolTipWidget.bIsEnabledDelegate")); }
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
    BitFieldValue<bool, unsigned __int32> bShowExtendedInfo()
    { return { (void*)this, "bShowExtendedInfo" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALDINOTOOLTIPWIDGET_H
