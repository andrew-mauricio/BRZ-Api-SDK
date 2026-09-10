// ==========================================================================
//  UWorldPartitionRuntimeSpatialHash — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMESPATIALHASH_H
#define BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMESPATIALHASH_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UWorldPartitionRuntimeSpatialHash
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartitionRuntimeSpatialHash"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.ComputeUpdateStreamingHash()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeUpdateStreamingHash() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeSpatialHash.ComputeUpdateStreamingHash()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.ContainsRuntimeHash(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ContainsRuntimeHash(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.ContainsRuntimeHash(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ContainsRuntimeHash(FString* a0) const
    { return ContainsRuntimeHash(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.Draw2D(FWorldPartitionDraw2DContext&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw2D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.Draw2D(FWorldPartitionDraw2DContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.Draw3D(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Draw3D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.Draw3D(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.ForEachStreamingCellsQuery(FWorldPartitionStreamingQuerySource
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachStreamingCellsQuery(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.ForEachStreamingCellsQuery(FWorldPartitionStreamingQuerySource&,TFunctionRef<bool__cdecl(UWorldPartitionRuntimeCell*),FWorldPartitionQueryCache*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.ForEachStreamingCellsSources(TArray<FWorldPartitionStreamingSo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForEachStreamingCellsSources(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.ForEachStreamingCellsSources(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&,TFunctionRef<bool__cdecl(UWorldPartitionRuntimeCell*,EStreamingSourceTargetState),FWorldPartitionStreamingContext&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.GetFilteredStreamingGrids()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFilteredStreamingGrids() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeSpatialHash.GetFilteredStreamingGrids()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.GetNameToGridMapping()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNameToGridMapping() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeSpatialHash.GetNameToGridMapping()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.GetStreamingGridByName(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingGridByName(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UWorldPartitionRuntimeSpatialHash.GetStreamingGridByName(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.GetStreamingPerformanceForCell(UWorldPartitionRuntimeCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingPerformanceForCell(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.GetStreamingPerformanceForCell(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.InjectExternalStreamingObject(URuntimeHashExternalStreamingObj
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InjectExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.IsStreaming3D()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsStreaming3D() const
    {
        return NativeCall<void*>(this, "UWorldPartitionRuntimeSpatialHash.IsStreaming3D()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.RegisterWorldAssetStreaming(UWorldPartition::FRegisterWorldAss
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterWorldAssetStreaming(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.RegisterWorldAssetStreaming(UWorldPartition::FRegisterWorldAssetStreamingParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObj
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartitionRuntimeSpatialHash.SupportsWorldAssetStreaming(FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SupportsWorldAssetStreaming(const FName& a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartitionRuntimeSpatialHash.SupportsWorldAssetStreaming(FName&)", const_cast<FName*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SupportsWorldAssetStreaming(FName* a0) const
    { return SupportsWorldAssetStreaming(*a0); }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingGrids` +16, medido na build 25090264
    //  (offset absoluto medido: 0x90; confianca alta)
    void*& NameToGridMappingField() const
    { return BrzCampoAncorado<void*>(this, "StreamingGrids", 16); }
    BrzCampoPonteiro SettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeSpatialHash.Settings")); }
    BrzCampoPonteiro StreamingGridsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeSpatialHash.StreamingGrids")); }
    BrzCampoPonteiro WorldAssetStreamingObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartitionRuntimeSpatialHash.WorldAssetStreamingObjects")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingGrids` +96, medido na build 25090264
    //  (offset absoluto medido: 0xE0; confianca media)
    void*& bIsNameToGridMappingDirtyField() const
    { return BrzCampoAncorado<void*>(this, "StreamingGrids", 96); }
    BitFieldValue<bool, unsigned __int32> bEnableZCulling()
    { return { (void*)this, "bEnableZCulling" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITIONRUNTIMESPATIALHASH_H
