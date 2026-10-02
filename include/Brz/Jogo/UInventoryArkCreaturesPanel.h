// ==========================================================================
//  UInventoryArkCreaturesPanel — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UINVENTORYARKCREATURESPANEL_H
#define BRZ_SDK_JOGO_UINVENTORYARKCREATURESPANEL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UInputComponent;


struct UInventoryArkCreaturesPanel
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UInventoryArkCreaturesPanel"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.ClickedButton(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClickedButton(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryArkCreaturesPanel.ClickedButton(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.ConfirmationDialogAccepted()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConfirmationDialogAccepted() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.ConfirmationDialogAccepted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.DownloadSelectedDino()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DownloadSelectedDino() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.DownloadSelectedDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UInventoryArkCreaturesPanel.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetParentPrimalUI()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetParentPrimalUI() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetParentPrimalUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetSelectedDinoForDownload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedDinoForDownload() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetSelectedDinoForDownload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetSelectedDinoForUpload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedDinoForUpload() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetSelectedDinoForUpload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetSelectedDownloadSlotKey()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedDownloadSlotKey() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetSelectedDownloadSlotKey()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetSelectedUploadSlotKey()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedUploadSlotKey() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetSelectedUploadSlotKey()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetTamedDinos()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTamedDinos() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetTamedDinos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetUploadedDinos()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUploadedDinos() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetUploadedDinos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.Init(UUI_Inventory*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryArkCreaturesPanel.Init(UUI_Inventory*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.LocalDinoSlotButtonSelected(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalDinoSlotButtonSelected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryArkCreaturesPanel.LocalDinoSlotButtonSelected(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.OnDownloadDinoRequestFinished(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDownloadDinoRequestFinished(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UInventoryArkCreaturesPanel.OnDownloadDinoRequestFinished(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.OnUploadedDinosListingsLoaded(TArray<FARKTributeDinoListing,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnUploadedDinosListingsLoaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosListingsLoaded(TArray<FARKTributeDinoListing,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.OnUploadedDinosLoaded(TArray<FARKTributeDino,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnUploadedDinosLoaded(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosLoaded(TArray<FARKTributeDino,TSizedDefaultAllocator<32>>&,TArray<unsignedint,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.PopulateDinoList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PopulateDinoList() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.PopulateDinoList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.ProcessArkTributeExpirationTimes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessArkTributeExpirationTimes() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.ProcessArkTributeExpirationTimes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.Show()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Show() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.Show()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.UploadedDinoSlotButtonSelected(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UploadedDinoSlotButtonSelected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UInventoryArkCreaturesPanel.UploadedDinoSlotButtonSelected(UWidget*)", a0);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.AnimationTickManager")); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ConfirmationDialogUITemplate")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.DesiredFocusWidget")); }
    BrzCampoPonteiro DinoSlotButtonTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.DinoSlotButtonTemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +32 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x840; confianca alta)
    void*& DownloadCreatureButtonField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 32); }
    FName& DownloadCreatureButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.DownloadCreatureButtonName"); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.FlowDirectionPreference")); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.HTTPGetResponseEvent")); }
    BrzCampoPonteiro HandleVisibilityWithInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.HandleVisibilityWithInput")); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.HighlightStartPointType"); }
    BrzCampoPonteiro HighlightableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Highlightable")); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryArkCreaturesPanel.InputComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x828; confianca alta)
    void*& InventoryUIField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 8); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryArkCreaturesPanel.ItemContainer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x830; confianca alta)
    void*& LocalCreatureListField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 16); }
    FName& LocalCreatureListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.LocalCreatureListName"); }
    BrzCampoPonteiro LocalEntryWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.LocalEntryWidgets")); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Navigation")); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OnVisibilityChanged")); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OriginalUnstretchedSize")); }
    BrzCampoPonteiro OverrideButtonSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.OverrideButtonSounds")); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.PixelSnapping")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.QueuedWidgetAnimationTransitions")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.RenderTransformPivot")); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.SceneStackPriority"); }
    BrzCampoPonteiro ShouldStretchMainScreenWhenHandheldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ShouldStretchMainScreenWhenHandheld")); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UInventoryArkCreaturesPanel.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.TickFrequency")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.ToolTipWidgetDelegate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x848; confianca media)
    void*& UploadCreatureButtonField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 40); }
    FName& UploadCreatureButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadCreatureButtonName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +24 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x838; confianca alta)
    void*& UploadedCreatureListField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 24); }
    FName& UploadedCreatureListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadedCreatureListName"); }
    BrzCampoPonteiro UploadedEntryWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.UploadedEntryWidgets")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.ViewportZOrder"); }
    BrzCampoPonteiro VisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.Visibility")); }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityKBMInput")); }
    BrzCampoPonteiro WasInHandheldModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.WasInHandheldMode")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.XBoxFooterUITemplate")); }
    BrzCampoPonteiro bAutoProcessSplitscreenScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bAutoProcessSplitscreenScaling")); }
    BrzCampoPonteiro bAutomaticallyRegisterInputOnConstructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bAutomaticallyRegisterInputOnConstruction")); }
    BrzCampoPonteiro bCachedIsGamepadActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bCachedIsGamepadActive")); }
    BrzCampoPonteiro bCaptureMouseInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bCaptureMouseInput")); }
    BrzCampoPonteiro bClickClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bClickClosesMenu")); }
    BrzCampoPonteiro bCloseOnPlayerDieField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bCloseOnPlayerDie")); }
    BrzCampoPonteiro bConstrainVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bConstrainVirtualCursor")); }
    BrzCampoPonteiro bCreatedByConstructionScriptField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bCreatedByConstructionScript")); }
    BrzCampoPonteiro bDisableAxisOrientedSweepTestOnMeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bDisableAxisOrientedSweepTestOnMe")); }
    BrzCampoPonteiro bDoExtraDataListButtonPanelFilteringChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bDoExtraDataListButtonPanelFilteringChecks")); }
    BrzCampoPonteiro bDontRenderHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bDontRenderHighlight")); }
    BrzCampoPonteiro bEscapeClosesMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bEscapeClosesMenu")); }
    BrzCampoPonteiro bEscapeOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bEscapeOpensPauseMenu")); }
    BrzCampoPonteiro bForceDisableFrameGenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bForceDisableFrameGen")); }
    BrzCampoPonteiro bForceFullscreenVirtualCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bForceFullscreenVirtualCursor")); }
    BrzCampoPonteiro bForceVirtualCursorEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bForceVirtualCursorEnabled")); }
    BrzCampoPonteiro bHasScriptImplementedPaintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bHasScriptImplementedPaint")); }
    BrzCampoPonteiro bHasScriptImplementedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bHasScriptImplementedTick")); }
    BrzCampoPonteiro bIgnoreUIScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIgnoreUIScaling")); }
    BrzCampoPonteiro bIsClosingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsClosing")); }
    BrzCampoPonteiro bIsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsEnabled")); }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsEnabledDelegate")); }
    BrzCampoPonteiro bIsFocusableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsFocusable")); }
    BrzCampoPonteiro bIsGameplayUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsGameplayUI")); }
    BrzCampoPonteiro bIsTopUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsTopUI")); }
    BrzCampoPonteiro bIsVariableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsVariable")); }
    BrzCampoPonteiro bIsVolatileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsVolatile")); }
    BrzCampoPonteiro bMenuSupportSlomoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bMenuSupportSlomo")); }
    BrzCampoPonteiro bOverride_CursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bOverride_Cursor")); }
    BrzCampoPonteiro bPreventGamepadDpadNavegationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bPreventGamepadDpadNavegation")); }
    BrzCampoPonteiro bPrimalSetupSpecialAdjacentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bPrimalSetupSpecialAdjacents")); }
    BrzCampoPonteiro bScaleScreenResolutionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bScaleScreenResolution")); }
    BrzCampoPonteiro bShouldValidateInputOnRemoveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShouldValidateInputOnRemove")); }
    BrzCampoPonteiro bShowAcceptIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowAcceptIcon")); }
    BrzCampoPonteiro bShowBumpersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowBumpersIcon")); }
    BrzCampoPonteiro bShowCancelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowCancelIcon")); }
    BrzCampoPonteiro bShowFaceBtnBottomIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowFaceBtnBottomIcon")); }
    BrzCampoPonteiro bShowFaceBtnLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowFaceBtnLeftIcon")); }
    BrzCampoPonteiro bShowFaceBtnRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowFaceBtnRightIcon")); }
    BrzCampoPonteiro bShowFaceBtnTopIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowFaceBtnTopIcon")); }
    BrzCampoPonteiro bShowLStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowLStickIcon")); }
    BrzCampoPonteiro bShowLTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowLTBtnIcon")); }
    BrzCampoPonteiro bShowLeftShoulderBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowLeftShoulderBtnIcon")); }
    BrzCampoPonteiro bShowRStickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowRStickIcon")); }
    BrzCampoPonteiro bShowRTBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowRTBtnIcon")); }
    BrzCampoPonteiro bShowStartBtnIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowStartBtnIcon")); }
    BrzCampoPonteiro bShowXBoxFooterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bShowXBoxFooter")); }
    BrzCampoPonteiro bSpecialRightOpensPauseMenuField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bSpecialRightOpensPauseMenu")); }
    BrzCampoPonteiro bStopActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bStopAction")); }
    BrzCampoPonteiro bUseBPInitForObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bUseBPInitForObjects")); }
    BrzCampoPonteiro bUseCustomTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bUseCustomTooltip")); }
    BrzCampoPonteiro bUseWindowClippingForHighlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bUseWindowClippingForHighlight")); }
    BrzCampoPonteiro bWantsPrimalItemNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bWantsPrimalItemNotifications")); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYARKCREATURESPANEL_H
