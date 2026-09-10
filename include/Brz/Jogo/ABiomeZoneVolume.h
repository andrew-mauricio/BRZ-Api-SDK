// ==========================================================================
//  ABiomeZoneVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ABIOMEZONEVOLUME_H
#define BRZ_SDK_JOGO_ABIOMEZONEVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct APhysicsVolume;
struct USoundBase;

#include "AActor.h"

struct ABiomeZoneVolume : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ABiomeZoneVolume"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.EggGetOverrideIntervalBetweenUnstasisChances(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=220]]
    float EggGetOverrideIntervalBetweenUnstasisChances(void* a0) const
    {
        return NativeCall<float, void*>(this, "ABiomeZoneVolume.EggGetOverrideIntervalBetweenUnstasisChances(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.EggOverrideChanceToSpawn(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=211]]
    float EggOverrideChanceToSpawn(void* a0) const
    {
        return NativeCall<float, void*>(this, "ABiomeZoneVolume.EggOverrideChanceToSpawn(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75+grafo=4/4]]
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "ABiomeZoneVolume.EndPlay(EEndPlayReason::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.GetBiomeTemperature(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=230]]
    float GetBiomeTemperature(float a0) const
    {
        return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeTemperature(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.GetBiomeWind(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=214]]
    float GetBiomeWind(float a0) const
    {
        return NativeCall<float, float>(this, "ABiomeZoneVolume.GetBiomeWind(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.GetBiomeZoneVolume(UWorld*,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetBiomeZoneVolume(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "ABiomeZoneVolume.GetBiomeZoneVolume(UWorld*,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.GetPhysicsVolumeAtLocation(UWorld*,UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    static AActor* GetPhysicsVolumeAtLocation(void* a0, void* a1, bool a2)
    {
        return NativeCall<AActor*, void*, void*, bool>(nullptr, "ABiomeZoneVolume.GetPhysicsVolumeAtLocation(UWorld*,UE::Math::TVector<double>,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.GetWaterVolumeAtPoint(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,fl
    // endereco: casamento de bytes com a build de referencia
    static APhysicsVolume* GetWaterVolumeAtPoint(void* a0, void* a1, bool a2, float a3, bool a4, bool a5, float a6, float a7)
    {
        return NativeCall<APhysicsVolume*, void*, void*, bool, float, bool, bool, float, float>(nullptr, "ABiomeZoneVolume.GetWaterVolumeAtPoint(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.IsPointInVacuumBase(UWorld*,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    static long long IsPointInVacuumBase(void* a0, void* a1)
    {
        return NativeCall<long long, void*, void*>(nullptr, "ABiomeZoneVolume.IsPointInVacuumBase(UWorld*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.IsPointUnderwater(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,float,
    // endereco: casamento de bytes com a build de referencia
    static bool IsPointUnderwater(void* a0, void* a1, bool a2, float a3, bool a4, bool a5, float a6, float a7)
    {
        return NativeCall<bool, void*, void*, bool, float, bool, bool, float, float>(nullptr, "ABiomeZoneVolume.IsPointUnderwater(UWorld*,UE::Math::TVector<double>,bool,float,bool,bool,float,float)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABiomeZoneVolume.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82+grafo=4/4]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "ABiomeZoneVolume.PostInitializeComponents()");
    }

    float& AboveTemperatureOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetExponent"); }
    float& AboveTemperatureOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetMultiplier"); }
    float& AboveTemperatureOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveTemperatureOffsetThreshold"); }
    float& AboveWindOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetExponent"); }
    float& AboveWindOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetMultiplier"); }
    float& AboveWindOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AboveWindOffsetThreshold"); }
    float& AbsoluteMaxTemperatureField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMaxTemperature"); }
    float& AbsoluteMinTemperatureField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteMinTemperature"); }
    float& AbsoluteTemperatureOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteTemperatureOverride"); }
    float& AbsoluteWindOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.AbsoluteWindOverride"); }
    float& BelowTemperatureOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetExponent"); }
    float& BelowTemperatureOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetMultiplier"); }
    float& BelowTemperatureOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowTemperatureOffsetThreshold"); }
    float& BelowWindOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetExponent"); }
    float& BelowWindOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetMultiplier"); }
    float& BelowWindOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.BelowWindOffsetThreshold"); }
    TArray<void*>& BiomeCustomDatasField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ABiomeZoneVolume.BiomeCustomDatas"); }
    BrzCampoPonteiro BiomeZoneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABiomeZoneVolume.BiomeZone")); }
    FString& BiomeZoneNameField() const
    { return *GetNativePointerField<FString*>(this, "ABiomeZoneVolume.BiomeZoneName"); }
    int& BiomeZonePriorityField() const
    { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.BiomeZonePriority"); }
    BrzCampoPonteiro BuffToGiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABiomeZoneVolume.BuffToGive")); }
    BrzCampoPonteiro BuffToPreventActiveUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ABiomeZoneVolume.BuffToPreventActiveUse")); }
    float& EggChanceToSpawnOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggChanceToSpawnOverride"); }
    float& EggIntervalUnstasisChanceToSpawnOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggIntervalUnstasisChanceToSpawnOverride"); }
    int& EggMaximumNumberOverrideField() const
    { return *GetNativePointerField<int*>(this, "ABiomeZoneVolume.EggMaximumNumberOverride"); }
    float& EggRangeMaximumNumberOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.EggRangeMaximumNumberOverride"); }
    float& FinalTemperatureAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureAddition"); }
    float& FinalTemperatureExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureExponent"); }
    float& FinalTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalTemperatureMultiplier"); }
    float& FinalWindAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindAddition"); }
    float& FinalWindExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindExponent"); }
    float& FinalWindMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.FinalWindMultiplier"); }
    USoundBase*& ForceMusicInBiomeField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.ForceMusicInBiome"); }
    float& MaxMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.MaxMultiplier"); }
    USoundBase*& OverrideCombatMusicDayField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicDay"); }
    USoundBase*& OverrideCombatMusicDay_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicDay_Heavy"); }
    USoundBase*& OverrideCombatMusicNightField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicNight"); }
    USoundBase*& OverrideCombatMusicNight_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneVolume.OverrideCombatMusicNight_Heavy"); }
    TArray<void*>& OverrideEggLimitsDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ABiomeZoneVolume.OverrideEggLimitsDinoClasses"); }
    float& PreOffsetTemperatureAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureAddition"); }
    float& PreOffsetTemperatureExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureExponent"); }
    float& PreOffsetTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetTemperatureMultiplier"); }
    float& PreOffsetWindAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindAddition"); }
    float& PreOffsetWindExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindExponent"); }
    float& PreOffsetWindMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneVolume.PreOffsetWindMultiplier"); }
    FieldArray<float> StatusAdjustmentRateMultipliersNegativeField() const
    { return { (void*)this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersNegative" }; }
    FieldArray<float> StatusAdjustmentRateMultipliersPositiveField() const
    { return { (void*)this, "ABiomeZoneVolume.StatusAdjustmentRateMultipliersPositive" }; }
    bool& bStatusAdjustRateValuesField() const
    { return *GetNativePointerField<bool*>(this, "ABiomeZoneVolume.bStatusAdjustRateValues"); }
    BitFieldValue<bool, unsigned __int32> bPreventCrops()
    { return { (void*)this, "bPreventCrops" }; }
    BitFieldValue<bool, unsigned __int32> bIsOutside()
    { return { (void*)this, "bIsOutside" }; }
    BitFieldValue<bool, unsigned __int32> bRemoveBuffWhenLeavingVolume()
    { return { (void*)this, "bRemoveBuffWhenLeavingVolume" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDayTransitionSounds()
    { return { (void*)this, "bDisableDayTransitionSounds" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyApplyAdjustmentRateValuesOutdoors()
    { return { (void*)this, "bOnlyApplyAdjustmentRateValuesOutdoors" }; }
    BitFieldValue<bool, unsigned __int32> bStatusAdjustRateValues()
    { return { (void*)this, "bStatusAdjustRateValues" }; }

};

#endif  // BRZ_SDK_JOGO_ABIOMEZONEVOLUME_H
