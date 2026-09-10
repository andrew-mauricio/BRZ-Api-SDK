// ==========================================================================
//  UCheatFunctionInfoEntryButton — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UCHEATFUNCTIONINFOENTRYBUTTON_H
#define BRZ_SDK_JOGO_UCHEATFUNCTIONINFOENTRYBUTTON_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;


struct UCheatFunctionInfoEntryButton
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UCheatFunctionInfoEntryButton"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatFunctionInfoEntryButton.DrawWidget(FCanvas&,UCanvas&,UE::Math::TIntPoint<int>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawWidget(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "UCheatFunctionInfoEntryButton.DrawWidget(FCanvas&,UCanvas&,UE::Math::TIntPoint<int>&,UE::Math::TIntRect<int>&,bool)", a0, a1, a2, a3, a4);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.AccessibleWidgetData")); }
    FString& AdditionalDisplayStringField() const
    { return *GetNativePointerField<FString*>(this, "UCheatFunctionInfoEntryButton.AdditionalDisplayString"); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.AdjacentUpName"); }
    BrzCampoPonteiro AltHighlightBGTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.AltHighlightBGTexture")); }
    BrzCampoPonteiro BackgroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.BackgroundColor")); }
    unsigned char& ClickMethodField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.ClickMethod"); }
    BitFieldValue<bool, unsigned __int32> ClipChildren()
    { return { (void*)this, "ClipChildren" }; }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ColorAndOpacity")); }
    BrzCampoPonteiro ContextMenuAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ContextMenuAnchor")); }
    FName& ContextMenuAnchorNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.ContextMenuAnchorName"); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UCheatFunctionInfoEntryButton.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.CustomToolTipVerticalAlignment"); }
    BrzCampoPonteiro DisabledColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisabledColor")); }
    FString& DisplayStringField() const
    { return *GetNativePointerField<FString*>(this, "UCheatFunctionInfoEntryButton.DisplayString"); }
    BrzCampoPonteiro DisplayStringColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisplayStringColor")); }
    BrzCampoPonteiro DisplayStringFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisplayStringFont")); }
    BrzCampoPonteiro DisplayStringOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisplayStringOffset")); }
    BrzCampoPonteiro DisplayStringScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisplayStringScale")); }
    BrzCampoPonteiro DisplayStringSelectedColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.DisplayStringSelectedColor")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.FlowDirectionPreference")); }
    float& FolderNameTextClipOffsetField() const
    { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.FolderNameTextClipOffset"); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ForegroundColor")); }
    FName& FunctionNameField() const
    { return *GetNativePointerField<FName*>(this, "UCheatFunctionInfoEntryButton.FunctionName"); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.GamepadSelectClosestDistanceMultiplier"); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    BitFieldValue<bool, unsigned __int32> IsFocusable()
    { return { (void*)this, "IsFocusable" }; }
    BrzCampoPonteiro ItemIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ItemIcon")); }
    BrzCampoPonteiro MyDataListEntryWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.MyDataListEntryWidget")); }
    BrzCampoPonteiro MyIconMatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.MyIconMat")); }
    float& NameOffsetField() const
    { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.NameOffset"); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.Navigation")); }
    BrzCampoPonteiro OnClickedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnClicked")); }
    BrzCampoPonteiro OnClickedObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnClickedObject")); }
    BrzCampoPonteiro OnDraggedObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnDraggedObject")); }
    BrzCampoPonteiro OnGamepadClickedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnGamepadClicked")); }
    BrzCampoPonteiro OnGamepadClickedObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnGamepadClickedObject")); }
    BrzCampoPonteiro OnHoveredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnHovered")); }
    BrzCampoPonteiro OnHoveredObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnHoveredObject")); }
    BrzCampoPonteiro OnPressedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnPressed")); }
    BrzCampoPonteiro OnReleasedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnReleased")); }
    BrzCampoPonteiro OnSecondaryClickedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnSecondaryClicked")); }
    BrzCampoPonteiro OnSecondaryClickedObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnSecondaryClickedObject")); }
    BrzCampoPonteiro OnUnhoveredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnUnhovered")); }
    BrzCampoPonteiro OnUnhoveredObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OnUnhoveredObject")); }
    BrzCampoPonteiro OverrideDisabledIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OverrideDisabledIcon")); }
    BrzCampoPonteiro OverridenTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.OverridenTextColor")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.PixelSnapping")); }
    unsigned char& PressMethodField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.PressMethod"); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.RenderTransformPivot")); }
    BrzCampoPonteiro SelectedBackgroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.SelectedBackgroundColor")); }
    BrzCampoPonteiro SelectedIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.SelectedIcon")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UCheatFunctionInfoEntryButton.Slot"); }
    BrzCampoPonteiro SlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.Slots")); }
    float& TextDisplayStringSizeField() const
    { return *GetNativePointerField<float*>(this, "UCheatFunctionInfoEntryButton.TextDisplayStringSize"); }
    BrzCampoPonteiro TintColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.TintColorOverride")); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.ToolTipWidgetDelegate")); }
    unsigned char& TouchMethodField() const
    { return *GetNativePointerField<unsigned char*>(this, "UCheatFunctionInfoEntryButton.TouchMethod"); }
    BitFieldValue<bool, unsigned __int32> UseScaledRenderClipForHUDChildren()
    { return { (void*)this, "UseScaledRenderClipForHUDChildren" }; }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.VisibilityKBMInput")); }
    BrzCampoPonteiro WidgetStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.WidgetStyle")); }
    BrzCampoPonteiro WrappedTextSpacingAdjustField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.WrappedTextSpacingAdjust")); }
    BitFieldValue<bool, unsigned __int32> bAllowClickingWhenNoEntry()
    { return { (void*)this, "bAllowClickingWhenNoEntry" }; }
    BitFieldValue<bool, unsigned __int32> bAllowExtraIcon()
    { return { (void*)this, "bAllowExtraIcon" }; }
    BitFieldValue<bool, unsigned __int32> bCanNavigateToDifferentPanel()
    { return { (void*)this, "bCanNavigateToDifferentPanel" }; }
    BitFieldValue<bool, unsigned __int32> bClickable()
    { return { (void*)this, "bClickable" }; }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    BitFieldValue<bool, unsigned __int32> bDataListAutomaticallyOverrideEnabled()
    { return { (void*)this, "bDataListAutomaticallyOverrideEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bDataListAutomaticallyOverrideText()
    { return { (void*)this, "bDataListAutomaticallyOverrideText" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayStringCenterX()
    { return { (void*)this, "bDisplayStringCenterX" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayStringCenterY()
    { return { (void*)this, "bDisplayStringCenterY" }; }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bDraggable()
    { return { (void*)this, "bDraggable" }; }
    bool& bEnabledField() const
    { return *GetNativePointerField<bool*>(this, "UCheatFunctionInfoEntryButton.bEnabled"); }
    BitFieldValue<bool, unsigned __int32> bForceDraggingDisabled()
    { return { (void*)this, "bForceDraggingDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bForceHandleMouseDown()
    { return { (void*)this, "bForceHandleMouseDown" }; }
    BitFieldValue<bool, unsigned __int32> bHasEngram()
    { return { (void*)this, "bHasEngram" }; }
    BitFieldValue<bool, unsigned __int32> bHighlightInsteadOfChild()
    { return { (void*)this, "bHighlightInsteadOfChild" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreParentAlpha()
    { return { (void*)this, "bIgnoreParentAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    BitFieldValue<bool, unsigned __int32> bKnownEngram()
    { return { (void*)this, "bKnownEngram" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideScreenCanvasProjection()
    { return { (void*)this, "bOverrideScreenCanvasProjection" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideStlye()
    { return { (void*)this, "bOverrideStlye" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTintColor()
    { return { (void*)this, "bOverrideTintColor" }; }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    BitFieldValue<bool, unsigned __int32> bRedirectGamepadPressToClick()
    { return { (void*)this, "bRedirectGamepadPressToClick" }; }
    BitFieldValue<bool, unsigned __int32> bSelected()
    { return { (void*)this, "bSelected" }; }
    BitFieldValue<bool, unsigned __int32> bSetIndexPlusOneToDisplayString()
    { return { (void*)this, "bSetIndexPlusOneToDisplayString" }; }
    BitFieldValue<bool, unsigned __int32> bShowDisplayStringWhenHasItem()
    { return { (void*)this, "bShowDisplayStringWhenHasItem" }; }
    BitFieldValue<bool, unsigned __int32> bToggleButton()
    { return { (void*)this, "bToggleButton" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTextColor()
    { return { (void*)this, "bUseCustomTextColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseDataProviderCustomColor()
    { return { (void*)this, "bUseDataProviderCustomColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseDisabledStyle()
    { return { (void*)this, "bUseDisabledStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseDisplayString()
    { return { (void*)this, "bUseDisplayString" }; }
    BitFieldValue<bool, unsigned __int32> bUseHoverSound()
    { return { (void*)this, "bUseHoverSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseSelectedBackgroundColor()
    { return { (void*)this, "bUseSelectedBackgroundColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
    BitFieldValue<bool, unsigned __int32> bWrapText()
    { return { (void*)this, "bWrapText" }; }
    BrzCampoPonteiro functionNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatFunctionInfoEntryButton.FunctionName")); }
    BitFieldValue<bool, unsigned __int32> bCenterDisplayName()
    { return { (void*)this, "bCenterDisplayName" }; }
    BitFieldValue<bool, unsigned __int32> bIsCustom()
    { return { (void*)this, "bIsCustom" }; }

};

#endif  // BRZ_SDK_JOGO_UCHEATFUNCTIONINFOENTRYBUTTON_H
