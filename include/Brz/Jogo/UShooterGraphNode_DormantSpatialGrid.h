// ==========================================================================
//  UShooterGraphNode_DormantSpatialGrid — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERGRAPHNODE_DORMANTSPATIALGRID_H
#define BRZ_SDK_JOGO_USHOOTERGRAPHNODE_DORMANTSPATIALGRID_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterGraphNode_DormantSpatialGrid
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterGraphNode_DormantSpatialGrid"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_DormantSpatialGrid.GatherActorListsForConnection(FConnectionGatherActorListPar
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GatherActorListsForConnection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_DormantSpatialGrid.GatherActorListsForConnection(FConnectionGatherActorListParameters&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_DormantSpatialGrid.HandleDormantDestroy(FConnectionGatherActorListParameters&,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleDormantDestroy(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterGraphNode_DormantSpatialGrid.HandleDormantDestroy(FConnectionGatherActorListParameters&,FActorRepListRefView&,FActorRepListRefView&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGraphNode_DormantSpatialGrid.NotifyActorRemoved(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NotifyActorRemoved(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGraphNode_DormantSpatialGrid.NotifyActorRemoved(AActor*)", a0);
    }

    BrzCampoPonteiro AllChildNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGraphNode_DormantSpatialGrid.AllChildNodes")); }
};

#endif  // BRZ_SDK_JOGO_USHOOTERGRAPHNODE_DORMANTSPATIALGRID_H
