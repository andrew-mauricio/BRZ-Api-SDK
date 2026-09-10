// ==========================================================================
//  UShooterDiscordUISubsystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERDISCORDUISUBSYSTEM_H
#define BRZ_SDK_JOGO_USHOOTERDISCORDUISUBSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterDiscordUISubsystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterDiscordUISubsystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.BindBackendDelegates()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindBackendDelegates() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.BindBackendDelegates()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.Deinitialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Deinitialize() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.Deinitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.GetDiscordClient()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetDiscordClient() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.GetDiscordClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.GetSocialUsers(TArray<FDiscordUniqueID,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSocialUsers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterDiscordUISubsystem.GetSocialUsers(TArray<FDiscordUniqueID,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.HandleBackendActivityJoin(FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleBackendActivityJoin(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterDiscordUISubsystem.HandleBackendActivityJoin(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HandleBackendActivityJoin(FString* a0) const
    { return HandleBackendActivityJoin(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.HandleBackendStatusChanged(EDiscordClientStatus,EDiscordClientError,i
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleBackendStatusChanged(int a0, int a1, int a2) const
    {
        return NativeCall<void*, int, int, int>(this, "UShooterDiscordUISubsystem.HandleBackendStatusChanged(EDiscordClientStatus,EDiscordClientError,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.HandleDiscordUIActivityInviteCreated(UDiscordActivityInvite*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleDiscordUIActivityInviteCreated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterDiscordUISubsystem.HandleDiscordUIActivityInviteCreated(UDiscordActivityInvite*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.Initialize(FSubsystemCollectionBase&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterDiscordUISubsystem.Initialize(FSubsystemCollectionBase&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.ResetDiscordUIState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetDiscordUIState() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.ResetDiscordUIState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.ResolvePendingDiscordUIUnreadMessages()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolvePendingDiscordUIUnreadMessages() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.ResolvePendingDiscordUIUnreadMessages()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.RunDiscordCallbacks(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RunDiscordCallbacks(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterDiscordUISubsystem.RunDiscordCallbacks(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.SetFriendRequestTrackingEnabled(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro SetFriendRequestTrackingEnabled(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterDiscordUISubsystem.SetFriendRequestTrackingEnabled(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDiscordUISubsystem.UnbindBackendDelegates()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnbindBackendDelegates() const
    {
        return NativeCall<void*>(this, "UShooterDiscordUISubsystem.UnbindBackendDelegates()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackendSubsystem` +248, medido na build 25090264
    //  (offset absoluto medido: 0x1D8; confianca baixa)
    void*& ActiveDiscordConversationUserIdField() const
    { return BrzCampoAncorado<void*>(this, "BackendSubsystem", 248); }
    BrzCampoPonteiro BackendSubsystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.BackendSubsystem")); }
    BrzCampoPonteiro DiscordUISessionActivityInvitesByMessageIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.DiscordUISessionActivityInvitesByMessageId")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackendSubsystem` +88, medido na build 25090264
    //  (offset absoluto medido: 0x138; confianca media)
    void*& DiscordUIUnreadConversationUserIdByMessageIdField() const
    { return BrzCampoAncorado<void*>(this, "BackendSubsystem", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackendSubsystem` +8, medido na build 25090264
    //  (offset absoluto medido: 0xE8; confianca media)
    void*& DiscordUIUnreadCountsField() const
    { return BrzCampoAncorado<void*>(this, "BackendSubsystem", 8); }
    BrzCampoPonteiro OnActivityInviteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnActivityInvite")); }
    BrzCampoPonteiro OnActivityJoinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnActivityJoin")); }
    BrzCampoPonteiro OnDiscordUISessionSocialStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnDiscordUISessionSocialStateChanged")); }
    BrzCampoPonteiro OnDiscordUIUnreadChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnDiscordUIUnreadChanged")); }
    BrzCampoPonteiro OnMessageCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnMessageCreated")); }
    BrzCampoPonteiro OnMessageDeletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnMessageDeleted")); }
    BrzCampoPonteiro OnMessageUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnMessageUpdated")); }
    BrzCampoPonteiro OnRelationshipCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnRelationshipCreated")); }
    BrzCampoPonteiro OnRelationshipDeletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnRelationshipDeleted")); }
    BrzCampoPonteiro OnStatusChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnStatusChanged")); }
    BrzCampoPonteiro OnUserUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDiscordUISubsystem.OnUserUpdated")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `BackendSubsystem` +168, medido na build 25090264
    //  (offset absoluto medido: 0x188; confianca baixa)
    void*& PendingDiscordUIUnreadSuppressedConversationUserIdByMessageIdField() const
    { return BrzCampoAncorado<void*>(this, "BackendSubsystem", 168); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERDISCORDUISUBSYSTEM_H
