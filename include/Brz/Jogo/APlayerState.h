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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetPingInMilliseconds() const
    {
        return NativeCall<void*>(this, "APlayerState.GetPingInMilliseconds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.GetPlayerController()
    // endereco: casamento de bytes com a build de referencia
    APlayerController* GetPlayerController() const
    {
        return NativeCall<APlayerController*>(this, "APlayerState.GetPlayerController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.GetPlayerName()
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: casamento de bytes com a build de referencia
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Reset() const
    {
        return NativeCall<void*>(this, "APlayerState.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SeamlessTravelTo(APlayerState*)
    // endereco: casamento de bytes com a build de referencia
    void SeamlessTravelTo(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SeamlessTravelTo(APlayerState*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsFromPreviousLevel(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetIsFromPreviousLevel(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsFromPreviousLevel(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsInactive(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetIsInactive(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsInactive(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsOnlyASpectator(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetIsOnlyASpectator(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsOnlyASpectator(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetIsSpectator(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetIsSpectator(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APlayerState.SetIsSpectator(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetPawnPrivate(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetPawnPrivate(void* a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SetPawnPrivate(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APlayerState.SetPlayerId(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetPlayerId(int a0) const
    {
        return NativeCall<void*, int>(this, "APlayerState.SetPlayerId(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetPlayerName(FString&)
    // endereco: casamento de bytes com a build de referencia
    void SetPlayerName(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APlayerState.SetPlayerName(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void SetPlayerName(FString* a0) const
    { SetPlayerName(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APlayerState.SetUniqueId(FUniqueNetIdRepl&)
    // endereco: casamento de bytes com a build de referencia
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
    //  ancorado em `CompressedPing` +1 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x499; confianca alta)
    unsigned char& CurPingBucketField() const
    { return BrzCampoAncorado<unsigned char>(this, "CompressedPing", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PawnPrivate` +24 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x520; confianca alta)
    float& CurPingBucketTimestampField() const
    { return BrzCampoAncorado<float>(this, "PawnPrivate", 24); }
    BrzCampoPonteiro EngineMessageClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.EngineMessageClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EngineMessageClass` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x4D8; confianca alta)
    float& ExactPingField() const
    { return BrzCampoAncorado<float>(this, "EngineMessageClass", 8); }
    BrzCampoPonteiro OnPawnSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.OnPawnSet")); }
    TObjectPtr<APawn>& PawnPrivateField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APlayerState.PawnPrivate"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PawnPrivate` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x510; confianca alta)
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
    //  ancorado em `SavedNetworkAddress` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x4F0; confianca alta)
    FName& SessionNameField() const
    { return BrzCampoAncorado<FName>(this, "SavedNetworkAddress", 16); }
    int& StartTimeField() const
    { return *GetNativePointerField<int*>(this, "APlayerState.StartTime"); }
    BrzCampoPonteiro UniqueIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.UniqueID")); }
    BrzCampoPonteiro UniqueIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.UniqueID")); }
    BrzCampoPonteiro bFromPreviousLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bFromPreviousLevel")); }
    BrzCampoPonteiro bIsABotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bIsABot")); }
    BrzCampoPonteiro bIsInactiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bIsInactive")); }
    BrzCampoPonteiro bIsSpectatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bIsSpectator")); }
    BrzCampoPonteiro bOnlySpectatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bOnlySpectator")); }
    BrzCampoPonteiro bShouldUpdateReplicatedPingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APlayerState.bShouldUpdateReplicatedPing")); }
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
