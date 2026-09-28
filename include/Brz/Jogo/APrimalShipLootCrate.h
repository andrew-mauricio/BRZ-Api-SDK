// ==========================================================================
//  APrimalShipLootCrate — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSHIPLOOTCRATE_H
#define BRZ_SDK_JOGO_APRIMALSHIPLOOTCRATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct APrimalDinoCharacter;
struct APrimalEmitterSpawnable;
struct APrimalStructure;
struct FActorTickFunction;
struct FItemNetID;
struct FName;
struct FPrimalMapMarkerEntryData;
struct FPrimalStructureSnapPointOverride;
struct UChildActorComponent;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMeshComponent;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimalWindSourceComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;


struct APrimalShipLootCrate
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalShipLootCrate"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipLootCrate.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalShipLootCrate.Tick(float)", a0);
    }

    float& AboveOneExtraQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.AboveOneExtraQualityMultiplier"); }
    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalShipLootCrate.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ActivationCooldownTime"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ActiveEffectVFX")); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.ActiveRequiresFuelItems"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipLootCrate.ActorUsingQuickAction"); }
    TArray<void*>& AdditionalItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.AdditionalItemSets"); }
    BrzCampoPonteiro AdditionalItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.AdditionalItemSetsOverride")); }
    BrzCampoPonteiro AllowOverrideParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.AllowOverrideParticleLightColor")); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalShipLootCrate.AllowStructureColorSets" }; }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.AllowWirelessCraftingIcon"); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalShipLootCrate.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalShipLootCrate.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.AutoReceiveInput"); }
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.BPOverrideDestroyedMeshTextures")); }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.BatteryClassOverride")); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.BedID"); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.BlacklistedItemCount"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.BoneDamageAdjusters"); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.BoxNamePrefaceString"); }
    float& CheckForShipsIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CheckForShipsInterval"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.Children"); }
    BrzCampoPonteiro ClientCrateMovementUpdateRateMinMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ClientCrateMovementUpdateRateMinMax")); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ClientReplicationSendNowThreshold"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShipLootCrate.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShipLootCrate.ContainerDeactivatedSound"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalShipLootCrate.CosmeticVariantStaticMesh"); }
    BrzCampoPonteiro CrateColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateColorParameter")); }
    BrzCampoPonteiro CrateDissolveCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateDissolveCurve")); }
    BrzCampoPonteiro CrateLocationCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateLocationCurve")); }
    float& CrateMovementDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CrateMovementDuration"); }
    BrzCampoPonteiro CrateMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateMovementMode")); }
    BrzCampoPonteiro CrateRotationCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateRotationCurve")); }
    BrzCampoPonteiro CrateSpawnInLocationEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CrateSpawnInLocationEffect")); }
    APrimalEmitterSpawnable*& CrateSpawnInLocationEffectRefField() const
    { return *GetNativePointerField<APrimalEmitterSpawnable**>(this, "APrimalShipLootCrate.CrateSpawnInLocationEffectRef"); }
    float& CrateStartHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CrateStartHeight"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.CreationTime"); }
    float& CurrentCrateCurveTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CurrentCrateCurveTime"); }
    BrzCampoPonteiro CurrentCrateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CurrentCrateLocation")); }
    BrzCampoPonteiro CurrentCrateRelLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CurrentCrateRelLocation")); }
    BrzCampoPonteiro CurrentCrateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.CurrentCrateRotation")); }
    float& CurrentFadeOutTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CurrentFadeOutTime"); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.CurrentItemCount"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalShipLootCrate.CurrentPinCode"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipLootCrate.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipLootCrate.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.DamageTypeAdjusters"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DeactivateTrapIcon")); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DeactivatedIconColor")); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalShipLootCrate.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.DeathCacheCreationTime"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalShipLootCrate.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DecayDestructionPeriodMultiplier"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalShipLootCrate.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DefaultParticleTemplate")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DemolishInventoryDepositClass")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.DestructionEmitter")); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.DisabledOpenSceneActionName"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.EngramRequirementClassOverride")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FinalCrateLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.FinalCrateLocation")); }
    BrzCampoPonteiro FinalCrateRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.FinalCrateRotation")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.FloatingHudLocTextOffset")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.ForceMaximumReplicationRateUntilTime"); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.FuelItemsConsumedGiveItems"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.GroundEncroachmentCheckLocationOffset")); }
    BrzCampoPonteiro HUDWorldOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.HUDWorldOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalShipLootCrate.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.HurtFX_Niagara")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalShipLootCrate.InActivateMaterials"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.InitialLifeSpan"); }
    float& InitialTimeToLoseHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.InitialTimeToLoseHealth"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalShipLootCrate.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalShipLootCrate.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.InsulationRange"); }
    float& IntervalPercentHealthToLoseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.IntervalPercentHealthToLose"); }
    float& IntervalTimeToLoseHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.IntervalTimeToLoseHealth"); }
    TObjectPtr<UMaterialInterface>& InvisibleMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "APrimalShipLootCrate.InvisibleMaterial"); }
    TArray<void*>& ItemSetsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.ItemSets"); }
    BrzCampoPonteiro ItemSetsOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ItemSetsOverride")); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ItemsUseAlternateActorClassAttachment")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalShipLootCrate.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalShipLootCrate.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastActiveStateChangeTime"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastActorForceReplicationTime"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastDeactivatedTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastInAllyRangeTimeSerialized"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipLootCrate.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastSkinAppliedTime"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastSolarRefreshTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalShipLootCrate.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.LifeSpanAfterDeath"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShipLootCrate.LinkedBlueprintSpawnActorPoint"); }
    TArray<TWeakObjectPtr<void>>& LinkedNPCsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShipLootCrate.LinkedNPCs"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipLootCrate.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.LinkedPowerJunctionStructureID"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalShipLootCrate.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.LinkedStructuresID"); }
    TWeakObjectPtr<void>& LinkedToCrateSpawnVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipLootCrate.LinkedToCrateSpawnVolume"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalShipLootCrate.LocalCorpseEmitter"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.LocalOnlySkinCustomPersistentData")); }
    float& LootAutoPickupRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.LootAutoPickupRadius"); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalShipLootCrate.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MaxActivationDistance"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.MaxBoxNameLength"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MaxHealth"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.MaxItemCount"); }
    float& MaxItemSetsField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MaxItemSets"); }
    int& MaxLevelToAccessField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.MaxLevelToAccess"); }
    float& MaxQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MaxQualityMultiplier"); }
    float& MinItemSetsField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MinItemSets"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MinNetUpdateFrequency"); }
    float& MinQualityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.MinQualityMultiplier"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.MultiSoftDestructionGeoCollectionAssets")); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalShipLootCrate.MyChildEmitterSpawnable"); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalShipLootCrate.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShipLootCrate.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalShipLootCrate.MyHarvestingComponent"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalShipLootCrate.MyInventoryComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalShipLootCrate.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalShipLootCrate.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalShipLootCrate.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetCullDistanceSquaredDormant"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.NetDestructionTime"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipLootCrate.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipLootCrate.NetworkSpatializationParent"); }
    double& NextCheckHideSupplyCratesTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.NextCheckHideSupplyCratesTime"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.NextConsumeFuelGiveItemType")); }
    double& NextCrateMovementUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.NextCrateMovementUpdateTime"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.NotifyCarriedByDinoChanged")); }
    float& NumItemSetsPowerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.NumItemSetsPower"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OnTargetingTeamChanged")); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.OpenSceneActionName"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.OriginalCreationTime"); }
    TArray<UMaterialInterface*>& OriginalMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalShipLootCrate.OriginalMaterials"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.OriginalPlacerPlayerID"); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalShipLootCrate.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.OverrideParticleTemplates")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalShipLootCrate.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipLootCrate.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalShipLootCrate.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipLootCrate.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalShipLootCrate.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipLootCrate.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalShipLootCrate.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalShipLootCrate.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PlacementYawOffsetIncrement"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.PreventWirelessCraftingIcon"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalShipLootCrate.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipLootCrate.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalShipLootCrate.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalShipLootCrate.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalShipLootCrate.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalShipLootCrate.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalShipLootCrate.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalShipLootCrate.PrimarySnappedStructureParent"); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.RandomFuelUpdateTimeMin"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.RemoteRole"); }
    UMeshComponent*& RenderedCrateMeshComponentField() const
    { return *GetNativePointerField<UMeshComponent**>(this, "APrimalShipLootCrate.RenderedCrateMeshComponent"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalShipLootCrate.ReplicatedFuelItemColorIndex"); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ReplicationIntervalMultiplier"); }
    int& RequiredLevelToAccessField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.RequiredLevelToAccess"); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.RequiresItemForOpenSceneAction")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalShipLootCrate.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipLootCrate.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.SavedStructureMinAllowedVersion"); }
    BrzCampoPonteiro ServerCrateMovementUpdateRateMinMaxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.ServerCrateMovementUpdateRateMinMax")); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SkinInventoryData")); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SkinPersistentData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.SkipConsumeFuelUntilTime"); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SnappedChooseRotationPlacementData")); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.SolarRefreshIntervalMin"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnInInDamageCollisionBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.SpawnInInDamageCollisionBoxExtent")); }
    double& StartedCrateMovementTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.StartedCrateMovementTime"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalShipLootCrate.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShipLootCrate.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalShipLootCrate.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalShipLootCrate.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalShipLootCrate.StructuresPlacedOnFloor"); }
    TObjectPtr<UTexture2D>& SurvivorLevelUpIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalShipLootCrate.SurvivorLevelUpIcon"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.TargetingTeam"); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.TimeCooldownRequestFuelRemaining"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipLootCrate.TribeGroupStructureRank"); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.UISceneTemplate")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipLootCrate.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipLootCrate.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPApplyPinCodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.UseBPApplyPinCode")); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.UseBPOverrideTargetLocation")); }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipLootCrate.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShipLootCrate.ValidatedByPinCodePlayerControllers"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipLootCrate.Variants"); }
    UPrimalWindSourceComponent*& WindSourceComponentRefField() const
    { return *GetNativePointerField<UPrimalWindSourceComponent**>(this, "APrimalShipLootCrate.WindSourceComponentRef"); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.WirelessExchangeRefs")); }
    BrzCampoPonteiro bActiveRequiresPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bActiveRequiresPower")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAdjustDamageAsPlayerWithEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAdjustDamageAsPlayerWithEquipment")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowCustomNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowCustomName")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysAllowTributeInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAlwaysAllowTributeInventory")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAppliedBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAppliedBuff")); }
    BrzCampoPonteiro bApplyNiagaraColorInBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bApplyNiagaraColorInBP")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoActivateContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoActivateContainer")); }
    BrzCampoPonteiro bAutoActivateIfPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoActivateIfPowered")); }
    BrzCampoPonteiro bAutoActivateWhenFueledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoActivateWhenFueled")); }
    BrzCampoPonteiro bAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPIsValidWaterSourceForPipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPIsValidWaterSourceForPipe")); }
    BrzCampoPonteiro bBPNotifyRemoteViewerChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPNotifyRemoteViewerChange")); }
    BrzCampoPonteiro bBPOnContainerActiveHealthDecreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPOnContainerActiveHealthDecrease")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCanToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCanToggleActivation")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheckStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCheckStartedUnderwater")); }
    BrzCampoPonteiro bClientBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bClientBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCollideWhenPlacing")); }
    BrzCampoPonteiro bContainerActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bContainerActivated")); }
    BrzCampoPonteiro bCraftingSubstractConnectedWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bCraftingSubstractConnectedWater")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDebug")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDestroyWhenAllItemsRemoved")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedExceptDefaultsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDestroyWhenAllItemsRemovedExceptDefaults")); }
    BrzCampoPonteiro bDestroyWindSourceComponentOnLandField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDestroyWindSourceComponentOnLand")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableActivationUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisableActivationUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisplayActivationOnInventoryUI")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUISecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisplayActivationOnInventoryUISecondary")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUITertiaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDisplayActivationOnInventoryUITertiary")); }
    BrzCampoPonteiro bDontGenerateCrateItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDontGenerateCrateItems")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDontSetDamageParameters")); }
    BrzCampoPonteiro bDrawFuelRemainingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDrawFuelRemaining")); }
    BrzCampoPonteiro bDrinkingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDrinkingWater")); }
    BrzCampoPonteiro bDropInventoryOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bDropInventoryOnDestruction")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableHideSupplyCratesCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bEnableHideSupplyCratesCheck")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFinishedCrateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bFinishedCrateMovement")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNeverLockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceNeverLock")); }
    BrzCampoPonteiro bForceNoPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceNoPinLocking")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventAutoActivateWhenConnectedToWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForcePreventAutoActivateWhenConnectedToWater")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFuelAllowActivationWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bFuelAllowActivationWhenNoPower")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGeneratedCrateItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bGeneratedCrateItems")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasFuelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHasFuel")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHidden")); }
    BrzCampoPonteiro bHideAutoActivateToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHideAutoActivateToggle")); }
    BrzCampoPonteiro bHidePowerJunctionConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bHidePowerJunctionConnection")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipLootCrate.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bInventoryAccessOnlyActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bInventoryAccessOnlyActivated")); }
    BrzCampoPonteiro bInventoryForcePreventItemAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bInventoryForcePreventItemAppends")); }
    BrzCampoPonteiro bInventoryForcePreventRemoteAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bInventoryForcePreventRemoteAddItems")); }
    BrzCampoPonteiro bIsAmmoContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsAmmoContainer")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsBed")); }
    BrzCampoPonteiro bIsBonusCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsBonusCrate")); }
    BrzCampoPonteiro bIsCrateRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsCrateRendered")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsFlipped")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsInvincible")); }
    BrzCampoPonteiro bIsLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsLocked")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsMapActor")); }
    BrzCampoPonteiro bIsPinLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsPinLocked")); }
    BrzCampoPonteiro bIsPowerJunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsPowerJunction")); }
    BrzCampoPonteiro bIsPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsPowered")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsQuestCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsQuestCrate")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsRepairing")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsTrapped")); }
    BrzCampoPonteiro bIsUnderWaterCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsUnderWaterCrate")); }
    BrzCampoPonteiro bIsUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsUnderwater")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLastToggleActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bLastToggleActivated")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bNoCollision")); }
    BrzCampoPonteiro bOnlyAllowTeamActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyAllowTeamActivation")); }
    BrzCampoPonteiro bOnlyConsumeDurabilityOnEquipmentForEnemiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyConsumeDurabilityOnEquipmentForEnemies")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseSpoilingMultipliersIfActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOnlyUseSpoilingMultipliersIfActivated")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPoweredAllowBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredAllowBattery")); }
    BrzCampoPonteiro bPoweredAllowBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredAllowBot")); }
    BrzCampoPonteiro bPoweredAllowSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredAllowSolar")); }
    BrzCampoPonteiro bPoweredHasBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredHasBattery")); }
    BrzCampoPonteiro bPoweredHasBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredHasBot")); }
    BrzCampoPonteiro bPoweredUsingBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredUsingBattery")); }
    BrzCampoPonteiro bPoweredUsingBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredUsingBot")); }
    BrzCampoPonteiro bPoweredUsingSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredUsingSolar")); }
    BrzCampoPonteiro bPoweredWaterSourceWhenActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPoweredWaterSourceWhenActive")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventContainerPingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventContainerPingType")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLinkingToStorageInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventLinkingToStorageInterface")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreventToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventToggleActivation")); }
    BrzCampoPonteiro bPreventUsingAsWirelessCraftingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreventUsingAsWirelessCraftingSource")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateItemFuelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicateItemFuelClass")); }
    BrzCampoPonteiro bReplicateLastActivatedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicateLastActivatedTime")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bReplicates")); }
    BrzCampoPonteiro bRequiresItemExactClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bRequiresItemExactClass")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bServerBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bServerBPNotifyInventoryItemChangesUseQuantity")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseSwappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bServerBPNotifyInventoryItemChangesUseSwapped")); }
    BrzCampoPonteiro bSetsRandomWithoutReplacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSetsRandomWithoutReplacement")); }
    BrzCampoPonteiro bSpawnCrateOnTopOfStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSpawnCrateOnTopOfStructures")); }
    BrzCampoPonteiro bStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStartedUnderwater")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bStructureIgnoreDying")); }
    BrzCampoPonteiro bSupplyCrateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSupplyCrateHidden")); }
    BrzCampoPonteiro bSupportsLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSupportsLocking")); }
    BrzCampoPonteiro bSupportsPinActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSupportsPinActivation")); }
    BrzCampoPonteiro bSupportsPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSupportsPinLocking")); }
    BrzCampoPonteiro bSupportsStorageInterfaceLinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bSupportsStorageInterfaceLinking")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAmmoContainerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseAmmoContainerBuff")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPCanAddWirelessExchangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPCanAddWirelessExchange")); }
    BrzCampoPonteiro bUseBPCanBeActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPCanBeActivated")); }
    BrzCampoPonteiro bUseBPCanBeActivatedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPCanBeActivatedByPlayer")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFuelConsumptionMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetFuelConsumptionMultiplier")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetQuantityOfItemWithoutCheckingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetQuantityOfItemWithoutCheckingInventory")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPNotifyWirelessConsumerAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPNotifyWirelessConsumerRemoved")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPNotifyWirelessSourceAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPNotifyWirelessSourceRemoved")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseBPSetPlayerConstructorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseBPSetPlayerConstructor")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCollisionCompsForFloatingDPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseCollisionCompsForFloatingDPS")); }
    BrzCampoPonteiro bUseColorRegionForEmitterColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseColorRegionForEmitterColor")); }
    BrzCampoPonteiro bUseCooldownOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseCooldownOnTransferAll")); }
    BrzCampoPonteiro bUseDeathCacheCharacterIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseDeathCacheCharacterID")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseMeshOriginForInventoryAccessTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseMeshOriginForInventoryAccessTrace")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseOpenSceneAction")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUsesHealth")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsOriginalMatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWantsOriginalMats")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipLootCrate.bWithinPreventionVolume")); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSHIPLOOTCRATE_H
