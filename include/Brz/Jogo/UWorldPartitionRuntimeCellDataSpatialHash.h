// ==========================================================================
//  UWorldPartitionRuntimeCellDataSpatialHash — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATASPATIALHASH_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATASPATIALHASH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeCellDataSpatialHash
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeCellDataSpatialHash"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.AppendStreamingSourceInfo(FWorldPartitionStreamingSour
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AppendStreamingSourceInfo(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.AppendStreamingSourceInfo(FWorldPartitionStreamingSource&,FSphericalSector&,FWorldPartitionStreamingContext&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.ComputeSourceToCellAngleFactor(FSphericalSector&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeSourceToCellAngleFactor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.ComputeSourceToCellAngleFactor(FSphericalSector&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.GetCellBounds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCellBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.GetCellBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.GetStreamingBounds()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingBounds() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.GetStreamingBounds()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.IsDebugShown()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsDebugShown() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.IsDebugShown()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.MergeStreamingSourceInfo()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MergeStreamingSourceInfo() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.MergeStreamingSourceInfo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.ResetStreamingSourceInfo(FWorldPartitionStreamingConte
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetStreamingSourceInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.ResetStreamingSourceInfo(FWorldPartitionStreamingContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeCellDataSpatialHash.SortCompare(UWorldPartitionRuntimeCellData*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortCompare(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.SortCompare(UWorldPartitionRuntimeCellData*)", a0);
    }

    BrzCampoPonteiro CellBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellDataSpatialHash.CellBounds")); }
    BrzCampoPonteiro ContentBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellDataSpatialHash.ContentBounds")); }
    float& ExtentField() const
    { return *GetNativePointerField<float*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.Extent"); }
    FName& GridNameField() const
    { return *GetNativePointerField<FName*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.GridName"); }
    int& HierarchicalLevelField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.HierarchicalLevel"); }
    BrzCampoPonteiro PositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellDataSpatialHash.position")); }
    int& PriorityField() const
    { return *GetNativePointerField<int*>(this, "UWorldPartitionRuntimeCellDataSpatialHash.Priority"); }
    BrzCampoPonteiro positionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeCellDataSpatialHash.position")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMECELLDATASPATIALHASH_H
