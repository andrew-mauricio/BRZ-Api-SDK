// ==========================================================================
//  AShooterHUD — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERHUD_H
#define BRZ_SDK_JOGO_ASHOOTERHUD_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APawn;
struct FActorTickFunction;
struct FName;
struct UFont;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct AShooterHUD
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterHUD"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.AcceptTeamPingWheel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AcceptTeamPingWheel() const
    {
        return NativeCall<void*>(this, "AShooterHUD.AcceptTeamPingWheel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.AddMatchInfoString(FCanvasTextItem&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddMatchInfoString(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.AddMatchInfoString(FCanvasTextItem&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddReferencedObjects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterHUD.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPDrawHUD(UCanvas*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPDrawHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.BPDrawHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPDrawUIHUD(UCanvas*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPDrawUIHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.BPDrawUIHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPForceReinitUI()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPForceReinitUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.BPForceReinitUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPGetHUDRichTextOverlays()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetHUDRichTextOverlays() const
    {
        return NativeCall<void*>(this, "AShooterHUD.BPGetHUDRichTextOverlays()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPInitUIScenes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPInitUIScenes() const
    {
        return NativeCall<void*>(this, "AShooterHUD.BPInitUIScenes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPRemoveHUDRichTextOverlaysByInstigator(AActor*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPRemoveHUDRichTextOverlaysByInstigator(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.BPRemoveHUDRichTextOverlaysByInstigator(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPSetHUDRichTextOverlayDisplayText(FHUDRichTextOverlayData&,FString,FHUDRichTextOver
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetHUDRichTextOverlayDisplayText(void* a0, const FString& a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayDisplayText(FHUDRichTextOverlayData&,FString,FHUDRichTextOverlayData&,bool)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BPSetHUDRichTextOverlayDisplayText(void* a0, FString* a1, void* a2, bool a3) const
    { return BPSetHUDRichTextOverlayDisplayText(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPSetHUDRichTextOverlayInstigator(FHUDRichTextOverlayData&,AActor*,FHUDRichTextOverl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetHUDRichTextOverlayInstigator(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayInstigator(FHUDRichTextOverlayData&,AActor*,FHUDRichTextOverlayData&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPSetHUDRichTextOverlayScale(FHUDRichTextOverlayData&,float,FHUDRichTextOverlayData&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetHUDRichTextOverlayScale(void* a0, float a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, float, void*, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayScale(FHUDRichTextOverlayData&,float,FHUDRichTextOverlayData&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPSetHUDRichTextOverlayUseAutoWrap(FHUDRichTextOverlayData&,bool,FHUDRichTextOverlay
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetHUDRichTextOverlayUseAutoWrap(void* a0, bool a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, void*, bool>(this, "AShooterHUD.BPSetHUDRichTextOverlayUseAutoWrap(FHUDRichTextOverlayData&,bool,FHUDRichTextOverlayData&,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPShowUIScene(TSubclassOf<UPrimalUI>,UObject*,UObject*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPShowUIScene(void* a0, void* a1, void* a2, int a3, int a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, int>(this, "AShooterHUD.BPShowUIScene(TSubclassOf<UPrimalUI>,UObject*,UObject*,int,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPSimulateHit(float,FDamageEvent&,APawn*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPSimulateHit(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "AShooterHUD.BPSimulateHit(float,FDamageEvent&,APawn*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AShooterHUD.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.CancelCustomWheelRadialSelector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CancelCustomWheelRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CancelCustomWheelRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ChatWindowHasFocus()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ChatWindowHasFocus() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ChatWindowHasFocus()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ClearChatBoxTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearChatBoxTimer() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ClearChatBoxTimer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.CloseActiveHub()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseActiveHub() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CloseActiveHub()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.CloseChangeCameraModeUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseChangeCameraModeUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CloseChangeCameraModeUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.CloseSpawnMenu()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseSpawnMenu() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CloseSpawnMenu()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AShooterHUD.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawCrosshair()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=3780+bytes40+grafo=28/28]]
    BrzPonteiro DrawCrosshair() const
    {
        return NativeCall<void*>(this, "AShooterHUD.DrawCrosshair()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawHUD()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHUD() const
    {
        return NativeCall<void*>(this, "AShooterHUD.DrawHUD()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawHUDNotifications(UCanvas*,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHUDNotifications(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "AShooterHUD.DrawHUDNotifications(UCanvas*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawHitIndicator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHitIndicator() const
    {
        return NativeCall<void*>(this, "AShooterHUD.DrawHitIndicator()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawItemHUDNOtifications(UCanvas*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawItemHUDNOtifications(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "AShooterHUD.DrawItemHUDNOtifications(UCanvas*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawMultiUseIcon(UE::Math::TVector2<double>,float,FMultiUseEntry,UTexture2D*&,UMater
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawMultiUseIcon(void* a0, float a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*, void*>(this, "AShooterHUD.DrawMultiUseIcon(UE::Math::TVector2<double>,float,FMultiUseEntry,UTexture2D*&,UMaterialInterface*&,FColor&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawTooltipAction(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawTooltipAction(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.DrawTooltipAction(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawUIHUD(UCanvas*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DrawUIHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.DrawUIHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndAllRadialSelectors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAllRadialSelectors() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndAllRadialSelectors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndCustomWheelRadialSelector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndCustomWheelRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndCustomWheelRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndEmoteRadialSelector()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro EndEmoteRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndEmoteRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndMultiUseRadialSelector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndMultiUseRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndMultiUseRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterHUD.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ForceHUDHidden(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ForceHUDHidden(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ForceHUDHidden(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.FormatRichTextWithColor(FString&,FLinearColor)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FormatRichTextWithColor(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterHUD.FormatRichTextWithColor(FString&,FLinearColor)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FormatRichTextWithColor(FString* a0, void* a1) const
    { return FormatRichTextWithColor(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.FormatRichTextWithKeyBindings(FString,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FormatRichTextWithKeyBindings(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.FormatRichTextWithKeyBindings(FString,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FormatRichTextWithKeyBindings(FString* a0, bool a1) const
    { return FormatRichTextWithKeyBindings(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.FormatTextureAsRichText(UTexture2D*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FormatTextureAsRichText(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterHUD.FormatTextureAsRichText(UTexture2D*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetAdditionalExplorerNoteDynamicMaterialParams(FExplorerNoteEntry&,TArray<FNameScala
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdditionalExplorerNoteDynamicMaterialParams(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterHUD.GetAdditionalExplorerNoteDynamicMaterialParams(FExplorerNoteEntry&,TArray<FNameScalarPair,TSizedDefaultAllocator<32>>&,TArray<FNameColorPair,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetChatBoxWidget()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetChatBoxWidget() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetChatBoxWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetCurrentCrosshairScreenLocation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCurrentCrosshairScreenLocation() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetCurrentCrosshairScreenLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetCurrentHubUI()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCurrentHubUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetCurrentHubUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetEmoteRadialFilter()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetEmoteRadialFilter() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetEmoteRadialFilter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetFloatingHUDScreenEdgeFadeAlpha(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFloatingHUDScreenEdgeFadeAlpha(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.GetFloatingHUDScreenEdgeFadeAlpha(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetIconForKey(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetIconForKey(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.GetIconForKey(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetIconForKey(FString* a0) const
    { return GetIconForKey(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetMinNotificationScale(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMinNotificationScale(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterHUD.GetMinNotificationScale(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetMultiUseRadialSelection(FMultiUseEntry&,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMultiUseRadialSelection(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.GetMultiUseRadialSelection(FMultiUseEntry&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetMultiUseRadialSelectorTargetActor()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetMultiUseRadialSelectorTargetActor() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetMultiUseRadialSelectorTargetActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetOrCreateActiveHub()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOrCreateActiveHub() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetOrCreateActiveHub()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetOverlayTooltipTemplate(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOverlayTooltipTemplate(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.GetOverlayTooltipTemplate(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetSelectedCustomWheelEntry(FCustomWheelEntry&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedCustomWheelEntry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.GetSelectedCustomWheelEntry(FCustomWheelEntry&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetSelectedCustomWheelEntry_v2(FCustomWheelEntry_v2&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSelectedCustomWheelEntry_v2(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.GetSelectedCustomWheelEntry_v2(FCustomWheelEntry_v2&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetSkillTreeMenu()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillTreeMenu() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetSkillTreeMenu()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetSubtitlesWidget()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSubtitlesWidget() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetSubtitlesWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideChatBox()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideChatBox() const
    {
        return NativeCall<void*>(this, "AShooterHUD.HideChatBox()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideMissionAlert()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HideMissionAlert() const
    {
        return NativeCall<void*>(this, "AShooterHUD.HideMissionAlert()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideTopMissionAlert()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HideTopMissionAlert() const
    {
        return NativeCall<void*>(this, "AShooterHUD.HideTopMissionAlert()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HitchDetected(FSoftObjectPath&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HitchDetected(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "AShooterHUD.HitchDetected(FSoftObjectPath&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.InitUIScenes(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitUIScenes(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.InitUIScenes(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsChatBoxVisible()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsChatBoxVisible() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsChatBoxVisible()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsMissionAlertVisible(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsMissionAlertVisible(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.IsMissionAlertVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsUsingBuildingUI(TSubclassOf<UBuildingUI>)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsUsingBuildingUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.IsUsingBuildingUI(TSubclassOf<UBuildingUI>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsUsingCustomWheelRadialSelector()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsUsingCustomWheelRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsUsingCustomWheelRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsZoomingSpyglass()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsZoomingSpyglass() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsZoomingSpyglass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.MoveChatBoxToBottomOfScreen()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MoveChatBoxToBottomOfScreen() const
    {
        return NativeCall<void*>(this, "AShooterHUD.MoveChatBoxToBottomOfScreen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.NotifyHUDHit(float,FDamageEvent&,APawn*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyHUDHit(float a0, void* a1, void* a2) const
    {
        return NativeCall<void*, float, void*, void*>(this, "AShooterHUD.NotifyHUDHit(float,FDamageEvent&,APawn*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.NotifyHubRemoveFromViewport(UUI_Hub*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NotifyHubRemoveFromViewport(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.NotifyHubRemoveFromViewport(UUI_Hub*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.NotifyOutOfAmmo()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyOutOfAmmo() const
    {
        return NativeCall<void*>(this, "AShooterHUD.NotifyOutOfAmmo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,1>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPlayerTalkingStateChanged(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.OnPlayerTalkingStateChanged(TSharedRef<FUniqueNetId,1>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "AShooterHUD.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.PushMilestoneNotify(FName,float,bool,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PushMilestoneNotify(unsigned long long a0, float a1, bool a2, unsigned long long a3) const
    {
        return NativeCall<void*, unsigned long long, float, bool, unsigned long long>(this, "AShooterHUD.PushMilestoneNotify(FName,float,bool,FName)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ReceivedChatMessage(FPrimalChatMessage)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedChatMessage(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ReceivedChatMessage(FPrimalChatMessage)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ReceivedServerChatDirectMessage(FString,FLinearColor,bool,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedServerChatDirectMessage(const FString& a0, void* a1, bool a2, const FString& a3) const
    {
        return NativeCall<void*, void*, void*, bool, void*>(this, "AShooterHUD.ReceivedServerChatDirectMessage(FString,FLinearColor,bool,FString)", const_cast<FString*>(&a0), a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ReceivedServerChatDirectMessage(FString* a0, void* a1, bool a2, FString* a3) const
    { return ReceivedServerChatDirectMessage(*a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ReceivedServerChatMessage(FString,FLinearColor,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceivedServerChatMessage(const FString& a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterHUD.ReceivedServerChatMessage(FString,FLinearColor,bool)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ReceivedServerChatMessage(FString* a0, void* a1, bool a2) const
    { return ReceivedServerChatMessage(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.RemoveBuildingUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveBuildingUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.RemoveBuildingUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ReplaceKeyboardControlsTextWithXboxControlIconPaths(FString,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReplaceKeyboardControlsTextWithXboxControlIconPaths(const FString& a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "AShooterHUD.ReplaceKeyboardControlsTextWithXboxControlIconPaths(FString,int)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ReplaceKeyboardControlsTextWithXboxControlIconPaths(FString* a0, int a1) const
    { return ReplaceKeyboardControlsTextWithXboxControlIconPaths(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ReturnChatBoxToIntialLocation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ReturnChatBoxToIntialLocation() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ReturnChatBoxToIntialLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.SetAllowShowChatBox(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAllowShowChatBox(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.SetAllowShowChatBox(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowAdminManger(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowAdminManger(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ShowAdminManger(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowBuildingUI(TSubclassOf<UBuildingUI>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowBuildingUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowBuildingUI(TSubclassOf<UBuildingUI>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowChangeCameraModeUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowChangeCameraModeUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ShowChangeCameraModeUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowChatBox(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowChatBox(bool a0, bool a1) const
    {
        return NativeCall<void*, bool, bool>(this, "AShooterHUD.ShowChatBox(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowEngramsMenu(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowEngramsMenu(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ShowEngramsMenu(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowInventory(UPrimalInventoryComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowInventory(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowInventory(UPrimalInventoryComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowLevelUpAvailable(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowLevelUpAvailable(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowLevelUpAvailable(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowLevelUpAvailable(FString* a0) const
    { return ShowLevelUpAvailable(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowMap() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ShowMap()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowMissionAlert(TEnumAsByte<EMissionAlertType::Type>,FString&,TArray<FMissionAlertE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowMissionAlert(unsigned char a0, const FString& a1, void* a2, float a3, void* a4, bool a5) const
    {
        return NativeCall<void*, unsigned char, void*, void*, float, void*, bool>(this, "AShooterHUD.ShowMissionAlert(TEnumAsByte<EMissionAlertType::Type>,FString&,TArray<FMissionAlertEntry,TSizedDefaultAllocator<32>>&,float,USoundBase*,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowMissionAlert(unsigned char a0, FString* a1, void* a2, float a3, void* a4, bool a5) const
    { return ShowMissionAlert(a0, *a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowMissionList(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowMissionList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowMissionList(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowMultiUseUIFor(AActor*,bool,FMultiUseWheelOption,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowMultiUseUIFor(void* a0, bool a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, void*, bool>(this, "AShooterHUD.ShowMultiUseUIFor(AActor*,bool,FMultiUseWheelOption,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowNewMinimap(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowNewMinimap(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowNewMinimap(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowPinEntryUI(AActor*,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowPinEntryUI(void* a0, bool a1, int a2) const
    {
        return NativeCall<void*, void*, bool, int>(this, "AShooterHUD.ShowPinEntryUI(AActor*,bool,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowSkillTreeMenu(FName,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowSkillTreeMenu(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "AShooterHUD.ShowSkillTreeMenu(FName,UObject*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowSpawnUI(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowSpawnUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowSpawnUI(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowSurvivorProfileUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowSurvivorProfileUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ShowSurvivorProfileUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowTeamPingWheel(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowTeamPingWheel(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ShowTeamPingWheel(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowTribeManager(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowTribeManager(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ShowTribeManager(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowTribeWarMenu()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowTribeWarMenu() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ShowTribeWarMenu()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowTutorial(FString&,FString&,UTexture2D*,int,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowTutorial(const FString& a0, const FString& a1, void* a2, int a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, int, float>(this, "AShooterHUD.ShowTutorial(FString&,FString&,UTexture2D*,int,float)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowTutorial(FString* a0, FString* a1, void* a2, int a3, float a4) const
    { return ShowTutorial(*a0, *a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowUIScene(TSubclassOf<UPrimalUI>,UObject*,UObject*,unsignedint,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowUIScene(void* a0, void* a1, void* a2, unsigned int a3, unsigned int a4) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned int, unsigned int>(this, "AShooterHUD.ShowUIScene(TSubclassOf<UPrimalUI>,UObject*,UObject*,unsignedint,unsignedint)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.StartCustomWheelRadialSelector(FCustomWheelSettings&,TArray<FCustomWheelEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCustomWheelRadialSelector(void* a0, void* a1, bool a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, bool, void*, bool>(this, "AShooterHUD.StartCustomWheelRadialSelector(FCustomWheelSettings&,TArray<FCustomWheelEntry,TSizedDefaultAllocator<32>>&,bool,UObject*,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.StartCustomWheelRadialSelector_v2(FCustomWheelSettings&,TArray<FCustomWheelEntry_v2,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartCustomWheelRadialSelector_v2(void* a0, void* a1, bool a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, bool, void*, bool>(this, "AShooterHUD.StartCustomWheelRadialSelector_v2(FCustomWheelSettings&,TArray<FCustomWheelEntry_v2,TSizedDefaultAllocator<32>>&,bool,UObject*,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.StartInventoryRadialSelector()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartInventoryRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.StartInventoryRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ToggleHudHidden()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleHudHidden() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ToggleHudHidden()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.TryToHideMouseCursor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryToHideMouseCursor() const
    {
        return NativeCall<void*>(this, "AShooterHUD.TryToHideMouseCursor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.TutorialEndTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TutorialEndTimer() const
    {
        return NativeCall<void*>(this, "AShooterHUD.TutorialEndTimer()");
    }

    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterHUD.ActorUsingQuickAction"); }
    float& AdditionalDinoMultiuseCheckDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.AdditionalDinoMultiuseCheckDistance"); }
    BrzCampoPonteiro AdminMangmentUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.AdminMangmentUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +56 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD48; confianca media)
    void*& AimAssistLastLocationField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerInfoRequestTimeInterval` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x5B8; confianca alta)
    void*& AllPlayersDataField() const
    { return BrzCampoAncorado<void*>(this, "PlayerInfoRequestTimeInterval", 8); }
    BrzCampoPonteiro AllPlayersListTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.AllPlayersListTemplate")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterHUD.AutoReceiveInput"); }
    BrzCampoPonteiro BigFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.BigFont")); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.BlueprintCreatedComponents"); }
    BrzCampoPonteiro BuildingUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.BuildingUI")); }
    BrzCampoPonteiro BuildingUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.BuildingUITemplate")); }
    BrzCampoPonteiro CachedFloatingOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CachedFloatingOverlaps")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +32 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD30; confianca alta)
    void*& CantBuildNotifyTimeField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD38; confianca media)
    void*& CantBuildStringField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +24 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9A0; confianca alta)
    void*& CantUseHereTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 24); }
    BrzCampoPonteiro CanvasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.Canvas")); }
    BrzCampoPonteiro ChangeCameraModeTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ChangeCameraModeTemplate")); }
    BrzCampoPonteiro ChangeCameraModeUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ChangeCameraModeUI")); }
    BrzCampoPonteiro ChatBoxUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ChatBoxUI")); }
    BrzCampoPonteiro ChatBoxUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ChatBoxUITemplate")); }
    float& ChatPopupIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.ChatPopupInterval"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.ClientReplicationSendNowThreshold"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +48 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x800; confianca media)
    void*& ColorMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 48); }
    BrzCampoPonteiro ConsoleDedicatedUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ConsoleDedicatedUITemplate")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.CreationTime"); }
    BrzCampoPonteiro CrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.Crosshair")); }
    BrzCampoPonteiro CurrentBasedUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentBasedUI")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +60 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9C4; confianca media)
    void*& CurrentCrosshairAlphaField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +176 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE58; confianca baixa)
    void*& CurrentCrosshairScreenLocationField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 176); }
    BrzCampoPonteiro CurrentMinimapHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentMinimapHUD")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +72 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x818; confianca media)
    void*& CurrentMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 72); }
    BrzCampoPonteiro CurrentOpenedInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentOpenedInventory")); }
    BrzCampoPonteiro CurrentRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentRadialSelector")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x7D8; confianca media)
    void*& CurrentRespawnUIField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xDB0; confianca media)
    void*& CurrentSpawnMenuField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 8); }
    int& CurrentTargetIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.CurrentTargetIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xEE8; confianca alta)
    void*& CurrentTutorialIndexField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 8); }
    BrzCampoPonteiro CurrentlyOpenedHubUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentlyOpenedHubUI")); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.CustomData"); }
    BrzCampoPonteiro CustomRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CustomRadialSelector")); }
    BrzCampoPonteiro CustomRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CustomRadialSelectorTemplate")); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "AShooterHUD.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.CustomTimeDilation"); }
    BrzCampoPonteiro CustomTrackedDinoListUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CustomTrackedDinoListUITemplate")); }
    BrzCampoPonteiro DeathIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DeathIcon")); }
    BrzCampoPonteiro DebugCanvasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DebugCanvas")); }
    BrzCampoPonteiro DebugDisplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DebugDisplay")); }
    BrzCampoPonteiro DebugTextListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DebugTextList")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterHUD.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DisableUseIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.DisableUseIconColor")); }
    BrzCampoPonteiro EmoteRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.EmoteRadialSelector")); }
    BrzCampoPonteiro EmoteRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.EmoteRadialSelectorTemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +192 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE68; confianca baixa)
    void*& ExtraHitTestInvisibleHiddenUIsField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 192); }
    BrzCampoPonteiro FloatingMultiUseIconBGColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.FloatingMultiUseIconBGColor")); }
    BrzCampoPonteiro FloatingMultiUseIconOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.FloatingMultiUseIconOffset")); }
    float& FloatingMultiUseIconSizeField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.FloatingMultiUseIconSize"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GenericBackIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.GenericBackIcon")); }
    BrzCampoPonteiro GenericGamepadNameReplacementsForKeyboardControlsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.GenericGamepadNameReplacementsForKeyboardControls")); }
    BrzCampoPonteiro GenericGamepadReplacementsForKeyboardControlsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.GenericGamepadReplacementsForKeyboardControls")); }
    BrzCampoPonteiro GenericMultiUseIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.GenericMultiUseIcon")); }
    BrzCampoPonteiro GenericSubMenuMultiUseIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.GenericSubMenuMultiUseIcon")); }
    BrzCampoPonteiro HUDAssets02TextureAtlasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HUDAssets02TextureAtlas")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +12 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x994; confianca alta)
    void*& HUDDarkField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x990; confianca alta)
    void*& HUDLightField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 8); }
    BrzCampoPonteiro HUDMainTextureAtlasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HUDMainTextureAtlas")); }
    BrzCampoPonteiro HUDNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HUDNotifications")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +24 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD28; confianca alta)
    void*& HideChatBoxHandleField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 24); }
    BrzCampoPonteiro HitMarkerTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitMarkerTexture")); }
    BrzCampoPonteiro HitNotifyCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyCrosshair")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +232 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xBE8; confianca baixa)
    void*& HitNotifyDataField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +48 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9B8; confianca media)
    void*& HitNotifyDisplayTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 48); }
    BrzCampoPonteiro HitNotifyIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyIcon")); }
    BrzCampoPonteiro HitNotifyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyTexture")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xEF0; confianca alta)
    void*& HitchStringField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 16); }
    BrzCampoPonteiro HubUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HubUITemplate")); }
    BrzCampoPonteiro HurtCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HurtCameraShake")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +56 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x808; confianca media)
    void*& IconMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +368 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xC70; confianca baixa)
    void*& InfoItemsField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 368); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "AShooterHUD.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "AShooterHUD.Instigator"); }
    BrzCampoPonteiro InventoryRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.InventoryRadialSelector")); }
    BrzCampoPonteiro InventoryRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.InventoryRadialSelectorTemplate")); }
    BrzCampoPonteiro InventoryUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.InventoryUITemplate")); }
    BrzCampoPonteiro ItemAddedNotificationIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ItemAddedNotificationIcon")); }
    BrzCampoPonteiro ItemAddedNotificationIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ItemAddedNotificationIconColor")); }
    BrzCampoPonteiro ItemHUDNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ItemHUDNotifications")); }
    BrzCampoPonteiro ItemRemovedNotificationIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ItemRemovedNotificationIcon")); }
    BrzCampoPonteiro ItemRemovedNotificationIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ItemRemovedNotificationIconColor")); }
    BrzCampoPonteiro KilledIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.KilledIcon")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +36 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF04; confianca media)
    void*& KingHitchField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 36); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastActorForceReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CachedFloatingOverlaps` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF20; confianca alta)
    void*& LastCachedOverlapsFrameField() const
    { return BrzCampoAncorado<void*>(this, "CachedFloatingOverlaps", 16); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastExitStasisTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +52 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9BC; confianca media)
    void*& LastFilterEmoteNameField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +216 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE80; confianca baixa)
    void*& LastHUDTargetChangedTimeField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9B0; confianca media)
    double& LastHitTimeField() const
    { return BrzCampoAncorado<double>(this, "SpeechBubble", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +32 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF00; confianca alta)
    void*& LastHitchField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF08; confianca media)
    void*& LastNumLocalPlayersField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowAllPlayersWhenSpectatingLocal` +6 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x5A8; confianca alta)
    void*& LastPlayerInfoRequestTimeField() const
    { return BrzCampoAncorado<void*>(this, "bShowAllPlayersWhenSpectatingLocal", 6); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterHUD.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastPreReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +224 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE88; confianca baixa)
    void*& LastReceivedChatMessagesField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 224); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterHUD.LastSelectedWindSourceComponentName"); }
    TWeakObjectPtr<void>& LastTargetedActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterHUD.LastTargetedActor"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastThrottledTickTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bMultiUseIsDrawingUIHUD` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD78; confianca alta)
    void*& LastTorpidityIncreaseTimeField() const
    { return BrzCampoAncorado<void*>(this, "bMultiUseIsDrawingUIHUD", 8); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.Layers"); }
    BrzCampoPonteiro LeaderboardsUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.LeaderboardsUITemplate")); }
    BrzCampoPonteiro LowHealthOverlayTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.LowHealthOverlayTexture")); }
    BrzCampoPonteiro MapMarkersUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MapMarkersUITemplate")); }
    float& MaxDamageCameraShakeScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeScale"); }
    float& MaxDamageCameraShakeSpeedInverseField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.MaxDamageCameraShakeSpeedInverse"); }
    BrzCampoPonteiro MilestonesFeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MilestonesFeed")); }
    BrzCampoPonteiro MilestonesFeedTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MilestonesFeedTemplate")); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MinimapUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MinimapUITemplate")); }
    BrzCampoPonteiro MissionListUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MissionListUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +192 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x890; confianca baixa)
    void*& MultiUseActionLocationField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 192); }
    BrzCampoPonteiro MultiUseRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MultiUseRadialSelector")); }
    BrzCampoPonteiro MultiUseRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MultiUseRadialSelectorTemplate")); }
    BrzCampoPonteiro MultiUseUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MultiUseUITemplate")); }
    BrzCampoPonteiro MyOverlayHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyOverlayHUD")); }
    BrzCampoPonteiro MyPlayerActiveMissionHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerActiveMissionHUD")); }
    BrzCampoPonteiro MyPlayerCustomStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerCustomStatusHUD")); }
    BrzCampoPonteiro MyPlayerHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerHUD")); }
    BrzCampoPonteiro MyPlayerHUDSOTFField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerHUDSOTF")); }
    BrzCampoPonteiro MyPlayerLeaderboardHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerLeaderboardHUD")); }
    BrzCampoPonteiro MyPlayerPingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerPingHUD")); }
    BrzCampoPonteiro MyPlayerPointsOfInterestHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyPlayerPointsOfInterestHUD")); }
    BrzCampoPonteiro MySubtitlesHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MySubtitlesHUD")); }
    BrzCampoPonteiro MyTopOverlayHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.MyTopOverlayHUD")); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterHUD.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterHUD.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterHUD.NetworkSpatializationParent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +32 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x9A8; confianca alta)
    void*& NoAmmoFadeOutTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x998; confianca alta)
    void*& NoAmmoNotifyTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 16); }
    BrzCampoPonteiro NormalFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.NormalFont")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +224 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xBE0; confianca baixa)
    void*& OffsetField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +96 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xB60; confianca media)
    void*& OffsetsField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 96); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnMatineeUpdated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SingletonHUDNotifications` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xCB0; confianca alta)
    void*& OnPlayerTalkingStateChangedDelegateField() const
    { return BrzCampoAncorado<void*>(this, "SingletonHUDNotifications", 16); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.OriginalCreationTime"); }
    BrzCampoPonteiro OverlayHUDUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.OverlayHUDUITemplate")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "AShooterHUD.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterHUD.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PhysicsReplicationMode")); }
    BrzCampoPonteiro PinEntryUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PinEntryUITemplate")); }
    BrzCampoPonteiro PlayerActionRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerActionRadialSelector")); }
    BrzCampoPonteiro PlayerActionRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerActionRadialSelectorTemplate")); }
    BrzCampoPonteiro PlayerHUDActiveMissionTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerHUDActiveMissionTemplate")); }
    BrzCampoPonteiro PlayerHUDCustomStatusTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerHUDCustomStatusTemplate")); }
    BrzCampoPonteiro PlayerHUDPointsOfInterestTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerHUDPointsOfInterestTemplate")); }
    BrzCampoPonteiro PlayerHUDSOTFField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerHUDSOTF")); }
    BrzCampoPonteiro PlayerHUDUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerHUDUITemplate")); }
    float& PlayerInfoRequestTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.PlayerInfoRequestTimeInterval"); }
    BrzCampoPonteiro PlayerOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PlayerOwner")); }
    BrzCampoPonteiro PostRenderedActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.PostRenderedActors")); }
    double& PreventTeleportWhiteoutUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.PreventTeleportWhiteoutUntilTime"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "AShooterHUD.PrimaryActorTick"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +28 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xB1C; confianca media)
    void*& PulseValueField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 28); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterHUD.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterHUD.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "AShooterHUD.RootComponent"); }
    BrzCampoPonteiro SavingOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SavingOverlay")); }
    BrzCampoPonteiro SavingOverlayUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SavingOverlayUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +24 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xB18; confianca media)
    void*& ScaleUIField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +32 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xB20; confianca media)
    void*& ShadowedFontField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 32); }
    BrzCampoPonteiro ShowDebugTargetActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ShowDebugTargetActor")); }
    BrzCampoPonteiro ShowDebugTargetDesiredClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ShowDebugTargetDesiredClass")); }
    BrzCampoPonteiro SingletonHUDNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SingletonHUDNotifications")); }
    TObjectPtr<UFont>& SmallFontField() const
    { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "AShooterHUD.SmallFont"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SpawnUITemplate")); }
    BrzCampoPonteiro SpeechBubbleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SpeechBubble")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "AShooterHUD.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "AShooterHUD.StasisUnRegisteredComponents"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x7E0; confianca media)
    void*& StringMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 16); }
    BrzCampoPonteiro SubtitlesUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SubtitlesUITemplate")); }
    BrzCampoPonteiro SurvivorProfileUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.SurvivorProfileUITemplate")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterHUD.Tags"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.TargetingTeam"); }
    BrzCampoPonteiro TeamPingTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TeamPingTypes")); }
    BrzCampoPonteiro TeamPingWheelSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TeamPingWheelSettings")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xDB8; confianca media)
    void*& TempChatMsgField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 16); }
    BrzCampoPonteiro TextEntryUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TextEntryUITemplate")); }
    float& TimeToHideChatField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.TimeToHideChat"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD20; confianca alta)
    void*& TimerHandle_DoShowSpawnUIField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 16); }
    BrzCampoPonteiro ToggledDebugCategoriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ToggledDebugCategories")); }
    BrzCampoPonteiro TopOverlayHUDUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TopOverlayHUDUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +208 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE78; confianca baixa)
    void*& TorpidityOpacityField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 208); }
    BrzCampoPonteiro TrackingItemsHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TrackingItemsHUD")); }
    BrzCampoPonteiro TrackingItemsTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TrackingItemsTemplate")); }
    BrzCampoPonteiro TribeManagerUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TribeManagerUITemplate")); }
    BrzCampoPonteiro TribeWarUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TribeWarUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +304 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xED8; confianca baixa)
    void*& TutorialEndTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 304); }
    BrzCampoPonteiro TutorialUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TutorialUI")); }
    BrzCampoPonteiro TutorialUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TutorialUITemplate")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro WhistleRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.WhistleRadialSelector")); }
    BrzCampoPonteiro WhistleRadialSelectorTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.WhistleRadialSelectorTemplate")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAutoDestroyWhenFinished")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +72 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD58; confianca media)
    void*& bAutoShowChatField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 72); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bCanBeInCluster")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +212 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xE7C; confianca baixa)
    void*& bChatVisibleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 212); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDefeatedBossPreventingSpawnUICreationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bDefeatedBossPreventingSpawnUICreation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableDebugTextShadowField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bEnableDebugTextShadow")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bExchangedRoles")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +79 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5F; confianca media)
    void*& bExtraConsoleHideHUDField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 79); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +78 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5E; confianca media)
    void*& bExtraHideHUDField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 78); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceAllowNetMulticast")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +77 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5D; confianca media)
    void*& bForceHUDHiddenField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 77); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bForcedHudDrawingRequiresSameTeam")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowingMinimapTooltip` +1 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF2A; confianca alta)
    void*& bFrameGenDisabledBecauseUIField() const
    { return BrzCampoAncorado<void*>(this, "bShowingMinimapTooltip", 1); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHUDHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bHUDHidden")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bHidden")); }
    BrzCampoPonteiro bHudHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bHUDHidden")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIgnoresOriginShifting")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +76 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5C; confianca media)
    void*& bInitializedUIScenesField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 76); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsMapActor")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bIsValidUnstasisCaster")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowingMinimapTooltip` +2 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xF2B; confianca alta)
    void*& bLastFrameGenDisabledBecauseUIField() const
    { return BrzCampoAncorado<void*>(this, "bShowingMinimapTooltip", 2); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLostFocusPausedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bLostFocusPaused")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bMultiUseIsDrawingUIHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bMultiUseIsDrawingUIHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bPreventSaving")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +12 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xEEC; confianca alta)
    void*& bPreventShowChatBoxField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 12); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bRelevantForNetworkReplays")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowAllPlayersWhenSpectating` +1 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x5A1; confianca alta)
    void*& bRemovedPrimalGameplayHudsField() const
    { return BrzCampoAncorado<void*>(this, "bShowAllPlayersWhenSpectating", 1); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bSavedWhenStasised")); }
    BrzCampoPonteiro bShowAllPlayersWhenSpectatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowAllPlayersWhenSpectating")); }
    BrzCampoPonteiro bShowAllPlayersWhenSpectatingLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowAllPlayersWhenSpectatingLocal")); }
    BrzCampoPonteiro bShowChatBoxByDefaultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowChatBoxByDefault")); }
    BrzCampoPonteiro bShowChatPopupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowChatPopup")); }
    BrzCampoPonteiro bShowDebugInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowDebugInfo")); }
    BrzCampoPonteiro bShowHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowHUD")); }
    BrzCampoPonteiro bShowHitBoxDebugInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowHitBoxDebugInfo")); }
    BrzCampoPonteiro bShowOverlaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowOverlays")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ItemRemovedNotificationIconColor` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x918; confianca alta)
    void*& bShowedKnockedNotificationField() const
    { return BrzCampoAncorado<void*>(this, "ItemRemovedNotificationIconColor", 16); }
    BrzCampoPonteiro bShowingMinimapTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bShowingMinimapTooltip")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bStasised")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +73 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD59; confianca media)
    void*& bTargetHarvestableField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 73); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +74 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5A; confianca media)
    void*& bTargetHarvestableAllowedField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 74); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +75 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xD5B; confianca media)
    void*& bTargetHarvestableIsUsableField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 75); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bUseStasisGrid")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.bWantsServerThrottledTick")); }
    BitFieldValue<bool, unsigned __int32> bDefeatedBossPreventingSpawnUICreation()
    { return { (void*)this, "bDefeatedBossPreventingSpawnUICreation" }; }
    BitFieldValue<bool, unsigned __int32> bHUDHidden()
    { return { (void*)this, "bHUDHidden" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseIsDrawingUIHUD()
    { return { (void*)this, "bMultiUseIsDrawingUIHUD" }; }
    BitFieldValue<bool, unsigned __int32> bShowAllPlayersWhenSpectating()
    { return { (void*)this, "bShowAllPlayersWhenSpectating" }; }
    BitFieldValue<bool, unsigned __int32> bShowAllPlayersWhenSpectatingLocal()
    { return { (void*)this, "bShowAllPlayersWhenSpectatingLocal" }; }
    BitFieldValue<bool, unsigned __int32> bShowChatBoxByDefault()
    { return { (void*)this, "bShowChatBoxByDefault" }; }
    BitFieldValue<bool, unsigned __int32> bShowChatPopup()
    { return { (void*)this, "bShowChatPopup" }; }
    BitFieldValue<bool, unsigned __int32> bShowingMinimapTooltip()
    { return { (void*)this, "bShowingMinimapTooltip" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERHUD_H
