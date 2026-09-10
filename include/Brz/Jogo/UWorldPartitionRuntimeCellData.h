// ==========================================================================
//  UWorldPartitionRuntimeCellData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATA_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeCellData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeCellData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellData.AppendStreamingSourceInfo(FWorldPartitionStreamingSource&,FSpheri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendStreamingSourceInfo(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionRuntimeCellData.AppendStreamingSourceInfo(FWorldPartitionStreamingSource&,FSphericalSector&,FWorldPartitionStreamingContext&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellData.GetCellBounds()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetCellBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellData.GetCellBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellData.GetStreamingBounds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellData.GetStreamingBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellData.ResetStreamingSourceInfo(FWorldPartitionStreamingContext&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ResetStreamingSourceInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCellData.ResetStreamingSourceInfo(FWorldPartitionStreamingContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellData.SortCompare(UWorldPartitionRuntimeCellData*)
    // endereco: cache_pdb_25090264
    BrzPonteiro SortCompare(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCellData.SortCompare(UWorldPartitionRuntimeCellData*)", a0);
    }

    BrzCampoPonteiro CellBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellData.CellBounds")); }
    BrzCampoPonteiro ContentBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellData.ContentBounds")); }
    FName& GridNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionRuntimeCellData.GridName"); }
    int& HierarchicalLevelField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellData.HierarchicalLevel"); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellData.Priority"); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATA_H
