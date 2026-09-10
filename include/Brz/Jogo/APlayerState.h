// ==========================================================================
//  APlayerState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APLAYERSTATE_H
#define BRZ_SDK_JOGO_APLAYERSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APawn;
struct APlayerController;
struct FName;

#include "AInfo.h"

struct APlayerState : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APlayerState"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.CopyProperties(APlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=211]]
    void CopyProperties(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.CopyProperties(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "APlayerState.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.Duplicate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Duplicate() const
    {
        return NativeCall<void*>(this, "APlayerState.Duplicate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.GetHumanReadableName()
    // endereco: casamento de bytes com a build de referencia
    void GetHumanReadableName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APlayerState.GetHumanReadableName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.GetPingInMilliseconds()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetPingInMilliseconds() const
    {
        return NativeCall<void*>(this, "APlayerState.GetPingInMilliseconds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.GetPlayerController()
    // endereco: thunk
    static APlayerController* GetPlayerController()
    {
        return NativeCall<APlayerController*>(nullptr, "APlayerState.GetPlayerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.GetPlayerName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetPlayerName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APlayerState.GetPlayerName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.GetUniqueNetIDOrNetPlayerName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetUniqueNetIDOrNetPlayerName() const
    {
        return NativeCall<void*>(this, "APlayerState.GetUniqueNetIDOrNetPlayerName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.HandleWelcomeMessage()
    // endereco: casamento de bytes com a build de referencia
    void HandleWelcomeMessage() const
    {
        NativeCall<void>(this, "APlayerState.HandleWelcomeMessage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.OnRep_PlayerName()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_PlayerName() const
    {
        NativeCall<void>(this, "APlayerState.OnRep_PlayerName()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.OnRep_bIsInactive()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_bIsInactive() const
    {
        NativeCall<void>(this, "APlayerState.OnRep_bIsInactive()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.OverrideWith(APlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OverrideWith(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.OverrideWith(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APlayerState.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.RecalculateAvgPing()
    // endereco: cache_pdb_25090264
    void RecalculateAvgPing() const
    {
        NativeCall<void>(this, "APlayerState.RecalculateAvgPing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.RegisterPlayerWithSession(bool)
    // endereco: casamento de bytes com a build de referencia
    void RegisterPlayerWithSession(bool a0) const
    {
        NativeCall<void, bool>(this, "APlayerState.RegisterPlayerWithSession(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=50]]
    BrzPonteiro Reset() const
    {
        return NativeCall<void*>(this, "APlayerState.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SeamlessTravelTo(APlayerState*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=104]]
    void SeamlessTravelTo(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SeamlessTravelTo(APlayerState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsFromPreviousLevel(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsFromPreviousLevel(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsFromPreviousLevel(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsInactive(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsInactive(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsInactive(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsOnlyASpectator(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsOnlyASpectator(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsOnlyASpectator(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsSpectator(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsSpectator(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsSpectator(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetPawnPrivate(APawn*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void SetPawnPrivate(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SetPawnPrivate(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetPlayerId(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetPlayerId(int a0) const
    {
        return NativeCall<void*, int>(this, "APlayerState.SetPlayerId(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetPlayerName(FString&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=232+grafo=3/3]]
    void SetPlayerName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SetPlayerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetPlayerName(FString* a0) const
    { SetPlayerName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetUniqueId(FUniqueNetIdRepl&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetUniqueId(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SetUniqueId(FUniqueNetIdRepl&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.ShouldBroadCastWelcomeMessage(bool)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldBroadCastWelcomeMessage(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APlayerState.ShouldBroadCastWelcomeMessage(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.UnregisterPlayerWithSession()
    // endereco: casamento de bytes com a build de referencia
    void UnregisterPlayerWithSession() const
    {
        NativeCall<void>(this, "APlayerState.UnregisterPlayerWithSession()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.UpdatePing(float)
    // endereco: casamento de bytes com a build de referencia
    void UpdatePing(float a0) const
    {
        NativeCall<void, float>(this, "APlayerState.UpdatePing(float)", a0);
    }

    unsigned char& CompressedPingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APlayerState.CompressedPing"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CompressedPing` +1, medido na build 25090264
    //  (offset absoluto medido: 0x499; confianca alta)
    unsigned char& CurPingBucketField() const
    { return BrzCampoAncorado<unsigned char>(this, "CompressedPing", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PawnPrivate` +24, medido na build 25090264
    //  (offset absoluto medido: 0x520; confianca alta)
    float& CurPingBucketTimestampField() const
    { return BrzCampoAncorado<float>(this, "PawnPrivate", 24); }
    BrzCampoPonteiro EngineMessageClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.EngineMessageClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EngineMessageClass` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4D8; confianca alta)
    float& ExactPingField() const
    { return BrzCampoAncorado<float>(this, "EngineMessageClass", 8); }
    BrzCampoPonteiro OnPawnSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.OnPawnSet")); }
    TObjectPtr<APawn>& PawnPrivateField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerState.PawnPrivate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PawnPrivate` +8, medido na build 25090264
    //  (offset absoluto medido: 0x510; confianca alta)
    void*& PingBucketField() const
    { return BrzCampoAncorado<void*>(this, "PawnPrivate", 8); }
    unsigned long long& PlayerIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APlayerState.PlayerID"); }
    int& PlayerIdField() const
    { return *GetNativePointerField<int*>(this, "APlayerState.PlayerID"); }
    FString& PlayerNamePrivateField() const
    { return *GetNativePointerField<FString*>(this, "APlayerState.PlayerNamePrivate"); }
    FString& SavedNetworkAddressField() const
    { return *GetNativePointerField<FString*>(this, "APlayerState.SavedNetworkAddress"); }
    float& ScoreField() const
    { return *GetNativePointerField<float*>(this, "APlayerState.score"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SavedNetworkAddress` +16, medido na build 25090264
    //  (offset absoluto medido: 0x4F0; confianca alta)
    FName& SessionNameField() const
    { return BrzCampoAncorado<FName>(this, "SavedNetworkAddress", 16); }
    int& StartTimeField() const
    { return *GetNativePointerField<int*>(this, "APlayerState.StartTime"); }
    BrzCampoPonteiro UniqueIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.UniqueID")); }
    BrzCampoPonteiro UniqueIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.UniqueID")); }
    float& scoreField() const
    { return *GetNativePointerField<float*>(this, "APlayerState.score"); }
    BitFieldValue<bool, unsigned __int32> bShouldUpdateReplicatedPing()
    { return { (void*)this, "bShouldUpdateReplicatedPing" }; }
    BitFieldValue<bool, unsigned __int32> bIsSpectator()
    { return { (void*)this, "bIsSpectator" }; }
    BitFieldValue<bool, unsigned __int32> bOnlySpectator()
    { return { (void*)this, "bOnlySpectator" }; }
    BitFieldValue<bool, unsigned __int32> bIsABot()
    { return { (void*)this, "bIsABot" }; }
    BitFieldValue<bool, unsigned __int32> bHasBeenWelcomed()
    { return { (void*)this, "bHasBeenWelcomed" }; }
    BitFieldValue<bool, unsigned __int32> bIsInactive()
    { return { (void*)this, "bIsInactive" }; }
    BitFieldValue<bool, unsigned __int32> bFromPreviousLevel()
    { return { (void*)this, "bFromPreviousLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomPlayerNames()
    { return { (void*)this, "bUseCustomPlayerNames" }; }

};

#endif  // BRZ_SDK_JOGO_APLAYERSTATE_H
