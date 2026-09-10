// ==========================================================================
//  UNetDriver — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UNETDRIVER_H
#define BRZ_SDK_JOGO_UNETDRIVER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UObject.h"

struct UNetDriver : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UNetDriver"); }

    BrzCampoPonteiro ActorChannelPoolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ActorChannelPool")); }
    BrzCampoPonteiro ChannelDefinitionMapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ChannelDefinitionMap")); }
    BrzCampoPonteiro ChannelDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ChannelDefinitions")); }
    BrzCampoPonteiro ClientConnectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ClientConnections")); }
    BrzCampoPonteiro ConnectionTimeoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ConnectionTimeout")); }
    BrzCampoPonteiro GracefulCloseConnectionTimeoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.GracefulCloseConnectionTimeout")); }
    BrzCampoPonteiro InitialConnectTimeoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.InitialConnectTimeout")); }
    BrzCampoPonteiro KeepAliveTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.KeepAliveTime")); }
    BrzCampoPonteiro MaxClientRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.MaxClientRate")); }
    BrzCampoPonteiro MaxDownloadSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.MaxDownloadSize")); }
    BrzCampoPonteiro MaxInternetClientRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.MaxInternetClientRate")); }
    BrzCampoPonteiro MaxNetTickRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.MaxNetTickRate")); }
    BrzCampoPonteiro NetConnectionClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetConnectionClass")); }
    BrzCampoPonteiro NetConnectionClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetConnectionClassName")); }
    BrzCampoPonteiro NetDriverNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetDriverName")); }
    BrzCampoPonteiro NetServerMaxTickRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetServerMaxTickRate")); }
    BrzCampoPonteiro NetworkMetricsDatabaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetworkMetricsDatabase")); }
    BrzCampoPonteiro NetworkMetricsListenersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.NetworkMetricsListeners")); }
    BrzCampoPonteiro Primal_InitialConnectionTimeoutOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.Primal_InitialConnectionTimeoutOverride")); }
    BrzCampoPonteiro RecentlyDisconnectedTrackingTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.RecentlyDisconnectedTrackingTime")); }
    BrzCampoPonteiro RelevantTimeoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.RelevantTimeout")); }
    BrzCampoPonteiro ReplicationBridgeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationBridgeClass")); }
    BrzCampoPonteiro ReplicationBridgeClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationBridgeClassName")); }
    BrzCampoPonteiro ReplicationDriverField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationDriver")); }
    BrzCampoPonteiro ReplicationDriverClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationDriverClass")); }
    BrzCampoPonteiro ReplicationDriverClassNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationDriverClassName")); }
    BrzCampoPonteiro ReplicationSystemConfigClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationSystemConfigClient")); }
    BrzCampoPonteiro ReplicationSystemConfigServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ReplicationSystemConfigServer")); }
    BrzCampoPonteiro ServerConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ServerConnection")); }
    BrzCampoPonteiro ServerTravelPauseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.ServerTravelPause")); }
    BrzCampoPonteiro SpawnPrioritySecondsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.SpawnPrioritySeconds")); }
    BrzCampoPonteiro TimeoutMultiplierForUnoptimizedBuildsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.TimeoutMultiplierForUnoptimizedBuilds")); }
    BrzCampoPonteiro WorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.World")); }
    BrzCampoPonteiro WorldPackageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UNetDriver.WorldPackage")); }
    BitFieldValue<bool, unsigned __int32> bClampListenServerTickRate()
    { return { (void*)this, "bClampListenServerTickRate" }; }
    BitFieldValue<bool, unsigned __int32> bNeverApplyNetworkEmulationSettings()
    { return { (void*)this, "bNeverApplyNetworkEmulationSettings" }; }
    BitFieldValue<bool, unsigned __int32> bNoTimeouts()
    { return { (void*)this, "bNoTimeouts" }; }

};

#endif  // BRZ_SDK_JOGO_UNETDRIVER_H
