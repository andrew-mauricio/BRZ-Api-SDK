// ==========================================================================
//  APrimalStructureGhost — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREGHOST_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREGHOST_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
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
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;


struct APrimalStructureGhost
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureGhost"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.AddGhostMeshComp(UStaticMesh*,USkeletalMesh*,UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddGhostMeshComp(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*>(this, "APrimalStructureGhost.AddGhostMeshComp(UStaticMesh*,USkeletalMesh*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&,TArray<UMeshComponent*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.CheckAdditionalStructureTag_Implementation(FName)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CheckAdditionalStructureTag_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructureGhost.CheckAdditionalStructureTag_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.ConvertToTemplate(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConvertToTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureGhost.ConvertToTemplate(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.CreateGhostPreview()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateGhostPreview() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.CreateGhostPreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.GetActualClass()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActualClass() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.GetActualClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.GetEffectiveSparseClassData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEffectiveSparseClassData() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.GetEffectiveSparseClassData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureGhost.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.GetSnapPoints()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSnapPoints() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.GetSnapPoints()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.SetNonSparseVars()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetNonSparseVars() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.SetNonSparseVars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.SetStructureClass(TSubclassOf<APrimalStructure>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetStructureClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureGhost.SetStructureClass(TSubclassOf<APrimalStructure>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.SetStructureCollisionChannels(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1642+grafo=6/6]]
    BrzPonteiro SetStructureCollisionChannels(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureGhost.SetStructureCollisionChannels(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.ToggleGhostVisibility(AShooterPlayerController*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ToggleGhostVisibility(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureGhost.ToggleGhostVisibility(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.TryCreateGhostPreview()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=810+grafo=12/14]]
    BrzPonteiro TryCreateGhostPreview() const
    {
        return NativeCall<void*>(this, "APrimalStructureGhost.TryCreateGhostPreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureGhost.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalStructureGhost.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ActiveEffectVFX")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureGhost.ActorUsingQuickAction"); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureGhost.AllowStructureColorSets" }; }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureGhost.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureGhost.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.AutoReceiveInput"); }
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.BPOverrideDestroyedMeshTextures")); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.BedID"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.BoneDamageAdjusters"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.ControllingMatineeActors"); }
    BrzCampoPonteiro ConvertToTemplateIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ConvertToTemplateIcon")); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureGhost.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.CreationTime"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureGhost.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureGhost.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.DamageTypeAdjusters"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DeactivateTrapIcon")); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureGhost.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.DecayDestructionPeriodMultiplier"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.DemolishGiveItemCraftingResourcePercentage"); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureGhost.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.DestructionEmitter")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.FloatingHudLocTextOffset")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GhostClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.GhostClass")); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureGhost.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.HurtFX_Niagara")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureGhost.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureGhost.Instigator"); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ItemsUseAlternateActorClassAttachment")); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastInAllyRangeTimeSerialized"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureGhost.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureGhost.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastSkinAppliedTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureGhost.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.LifeSpanAfterDeath"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureGhost.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.LinkedStructuresID"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.LocalOnlySkinCustomPersistentData")); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.MaxHealth"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.MultiSoftDestructionGeoCollectionAssets")); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureGhost.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureGhost.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureGhost.MyHarvestingComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureGhost.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureGhost.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureGhost.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureGhost.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureGhost.NetworkSpatializationParent"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.NotifyCarriedByDinoChanged")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureGhost.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.OriginalPlacerPlayerID"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureGhost.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureGhost.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureGhost.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureGhost.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureGhost.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureGhost.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureGhost.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureGhost.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureGhost.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.PlacementYawOffsetIncrement"); }
    BrzCampoPonteiro PlannedStructureClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PlannedStructureClass")); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureGhost.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureGhost.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureGhost.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureGhost.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureGhost.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureGhost.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureGhost.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureGhost.PrimarySnappedStructureParent"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.RepGraphBehavior")); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.ReplicationIntervalMultiplier"); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureGhost.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureGhost.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.SavedStructureMinAllowedVersion"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.SkinPersistentData")); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureGhost.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.SnappedChooseRotationPlacementData")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureGhost.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureGhost.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureGhost.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureGhost.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureGhost.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.TargetingTeam"); }
    BrzCampoPonteiro TemplateClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.TemplateClass")); }
    BrzCampoPonteiro TemplateOwnerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.TemplateOwnerBuff")); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureGhost.TribeGroupStructureRank"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureGhost.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureGhost.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.UseBPOverrideTargetLocation")); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureGhost.Variants"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDebug")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bDontSetDamageParameters")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bHidden")); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsBed")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsFlipped")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsMapActor")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsRepairing")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsTrapped")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bNoCollision")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bReplicates")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bSavedWhenStasised")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bStructureIgnoreDying")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUsesHealth")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureGhost.bWithinPreventionVolume")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREGHOST_H
