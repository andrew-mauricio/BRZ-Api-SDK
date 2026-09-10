// ==========================================================================
//  UPrimalWorld — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWORLD_H
#define BRZ_SDK_JOGO_UPRIMALWORLD_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "UObject.h"

struct UPrimalWorld : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWorld"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.ApplyGlobalMaterialParamOverrides(FGlobalMaterialParamOverrides&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyGlobalMaterialParamOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorld.ApplyGlobalMaterialParamOverrides(FGlobalMaterialParamOverrides&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.BeginDestroy()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginDestroy() const
    {
        return NativeCall<void*>(this, "UPrimalWorld.BeginDestroy()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.ConsoleVariableSink()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConsoleVariableSink() const
    {
        return NativeCall<void*>(this, "UPrimalWorld.ConsoleVariableSink()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.ConstructOctree()
    // endereco: casamento de bytes com a build de referencia
    void ConstructOctree() const
    {
        NativeCall<void>(this, "UPrimalWorld.ConstructOctree()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.GetPrimitiveOctreeIterator(UE::Math::TVector<double>&,float,unsignedint,TFunction<v
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetPrimitiveOctreeIterator(void* a0, float a1, unsigned int a2, void* a3) const
    {
        NativeCall<void, void*, float, unsigned int, void*>(this, "UPrimalWorld.GetPrimitiveOctreeIterator(UE::Math::TVector<double>&,float,unsignedint,TFunction<void__cdecl(UPrimitiveComponent*))", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.GetPrimitiveOctreeIteratorEarlyOut(UE::Math::TVector<double>&,float,unsignedint,TFu
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetPrimitiveOctreeIteratorEarlyOut(void* a0, float a1, unsigned int a2, void* a3) const
    {
        NativeCall<void, void*, float, unsigned int, void*>(this, "UPrimalWorld.GetPrimitiveOctreeIteratorEarlyOut(UE::Math::TVector<double>&,float,unsignedint,TFunction<bool__cdecl(UPrimitiveComponent*))", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.GetValidTileStreamingVolumesForLocations(TArray<TObjectPtr<ATileStreamingVolume>,TS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetValidTileStreamingVolumesForLocations(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalWorld.GetValidTileStreamingVolumesForLocations(TArray<TObjectPtr<ATileStreamingVolume>,TSizedDefaultAllocator<32>>&,TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.GetValidTileStreamingVolumesForLocations(TArray<TObjectPtr<ATileStreamingVolume>,TS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetValidTileStreamingVolumesForLocations(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalWorld.GetValidTileStreamingVolumesForLocations(TArray<TObjectPtr<ATileStreamingVolume>,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>*,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.OverlapMultiInternalOctree(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    bool OverlapMultiInternalOctree(void* a0, void* a1, unsigned int a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalOctree(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&,FBoxCenterAndExtent&,unsignedint,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*,TSizedDefaultAllocato
    // endereco: casamento de bytes com a build de referencia
    bool OverlapMultiInternalSimpleOctree(void* a0, void* a1, unsigned int a2, bool a3) const
    {
        return NativeCall<bool, void*, void*, unsigned int, bool>(this, "UPrimalWorld.OverlapMultiInternalSimpleOctree(TArray<FOctreeElementSimple*,TSizedDefaultAllocator<32>>&,FBoxCenterAndExtent&,unsignedint,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.OverlapNumInternalOctree(FBoxCenterAndExtent&,unsignedint)
    // endereco: casamento de bytes com a build de referencia
    int OverlapNumInternalOctree(void* a0, unsigned int a1) const
    {
        return NativeCall<int, void*, unsigned int>(this, "UPrimalWorld.OverlapNumInternalOctree(FBoxCenterAndExtent&,unsignedint)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UPrimalWorld.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.RemoveFromInternalOctree(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveFromInternalOctree(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalWorld.RemoveFromInternalOctree(UPrimitiveComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.RemoveFromInternalSimpleOctree(FOctreeElementSimple*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromInternalSimpleOctree(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorld.RemoveFromInternalSimpleOctree(FOctreeElementSimple*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalWorld.UpdateInternalOctreeTransform(UPrimitiveComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateInternalOctreeTransform(void* a0) const
    {
        NativeCall<void, void*>(this, "UPrimalWorld.UpdateInternalOctreeTransform(UPrimitiveComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorld.UpdateInternalSimpleOctreeTransform(FOctreeElementSimple*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateInternalSimpleOctreeTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorld.UpdateInternalSimpleOctreeTransform(FOctreeElementSimple*)", a0);
    }

    BrzCampoPonteiro ConsoleVariableSinkDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWorld.ConsoleVariableSinkDelegate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +8, medido na build 25090264
    //  (offset absoluto medido: 0x30; confianca media)
    FString& CurrentDayTimeField() const
    { return BrzCampoAncorado<FString>(this, "FrameCounter", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +104, medido na build 25090264
    //  (offset absoluto medido: 0x90; confianca media)
    void*& CurrentSaveIncrementorField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +4, medido na build 25090264
    //  (offset absoluto medido: 0x2C; confianca media)
    int& DinosDestroyedThisFrameField() const
    { return BrzCampoAncorado<int>(this, "FrameCounter", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +48, medido na build 25090264
    //  (offset absoluto medido: 0x58; confianca media)
    double& ForceBlockLoadTimeoutField() const
    { return BrzCampoAncorado<double>(this, "FrameCounter", 48); }
    int& FrameCounterField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWorld.FrameCounter"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +136, medido na build 25090264
    //  (offset absoluto medido: 0xB0; confianca baixa)
    double& IgnoreForcedLevelAsDistanceStreamingEnabledUntilTimeField() const
    { return BrzCampoAncorado<double>(this, "FrameCounter", 136); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +96, medido na build 25090264
    //  (offset absoluto medido: 0x88; confianca media)
    void*& LastUnstasisCountField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +168, medido na build 25090264
    //  (offset absoluto medido: 0xD0; confianca baixa)
    void*& LinkedProxyMeshesField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +32, medido na build 25090264
    //  (offset absoluto medido: 0x48; confianca media)
    double& LoadedAtPersistentTimeField() const
    { return BrzCampoAncorado<double>(this, "FrameCounter", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +24, medido na build 25090264
    //  (offset absoluto medido: 0x40; confianca media)
    double& LoadedAtTimeSecondsField() const
    { return BrzCampoAncorado<double>(this, "FrameCounter", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +100, medido na build 25090264
    //  (offset absoluto medido: 0x8C; confianca media)
    void*& LoadedSaveIncrementorField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 100); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +112, medido na build 25090264
    //  (offset absoluto medido: 0x98; confianca media)
    TArray<TWeakObjectPtr<void>>& LocalStasisActorsField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "FrameCounter", 112); }
    BrzCampoPonteiro MaterialQualityChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWorld.MaterialQualityChangedDelegate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +40, medido na build 25090264
    //  (offset absoluto medido: 0x50; confianca media)
    double& PersistentTimeField() const
    { return BrzCampoAncorado<double>(this, "FrameCounter", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +152, medido na build 25090264
    //  (offset absoluto medido: 0xC0; confianca baixa)
    TArray<TWeakObjectPtr<void>>& PreviousPostVolumesField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "FrameCounter", 152); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +92, medido na build 25090264
    //  (offset absoluto medido: 0x84; confianca media)
    float& StasisMaxResetTimerField() const
    { return BrzCampoAncorado<float>(this, "FrameCounter", 92); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +64, medido na build 25090264
    //  (offset absoluto medido: 0x68; confianca media)
    void*& StasisOssilationThisFrameField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +88, medido na build 25090264
    //  (offset absoluto medido: 0x80; confianca media)
    float& StasisOssilationThisFrameAvgField() const
    { return BrzCampoAncorado<float>(this, "FrameCounter", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +76, medido na build 25090264
    //  (offset absoluto medido: 0x74; confianca media)
    void*& StasisOssilationThisFrameMaxField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 76); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +56, medido na build 25090264
    //  (offset absoluto medido: 0x60; confianca media)
    void*& StasisThisFrameField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +80, medido na build 25090264
    //  (offset absoluto medido: 0x78; confianca media)
    float& StasisThisFrameAvgField() const
    { return BrzCampoAncorado<float>(this, "FrameCounter", 80); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +68, medido na build 25090264
    //  (offset absoluto medido: 0x6C; confianca media)
    void*& StasisThisFrameMaxField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 68); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +60, medido na build 25090264
    //  (offset absoluto medido: 0x64; confianca media)
    void*& UnStasisThisFrameField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 60); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +84, medido na build 25090264
    //  (offset absoluto medido: 0x7C; confianca media)
    float& UnStasisThisFrameAvgField() const
    { return BrzCampoAncorado<float>(this, "FrameCounter", 84); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +72, medido na build 25090264
    //  (offset absoluto medido: 0x70; confianca media)
    void*& UnStasisThisFrameMaxField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FrameCounter` +144, medido na build 25090264
    //  (offset absoluto medido: 0xB8; confianca baixa)
    void*& bFlushingLevelStreamingField() const
    { return BrzCampoAncorado<void*>(this, "FrameCounter", 144); }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bWorldWasPlayerView()
    { return { (void*)this, "bWorldWasPlayerView" }; }
    BitFieldValue<bool, unsigned __int32> bUseSimpleWorld()
    { return { (void*)this, "bUseSimpleWorld" }; }
    BitFieldValue<bool, unsigned __int32> bBlockAllOnNextLevelStreamingProcess()
    { return { (void*)this, "bBlockAllOnNextLevelStreamingProcess" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALWORLD_H
