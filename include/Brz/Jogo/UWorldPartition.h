// ==========================================================================
//  UWorldPartition — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UWORLDPARTITION_H
#define BRZ_SDK_JOGO_UWORLDPARTITION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UWorld;


struct UWorldPartition
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UWorldPartition"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.CanAddCellToWorld(IWorldPartitionCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanAddCellToWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.CanAddCellToWorld(IWorldPartitionCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.CanInitialize(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanInitialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.CanInitialize(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.CanStream()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanStream() const
    {
        return NativeCall<void*>(this, "UWorldPartition.CanStream()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro DrawRuntimeCellsDetails(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartition.DrawRuntimeCellsDetails(UCanvas*,UE::Math::TVector2<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro DrawRuntimeHash2D(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.DrawRuntimeHash2D(FWorldPartitionDraw2DContext&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.DrawRuntimeHash3D()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro DrawRuntimeHash3D() const
    {
        return NativeCall<void*>(this, "UWorldPartition.DrawRuntimeHash3D()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetInstanceTransform()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInstanceTransform() const
    {
        return NativeCall<void*>(this, "UWorldPartition.GetInstanceTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetStreamingPerformance()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetStreamingPerformance() const
    {
        return NativeCall<void*>(this, "UWorldPartition.GetStreamingPerformance()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetStreamingSources()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStreamingSources() const
    {
        return NativeCall<void*>(this, "UWorldPartition.GetStreamingSources()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetStreamingStateEpoch()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetStreamingStateEpoch() const
    {
        return NativeCall<void*>(this, "UWorldPartition.GetStreamingStateEpoch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetUpdateStreamingStateEpoch()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetUpdateStreamingStateEpoch() const
    {
        return NativeCall<void*>(this, "UWorldPartition.GetUpdateStreamingStateEpoch()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.GetWorld()
    // endereco: cache_pdb_25090264
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UWorldPartition.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.Initialize(UWorld*,UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UWorldPartition.Initialize(UWorld*,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InjectExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.InjectExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsExternalStreamingObjectInjected(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.IsExternalStreamingObjectInjected(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsInitialized()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsInitialized() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsInitialized()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsServer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsServer() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsServer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsServerStreamingEnabled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsServerStreamingEnabled() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsServerStreamingEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsServerStreamingOutEnabled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsServerStreamingOutEnabled() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsServerStreamingOutEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorldPartitionStrea
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(int a0, void* a1, bool a2) const
    {
        return NativeCall<void*, int, void*, bool>(this, "UWorldPartition.IsStreamingCompleted(EWorldPartitionRuntimeCellState,TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>>&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingCompleted(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.IsStreamingCompleted(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsStreamingEnabled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingEnabled() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsStreamingEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.IsStreamingInEnabled()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStreamingInEnabled() const
    {
        return NativeCall<void*>(this, "UWorldPartition.IsStreamingInEnabled()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.OnBeginPlay()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnBeginPlay() const
    {
        return NativeCall<void*>(this, "UWorldPartition.OnBeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.OnCellHidden(UWorldPartitionRuntimeCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCellHidden(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.OnCellHidden(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.OnCellShown(UWorldPartitionRuntimeCell*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCellShown(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.OnCellShown(UWorldPartitionRuntimeCell*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.OnWorldPreBeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnWorldPreBeginPlay() const
    {
        return NativeCall<void*>(this, "UWorldPartition.OnWorldPreBeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveExternalStreamingObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.RemoveExternalStreamingObject(URuntimeHashExternalStreamingObjectBase*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.ResolveSubobject(wchar_t*,UObject*&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveSubobject(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UWorldPartition.ResolveSubobject(wchar_t*,UObject*&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UWorldPartition.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.Uninitialize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Uninitialize() const
    {
        return NativeCall<void*>(this, "UWorldPartition.Uninitialize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.UpdateTileVolumes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTileVolumes() const
    {
        return NativeCall<void*>(this, "UWorldPartition.UpdateTileVolumes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UWorldPartition.UseMakingVisibleTransactionRequests()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UseMakingVisibleTransactionRequests() const
    {
        return NativeCall<void*>(this, "UWorldPartition.UseMakingVisibleTransactionRequests()");
    }

    //  no cache antigo este campo se chamava Bounds.
    //  nesta build ele e' `DataLayerManager` — resolve por NOME.
    BrzCampoPonteiro BoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.DataLayerManager")); }
    BrzCampoPonteiro DataLayerManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.DataLayerManager")); }
    BrzCampoPonteiro DataLayersLogicOperatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.DataLayersLogicOperator")); }
    BrzCampoPonteiro ExternalDataLayerManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.ExternalDataLayerManager")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +37, medido na build 25090264
    //  (offset absoluto medido: 0x60; confianca media)
    void*& GuidField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 37); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +13, medido na build 25090264
    //  (offset absoluto medido: 0x48; confianca media)
    void*& InitStateField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 13); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +21, medido na build 25090264
    //  (offset absoluto medido: 0x50; confianca media)
    void*& InstanceTransformField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 21); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingPolicy` +16, medido na build 25090264
    //  (offset absoluto medido: 0xF0; confianca alta)
    void*& ReplayField() const
    { return BrzCampoAncorado<void*>(this, "StreamingPolicy", 16); }
    BrzCampoPonteiro RuntimeHashField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.RuntimeHash")); }
    BrzCampoPonteiro ServerStreamingModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.ServerStreamingMode")); }
    BrzCampoPonteiro ServerStreamingOutModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.ServerStreamingOutMode")); }
    BrzCampoPonteiro StreamingPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.StreamingPolicy")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `StreamingPolicy` +8, medido na build 25090264
    //  (offset absoluto medido: 0xE8; confianca alta)
    void*& StreamingStateEpochField() const
    { return BrzCampoAncorado<void*>(this, "StreamingPolicy", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +29, medido na build 25090264
    //  (offset absoluto medido: 0x58; confianca media)
    void*& TargetGridHLODField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 29); }
    BrzCampoPonteiro TileVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.TileVolumes")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +53, medido na build 25090264
    //  (offset absoluto medido: 0x70; confianca media)
    void*& TransformField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 53); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +5, medido na build 25090264
    //  (offset absoluto medido: 0x40; confianca media)
    void*& WorldField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 5); }
    //  no cache antigo este campo se chamava WorldAssetHLOD.
    //  nesta build ele e' `RuntimeHash` — resolve por NOME.
    BrzCampoPonteiro WorldAssetHLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UWorldPartition.RuntimeHash")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +138, medido na build 25090264
    //  (offset absoluto medido: 0xC5; confianca baixa)
    void*& bCachedIsServerStreamingEnabledField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 138); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +140, medido na build 25090264
    //  (offset absoluto medido: 0xC7; confianca baixa)
    void*& bCachedIsServerStreamingOutEnabledField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 140); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +134, medido na build 25090264
    //  (offset absoluto medido: 0xC1; confianca baixa)
    void*& bCachedUseMakingInvisibleTransactionRequestsField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 134); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +136, medido na build 25090264
    //  (offset absoluto medido: 0xC3; confianca baixa)
    void*& bCachedUseMakingVisibleTransactionRequestsField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DataLayersLogicOperator` +133, medido na build 25090264
    //  (offset absoluto medido: 0xC0; confianca baixa)
    void*& bStreamingInEnabledField() const
    { return BrzCampoAncorado<void*>(this, "DataLayersLogicOperator", 133); }
    BitFieldValue<bool, unsigned __int32> bDisableContentBundles()
    { return { (void*)this, "bDisableContentBundles" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStreaming()
    { return { (void*)this, "bEnableStreaming" }; }

};

#endif  // BRZ_SDK_JOGO_UWORLDPARTITION_H
