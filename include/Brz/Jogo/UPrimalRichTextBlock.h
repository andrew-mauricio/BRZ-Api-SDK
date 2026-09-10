// ==========================================================================
//  UPrimalRichTextBlock — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALRICHTEXTBLOCK_H
#define BRZ_SDK_JOGO_UPRIMALRICHTEXTBLOCK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalRichTextBlock
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalRichTextBlock"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginDestroy() const
    {
        return NativeCall<void*>(this, "UPrimalRichTextBlock.BeginDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.GetText()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetText() const
    {
        return NativeCall<void*>(this, "UPrimalRichTextBlock.GetText()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.ParseString(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ParseString(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalRichTextBlock.ParseString(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ParseString(FString* a0) const
    { return ParseString(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.ParseText(FText&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ParseText(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalRichTextBlock.ParseText(FText&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.PrimalImageDecorator(FString,ISlateStyle*const)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalImageDecorator(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalRichTextBlock.PrimalImageDecorator(FString,ISlateStyle*const)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PrimalImageDecorator(FString* a0, void* a1) const
    { return PrimalImageDecorator(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.RebuildWidget()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RebuildWidget() const
    {
        return NativeCall<void*>(this, "UPrimalRichTextBlock.RebuildWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.ReleaseSlateResources(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleaseSlateResources(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalRichTextBlock.ReleaseSlateResources(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.SetString(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetString(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalRichTextBlock.SetString(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetString(FString* a0) const
    { return SetString(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.SetText(FText,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetText(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalRichTextBlock.SetText(FText,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalRichTextBlock.SynchronizeProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SynchronizeProperties() const
    {
        return NativeCall<void*>(this, "UPrimalRichTextBlock.SynchronizeProperties()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.AccessibleWidgetData")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalRichTextBlock.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalRichTextBlock.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalRichTextBlock.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalRichTextBlock.AdjacentUpName"); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.Clipping")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalRichTextBlock.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalRichTextBlock.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalRichTextBlock.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalRichTextBlock.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalRichTextBlock.CustomToolTipVerticalAlignment"); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.FlowDirectionPreference")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.GamepadSelectClosestDistanceMultiplier"); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    BrzCampoPonteiro ImageStylesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.ImageStyles")); }
    unsigned char& JustificationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalRichTextBlock.Justification"); }
    float& LineHeightPercentageField() const
    { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.LineHeightPercentage"); }
    BrzCampoPonteiro MarginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.Margin")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.Navigation")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.PixelSnapping")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.RenderTransformPivot")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalRichTextBlock.Slot"); }
    BrzCampoPonteiro TextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.Text")); }
    BrzCampoPonteiro TextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.TextDelegate")); }
    BrzCampoPonteiro TextStylesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.TextStyles")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.ToolTipWidgetDelegate")); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.VisibilityKBMInput")); }
    BrzCampoPonteiro WidgetStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.WidgetStyle")); }
    float& WrapTextAtField() const
    { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.WrapTextAt"); }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CenterVertically` +1, medido na build 25090264
    //  (offset absoluto medido: 0x229; confianca alta)
    void*& bIgnoreParsingField() const
    { return BrzCampoAncorado<void*>(this, "CenterVertically", 1); }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalRichTextBlock.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
    BitFieldValue<bool, unsigned __int32> AutoWrapText()
    { return { (void*)this, "AutoWrapText" }; }
    BitFieldValue<bool, unsigned __int32> CenterVertically()
    { return { (void*)this, "CenterVertically" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALRICHTEXTBLOCK_H
