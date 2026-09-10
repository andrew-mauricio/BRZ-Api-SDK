// ==========================================================================
//  ABiomeZoneSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ABIOMEZONESETTINGS_H
#define BRZ_SDK_JOGO_ABIOMEZONESETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;

#include "AActor.h"

struct ABiomeZoneSettings : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ABiomeZoneSettings"); }

    float& AboveTemperatureOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetExponent"); }
    float& AboveTemperatureOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetMultiplier"); }
    float& AboveTemperatureOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AboveTemperatureOffsetThreshold"); }
    float& AbsoluteTemperatureOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.AbsoluteTemperatureOverride"); }
    float& BelowTemperatureOffsetExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetExponent"); }
    float& BelowTemperatureOffsetMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetMultiplier"); }
    float& BelowTemperatureOffsetThresholdField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.BelowTemperatureOffsetThreshold"); }
    FString& BiomeZoneNameField() const
    { return *GetNativePointerField<FString*>(this, "ABiomeZoneSettings.BiomeZoneName"); }
    int& BiomeZonePriorityField() const
    { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.BiomeZonePriority"); }
    float& EggChanceToSpawnOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggChanceToSpawnOverride"); }
    float& EggIntervalUnstasisChanceToSpawnOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggIntervalUnstasisChanceToSpawnOverride"); }
    int& EggMaximumNumberOverrideField() const
    { return *GetNativePointerField<int*>(this, "ABiomeZoneSettings.EggMaximumNumberOverride"); }
    float& EggRangeMaximumNumberOverrideField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.EggRangeMaximumNumberOverride"); }
    float& FinalTemperatureAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureAddition"); }
    float& FinalTemperatureExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureExponent"); }
    float& FinalTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.FinalTemperatureMultiplier"); }
    float& MaxMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.MaxMultiplier"); }
    USoundBase*& OverrideCombatMusicDayField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicDay"); }
    USoundBase*& OverrideCombatMusicDay_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicDay_Heavy"); }
    USoundBase*& OverrideCombatMusicNightField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicNight"); }
    USoundBase*& OverrideCombatMusicNight_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "ABiomeZoneSettings.OverrideCombatMusicNight_Heavy"); }
    TArray<void*>& OverrideEggLimitsDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ABiomeZoneSettings.OverrideEggLimitsDinoClasses"); }
    float& PreOffsetTemperatureAdditionField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureAddition"); }
    float& PreOffsetTemperatureExponentField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureExponent"); }
    float& PreOffsetTemperatureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ABiomeZoneSettings.PreOffsetTemperatureMultiplier"); }
    BitFieldValue<bool, unsigned __int32> bPreventCrops()
    { return { (void*)this, "bPreventCrops" }; }

};

#endif  // BRZ_SDK_JOGO_ABIOMEZONESETTINGS_H
