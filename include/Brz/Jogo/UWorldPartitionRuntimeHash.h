// ==========================================================================
//  UWorldPartitionRuntimeHash — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASH_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeHash
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeHash"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.CreateExternalStreamingObject(TSubclassOf<URuntimeHashExternalStreami
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateExternalStreamingObject(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UWorldPartitionRuntimeHash.CreateExternalStreamingObject(TSubclassOf<URuntimeHashExternalStreamingObjectBase>,UObject*,UWorld*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.CreateRuntimeCell(UClass*,UClass*,FString&,FString&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateRuntimeCell(void* a0, void* a1, const FString& a2, const FString& a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UWorldPartitionRuntimeHash.CreateRuntimeCell(UClass*,UClass*,FString&,FString&,UObject*)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3), a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro CreateRuntimeCell(void* a0, void* a1, FString* a2, FString* a3, void* a4) const
    { return CreateRuntimeCell(a0, a1, *a2, *a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.FStreamingSourceCells.AddCell(UWorldPartitionRuntimeCell*,FWorldParti
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FStreamingSourceCells_AddCell(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UWorldPartitionRuntimeHash.FStreamingSourceCells.AddCell(UWorldPartitionRuntimeCell*,FWorldPartitionStreamingSource&,FSphericalSector&,FWorldPartitionStreamingContext&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.GetStreamingPerformance(TSet<UWorldPartitionRuntimeCell*,DefaultKeyFu
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingPerformance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHash.GetStreamingPerformance(TSet<UWorldPartitionRuntimeCell*,DefaultKeyFuncs<UWorldPartitionRuntimeCell*,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.GetStreamingPerformanceForCell(UWorldPartitionRuntimeCell*)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetStreamingPerformanceForCell(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHash.GetStreamingPerformanceForCell(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InjectExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHash.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.IsCellRelevantFor(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsCellRelevantFor(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UWorldPartitionRuntimeHash.IsCellRelevantFor(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObject
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsExternalStreamingObjectInjected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHash.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeHash.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeHash.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    BrzCampoPonteiro CellsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeHash.Cells")); }
};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMEHASH_H
