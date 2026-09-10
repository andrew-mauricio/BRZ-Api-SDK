// ==========================================================================
//  UNetConnection — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UNETCONNECTION_H
#define BRZ_SDK_JOGO_UNETCONNECTION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FName;
struct UActorChannel;
struct UChannel;
struct ULevel;
struct UNetDriver;
struct UPackageMap;
struct UWorld;

#include "UObject.h"

struct UNetConnection : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UNetConnection"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UNetConnection.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.CanMulticast(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanMulticast(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "UNetConnection.CanMulticast(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.CleanUp()
    // endereco: casamento de bytes com a build de referencia
    void CleanUp() const
    {
        NativeCall<void>(this, "UNetConnection.CleanUp()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ClearDormantReplicatorsReference()
    // endereco: casamento de bytes com a build de referencia
    void ClearDormantReplicatorsReference() const
    {
        NativeCall<void>(this, "UNetConnection.ClearDormantReplicatorsReference()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ClientHasInitializedLevelFor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool ClientHasInitializedLevelFor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UNetConnection.ClientHasInitializedLevelFor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.Close()
    // endereco: casamento de bytes com a build de referencia
    void Close() const
    {
        NativeCall<void>(this, "UNetConnection.Close()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.Close(UE::Net::FNetResult&&)
    // endereco: casamento de bytes com a build de referencia
    void Close(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.Close(UE::Net::FNetResult&&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.CreateChannelByName(FName&,EChannelCreateFlags,int)
    // endereco: casamento de bytes com a build de referencia
    UChannel* CreateChannelByName(const FName& a0, int a1, int a2) const
    {
        return NativeCall<UChannel*, void*, int, int>(this, "UNetConnection.CreateChannelByName(FName&,EChannelCreateFlags,int)", const_cast<FName*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    UChannel* CreateChannelByName(FName* a0, int a1, int a2) const
    { return CreateChannelByName(*a0, a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.Describe()
    // endereco: casamento de bytes com a build de referencia
    void Describe(void* retorno) const
    {
        NativeCall<void, void*>(this, "UNetConnection.Describe()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.DestroyIgnoredActor(AActor*)
    // endereco: cache_pdb_25090264
    void DestroyIgnoredActor(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.DestroyIgnoredActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.DestroyOwningActor()
    // endereco: casamento de bytes com a build de referencia
    void DestroyOwningActor() const
    {
        NativeCall<void>(this, "UNetConnection.DestroyOwningActor()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.Exec(UWorld*,wchar_t*,FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    bool Exec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UNetConnection.Exec(UWorld*,wchar_t*,FOutputDevice&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.FindActorChannelRef(TWeakObjectPtr<AActor,FWeakObjectPtr>&)
    // endereco: casamento de bytes com a build de referencia
    UActorChannel* FindActorChannelRef(void* a0) const
    {
        return NativeCall<UActorChannel*, void**>(this, "UNetConnection.FindActorChannelRef(TWeakObjectPtr<AActor,FWeakObjectPtr>&)", &a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.FlushDormancy(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void FlushDormancy(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.FlushDormancy(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.FlushDormancyForObject(AActor*,UObject*)
    // endereco: casamento de bytes com a build de referencia
    void FlushDormancyForObject(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UNetConnection.FlushDormancyForObject(AActor*,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.FlushNet(bool)
    // endereco: casamento de bytes com a build de referencia
    void FlushNet(bool a0) const
    {
        NativeCall<void, bool>(this, "UNetConnection.FlushNet(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.FlushPacketOrderCache(bool)
    // endereco: casamento de bytes com a build de referencia
    void FlushPacketOrderCache(bool a0) const
    {
        NativeCall<void, bool>(this, "UNetConnection.FlushPacketOrderCache(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.GetAddrPort()
    // endereco: cache_pdb_25090264
    int GetAddrPort() const
    {
        return NativeCall<int>(this, "UNetConnection.GetAddrPort()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.GetFreeChannelIndex(FName&)
    // endereco: casamento de bytes com a build de referencia
    int GetFreeChannelIndex(const FName& a0) const
    {
        return NativeCall<int, void*>(this, "UNetConnection.GetFreeChannelIndex(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    int GetFreeChannelIndex(FName* a0) const
    { return GetFreeChannelIndex(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.GetTimeoutValue()
    // endereco: casamento de bytes com a build de referencia
    float GetTimeoutValue() const
    {
        return NativeCall<float>(this, "UNetConnection.GetTimeoutValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.GetWorld()
    // endereco: cache_pdb_25090264
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UNetConnection.GetWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.HandleClientPlayer(APlayerController*,UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    void HandleClientPlayer(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "UNetConnection.HandleClientPlayer(APlayerController*,UNetConnection*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.HandleConnectionTimeout(FString&)
    // endereco: casamento de bytes com a build de referencia
    void HandleConnectionTimeout(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.HandleConnectionTimeout(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HandleConnectionTimeout(FString* a0) const
    { HandleConnectionTimeout(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.HandleNetResultOrClose(ENetCloseResult)
    // endereco: casamento de bytes com a build de referencia
    void HandleNetResultOrClose(int a0) const
    {
        NativeCall<void, int>(this, "UNetConnection.HandleNetResultOrClose(ENetCloseResult)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.HandleReceiveCloseReason(FString&)
    // endereco: casamento de bytes com a build de referencia
    void HandleReceiveCloseReason(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.HandleReceiveCloseReason(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void HandleReceiveCloseReason(FString* a0) const
    { HandleReceiveCloseReason(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.InitSendBuffer()
    // endereco: casamento de bytes com a build de referencia
    void InitSendBuffer() const
    {
        NativeCall<void>(this, "UNetConnection.InitSendBuffer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.IsEncryptionEnabled()
    // endereco: casamento de bytes com a build de referencia
    bool IsEncryptionEnabled() const
    {
        return NativeCall<bool>(this, "UNetConnection.IsEncryptionEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.NotifyActorDestroyed(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void NotifyActorDestroyed(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "UNetConnection.NotifyActorDestroyed(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.PostTickDispatch()
    // endereco: casamento de bytes com a build de referencia
    void PostTickDispatch() const
    {
        NativeCall<void>(this, "UNetConnection.PostTickDispatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.PreTickDispatch()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=26]]
    void PreTickDispatch() const
    {
        NativeCall<void>(this, "UNetConnection.PreTickDispatch()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.PrepareWriteBitsToSendBuffer(int,int)
    // endereco: casamento de bytes com a build de referencia
    void PrepareWriteBitsToSendBuffer(int a0, int a1) const
    {
        NativeCall<void, int, int>(this, "UNetConnection.PrepareWriteBitsToSendBuffer(int,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ReceivedNak(int)
    // endereco: casamento de bytes com a build de referencia
    void ReceivedNak(int a0) const
    {
        NativeCall<void, int>(this, "UNetConnection.ReceivedNak(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.RemoteAddressToString()
    // endereco: casamento de bytes com a build de referencia
    void RemoteAddressToString(void* retorno) const
    {
        NativeCall<void, void*>(this, "UNetConnection.RemoteAddressToString()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ResetGameWorldState()
    // endereco: casamento de bytes com a build de referencia
    void ResetGameWorldState() const
    {
        NativeCall<void>(this, "UNetConnection.ResetGameWorldState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.RestoreRemappedChannel(int)
    // endereco: casamento de bytes com a build de referencia
    void RestoreRemappedChannel(int a0) const
    {
        NativeCall<void, int>(this, "UNetConnection.RestoreRemappedChannel(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.SendChallengeControlMessage()
    // endereco: casamento de bytes com a build de referencia
    void SendChallengeControlMessage() const
    {
        NativeCall<void>(this, "UNetConnection.SendChallengeControlMessage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.SendCloseReason(UE::Net::FNetResult&&)
    // endereco: casamento de bytes com a build de referencia
    void SendCloseReason(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.SendCloseReason(UE::Net::FNetResult&&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.SetAllowExistingChannelIndex(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAllowExistingChannelIndex(bool a0) const
    {
        NativeCall<void, bool>(this, "UNetConnection.SetAllowExistingChannelIndex(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.SetIgnoreReservedChannels(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetIgnoreReservedChannels(bool a0) const
    {
        NativeCall<void, bool>(this, "UNetConnection.SetIgnoreReservedChannels(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.SetNetVersionsOnArchive(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void SetNetVersionsOnArchive(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.SetNetVersionsOnArchive(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ShouldReplicateVoicePacketFrom(FUniqueNetId&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool ShouldReplicateVoicePacketFrom(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UNetConnection.ShouldReplicateVoicePacketFrom(FUniqueNetId&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.StartTickingChannel(UChannel*)
    // endereco: casamento de bytes com a build de referencia
    void StartTickingChannel(void* a0) const
    {
        NativeCall<void, void*>(this, "UNetConnection.StartTickingChannel(UChannel*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "UNetConnection.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.UpdateAllCachedLevelVisibility()
    // endereco: casamento de bytes com a build de referencia
    void UpdateAllCachedLevelVisibility() const
    {
        NativeCall<void>(this, "UNetConnection.UpdateAllCachedLevelVisibility()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.UpdateCachedLevelVisibility(FName&)
    // endereco: casamento de bytes com a build de referencia
    bool UpdateCachedLevelVisibility(const FName& a0) const
    {
        return NativeCall<bool, void*>(this, "UNetConnection.UpdateCachedLevelVisibility(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool UpdateCachedLevelVisibility(FName* a0) const
    { return UpdateCachedLevelVisibility(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UNetConnection.ValidateSendBuffer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void ValidateSendBuffer() const
    {
        NativeCall<void>(this, "UNetConnection.ValidateSendBuffer()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +56, medido na build 25090264
    //  (offset absoluto medido: 0x1A0; confianca media)
    FString& ChallengeField() const
    { return BrzCampoAncorado<FString>(this, "PlayerID", 56); }
    TArray<void*>& ChannelsToTickField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UNetConnection.ChannelsToTick"); }
    BrzCampoPonteiro ChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetConnection.Children")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +108, medido na build 25090264
    //  (offset absoluto medido: 0x1D4; confianca media)
    int& ClientLoginStateField() const
    { return BrzCampoAncorado<int>(this, "PlayerID", 108); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultMaxChannelSize` +368, medido na build 25090264
    //  (offset absoluto medido: 0x1570; confianca baixa)
    void*& ClientMakingVisibleLevelNamesField() const
    { return BrzCampoAncorado<void*>(this, "DefaultMaxChannelSize", 368); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +72, medido na build 25090264
    //  (offset absoluto medido: 0x1B0; confianca media)
    FString& ClientResponseField() const
    { return BrzCampoAncorado<FString>(this, "PlayerID", 72); }
    int& DefaultMaxChannelSizeField() const
    { return *GetNativePointerField<int*>(this, "UNetConnection.DefaultMaxChannelSize"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultMaxChannelSize` +288, medido na build 25090264
    //  (offset absoluto medido: 0x1520; confianca baixa)
    void*& DestroyedStartupOrDormantActorGUIDsField() const
    { return BrzCampoAncorado<void*>(this, "DefaultMaxChannelSize", 288); }
    TObjectPtr<UNetDriver>& DriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UNetConnection.Driver"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DefaultMaxChannelSize` +448, medido na build 25090264
    //  (offset absoluto medido: 0x15C0; confianca baixa)
    void*& KeepProcessingActorChannelBunchesMapField() const
    { return BrzCampoAncorado<void*>(this, "DefaultMaxChannelSize", 448); }
    double& LastReceiveTimeField() const
    { return *GetNativePointerField<double*>(this, "UNetConnection.LastReceiveTime"); }
    int& MaxPacketField() const
    { return *GetNativePointerField<int*>(this, "UNetConnection.MaxPacket"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +144, medido na build 25090264
    //  (offset absoluto medido: 0x138; confianca baixa)
    int& MaxPacketHandlerBitsField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 144); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +136, medido na build 25090264
    //  (offset absoluto medido: 0x130; confianca baixa)
    int& NumAckBitsField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +132, medido na build 25090264
    //  (offset absoluto medido: 0x12C; confianca baixa)
    int& NumBunchBitsField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 132); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +128, medido na build 25090264
    //  (offset absoluto medido: 0x128; confianca media)
    int& NumPacketIdBitsField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +140, medido na build 25090264
    //  (offset absoluto medido: 0x134; confianca baixa)
    int& NumPaddingBitsField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 140); }
    TArray<void*>& OpenChannelsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UNetConnection.OpenChannels"); }
    TObjectPtr<AActor>& OwningActorField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UNetConnection.OwningActor"); }
    TObjectPtr<UPackageMap>& PackageMapField() const
    { return *GetNativePointerField<TObjectPtr<UPackageMap>*>(this, "UNetConnection.PackageMap"); }
    BrzCampoPonteiro PackageMapClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetConnection.PackageMapClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +48, medido na build 25090264
    //  (offset absoluto medido: 0x198; confianca media)
    int& PacketOverheadField() const
    { return BrzCampoAncorado<int>(this, "PlayerID", 48); }
    BrzCampoPonteiro PlayerIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetConnection.PlayerID")); }
    BrzCampoPonteiro PlayerIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetConnection.PlayerID")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +88, medido na build 25090264
    //  (offset absoluto medido: 0x1C0; confianca media)
    FString& RequestURLField() const
    { return BrzCampoAncorado<FString>(this, "PlayerID", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `PlayerID` +104, medido na build 25090264
    //  (offset absoluto medido: 0x1D0; confianca media)
    int& ResponseIdField() const
    { return BrzCampoAncorado<int>(this, "PlayerID", 104); }
    TArray<void*>& SentTemporariesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UNetConnection.SentTemporaries"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPacket` +148, medido na build 25090264
    //  (offset absoluto medido: 0x13C; confianca baixa)
    int& StateField() const
    { return BrzCampoAncorado<int>(this, "MaxPacket", 148); }
    TObjectPtr<AActor>& ViewTargetField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UNetConnection.ViewTarget"); }
    BitFieldValue<bool, unsigned __int32> InternalAck()
    { return { (void*)this, "InternalAck" }; }
    BitFieldValue<bool, unsigned __int32> bInternalAck()
    { return { (void*)this, "bInternalAck" }; }
    BitFieldValue<bool, unsigned __int32> bReplay()
    { return { (void*)this, "bReplay" }; }
    BitFieldValue<bool, unsigned __int32> bForceInitialDirty()
    { return { (void*)this, "bForceInitialDirty" }; }
    BitFieldValue<bool, unsigned __int32> bUnlimitedBunchSizeAllowed()
    { return { (void*)this, "bUnlimitedBunchSizeAllowed" }; }
    BitFieldValue<bool, unsigned __int32> bPendingDestroy()
    { return { (void*)this, "bPendingDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bHasArkLoginLock()
    { return { (void*)this, "bHasArkLoginLock" }; }

};

#endif  // BRZ_SDK_JOGO_UNETCONNECTION_H
