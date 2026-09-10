// ==========================================================================
//  FActorRepListStatCollector — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORREPLISTSTATCOLLECTOR_H
#define BRZ_SDK_JOGO_FACTORREPLISTSTATCOLLECTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FActorRepListStatCollector
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorRepListStatCollector"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListStatCollector.PrintCollectedData(FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrintCollectedData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListStatCollector.PrintCollectedData(FOutputDevice&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListStatCollector.VisitRepList(UReplicationGraphNode*,FActorRepListRefView&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VisitRepList(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FActorRepListStatCollector.VisitRepList(UReplicationGraphNode*,FActorRepListRefView&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListStatCollector.VisitStreamingLevelCollection(UReplicationGraphNode*,FStreamingLevelA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro VisitStreamingLevelCollection(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FActorRepListStatCollector.VisitStreamingLevelCollection(UReplicationGraphNode*,FStreamingLevelActorListCollection&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorRepListStatCollector.WasNodeVisited(UReplicationGraphNode*)
    // endereco: cache_pdb_25090264
    BrzPonteiro WasNodeVisited(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorRepListStatCollector.WasNodeVisited(UReplicationGraphNode*)", a0);
    }
    BrzCampoPonteiro NumActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorRepListStatCollector.NumActors")); }
    BrzCampoPonteiro NumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorRepListStatCollector.NumBytes")); }
    BrzCampoPonteiro VisitedNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorRepListStatCollector.VisitedNodes")); }
};

#endif  // BRZ_SDK_JOGO_FACTORREPLISTSTATCOLLECTOR_H
