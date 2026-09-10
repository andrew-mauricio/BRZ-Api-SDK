// ==========================================================================
//  AGameSession — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AGAMESESSION_H
#define BRZ_SDK_JOGO_AGAMESESSION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "AInfo.h"

struct AGameSession : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AGameSession"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.ApproveLogin(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ApproveLogin(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "AGameSession.ApproveLogin(FString&)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ApproveLogin(void* retorno, FString* a0) const
    { ApproveLogin(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.AtCapacity(bool,FString&,bool,int*)
    // endereco: casamento de bytes com a build de referencia
    bool AtCapacity(bool a0, const FString& a1, bool a2, void* a3) const
    {
        return NativeCall<bool, bool, void*, bool, void*>(this, "AGameSession.AtCapacity(bool,FString&,bool,int*)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool AtCapacity(bool a0, FString* a1, bool a2, void* a3) const
    { return AtCapacity(a0, *a1, a2, a3); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.DumpSessionState()
    // endereco: casamento de bytes com a build de referencia
    void DumpSessionState() const
    {
        NativeCall<void>(this, "AGameSession.DumpSessionState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.GetConnectedPlayers(FString&)
    // endereco: casamento de bytes com a build de referencia
    int GetConnectedPlayers(const FString& a0) const
    {
        return NativeCall<int, void*>(this, "AGameSession.GetConnectedPlayers(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int GetConnectedPlayers(FString* a0) const
    { return GetConnectedPlayers(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.GetSessionJoinability(FName,FJoinabilitySettings&)
    // endereco: casamento de bytes com a build de referencia
    bool GetSessionJoinability(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "AGameSession.GetSessionJoinability(FName,FJoinabilitySettings&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.InitOptions(FString&)
    // endereco: casamento de bytes com a build de referencia
    void InitOptions(const FString& a0) const
    {
        NativeCall<void, void*>(this, "AGameSession.InitOptions(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void InitOptions(FString* a0) const
    { InitOptions(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.KickPlayer(APlayerController*,FText&)
    // endereco: casamento de bytes com a build de referencia
    static bool KickPlayer(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "AGameSession.KickPlayer(APlayerController*,FText&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.OnAutoLoginComplete(int,bool,FString&)
    // endereco: casamento de bytes com a build de referencia
    void OnAutoLoginComplete(int a0, bool a1, const FString& a2) const
    {
        NativeCall<void, int, bool, void*>(this, "AGameSession.OnAutoLoginComplete(int,bool,FString&)", a0, a1, const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void OnAutoLoginComplete(int a0, bool a1, FString* a2) const
    { OnAutoLoginComplete(a0, a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.ProcessAutoLogin()
    // endereco: casamento de bytes com a build de referencia
    bool ProcessAutoLogin() const
    {
        return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.RegisterPlayer(APlayerController*,FUniqueNetIdRepl&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=121]]
    void RegisterPlayer(void* a0, void* a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "AGameSession.RegisterPlayer(APlayerController*,FUniqueNetIdRepl&,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.RequiresPushToTalk()
    // endereco: cache_pdb_25090264
    bool RequiresPushToTalk() const
    {
        return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.ReturnToMainMenuHost()
    // endereco: casamento de bytes com a build de referencia
    void ReturnToMainMenuHost() const
    {
        NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.UnregisterPlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    void UnregisterPlayer(void* a0) const
    {
        NativeCall<void, void*>(this, "AGameSession.UnregisterPlayer(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.UnregisterPlayer(FName,FUniqueNetIdRepl&)
    // endereco: casamento de bytes com a build de referencia
    void UnregisterPlayer(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AGameSession.UnregisterPlayer(FName,FUniqueNetIdRepl&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.UnregisterPlayers(FName,TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void UnregisterPlayers(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "AGameSession.UnregisterPlayers(FName,TArray<FUniqueNetIdRepl,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AGameSession.UpdateSessionJoinability(FName,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void UpdateSessionJoinability(unsigned long long a0, bool a1, bool a2, bool a3, bool a4) const
    {
        NativeCall<void, unsigned long long, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability(FName,bool,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    int& MaxPartySizeField() const
    { return *GetNativePointerField<int*>(this, "AGameSession.MaxPartySize"); }
    int& MaxPlayersField() const
    { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
    int& MaxSpectatorsField() const
    { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
    BrzCampoPonteiro MaxSplitscreensPerConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameSession.MaxSplitscreensPerConnection")); }
    BrzCampoPonteiro ReservedPlayerSlotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AGameSession.ReservedPlayerSlots")); }
    FName& SessionNameField() const
    { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }
    bool& bRequiresPushToTalkField() const
    { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
    BitFieldValue<bool, unsigned __int32> bRequiresPushToTalk()
    { return { (void*)this, "bRequiresPushToTalk" }; }

};

#endif  // BRZ_SDK_JOGO_AGAMESESSION_H
