// ==========================================================================
//  UPrimalScrollBox — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSCROLLBOX_H
#define BRZ_SDK_JOGO_UPRIMALSCROLLBOX_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalScrollBox
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalScrollBox"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalScrollBox.GetFirstWidgetWithinVisibleScrollboxFrame()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetFirstWidgetWithinVisibleScrollboxFrame()
    {
        return NativeCall<void*>(nullptr, "UPrimalScrollBox.GetFirstWidgetWithinVisibleScrollboxFrame()");
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.AccessibleWidgetData")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalScrollBox.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalScrollBox.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalScrollBox.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalScrollBox.AdjacentUpName"); }
    BitFieldValue<bool, unsigned __int32> AllowOverscroll()
    { return { (void*)this, "AllowOverscroll" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysShowScrollbar()
    { return { (void*)this, "AlwaysShowScrollbar" }; }
    BitFieldValue<bool, unsigned __int32> AlwaysShowScrollbarTrack()
    { return { (void*)this, "AlwaysShowScrollbarTrack" }; }
    BitFieldValue<bool, unsigned __int32> BackPadScrolling()
    { return { (void*)this, "BackPadScrolling" }; }
    BitFieldValue<bool, unsigned __int32> ClipChildren()
    { return { (void*)this, "ClipChildren" }; }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.Clipping")); }
    BrzCampoPonteiro ConsumeMouseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ConsumeMouseWheel")); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalScrollBox.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.CustomToolTipVerticalAlignment"); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.FlowDirectionPreference")); }
    BitFieldValue<bool, unsigned __int32> FrontPadScrolling()
    { return { (void*)this, "FrontPadScrolling" }; }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalScrollBox.GamepadSelectClosestDistanceMultiplier"); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.Navigation")); }
    BrzCampoPonteiro NavigationDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.NavigationDestination")); }
    float& NavigationScrollPaddingField() const
    { return *GetNativePointerField<float*>(this, "UPrimalScrollBox.NavigationScrollPadding"); }
    int& NumPreviewWidgetsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalScrollBox.NumPreviewWidgets"); }
    int& NumWidgetsBeforeWrappingField() const
    { return *GetNativePointerField<int*>(this, "UPrimalScrollBox.NumWidgetsBeforeWrapping"); }
    BrzCampoPonteiro OnScrollBarVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.OnScrollBarVisibilityChanged")); }
    BrzCampoPonteiro OnUserScrolledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.OnUserScrolled")); }
    unsigned char& OrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.Orientation"); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.PixelSnapping")); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalScrollBox.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.RenderTransformPivot")); }
    float& ScrollAnimationInterpolationSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalScrollBox.ScrollAnimationInterpolationSpeed"); }
    BrzCampoPonteiro ScrollBarPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ScrollBarPadding")); }
    BrzCampoPonteiro ScrollBarVisibilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ScrollBarVisibility")); }
    BrzCampoPonteiro ScrollWhenFocusChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ScrollWhenFocusChanges")); }
    BrzCampoPonteiro ScrollbarThicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ScrollbarThickness")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalScrollBox.Slot"); }
    BrzCampoPonteiro SlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.Slots")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.ToolTipWidgetDelegate")); }
    BitFieldValue<bool, unsigned __int32> UseScaledRenderClipForHUDChildren()
    { return { (void*)this, "UseScaledRenderClipForHUDChildren" }; }
    BitFieldValue<bool, unsigned __int32> UseWidgetPaddingAsMargin()
    { return { (void*)this, "UseWidgetPaddingAsMargin" }; }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.VisibilityKBMInput")); }
    float& WheelScrollMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalScrollBox.WheelScrollMultiplier"); }
    BrzCampoPonteiro WidgetBarStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.WidgetBarStyle")); }
    unsigned char& WidgetHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.WidgetHorizontalAlignment"); }
    BrzCampoPonteiro WidgetMarginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.WidgetMargin")); }
    BrzCampoPonteiro WidgetPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.WidgetPadding")); }
    BrzCampoPonteiro WidgetSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.WidgetSize")); }
    BrzCampoPonteiro WidgetStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.WidgetStyle")); }
    unsigned char& WidgetVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalScrollBox.WidgetVerticalAlignment"); }
    BitFieldValue<bool, unsigned __int32> bAllowRightClickDragScrolling()
    { return { (void*)this, "bAllowRightClickDragScrolling" }; }
    BitFieldValue<bool, unsigned __int32> bAnimateWheelScrolling()
    { return { (void*)this, "bAnimateWheelScrolling" }; }
    BitFieldValue<bool, unsigned __int32> bCanNavigateToDifferentPanel()
    { return { (void*)this, "bCanNavigateToDifferentPanel" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTouchScrolling()
    { return { (void*)this, "bEnableTouchScrolling" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowGamepadHighlight()
    { return { (void*)this, "bForceAllowGamepadHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadMovementMovesScrollBox()
    { return { (void*)this, "bGamepadMovementMovesScrollBox" }; }
    BitFieldValue<bool, unsigned __int32> bHighlightInsteadOfChild()
    { return { (void*)this, "bHighlightInsteadOfChild" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalScrollBox.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalAllowRightSpecialStickScroll()
    { return { (void*)this, "bPrimalAllowRightSpecialStickScroll" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALSCROLLBOX_H
