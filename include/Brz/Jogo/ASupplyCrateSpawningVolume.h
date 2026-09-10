// ==========================================================================
//  ASupplyCrateSpawningVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGVOLUME_H
#define BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalStructureItemContainer_SupplyCrate;
struct FName;

#include "AActor.h"

struct ASupplyCrateSpawningVolume : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ASupplyCrateSpawningVolume"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "ASupplyCrateSpawningVolume.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.CheckCrateSpawn()
    // endereco: casamento de bytes com a build de referencia
    void CheckCrateSpawn() const
    {
        NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckCrateSpawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.CheckForSupplyCrateStart()
    // endereco: casamento de bytes com a build de referencia
    void CheckForSupplyCrateStart() const
    {
        NativeCall<void>(this, "ASupplyCrateSpawningVolume.CheckForSupplyCrateStart()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "ASupplyCrateSpawningVolume.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "ASupplyCrateSpawningVolume.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.GetValidSpawnPointEntry(UE::Math::TVector<double>&,double*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetValidSpawnPointEntry(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "ASupplyCrateSpawningVolume.GetValidSpawnPointEntry(UE::Math::TVector<double>&,double*&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.RemoveCrate(APrimalStructureItemContainer_SupplyCrate*)
    // endereco: casamento de bytes com a build de referencia
    void RemoveCrate(void* a0) const
    {
        NativeCall<void, void*>(this, "ASupplyCrateSpawningVolume.RemoveCrate(APrimalStructureItemContainer_SupplyCrate*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.SetSpawnEnabled(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetSpawnEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "ASupplyCrateSpawningVolume.SetSpawnEnabled(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASupplyCrateSpawningVolume.SpawnCratesFromAllPoints()
    // endereco: casamento de bytes com a build de referencia
    void SpawnCratesFromAllPoints() const
    {
        NativeCall<void>(this, "ASupplyCrateSpawningVolume.SpawnCratesFromAllPoints()");
    }

    FName& CrateSpawningRequiresLoadedDataLayerField() const
    { return *GetNativePointerField<FName*>(this, "ASupplyCrateSpawningVolume.CrateSpawningRequiresLoadedDataLayer"); }
    float& DelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.DelayBeforeFirstCrate"); }
    float& IntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenCrateSpawns"); }
    float& IntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.IntervalBetweenMaxedCrateSpawns"); }
    TArray<void*>& LinkedSpawnPointEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ASupplyCrateSpawningVolume.LinkedSpawnPointEntries"); }
    TArray<void*>& LinkedSupplyCrateEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ASupplyCrateSpawningVolume.LinkedSupplyCrateEntries"); }
    float& MaxDelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxDelayBeforeFirstCrate"); }
    float& MaxIntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenCrateSpawns"); }
    float& MaxIntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MaxIntervalBetweenMaxedCrateSpawns"); }
    int& MaxNumCratesField() const
    { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.MaxNumCrates"); }
    float& MinCrateDistanceFromPlayerField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromPlayer"); }
    float& MinCrateDistanceFromStructureField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinCrateDistanceFromStructure"); }
    float& MinDistanceFromOtherCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinDistanceFromOtherCrate"); }
    float& MinTimeBetweenCrateSpawnsAtSamePointField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.MinTimeBetweenCrateSpawnsAtSamePoint"); }
    TArray<APrimalStructureItemContainer_SupplyCrate*>& MyCratesField() const
    { return *GetNativePointerField<TArray<APrimalStructureItemContainer_SupplyCrate*>*>(this, "ASupplyCrateSpawningVolume.MyCrates"); }
    float& NoValidSpawnReCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.NoValidSpawnReCheckInterval"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LinkedSupplyCrateEntries` +16, medido na build 25090264
    //  (offset absoluto medido: 0x4F0; confianca alta)
    TArray<void*>& OriginalSupplyCrateEntriesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "LinkedSupplyCrateEntries", 16); }
    float& SP_DelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_DelayBeforeFirstCrate"); }
    float& SP_IntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenCrateSpawns"); }
    float& SP_IntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_IntervalBetweenMaxedCrateSpawns"); }
    float& SP_MaxDelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxDelayBeforeFirstCrate"); }
    float& SP_MaxIntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenCrateSpawns"); }
    float& SP_MaxIntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_MaxIntervalBetweenMaxedCrateSpawns"); }
    float& SP_NoValidSpawnRecheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningVolume.SP_NoValidSpawnRecheckInterval"); }
    int& ZoneVolumeMaxNumberOfNPCBufferField() const
    { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningVolume.ZoneVolumeMaxNumberOfNPCBuffer"); }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnPointWeights()
    { return { (void*)this, "bUseSpawnPointWeights" }; }
    BitFieldValue<bool, unsigned __int32> bDoSpawnCrateOnTopOfStructures()
    { return { (void*)this, "bDoSpawnCrateOnTopOfStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventCrateOnTopOfStructures()
    { return { (void*)this, "bForcePreventCrateOnTopOfStructures" }; }
    BitFieldValue<bool, unsigned __int32> bReallyUseCrateRequiresLoadedLevel()
    { return { (void*)this, "bReallyUseCrateRequiresLoadedLevel" }; }
    BitFieldValue<bool, unsigned __int32> bForceRandomSupplyCratePoints()
    { return { (void*)this, "bForceRandomSupplyCratePoints" }; }

};

#endif  // BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGVOLUME_H
