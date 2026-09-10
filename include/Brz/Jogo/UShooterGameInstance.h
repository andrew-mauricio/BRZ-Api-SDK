// ==========================================================================
//  UShooterGameInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERGAMEINSTANCE_H
#define BRZ_SDK_JOGO_USHOOTERGAMEINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;


struct UShooterGameInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterGameInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AddNetworkFailureHandlers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddNetworkFailureHandlers() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.AddNetworkFailureHandlers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AddToUpdatingModsUI(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToUpdatingModsUI(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.AddToUpdatingModsUI(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AppendCrashInfoTo(wchar_t*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendCrashInfoTo(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterGameInstance.AppendCrashInfoTo(wchar_t*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ApplyIsOnline()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyIsOnline() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.ApplyIsOnline()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AsyncLoadAssetFromPath(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncLoadAssetFromPath(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.AsyncLoadAssetFromPath(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AsyncLoadAssetFromPath(FString* a0) const
    { return AsyncLoadAssetFromPath(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AsyncUnloadAssetFromObject(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncUnloadAssetFromObject(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromObject(UObject*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.AsyncUnloadAssetFromPath(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncUnloadAssetFromPath(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterGameInstance.AsyncUnloadAssetFromPath(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AsyncUnloadAssetFromPath(FString* a0, bool a1) const
    { return AsyncUnloadAssetFromPath(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.BPGetMarketInfo(int,FMarketInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetMarketInfo(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UShooterGameInstance.BPGetMarketInfo(int,FMarketInfo&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.BeginMainMenuState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginMainMenuState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.BeginMainMenuState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.BeginMessageMenuState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginMessageMenuState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.BeginMessageMenuState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.BeginWelcomeScreenState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro BeginWelcomeScreenState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.BeginWelcomeScreenState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.CanUseUserGeneratedContent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUseUserGeneratedContent() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.CanUseUserGeneratedContent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.CheckOnlineGameValidity(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckOnlineGameValidity(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.CheckOnlineGameValidity(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.CleanupSessionOnReturnToMenu(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CleanupSessionOnReturnToMenu(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.CleanupSessionOnReturnToMenu(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ClearClientTradeData()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=158]]
    BrzPonteiro ClearClientTradeData() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.ClearClientTradeData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ClearDiscordJoinBinding()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearDiscordJoinBinding() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.ClearDiscordJoinBinding()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ClearPendingDiscordInviteJoin()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearPendingDiscordInviteJoin() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.ClearPendingDiscordInviteJoin()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.Client_IsPlayerBlocked(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Client_IsPlayerBlocked(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.Client_IsPlayerBlocked(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DisableDownloadedMod(FInstalledMod&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisableDownloadedMod(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.DisableDownloadedMod(FInstalledMod&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DisableInstalledMods()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisableInstalledMods() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.DisableInstalledMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DisplayGlobalMainMenuNotification()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisplayGlobalMainMenuNotification() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.DisplayGlobalMainMenuNotification()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DoPostLoadMap(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoPostLoadMap(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.DoPostLoadMap(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DoesMarketRequestOrderExistClient(TSoftClassPtr<UPrimalItem>,int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesMarketRequestOrderExistClient(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "UShooterGameInstance.DoesMarketRequestOrderExistClient(TSoftClassPtr<UPrimalItem>,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.DoesMarketSellOrderExist_Client(FItemNetID&,TSoftClassPtr<UPrimalItem>,__in
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesMarketSellOrderExist_Client(void* a0, void* a1, long long a2, bool a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, long long, bool, bool>(this, "UShooterGameInstance.DoesMarketSellOrderExist_Client(FItemNetID&,TSoftClassPtr<UPrimalItem>,__int64,bool,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.EnableDownloadedMod(FInstalledMod&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableDownloadedMod(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "UShooterGameInstance.EnableDownloadedMod(FInstalledMod&,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.EnableOpenColorIOObject(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableOpenColorIOObject(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.EnableOpenColorIOObject(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.EndCurrentState(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndCurrentState(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UShooterGameInstance.EndCurrentState(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.EndMessageMenuState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro EndMessageMenuState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.EndMessageMenuState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.EndWelcomeScreenState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro EndWelcomeScreenState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.EndWelcomeScreenState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FindLevelSequenceActorThatHasObject(UWorld*,UObject*,TSet<UObject*,DefaultK
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindLevelSequenceActorThatHasObject(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterGameInstance.FindLevelSequenceActorThatHasObject(UWorld*,UObject*,TSet<UObject*,DefaultKeyFuncs<UObject*,0>,FDefaultSetAllocator>*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FindPlatformLocalPlayerFromUniqueNetId(FUniqueNetId&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindPlatformLocalPlayerFromUniqueNetId(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.FindPlatformLocalPlayerFromUniqueNetId(FUniqueNetId&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FindRegisteredMarket(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro FindRegisteredMarket(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.FindRegisteredMarket(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FinishAsyncLoading()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishAsyncLoading() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.FinishAsyncLoading()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FinishJoinSession(EOnJoinSessionCompleteResult::Type)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=22/22]]
    BrzPonteiro FinishJoinSession(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.FinishJoinSession(EOnJoinSessionCompleteResult::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.FinishLoadMap(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinishLoadMap(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.FinishLoadMap(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro FinishLoadMap(FString* a0) const
    { return FinishLoadMap(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetActiveMods()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActiveMods() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetActiveMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetCSVFromIntArray(TArray<__int64,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCSVFromIntArray(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetCSVFromIntArray(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetDefaultGameModeClass()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDefaultGameModeClass() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetDefaultGameModeClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetFirstPlatformUserId()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFirstPlatformUserId() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetFirstPlatformUserId()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetGameSession()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGameSession() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetGameSession()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetGameSpecificMessageResultsForConnection(EPrimalControlMessageID,UNetConn
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetGameSpecificMessageResultsForConnection(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "UShooterGameInstance.GetGameSpecificMessageResultsForConnection(EPrimalControlMessageID,UNetConnection*,TArray<FPrimalGameSpecificMessageResult,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetInstalledCustomCosmetics(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInstalledCustomCosmetics(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.GetInstalledCustomCosmetics(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetInstalledDynamicMods()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetInstalledDynamicMods() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetInstalledDynamicMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetInstalledMods()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetInstalledMods() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetInstalledMods()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetIntArrayFromCSV(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetIntArrayFromCSV(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetIntArrayFromCSV(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetIntArrayFromCSV(FString* a0) const
    { return GetIntArrayFromCSV(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetMarketInfo(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMarketInfo(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.GetMarketInfo(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetMarketInfoClient(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMarketInfoClient(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.GetMarketInfoClient(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetOfflineModDataCacheFilePath()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOfflineModDataCacheFilePath() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetOfflineModDataCacheFilePath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetOnlinePlatformName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetOnlinePlatformName() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetOnlinePlatformName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetPendingDiscordInviteJoin(FDiscordPendingJoin&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPendingDiscordInviteJoin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetPendingDiscordInviteJoin(FDiscordPendingJoin&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetPlatformUserIdFromUniqueID(TSharedPtr<FUniqueNetId,1>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlatformUserIdFromUniqueID(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetPlatformUserIdFromUniqueID(TSharedPtr<FUniqueNetId,1>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetRemappedResourceClass(TSubclassOf<UObject>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRemappedResourceClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetRemappedResourceClass(TSubclassOf<UObject>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetRequestOrderInfoClient(TSoftClassPtr<UPrimalItem>,FMarketRequestOrder&,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRequestOrderInfoClient(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UShooterGameInstance.GetRequestOrderInfoClient(TSoftClassPtr<UPrimalItem>,FMarketRequestOrder&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetRequiredModsFromList(TArray<__int64,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRequiredModsFromList(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetRequiredModsFromList(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrderIdForItem(FItemNetID,FItemNetID&,int,TSoftClassPtr<UPrimalItem>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderIdForItem(unsigned long long a0, void* a1, int a2, void* a3, bool a4) const
    {
        return NativeCall<void*, unsigned long long, void*, int, void*, bool>(this, "UShooterGameInstance.GetSellOrderIdForItem(FItemNetID,FItemNetID&,int,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrderIdForTradeData(FItemNetID,FMarketTradeData&,FItemNetID&,TSoftCl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderIdForTradeData(unsigned long long a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*, bool>(this, "UShooterGameInstance.GetSellOrderIdForTradeData(FItemNetID,FMarketTradeData&,FItemNetID&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrderInfo(FItemNetID,FMarketSellOrder&,int,TSoftClassPtr<UPrimalItem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderInfo(unsigned long long a0, void* a1, int a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, int, void*>(this, "UShooterGameInstance.GetSellOrderInfo(FItemNetID,FMarketSellOrder&,int,TSoftClassPtr<UPrimalItem>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrderInfoForTradeData(FItemNetID&,FMarketTradeData&,FMarketSellOrder
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderInfoForTradeData(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool>(this, "UShooterGameInstance.GetSellOrderInfoForTradeData(FItemNetID&,FMarketTradeData&,FMarketSellOrder&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrderInfo_Client(FItemNetID,FMarketSellOrder&,int,TSoftClassPtr<UPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSellOrderInfo_Client(unsigned long long a0, void* a1, int a2, void* a3, bool a4) const
    {
        return NativeCall<void*, unsigned long long, void*, int, void*, bool>(this, "UShooterGameInstance.GetSellOrderInfo_Client(FItemNetID,FMarketSellOrder&,int,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSellOrder_Client(int,__int64)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSellOrder_Client(int a0, long long a1) const
    {
        return NativeCall<void*, int, long long>(this, "UShooterGameInstance.GetSellOrder_Client(int,__int64)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetServerModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerModArray(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetServerModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetServerModsToSync()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerModsToSync() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetServerModsToSync()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetServerPassiveModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerPassiveModArray(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetServerPassiveModArray(TArray<__int64,TSizedDefaultAllocator<32>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetSkeletalPhysCustomBodyAdditionalIgnores()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSkeletalPhysCustomBodyAdditionalIgnores() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.GetSkeletalPhysCustomBodyAdditionalIgnores()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetTribeDataMemberIds(FTribeData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTribeDataMemberIds(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.GetTribeDataMemberIds(FTribeData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GetUniqueNetIdFromControllerId(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUniqueNetIdFromControllerId(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.GetUniqueNetIdFromControllerId(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.GotoState(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GotoState(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UShooterGameInstance.GotoState(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleAppLicenseUpdate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleAppLicenseUpdate() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HandleAppLicenseUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleAppResume()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleAppResume() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HandleAppResume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleAppSuspend()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleAppSuspend() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HandleAppSuspend()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleAppWillDeactivate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleAppWillDeactivate() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HandleAppWillDeactivate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleDiscordActivityJoin(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleDiscordActivityJoin(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.HandleDiscordActivityJoin(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleDiscordActivityJoin(FString* a0) const
    { return HandleDiscordActivityJoin(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleGameNetControlMessage(UNetConnection*,unsignedchar,FString&)
    // endereco: cache_pdb_25090264
    BrzPonteiro HandleGameNetControlMessage(void* a0, unsigned char a1, const FString& a2) const
    {
        return NativeCall<void*, void*, unsigned char, void*>(this, "UShooterGameInstance.HandleGameNetControlMessage(UNetConnection*,unsignedchar,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleGameNetControlMessage(void* a0, unsigned char a1, FString* a2) const
    { return HandleGameNetControlMessage(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleLocalPlayerAddedForDiscordJoinBinding(ULocalPlayer*)
    // endereco: cache_pdb_25090264
    BrzPonteiro HandleLocalPlayerAddedForDiscordJoinBinding(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.HandleLocalPlayerAddedForDiscordJoinBinding(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleLoginComplete(int,bool,FUniqueNetId&,FString&)
    // endereco: cache_pdb_25090264
    BrzPonteiro HandleLoginComplete(int a0, bool a1, void* a2, const FString& a3) const
    {
        return NativeCall<void*, int, bool, void*, void*>(this, "UShooterGameInstance.HandleLoginComplete(int,bool,FUniqueNetId&,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleLoginComplete(int a0, bool a1, void* a2, FString* a3) const
    { return HandleLoginComplete(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleOpenCommand(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterGameInstance.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleSessionUserInviteAccepted(bool,int,TSharedPtr<FUniqueNetId,1>,FOnline
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleSessionUserInviteAccepted(bool a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, bool, int, void*, void*>(this, "UShooterGameInstance.HandleSessionUserInviteAccepted(bool,int,TSharedPtr<FUniqueNetId,1>,FOnlineSessionSearchResult&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HandleUserLoginChanged(int,ELoginStatus::Type,ELoginStatus::Type,FUniqueNet
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=3/3]]
    BrzPonteiro HandleUserLoginChanged(int a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, int, int, void*>(this, "UShooterGameInstance.HandleUserLoginChanged(int,ELoginStatus::Type,ELoginStatus::Type,FUniqueNetId&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HasCommunicationPrivilige()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasCommunicationPrivilige() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HasCommunicationPrivilige()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HasCrossplayPrivilege()
    // endereco: cache_pdb_25090264
    BrzPonteiro HasCrossplayPrivilege() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.HasCrossplayPrivilege()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.HideUpdatingModsUI(bool,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HideUpdatingModsUI(bool a0, const FString& a1) const
    {
        return NativeCall<void*, bool, void*>(this, "UShooterGameInstance.HideUpdatingModsUI(bool,FString)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HideUpdatingModsUI(bool a0, FString* a1) const
    { return HideUpdatingModsUI(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.Init()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Init() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.Init()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.InternalTravelToSession(FName&)
    // endereco: cache_pdb_25090264
    BrzPonteiro InternalTravelToSession(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.InternalTravelToSession(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro InternalTravelToSession(FName* a0) const
    { return InternalTravelToSession(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.IsInstallingAnyMods(TArray<__int64,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInstallingAnyMods(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.IsInstallingAnyMods(TArray<__int64,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.IsItemInClassOrderForMarket_Client(TSoftClassPtr<UPrimalItem>,FItemNetID&,_
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsItemInClassOrderForMarket_Client(void* a0, void* a1, long long a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, long long, bool>(this, "UShooterGameInstance.IsItemInClassOrderForMarket_Client(TSoftClassPtr<UPrimalItem>,FItemNetID&,__int64,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.IsItemInClassOrderForTradeData(FItemNetID&,FMarketTradeData&,TSoftClassPtr<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsItemInClassOrderForTradeData(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "UShooterGameInstance.IsItemInClassOrderForTradeData(FItemNetID&,FMarketTradeData&,TSoftClassPtr<UPrimalItem>,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.IsLocalPlayerOnline(ULocalPlayer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsLocalPlayerOnline(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.IsLocalPlayerOnline(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.JoinSession(ULocalPlayer*,FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinSession(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.JoinSession(ULocalPlayer*,FOnlineSessionSearchResult&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.JoinSession(ULocalPlayer*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinSession(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterGameInstance.JoinSession(ULocalPlayer*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.LoadCachedDB(FString,FCachedDBSet&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadCachedDB(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.LoadCachedDB(FString,FCachedDBSet&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadCachedDB(FString* a0, void* a1) const
    { return LoadCachedDB(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.LoadFrontEndMap(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadFrontEndMap(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterGameInstance.LoadFrontEndMap(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadFrontEndMap(FString* a0, bool a1) const
    { return LoadFrontEndMap(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.LoadGameMedia()
    // endereco: cache_pdb_25090264
    BrzPonteiro LoadGameMedia() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.LoadGameMedia()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.LoadTheGameMedia()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadTheGameMedia() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.LoadTheGameMedia()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ManualTickWorldTransition(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ManualTickWorldTransition(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameInstance.ManualTickWorldTransition(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.MaybeChangeState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MaybeChangeState() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.MaybeChangeState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ModHasCategory(FInstalledMod&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ModHasCategory(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.ModHasCategory(FInstalledMod&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ModHasCategory(void* a0, FString* a1) const
    { return ModHasCategory(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.OnDLCChecksComplete()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDLCChecksComplete() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.OnDLCChecksComplete()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.OnEndSessionComplete(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEndSessionComplete(unsigned long long a0, bool a1) const
    {
        return NativeCall<void*, unsigned long long, bool>(this, "UShooterGameInstance.OnEndSessionComplete(FName,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnJoinSessionComplete(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.OnLoginCompleteForDiscord(int,bool,FUniqueNetId&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnLoginCompleteForDiscord(int a0, bool a1, void* a2, const FString& a3) const
    {
        return NativeCall<void*, int, bool, void*, void*>(this, "UShooterGameInstance.OnLoginCompleteForDiscord(int,bool,FUniqueNetId&,FString&)", a0, a1, a2, const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnLoginCompleteForDiscord(int a0, bool a1, void* a2, FString* a3) const
    { return OnLoginCompleteForDiscord(a0, a1, a2, *a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.OnPreLoadMap(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=370+grafo=4/4]]
    BrzPonteiro OnPreLoadMap(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.OnPreLoadMap(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnPreLoadMap(FString* a0) const
    { return OnPreLoadMap(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.PauseCurrentMusic_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PauseCurrentMusic_Implementation() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.PauseCurrentMusic_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.PermissionToSeeName(unsignedint)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PermissionToSeeName(unsigned int a0) const
    {
        return NativeCall<void*, unsigned int>(this, "UShooterGameInstance.PermissionToSeeName(unsignedint)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.PrimalBeginAuthenticateClientFromPlatform(UNetConnection*,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrimalBeginAuthenticateClientFromPlatform(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.PrimalBeginAuthenticateClientFromPlatform(UNetConnection*,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro PrimalBeginAuthenticateClientFromPlatform(void* a0, FString* a1) const
    { return PrimalBeginAuthenticateClientFromPlatform(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.QueueDiscordInviteJoin(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro QueueDiscordInviteJoin(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.QueueDiscordInviteJoin(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro QueueDiscordInviteJoin(FString* a0) const
    { return QueueDiscordInviteJoin(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ReceiveGlobalMarketTradeDataChunk(TArray<FNetMarketSellOrder,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceiveGlobalMarketTradeDataChunk(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.ReceiveGlobalMarketTradeDataChunk(TArray<FNetMarketSellOrder,TSizedDefaultAllocator<32>>&,TArray<FNetMarketRequestOrder,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RefreshDiscordJoinBinding(UShooterDiscordUISubsystem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshDiscordJoinBinding(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.RefreshDiscordJoinBinding(UShooterDiscordUISubsystem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RegisterMarket(APrimalStructureMarket*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterMarket(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.RegisterMarket(APrimalStructureMarket*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RemoveExistingLocalPlayer(ULocalPlayer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExistingLocalPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.RemoveExistingLocalPlayer(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RemoveLocalPlayer(ULocalPlayer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveLocalPlayer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.RemoveLocalPlayer(ULocalPlayer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RemoveSplitScreenPlayers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveSplitScreenPlayers() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.RemoveSplitScreenPlayers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RequestNewSTSToken(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro RequestNewSTSToken(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.RequestNewSTSToken(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.RequestTradeData(AShooterPlayerController*,APrimalStructure*,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestTradeData(void* a0, void* a1, double a2) const
    {
        return NativeCall<void*, void*, void*, double>(this, "UShooterGameInstance.RequestTradeData(AShooterPlayerController*,APrimalStructure*,double)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SentrySettingsDelegate(USentrySettings*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SentrySettingsDelegate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.SentrySettingsDelegate(USentrySettings*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.Server_IsPlayerBlocked(APlayerController*,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Server_IsPlayerBlocked(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGameInstance.Server_IsPlayerBlocked(APlayerController*,APlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SetCounterModsUI(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCounterModsUI(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameInstance.SetCounterModsUI(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SetIsOnline(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsOnline(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameInstance.SetIsOnline(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SetPresenceForLocalPlayers(FVariantData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPresenceForLocalPlayers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.SetPresenceForLocalPlayers(FVariantData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SetupForMapLoad(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupForMapLoad(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.SetupForMapLoad(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ShowLoadingScreen()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=78+chamadores=3]]
    BrzPonteiro ShowLoadingScreen() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.ShowLoadingScreen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ShowMessageThenGoMain(FString&,FString&,FString&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShowMessageThenGoMain(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterGameInstance.ShowMessageThenGoMain(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowMessageThenGoMain(FString* a0, FString* a1, FString* a2) const
    { return ShowMessageThenGoMain(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ShowModDeeplinkConfirmation(__int64,APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowModDeeplinkConfirmation(long long a0, void* a1) const
    {
        return NativeCall<void*, long long, void*>(this, "UShooterGameInstance.ShowModDeeplinkConfirmation(__int64,APlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.ShowUpdatingModsUI(int,bool,FString,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShowUpdatingModsUI(int a0, bool a1, const FString& a2, bool a3, bool a4) const
    {
        return NativeCall<void*, int, bool, void*, bool, bool>(this, "UShooterGameInstance.ShowUpdatingModsUI(int,bool,FString,bool,bool)", a0, a1, const_cast<FString*>(&a2), a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ShowUpdatingModsUI(int a0, bool a1, FString* a2, bool a3, bool a4) const
    { return ShowUpdatingModsUI(a0, a1, *a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.Shutdown()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=11/11]]
    BrzPonteiro Shutdown() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.Shutdown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SmoothSaveGame(ISaveGameSystem*,bool,wchar_t*,int,TArray<unsignedchar,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SmoothSaveGame(void* a0, bool a1, void* a2, int a3, void* a4) const
    {
        return NativeCall<void*, void*, bool, void*, int, void*>(this, "UShooterGameInstance.SmoothSaveGame(ISaveGameSystem*,bool,wchar_t*,int,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.StartGameInstance()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartGameInstance() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.StartGameInstance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.StartNonDedicatedSession(FString,FString,FString,FString,bool,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartNonDedicatedSession(const FString& a0, const FString& a1, const FString& a2, const FString& a3, bool a4, const FString& a5) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, void*>(this, "UShooterGameInstance.StartNonDedicatedSession(FString,FString,FString,FString,bool,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4, const_cast<FString*>(&a5));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro StartNonDedicatedSession(FString* a0, FString* a1, FString* a2, FString* a3, bool a4, FString* a5) const
    { return StartNonDedicatedSession(*a0, *a1, *a2, *a3, a4, *a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.StopLoadingMusic()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopLoadingMusic() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.StopLoadingMusic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.SyncDiscordJoinBindingToFirstLocalPlayer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncDiscordJoinBindingToFirstLocalPlayer() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.SyncDiscordJoinBindingToFirstLocalPlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.Tick(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameInstance.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.TravelLocalSessionFailure(UWorld*,ETravelFailure::Type,FString&)
    // endereco: cache_pdb_25090264
    BrzPonteiro TravelLocalSessionFailure(void* a0, int a1, const FString& a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UShooterGameInstance.TravelLocalSessionFailure(UWorld*,ETravelFailure::Type,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro TravelLocalSessionFailure(void* a0, int a1, FString* a2) const
    { return TravelLocalSessionFailure(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.TrimMemory()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TrimMemory() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.TrimMemory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.UnregisterMarketByRef(APrimalStructureMarket*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UnregisterMarketByRef(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.UnregisterMarketByRef(APrimalStructureMarket*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.UpdateOpenColorIOObject(FOpenColorIODisplayConfiguration&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateOpenColorIOObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.UpdateOpenColorIOObject(FOpenColorIODisplayConfiguration&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.UpdateOwnedPremiumMods(TArray<__int64,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateOwnedPremiumMods(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.UpdateOwnedPremiumMods(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.UpdateOwnedPremiumModsFromCache(TArray<__int64,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateOwnedPremiumModsFromCache(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameInstance.UpdateOwnedPremiumModsFromCache(TArray<__int64,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameInstance.WorldLoaded()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WorldLoaded() const
    {
        return NativeCall<void*>(this, "UShooterGameInstance.WorldLoaded()");
    }

    FName& ActiveEventField() const
    { return *GetNativePointerField<FName*>(this, "UShooterGameInstance.ActiveEvent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +336, medido na build 25090264
    //  (offset absoluto medido: 0xA88; confianca baixa)
    void*& ActiveSettingsCommandArgumentsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 336); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +240, medido na build 25090264
    //  (offset absoluto medido: 0xA28; confianca baixa)
    void*& ActivityRequestedHandleField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 240); }
    BrzCampoPonteiro AsyncLoadededAssetReferencesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.AsyncLoadededAssetReferences")); }
    int& AutoPgoSweepIntervalField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameInstance.AutoPgoSweepInterval"); }
    BrzCampoPonteiro BackblazeCloudStorageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.BackblazeCloudStorage")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +304, medido na build 25090264
    //  (offset absoluto medido: 0xA68; confianca baixa)
    void*& BannedServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 304); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +128, medido na build 25090264
    //  (offset absoluto medido: 0x9B8; confianca media)
    void*& CacheOwnedPremiumModsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +280, medido na build 25090264
    //  (offset absoluto medido: 0xA50; confianca baixa)
    void*& CanBindActivityField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 280); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAsyncAssetLoaded` +112, medido na build 25090264
    //  (offset absoluto medido: 0x290; confianca media)
    void*& Client_BlockedUserIdsField() const
    { return BrzCampoAncorado<void*>(this, "OnAsyncAssetLoaded", 112); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +248, medido na build 25090264
    //  (offset absoluto medido: 0xA30; confianca baixa)
    void*& CurrentActivityField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 248); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +184, medido na build 25090264
    //  (offset absoluto medido: 0x9F0; confianca baixa)
    void*& DinoIKCooldownTimerField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 184); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +192, medido na build 25090264
    //  (offset absoluto medido: 0x9F8; confianca baixa)
    void*& DinoIKDistanceMultiplierField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 192); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifiersContainer` +8, medido na build 25090264
    //  (offset absoluto medido: 0x3A0; confianca media)
    void*& EnabledModsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifiersContainer", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +324, medido na build 25090264
    //  (offset absoluto medido: 0xA7C; confianca baixa)
    void*& FailedAttemptsToGetBannerServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 324); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +320, medido na build 25090264
    //  (offset absoluto medido: 0xA78; confianca baixa)
    void*& FailedAttemptsToGetOfficialServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 320); }
    BrzCampoPonteiro GlobalTradeData_ClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.GlobalTradeData_Client")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +16, medido na build 25090264
    //  (offset absoluto medido: 0x948; confianca media)
    void*& InputPreprocessorPtrField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +216, medido na build 25090264
    //  (offset absoluto medido: 0xA10; confianca baixa)
    void*& InvitePasswordField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 216); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +200, medido na build 25090264
    //  (offset absoluto medido: 0xA00; confianca baixa)
    void*& InvitePasswordUIField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 200); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAsyncAssetLoaded` +272, medido na build 25090264
    //  (offset absoluto medido: 0x330; confianca baixa)
    void*& ListenServerVoiceLobbyIdField() const
    { return BrzCampoAncorado<void*>(this, "OnAsyncAssetLoaded", 272); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +48, medido na build 25090264
    //  (offset absoluto medido: 0x968; confianca media)
    void*& LocalOwnedPremiumModsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 48); }
    BrzCampoPonteiro LocalPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.LocalPlayers")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAsyncAssetLoaded` +192, medido na build 25090264
    //  (offset absoluto medido: 0x2E0; confianca baixa)
    void*& MainMenuBlockedUserResultsField() const
    { return BrzCampoAncorado<void*>(this, "OnAsyncAssetLoaded", 192); }
    FString& MainMenuMapField() const
    { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.MainMenuMap"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackblazeCloudStorage` +8, medido na build 25090264
    //  (offset absoluto medido: 0xAA8; confianca alta)
    void*& ModBrowserManagementActorRefField() const
    { return BrzCampoAncorado<void*>(this, "BackblazeCloudStorage", 8); }
    BrzCampoPonteiro MusicPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.MusicPlayer")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +176, medido na build 25090264
    //  (offset absoluto medido: 0x9E8; confianca baixa)
    void*& NumDinoIKThisFrameField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 176); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +196, medido na build 25090264
    //  (offset absoluto medido: 0x9FC; confianca baixa)
    void*& NumDinoIKThisFrameTargetField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 196); }
    BrzCampoPonteiro ObjectsPendingTimeShiftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.ObjectsPendingTimeShift")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +288, medido na build 25090264
    //  (offset absoluto medido: 0xA58; confianca baixa)
    void*& OfficialServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 288); }
    BrzCampoPonteiro OnAsyncAssetLoadedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OnAsyncAssetLoaded")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +32, medido na build 25090264
    //  (offset absoluto medido: 0x958; confianca media)
    void*& OnAutoUpdatingModsCompleteField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 32); }
    BrzCampoPonteiro OnInputDeviceConnectionChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OnInputDeviceConnectionChange")); }
    BrzCampoPonteiro OnPawnControllerChangedDelegatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OnPawnControllerChangedDelegates")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAsyncAssetLoaded` +16, medido na build 25090264
    //  (offset absoluto medido: 0x230; confianca media)
    void*& OnPossessBlockPlayerNotificationField() const
    { return BrzCampoAncorado<void*>(this, "OnAsyncAssetLoaded", 16); }
    BrzCampoPonteiro OnUserInputDevicePairingChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OnUserInputDevicePairingChange")); }
    BrzCampoPonteiro OnlineSessionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OnlineSession")); }
    BrzCampoPonteiro OpenColorIOObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.OpenColorIOObject")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +144, medido na build 25090264
    //  (offset absoluto medido: 0x9C8; confianca baixa)
    void*& PMXMField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifiersContainer` +88, medido na build 25090264
    //  (offset absoluto medido: 0x3F0; confianca media)
    void*& PassiveModsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifiersContainer", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +264, medido na build 25090264
    //  (offset absoluto medido: 0xA40; confianca baixa)
    void*& PendingActivityChangeField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 264); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AutoPgoSweepInterval` +232, medido na build 25090264
    //  (offset absoluto medido: 0x558; confianca baixa)
    void*& PendingInviteField() const
    { return BrzCampoAncorado<void*>(this, "AutoPgoSweepInterval", 232); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AutoPgoSweepInterval` +160, medido na build 25090264
    //  (offset absoluto medido: 0x510; confianca baixa)
    void*& PendingMessageAfterReachingStateField() const
    { return BrzCampoAncorado<void*>(this, "AutoPgoSweepInterval", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +352, medido na build 25090264
    //  (offset absoluto medido: 0xA98; confianca baixa)
    void*& PendingModDeeplinkField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 352); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackblazeCloudStorage` +24, medido na build 25090264
    //  (offset absoluto medido: 0xAB8; confianca alta)
    void*& PreviewAudienceHandleField() const
    { return BrzCampoAncorado<void*>(this, "BackblazeCloudStorage", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +160, medido na build 25090264
    //  (offset absoluto medido: 0x9D8; confianca baixa)
    void*& PrimalCinematicActorField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +168, medido na build 25090264
    //  (offset absoluto medido: 0x9E0; confianca baixa)
    void*& PrimalLevelSequenceDirectorHidingUIField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 168); }
    BrzCampoPonteiro ReferencedObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.ReferencedObjects")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `OnAsyncAssetLoaded` +32, medido na build 25090264
    //  (offset absoluto medido: 0x240; confianca media)
    void*& Server_BlockedUserMapField() const
    { return BrzCampoAncorado<void*>(this, "OnAsyncAssetLoaded", 32); }
    FString& WelcomeScreenMapField() const
    { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WelcomeScreenMap"); }
    FString& WorldModifierConfigOverrideField() const
    { return *GetNativePointerField<FString*>(this, "UShooterGameInstance.WorldModifierConfigOverride"); }
    BrzCampoPonteiro WorldModifiersContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameInstance.WorldModifiersContainer")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +329, medido na build 25090264
    //  (offset absoluto medido: 0xA81; confianca baixa)
    void*& bBusyGettingBannedServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 329); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +328, medido na build 25090264
    //  (offset absoluto medido: 0xA80; confianca baixa)
    void*& bBusyGettingOfficialServerIPsField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 328); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackblazeCloudStorage` +16, medido na build 25090264
    //  (offset absoluto medido: 0xAB0; confianca alta)
    void*& bForceCallToBeginMainMenuStateField() const
    { return BrzCampoAncorado<void*>(this, "BackblazeCloudStorage", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifiersContainer` +168, medido na build 25090264
    //  (offset absoluto medido: 0x440; confianca baixa)
    void*& bForceDefaultMainMenuField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifiersContainer", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifiersContainer` +169, medido na build 25090264
    //  (offset absoluto medido: 0x441; confianca baixa)
    void*& bForceStateChangeField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifiersContainer", 169); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackblazeCloudStorage` +32, medido na build 25090264
    //  (offset absoluto medido: 0xAC0; confianca alta)
    void*& bIsPreviewAuthenticatedField() const
    { return BrzCampoAncorado<void*>(this, "BackblazeCloudStorage", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AutoPgoSweepInterval` +224, medido na build 25090264
    //  (offset absoluto medido: 0x550; confianca baixa)
    void*& bShouldShowMessageAfterReachingStateField() const
    { return BrzCampoAncorado<void*>(this, "AutoPgoSweepInterval", 224); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `WorldModifierConfigOverride` +330, medido na build 25090264
    //  (offset absoluto medido: 0xA82; confianca baixa)
    void*& bTransferringMapsFromBlueprintCallField() const
    { return BrzCampoAncorado<void*>(this, "WorldModifierConfigOverride", 330); }
    BitFieldValue<bool, unsigned __int32> bHasPlayedMainMenuIntroOnce()
    { return { (void*)this, "bHasPlayedMainMenuIntroOnce" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERGAMEINSTANCE_H
