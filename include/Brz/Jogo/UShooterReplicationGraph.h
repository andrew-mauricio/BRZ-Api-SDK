// ==========================================================================
//  UShooterReplicationGraph — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERREPLICATIONGRAPH_H
#define BRZ_SDK_JOGO_USHOOTERREPLICATIONGRAPH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UNetDriver;


struct UShooterReplicationGraph
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterReplicationGraph"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.AddDependentActor(AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddDependentActor(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterReplicationGraph.AddDependentActor(AActor*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.HandleStarvedActorList(UNetReplicationGraphConnection&,FPrioritizedRepL
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleStarvedActorList(void* a0, void* a1, int a2, void* a3, unsigned int a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, unsigned int>(this, "UShooterReplicationGraph.HandleStarvedActorList(UNetReplicationGraphConnection&,FPrioritizedRepList&,int,FPerConnectionActorInfoMap&,unsignedint)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.InitConnectionGraphNodes(UNetReplicationGraphConnection*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitConnectionGraphNodes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.InitConnectionGraphNodes(UNetReplicationGraphConnection*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.InitGlobalActorClassSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitGlobalActorClassSettings() const
    {
        return NativeCall<void*>(this, "UShooterReplicationGraph.InitGlobalActorClassSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.InitGlobalGraphNodes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitGlobalGraphNodes() const
    {
        return NativeCall<void*>(this, "UShooterReplicationGraph.InitGlobalGraphNodes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.PublicReconcileDormantActorsForConnection(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PublicReconcileDormantActorsForConnection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.PublicReconcileDormantActorsForConnection(UNetConnection*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.PublicUpdateNetworkActorCullDistance(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PublicUpdateNetworkActorCullDistance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.PublicUpdateNetworkActorCullDistance(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.RemoveClientConnection(UNetConnection*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveClientConnection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.RemoveClientConnection(UNetConnection*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.ReplicateActorsForConnection(UNetConnection*,FPerConnectionActorInfoMap
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReplicateActorsForConnection(void* a0, void* a1, void* a2, unsigned int a3) const
    {
        return NativeCall<void*, void*, void*, void*, unsigned int>(this, "UShooterReplicationGraph.ReplicateActorsForConnection(UNetConnection*,FPerConnectionActorInfoMap&,UNetReplicationGraphConnection*,unsignedint)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.ResetGameWorldState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetGameWorldState() const
    {
        return NativeCall<void*>(this, "UShooterReplicationGraph.ResetGameWorldState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.RouteAddNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNewRep
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RouteAddNetworkActorToConnectionNodes(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "UShooterReplicationGraph.RouteAddNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.RouteAddNetworkActorToNodes(FNewReplicatedActorInfo&,FGlobalActorReplic
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RouteAddNetworkActorToNodes(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterReplicationGraph.RouteAddNetworkActorToNodes(FNewReplicatedActorInfo&,FGlobalActorReplicationInfo&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.RouteRemoveNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNew
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RouteRemoveNetworkActorToConnectionNodes(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UShooterReplicationGraph.RouteRemoveNetworkActorToConnectionNodes(EReplicationGraphBehavior,FNewReplicatedActorInfo&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.RouteRemoveNetworkActorToNodes(FNewReplicatedActorInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RouteRemoveNetworkActorToNodes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.RouteRemoveNetworkActorToNodes(FNewReplicatedActorInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.ServerReplicateActors(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerReplicateActors(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterReplicationGraph.ServerReplicateActors(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.SetActiveRepGraphBehaviorFor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetActiveRepGraphBehaviorFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterReplicationGraph.SetActiveRepGraphBehaviorFor(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationGraph.SetNetworkParent(AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNetworkParent(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterReplicationGraph.SetNetworkParent(AActor*,AActor*)", a0, a1);
    }

    BrzCampoPonteiro ActiveNetworkActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.ActiveNetworkActors")); }
    BrzCampoPonteiro AlwaysRelevantNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.AlwaysRelevantNode")); }
    BrzCampoPonteiro ConnectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.Connections")); }
    BrzCampoPonteiro DefaultBehaviorNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.DefaultBehaviorNode")); }
    float& DistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DistanceMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DistanceMultiplier` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6B4; confianca alta)
    void*& DistanceMultiplierSqField() const
    { return BrzCampoAncorado<void*>(this, "DistanceMultiplier", 4); }
    float& DormantCellSizeField() const
    { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DormantCellSize"); }
    BrzCampoPonteiro DormantGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.DormantGrid")); }
    float& DynamicCellSizeField() const
    { return *GetNativePointerField<float*>(this, "UShooterReplicationGraph.DynamicCellSize"); }
    BrzCampoPonteiro DynamicGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.DynamicGrid")); }
    BrzCampoPonteiro GlobalGraphNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.GlobalGraphNodes")); }
    TObjectPtr<UNetDriver>& NetDriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UShooterReplicationGraph.NetDriver"); }
    BrzCampoPonteiro PendingConnectionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.PendingConnections")); }
    BrzCampoPonteiro Primal_PrepareForReplicationNodesSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.Primal_PrepareForReplicationNodesSet")); }
    BrzCampoPonteiro ReplicationConnectionManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.ReplicationConnectionManagerClass")); }
    BrzCampoPonteiro TeamAlwaysRelevantNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationGraph.TeamAlwaysRelevantNode")); }
    BitFieldValue<bool, unsigned __int32> bEnableSpatialRebuilds()
    { return { (void*)this, "bEnableSpatialRebuilds" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERREPLICATIONGRAPH_H
