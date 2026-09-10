// ==========================================================================
//  UShooterGraphNode_TeamAlwaysRelevant — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERGRAPHNODE_TEAMALWAYSRELEVANT_H
#define BRZ_SDK_JOGO_USHOOTERGRAPHNODE_TEAMALWAYSRELEVANT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterGraphNode_TeamAlwaysRelevant
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterGraphNode_TeamAlwaysRelevant"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.AddActorToTeamList(AActor*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddActorToTeamList(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterGraphNode_TeamAlwaysRelevant.AddActorToTeamList(AActor*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.AddTeamChangedEventHandler(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTeamChangedEventHandler(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.AddTeamChangedEventHandler(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.GatherActorListsForConnection(FConnectionGatherActorListPar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GatherActorListsForConnection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.GetAllActorsInNode_Debugging(TArray<AActor*,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllActorsInNode_Debugging(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.GetAllActorsInNode_Debugging(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.LogNode(FReplicationGraphDebugInfo&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LogNode(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.LogNode(FReplicationGraphDebugInfo&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LogNode(void* a0, FString* a1) const
    { return LogNode(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.NotifyAddNetworkActor(FNewReplicatedActorInfo&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyAddNetworkActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyAddNetworkActor(FNewReplicatedActorInfo&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.NotifyRemoveNetworkActor(FNewReplicatedActorInfo&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyRemoveNetworkActor(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyRemoveNetworkActor(FNewReplicatedActorInfo&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.NotifyResetAllNetworkActors()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyResetAllNetworkActors() const
    {
        return NativeCall<void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.NotifyResetAllNetworkActors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.RemoveActorFromTeamList(AActor*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveActorFromTeamList(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UShooterGraphNode_TeamAlwaysRelevant.RemoveActorFromTeamList(AActor*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.RemoveAllTeamChangedEventHandlers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveAllTeamChangedEventHandlers() const
    {
        return NativeCall<void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.RemoveAllTeamChangedEventHandlers()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_TeamAlwaysRelevant.TearDown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TearDown() const
    {
        return NativeCall<void*>(this, "UShooterGraphNode_TeamAlwaysRelevant.TearDown()");
    }

    BrzCampoPonteiro AllChildNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGraphNode_TeamAlwaysRelevant.AllChildNodes")); }
    BrzCampoPonteiro TeamNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGraphNode_TeamAlwaysRelevant.TeamNodes")); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERGRAPHNODE_TEAMALWAYSRELEVANT_H
