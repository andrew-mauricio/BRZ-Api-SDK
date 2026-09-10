// ==========================================================================
//  AWorldSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AWORLDSETTINGS_H
#define BRZ_SDK_JOGO_AWORLDSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APlayerState;
struct UNavigationSystemConfig;
struct USoundMix;
struct UWorldPartition;

#include "ABasePrimalWorldSettings.h"

struct AWorldSettings : public ABasePrimalWorldSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AWorldSettings"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.AdjustNumberOfBookmarks()
    // endereco: casamento de bytes com a build de referencia
    void AdjustNumberOfBookmarks() const
    {
        NativeCall<void>(this, "AWorldSettings.AdjustNumberOfBookmarks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math:
    // endereco: casamento de bytes com a build de referencia
    char CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(void* a0, void* a1) const
    {
        return NativeCall<char, void*, void*>(this, "AWorldSettings.CanSpawnANewDestructableActor_AndIfSoDestroyFurthestActiveActorIfNeeded(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.FixupDeltaSeconds(float,float)
    // endereco: casamento de bytes com a build de referencia
    float FixupDeltaSeconds(float a0, float a1) const
    {
        return NativeCall<float, float, float>(this, "AWorldSettings.FixupDeltaSeconds(float,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.GetAISystemClassName()
    // endereco: casamento de bytes com a build de referencia
    void GetAISystemClassName(void* retorno) const
    {
        NativeCall<void, void*>(this, "AWorldSettings.GetAISystemClassName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.GetAssetUserDataArray()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro GetAssetUserDataArray() const
    {
        return NativeCall<void*>(this, "AWorldSettings.GetAssetUserDataArray()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.GetGravityZ()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=49]]
    float GetGravityZ() const
    {
        return NativeCall<float>(this, "AWorldSettings.GetGravityZ()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AWorldSettings.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldSettings.GetWorldPartition()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldPartition() const
    {
        return NativeCall<void*>(this, "AWorldSettings.GetWorldPartition()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldSettings.IsNavigationSystemEnabled()
    // endereco: cache_pdb_25090264
    BrzPonteiro IsNavigationSystemEnabled() const
    {
        return NativeCall<void*>(this, "AWorldSettings.IsNavigationSystemEnabled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.NotifyBeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void NotifyBeginPlay() const
    {
        NativeCall<void>(this, "AWorldSettings.NotifyBeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.NotifyMatchStarted()
    // endereco: casamento de bytes com a build de referencia
    void NotifyMatchStarted() const
    {
        NativeCall<void>(this, "AWorldSettings.NotifyMatchStarted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldSettings.OnRep_NaniteSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_NaniteSettings() const
    {
        return NativeCall<void*>(this, "AWorldSettings.OnRep_NaniteSettings()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    void PostInitProperties() const
    {
        NativeCall<void>(this, "AWorldSettings.PostInitProperties()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.PostLoad()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=63]]
    void PostLoad() const
    {
        NativeCall<void>(this, "AWorldSettings.PostLoad()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.PostRegisterAllComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostRegisterAllComponents() const
    {
        NativeCall<void>(this, "AWorldSettings.PostRegisterAllComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "AWorldSettings.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.RewindForReplay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    void RewindForReplay() const
    {
        NativeCall<void>(this, "AWorldSettings.RewindForReplay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.SanitizeBookmarkClasses()
    // endereco: casamento de bytes com a build de referencia
    void SanitizeBookmarkClasses() const
    {
        NativeCall<void>(this, "AWorldSettings.SanitizeBookmarkClasses()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "AWorldSettings.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldSettings.SetAllowMaskedMaterials(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetAllowMaskedMaterials(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AWorldSettings.SetAllowMaskedMaterials(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AWorldSettings.SetNavigationSystemConfigOverride(UNavigationSystemConfig*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNavigationSystemConfigOverride(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AWorldSettings.SetNavigationSystemConfigOverride(UNavigationSystemConfig*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.SetPauserPlayerState(APlayerState*)
    // endereco: cache_pdb_25090264
    void SetPauserPlayerState(void* a0) const
    {
        NativeCall<void, void*>(this, "AWorldSettings.SetPauserPlayerState(APlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AWorldSettings.SetTimeDilation(float)
    // endereco: cache_pdb_25090264
    float SetTimeDilation(float a0) const
    {
        return NativeCall<float, float>(this, "AWorldSettings.SetTimeDilation(float)", a0);
    }

    BrzCampoPonteiro AISystemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.AISystemClass")); }
    TArray<void*>& AlwaysVisibleLevelNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.AlwaysVisibleLevelNames"); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.AssetUserData"); }
    TArray<void*>& BaseNavmeshDataLayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.BaseNavmeshDataLayers"); }
    TArray<void*>& BookmarkArrayField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.BookmarkArray"); }
    BrzCampoPonteiro BroadphaseSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.BroadphaseSettings")); }
    BrzCampoPonteiro DefaultAmbientZoneSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultAmbientZoneSettings")); }
    TObjectPtr<USoundMix>& DefaultBaseSoundMixField() const
    { return *GetNativePointerField<TObjectPtr<USoundMix>*>(this, "AWorldSettings.DefaultBaseSoundMix"); }
    BrzCampoPonteiro DefaultBookmarkClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultBookmarkClass")); }
    BrzCampoPonteiro DefaultColorScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultColorScale")); }
    BrzCampoPonteiro DefaultGameModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultGameMode")); }
    float& DefaultMaxDistanceFieldOcclusionDistanceField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.DefaultMaxDistanceFieldOcclusionDistance"); }
    BrzCampoPonteiro DefaultPhysicsVolumeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultPhysicsVolumeClass")); }
    BrzCampoPonteiro DefaultReverbSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.DefaultReverbSettings")); }
    float& DemoPlayTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.DemoPlayTimeDilation"); }
    float& DynamicIndirectShadowsSelfShadowingIntensityField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.DynamicIndirectShadowsSelfShadowingIntensity"); }
    BrzCampoPonteiro GameNetworkManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.GameNetworkManagerClass")); }
    float& GlobalDistanceFieldViewDistanceField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalDistanceFieldViewDistance"); }
    float& GlobalGravityZField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.GlobalGravityZ"); }
    float& KillZField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.KillZ"); }
    BrzCampoPonteiro KillZDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.KillZDamageType")); }
    BrzCampoPonteiro LastBookmarkClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.LastBookmarkClass")); }
    BrzCampoPonteiro LevelInstancePivotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.LevelInstancePivotOffset")); }
    TArray<void*>& LevelsToAbsolutelyNotLoadOnDediServerField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.LevelsToAbsolutelyNotLoadOnDediServer"); }
    TArray<void*>& LevelsToForceInvisibleWhenExcludedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.LevelsToForceInvisibleWhenExcluded"); }
    float& MatineeTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.MatineeTimeDilation"); }
    float& MaxGlobalTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxGlobalTimeDilation"); }
    int& MaxNumberOfBookmarksField() const
    { return *GetNativePointerField<int*>(this, "AWorldSettings.MaxNumberOfBookmarks"); }
    float& MaxUndilatedFrameTimeField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.MaxUndilatedFrameTime"); }
    float& MinGlobalTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.MinGlobalTimeDilation"); }
    float& MinUndilatedFrameTimeField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.MinUndilatedFrameTime"); }
    BrzCampoPonteiro NaniteSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.NaniteSettings")); }
    TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigField() const
    { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfig"); }
    TObjectPtr<UNavigationSystemConfig>& NavigationSystemConfigOverrideField() const
    { return *GetNativePointerField<TObjectPtr<UNavigationSystemConfig>*>(this, "AWorldSettings.NavigationSystemConfigOverride"); }
    int& PackedLightAndShadowMapTextureSizeField() const
    { return *GetNativePointerField<int*>(this, "AWorldSettings.PackedLightAndShadowMapTextureSize"); }
    TObjectPtr<APlayerState>& PauserPlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "AWorldSettings.PauserPlayerState"); }
    BrzCampoPonteiro PhysicsCollisionHandlerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AWorldSettings.PhysicsCollisionHandlerClass")); }
    TArray<void*>& ReplicationViewersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AWorldSettings.ReplicationViewers"); }
    float& TimeDilationField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.TimeDilation"); }
    unsigned char& VisibilityAggressivenessField() const
    { return *GetNativePointerField<unsigned char*>(this, "AWorldSettings.VisibilityAggressiveness"); }
    int& VisibilityCellSizeField() const
    { return *GetNativePointerField<int*>(this, "AWorldSettings.VisibilityCellSize"); }
    float& VolumetricLightmapLoadingRangeField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.VolumetricLightmapLoadingRange"); }
    float& WorldGravityZField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldGravityZ"); }
    TObjectPtr<UWorldPartition>& WorldPartitionField() const
    { return *GetNativePointerField<TObjectPtr<UWorldPartition>*>(this, "AWorldSettings.WorldPartition"); }
    float& WorldToMetersField() const
    { return *GetNativePointerField<float*>(this, "AWorldSettings.WorldToMeters"); }
    BitFieldValue<bool, unsigned __int32> bPrecomputeVisibility()
    { return { (void*)this, "bPrecomputeVisibility" }; }
    BitFieldValue<bool, unsigned __int32> bPlaceCellsOnlyAlongCameraTracks()
    { return { (void*)this, "bPlaceCellsOnlyAlongCameraTracks" }; }
    BitFieldValue<bool, unsigned __int32> bEnableWorldBoundsChecks()
    { return { (void*)this, "bEnableWorldBoundsChecks" }; }
    BitFieldValue<bool, unsigned __int32> bUse3DWorldCompStreaming()
    { return { (void*)this, "bUse3DWorldCompStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceLoadAllLevelsOnDediServer()
    { return { (void*)this, "bForceLoadAllLevelsOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bEnableNavigationSystem()
    { return { (void*)this, "bEnableNavigationSystem" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAISystem()
    { return { (void*)this, "bEnableAISystem" }; }
    BitFieldValue<bool, unsigned __int32> bEnableWorldComposition()
    { return { (void*)this, "bEnableWorldComposition" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientSideLevelStreamingVolumes()
    { return { (void*)this, "bUseClientSideLevelStreamingVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bEnableWorldOriginRebasing()
    { return { (void*)this, "bEnableWorldOriginRebasing" }; }
    BitFieldValue<bool, unsigned __int32> bWorldGravitySet()
    { return { (void*)this, "bWorldGravitySet" }; }
    BitFieldValue<bool, unsigned __int32> bGlobalGravitySet()
    { return { (void*)this, "bGlobalGravitySet" }; }
    BitFieldValue<bool, unsigned __int32> bMinimizeBSPSections()
    { return { (void*)this, "bMinimizeBSPSections" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPrecomputedLighting()
    { return { (void*)this, "bForceNoPrecomputedLighting" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityLoading()
    { return { (void*)this, "bHighPriorityLoading" }; }
    BitFieldValue<bool, unsigned __int32> bHighPriorityLoadingLocal()
    { return { (void*)this, "bHighPriorityLoadingLocal" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideDefaultBroadphaseSettings()
    { return { (void*)this, "bOverrideDefaultBroadphaseSettings" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateSingleClusterForLevel()
    { return { (void*)this, "bGenerateSingleClusterForLevel" }; }
    BitFieldValue<bool, unsigned __int32> bEnableCapsuleIndirectShadows()
    { return { (void*)this, "bEnableCapsuleIndirectShadows" }; }
    BitFieldValue<bool, unsigned __int32> bForceVolumetricLightmapsOnly()
    { return { (void*)this, "bForceVolumetricLightmapsOnly" }; }
    BitFieldValue<bool, unsigned __int32> bReuseAddressAndPort()
    { return { (void*)this, "bReuseAddressAndPort" }; }

};

#endif  // BRZ_SDK_JOGO_AWORLDSETTINGS_H
