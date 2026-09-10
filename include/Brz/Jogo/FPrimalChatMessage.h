// ==========================================================================
//  FPrimalChatMessage — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCHATMESSAGE_H
#define BRZ_SDK_JOGO_FPRIMALCHATMESSAGE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FPrimalChatMessage
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalChatMessage"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ChatTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.ChatType")); }
    BrzCampoPonteiro MessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.Message")); }
    BrzCampoPonteiro RadioFrequencyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.RadioFrequency")); }
    BrzCampoPonteiro ReceivedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.ReceivedTime")); }
    BrzCampoPonteiro ReceiverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.Receiver")); }
    BrzCampoPonteiro SendModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SendMode")); }
    BrzCampoPonteiro SenderIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderIcon")); }
    BrzCampoPonteiro SenderIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderId")); }
    BrzCampoPonteiro SenderNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderName")); }
    BrzCampoPonteiro SenderSteamNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderSteamName")); }
    BrzCampoPonteiro SenderTeamIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderTeamIndex")); }
    BrzCampoPonteiro SenderTribeNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.SenderTribeName")); }
    BrzCampoPonteiro UserIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.UserId")); }
    BrzCampoPonteiro senderPlatformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalChatMessage.senderPlatform")); }
    BitFieldValue<bool, unsigned __int32> SenderIsAdmin()
    { return { (void*)this, "SenderIsAdmin" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCHATMESSAGE_H
