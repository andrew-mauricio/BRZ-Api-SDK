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
    static BrzPonteiro AddReferencedObjects(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "AShooterHUD.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPDrawHUD(UCanvas*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro BPDrawHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.BPDrawHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPDrawUIHUD(UCanvas*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    BrzPonteiro BPDrawUIHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.BPDrawUIHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPForceReinitUI()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    BrzPonteiro BPForceReinitUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.BPForceReinitUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.BPGetHUDRichTextOverlays()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CancelCustomWheelRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CancelCustomWheelRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ChatWindowHasFocus()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    BrzPonteiro CloseChangeCameraModeUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CloseChangeCameraModeUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.CloseSpawnMenu()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=57]]
    BrzPonteiro CloseSpawnMenu() const
    {
        return NativeCall<void*>(this, "AShooterHUD.CloseSpawnMenu()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=423]]
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AShooterHUD.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.DrawCrosshair()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=3780+bytes40+grafo=27/28]]
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawUIHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.DrawUIHUD(UCanvas*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndAllRadialSelectors()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro EndEmoteRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndEmoteRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndMultiUseRadialSelector()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro EndMultiUseRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.EndMultiUseRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=118]]
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterHUD.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ForceHUDHidden(bool)
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetChatBoxWidget() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetChatBoxWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetCurrentCrosshairScreenLocation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentCrosshairScreenLocation() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetCurrentCrosshairScreenLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetCurrentHubUI()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetCurrentHubUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetCurrentHubUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetEmoteRadialFilter()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMultiUseRadialSelection(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "AShooterHUD.GetMultiUseRadialSelection(FMultiUseEntry&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetMultiUseRadialSelectorTargetActor()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMultiUseRadialSelectorTargetActor() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetMultiUseRadialSelectorTargetActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.GetOrCreateActiveHub()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSubtitlesWidget() const
    {
        return NativeCall<void*>(this, "AShooterHUD.GetSubtitlesWidget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideChatBox()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    BrzPonteiro HideChatBox() const
    {
        return NativeCall<void*>(this, "AShooterHUD.HideChatBox()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideMissionAlert()
    // endereco: cache_pdb_25090264
    BrzPonteiro HideMissionAlert() const
    {
        return NativeCall<void*>(this, "AShooterHUD.HideMissionAlert()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.HideTopMissionAlert()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro IsChatBoxVisible() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsChatBoxVisible()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsMissionAlertVisible(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsMissionAlertVisible(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.IsMissionAlertVisible(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsUsingBuildingUI(TSubclassOf<UBuildingUI>)
    // endereco: cache_pdb_25090264
    BrzPonteiro IsUsingBuildingUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.IsUsingBuildingUI(TSubclassOf<UBuildingUI>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsUsingCustomWheelRadialSelector()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsUsingCustomWheelRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsUsingCustomWheelRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.IsZoomingSpyglass()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=291]]
    BrzPonteiro IsZoomingSpyglass() const
    {
        return NativeCall<void*>(this, "AShooterHUD.IsZoomingSpyglass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.MoveChatBoxToBottomOfScreen()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    // endereco: thunk
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
    // endereco: cache_pdb_25090264
    BrzPonteiro ReturnChatBoxToIntialLocation() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ReturnChatBoxToIntialLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.SetAllowShowChatBox(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=108]]
    BrzPonteiro ShowChangeCameraModeUI() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ShowChangeCameraModeUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowChatBox(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=42]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=344+grafo=8/8]]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=769+grafo=14/14]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=13/13]]
    BrzPonteiro ShowSpawnUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterHUD.ShowSpawnUI(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowSurvivorProfileUI()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ShowTribeManager(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterHUD.ShowTribeManager(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ShowTribeWarMenu()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=347+chamadores=2]]
    BrzPonteiro StartCustomWheelRadialSelector_v2(void* a0, void* a1, bool a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, bool, void*, bool>(this, "AShooterHUD.StartCustomWheelRadialSelector_v2(FCustomWheelSettings&,TArray<FCustomWheelEntry_v2,TSizedDefaultAllocator<32>>&,bool,UObject*,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.StartInventoryRadialSelector()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro StartInventoryRadialSelector() const
    {
        return NativeCall<void*>(this, "AShooterHUD.StartInventoryRadialSelector()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.ToggleHudHidden()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=887+grafo=11/11]]
    BrzPonteiro ToggleHudHidden() const
    {
        return NativeCall<void*>(this, "AShooterHUD.ToggleHudHidden()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.TryToHideMouseCursor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro TryToHideMouseCursor() const
    {
        return NativeCall<void*>(this, "AShooterHUD.TryToHideMouseCursor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterHUD.TutorialEndTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=187]]
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
    //  ancorado em `TeamPingTypes` +56, medido na build 25090264
    //  (offset absoluto medido: 0xD48; confianca media)
    void*& AimAssistLastLocationField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerInfoRequestTimeInterval` +8, medido na build 25090264
    //  (offset absoluto medido: 0x5B8; confianca alta)
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
    //  ancorado em `TeamPingTypes` +32, medido na build 25090264
    //  (offset absoluto medido: 0xD30; confianca alta)
    void*& CantBuildNotifyTimeField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +40, medido na build 25090264
    //  (offset absoluto medido: 0xD38; confianca media)
    void*& CantBuildStringField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +24, medido na build 25090264
    //  (offset absoluto medido: 0x9A0; confianca alta)
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
    //  ancorado em `CustomRadialSelector` +48, medido na build 25090264
    //  (offset absoluto medido: 0x800; confianca media)
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
    //  ancorado em `SpeechBubble` +60, medido na build 25090264
    //  (offset absoluto medido: 0x9C4; confianca media)
    void*& CurrentCrosshairAlphaField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +176, medido na build 25090264
    //  (offset absoluto medido: 0xE58; confianca baixa)
    void*& CurrentCrosshairScreenLocationField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 176); }
    BrzCampoPonteiro CurrentMinimapHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentMinimapHUD")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +72, medido na build 25090264
    //  (offset absoluto medido: 0x818; confianca media)
    void*& CurrentMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 72); }
    BrzCampoPonteiro CurrentOpenedInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentOpenedInventory")); }
    BrzCampoPonteiro CurrentRadialSelectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.CurrentRadialSelector")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +8, medido na build 25090264
    //  (offset absoluto medido: 0x7D8; confianca media)
    void*& CurrentRespawnUIField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +8, medido na build 25090264
    //  (offset absoluto medido: 0xDB0; confianca media)
    void*& CurrentSpawnMenuField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 8); }
    int& CurrentTargetIndexField() const
    { return *GetNativePointerField<int*>(this, "AShooterHUD.CurrentTargetIndex"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +8, medido na build 25090264
    //  (offset absoluto medido: 0xEE8; confianca alta)
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
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +192, medido na build 25090264
    //  (offset absoluto medido: 0xE68; confianca baixa)
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
    //  ancorado em `SpeechBubble` +12, medido na build 25090264
    //  (offset absoluto medido: 0x994; confianca alta)
    void*& HUDDarkField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +8, medido na build 25090264
    //  (offset absoluto medido: 0x990; confianca alta)
    void*& HUDLightField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 8); }
    BrzCampoPonteiro HUDMainTextureAtlasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HUDMainTextureAtlas")); }
    BrzCampoPonteiro HUDNotificationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HUDNotifications")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +24, medido na build 25090264
    //  (offset absoluto medido: 0xD28; confianca alta)
    void*& HideChatBoxHandleField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 24); }
    BrzCampoPonteiro HitMarkerTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitMarkerTexture")); }
    BrzCampoPonteiro HitNotifyCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyCrosshair")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +232, medido na build 25090264
    //  (offset absoluto medido: 0xBE8; confianca baixa)
    void*& HitNotifyDataField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +48, medido na build 25090264
    //  (offset absoluto medido: 0x9B8; confianca media)
    void*& HitNotifyDisplayTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 48); }
    BrzCampoPonteiro HitNotifyIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyIcon")); }
    BrzCampoPonteiro HitNotifyTextureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HitNotifyTexture")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +16, medido na build 25090264
    //  (offset absoluto medido: 0xEF0; confianca alta)
    void*& HitchStringField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 16); }
    BrzCampoPonteiro HubUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HubUITemplate")); }
    BrzCampoPonteiro HurtCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.HurtCameraShake")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomRadialSelector` +56, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca media)
    void*& IconMultiUseActionField() const
    { return BrzCampoAncorado<void*>(this, "CustomRadialSelector", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +368, medido na build 25090264
    //  (offset absoluto medido: 0xC70; confianca baixa)
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
    //  ancorado em `TutorialUI` +36, medido na build 25090264
    //  (offset absoluto medido: 0xF04; confianca media)
    void*& KingHitchField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 36); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastActorForceReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CachedFloatingOverlaps` +16, medido na build 25090264
    //  (offset absoluto medido: 0xF20; confianca alta)
    void*& LastCachedOverlapsFrameField() const
    { return BrzCampoAncorado<void*>(this, "CachedFloatingOverlaps", 16); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastExitStasisTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +52, medido na build 25090264
    //  (offset absoluto medido: 0x9BC; confianca media)
    void*& LastFilterEmoteNameField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 52); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +216, medido na build 25090264
    //  (offset absoluto medido: 0xE80; confianca baixa)
    void*& LastHUDTargetChangedTimeField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +40, medido na build 25090264
    //  (offset absoluto medido: 0x9B0; confianca media)
    double& LastHitTimeField() const
    { return BrzCampoAncorado<double>(this, "SpeechBubble", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +32, medido na build 25090264
    //  (offset absoluto medido: 0xF00; confianca alta)
    void*& LastHitchField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +40, medido na build 25090264
    //  (offset absoluto medido: 0xF08; confianca media)
    void*& LastNumLocalPlayersField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowAllPlayersWhenSpectatingLocal` +6, medido na build 25090264
    //  (offset absoluto medido: 0x5A8; confianca alta)
    void*& LastPlayerInfoRequestTimeField() const
    { return BrzCampoAncorado<void*>(this, "bShowAllPlayersWhenSpectatingLocal", 6); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterHUD.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastPreReplicationTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +224, medido na build 25090264
    //  (offset absoluto medido: 0xE88; confianca baixa)
    void*& LastReceivedChatMessagesField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 224); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "AShooterHUD.LastSelectedWindSourceComponentName"); }
    TWeakObjectPtr<void>& LastTargetedActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterHUD.LastTargetedActor"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterHUD.LastThrottledTickTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bMultiUseIsDrawingUIHUD` +8, medido na build 25090264
    //  (offset absoluto medido: 0xD78; confianca alta)
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
    //  ancorado em `CustomRadialSelector` +192, medido na build 25090264
    //  (offset absoluto medido: 0x890; confianca baixa)
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
    //  ancorado em `SpeechBubble` +32, medido na build 25090264
    //  (offset absoluto medido: 0x9A8; confianca alta)
    void*& NoAmmoFadeOutTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SpeechBubble` +16, medido na build 25090264
    //  (offset absoluto medido: 0x998; confianca alta)
    void*& NoAmmoNotifyTimeField() const
    { return BrzCampoAncorado<void*>(this, "SpeechBubble", 16); }
    BrzCampoPonteiro NormalFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.NormalFont")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +224, medido na build 25090264
    //  (offset absoluto medido: 0xBE0; confianca baixa)
    void*& OffsetField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +96, medido na build 25090264
    //  (offset absoluto medido: 0xB60; confianca media)
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
    //  ancorado em `SingletonHUDNotifications` +16, medido na build 25090264
    //  (offset absoluto medido: 0xCB0; confianca alta)
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
    //  ancorado em `HitNotifyCrosshair` +28, medido na build 25090264
    //  (offset absoluto medido: 0xB1C; confianca media)
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
    //  ancorado em `HitNotifyCrosshair` +24, medido na build 25090264
    //  (offset absoluto medido: 0xB18; confianca media)
    void*& ScaleUIField() const
    { return BrzCampoAncorado<void*>(this, "HitNotifyCrosshair", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HitNotifyCrosshair` +32, medido na build 25090264
    //  (offset absoluto medido: 0xB20; confianca media)
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
    //  ancorado em `CustomRadialSelector` +16, medido na build 25090264
    //  (offset absoluto medido: 0x7E0; confianca media)
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
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +16, medido na build 25090264
    //  (offset absoluto medido: 0xDB8; confianca media)
    void*& TempChatMsgField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 16); }
    BrzCampoPonteiro TextEntryUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TextEntryUITemplate")); }
    float& TimeToHideChatField() const
    { return *GetNativePointerField<float*>(this, "AShooterHUD.TimeToHideChat"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +16, medido na build 25090264
    //  (offset absoluto medido: 0xD20; confianca alta)
    void*& TimerHandle_DoShowSpawnUIField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 16); }
    BrzCampoPonteiro ToggledDebugCategoriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.ToggledDebugCategories")); }
    BrzCampoPonteiro TopOverlayHUDUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterHUD.TopOverlayHUDUITemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +208, medido na build 25090264
    //  (offset absoluto medido: 0xE78; confianca baixa)
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
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +304, medido na build 25090264
    //  (offset absoluto medido: 0xED8; confianca baixa)
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +72, medido na build 25090264
    //  (offset absoluto medido: 0xD58; confianca media)
    void*& bAutoShowChatField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 72); }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AdditionalDinoMultiuseCheckDistance` +212, medido na build 25090264
    //  (offset absoluto medido: 0xE7C; confianca baixa)
    void*& bChatVisibleField() const
    { return BrzCampoAncorado<void*>(this, "AdditionalDinoMultiuseCheckDistance", 212); }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDebugTextShadow()
    { return { (void*)this, "bEnableDebugTextShadow" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +79, medido na build 25090264
    //  (offset absoluto medido: 0xD5F; confianca media)
    void*& bExtraConsoleHideHUDField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 79); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +78, medido na build 25090264
    //  (offset absoluto medido: 0xD5E; confianca media)
    void*& bExtraHideHUDField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 78); }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +77, medido na build 25090264
    //  (offset absoluto medido: 0xD5D; confianca media)
    void*& bForceHUDHiddenField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 77); }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowingMinimapTooltip` +1, medido na build 25090264
    //  (offset absoluto medido: 0xF2A; confianca alta)
    void*& bFrameGenDisabledBecauseUIField() const
    { return BrzCampoAncorado<void*>(this, "bShowingMinimapTooltip", 1); }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +76, medido na build 25090264
    //  (offset absoluto medido: 0xD5C; confianca media)
    void*& bInitializedUIScenesField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 76); }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowingMinimapTooltip` +2, medido na build 25090264
    //  (offset absoluto medido: 0xF2B; confianca alta)
    void*& bLastFrameGenDisabledBecauseUIField() const
    { return BrzCampoAncorado<void*>(this, "bShowingMinimapTooltip", 2); }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bLostFocusPaused()
    { return { (void*)this, "bLostFocusPaused" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TutorialUI` +12, medido na build 25090264
    //  (offset absoluto medido: 0xEEC; confianca alta)
    void*& bPreventShowChatBoxField() const
    { return BrzCampoAncorado<void*>(this, "TutorialUI", 12); }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bShowAllPlayersWhenSpectating` +1, medido na build 25090264
    //  (offset absoluto medido: 0x5A1; confianca alta)
    void*& bRemovedPrimalGameplayHudsField() const
    { return BrzCampoAncorado<void*>(this, "bShowAllPlayersWhenSpectating", 1); }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bShowDebugInfo()
    { return { (void*)this, "bShowDebugInfo" }; }
    BitFieldValue<bool, unsigned __int32> bShowHUD()
    { return { (void*)this, "bShowHUD" }; }
    BitFieldValue<bool, unsigned __int32> bShowHitBoxDebugInfo()
    { return { (void*)this, "bShowHitBoxDebugInfo" }; }
    BitFieldValue<bool, unsigned __int32> bShowOverlays()
    { return { (void*)this, "bShowOverlays" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ItemRemovedNotificationIconColor` +16, medido na build 25090264
    //  (offset absoluto medido: 0x918; confianca alta)
    void*& bShowedKnockedNotificationField() const
    { return BrzCampoAncorado<void*>(this, "ItemRemovedNotificationIconColor", 16); }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +73, medido na build 25090264
    //  (offset absoluto medido: 0xD59; confianca media)
    void*& bTargetHarvestableField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 73); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +74, medido na build 25090264
    //  (offset absoluto medido: 0xD5A; confianca media)
    void*& bTargetHarvestableAllowedField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 74); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TeamPingTypes` +75, medido na build 25090264
    //  (offset absoluto medido: 0xD5B; confianca media)
    void*& bTargetHarvestableIsUsableField() const
    { return BrzCampoAncorado<void*>(this, "TeamPingTypes", 75); }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
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
