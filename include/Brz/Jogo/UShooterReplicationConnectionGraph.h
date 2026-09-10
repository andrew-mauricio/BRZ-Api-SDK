// ==========================================================================
//  UShooterReplicationConnectionGraph — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERREPLICATIONCONNECTIONGRAPH_H
#define BRZ_SDK_JOGO_USHOOTERREPLICATIONCONNECTIONGRAPH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UNetConnection;


struct UShooterReplicationConnectionGraph
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterReplicationConnectionGraph"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationConnectionGraph.HasDormantActor(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasDormantActor(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UShooterReplicationConnectionGraph.HasDormantActor(AActor*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterReplicationConnectionGraph.TearDown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TearDown() const
    {
        return NativeCall<void*>(this, "UShooterReplicationConnectionGraph.TearDown()");
    }

    BrzCampoPonteiro AlwaysRelevantNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationConnectionGraph.AlwaysRelevantNode")); }
    BrzCampoPonteiro ConnectionGraphNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationConnectionGraph.ConnectionGraphNodes")); }
    TWeakObjectPtr<void>& DebugActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UShooterReplicationConnectionGraph.DebugActor"); }
    BrzCampoPonteiro DormantCellsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationConnectionGraph.DormantCells")); }
    BrzCampoPonteiro LastGatherLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationConnectionGraph.LastGatherLocations")); }
    TObjectPtr<UNetConnection>& NetConnectionField() const
    { return *GetNativePointerField<TObjectPtr<UNetConnection>*>(this, "UShooterReplicationConnectionGraph.NetConnection"); }
    BrzCampoPonteiro TearOffNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterReplicationConnectionGraph.TearOffNode")); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERREPLICATIONCONNECTIONGRAPH_H
