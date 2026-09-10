// ==========================================================================
//  ADayCycleManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADAYCYCLEMANAGER_H
#define BRZ_SDK_JOGO_ADAYCYCLEMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USoundBase;

#include "AInfo.h"

struct ADayCycleManager : public AInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADayCycleManager"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.AdjustStructureItemInsulation_Implementation(AShooterCharacter*,UPrimalItem*,EP
    // endereco: cache_pdb_25090264
    float AdjustStructureItemInsulation_Implementation(void* a0, void* a1, int a2, float a3) const
    {
        return NativeCall<float, void*, void*, int, float>(this, "ADayCycleManager.AdjustStructureItemInsulation_Implementation(AShooterCharacter*,UPrimalItem*,EPrimalItemStat::Type,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.AllowStructureActivation(APrimalStructure*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AllowStructureActivation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ADayCycleManager.AllowStructureActivation(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.AllowWeaponFiring(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool AllowWeaponFiring(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ADayCycleManager.AllowWeaponFiring(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   ADayCycleManager.AttemptWeaponFiring(AShooterWeapon*)
    // endereco: casamento de bytes com a build de referencia
    void AttemptWeaponFiring(void* a0) const
    {
        NativeCall<void, void*>(this, "ADayCycleManager.AttemptWeaponFiring(AShooterWeapon*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   ADayCycleManager.BPPostDrawSpawnMap(AShooterPlayerController*,UCanvas*,UE::Math::TVector2<double
    // endereco: casamento de bytes com a build de referencia
    void BPPostDrawSpawnMap(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "ADayCycleManager.BPPostDrawSpawnMap(AShooterPlayerController*,UCanvas*,UE::Math::TVector2<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "ADayCycleManager.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "ADayCycleManager.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.GetDayNumberString(bool)
    // endereco: casamento de bytes com a build de referencia
    void GetDayNumberString(void* retorno, bool a0) const
    {
        NativeCall<void, void*, bool>(this, "ADayCycleManager.GetDayNumberString(bool)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.GetDayNumberString_Implementation(bool)
    // endereco: casamento de bytes com a build de referencia
    void GetDayNumberString_Implementation(void* retorno, bool a0) const
    {
        NativeCall<void, void*, bool>(this, "ADayCycleManager.GetDayNumberString_Implementation(bool)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.GetTemperatureAtLocation(UE::Math::TVector<double>,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float GetTemperatureAtLocation(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "ADayCycleManager.GetTemperatureAtLocation(UE::Math::TVector<double>,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.GetWindAtLocation(UE::Math::TVector<double>,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    float GetWindAtLocation(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "ADayCycleManager.GetWindAtLocation(UE::Math::TVector<double>,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.IsRainingAtLocation(UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool IsRainingAtLocation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ADayCycleManager.IsRainingAtLocation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.IsRainingAtLocation_Implementation(UE::Math::TVector<double>)
    // endereco: cache_pdb_25090264
    bool IsRainingAtLocation_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "ADayCycleManager.IsRainingAtLocation_Implementation(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.MatineeUpdated()
    // endereco: casamento de bytes com a build de referencia
    void MatineeUpdated() const
    {
        NativeCall<void>(this, "ADayCycleManager.MatineeUpdated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.PostInitializeComponents()
    // classe: a funcao mora em AActor, e ADayCycleManager herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AActor.PostInitializeComponents()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   ADayCycleManager.SetTimeOfDay(int,int,int)
    // endereco: casamento de bytes com a build de referencia
    void SetTimeOfDay(int a0, int a1, int a2) const
    {
        NativeCall<void, int, int, int>(this, "ADayCycleManager.SetTimeOfDay(int,int,int)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   ADayCycleManager.ShooterCharacterPossessed(AShooterCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ShooterCharacterPossessed(void* a0) const
    {
        NativeCall<void, void*>(this, "ADayCycleManager.ShooterCharacterPossessed(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   ADayCycleManager.ShooterCharacterSpawned(AShooterCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ShooterCharacterSpawned(void* a0) const
    {
        NativeCall<void, void*>(this, "ADayCycleManager.ShooterCharacterSpawned(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADayCycleManager.Tick(float)
    // classe: a funcao mora em AActor, e ADayCycleManager herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AActor.Tick(float)", a0);
    }

    int& ActiveLightingSequenceField() const
    { return *GetNativePointerField<int*>(this, "ADayCycleManager.ActiveLightingSequence"); }
    BrzCampoPonteiro AtmosphericFogMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.AtmosphericFogMultiplier")); }
    float& BaseTemperatureField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseTemperature"); }
    float& BaseWindField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.BaseWind"); }
    float& CurrentTimeField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.CurrentTime"); }
    float& DayTimeEndField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeEnd"); }
    float& DayTimeLengthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeLengthMultiplier"); }
    float& DayTimeStartField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.DayTimeStart"); }
    TArray<void*>& GenesisTradableOptionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ADayCycleManager.GenesisTradableOptions"); }
    BrzCampoPonteiro GenesisTradableOptionsSoftPathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.GenesisTradableOptionsSoftPath")); }
    TArray<void*>& GivePlayersBuffAssetsOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ADayCycleManager.GivePlayersBuffAssetsOnSpawn"); }
    TArray<void*>& GivePlayersBuffsOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ADayCycleManager.GivePlayersBuffsOnSpawn"); }
    float& GlobalBakeAndStreamIBLMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalBakeAndStreamIBLMultiplier"); }
    float& GlobalGroundColorMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalGroundColorMultiplier"); }
    float& GlobalIBLCaptureBrightnessField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalIBLCaptureBrightness"); }
    float& GlobalSkyColorMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalSkyColorMultiplier"); }
    float& GlobalTrueSkyBrightnessField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.GlobalTrueSkyBrightness"); }
    BrzCampoPonteiro GlobalTrueSkyColorMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.GlobalTrueSkyColorMultiplier")); }
    BrzCampoPonteiro GustWindVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.GustWindVelocity")); }
    BrzCampoPonteiro HexagonVFXActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.HexagonVFXActorClass")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveLightingSequence` +4, medido na build 25090264
    //  (offset absoluto medido: 0x5C4; confianca alta)
    float& LastCurrentTimeField() const
    { return BrzCampoAncorado<float>(this, "ActiveLightingSequence", 4); }
    BrzCampoPonteiro MaxWindVelocityScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.MaxWindVelocityScale")); }
    BrzCampoPonteiro NewLightingSequenceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.NewLightingSequence")); }
    BrzCampoPonteiro OnDayChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.OnDayChange")); }
    BrzCampoPonteiro OnHazardChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.OnHazardChange")); }
    BrzCampoPonteiro OnStartDaytimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.OnStartDaytime")); }
    BrzCampoPonteiro OnStartNighttimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.OnStartNighttime")); }
    TArray<void*>& PreventBuffClassesInDayCycleLevelField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "ADayCycleManager.PreventBuffClassesInDayCycleLevel"); }
    BrzCampoPonteiro PrimaryWindVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ADayCycleManager.PrimaryWindVelocity")); }
    float& RainAmountField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.RainAmount"); }
    float& SM4DirLightMultField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4DirLightMult"); }
    float& SM4SkyLightMultField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SM4SkyLightMult"); }
    float& SkyIBLIntensityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyIBLIntensityMultiplier"); }
    float& SkyWeatherSequenceBlend_ColdField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Cold"); }
    float& SkyWeatherSequenceBlend_FogField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Fog"); }
    float& SkyWeatherSequenceBlend_HotField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Hot"); }
    float& SkyWeatherSequenceBlend_NormalField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Normal"); }
    float& SkyWeatherSequenceBlend_RainyField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SkyWeatherSequenceBlend_Rainy"); }
    float& SnowAmountField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.SnowAmount"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ActiveLightingSequence` +8, medido na build 25090264
    //  (offset absoluto medido: 0x5C8; confianca alta)
    float& SoundLastCurrentTimeField() const
    { return BrzCampoAncorado<float>(this, "ActiveLightingSequence", 8); }
    USoundBase*& Sound_TransitionToMidDayField() const
    { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToMidDay"); }
    float& Sound_TransitionToMidDayTimeField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMidDayTime"); }
    USoundBase*& Sound_TransitionToMorningField() const
    { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToMorning"); }
    float& Sound_TransitionToMorningTimeField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToMorningTime"); }
    USoundBase*& Sound_TransitionToNightField() const
    { return *GetNativePointerField<USoundBase**>(this, "ADayCycleManager.Sound_TransitionToNight"); }
    float& Sound_TransitionToNightTimeField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.Sound_TransitionToNightTime"); }
    float& TrueSkyTimeField() const
    { return *GetNativePointerField<float*>(this, "ADayCycleManager.TrueSkyTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `HexagonVFXActorClass` +9, medido na build 25090264
    //  (offset absoluto medido: 0x651; confianca alta)
    bool& bFirstDaytimeField() const
    { return BrzCampoAncorado<bool>(this, "HexagonVFXActorClass", 9); }
    bool& bIsRainingField() const
    { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bIsRaining"); }
    bool& bLastReplicatedIsRainingField() const
    { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bLastReplicatedIsRaining"); }
    bool& bUseBPOverrideItemAutoDecreaseDurabilityField() const
    { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUseBPOverrideItemAutoDecreaseDurability"); }
    bool& bUsesWindField() const
    { return *GetNativePointerField<bool*>(this, "ADayCycleManager.bUsesWind"); }
    int& theDayNumberToMakeSerilizationWorkField() const
    { return *GetNativePointerField<int*>(this, "ADayCycleManager.theDayNumberToMakeSerilizationWork"); }
    BitFieldValue<bool, unsigned __int32> bCheckForStructureActivation()
    { return { (void*)this, "bCheckForStructureActivation" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForWeaponFiring()
    { return { (void*)this, "bCheckForWeaponFiring" }; }
    BitFieldValue<bool, unsigned __int32> bHideSupplyCrates()
    { return { (void*)this, "bHideSupplyCrates" }; }
    BitFieldValue<bool, unsigned __int32> bIsRaining()
    { return { (void*)this, "bIsRaining" }; }
    BitFieldValue<bool, unsigned __int32> bLastReplicatedIsRaining()
    { return { (void*)this, "bLastReplicatedIsRaining" }; }
    BitFieldValue<bool, unsigned __int32> bLastReplicatedIsSnowing()
    { return { (void*)this, "bLastReplicatedIsSnowing" }; }
    BitFieldValue<bool, unsigned __int32> bShowWindVelocityDebug()
    { return { (void*)this, "bShowWindVelocityDebug" }; }
    BitFieldValue<bool, unsigned __int32> bTailWindEnabled()
    { return { (void*)this, "bTailWindEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideItemAutoDecreaseDurability()
    { return { (void*)this, "bUseBPOverrideItemAutoDecreaseDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWind()
    { return { (void*)this, "bUsesWind" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWindVelocity()
    { return { (void*)this, "bUsesWindVelocity" }; }

};

#endif  // BRZ_SDK_JOGO_ADAYCYCLEMANAGER_H
