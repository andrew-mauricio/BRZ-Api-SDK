// ==========================================================================
//  UPrimalUI — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALUI_H
#define BRZ_SDK_JOGO_UPRIMALUI_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AShooterPlayerController;
struct AShooterPlayerState;
struct UInputComponent;


struct UPrimalUI
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalUI"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.AddToViewport(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToViewport(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI.AddToViewport(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.AddWidgetToRoot(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddWidgetToRoot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.AddWidgetToRoot(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.AddedToViewport()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddedToViewport() const
    {
        return NativeCall<void*>(this, "UPrimalUI.AddedToViewport()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.AutoScrollCancel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoScrollCancel() const
    {
        return NativeCall<void*>(this, "UPrimalUI.AutoScrollCancel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.AutoScrollManage(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoScrollManage(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalUI.AutoScrollManage(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPCycleHighlighted()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPCycleHighlighted() const
    {
        return NativeCall<void*>(this, "UPrimalUI.BPCycleHighlighted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPDisableWorldRendering()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPDisableWorldRendering() const
    {
        return NativeCall<void*>(this, "UPrimalUI.BPDisableWorldRendering()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPGameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalUI.BPGameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPGamepadReleased(FKey)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPGamepadReleased(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.BPGamepadReleased(FKey)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPHandleDockedModeChange(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPHandleDockedModeChange(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.BPHandleDockedModeChange(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPHighlightWidgetOnStart()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPHighlightWidgetOnStart() const
    {
        return NativeCall<void*>(this, "UPrimalUI.BPHighlightWidgetOnStart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPInitForObjects(UObject*,UObject*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPInitForObjects(void* a0, void* a1, int a2, int a3) const
    {
        return NativeCall<void*, void*, void*, int, int>(this, "UPrimalUI.BPInitForObjects(UObject*,UObject*,int,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPProcessSplitscreenAndAddToViewport(bool,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro BPProcessSplitscreenAndAddToViewport(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "UPrimalUI.BPProcessSplitscreenAndAddToViewport(bool,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BPReleasedVirtualAccept()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BPReleasedVirtualAccept() const
    {
        return NativeCall<void*>(this, "UPrimalUI.BPReleasedVirtualAccept()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.BuildFrameInterpolationSensitiveBrushCache()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BuildFrameInterpolationSensitiveBrushCache() const
    {
        return NativeCall<void*>(this, "UPrimalUI.BuildFrameInterpolationSensitiveBrushCache()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CacheLastHighlightedWidget(UWidget*)
    // endereco: cache_pdb_25090264
    BrzPonteiro CacheLastHighlightedWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.CacheLastHighlightedWidget(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CacheSplitScreenValues()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro CacheSplitScreenValues() const
    {
        return NativeCall<void*>(this, "UPrimalUI.CacheSplitScreenValues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CanBeHighlightedForGamePad(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanBeHighlightedForGamePad(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.CanBeHighlightedForGamePad(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CanControlScene(FControllerEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanControlScene(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.CanControlScene(FControllerEvent&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ChangeChildrenTextColor(UPanelWidget&,FSlateColor&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ChangeChildrenTextColor(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.ChangeChildrenTextColor(UPanelWidget&,FSlateColor&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ChangeChildrenTextColorBP(UPanelWidget*,FSlateColor,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ChangeChildrenTextColorBP(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.ChangeChildrenTextColorBP(UPanelWidget*,FSlateColor,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CheckGamepadActiveChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckGamepadActiveChanged(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.CheckGamepadActiveChanged(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CheckIfWidgetIsContainedInPrimalUI(UWidget*,UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckIfWidgetIsContainedInPrimalUI(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.CheckIfWidgetIsContainedInPrimalUI(UWidget*,UWidget*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CheckRehighlight(UPrimalItem*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckRehighlight(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalUI.CheckRehighlight(UPrimalItem*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CheckTickList()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckTickList() const
    {
        return NativeCall<void*>(this, "UPrimalUI.CheckTickList()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ClickedButton(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClickedButton(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.ClickedButton(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ClickedButtonWithController(UWidget*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClickedButtonWithController(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalUI.ClickedButtonWithController(UWidget*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CloseTooltip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseTooltip() const
    {
        return NativeCall<void*>(this, "UPrimalUI.CloseTooltip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CloseWithAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseWithAnimation() const
    {
        return NativeCall<void*>(this, "UPrimalUI.CloseWithAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ComponentsHasKeyboardFocus()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComponentsHasKeyboardFocus() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ComponentsHasKeyboardFocus()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CycleHighlighted(UWidget*,UDataListPanel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CycleHighlighted(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.CycleHighlighted(UWidget*,UDataListPanel*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.CycleHighlightedNew(UE::Math::TVector2<double>*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CycleHighlightedNew(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.CycleHighlightedNew(UE::Math::TVector2<double>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.EnableTooltip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableTooltip() const
    {
        return NativeCall<void*>(this, "UPrimalUI.EnableTooltip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.EnsureAlphaNumeric(FString&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnsureAlphaNumeric(const FString& a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalUI.EnsureAlphaNumeric(FString&,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro EnsureAlphaNumeric(FString* a0, int a1) const
    { return EnsureAlphaNumeric(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.EscapeClosed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EscapeClosed() const
    {
        return NativeCall<void*>(this, "UPrimalUI.EscapeClosed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.FindWidget(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindWidget(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.FindWidget(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FindWidget(FString* a0) const
    { return FindWidget(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.FixHighlights()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FixHighlights() const
    {
        return NativeCall<void*>(this, "UPrimalUI.FixHighlights()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GameTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GameTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalUI.GameTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetAbsPosSize(UWidget*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAbsPosSize(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalUI.GetAbsPosSize(UWidget*,UE::Math::TVector2<double>&,UE::Math::TVector2<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetAllWidgets(TArray<UWidget*,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllWidgets(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalUI.GetAllWidgets(TArray<UWidget*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetBasePC()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBasePC() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetBasePC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetCursorPos()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCursorPos() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetCursorPos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetCursorPosOnSlider(USlider*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCursorPosOnSlider(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetCursorPosOnSlider(USlider*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetDirectionStartAndEndPoint(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDirectionStartAndEndPoint(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalUI.GetDirectionStartAndEndPoint(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector2<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetFrameInterpolationSensitiveBrushAlpha(UPrimalUI::FResolvedFrameInterpolationSensiti
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFrameInterpolationSensitiveBrushAlpha(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetFrameInterpolationSensitiveBrushAlpha(UPrimalUI::FResolvedFrameInterpolationSensitiveBrushEntry&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetHighlightedOrVirtualCursorWidget(UE::Math::TVector2<double>*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHighlightedOrVirtualCursorWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetHighlightedOrVirtualCursorWidget(UE::Math::TVector2<double>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetNextParentPrimalUIInTree(UWidget*,UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNextParentPrimalUIInTree(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.GetNextParentPrimalUIInTree(UWidget*,UWidget*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetOpenComboBox()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOpenComboBox() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetOpenComboBox()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetPC()
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerController* GetPC() const
    {
        return NativeCall<AShooterPlayerController*>(this, "UPrimalUI.GetPC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetParentBorder(UWidget*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=105+chamadores=2]]
    BrzPonteiro GetParentBorder(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetParentBorder(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetParentPrimalUI(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetParentPrimalUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetParentPrimalUI(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetPawn()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPawn() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetPawn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetPlayerState()
    // endereco: casamento de bytes com a build de referencia
    AShooterPlayerState* GetPlayerState() const
    {
        return NativeCall<AShooterPlayerState*>(this, "UPrimalUI.GetPlayerState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetPrimalUiWithOpenTooltip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPrimalUiWithOpenTooltip() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetPrimalUiWithOpenTooltip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetShooterHud()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShooterHud() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetShooterHud()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetSizeboxForExtraHandheldScaling()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetSizeboxForExtraHandheldScaling() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetSizeboxForExtraHandheldScaling()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetTooltipClass(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetTooltipClass(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetTopLevelParentPrimalUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTopLevelParentPrimalUI() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetTopLevelParentPrimalUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetWidgetCenter(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWidgetCenter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetWidgetCenter(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetWidgetGeometry(UWidget*,FGeometry&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWidgetGeometry(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.GetWidgetGeometry(UWidget*,FGeometry&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetWidgetParentScrollBox(UWidget*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=105+chamadores=4]]
    BrzPonteiro GetWidgetParentScrollBox(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.GetWidgetParentScrollBox(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.GetWidgetToScaleForHandheld()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetWidgetToScaleForHandheld() const
    {
        return NativeCall<void*>(this, "UPrimalUI.GetWidgetToScaleForHandheld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleButtonOverrides()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleButtonOverrides() const
    {
        return NativeCall<void*>(this, "UPrimalUI.HandleButtonOverrides()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleControllerAnalogValueChanged(FControllerEvent)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=4/4]]
    BrzPonteiro HandleControllerAnalogValueChanged(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.HandleControllerAnalogValueChanged(FControllerEvent)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleControllerButtonPressedFromViewport(FControllerEvent)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleControllerButtonPressedFromViewport(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.HandleControllerButtonPressedFromViewport(FControllerEvent)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleControllerButtonReleasedFromViewport(FControllerEvent)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleControllerButtonReleasedFromViewport(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.HandleControllerButtonReleasedFromViewport(FControllerEvent)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleDockedModeChanges()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleDockedModeChanges() const
    {
        return NativeCall<void*>(this, "UPrimalUI.HandleDockedModeChanges()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleGamepadPressed(FControllerEvent,FKeyEvent&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGamepadPressed(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.HandleGamepadPressed(FControllerEvent,FKeyEvent&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HandleGamepadReleased(FControllerEvent,FKeyEvent&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleGamepadReleased(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.HandleGamepadReleased(FControllerEvent,FKeyEvent&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HighlightDefaultWidget(UPanelWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightDefaultWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.HighlightDefaultWidget(UPanelWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HighlightItemInDataListByIndex(UDataListPanel*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightItemInDataListByIndex(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalUI.HighlightItemInDataListByIndex(UDataListPanel*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HighlightPrevHighlightedWidget()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightPrevHighlightedWidget() const
    {
        return NativeCall<void*>(this, "UPrimalUI.HighlightPrevHighlightedWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HighlightWidgetOnStart(UPanelWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightWidgetOnStart(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.HighlightWidgetOnStart(UPanelWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.HighlightedWidgetPressed(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HighlightedWidgetPressed(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI.HighlightedWidgetPressed(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.InitializeButtonNameWithClick(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeButtonNameWithClick(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalUI.InitializeButtonNameWithClick(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.InitializeButtonWithClick(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeButtonWithClick(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.InitializeButtonWithClick(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InitializeButtonWithClick(FString* a0) const
    { return InitializeButtonWithClick(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.IsWidgetATab(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWidgetATab(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.IsWidgetATab(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.IsWidgetInView(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWidgetInView(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.IsWidgetInView(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.IsWidgetVisibleInScrollBox(UWidget*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWidgetVisibleInScrollBox(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalUI.IsWidgetVisibleInScrollBox(UWidget*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ManageVirtualCursorInit()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ManageVirtualCursorInit() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ManageVirtualCursorInit()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ManageWidgetGeometry(FGeometry&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ManageWidgetGeometry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.ManageWidgetGeometry(FGeometry&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.MoveVirtualCursorToWidget(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MoveVirtualCursorToWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.MoveVirtualCursorToWidget(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeConstruct()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeConstruct() const
    {
        return NativeCall<void*>(this, "UPrimalUI.NativeConstruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeDestruct()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeDestruct() const
    {
        return NativeCall<void*>(this, "UPrimalUI.NativeDestruct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeOnAnalogValueChanged(FGeometry&,FAnalogInputEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeOnAnalogValueChanged(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.NativeOnAnalogValueChanged(FGeometry&,FAnalogInputEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeOnKeyDown(FGeometry&,FKeyEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeOnKeyDown(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.NativeOnKeyDown(FGeometry&,FKeyEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeOnKeyUp(FGeometry&,FKeyEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeOnKeyUp(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.NativeOnKeyUp(FGeometry&,FKeyEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeOnMouseButtonDown(FGeometry&,FPointerEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeOnMouseButtonDown(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.NativeOnMouseButtonDown(FGeometry&,FPointerEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.NativeTick(FGeometry&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NativeTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalUI.NativeTick(FGeometry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnAnimationFinishedPlaying(UUMGSequencePlayer&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnAnimationFinishedPlaying(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.OnAnimationFinishedPlaying(UUMGSequencePlayer&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnConfirmationDialogClosed(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnConfirmationDialogClosed(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.OnConfirmationDialogClosed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnControllerAnalogValueChanged_Implementation(FGeometry,FAnalogInputEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnControllerAnalogValueChanged_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.OnControllerAnalogValueChanged_Implementation(FGeometry,FAnalogInputEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnCreateCredits(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCreateCredits(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.OnCreateCredits(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnDLCConfirmationDialogClosed(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDLCConfirmationDialogClosed(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.OnDLCConfirmationDialogClosed(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnGamepadActiveChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGamepadActiveChanged(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.OnGamepadActiveChanged(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnGamepadActiveChangedBP(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGamepadActiveChangedBP(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.OnGamepadActiveChangedBP(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnGamepadButtonDownEvent(FGeometry&,FControllerEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGamepadButtonDownEvent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.OnGamepadButtonDownEvent(FGeometry&,FControllerEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnKeyDownEvent(FGeometry&,FKeyEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnKeyDownEvent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.OnKeyDownEvent(FGeometry&,FKeyEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OnMouseButtonDownEvent_Implementation(FGeometry&,FPointerEvent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnMouseButtonDownEvent_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalUI.OnMouseButtonDownEvent_Implementation(FGeometry&,FPointerEvent&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.OpenTheStoreDLCPage(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OpenTheStoreDLCPage(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.OpenTheStoreDLCPage(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OpenTheStoreDLCPage(FString* a0) const
    { return OpenTheStoreDLCPage(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.PopulateWidgetGeometryCache(FArrangedWidget&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PopulateWidgetGeometryCache(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.PopulateWidgetGeometryCache(FArrangedWidget&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.PostGameTickApplyFrameInterpolationSensitiveBrushState(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostGameTickApplyFrameInterpolationSensitiveBrushState(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.PostGameTickApplyFrameInterpolationSensitiveBrushState(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.PressedVirtualAccept()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PressedVirtualAccept() const
    {
        return NativeCall<void*>(this, "UPrimalUI.PressedVirtualAccept()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ProcessSplitscreen(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessSplitscreen(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.ProcessSplitscreen(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ProcessSplitscreenAndAddToViewport(bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessSplitscreenAndAddToViewport(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "UPrimalUI.ProcessSplitscreenAndAddToViewport(bool,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ProcessSplitscreenScaling(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessSplitscreenScaling(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.ProcessSplitscreenScaling(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ReHighlightSlotInDataList(int,UDataListPanel*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ReHighlightSlotInDataList(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalUI.ReHighlightSlotInDataList(int,UDataListPanel*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.RefreshKeyBindings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshKeyBindings() const
    {
        return NativeCall<void*>(this, "UPrimalUI.RefreshKeyBindings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ReleasedVirtualAccept(unsignedint,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleasedVirtualAccept(unsigned int a0, bool a1) const
    {
        return NativeCall<void*, unsigned int, bool>(this, "UPrimalUI.ReleasedVirtualAccept(unsignedint,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.RemoveFromParent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromParent() const
    {
        return NativeCall<void*>(this, "UPrimalUI.RemoveFromParent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.RemoveFromViewport()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromViewport() const
    {
        return NativeCall<void*>(this, "UPrimalUI.RemoveFromViewport()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.RemoveWidget(UWidget*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RemoveWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.RemoveWidget(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.RemovedFromViewport()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro RemovedFromViewport() const
    {
        return NativeCall<void*>(this, "UPrimalUI.RemovedFromViewport()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ResetAllScrollBars()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetAllScrollBars() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ResetAllScrollBars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ResetFrameInterpolationSensitiveBrushRuntimeState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetFrameInterpolationSensitiveBrushRuntimeState() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ResetFrameInterpolationSensitiveBrushRuntimeState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ResolveFrameInterpolationSensitiveBrushes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveFrameInterpolationSensitiveBrushes() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ResolveFrameInterpolationSensitiveBrushes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SelectClosestToLastHighlightedPos()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SelectClosestToLastHighlightedPos() const
    {
        return NativeCall<void*>(this, "UPrimalUI.SelectClosestToLastHighlightedPos()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetFrameInterpolationSensitiveBrushAlpha(UPrimalUI::FResolvedFrameInterpolationSensiti
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFrameInterpolationSensitiveBrushAlpha(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalUI.SetFrameInterpolationSensitiveBrushAlpha(UPrimalUI::FResolvedFrameInterpolationSensitiveBrushEntry&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetHighlightedWidget(UWidget*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetHighlightedWidget(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalUI.SetHighlightedWidget(UWidget*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetInputMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetInputMode() const
    {
        return NativeCall<void*>(this, "UPrimalUI.SetInputMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetOverlayWidget(UWidget*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetOverlayWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.SetOverlayWidget(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetRecentlyExpandedWidget(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetRecentlyExpandedWidget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.SetRecentlyExpandedWidget(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetSelectedAndDraggedEntry(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetSelectedAndDraggedEntry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.SetSelectedAndDraggedEntry(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetVirtualCursorPosition(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetVirtualCursorPosition(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.SetVirtualCursorPosition(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetWidgetNativeContext(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWidgetNativeContext(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "UPrimalUI.SetWidgetNativeContext(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetupInputFocusAndHighlight()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupInputFocusAndHighlight() const
    {
        return NativeCall<void*>(this, "UPrimalUI.SetupInputFocusAndHighlight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetupSpecialWidgetAdjacents(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupSpecialWidgetAdjacents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.SetupSpecialWidgetAdjacents(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.SetupWidgetAdjacents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupWidgetAdjacents() const
    {
        return NativeCall<void*>(this, "UPrimalUI.SetupWidgetAdjacents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShouldHighlightParentPanel(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldHighlightParentPanel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.ShouldHighlightParentPanel(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShowConfirmationDialog(FString&,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowConfirmationDialog(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.ShowConfirmationDialog(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowConfirmationDialog(FString* a0, FString* a1, bool a2) const
    { return ShowConfirmationDialog(*a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShowConfirmationDialogBP(FString&,FString&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro ShowConfirmationDialogBP(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.ShowConfirmationDialogBP(FString&,FString&,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowConfirmationDialogBP(FString* a0, FString* a1, bool a2) const
    { return ShowConfirmationDialogBP(*a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShowDLCConfirmationDialog(EDLCSelector)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowDLCConfirmationDialog(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalUI.ShowDLCConfirmationDialog(EDLCSelector)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShowToolTip(UWidget*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowToolTip(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.ShowToolTip(UWidget*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.ShowToolTipForHighlighted()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowToolTipForHighlighted() const
    {
        return NativeCall<void*>(this, "UPrimalUI.ShowToolTipForHighlighted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.StopAllHapticEffects(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAllHapticEffects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalUI.StopAllHapticEffects(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.StopHighlightedWidgets()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopHighlightedWidgets() const
    {
        return NativeCall<void*>(this, "UPrimalUI.StopHighlightedWidgets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.UnHighlightWidget(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnHighlightWidget(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.UnHighlightWidget(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.UpdateTooltips(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTooltips(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalUI.UpdateTooltips(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.UsingProController(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro UsingProController(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalUI.UsingProController(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.UsingVirtualCursor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UsingVirtualCursor() const
    {
        return NativeCall<void*>(this, "UPrimalUI.UsingVirtualCursor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.WantsVisible()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WantsVisible() const
    {
        return NativeCall<void*>(this, "UPrimalUI.WantsVisible()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalUI.WidgetTreeGetAllChildWidgets(UWidget*,TArray<UWidget*,TSizedDefaultAllocator<32>>&,boo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WidgetTreeGetAllChildWidgets(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalUI.WidgetTreeGetAllChildWidgets(UWidget*,TArray<UWidget*,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    BrzCampoPonteiro AccessibleWidgetDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.AccessibleWidgetData")); }
    BrzCampoPonteiro ActiveSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ActiveSequencePlayers")); }
    FName& AdjacentDownNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI.AdjacentDownName"); }
    FName& AdjacentLeftNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI.AdjacentLeftName"); }
    FName& AdjacentRightNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI.AdjacentRightName"); }
    FName& AdjacentUpNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI.AdjacentUpName"); }
    float& AnalogDeltaXField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaX"); }
    float& AnalogDeltaYField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.AnalogDeltaY"); }
    BrzCampoPonteiro AnimationCallbacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.AnimationCallbacks")); }
    BrzCampoPonteiro AnimationTickManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.AnimationTickManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +72, medido na build 25090264
    //  (offset absoluto medido: 0x554; confianca media)
    void*& CachedItemForReHighlightField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +80, medido na build 25090264
    //  (offset absoluto medido: 0x738; confianca media)
    void*& CachedWidgetGeometryField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 80); }
    BrzCampoPonteiro ClippingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.Clipping")); }
    BrzCampoPonteiro ColorAndOpacityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ColorAndOpacity")); }
    BrzCampoPonteiro ColorAndOpacityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ColorAndOpacityDelegate")); }
    BrzCampoPonteiro ConfirmationDialogUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ConfirmationDialogUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +56, medido na build 25090264
    //  (offset absoluto medido: 0x544; confianca media)
    void*& CurrentHighlightedField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +172, medido na build 25090264
    //  (offset absoluto medido: 0x5B8; confianca baixa)
    void*& CurrentToolTipInstanceField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 172); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +184, medido na build 25090264
    //  (offset absoluto medido: 0x5C4; confianca baixa)
    void*& CurrentToolTipSponsorField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 184); }
    unsigned char& CursorField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.Cursor"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.CustomData"); }
    BrzCampoPonteiro CustomToolTipBlueprintOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.CustomToolTipBlueprintOverride")); }
    unsigned char& CustomToolTipHorizontalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.CustomToolTipHorizontalAlignment"); }
    unsigned char& CustomToolTipOrientationField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.CustomToolTipOrientation"); }
    BrzCampoPonteiro CustomToolTipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.CustomToolTipPadding")); }
    BrzCampoPonteiro CustomToolTipStringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.CustomToolTipString")); }
    unsigned char& CustomToolTipVerticalAlignmentField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.CustomToolTipVerticalAlignment"); }
    float& DPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.DPIScaler"); }
    FName& DefaultHighlightWidgetOverrideNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalUI.DefaultHighlightWidgetOverrideName"); }
    BrzCampoPonteiro DefaultToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.DefaultToolTipWidget")); }
    BrzCampoPonteiro DesiredFocusWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.DesiredFocusWidget")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +68, medido na build 25090264
    //  (offset absoluto medido: 0x4F4; confianca media)
    void*& DraggedWidgetField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 68); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.Extensions")); }
    BrzCampoPonteiro FlowDirectionPreferenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.FlowDirectionPreference")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +192, medido na build 25090264
    //  (offset absoluto medido: 0x5CC; confianca baixa)
    void*& ForcedWidgetToolTipField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 192); }
    BrzCampoPonteiro ForegroundColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ForegroundColor")); }
    BrzCampoPonteiro ForegroundColorDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ForegroundColorDelegate")); }
    BrzCampoPonteiro FrameInterpolationSensitiveBrushesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.FrameInterpolationSensitiveBrushes")); }
    float& GamepadSelectClosestDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.GamepadSelectClosestDistanceMultiplier"); }
    BrzCampoPonteiro HTTPGetResponseEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.HTTPGetResponseEvent")); }
    BitFieldValue<bool, unsigned __int32> HandleVisibilityWithInput()
    { return { (void*)this, "HandleVisibilityWithInput" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +184, medido na build 25090264
    //  (offset absoluto medido: 0x7A0; confianca baixa)
    void*& HasBeenAddedToParentRemoveListField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +224, medido na build 25090264
    //  (offset absoluto medido: 0x7C8; confianca baixa)
    void*& HasScaledForSplitscreenField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 224); }
    unsigned char& HighlightStartPointTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalUI.HighlightStartPointType"); }
    BitFieldValue<bool, unsigned __int32> Highlightable()
    { return { (void*)this, "Highlightable" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +48, medido na build 25090264
    //  (offset absoluto medido: 0x4E0; confianca media)
    void*& HighlightedWidgetsField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 48); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "UPrimalUI.InputComponent"); }
    TWeakObjectPtr<void>& ItemContainerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalUI.ItemContainer"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +20, medido na build 25090264
    //  (offset absoluto medido: 0x4C4; confianca alta)
    void*& LastFocusedDataWidgetField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +12, medido na build 25090264
    //  (offset absoluto medido: 0x4BC; confianca alta)
    void*& LastFocusedWidgetField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +124, medido na build 25090264
    //  (offset absoluto medido: 0x588; confianca media)
    void*& LastGamepadMovementTimeField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 124); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +92, medido na build 25090264
    //  (offset absoluto medido: 0x568; confianca media)
    void*& LastHighlightedScreenPosField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 92); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +164, medido na build 25090264
    //  (offset absoluto medido: 0x5B0; confianca baixa)
    void*& LastHighlightedWidgetField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 164); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +16, medido na build 25090264
    //  (offset absoluto medido: 0x6F8; confianca media)
    void*& LastTargetVelocityYField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +8, medido na build 25090264
    //  (offset absoluto medido: 0x6F0; confianca media)
    void*& LastTooltipChangeTimeField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +108, medido na build 25090264
    //  (offset absoluto medido: 0x578; confianca media)
    void*& LastXLeftField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +112, medido na build 25090264
    //  (offset absoluto medido: 0x57C; confianca media)
    void*& LastYLeftField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 112); }
    BrzCampoPonteiro NamedSlotBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.NamedSlotBindings")); }
    BrzCampoPonteiro NativeBindingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.NativeBindings")); }
    BrzCampoPonteiro NavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.Navigation")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +226, medido na build 25090264
    //  (offset absoluto medido: 0x7CA; confianca baixa)
    void*& NumTimesRefreshedWhileCollectingGarbageField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 226); }
    BrzCampoPonteiro OnRemovedFromViewportField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.OnRemovedFromViewport")); }
    BrzCampoPonteiro OnVisibilityChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.OnVisibilityChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +80, medido na build 25090264
    //  (offset absoluto medido: 0x500; confianca media)
    void*& OpenedTimeField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +196, medido na build 25090264
    //  (offset absoluto medido: 0x7AC; confianca baixa)
    void*& OrgRenderTransformPivotXField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 196); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +188, medido na build 25090264
    //  (offset absoluto medido: 0x7A4; confianca baixa)
    void*& OrgRenderTransformPivotYField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 188); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +208, medido na build 25090264
    //  (offset absoluto medido: 0x7B8; confianca baixa)
    void*& OrgRenderTransformScaleField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 208); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +200, medido na build 25090264
    //  (offset absoluto medido: 0x7B0; confianca baixa)
    void*& OrgRenderTransformTranslationXField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +192, medido na build 25090264
    //  (offset absoluto medido: 0x7A8; confianca baixa)
    void*& OrgRenderTransformTranslationYField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 192); }
    BrzCampoPonteiro OriginalSizeBoxUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.OriginalSizeBoxUnstretchedSize")); }
    BrzCampoPonteiro OriginalUnStretchedAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.OriginalUnStretchedAnchors")); }
    BrzCampoPonteiro OriginalUnstretchedSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.OriginalUnstretchedSize")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +80, medido na build 25090264
    //  (offset absoluto medido: 0x55C; confianca media)
    void*& OverlayWidgetField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +4, medido na build 25090264
    //  (offset absoluto medido: 0x4B4; confianca alta)
    void*& OverrideViewingInventoryCompField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 4); }
    BrzCampoPonteiro PaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.Padding")); }
    BrzCampoPonteiro PixelSnappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.PixelSnapping")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +64, medido na build 25090264
    //  (offset absoluto medido: 0x728; confianca media)
    void*& PooledToolTipsField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +48, medido na build 25090264
    //  (offset absoluto medido: 0x718; confianca media)
    void*& PreviousToolTipsField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 48); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.Priority"); }
    BrzCampoPonteiro QueuedWidgetAnimationTransitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.QueuedWidgetAnimationTransitions")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +168, medido na build 25090264
    //  (offset absoluto medido: 0x790; confianca baixa)
    void*& RemoveChildTickUIsField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 168); }
    float& RenderOpacityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.RenderOpacity"); }
    BrzCampoPonteiro RenderTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.RenderTransform")); }
    BrzCampoPonteiro RenderTransformPivotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.RenderTransformPivot")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +24, medido na build 25090264
    //  (offset absoluto medido: 0x700; confianca media)
    void*& ResolvedFrameInterpolationSensitiveBrushesField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +420, medido na build 25090264
    //  (offset absoluto medido: 0x6B0; confianca baixa)
    void*& RightStickFunctionModifierKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 420); }
    int& SceneStackPriorityField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.SceneStackPriority"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +324, medido na build 25090264
    //  (offset absoluto medido: 0x650; confianca baixa)
    void*& ScrollChatDownKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 324); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +348, medido na build 25090264
    //  (offset absoluto medido: 0x668; confianca baixa)
    void*& ScrollChatUpKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 348); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +20, medido na build 25090264
    //  (offset absoluto medido: 0x520; confianca media)
    void*& ScrollCurrentVelocityField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +396, medido na build 25090264
    //  (offset absoluto medido: 0x698; confianca baixa)
    void*& ScrollDownGamePadKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 396); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +4, medido na build 25090264
    //  (offset absoluto medido: 0x510; confianca media)
    void*& ScrollMaxVelocityField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +36, medido na build 25090264
    //  (offset absoluto medido: 0x530; confianca media)
    void*& ScrollTagetVelocityField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 36); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +372, medido na build 25090264
    //  (offset absoluto medido: 0x680; confianca baixa)
    void*& ScrollUpGamePadKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 372); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +148, medido na build 25090264
    //  (offset absoluto medido: 0x5A0; confianca baixa)
    void*& SelectClosestToLastHighlightedPosHandleField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 148); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +64, medido na build 25090264
    //  (offset absoluto medido: 0x54C; confianca media)
    void*& SelectedEntryField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +140, medido na build 25090264
    //  (offset absoluto medido: 0x598; confianca baixa)
    void*& SetupInputFocusAndHighlightHandleField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 140); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +276, medido na build 25090264
    //  (offset absoluto medido: 0x620; confianca baixa)
    void*& ShowAllianceChatKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 276); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +204, medido na build 25090264
    //  (offset absoluto medido: 0x5D8; confianca baixa)
    void*& ShowGlobalChatKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 204); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +252, medido na build 25090264
    //  (offset absoluto medido: 0x608; confianca baixa)
    void*& ShowLocalChatKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 252); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +156, medido na build 25090264
    //  (offset absoluto medido: 0x5A8; confianca baixa)
    void*& ShowToolTipForHighlightedHandleField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 156); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +228, medido na build 25090264
    //  (offset absoluto medido: 0x5F0; confianca baixa)
    void*& ShowTribeChatKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 228); }
    BrzCampoPonteiro SizeBoxHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.SizeBoxHandheldSize")); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.Slot"); }
    float& SplitscreenDPIScalerField() const
    { return *GetNativePointerField<float*>(this, "UPrimalUI.SplitscreenDPIScaler"); }
    BrzCampoPonteiro StoppedSequencePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.StoppedSequencePlayers")); }
    BrzCampoPonteiro StretchedHandheldAnchorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.StretchedHandheldAnchors")); }
    BrzCampoPonteiro StretchedHandheldSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.StretchedHandheldSize")); }
    BrzCampoPonteiro TickFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.TickFrequency")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +300, medido na build 25090264
    //  (offset absoluto medido: 0x638; confianca baixa)
    void*& ToggleAutoChatKeyField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 300); }
    BrzCampoPonteiro ToolTipTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ToolTipText")); }
    BrzCampoPonteiro ToolTipTextDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ToolTipTextDelegate")); }
    BrzCampoPonteiro ToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ToolTipWidget")); }
    BrzCampoPonteiro ToolTipWidgetDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.ToolTipWidgetDelegate")); }
    int& ViewportZOrderField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.ViewportZOrder"); }
    BitFieldValue<bool, unsigned __int32> Visibility()
    { return { (void*)this, "Visibility" }; }
    BrzCampoPonteiro VisibilityDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.VisibilityDelegate")); }
    BrzCampoPonteiro VisibilityGamepadInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.VisibilityGamepadInput")); }
    BrzCampoPonteiro VisibilityKBMInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.VisibilityKBMInput")); }
    BrzCampoPonteiro WidgetTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.WidgetTree")); }
    BrzCampoPonteiro XBoxFooterUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.XBoxFooterUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +228, medido na build 25090264
    //  (offset absoluto medido: 0x7CC; confianca baixa)
    void*& autoScrollWidgetField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 228); }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyRegisterInputOnConstruction()
    { return { (void*)this, "bAutomaticallyRegisterInputOnConstruction" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +160, medido na build 25090264
    //  (offset absoluto medido: 0x788; confianca baixa)
    void*& bBlockMovementForAddingField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +132, medido na build 25090264
    //  (offset absoluto medido: 0x590; confianca baixa)
    void*& bCanBeTopField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 132); }
    BitFieldValue<bool, unsigned __int32> bCreatedByConstructionScript()
    { return { (void*)this, "bCreatedByConstructionScript" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +225, medido na build 25090264
    //  (offset absoluto medido: 0x7C9; confianca baixa)
    void*& bDirtyCacheField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 225); }
    BitFieldValue<bool, unsigned __int32> bDisableAxisOrientedSweepTestOnMe()
    { return { (void*)this, "bDisableAxisOrientedSweepTestOnMe" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +447, medido na build 25090264
    //  (offset absoluto medido: 0x6CB; confianca baixa)
    void*& bDisableHighlightSetAfterAnimationIfCycleHighlightedField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 447); }
    BitFieldValue<bool, unsigned __int32> bDontRenderHighlight()
    { return { (void*)this, "bDontRenderHighlight" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +21, medido na build 25090264
    //  (offset absoluto medido: 0x6FD; confianca media)
    void*& bForceDirtyWidgetGeometryCacheField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +446, medido na build 25090264
    //  (offset absoluto medido: 0x6CA; confianca baixa)
    void*& bHasCycleHighlightedField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 446); }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedPaint()
    { return { (void*)this, "bHasScriptImplementedPaint" }; }
    BitFieldValue<bool, unsigned __int32> bHasScriptImplementedTick()
    { return { (void*)this, "bHasScriptImplementedTick" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +64, medido na build 25090264
    //  (offset absoluto medido: 0x4F0; confianca media)
    void*& bIsDraggingWidgetField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 64); }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BrzCampoPonteiro bIsEnabledDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalUI.bIsEnabledDelegate")); }
    BitFieldValue<bool, unsigned __int32> bIsFocusable()
    { return { (void*)this, "bIsFocusable" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +445, medido na build 25090264
    //  (offset absoluto medido: 0x6C9; confianca baixa)
    void*& bIsPaintingField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 445); }
    BitFieldValue<bool, unsigned __int32> bIsVariable()
    { return { (void*)this, "bIsVariable" }; }
    BitFieldValue<bool, unsigned __int32> bIsVolatile()
    { return { (void*)this, "bIsVolatile" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +53, medido na build 25090264
    //  (offset absoluto medido: 0x541; confianca media)
    void*& bKeepControllerOpenedToolTipField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 53); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +54, medido na build 25090264
    //  (offset absoluto medido: 0x542; confianca media)
    void*& bKeepToolTipOpenField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 54); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +444, medido na build 25090264
    //  (offset absoluto medido: 0x6C8; confianca baixa)
    void*& bModifyRightStickFunctionField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 444); }
    BitFieldValue<bool, unsigned __int32> bOverride_Cursor()
    { return { (void*)this, "bOverride_Cursor" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +40, medido na build 25090264
    //  (offset absoluto medido: 0x710; confianca media)
    void*& bPendingFrameInterpolationSensitiveBrushInitializationField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 40); }
    BitFieldValue<bool, unsigned __int32> bPrimalSetupSpecialAdjacents()
    { return { (void*)this, "bPrimalSetupSpecialAdjacents" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +116, medido na build 25090264
    //  (offset absoluto medido: 0x580; confianca media)
    void*& bRemovedFromViewportField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 116); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bCachedIsGamepadActive` +20, medido na build 25090264
    //  (offset absoluto medido: 0x6FC; confianca media)
    void*& bResetTooltipField() const
    { return BrzCampoAncorado<void*>(this, "bCachedIsGamepadActive", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +52, medido na build 25090264
    //  (offset absoluto medido: 0x540; confianca media)
    void*& bScrolledField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 52); }
    BitFieldValue<bool, unsigned __int32> bStopAction()
    { return { (void*)this, "bStopAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomTooltip()
    { return { (void*)this, "bUseCustomTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseWindowClippingForHighlight()
    { return { (void*)this, "bUseWindowClippingForHighlight" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +180, medido na build 25090264
    //  (offset absoluto medido: 0x5C0; confianca baixa)
    void*& bUsingTooltipField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 180); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +448, medido na build 25090264
    //  (offset absoluto medido: 0x6CC; confianca baixa)
    void*& leftShoulderDownField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 448); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +449, medido na build 25090264
    //  (offset absoluto medido: 0x6CD; confianca baixa)
    void*& leftTriggerDownField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 449); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +40, medido na build 25090264
    //  (offset absoluto medido: 0x4D8; confianca media)
    void*& recentlyExpandedTimeField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `virtualCursorFrames` +28, medido na build 25090264
    //  (offset absoluto medido: 0x4CC; confianca alta)
    void*& recentlyExpandedWidgetField() const
    { return BrzCampoAncorado<void*>(this, "virtualCursorFrames", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AnalogDeltaY` +450, medido na build 25090264
    //  (offset absoluto medido: 0x6CE; confianca baixa)
    void*& rightTriggerDownField() const
    { return BrzCampoAncorado<void*>(this, "AnalogDeltaY", 450); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WasInHandheldMode` +1, medido na build 25090264
    //  (offset absoluto medido: 0x413; confianca alta)
    void*& tickedDockedModeChangesField() const
    { return BrzCampoAncorado<void*>(this, "WasInHandheldMode", 1); }
    int& virtualCursorFramesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalUI.virtualCursorFrames"); }
    BitFieldValue<bool, unsigned __int32> OverrideButtonSounds()
    { return { (void*)this, "OverrideButtonSounds" }; }
    BitFieldValue<bool, unsigned __int32> ShouldStretchMainScreenWhenHandheld()
    { return { (void*)this, "ShouldStretchMainScreenWhenHandheld" }; }
    BitFieldValue<bool, unsigned __int32> WasInHandheldMode()
    { return { (void*)this, "WasInHandheldMode" }; }
    BitFieldValue<bool, unsigned __int32> bAutoProcessSplitscreenScaling()
    { return { (void*)this, "bAutoProcessSplitscreenScaling" }; }
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
    BitFieldValue<bool, unsigned __int32> bDoExtraDataListButtonPanelFilteringChecks()
    { return { (void*)this, "bDoExtraDataListButtonPanelFilteringChecks" }; }
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
    BitFieldValue<bool, unsigned __int32> bIgnoreUIScaling()
    { return { (void*)this, "bIgnoreUIScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIsClosing()
    { return { (void*)this, "bIsClosing" }; }
    BitFieldValue<bool, unsigned __int32> bIsGameplayUI()
    { return { (void*)this, "bIsGameplayUI" }; }
    BitFieldValue<bool, unsigned __int32> bIsTopUI()
    { return { (void*)this, "bIsTopUI" }; }
    BitFieldValue<bool, unsigned __int32> bMenuSupportSlomo()
    { return { (void*)this, "bMenuSupportSlomo" }; }
    BitFieldValue<bool, unsigned __int32> bPreventGamepadDpadNavegation()
    { return { (void*)this, "bPreventGamepadDpadNavegation" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseBPInitForObjects()
    { return { (void*)this, "bUseBPInitForObjects" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPrimalItemNotifications()
    { return { (void*)this, "bWantsPrimalItemNotifications" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALUI_H
