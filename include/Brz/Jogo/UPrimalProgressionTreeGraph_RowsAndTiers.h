// ==========================================================================
//  UPrimalProgressionTreeGraph_RowsAndTiers — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_ROWSANDTIERS_H
#define BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_ROWSANDTIERS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalProgressionTreeGraph_RowsAndTiers
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalProgressionTreeGraph_RowsAndTiers"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph_RowsAndTiers.ArePrerequisitesMet_Implementation(FName,TSet<FName,Def
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ArePrerequisitesMet_Implementation(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.ArePrerequisitesMet_Implementation(FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph_RowsAndTiers.GetAvailableNodes_Implementation(TSet<FName,DefaultKeyF
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableNodes_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.GetAvailableNodes_Implementation(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalProgressionTreeGraph_RowsAndTiers.GetPointsSpentInRow(int,TSet<FName,DefaultKeyFuncs<FNam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPointsSpentInRow(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.GetPointsSpentInRow(int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>&)", a0, a1);
    }

    BrzCampoPonteiro GraphFeaturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.GraphFeatures")); }
    BrzCampoPonteiro NodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.Nodes")); }
    BrzCampoPonteiro RowTraitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.RowTrait")); }
    BrzCampoPonteiro TierTraitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalProgressionTreeGraph_RowsAndTiers.TierTrait")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALPROGRESSIONTREEGRAPH_ROWSANDTIERS_H
