// ==========================================================================
//  UShooterGameViewportClient — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERGAMEVIEWPORTCLIENT_H
#define BRZ_SDK_JOGO_USHOOTERGAMEVIEWPORTCLIENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterGameViewportClient
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterGameViewportClient"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.AddLocalPlayer(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddLocalPlayer(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.AddLocalPlayer(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.AddToUpdatingModsUI(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToUpdatingModsUI(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameViewportClient.AddToUpdatingModsUI(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.AddViewportWidgetContent(TSharedRef<SWidget,1>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddViewportWidgetContent(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterGameViewportClient.AddViewportWidgetContent(TSharedRef<SWidget,1>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.AnyNonInventoryScenesWithMouseCapture(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnyNonInventoryScenesWithMouseCapture(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.AnyNonInventoryScenesWithMouseCapture(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.AnyScenesWithMouseCapture()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnyScenesWithMouseCapture() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.AnyScenesWithMouseCapture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.CanAddSplitscreenLocalPlayer(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAddSplitscreenLocalPlayer(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.CanAddSplitscreenLocalPlayer(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.CenterMouse(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CenterMouse(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.CenterMouse(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.CloseAllUIsOnDie(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CloseAllUIsOnDie(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.CloseAllUIsOnDie(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.DetachViewportClient()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetachViewportClient() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.DetachViewportClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetAllUIScenesFromClass(TSubclassOf<UPrimalUI>,ABasePlayerController*
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllUIScenesFromClass(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.GetAllUIScenesFromClass(TSubclassOf<UPrimalUI>,ABasePlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetCursor(FViewport*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCursor(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "UShooterGameViewportClient.GetCursor(FViewport*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetFirstLocalPlayer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFirstLocalPlayer() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.GetFirstLocalPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetGameViewportSize(int&,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameViewportSize(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.GetGameViewportSize(int&,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetGameWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameWorld() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.GetGameWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetNumScenes(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNumScenes(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameViewportClient.GetNumScenes(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetOpenedScenes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOpenedScenes() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.GetOpenedScenes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetSuperResolutionQualityMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSuperResolutionQualityMode() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.GetSuperResolutionQualityMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetTopUI(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTopUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.GetTopUI(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetTopUI(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTopUI(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.GetTopUI(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetUISceneFromClass(TSubclassOf<UPrimalUI>,ABasePlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUISceneFromClass(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.GetUISceneFromClass(TSubclassOf<UPrimalUI>,ABasePlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetUIScenesFromClass(TSubclassOf<UPrimalUI>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUIScenesFromClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.GetUIScenesFromClass(TSubclassOf<UPrimalUI>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.GetViewportClient(UWorld*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetViewportClient(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.GetViewportClient(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.HandleNavigation(unsignedint,TSharedPtr<SWidget,1>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleNavigation(unsigned int a0, void* a1) const
    {
        return NativeCall<void*, unsigned int, void*>(this, "UShooterGameViewportClient.HandleNavigation(unsignedint,TSharedPtr<SWidget,1>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.HideDialog(ULocalPlayer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideDialog(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.HideDialog(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.HideLoadingScreen()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideLoadingScreen() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.HideLoadingScreen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.HideUpdatingModsUI(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideUpdatingModsUI(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.HideUpdatingModsUI(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HideUpdatingModsUI(FString* a0) const
    { return HideUpdatingModsUI(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.InputAxis(FViewport*,int,FKey,float,float,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InputAxis(void* a0, int a1, void* a2, float a3, float a4, int a5, bool a6) const
    {
        return NativeCall<void*, void*, int, void*, float, float, int, bool>(this, "UShooterGameViewportClient.InputAxis(FViewport*,int,FKey,float,float,int,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.InputKey(FInputKeyEventArgs&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InputKey(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.InputKey(FInputKeyEventArgs&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsAnyUIConsumingInput(TSubclassOf<UPrimalUI>,AShooterPlayerController
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAnyUIConsumingInput(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.IsAnyUIConsumingInput(TSubclassOf<UPrimalUI>,AShooterPlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsFinalCreditsShowing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsFinalCreditsShowing() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.IsFinalCreditsShowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsHubUIOpen()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsHubUIOpen() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.IsHubUIOpen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsInPlayingState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInPlayingState() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.IsInPlayingState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsSplitscreenAllowed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSplitscreenAllowed() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.IsSplitscreenAllowed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.IsUnderwaterPostprocess(APostProcessVolume*,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsUnderwaterPostprocess(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.IsUnderwaterPostprocess(APostProcessVolume*,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.NotifyInventoryFolderAdded(UPrimalInventoryComponent*,FString,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyInventoryFolderAdded(void* a0, const FString& a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UShooterGameViewportClient.NotifyInventoryFolderAdded(UPrimalInventoryComponent*,FString,int)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro NotifyInventoryFolderAdded(void* a0, FString* a1, int a2) const
    { return NotifyInventoryFolderAdded(a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyInventoryPrimalItemAdded(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UShooterGameViewportClient.NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent*,UPrimalItem*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.OnLocalPlayerAddedOrRemoved()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLocalPlayerAddedOrRemoved() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.OnLocalPlayerAddedOrRemoved()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.OnLoginUIClosed(TSharedPtr<FUniqueNetId,1>,int,FOnlineError&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLoginUIClosed(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UShooterGameViewportClient.OnLoginUIClosed(TSharedPtr<FUniqueNetId,1>,int,FOnlineError&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.OnSplitscreenPlayerJoinFailure(FUniqueNetIdRepl,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnSplitscreenPlayerJoinFailure(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameViewportClient.OnSplitscreenPlayerJoinFailure(FUniqueNetIdRepl,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnSplitscreenPlayerJoinFailure(void* a0, FString* a1) const
    { return OnSplitscreenPlayerJoinFailure(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitProperties() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.PostInitProperties()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.PreWorldTick(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro PreWorldTick(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameViewportClient.PreWorldTick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ProcessScreenShots(FViewport*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ProcessScreenShots(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.ProcessScreenShots(FViewport*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ReAdjustUI()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReAdjustUI() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.ReAdjustUI()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.RefreshTopUI(ULocalPlayer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshTopUI(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.RefreshTopUI(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.RefreshTopUI(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshTopUI(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.RefreshTopUI(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.RemoveAllExistingWidgets()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveAllExistingWidgets() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.RemoveAllExistingWidgets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.RemoveLocalPlayer(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveLocalPlayer(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.RemoveLocalPlayer(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.RemoveViewportWidgetContent(TSharedRef<SWidget,1>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveViewportWidgetContent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.RemoveViewportWidgetContent(TSharedRef<SWidget,1>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ResetSpawnFlag()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ResetSpawnFlag() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.ResetSpawnFlag()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ResetVideoReplayBuffers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetVideoReplayBuffers() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.ResetVideoReplayBuffers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.SetCounterModsUI(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCounterModsUI(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.SetCounterModsUI(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.SetVideoReplayEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetVideoReplayEnabled(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameViewportClient.SetVideoReplayEnabled(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.SetupInitialLocalPlayer(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupInitialLocalPlayer(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.SetupInitialLocalPlayer(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetupInitialLocalPlayer(FString* a0) const
    { return SetupInitialLocalPlayer(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ShouldHideFSRFrameInterpolationSensitiveBrushes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldHideFSRFrameInterpolationSensitiveBrushes() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.ShouldHideFSRFrameInterpolationSensitiveBrushes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ShowUpdatingModsUI(APlayerController*,int,int,bool,FString,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowUpdatingModsUI(void* a0, int a1, int a2, bool a3, const FString& a4, bool a5, bool a6) const
    {
        return NativeCall<void*, void*, int, int, bool, void*, bool, bool>(this, "UShooterGameViewportClient.ShowUpdatingModsUI(APlayerController*,int,int,bool,FString,bool,bool)", a0, a1, a2, a3, const_cast<FString*>(&a4), a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowUpdatingModsUI(void* a0, int a1, int a2, bool a3, FString* a4, bool a5, bool a6) const
    { return ShowUpdatingModsUI(a0, a1, a2, a3, *a4, a5, a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.Shutdown()
    // endereco: cache_pdb_25090264
    BrzPonteiro Shutdown() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.Shutdown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameViewportClient.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.UpdateFrameGenerationState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateFrameGenerationState() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.UpdateFrameGenerationState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.UsingVirtualCursor(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UsingVirtualCursor(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameViewportClient.UsingVirtualCursor(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ValidateInput(ULocalPlayer*,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateInput(void* a0, bool a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, bool, bool, bool>(this, "UShooterGameViewportClient.ValidateInput(ULocalPlayer*,bool,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.ValidateInput(float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateInput(float a0, bool a1, bool a2) const
    {
        return NativeCall<void*, float, bool, bool>(this, "UShooterGameViewportClient.ValidateInput(float,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.WritePNTScreenshot(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WritePNTScreenshot(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameViewportClient.WritePNTScreenshot(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro WritePNTScreenshot(FString* a0) const
    { return WritePNTScreenshot(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameViewportClient.WriteVideoReplayBufferToDisk()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WriteVideoReplayBufferToDisk() const
    {
        return NativeCall<void*>(this, "UShooterGameViewportClient.WriteVideoReplayBufferToDisk()");
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UShooterGameViewportClient.GetTopUI(ULocalPlayer*)
    //      (colide com UShooterGameViewportClient.GetTopUI(APlayerController*))

    BrzCampoPonteiro DebugPropertiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.DebugProperties")); }
    BrzCampoPonteiro GameInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.GameInstance")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `UpdatingModsUI` +12, medido na build 25090264
    //  (offset absoluto medido: 0x424; confianca alta)
    void*& IncrementedUpdatingModsField() const
    { return BrzCampoAncorado<void*>(this, "UpdatingModsUI", 12); }
    BrzCampoPonteiro InfoFontField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.InfoFont")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ViewPortWidgets` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3D0; confianca alta)
    void*& InputProcessorPtrField() const
    { return BrzCampoAncorado<void*>(this, "ViewPortWidgets", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +28, medido na build 25090264
    //  (offset absoluto medido: 0x404; confianca alta)
    void*& LastGarbageCollectionTimeField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +16, medido na build 25090264
    //  (offset absoluto medido: 0x3F8; confianca alta)
    void*& LastTimeLocalPlayerRemovedField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 16); }
    BrzCampoPonteiro LoadingMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.LoadingMusic")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +32, medido na build 25090264
    //  (offset absoluto medido: 0x408; confianca alta)
    void*& LoadingScreenWidgetField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 32); }
    int& MaxSplitscreenPlayersField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.MaxSplitscreenPlayers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +24, medido na build 25090264
    //  (offset absoluto medido: 0x400; confianca alta)
    void*& NumInventoryOpensWithoutGCField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 24); }
    int& NumReplaySecondsToStoreField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameViewportClient.NumReplaySecondsToStore"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `UpdatingModsUI` +8, medido na build 25090264
    //  (offset absoluto medido: 0x420; confianca alta)
    void*& UpdatingModsNumField() const
    { return BrzCampoAncorado<void*>(this, "UpdatingModsUI", 8); }
    BrzCampoPonteiro UpdatingModsUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.UpdatingModsUI")); }
    BrzCampoPonteiro ViewPortWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.ViewPortWidgets")); }
    BrzCampoPonteiro ViewportConsoleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.ViewportConsole")); }
    BrzCampoPonteiro WorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameViewportClient.World")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +9, medido na build 25090264
    //  (offset absoluto medido: 0x3F1; confianca alta)
    void*& bActiveScreenFadeField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InfoFont` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3F0; confianca alta)
    void*& bDisplayedStartupTutorialField() const
    { return BrzCampoAncorado<void*>(this, "InfoFont", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `UpdatingModsUI` +16, medido na build 25090264
    //  (offset absoluto medido: 0x428; confianca alta)
    void*& bSettingModsCounterField() const
    { return BrzCampoAncorado<void*>(this, "UpdatingModsUI", 16); }
    BitFieldValue<bool, unsigned __int32> VideoReplayEnabled()
    { return { (void*)this, "VideoReplayEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERGAMEVIEWPORTCLIENT_H
