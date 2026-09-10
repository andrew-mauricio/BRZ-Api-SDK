// ==========================================================================
//  APrimalWorldSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWORLDSETTINGS_H
#define BRZ_SDK_JOGO_APRIMALWORLDSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMatineeActorManager;
struct APrimalBuff;
struct FName;
struct UAnimMontage;
struct UClass;
struct UDeferredMovementContext;
struct UMaterialInterface;
struct UObject;
struct UPrimalWorldSettingsEventOverrides;
struct USoundBase;
struct UTexture2D;

#include "AARKNXWorldSettings.h"

struct APrimalWorldSettings : public AARKNXWorldSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWorldSettings"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.AddDynamicResourceReference(UObject*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AddDynamicResourceReference(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWorldSettings.AddDynamicResourceReference(UObject*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.AddReferencedObjects(UObject*,FReferenceCollector&)
    // endereco: casamento de bytes com a build de referencia
    static void AddReferencedObjects(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "APrimalWorldSettings.AddReferencedObjects(UObject*,FReferenceCollector&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.DeferFXComponentActivation(UFXSystemComponent*)
    // endereco: casamento de bytes com a build de referencia
    void DeferFXComponentActivation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalWorldSettings.DeferFXComponentActivation(UFXSystemComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.EndPlay(EEndPlayReason::Type)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=127+grafo=3/5]]
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "APrimalWorldSettings.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.ExecutePlatformSpecificCommands(UWorld*,TMap<ECVARTargetPlatformEnum,FPlatf
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExecutePlatformSpecificCommands(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalWorldSettings.ExecutePlatformSpecificCommands(UWorld*,TMap<ECVARTargetPlatformEnum,FPlatformCommandsToExecute,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ECVARTargetPlatformEnum,FPlatformCommandsToExecute,0>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.FixupDeltaSeconds(float,float)
    // endereco: casamento de bytes com a build de referencia
    float FixupDeltaSeconds(float a0, float a1) const
    {
        return NativeCall<float, float, float>(this, "APrimalWorldSettings.FixupDeltaSeconds(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetDefaultDestroyedInstanceActor(UMeshComponent*)
    // endereco: casamento de bytes com a build de referencia
    UClass* GetDefaultDestroyedInstanceActor(void* a0) const
    {
        return NativeCall<UClass*, void*>(this, "APrimalWorldSettings.GetDefaultDestroyedInstanceActor(UMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetEffectiveTimeDilation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetEffectiveTimeDilation() const
    {
        return NativeCall<float>(this, "APrimalWorldSettings.GetEffectiveTimeDilation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.GetExtraStaticMeshSocketByName(UStaticMesh*,FName&,FFakeStaticMeshSocketDat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetExtraStaticMeshSocketByName(void* a0, const FName& a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalWorldSettings.GetExtraStaticMeshSocketByName(UStaticMesh*,FName&,FFakeStaticMeshSocketData&)", a0, const_cast<FName*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetExtraStaticMeshSocketByName(void* a0, FName* a1, void* a2) const
    { return GetExtraStaticMeshSocketByName(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetFoliageAndFluidSimEnabled()
    // endereco: casamento de bytes com a build de referencia
    bool GetFoliageAndFluidSimEnabled() const
    {
        return NativeCall<bool>(this, "APrimalWorldSettings.GetFoliageAndFluidSimEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetHarvestComponentHealthScale(UClass*)
    // endereco: casamento de bytes com a build de referencia
    float GetHarvestComponentHealthScale(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalWorldSettings.GetHarvestComponentHealthScale(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetItemGlobalSpoilingTimeMultiplier(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    float GetItemGlobalSpoilingTimeMultiplier(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalWorldSettings.GetItemGlobalSpoilingTimeMultiplier(UPrimalItem*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.GetMissionMetaData(FName,FMissionMetaData&)
    // endereco: thunk
    bool GetMissionMetaData(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalWorldSettings.GetMissionMetaData(FName,FMissionMetaData&)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalWorldSettings.GetNPCRandomSpawnClass(TArray<FClassNameReplacement,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void** GetNPCRandomSpawnClass(void* a0, void* a1, void* a2, bool a3) const
    {
        return NativeCall<void**, void*, void*, void*, bool>(this, "APrimalWorldSettings.GetNPCRandomSpawnClass(TArray<FClassNameReplacement,TSizedDefaultAllocator<32>>&,TArray<FClassRemappingWeight,TSizedDefaultAllocator<32>>&,TSoftClassPtr<APrimalDinoCharacter>,bool)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.HandleDeferredTickActors(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void HandleDeferredTickActors(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWorldSettings.HandleDeferredTickActors(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.InitializePrimalGameDataForWorld()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializePrimalGameDataForWorld() const
    {
        return NativeCall<void*>(this, "APrimalWorldSettings.InitializePrimalGameDataForWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.IsAllowedInLevelBounds(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    bool IsAllowedInLevelBounds(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalWorldSettings.IsAllowedInLevelBounds(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.IsPointReallyUnderwater(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPointReallyUnderwater(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalWorldSettings.IsPointReallyUnderwater(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.OnInitWorld(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnInitWorld(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWorldSettings.OnInitWorld(UWorld*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.PreGameplaySetup()
    // endereco: casamento de bytes com a build de referencia
    void PreGameplaySetup() const
    {
        NativeCall<void>(this, "APrimalWorldSettings.PreGameplaySetup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.RemoveDeferredActivationComponent(UActorComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveDeferredActivationComponent(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalWorldSettings.RemoveDeferredActivationComponent(UActorComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.SetTimeDilation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    float SetTimeDilation(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalWorldSettings.SetTimeDilation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWorldSettings.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWorldSettings.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWorldSettings.UpdateWorldDistanceGlobals()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateWorldDistanceGlobals() const
    {
        return NativeCall<void*>(this, "APrimalWorldSettings.UpdateWorldDistanceGlobals()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWorldSettings.WeakPointerHotfix_GetActorsWithTag(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WeakPointerHotfix_GetActorsWithTag(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalWorldSettings.WeakPointerHotfix_GetActorsWithTag(FName)", a0);
    }

    float& AIOverrideNotifyNeighborsRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AIOverrideNotifyNeighborsRange"); }
    BrzCampoPonteiro ActiveEventOverrideObjectBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.ActiveEventOverrideObjectBlueprint")); }
    UPrimalWorldSettingsEventOverrides*& ActiveEventOverridesField() const
    { return *GetNativePointerField<UPrimalWorldSettingsEventOverrides**>(this, "APrimalWorldSettings.ActiveEventOverrides"); }
    BrzCampoPonteiro ActiveEventSpawnActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.ActiveEventSpawnActor")); }
    float& AdditionalDinoHealthBarOffsetYField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AdditionalDinoHealthBarOffsetY"); }
    TArray<void*>& AdditionalFakeStaticMeshSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.AdditionalFakeStaticMeshSockets"); }
    TArray<void*>& AllowDownloadDinoClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.AllowDownloadDinoClasses"); }
    BrzCampoPonteiro AtmosphericFogMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.AtmosphericFogMultiplier")); }
    float& AutoSpectatorNamesMinZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.AutoSpectatorNamesMinZ"); }
    TArray<void*>& AvailableMissionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.AvailableMissions"); }
    TArray<void*>& AvailableMissionsMetaDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.AvailableMissionsMetaData"); }
    int& BobsTallTalesIntroExplorerNoteIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.BobsTallTalesIntroExplorerNoteID"); }
    FString& BobsTallTalesIntroMoviePathField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.BobsTallTalesIntroMoviePath"); }
    int& BobsTallTalesOutroExplorerNoteIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.BobsTallTalesOutroExplorerNoteID"); }
    FString& BobsTallTalesOutroMoviePathField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.BobsTallTalesOutroMoviePath"); }
    TArray<UClass*>& CachedPersistentObjectClassesField() const
    { return *GetNativePointerField<TArray<UClass*>*>(this, "APrimalWorldSettings.CachedPersistentObjectClasses"); }
    float& CarnivoreNaturalTargetingRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.CarnivoreNaturalTargetingRangeMultiplier"); }
    BrzCampoPonteiro CheatTeleportLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.CheatTeleportLocations")); }
    float& ConsoleSM5DirectionalLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5DirectionalLightMultiplier"); }
    float& ConsoleSM5SKyLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ConsoleSM5SKyLightMultiplier"); }
    BrzCampoPonteiro CurrentMinimapDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.CurrentMinimapData")); }
    float& DayCycleSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayCycleSpeedScale"); }
    float& DayTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DayTimeSpeedScale"); }
    FString& DefaultBiomeNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.DefaultBiomeName"); }
    AActor*& DefaultCameraPositionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.DefaultCameraPositionActor"); }
    float& DefaultDeepWaterStartZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultDeepWaterStartZ"); }
    TArray<void*>& DefaultSpawnPointRandomIndicesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.DefaultSpawnPointRandomIndices"); }
    BrzCampoPonteiro DefaultWaterAmbientZoneSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.DefaultWaterAmbientZoneSettings")); }
    float& DefaultWaterLineStartZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DefaultWaterLineStartZ"); }
    BrzCampoPonteiro DefaultWaterReverbSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.DefaultWaterReverbSettings")); }
    BrzCampoPonteiro DeferredFXActivationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.DeferredFXActivations")); }
    UDeferredMovementContext*& DeferredMovementField() const
    { return *GetNativePointerField<UDeferredMovementContext**>(this, "APrimalWorldSettings.DeferredMovement"); }
    BrzCampoPonteiro DeferredTickActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.DeferredTickActors")); }
    float& DinosLerpToMaxRandomBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.DinosLerpToMaxRandomBaseLevel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NonPlayerFacingMissionsMetaData` +336, medido na build 25090264
    //  (offset absoluto medido: 0x2260; confianca baixa)
    TArray<APrimalBuff*>& DisableFootstepParticlesBuffsField() const
    { return BrzCampoAncorado<TArray<APrimalBuff*>>(this, "NonPlayerFacingMissionsMetaData", 336); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheatTeleportLocations` +96, medido na build 25090264
    //  (offset absoluto medido: 0x1DD8; confianca media)
    void*& DynamicExclusionRegionsField() const
    { return BrzCampoAncorado<void*>(this, "CheatTeleportLocations", 96); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheatTeleportLocations` +112, medido na build 25090264
    //  (offset absoluto medido: 0x1DE8; confianca media)
    void*& DynamicNoBuildRegionsField() const
    { return BrzCampoAncorado<void*>(this, "CheatTeleportLocations", 112); }
    TArray<UObject*>& DynamicResourceRefsField() const
    { return *GetNativePointerField<TArray<UObject*>*>(this, "APrimalWorldSettings.DynamicResourceRefs"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CheatTeleportLocations` +80, medido na build 25090264
    //  (offset absoluto medido: 0x1DC8; confianca media)
    TArray<void*>& DynamicUndermeshRegionsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "CheatTeleportLocations", 80); }
    BrzCampoPonteiro EventNameToActiveEventOverrideObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.EventNameToActiveEventOverrideObject")); }
    TArray<void*>& ExtraReferencesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.ExtraReferences"); }
    float& FirstSpawnNotTargetableForTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.FirstSpawnNotTargetableForTime"); }
    float& ForceCameraTransitionTimeUponPossessionField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.ForceCameraTransitionTimeUponPossession"); }
    FString& ForceLoadMapNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.ForceLoadMapName"); }
    BrzCampoPonteiro GlobalApexTrophyListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.GlobalApexTrophyList")); }
    float& GlobalBakeAndStreamIBLMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalBakeAndStreamIBLMultiplier"); }
    TArray<void*>& GlobalCuddleFoodListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.GlobalCuddleFoodList"); }
    float& GlobalDinoCountValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalDinoCountValue"); }
    float& GlobalHarvestAmountMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestAmountMultiplier"); }
    float& GlobalHarvestHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalHarvestHealthMultiplier"); }
    float& GlobalIBLCaptureBrightnessField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalIBLCaptureBrightness"); }
    BrzCampoPonteiro GlobalMaterialParamOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.GlobalMaterialParamOverrides")); }
    float& GlobalProxyDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalProxyDistanceMultiplier"); }
    TArray<void*>& GlobalSpoilingTimeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.GlobalSpoilingTimeMultipliers"); }
    FieldArray<float> GlobalStatusAdjustmentRateMultipliersNegativeField() const
    { return { (void*)this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersNegative" }; }
    FieldArray<float> GlobalStatusAdjustmentRateMultipliersPositiveField() const
    { return { (void*)this, "APrimalWorldSettings.GlobalStatusAdjustmentRateMultipliersPositive" }; }
    float& GlobalViewDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GlobalViewDistanceMultiplier"); }
    int& GloballyLimitedParticleNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.GloballyLimitedParticleNum"); }
    BrzCampoPonteiro GraphClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.GraphClass")); }
    float& GroundColorMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.GroundColorMultiplier"); }
    TArray<void*>& HarvestComponentHealthScaleExactMatchField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatch"); }
    TArray<void*>& HarvestComponentHealthScaleExactMatchValueField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleExactMatchValue"); }
    TArray<void*>& HarvestComponentHealthScaleParentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParents"); }
    TArray<void*>& HarvestComponentHealthScaleParentsValueField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.HarvestComponentHealthScaleParentsValue"); }
    float& HerbivoreNaturalTargetingRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.HerbivoreNaturalTargetingRangeMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NonPlayerFacingMissionsMetaData` +88, medido na build 25090264
    //  (offset absoluto medido: 0x2168; confianca media)
    void*& HumanFemaleAnimMontageOverridesField() const
    { return BrzCampoAncorado<void*>(this, "NonPlayerFacingMissionsMetaData", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NonPlayerFacingMissionsMetaData` +248, medido na build 25090264
    //  (offset absoluto medido: 0x2208; confianca baixa)
    void*& HumanMaleAnimMontageOverridesField() const
    { return BrzCampoAncorado<void*>(this, "NonPlayerFacingMissionsMetaData", 248); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `NonPlayerFacingMissionsMetaData` +168, medido na build 25090264
    //  (offset absoluto medido: 0x21B8; confianca baixa)
    void*& HumanMaleAnimSequenceOverridesField() const
    { return BrzCampoAncorado<void*>(this, "NonPlayerFacingMissionsMetaData", 168); }
    int& IntroExplorerNoteIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.IntroExplorerNoteID"); }
    FString& IntroFemaleMoviePathField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.IntroFemaleMoviePath"); }
    FString& IntroMoviePathField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.IntroMoviePath"); }
    TArray<void*>& InventoryComponentAppendsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.InventoryComponentAppends"); }
    TArray<void*>& InventoryComponentAppendsNonDedicatedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.InventoryComponentAppendsNonDedicated"); }
    float& LatitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeOrigin"); }
    float& LatitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LatitudeScale"); }
    AActor*& LevelBlueprintContainerActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalWorldSettings.LevelBlueprintContainerActor"); }
    TArray<void*>& LevelUseNPCClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.LevelUseNPCClasses"); }
    int& LoadForceRespawnDinosVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.LoadForceRespawnDinosVersion"); }
    float& LongitudeOriginField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeOrigin"); }
    float& LongitudeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.LongitudeScale"); }
    TArray<void*>& MainMapDataLayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.MainMapDataLayers"); }
    FString& MapFriendlyNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.MapFriendlyName"); }
    AMatineeActorManager*& MatineeManagerField() const
    { return *GetNativePointerField<AMatineeActorManager**>(this, "APrimalWorldSettings.MatineeManager"); }
    float& MaxFallSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxFallSpeedMultiplier"); }
    float& MaxKillXField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillX"); }
    float& MaxKillYField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillY"); }
    float& MaxKillZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxKillZ"); }
    float& MaxMusicVolumeOnVolumesField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxMusicVolumeOnVolumes"); }
    float& MaxUnderWorldTraceRangeZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaxUnderWorldTraceRangeZ"); }
    float& MaximumPlayerFlyZField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MaximumPlayerFlyZ"); }
    BrzCampoPonteiro MetaTagInfoClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.MetaTagInfoClass")); }
    float& MinKillXField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillX"); }
    float& MinKillYField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.MinKillY"); }
    BrzCampoPonteiro MissionDataBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.MissionDataBuff")); }
    BrzCampoPonteiro MissionMultiUseEntryToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.MissionMultiUseEntryToolTipWidget")); }
    TArray<void*>& NPCRandomSpawnClassWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.NPCRandomSpawnClassWeights"); }
    float& NegativeHyperthermalInsulationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHyperthermalInsulationMultiplier"); }
    float& NegativeHypothermalInsulationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NegativeHypothermalInsulationMultiplier"); }
    float& NightTimeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NightTimeSpeedScale"); }
    float& NoTrueSkySM5DirectionalLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5DirectionalLightMultiplier"); }
    float& NoTrueSkySM5SKyLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.NoTrueSkySM5SKyLightMultiplier"); }
    TArray<void*>& NonPlayerFacingMissionsMetaDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.NonPlayerFacingMissionsMetaData"); }
    int& OutroExplorerNoteIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.OutroExplorerNoteID"); }
    FString& OutroMoviePathField() const
    { return *GetNativePointerField<FString*>(this, "APrimalWorldSettings.OutroMoviePath"); }
    BrzCampoPonteiro OverrideCharacterCreationSceneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.OverrideCharacterCreationScene")); }
    USoundBase*& OverrideCombatMusicDayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay"); }
    USoundBase*& OverrideCombatMusicDay_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicDay_Heavy"); }
    USoundBase*& OverrideCombatMusicNightField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight"); }
    USoundBase*& OverrideCombatMusicNight_HeavyField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.OverrideCombatMusicNight_Heavy"); }
    float& OverrideDifficultyMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.OverrideDifficultyMax"); }
    UAnimMontage*& OverrideFirstSpawnAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideFirstSpawnAnim"); }
    TArray<void*>& OverridePlayerSpawnRegionDifficultiesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionDifficulties"); }
    TArray<void*>& OverridePlayerSpawnRegionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegions"); }
    TArray<void*>& OverridePlayerSpawnRegionsHideInSpawnUIField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.OverridePlayerSpawnRegionsHideInSpawnUI"); }
    UAnimMontage*& OverrideSpawnAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalWorldSettings.OverrideSpawnAnim"); }
    UTexture2D*& OverrideUIMapTextureEmptyField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureEmpty"); }
    UTexture2D*& OverrideUIMapTextureFilledField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureFilled"); }
    UTexture2D*& OverrideUIMapTextureSmallField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideUIMapTextureSmall"); }
    UTexture2D*& OverrideWeaponMapTextureEmptyField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureEmpty"); }
    UTexture2D*& OverrideWeaponMapTextureFilledField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalWorldSettings.OverrideWeaponMapTextureFilled"); }
    BrzCampoPonteiro OverrideWorldBuffDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.OverrideWorldBuffData")); }
    UMaterialInterface*& Override_PostProcess_ColorLUTField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalWorldSettings.Override_PostProcess_ColorLUT"); }
    USoundBase*& Override_Sound_ReconnectToCharacterField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.Override_Sound_ReconnectToCharacter"); }
    FName& PlacingStructureToggleMeshTagVisibilityField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWorldSettings.PlacingStructureToggleMeshTagVisibility"); }
    BrzCampoPonteiro PlatformSpecificCommandsOnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.PlatformSpecificCommandsOnEndPlay")); }
    BrzCampoPonteiro PlatformSpecificCommandsOnInitWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.PlatformSpecificCommandsOnInitWorld")); }
    BrzCampoPonteiro PlayFirstSpawnIntroVOField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.PlayFirstSpawnIntroVO")); }
    float& PositiveHyperthermalInsulationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHyperthermalInsulationMultiplier"); }
    float& PositiveHypothermalInsulationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.PositiveHypothermalInsulationMultiplier"); }
    TArray<void*>& PreventStructureClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.PreventStructureClasses"); }
    BrzCampoPonteiro PrimalGameDataOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.PrimalGameDataOverride")); }
    float& RegularWildDinoDamageVersusTamesMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoDamageVersusTamesMultiplier"); }
    float& RegularWildDinoResistanceVersusTamesMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoResistanceVersusTamesMultiplier"); }
    float& RegularWildDinoXPMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.RegularWildDinoXPMultiplier"); }
    int& RequiresIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.RequiresID"); }
    float& SM4DirectionalLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4DirectionalLightMultiplier"); }
    float& SM4SKyLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM4SKyLightMultiplier"); }
    float& SM5DirectionalLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5DirectionalLightMultiplier"); }
    float& SM5SKyLightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SM5SKyLightMultiplier"); }
    BrzCampoPonteiro ScalabilityOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.ScalabilityOverrides")); }
    TArray<void*>& ServerForceReplicateObjectClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.ServerForceReplicateObjectClasses"); }
    TArray<void*>& SinglePlayerNPCRandomSpawnClassWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalWorldSettings.SinglePlayerNPCRandomSpawnClassWeights"); }
    float& SkyColorMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyColorMultiplier"); }
    float& SkyIBLIntensityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.SkyIBLIntensityMultiplier"); }
    BrzCampoPonteiro SparseDataOverrideManagerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.SparseDataOverrideManager")); }
    BrzCampoPonteiro SpawnAnimationLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.SpawnAnimationLocationOffset")); }
    BrzCampoPonteiro SpawnLevelBoundsMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.SpawnLevelBoundsMax")); }
    BrzCampoPonteiro SpawnLevelBoundsMinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.SpawnLevelBoundsMin")); }
    USoundBase*& SplitscreenUnderwaterSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalWorldSettings.SplitscreenUnderwaterSound"); }
    //  no cache antigo este campo se chamava TamedDinos.
    //  nesta build ele e' `CheatTeleportLocations` — resolve por NOME.
    BrzCampoPonteiro TamedDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.CheatTeleportLocations")); }
    float& TheWorldGammaOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TheWorldGammaOffset"); }
    BrzCampoPonteiro TrueSkyColorMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.TrueSkyColorMultiplier")); }
    float& TrueSkyIntensityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalWorldSettings.TrueSkyIntensityMultiplier"); }
    BrzCampoPonteiro UnderWaterPostProcessComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.UnderWaterPostProcessComponent")); }
    BrzCampoPonteiro UnlockPersistentItemsOnAscendAlphaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.UnlockPersistentItemsOnAscendAlpha")); }
    BrzCampoPonteiro UnlockPersistentItemsOnAscendBetaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.UnlockPersistentItemsOnAscendBeta")); }
    BrzCampoPonteiro UnlockPersistentItemsOnAscendGammaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.UnlockPersistentItemsOnAscendGamma")); }
    TArray<AActor*>& UnregisteredDeferredTickActorsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "APrimalWorldSettings.UnregisteredDeferredTickActors"); }
    int& ValidEngramGroupsBitMaskField() const
    { return *GetNativePointerField<int*>(this, "APrimalWorldSettings.ValidEngramGroupsBitMask"); }
    BrzCampoPonteiro VolumetrioFogCanvasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.VolumetrioFogCanvas")); }
    BrzCampoPonteiro WaterPlaneDataAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.WaterPlaneDataAsset")); }
    BrzCampoPonteiro WorldVO_DataAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.WorldVO_DataAsset")); }
    bool& bAllowRidingFliersField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bAllowRidingFliers"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MatineeManager` +72, medido na build 25090264
    //  (offset absoluto medido: 0x1D18; confianca media)
    void*& bAssignedUnderwaterReverbField() const
    { return BrzCampoAncorado<void*>(this, "MatineeManager", 72); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `GlobalDinoCountValue` +8, medido na build 25090264
    //  (offset absoluto medido: 0x2270; confianca alta)
    void*& bDidPreGameplaySetupField() const
    { return BrzCampoAncorado<void*>(this, "GlobalDinoCountValue", 8); }
    bool& bDisableFirstPersonRidingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bDisableFirstPersonRiding"); }
    bool& bEditorDoForceDisableNPCSpawnersField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorDoForceDisableNPCSpawners"); }
    bool& bEditorForceSpawnCharacterAsFemaleField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bEditorForceSpawnCharacterAsFemale"); }
    bool& bFlyersStructurePreventionDismountingUnderTerrainOnlyField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bFlyersStructurePreventionDismountingUnderTerrainOnly"); }
    bool& bForceEnablePhysicsSimulationField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnablePhysicsSimulation"); }
    bool& bForceEnableTurretLimitField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceEnableTurretLimit"); }
    bool& bForceSpawnAnimationTestField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bForceSpawnAnimationTest"); }
    bool& bHideMissionSortByDistanceField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bHideMissionSortByDistance"); }
    bool& bMapSupportsMissionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bMapSupportsMissions"); }
    bool& bScaleDinoFloatingHUDByMeshSizeField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bScaleDinoFloatingHUDByMeshSize"); }
    //  no cache antigo este campo se chamava bSetupFemaleAnimOverrides.
    //  nesta build ele e' `NonPlayerFacingMissionsMetaData` — resolve por NOME.
    BrzCampoPonteiro bSetupFemaleAnimOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWorldSettings.NonPlayerFacingMissionsMetaData")); }
    bool& bUseMissionsMetaDataField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWorldSettings.bUseMissionsMetaData"); }
    BitFieldValue<bool, unsigned __int32> bAllowRagdolls()
    { return { (void*)this, "bAllowRagdolls" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingFliers()
    { return { (void*)this, "bAllowRidingFliers" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStartMissionsFromAnywhere()
    { return { (void*)this, "bAllowStartMissionsFromAnywhere" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAllASAFluidSim()
    { return { (void*)this, "bDisableAllASAFluidSim" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFirstPersonRiding()
    { return { (void*)this, "bDisableFirstPersonRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDisableReplicationGraph()
    { return { (void*)this, "bDisableReplicationGraph" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureObstructedByWorldGeometryCheck()
    { return { (void*)this, "bDisableStructureObstructedByWorldGeometryCheck" }; }
    BitFieldValue<bool, unsigned __int32> bEditorDoForceDisableNPCSpawners()
    { return { (void*)this, "bEditorDoForceDisableNPCSpawners" }; }
    BitFieldValue<bool, unsigned __int32> bEditorEnableNPCSpawners()
    { return { (void*)this, "bEditorEnableNPCSpawners" }; }
    BitFieldValue<bool, unsigned __int32> bEditorForceSpawnCharacterAsFemale()
    { return { (void*)this, "bEditorForceSpawnCharacterAsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bEnforceSingleBiomeBuff()
    { return { (void*)this, "bEnforceSingleBiomeBuff" }; }
    BitFieldValue<bool, unsigned __int32> bFlyersStructurePreventionDismountingAnywhere()
    { return { (void*)this, "bFlyersStructurePreventionDismountingAnywhere" }; }
    BitFieldValue<bool, unsigned __int32> bFlyersStructurePreventionDismountingUnderTerrainOnly()
    { return { (void*)this, "bFlyersStructurePreventionDismountingUnderTerrainOnly" }; }
    BitFieldValue<bool, unsigned __int32> bForceDinoDrawHUD()
    { return { (void*)this, "bForceDinoDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDinoHighQualityAttacks()
    { return { (void*)this, "bForceDinoHighQualityAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bForceEnablePhysicsSimulation()
    { return { (void*)this, "bForceEnablePhysicsSimulation" }; }
    BitFieldValue<bool, unsigned __int32> bForceEnableTurretLimit()
    { return { (void*)this, "bForceEnableTurretLimit" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventPhysicsSimulation()
    { return { (void*)this, "bForcePreventPhysicsSimulation" }; }
    BitFieldValue<bool, unsigned __int32> bForceSpawnAnimationTest()
    { return { (void*)this, "bForceSpawnAnimationTest" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateTerrain()
    { return { (void*)this, "bGenerateTerrain" }; }
    BitFieldValue<bool, unsigned __int32> bHideMissionSortByDistance()
    { return { (void*)this, "bHideMissionSortByDistance" }; }
    BitFieldValue<bool, unsigned __int32> bHideMissionUI()
    { return { (void*)this, "bHideMissionUI" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreBiomeWind()
    { return { (void*)this, "bIgnoreBiomeWind" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreInMeshCheckingUnderwater()
    { return { (void*)this, "bIgnoreInMeshCheckingUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWindStructureMinClamp()
    { return { (void*)this, "bIgnoreWindStructureMinClamp" }; }
    BitFieldValue<bool, unsigned __int32> bIsBTT2Intro()
    { return { (void*)this, "bIsBTT2Intro" }; }
    BitFieldValue<bool, unsigned __int32> bLandscapeStreaming()
    { return { (void*)this, "bLandscapeStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bMapSupportsMissions()
    { return { (void*)this, "bMapSupportsMissions" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterCreationPreviewScene()
    { return { (void*)this, "bOverrideCharacterCreationPreviewScene" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLongitudeAndLatitude()
    { return { (void*)this, "bOverrideLongitudeAndLatitude" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideMaxMusicVolumeOnVolumes()
    { return { (void*)this, "bOverrideMaxMusicVolumeOnVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bPlayBTTIntroFirst()
    { return { (void*)this, "bPlayBTTIntroFirst" }; }
    BitFieldValue<bool, unsigned __int32> bPlayPersistentPlayer()
    { return { (void*)this, "bPlayPersistentPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventGlobalNonEventSpawnOverrides()
    { return { (void*)this, "bPreventGlobalNonEventSpawnOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bSP_DeferZoneSpawnVolumeSetup_UntilPlayerSpawn()
    { return { (void*)this, "bSP_DeferZoneSpawnVolumeSetup_UntilPlayerSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bScaleDinoFloatingHUDByMeshSize()
    { return { (void*)this, "bScaleDinoFloatingHUDByMeshSize" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnDataChanelVFX()
    { return { (void*)this, "bSpawnDataChanelVFX" }; }
    BitFieldValue<bool, unsigned __int32> bUseMissions()
    { return { (void*)this, "bUseMissions" }; }
    BitFieldValue<bool, unsigned __int32> bUseMissionsMetaData()
    { return { (void*)this, "bUseMissionsMetaData" }; }
    BitFieldValue<bool, unsigned __int32> bUseSpawnLevelBounds()
    { return { (void*)this, "bUseSpawnLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bWaterDinosUseFlightBlocking()
    { return { (void*)this, "bWaterDinosUseFlightBlocking" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWORLDSETTINGS_H
