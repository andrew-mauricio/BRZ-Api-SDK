// ==========================================================================
//  APrimalStructureMine — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREMINE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREMINE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct APrimalStructure;
struct FActorTickFunction;
struct FItemNetID;
struct FName;
struct FPrimalStructureSnapPointOverride;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UParticleSystem;
struct UPrimalHarvestingComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;
struct USoundCue;
struct USphereComponent;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;


struct APrimalStructureMine
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureMine"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.ActivateMine()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1439+grafo=15/17]]
    BrzPonteiro ActivateMine() const
    {
        return NativeCall<void*>(this, "APrimalStructureMine.ActivateMine()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.Explode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=190]]
    BrzPonteiro Explode() const
    {
        return NativeCall<void*>(this, "APrimalStructureMine.Explode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FinalStructurePlacement(void* a0, void* a1, void* a2, void* a3, void* a4, unsigned long long a5, bool a6, void* a7) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, unsigned long long, bool, void*>(this, "APrimalStructureMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.ManuallyPlacedStructureLogic()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ManuallyPlacedStructureLogic() const
    {
        return NativeCall<void*>(this, "APrimalStructureMine.ManuallyPlacedStructureLogic()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.PlacedStructure(AShooterPlayerController*)
    // endereco: cache_pdb_25090264
    BrzPonteiro PlacedStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureMine.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, float, void*, void*, void*>(this, "APrimalStructureMine.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureMine.RefreshMineTarget()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro RefreshMineTarget() const
    {
        return NativeCall<void*>(this, "APrimalStructureMine.RefreshMineTarget()");
    }

    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureMine.ActivateMaterials"); }
    UParticleSystem*& ActivatedMineParticleSystemField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureMine.ActivatedMineParticleSystem"); }
    BrzCampoPonteiro ActivatedMineParticleSystemOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ActivatedMineParticleSystemOffset")); }
    USoundBase*& ActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureMine.ActivatedSound"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ActiveEffectVFX")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMine.ActorUsingQuickAction"); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureMine.AllowStructureColorSets" }; }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureMine.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureMine.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.AutoReceiveInput"); }
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.BedID"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.BoneDamageAdjusters"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureMine.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.CreationTime"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMine.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMine.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.DamageTypeAdjusters"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DeactivateTrapIcon")); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureMine.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.DecayDestructionPeriodMultiplier"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.DemolishGiveItemCraftingResourcePercentage"); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMine.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.DestructionEmitter")); }
    USphereComponent*& ExplodingTriggerComponentField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureMine.ExplodingTriggerComponent"); }
    float& ExplosionDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionDamage"); }
    BrzCampoPonteiro ExplosionDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ExplosionDamageType")); }
    float& ExplosionImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionImpulse"); }
    float& ExplosionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionRadius"); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.FloatingHudLocTextOffset")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureMine.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.HurtFX_Niagara")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureMine.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureMine.Instigator"); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ItemsUseAlternateActorClassAttachment")); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastInAllyRangeTimeSerialized"); }
    BrzCampoPonteiro LastKnownTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.LastKnownTargetLocation")); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMine.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMine.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastSkinAppliedTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureMine.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.LifeSpanAfterDeath"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureMine.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.LinkedStructuresID"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.LocalOnlySkinCustomPersistentData")); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MaxHealth"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MinNetUpdateFrequency"); }
    float& MineExplodeTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MineExplodeTime"); }
    float& MineSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MineSpeed"); }
    BrzCampoPonteiro MineTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.MineTarget")); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.MultiSoftDestructionGeoCollectionAssets")); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureMine.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureMine.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureMine.MyHarvestingComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureMine.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureMine.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureMine.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMine.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMine.NetworkSpatializationParent"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.NotifyCarriedByDinoChanged")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMine.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.OriginalPlacerPlayerID"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureMine.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureMine.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureMine.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMine.OwnerName"); }
    int& OwnerTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.OwnerTargetingTeam"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureMine.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureMine.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMine.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureMine.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMine.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.PlacementYawOffsetIncrement"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureMine.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureMine.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureMine.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureMine.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureMine.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureMine.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMine.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureMine.PrimarySnappedStructureParent"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.RepGraphBehavior")); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ReplicationIntervalMultiplier"); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureMine.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureMine.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.SavedStructureMinAllowedVersion"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.SkinPersistentData")); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureMine.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.SnappedChooseRotationPlacementData")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureMine.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureMine.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureMine.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureMine.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureMine.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureMine.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.TargetingTeam"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMine.TribeGroupStructureRank"); }
    USphereComponent*& TriggerComponentField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureMine.TriggerComponent"); }
    TArray<APrimalCharacter*>& TriggerOverlappingCharactersField() const
    { return *GetNativePointerField<TArray<APrimalCharacter*>*>(this, "APrimalStructureMine.TriggerOverlappingCharacters"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureMine.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureMine.UpdateOverlapsMethodDuringLevelStreaming"); }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureMine.Variants"); }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement()
    { return { (void*)this, "bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation()
    { return { (void*)this, "bAllowSnapRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureSkinsWithoutTeamCheck()
    { return { (void*)this, "bAllowStructureSkinsWithoutTeamCheck" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldRoundRobin()
    { return { (void*)this, "bAllowWeldRoundRobin" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldingToShips()
    { return { (void*)this, "bAllowWeldingToShips" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit()
    { return { (void*)this, "bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired()
    { return { (void*)this, "bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit()
    { return { (void*)this, "bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCarriedByDino()
    { return { (void*)this, "bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor()
    { return { (void*)this, "bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy()
    { return { (void*)this, "bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects()
    { return { (void*)this, "bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm()
    { return { (void*)this, "bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetPickupTimer()
    { return { (void*)this, "bDontResetPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters()
    { return { (void*)this, "bDontSetDamageParameters" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers()
    { return { (void*)this, "bForceFloatingDamageNumbers" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup()
    { return { (void*)this, "bForceFloorCollisionGroup" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround()
    { return { (void*)this, "bForceSnappedStructureToGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing()
    { return { (void*)this, "bForceZeroDamageProcessing" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor()
    { return { (void*)this, "bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime()
    { return { (void*)this, "bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects()
    { return { (void*)this, "bIgnoreDestructionEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished()
    { return { (void*)this, "bIgnoreDyingWhenDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSpawnEffects()
    { return { (void*)this, "bIgnoreSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting()
    { return { (void*)this, "bIgnoredByTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe()
    { return { (void*)this, "bIsDoorframe" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlipped()
    { return { (void*)this, "bIsFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bIsFloor()
    { return { (void*)this, "bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoundation()
    { return { (void*)this, "bIsFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure()
    { return { (void*)this, "bIsPreviewStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureAttachmentBase()
    { return { (void*)this, "bIsStructureAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter()
    { return { (void*)this, "bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsTrapped()
    { return { (void*)this, "bIsTrapped" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLinkedStructureRemovalForceClientUpdate()
    { return { (void*)this, "bLinkedStructureRemovalForceClientUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision()
    { return { (void*)this, "bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance()
    { return { (void*)this, "bOverrideFoundationSupportDistance" }; }
    BitFieldValue<bool, unsigned __int32> bPendingRemoval()
    { return { (void*)this, "bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight()
    { return { (void*)this, "bPlacementAdjustHeight" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation()
    { return { (void*)this, "bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation()
    { return { (void*)this, "bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementPreventLockingCameraWhileChooseRotation()
    { return { (void*)this, "bPlacementPreventLockingCameraWhileChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents()
    { return { (void*)this, "bPreviewApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStationaryStructure()
    { return { (void*)this, "bStationaryStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStructureCosmeticOverrideStructureColorSets()
    { return { (void*)this, "bStructureCosmeticOverrideStructureColorSets" }; }
    BitFieldValue<bool, unsigned __int32> bStructureFiresProjectiles()
    { return { (void*)this, "bStructureFiresProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying()
    { return { (void*)this, "bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnClientUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnClientUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnServerUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnServerUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostPreviewStructureFlipped()
    { return { (void*)this, "bUseBPPostPreviewStructureFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing()
    { return { (void*)this, "bUseBPPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis()
    { return { (void*)this, "bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent()
    { return { (void*)this, "bUseHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUsesHealth()
    { return { (void*)this, "bUsesHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors()
    { return { (void*)this, "bUsingStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn()
    { return { (void*)this, "bWasAttachedToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped()
    { return { (void*)this, "bWasPlacementSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume()
    { return { (void*)this, "bWithinPreventionVolume" }; }
    BitFieldValue<bool, unsigned __int32> bActivatedMine()
    { return { (void*)this, "bActivatedMine" }; }
    BitFieldValue<bool, unsigned __int32> bCanActivateAboveWater()
    { return { (void*)this, "bCanActivateAboveWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanActivateUnderwater()
    { return { (void*)this, "bCanActivateUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableExplosion()
    { return { (void*)this, "bDisableExplosion" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREMINE_H
