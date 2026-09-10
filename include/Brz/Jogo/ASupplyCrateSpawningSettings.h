// ==========================================================================
//  ASupplyCrateSpawningSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGSETTINGS_H
#define BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AActor.h"

struct ASupplyCrateSpawningSettings : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ASupplyCrateSpawningSettings"); }

    float& DelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.DelayBeforeFirstCrate"); }
    float& IntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenCrateSpawns"); }
    float& IntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.IntervalBetweenMaxedCrateSpawns"); }
    TArray<void*>& LinkedSupplyCrateEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ASupplyCrateSpawningSettings.LinkedSupplyCrateEntries"); }
    float& MaxDelayBeforeFirstCrateField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxDelayBeforeFirstCrate"); }
    float& MaxIntervalBetweenCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenCrateSpawns"); }
    float& MaxIntervalBetweenMaxedCrateSpawnsField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MaxIntervalBetweenMaxedCrateSpawns"); }
    int& MaxNumCratesField() const
    { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.MaxNumCrates"); }
    float& MinCrateDistanceFromPlayerField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromPlayer"); }
    float& MinCrateDistanceFromStructureField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinCrateDistanceFromStructure"); }
    float& MinTimeBetweenCrateSpawnsAtSamePointField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.MinTimeBetweenCrateSpawnsAtSamePoint"); }
    float& NoValidSpawnReCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "ASupplyCrateSpawningSettings.NoValidSpawnReCheckInterval"); }
    int& ZoneVolumeMaxNumberOfNPCBufferField() const
    { return *GetNativePointerField<int*>(this, "ASupplyCrateSpawningSettings.ZoneVolumeMaxNumberOfNPCBuffer"); }
    BitFieldValue<bool, unsigned __int32> bUseSpawnPointWeights()
    { return { (void*)this, "bUseSpawnPointWeights" }; }

};

#endif  // BRZ_SDK_JOGO_ASUPPLYCRATESPAWNINGSETTINGS_H
