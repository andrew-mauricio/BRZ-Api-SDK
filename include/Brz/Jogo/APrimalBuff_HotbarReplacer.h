// ==========================================================================
//  APrimalBuff_HotbarReplacer — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_HOTBARREPLACER_H
#define BRZ_SDK_JOGO_APRIMALBUFF_HOTBARREPLACER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct FActorTickFunction;
struct FName;
struct FVector2D;
struct UAudioComponent;
struct UInputComponent;
struct UMaterialInterface;
struct UPrimalBuffPersistentData;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;


struct APrimalBuff_HotbarReplacer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_HotbarReplacer"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.ClientGenerateItems(TArray<FHotbarItemData,TSizedDefaultAllocator<32>
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientGenerateItems(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_HotbarReplacer.ClientGenerateItems(TArray<FHotbarItemData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.ClientGenerateItems_Implementation(TArray<FHotbarItemData,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientGenerateItems_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_HotbarReplacer.ClientGenerateItems_Implementation(TArray<FHotbarItemData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.DebugPrint(FString)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro DebugPrint(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_HotbarReplacer.DebugPrint(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DebugPrint(FString* a0) const
    { return DebugPrint(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.GenerateItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GenerateItems() const
    {
        return NativeCall<void*>(this, "APrimalBuff_HotbarReplacer.GenerateItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDataListEntries(void* a0, int a1, bool a2, signed char a3, void* a4, void* a5, void* a6, signed char a7, void* a8, bool a9, bool a10, bool a11, signed char a12) const
    {
        return NativeCall<void*, void*, int, bool, signed char, void*, void*, void*, signed char, void*, bool, bool, bool, signed char>(this, "APrimalBuff_HotbarReplacer.GetDataListEntries(TArray<IDataListEntryInterface*,TSizedDefaultAllocator<32>>&,int,bool,signedchar,TArray<FString,TSizedDefaultAllocator<32>>*,UObject*,wchar_t*,signedchar,wchar_t*,bool,bool,bool,signedchar)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.ServerRequestItems_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerRequestItems_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_HotbarReplacer.ServerRequestItems_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.SetItemInSlot(FHotbarItemData,int,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetItemInSlot(void* a0, int a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, int, bool, bool>(this, "APrimalBuff_HotbarReplacer.SetItemInSlot(FHotbarItemData,int,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.SetSkillProvider(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetSkillProvider(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_HotbarReplacer.SetSkillProvider(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_HotbarReplacer.SetupForInstigator()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupForInstigator() const
    {
        return NativeCall<void*>(this, "APrimalBuff_HotbarReplacer.SetupForInstigator()");
    }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.AOEOtherBuffToApply")); }
    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ActivateSoundFadeInDuration"); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ActivePreventsBuffClassesExceptions")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_HotbarReplacer.ActorUsingQuickAction"); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.AoETraceToTargetsStartOffset")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.AutoReceiveInput"); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.BlueprintCreatedComponents"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_HotbarReplacer.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.BuffStartTime"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.BuffToGiveOnDeactivation")); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CameraShakeScaleMultiplier"); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.CharacterStatusValueModifiers"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ColorParameter")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_HotbarReplacer.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.CustomTimeDilation"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.DeactivateAfterTime"); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.DeactivateSoundFadeOutDuration"); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_HotbarReplacer.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.DeactivationLifespan"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.DecalToSpawn")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.DepleteInstigatorItemDurabilityPerSecond"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.DesiredRepGraphBehavior"); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.DisabledWeaponTags"); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.EmitterNiagaraComponent")); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_HotbarReplacer.ExtraActivationSoundToPlay"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.ForceMaximumReplicationRateUntilTime"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.FrictionModifier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SkillProviderObject` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xC50; confianca alta)
    void*& GenerateItemsTimerHandleField() const
    { return BrzCampoAncorado<void*>(this, "SkillProviderObject", 8); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.HarvestQuantityMultiplier"); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.HitLocation")); }
    BrzCampoPonteiro HotbarItemDatasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.HotbarItemDatas")); }
    BrzCampoPonteiro HotbarItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.HotbarItems")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.HypoThermiaInsulation"); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ImpulseData")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalBuff_HotbarReplacer.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalBuff_HotbarReplacer.Instigator"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_HotbarReplacer.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_HotbarReplacer.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_HotbarReplacer.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.InsulationRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastExitStasisTime"); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastItemDurabilityDepletionTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_HotbarReplacer.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_HotbarReplacer.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastThrottledTickTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.LastTimeAddedStack"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.Layers"); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.MPCAdjusters")); }
    int& MaxConcurrentActivatedVfxField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.MaxConcurrentActivatedVfx"); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.MeleeDamageMultiplier"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.MinNetUpdateFrequency"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff_HotbarReplacer.MyBuffPersistentData"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_HotbarReplacer.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_HotbarReplacer.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.NiagaraComponent")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnMatineeUpdated")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnParticleSpawn")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.OnTargetingTeamChanged")); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.OnlyForInstigatorSoundFadeInTime"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.OriginalCreationTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.OverrideInventoryItemClassWeightMultipliers"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_HotbarReplacer.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_HotbarReplacer.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ParticleSystemComponent")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.PhysicsReplicationMode")); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff_HotbarReplacer.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.PreventIfMovementMassGreaterThan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalBuff_HotbarReplacer.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.RayTracingGroupId"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_HotbarReplacer.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.RemoteForcedFleeDuration"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalBuff_HotbarReplacer.RootComponent"); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ShallowEmitterSpawnableMaxDistance"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_HotbarReplacer.SkillActivationStatusCostType"); }
    BrzCampoPonteiro SkillProviderObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.SkillProviderObject")); }
    int& SlotCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.SlotCount"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SlowInstigatorFallingDampenZVelocity"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_HotbarReplacer.SoundToPlay"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.SpawnedForActor")); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.StackDuration"); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.StaminaDrainMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalBuff_HotbarReplacer.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalBuff_HotbarReplacer.StasisUnRegisteredComponents"); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_HotbarReplacer.Tags"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_HotbarReplacer.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_HotbarReplacer.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_HotbarReplacer.TargetingInfoTooltipScale"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.TargetingTooltipCheckRange"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_HotbarReplacer.UnstasisLastInRangeTime"); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.UnsubmergedRotationRateModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPAdjustOutputDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.UseBPAdjustOutputDamage")); }
    BrzCampoPonteiro UseBPAdjustOutputDamageForNonMeleePlayerDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.UseBPAdjustOutputDamageForNonMeleePlayerDamage")); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_HotbarReplacer.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.ViewMinExposureMultiplier"); }
    float& WarmupSecondsPerFrameCapField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.WarmupSecondsPerFrameCap"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_HotbarReplacer.XPtoAddRate"); }
    BrzCampoPonteiro bAOEApplyOtherBuffIgnoreSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEApplyOtherBuffIgnoreSameTeam")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEApplyOtherBuffOnDinos")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEApplyOtherBuffOnPlayers")); }
    BrzCampoPonteiro bAOEApplyOtherBuffRequireSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEApplyOtherBuffRequireSameTeam")); }
    BrzCampoPonteiro bAOEBuffCarnosOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEBuffCarnosOnly")); }
    BrzCampoPonteiro bAOEOnlyApplyOtherBuffToWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAOEOnlyApplyOtherBuffToWildDinos")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddCharacterValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddCharacterValues")); }
    BrzCampoPonteiro bAddExtendBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddExtendBuffTime")); }
    BrzCampoPonteiro bAddReactivatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddReactivates")); }
    BrzCampoPonteiro bAddRequireSameDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddRequireSameDamageCauser")); }
    BrzCampoPonteiro bAddResetsBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddResetsBuffTime")); }
    BrzCampoPonteiro bAddStackResetsBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAddStackResetsBuffStart")); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bAddTPVCameraOffset"); }
    BrzCampoPonteiro bAdditionalExperienceMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAdditionalExperienceMultiplier")); }
    BrzCampoPonteiro bAdditionalTamingSpeedMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAdditionalTamingSpeedMultiplier")); }
    BrzCampoPonteiro bAllowBuffStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowBuffStasis")); }
    BrzCampoPonteiro bAllowBuffWhenInstigatorDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowBuffWhenInstigatorDead")); }
    BrzCampoPonteiro bAllowDefaultHotbarIfBuffItemNotValidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowDefaultHotbarIfBuffItemNotValid")); }
    BrzCampoPonteiro bAllowLoopingEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowLoopingEmitter")); }
    BrzCampoPonteiro bAllowMultiUseEntriesFromSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowMultiUseEntriesFromSelf")); }
    BrzCampoPonteiro bAllowOnlyCustomFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowOnlyCustomFallDamage")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTurretsToTargetInstigatorIfTraceHitsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAllowTurretsToTargetInstigatorIfTraceHitsBuff")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysShowBuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAlwaysShowBuffDescription")); }
    BrzCampoPonteiro bAoEApplyDamageAllTargetablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAoEApplyDamageAllTargetables")); }
    BrzCampoPonteiro bAoEBuffAllowIfAlreadyBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAoEBuffAllowIfAlreadyBuffed")); }
    BrzCampoPonteiro bAoEIgnoreDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAoEIgnoreDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoEOnlyOnDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAoEOnlyOnDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoETraceToTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAoETraceToTargets")); }
    BrzCampoPonteiro bApplyOneMaxSpeedModifierPerStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bApplyOneMaxSpeedModifierPerStack")); }
    BrzCampoPonteiro bApplyStatModifierToDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bApplyStatModifierToDinos")); }
    BrzCampoPonteiro bApplyStatModifierToPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bApplyStatModifierToPlayers")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bAutoStasis")); }
    BrzCampoPonteiro bBPAddMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPAddMultiUseEntries")); }
    BrzCampoPonteiro bBPAdjustStatusValueModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPAdjustStatusValueModification")); }
    BrzCampoPonteiro bBPDrawBuffStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPDrawBuffStatusHUD")); }
    BrzCampoPonteiro bBPFilterMultiUseFilterTargetEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPFilterMultiUseFilterTargetEntries")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyCharacterFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPModifyCharacterFOV")); }
    BrzCampoPonteiro bBPOverrideActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideActorForTargetingTooltip")); }
    BrzCampoPonteiro bBPOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterWalkVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideCharacterWalkVelocity")); }
    BrzCampoPonteiro bBPOverrideWeaponBobField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPOverrideWeaponBob")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseBumpedByPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPUseBumpedByPawn")); }
    BrzCampoPonteiro bBPUseBumpedPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBPUseBumpedPawn")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffDrawFloatingHUD")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDRemotePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffDrawFloatingHUDRemotePlayers")); }
    BrzCampoPonteiro bBuffForceNoTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffForceNoTick")); }
    BrzCampoPonteiro bBuffForceNoTickDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffForceNoTickDedicated")); }
    BrzCampoPonteiro bBuffHandleInstigatorMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffHandleInstigatorMultiUseEntries")); }
    BrzCampoPonteiro bBuffHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffHidesNonWeaponHUD")); }
    BrzCampoPonteiro bBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bBuffPreventsApplyingLevelUpsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsApplyingLevelUps")); }
    BrzCampoPonteiro bBuffPreventsCryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsCryo")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsInventoryAccess")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessAllowMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsInventoryAccessAllowMissions")); }
    BrzCampoPonteiro bBuffPreventsMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsMountedWeaponry")); }
    BrzCampoPonteiro bBuffPreventsPlayerDropAllInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bBuffPreventsPlayerDropAllInventory")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCallRiderNotifiesOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCallRiderNotifiesOnClient")); }
    BrzCampoPonteiro bCameraShakeOrientTowardsEpicenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCameraShakeOrientTowardsEpicenter")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCanBeInCluster")); }
    BrzCampoPonteiro bCausesCryoSicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCausesCryoSickness")); }
    BrzCampoPonteiro bCheckPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCheckPreventInput")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCompleteCustomDepthStencilOverride")); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bContinueTickingClientAfterDeactivate"); }
    BrzCampoPonteiro bContinueTickingServerAfterDeactivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bContinueTickingServerAfterDeactivate")); }
    BrzCampoPonteiro bCurrentlyActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCurrentlyActive")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDeactivateAfterAddingXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDeactivateAfterAddingXP")); }
    BrzCampoPonteiro bDeactivateOnJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDeactivateOnJump")); }
    BrzCampoPonteiro bDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDeactivated")); }
    BrzCampoPonteiro bDeactivatedSoundOnlyLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDeactivatedSoundOnlyLocal")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDebug")); }
    BrzCampoPonteiro bDediServerUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDediServerUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bDelayedDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDelayedDeactivation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDestroyOnSystemFinish")); }
    BrzCampoPonteiro bDestroyOnTargetStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDestroyOnTargetStasis")); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bDestroyWhenUnpossessed"); }
    BrzCampoPonteiro bDinoIgnoreBuffPostprocessEffectWhenRiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDinoIgnoreBuffPostprocessEffectWhenRidden")); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bDisableBloom"); }
    BrzCampoPonteiro bDisableFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDisableFaceRotation")); }
    BrzCampoPonteiro bDisableFootstepsParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDisableFootstepsParticles")); }
    BrzCampoPonteiro bDisableIfCharacterUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDisableIfCharacterUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisplayHUDProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDisplayHUDProgressBar")); }
    BrzCampoPonteiro bDoCharacterDetachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDoCharacterDetachment")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeCarryingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDoCharacterDetachmentIncludeCarrying")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDoCharacterDetachmentIncludeRiding")); }
    BrzCampoPonteiro bDontPlayInstigatorActiveSoundOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bDontPlayInstigatorActiveSoundOnDino")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableBuffStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableBuffStacking")); }
    BrzCampoPonteiro bEnableDistanceBasedVfxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableDistanceBasedVfx")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStaticPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableStaticPathing")); }
    BrzCampoPonteiro bEnableTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnableTargetingTooltip")); }
    BrzCampoPonteiro bEnablesSpyglassEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bEnablesSpyglassEffect")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bFollowTarget")); }
    BrzCampoPonteiro bForceAddUnderwaterCharacterStatusValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceAddUnderwaterCharacterStatusValues")); }
    BrzCampoPonteiro bForceAllowAddingWithoutControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceAllowAddingWithoutController")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowWhileBuriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceAllowWhileBuried")); }
    BrzCampoPonteiro bForceAlwaysAllowBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceAlwaysAllowBuff")); }
    BrzCampoPonteiro bForceCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceCrosshair")); }
    BrzCampoPonteiro bForceDrawMissionDinoTargetHealthbarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceDrawMissionDinoTargetHealthbars")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceHideFloatingName")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceInstigatorTick")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceNoRotation")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceOnDediServer")); }
    BrzCampoPonteiro bForceOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceOverrideCharacterWalkingVelocity")); }
    BrzCampoPonteiro bForcePlayerProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForcePlayerProne")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSelfTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceSelfTick")); }
    BrzCampoPonteiro bForceShowFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceShowFloatingName")); }
    BrzCampoPonteiro bForceUsePreventTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceUsePreventTargeting")); }
    BrzCampoPonteiro bForceUsePreventTargetingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceUsePreventTargetingTurret")); }
    BrzCampoPonteiro bForceUseStackCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForceUseStackCount")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bForcedOnSpectatorPlayerController")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGetInstigatorChatMessagesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bGetInstigatorChatMessages")); }
    BrzCampoPonteiro bHUDFormatTimerAsTimecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHUDFormatTimerAsTimecode")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpulseDataAvailableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHasImpulseDataAvailable")); }
    BrzCampoPonteiro bHasRelatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHasRelatedMission")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHidden")); }
    BrzCampoPonteiro bHideBuffFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHideBuffFromHUD")); }
    BrzCampoPonteiro bHideBuffFromHUDOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHideBuffFromHUDOnly")); }
    BrzCampoPonteiro bHideFootStepDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHideFootStepDecals")); }
    BrzCampoPonteiro bHideTimerFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHideTimerFromHUD")); }
    BrzCampoPonteiro bHighPrioritySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bHighPrioritySound")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImmobilizeTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bImmobilizeTarget")); }
    BrzCampoPonteiro bImmobilizeTargetPreventDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bImmobilizeTargetPreventDismount")); }
    BrzCampoPonteiro bInterceptInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bInterceptInputEvents")); }
    BrzCampoPonteiro bInterceptUseActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bInterceptUseAction")); }
    BrzCampoPonteiro bInterceptWeaponToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bInterceptWeaponToggle")); }
    BrzCampoPonteiro bIsBuffPersistentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsBuffPersistent")); }
    BrzCampoPonteiro bIsCarryBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsCarryBuff")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDiseaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsDisease")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsFromSkillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsFromSkill")); }
    BrzCampoPonteiro bIsHighRiskMissionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsHighRiskMissionBuff")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsMapActor")); }
    BrzCampoPonteiro bIsSkillBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsSkillBuff")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bListenForInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bListenForInput")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bModifyFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bModifyFriction")); }
    BrzCampoPonteiro bModifyMaxAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bModifyMaxAcceleration")); }
    BrzCampoPonteiro bModifyMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bModifyMaxSpeed")); }
    BrzCampoPonteiro bModifyRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bModifyRotationRate")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetResetBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetResetBuffStart")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNotifyDamage")); }
    BrzCampoPonteiro bNotifyExperienceGainedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNotifyExperienceGained")); }
    BrzCampoPonteiro bNotifyExperienceGained_AllowCountingAlphaKillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNotifyExperienceGained_AllowCountingAlphaKills")); }
    BrzCampoPonteiro bNotifyExperienceGained_IncludeSmallAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bNotifyExperienceGained_IncludeSmallAmounts")); }
    BrzCampoPonteiro bOnlyActivateSoundForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyActivateSoundForInstigator")); }
    BrzCampoPonteiro bOnlyAddCharacterValuesUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyAddCharacterValuesUnderwater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyReplicateOnNetForcedUpdate")); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bOnlyTickIfPlayerCharacter"); }
    BrzCampoPonteiro bOnlyTickWhenPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyTickWhenPossessed")); }
    BrzCampoPonteiro bOnlyTickWhenVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOnlyTickWhenVisible")); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bOverrideBuffDescription"); }
    BrzCampoPonteiro bOverrideBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideBuffType")); }
    BrzCampoPonteiro bOverrideCharacterLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideCharacterLanding")); }
    BrzCampoPonteiro bOverrideCharacterMovementInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideCharacterMovementInput")); }
    BrzCampoPonteiro bOverrideInventoryWeightMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideInventoryWeightMultipliers")); }
    BrzCampoPonteiro bOverrideRightShoulderOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideRightShoulderOnPlayer")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideTPVCameraOffset")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bOverrideTPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro bPersistentBuffSurvivesLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPersistentBuffSurvivesLevelUp")); }
    BrzCampoPonteiro bPlayerIgnoreBuffPostprocessEffectWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino")); }
    BrzCampoPonteiro bPostUpdateTickGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPostUpdateTickGroup")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventCarryCharacter")); }
    BrzCampoPonteiro bPreventCarryOrPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventCarryOrPassenger")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearRiderOnDinoImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventClearRiderOnDinoImmobilize")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventDinoDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventDinoDismount")); }
    BrzCampoPonteiro bPreventDinoRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventDinoRiding")); }
    BrzCampoPonteiro bPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventFallDamage")); }
    BrzCampoPonteiro bPreventInputDoesOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventInputDoesOffset")); }
    BrzCampoPonteiro bPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventInstigatorAttack")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLogoutSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventLogoutSleeping")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnBigDino")); }
    BrzCampoPonteiro bPreventOnBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnBossDino")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnDino")); }
    BrzCampoPonteiro bPreventOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnPlayer")); }
    BrzCampoPonteiro bPreventOnRobotDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnRobotDino")); }
    BrzCampoPonteiro bPreventOnSeatingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnSeatingStructures")); }
    BrzCampoPonteiro bPreventOnShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnShip")); }
    BrzCampoPonteiro bPreventOnWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventOnWildDino")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bPreventSaving")); }
    BrzCampoPonteiro bReactivateWithNewDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReactivateWithNewDamageCauser")); }
    BrzCampoPonteiro bReactivationAddsNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReactivationAddsNewStack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemoteForcedFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bRemoteForcedFlee")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bReplicates")); }
    BrzCampoPonteiro bRequireControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bRequireController")); }
    BrzCampoPonteiro bResetTopStackTimeWhenAddingNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bResetTopStackTimeWhenAddingNewStack")); }
    BrzCampoPonteiro bSavePlayerDataOnSaveWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSavePlayerDataOnSaveWorld")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSavedWhenStasised")); }
    BrzCampoPonteiro bShallowEmitterDontSpawnOutOfViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bShallowEmitterDontSpawnOutOfView")); }
    BrzCampoPonteiro bShallowEmitterSpawnableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bShallowEmitterSpawnable")); }
    BrzCampoPonteiro bShowBuffModifierDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bShowBuffModifierDescription")); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bShowMammalIncubationOptions"); }
    BrzCampoPonteiro bSkillAddBuffDeactivationTimeToCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSkillAddBuffDeactivationTimeToCooldown")); }
    BrzCampoPonteiro bSkillAllowUseWhileEncumberedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSkillAllowUseWhileEncumbered")); }
    BrzCampoPonteiro bSkillAllowUseWhileSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSkillAllowUseWhileSeated")); }
    BrzCampoPonteiro bSkillBuffSetCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSkillBuffSetCooldown")); }
    BrzCampoPonteiro bSkipInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSkipInstigatorTick")); }
    BrzCampoPonteiro bSlowInstigatorFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSlowInstigatorFalling")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bStasised")); }
    BrzCampoPonteiro bStatusComponentUsingExtendedHUDTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bStatusComponentUsingExtendedHUDText")); }
    BrzCampoPonteiro bSupportsCustomHexagonConversionShopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bSupportsCustomHexagonConversionShop")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bTearOff")); }
    BrzCampoPonteiro bTickSoundInRangePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bTickSoundInRangePlayback")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bTriggerBPStasis")); }
    BrzCampoPonteiro bTriggerBPUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bTriggerBPUnstasis")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseASACameraPivotLocationForOldCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseASACameraPivotLocationForOldCamera")); }
    BrzCampoPonteiro bUseActivateSoundFadeInDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseActivateSoundFadeInDuration")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAdjustCharacterMovementImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPAdjustCharacterMovementImpulse")); }
    BrzCampoPonteiro bUseBPAdjustImpulseFromDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPAdjustImpulseFromDamage")); }
    BrzCampoPonteiro bUseBPAdjustRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPAdjustRadialDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPBuffControllerKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPBuffControllerKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPBuffKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffPreventBuildingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPBuffPreventBuilding")); }
    BrzCampoPonteiro bUseBPBuffPreventsImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPBuffPreventsImmobilization")); }
    BrzCampoPonteiro bUseBPBuffPreventsMultiuseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPBuffPreventsMultiuseEntries")); }
    BrzCampoPonteiro bUseBPCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPCanBeCarried")); }
    BrzCampoPonteiro bUseBPCanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPCanFly")); }
    BrzCampoPonteiro bUseBPChangeBuffStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPChangeBuffStatusValueModifiers")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPCheckForErrors")); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bUseBPCustomAllowAddBuff"); }
    BrzCampoPonteiro bUseBPCustomApplyColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPCustomApplyColor")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPCustomIsRelevantForClient")); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bUseBPDeactivated"); }
    BrzCampoPonteiro bUseBPDinoNameColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPDinoNameColorOverride")); }
    BrzCampoPonteiro bUseBPDinoRefreshColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPDinoRefreshColorization")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPExcludeAoEActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPExcludeAoEActor")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPForceOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bUseBPFullyHarvestedNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPFullyHarvestedNode")); }
    BrzCampoPonteiro bUseBPGetAltInventoryForAmmoConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetAltInventoryForAmmoConsumption")); }
    BrzCampoPonteiro bUseBPGetAttackAnimPlayRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetAttackAnimPlayRateModifier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPGetBuffDescriptionIconAlphaMultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetBuffDescriptionIconAlphaMult")); }
    BrzCampoPonteiro bUseBPGetBuffLevelUpStatOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetBuffLevelUpStatOverride")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCameraShakeScalarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetCameraShakeScalar")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetCustomTooltipActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetCustomTooltipActor")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetHUDElementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetHUDElements")); }
    BrzCampoPonteiro bUseBPGetMoveAnimRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetMoveAnimRate")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetOrbitCamTargetLocation")); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bUseBPGetPlayerFootStepSound"); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetWaypointsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPGetWaypointsBuff")); }
    BrzCampoPonteiro bUseBPHandleOnStartAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPHandleOnStartAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPHandleOnStartFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPHandleOnStopAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPHandleOnStopFire")); }
    BrzCampoPonteiro bUseBPInformDamageCauserOfBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPInformDamageCauserOfBuffAdded")); }
    BrzCampoPonteiro bUseBPInitializedCharacterAnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPInitializedCharacterAnimScriptInstance")); }
    BrzCampoPonteiro bUseBPInstigatorAllowDinoTargetingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPInstigatorAllowDinoTargetingRange")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsCharacterHardAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPIsCharacterHardAttached")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPModifyArmorValue")); }
    BrzCampoPonteiro bUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bUseBPNofityMontagePlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNofityMontagePlay")); }
    BrzCampoPonteiro bUseBPNonDedicatedPlayerPostAnimUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNonDedicatedPlayerPostAnimUpdate")); }
    BrzCampoPonteiro bUseBPNotifyBuffWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyBuffWeaponFired")); }
    BrzCampoPonteiro bUseBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyItemAdded")); }
    BrzCampoPonteiro bUseBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bUseBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyItemRemoved")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyOtherBuffActivated")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyOtherBuffDeactivated")); }
    BrzCampoPonteiro bUseBPNotifyPreventDismountingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPNotifyPreventDismounting")); }
    BrzCampoPonteiro bUseBPOnAoeBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnAoeBuffAdded")); }
    BrzCampoPonteiro bUseBPOnDestroyInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnDestroyInstigator")); }
    BrzCampoPonteiro bUseBPOnHexagonCountChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnHexagonCountChanged")); }
    BrzCampoPonteiro bUseBPOnInstigatorCapsuleComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnInstigatorCapsuleComponentHit")); }
    BrzCampoPonteiro bUseBPOnInstigatorLootedCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnInstigatorLootedCrate")); }
    BrzCampoPonteiro bUseBPOnInstigatorMovementModeChangedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnInstigatorMovementModeChangedNotify")); }
    BrzCampoPonteiro bUseBPOnOwnerMassTeleportEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnOwnerMassTeleportEvent")); }
    BrzCampoPonteiro bUseBPOnPlayerShoulderMountDinoChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnPlayerShoulderMountDinoChange")); }
    BrzCampoPonteiro bUseBPOnRiderChangeWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnRiderChangeWeapons")); }
    BrzCampoPonteiro bUseBPOnTamedWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOnTamedWildDino")); }
    BrzCampoPonteiro bUseBPOverrideAoEBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideAoEBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPOverrideBloodDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideBloodDecals")); }
    BrzCampoPonteiro bUseBPOverrideBuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideBuffToGiveOnDeactivation")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCameraArmLength")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCameraArmLengthInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraDesiredPivotLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCameraDesiredPivotLocation")); }
    BrzCampoPonteiro bUseBPOverrideCameraPivotLocationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCameraPivotLocationInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterLocalControlZInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCharacterLocalControlZInterpSpeed")); }
    BrzCampoPonteiro bUseBPOverrideCuddleFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideCuddleFoodTypes")); }
    BrzCampoPonteiro bUseBPOverrideDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideDynamicMusic")); }
    BrzCampoPonteiro bUseBPOverrideIsImprintPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideIsImprintPlayer")); }
    BrzCampoPonteiro bUseBPOverrideIsNetRelevantForField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideIsNetRelevantFor")); }
    BrzCampoPonteiro bUseBPOverrideMaxInventoryAccessDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideMaxInventoryAccessDistance")); }
    BrzCampoPonteiro bUseBPOverrideMaxUseDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideMaxUseDistance")); }
    BrzCampoPonteiro bUseBPOverrideTalkerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideTalkerCharacter")); }
    BrzCampoPonteiro bUseBPOverrideTargetStructureSettingsDamageAdjusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideTargetStructureSettingsDamageAdjuster")); }
    BrzCampoPonteiro bUseBPOverrideTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideTargetingDesire")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPOverrideValuesToAddPerSecondField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideValuesToAddPerSecond")); }
    BrzCampoPonteiro bUseBPOverrideWaterJumpVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPOverrideWaterJumpVelocity")); }
    BrzCampoPonteiro bUseBPPassHarvestExperienceToActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPassHarvestExperienceToActor")); }
    BrzCampoPonteiro bUseBPPreClaimWildFollowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreClaimWildFollower")); }
    BrzCampoPonteiro bUseBPPreServerUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreServerUpload")); }
    BrzCampoPonteiro bUseBPPreventAddingOtherBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventAddingOtherBuff")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventEquipWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventEquipWeapons")); }
    BrzCampoPonteiro bUseBPPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventFallDamage")); }
    BrzCampoPonteiro bUseBPPreventFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventFirstPerson")); }
    BrzCampoPonteiro bUseBPPreventFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventFlight")); }
    BrzCampoPonteiro bUseBPPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventInstigatorAttack")); }
    BrzCampoPonteiro bUseBPPreventInstigatorMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventInstigatorMovementMode")); }
    BrzCampoPonteiro bUseBPPreventNotifySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventNotifySound")); }
    BrzCampoPonteiro bUseBPPreventOnStartJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventOnStartJump")); }
    BrzCampoPonteiro bUseBPPreventRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventRunning")); }
    BrzCampoPonteiro bUseBPPreventTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventTekArmorBuffs")); }
    BrzCampoPonteiro bUseBPPreventThrowingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPPreventThrowingItem")); }
    BrzCampoPonteiro bUseBPSetupForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPSetupForInstigator")); }
    BrzCampoPonteiro bUseBPShouldForceOwnerDedicatedMovementTickPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame")); }
    BrzCampoPonteiro bUseBP_AdjustDamageExField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBP_AdjustDamageEx")); }
    BrzCampoPonteiro bUseBP_OnOwnerDealtDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBP_OnOwnerDealtDamage")); }
    BrzCampoPonteiro bUseBP_OnOwnerTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBP_OnOwnerTeleported")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBP_OverrideTerminalVelocity")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBuffOverrideFinalWanderLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBuffOverrideFinalWanderLocation")); }
    BrzCampoPonteiro bUseBuffOverrideInventoryAccessInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBuffOverrideInventoryAccessInput")); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bUseBuffTickClient"); }
    BrzCampoPonteiro bUseBuffTickServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseBuffTickServer")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCenteredTPVCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseCenteredTPVCamera")); }
    BrzCampoPonteiro bUseConsolidatedMultiUseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseConsolidatedMultiUseWheel")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseFinalAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseFinalAdjustDamage")); }
    BrzCampoPonteiro bUseForcedBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseForcedBuffAimOverride")); }
    BrzCampoPonteiro bUseGetGravityZScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseGetGravityZScale")); }
    BrzCampoPonteiro bUseInstigatorItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseInstigatorItem")); }
    BrzCampoPonteiro bUseInterceptInstigatorPlayerEmoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseInterceptInstigatorPlayerEmote")); }
    BrzCampoPonteiro bUseInterceptItemSlotUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseInterceptItemSlotUse")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNiagaraDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseNiagaraDestroyOnSystemFinish")); }
    BrzCampoPonteiro bUseOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseOnCarryCharacter")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePostAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUsePostAdjustDamage")); }
    BrzCampoPonteiro bUseRemoteClientTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseRemoteClientTick")); }
    BrzCampoPonteiro bUseSetHiddenInGameFromInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseSetHiddenInGameFromInstigator")); }
    BrzCampoPonteiro bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTickingDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUseTickingDeactivation")); }
    BrzCampoPonteiro bUsesInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bUsesInstigator")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.bWasActivated")); }
    BrzCampoPonteiro omitHapticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.omitHaptics")); }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_HotbarReplacer.staticPathingDestination")); }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_HOTBARREPLACER_H
