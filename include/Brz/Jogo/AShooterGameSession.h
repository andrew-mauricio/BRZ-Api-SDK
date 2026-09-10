// ==========================================================================
//  AShooterGameSession — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERGAMESESSION_H
#define BRZ_SDK_JOGO_ASHOOTERGAMESESSION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UGameServerQuerySubsystem;

#include "AGameSession.h"

struct AShooterGameSession : public AGameSession
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterGameSession"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.ApproveLogin(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ApproveLogin(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "AShooterGameSession.ApproveLogin(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ApproveLogin(void* retorno, FString* a0) const
    { ApproveLogin(retorno, *a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.CancelFindSessions()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CancelFindSessions() const
    {
        return NativeCall<void*>(this, "AShooterGameSession.CancelFindSessions()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.ClearDiscordResolvedSearchResult()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearDiscordResolvedSearchResult() const
    {
        return NativeCall<void*>(this, "AShooterGameSession.ClearDiscordResolvedSearchResult()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.DelayedSessionDelete()
    // endereco: casamento de bytes com a build de referencia
    void DelayedSessionDelete() const
    {
        NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.FindAWSSessions(TSharedRef<FOnlineSessionSearch,1>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindAWSSessions(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameSession.FindAWSSessions(TSharedRef<FOnlineSessionSearch,1>&)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AShooterGameSession.FindSessions(TSharedPtr<FUniqueNetId,1>,FString,bool,bool,bool,EListSessionS
    // endereco: casamento de bytes com a build de referencia
    void FindSessions(void* a0, const FString& a1, bool a2, bool a3, bool a4, int a5, bool a6, bool a7, bool a8, bool a9, const FString& a10) const
    {
        NativeCall<void, void*, void*, bool, bool, bool, int, bool, bool, bool, bool, void*>(this, "AShooterGameSession.FindSessions(TSharedPtr<FUniqueNetId,1>,FString,bool,bool,bool,EListSessionStatus::Type,bool,bool,bool,bool,FString)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6, a7, a8, a9, const_cast<FString*>(&a10));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void FindSessions(void* a0, FString* a1, bool a2, bool a3, bool a4, int a5, bool a6, bool a7, bool a8, bool a9, FString* a10) const
    { FindSessions(a0, *a1, a2, a3, a4, a5, a6, a7, a8, a9, *a10); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.GetAveragePing()
    // endereco: casamento de bytes com a build de referencia
    int GetAveragePing() const
    {
        return NativeCall<int>(this, "AShooterGameSession.GetAveragePing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.GetConnectedPlayers(FString&)
    // endereco: casamento de bytes com a build de referencia
    int GetConnectedPlayers(const FString& a0) const
    {
        return NativeCall<int, void*>(this, "AShooterGameSession.GetConnectedPlayers(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int GetConnectedPlayers(FString* a0) const
    { return GetConnectedPlayers(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.GetNitradoSubsystem()
    // endereco: casamento de bytes com a build de referencia
    static UGameServerQuerySubsystem* GetNitradoSubsystem()
    {
        return NativeCall<UGameServerQuerySubsystem*>(nullptr, "AShooterGameSession.GetNitradoSubsystem()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.GetSearchResultStatus(int&,int&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSearchResultStatus(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameSession.GetSearchResultStatus(int&,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.GetSearchResults()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetSearchResults() const
    {
        return NativeCall<void*>(this, "AShooterGameSession.GetSearchResults()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.GetSessionIdFromSearchResult(FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSessionIdFromSearchResult(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameSession.GetSessionIdFromSearchResult(FOnlineSessionSearchResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.HandleMatchHasEnded()
    // endereco: casamento de bytes com a build de referencia
    void HandleMatchHasEnded() const
    {
        NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.HandleMatchHasStarted()
    // endereco: casamento de bytes com a build de referencia
    void HandleMatchHasStarted() const
    {
        NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.HttpSearchOfficialServersRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedP
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HttpSearchOfficialServersRequestComplete(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "AShooterGameSession.HttpSearchOfficialServersRequestComplete(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.InitHostSettings(FOnlineSessionSettings*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitHostSettings(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameSession.InitHostSettings(FOnlineSessionSettings*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.InitOptions(FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitOptions(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AShooterGameSession.InitOptions(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptions(FString* a0) const
    { InitOptions(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.JoinSeesionBySessionId(TSharedPtr<FUniqueNetId,1>,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinSeesionBySessionId(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterGameSession.JoinSeesionBySessionId(TSharedPtr<FUniqueNetId,1>,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro JoinSeesionBySessionId(void* a0, FString* a1) const
    { return JoinSeesionBySessionId(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.JoinSeesionBySessionIdComplete(int,bool,FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinSeesionBySessionIdComplete(int a0, bool a1, void* a2) const
    {
        return NativeCall<void*, int, bool, void*>(this, "AShooterGameSession.JoinSeesionBySessionIdComplete(int,bool,FOnlineSessionSearchResult&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    long long JoinSession(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<long long, void*, unsigned long long, void*>(this, "AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,FOnlineSessionSearchResult&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro JoinSession(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "AShooterGameSession.JoinSession(TSharedPtr<FUniqueNetId,1>,FName,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.KickPlayer(APlayerController*,FText&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=573+grafo=13/14]]
    static bool KickPlayer(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AShooterGameSession.KickPlayer(APlayerController*,FText&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnCreateSessionComplete(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnCreateSessionComplete(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterGameSession.OnCreateSessionComplete(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnDestroySessionComplete(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnDestroySessionComplete(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterGameSession.OnDestroySessionComplete(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnFindSessionsComplete(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnFindSessionsComplete(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnFoundSession()
    // endereco: casamento de bytes com a build de referencia
    void OnFoundSession() const
    {
        NativeCall<void>(this, "AShooterGameSession.OnFoundSession()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnJoinSessionComplete(FName,EOnJoinSessionCompleteResult::Type)
    // endereco: casamento de bytes com a build de referencia
    void OnJoinSessionComplete(unsigned long long a0, int a1) const
    {
        NativeCall<void, unsigned long long, int>(this, "AShooterGameSession.OnJoinSessionComplete(FName,EOnJoinSessionCompleteResult::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnNumConnectedPlayersChanged(int)
    // endereco: casamento de bytes com a build de referencia
    void OnNumConnectedPlayersChanged(int a0) const
    {
        NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterGameSession.OnRecreateSessionListenServerDestroy(FName,bool)
    // endereco: cache_pdb_25090264
    void OnRecreateSessionListenServerDestroy(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterGameSession.OnRecreateSessionListenServerDestroy(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnStartOnlineGameComplete(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnStartOnlineGameComplete(unsigned long long a0, bool a1) const
    {
        NativeCall<void, unsigned long long, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete(FName,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.OnSteelshieldInitialized(bool)
    // endereco: casamento de bytes com a build de referencia
    void OnSteelshieldInitialized(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterGameSession.OnSteelshieldInitialized(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.RecreateSessionListenServer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RecreateSessionListenServer() const
    {
        return NativeCall<void*>(this, "AShooterGameSession.RecreateSessionListenServer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.RegisterServer()
    // endereco: casamento de bytes com a build de referencia
    void RegisterServer() const
    {
        NativeCall<void>(this, "AShooterGameSession.RegisterServer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.ResolveSessionByIdComplete(int,bool,FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveSessionByIdComplete(int a0, bool a1, void* a2) const
    {
        return NativeCall<void*, int, bool, void*>(this, "AShooterGameSession.ResolveSessionByIdComplete(int,bool,FOnlineSessionSearchResult&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.Restart()
    // endereco: casamento de bytes com a build de referencia
    void Restart() const
    {
        NativeCall<void>(this, "AShooterGameSession.Restart()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterGameSession.SetDiscordResolvedSearchResult(FOnlineSessionSearchResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDiscordResolvedSearchResult(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterGameSession.SetDiscordResolvedSearchResult(FOnlineSessionSearchResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterGameSession.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.TravelToSession(int,FName)
    // endereco: casamento de bytes com a build de referencia
    bool TravelToSession(int a0, unsigned long long a1) const
    {
        return NativeCall<bool, int, unsigned long long>(this, "AShooterGameSession.TravelToSession(int,FName)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.UpdatePublishedSession()
    // endereco: casamento de bytes com a build de referencia
    void UpdatePublishedSession() const
    {
        NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterGameSession.UpdateSearchResults()
    // endereco: casamento de bytes com a build de referencia
    void UpdateSearchResults() const
    {
        NativeCall<void>(this, "AShooterGameSession.UpdateSearchResults()");
    }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERGAMESESSION_H
