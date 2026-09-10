// ==========================================================================
//  ABasePlayerController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ABASEPLAYERCONTROLLER_H
#define BRZ_SDK_JOGO_ABASEPLAYERCONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "APrimalPlayerController.h"

struct ABasePlayerController : public APrimalPlayerController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ABasePlayerController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ClientEndOnlineGame_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientEndOnlineGame_Implementation() const
    {
        NativeCall<void>(this, "ABasePlayerController.ClientEndOnlineGame_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ClientGameEnded_Implementation(AActor*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=132]]
    void ClientGameEnded_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "ABasePlayerController.ClientGameEnded_Implementation(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ClientGameStarted_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientGameStarted_Implementation() const
    {
        NativeCall<void>(this, "ABasePlayerController.ClientGameStarted_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ClientSendRoundEndEvent_Implementation(bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientSendRoundEndEvent_Implementation(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "ABasePlayerController.ClientSendRoundEndEvent_Implementation(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ClientStartOnlineGame_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientStartOnlineGame_Implementation() const
    {
        NativeCall<void>(this, "ABasePlayerController.ClientStartOnlineGame_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.HandleReturnToMainMenu()
    // endereco: casamento de bytes com a build de referencia
    void HandleReturnToMainMenu() const
    {
        NativeCall<void>(this, "ABasePlayerController.HandleReturnToMainMenu()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.HasValidAdminIP()
    // endereco: casamento de bytes com a build de referencia
    bool HasValidAdminIP() const
    {
        return NativeCall<bool>(this, "ABasePlayerController.HasValidAdminIP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.IsGameInputAllowed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=187]]
    bool IsGameInputAllowed() const
    {
        return NativeCall<bool>(this, "ABasePlayerController.IsGameInputAllowed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ManageVirtualCursor()
    // endereco: casamento de bytes com a build de referencia
    void ManageVirtualCursor() const
    {
        NativeCall<void>(this, "ABasePlayerController.ManageVirtualCursor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.QueryAchievements()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=798+grafo=6/6]]
    void QueryAchievements() const
    {
        NativeCall<void>(this, "ABasePlayerController.QueryAchievements()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ResetIntroCinematicsAndItems()
    // endereco: casamento de bytes com a build de referencia
    void ResetIntroCinematicsAndItems() const
    {
        NativeCall<void>(this, "ABasePlayerController.ResetIntroCinematicsAndItems()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ServerCheat(FString&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerCheat(const FString& a0) const
    {
        NativeCall<void, void*>(this, "ABasePlayerController.ServerCheat(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerCheat(FString* a0) const
    { ServerCheat(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.ServerCheat_Implementation(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ServerCheat_Implementation(const FString& a0) const
    {
        NativeCall<void, void*>(this, "ABasePlayerController.ServerCheat_Implementation(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ServerCheat_Implementation(FString* a0) const
    { ServerCheat_Implementation(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.SetVirtualCursorPosition(UE::Math::TVector2<double>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=392+grafo=5/5]]
    void SetVirtualCursorPosition(void* a0) const
    {
        NativeCall<void, void*>(this, "ABasePlayerController.SetVirtualCursorPosition(UE::Math::TVector2<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABasePlayerController.TickActor(float,ELevelTick,FActorTickFunction&)
    // endereco: casamento de bytes com a build de referencia
    void TickActor(float a0, int a1, void* a2) const
    {
        NativeCall<void, float, int, void*>(this, "ABasePlayerController.TickActor(float,ELevelTick,FActorTickFunction&)", a0, a1, a2);
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `customCursor` +8, medido na build 25090264
    //  (offset absoluto medido: 0xB18; confianca alta)
    TWeakObjectPtr<void>& consoleMouseCursorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "customCursor", 8); }
    BrzCampoPonteiro customCursorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABasePlayerController.customCursor")); }
    BitFieldValue<bool, unsigned __int32> bCheatEnabled()
    { return { (void*)this, "bCheatEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bGameEndedFrame()
    { return { (void*)this, "bGameEndedFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAllowGameActions()
    { return { (void*)this, "bAllowGameActions" }; }
    BitFieldValue<bool, unsigned __int32> bIsGamepadActive()
    { return { (void*)this, "bIsGamepadActive" }; }

};

#endif  // BRZ_SDK_JOGO_ABASEPLAYERCONTROLLER_H
