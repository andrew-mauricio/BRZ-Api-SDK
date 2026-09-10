// ==========================================================================
//  UWorldPartitionRuntimeHashSet — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASHSET_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASHSET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeHashSet
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeHashSet"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.Draw2D(FWorldPartitionDraw2DContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw2D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.Draw2D(FWorldPartitionDraw2DContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.Draw3D(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw3D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.Draw3D(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.ForEachStreamingCellsQuery(FWorldPartitionStreamingQuerySource&,TF
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachStreamingCellsQuery(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionRuntimeHashSet.ForEachStreamingCellsQuery(FWorldPartitionStreamingQuerySource&,TFunctionRef<bool__cdecl(UWorldPartitionRuntimeCell*),FWorldPartitionQueryCache*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.ForEachStreamingCellsSources(TArray<FWorldPartitionStreamingSource
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachStreamingCellsSources(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionRuntimeHashSet.ForEachStreamingCellsSources(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&,TFunctionRef<bool__cdecl(UWorldPartitionRuntimeCell*,EStreamingSourceTargetState),FWorldPartitionStreamingContext&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectB
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InjectExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.OnBeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnBeginPlay() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeHashSet.OnBeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.ParseGridName(FName,TArray<FName,TSizedDefaultAllocator<32>>&,TArr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ParseGridName(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UWorldPartitionRuntimeHashSet.ParseGridName(FName,TArray<FName,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.RegisterWorldAssetStreaming(UWorldPartition::FRegisterWorldAssetSt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWorldAssetStreaming(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.RegisterWorldAssetStreaming(UWorldPartition::FRegisterWorldAssetStreamingParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectB
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.ResolveRuntimePartition(FName,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveRuntimePartition(unsigned long long a0, bool a1) const
    {
        return NativeCall<void*, unsigned long long, bool>(this, "UWorldPartitionRuntimeHashSet.ResolveRuntimePartition(FName,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.SupportsWorldAssetStreaming(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SupportsWorldAssetStreaming(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHashSet.SupportsWorldAssetStreaming(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SupportsWorldAssetStreaming(FName* a0) const
    { return SupportsWorldAssetStreaming(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHashSet.UpdateRuntimeDataGridMap()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateRuntimeDataGridMap() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeHashSet.UpdateRuntimeDataGridMap()");
    }

    BrzCampoPonteiro RuntimePartitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeHashSet.RuntimePartitions")); }
    BrzCampoPonteiro RuntimeStreamingDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeHashSet.RuntimeStreamingData")); }
    BrzCampoPonteiro WorldAssetStreamingObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeHashSet.WorldAssetStreamingObjects")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASHSET_H
