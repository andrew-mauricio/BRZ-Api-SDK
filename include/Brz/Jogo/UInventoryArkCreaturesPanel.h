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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1082+grafo=7/8]]
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UInventoryArkCreaturesPanel.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetParentPrimalUI()
    // endereco: cache_pdb_25090264
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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetSelectedDownloadSlotKey() const
    {
        return NativeCall<void*>(this, "UInventoryArkCreaturesPanel.GetSelectedDownloadSlotKey()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UInventoryArkCreaturesPanel.GetSelectedUploadSlotKey()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=518+chamadores=2]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=297+grafo=4/4]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=468+grafo=8/8]]
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
    //  ancorado em `DinoSlotButtonTemplate` +32, medido na build 25090264
    //  (offset absoluto medido: 0x840; confianca alta)
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
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UInventoryArkCreaturesPanel.HighlightStartPointType"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UInventoryArkCreaturesPanel.InputComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +8, medido na build 25090264
    //  (offset absoluto medido: 0x828; confianca alta)
    void*& InventoryUIField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 8); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UInventoryArkCreaturesPanel.ItemContainer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +16, medido na build 25090264
    //  (offset absoluto medido: 0x830; confianca alta)
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
    BitFieldValue<bool, unsigned __int32> OverrideButtonSounds()
    { return { (void*)this, "OverrideButtonSounds" }; }
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
    BitFieldValue<bool, unsigned __int32> ShouldStretchMainScreenWhenHandheld()
    { return { (void*)this, "ShouldStretchMainScreenWhenHandheld" }; }
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
    //  ancorado em `DinoSlotButtonTemplate` +40, medido na build 25090264
    //  (offset absoluto medido: 0x848; confianca media)
    void*& UploadCreatureButtonField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 40); }
    FName& UploadCreatureButtonNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadCreatureButtonName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DinoSlotButtonTemplate` +24, medido na build 25090264
    //  (offset absoluto medido: 0x838; confianca alta)
    void*& UploadedCreatureListField() const
    { return BrzCampoAncorado<void*>(this, "DinoSlotButtonTemplate", 24); }
    FName& UploadedCreatureListNameField() const
    { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadedCreatureListName"); }
    BrzCampoPonteiro UploadedEntryWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.UploadedEntryWidgets")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.VisibilityKBMInput")); }
    BitFieldValue<bool, unsigned __int32> WasInHandheldMode()
    { return { (void*)this, "WasInHandheldMode" }; }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.XBoxFooterUITemplate")); }
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
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UInventoryArkCreaturesPanel.bIsEnabledDelegate")); }
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
    { return *GetNativePointerField<int*>(this, "UInventoryArkCreaturesPanel.virtualCursorFrames"); }
};

#endif  // BRZ_SDK_JOGO_UINVENTORYARKCREATURESPANEL_H
