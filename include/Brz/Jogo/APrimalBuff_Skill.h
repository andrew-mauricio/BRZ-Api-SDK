// ==========================================================================
//  APrimalBuff_Skill — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_SKILL_H
#define BRZ_SDK_JOGO_APRIMALBUFF_SKILL_H

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


struct APrimalBuff_Skill
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_Skill"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.ActivateSkill()
    // endereco: cache_pdb_25090264
    BrzPonteiro ActivateSkill() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Skill.ActivateSkill()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.BPCanSkillBeActivated(ABasePlayerController*,FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPCanSkillBeActivated(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "APrimalBuff_Skill.BPCanSkillBeActivated(ABasePlayerController*,FName,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.GetMySkillName_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetMySkillName_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Skill.GetMySkillName_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.GetSkillModifier(FName,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkillModifier(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuff_Skill.GetSkillModifier(FName,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.LocalExecSkillBuffCommand(FName,FFunctionParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalExecSkillBuffCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "APrimalBuff_Skill.LocalExecSkillBuffCommand(FName,FFunctionParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.OnSkillActivated(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnSkillActivated(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_Skill.OnSkillActivated(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Skill.SetBuffDurationToSkillDurationModifier(APrimalBuff*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetBuffDurationToSkillDurationModifier(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Skill.SetBuffDurationToSkillDurationModifier(APrimalBuff*)", a0);
    }

    float& AOEBuffIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AOEBuffIntervalMax"); }
    float& AOEBuffIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AOEBuffIntervalMin"); }
    float& AOEBuffRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AOEBuffRange"); }
    BrzCampoPonteiro AOEOtherBuffToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.AOEOtherBuffToApply")); }
    float& ActivateSoundFadeInDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ActivateSoundFadeInDuration"); }
    TArray<void*>& ActivePreventsBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.ActivePreventsBuffClasses"); }
    BrzCampoPonteiro ActivePreventsBuffClassesExceptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ActivePreventsBuffClassesExceptions")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_Skill.ActorUsingQuickAction"); }
    int& AddBuffMaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.AddBuffMaxNumStacks"); }
    float& AdditionalRidingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AdditionalRidingDistance"); }
    int& AltNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.AltNumStacks"); }
    float& AoEApplyDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AoEApplyDamage"); }
    float& AoEApplyDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.AoEApplyDamageInterval"); }
    BrzCampoPonteiro AoEApplyDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.AoEApplyDamageType")); }
    BrzCampoPonteiro AoEBuffLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.AoEBuffLocOffset")); }
    TArray<void*>& AoEClassesToExcludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.AoEClassesToExclude"); }
    TArray<void*>& AoEClassesToIncludeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.AoEClassesToInclude"); }
    BrzCampoPonteiro AoETraceToTargetsStartOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.AoETraceToTargetsStartOffset")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.AutoReceiveInput"); }
    TArray<void*>& BPNotifyActivationToOtherBuffClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.BPNotifyActivationToOtherBuffClasses"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.BlueprintCreatedComponents"); }
    TArray<void*>& BuffClassesToCancelOnActivationField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.BuffClassesToCancelOnActivation"); }
    TWeakObjectPtr<void>& BuffDamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Skill.BuffDamageCauser"); }
    BrzCampoPonteiro BuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.BuffDescription")); }
    BrzCampoPonteiro BuffPersistentDataClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.BuffPersistentDataClass")); }
    BrzCampoPonteiro BuffPostProcessEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.BuffPostProcessEffect")); }
    TArray<void*>& BuffPreventsOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.BuffPreventsOwnerClass"); }
    TArray<void*>& BuffRequiresOwnerClassField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.BuffRequiresOwnerClass"); }
    double& BuffStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.BuffStartTime"); }
    float& BuffTickClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickClientMaxTime"); }
    float& BuffTickClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickClientMinTime"); }
    float& BuffTickRemoteClientMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickRemoteClientMaxTime"); }
    float& BuffTickRemoteClientMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickRemoteClientMinTime"); }
    float& BuffTickServerMaxTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickServerMaxTime"); }
    float& BuffTickServerMinTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.BuffTickServerMinTime"); }
    BrzCampoPonteiro BuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.BuffToGiveOnDeactivation")); }
    BrzCampoPonteiro CameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.CameraShake")); }
    float& CameraShakeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CameraShakeFalloff"); }
    float& CameraShakeInnerRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CameraShakeInnerRadius"); }
    float& CameraShakeOuterRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CameraShakeOuterRadius"); }
    float& CameraShakeScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CameraShakeScaleMultiplier"); }
    float& CharacterAOEBuffDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterAOEBuffDamage"); }
    float& CharacterAOEBuffResistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterAOEBuffResistance"); }
    float& CharacterAdd_DefaultHyperthermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterAdd_DefaultHyperthermicInsulation"); }
    float& CharacterAdd_DefaultHypothermicInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterAdd_DefaultHypothermicInsulation"); }
    float& CharacterMultiplier_DefaultExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterMultiplier_DefaultExtraDamageMultiplier"); }
    float& CharacterMultiplier_ExtraFoodConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterMultiplier_ExtraFoodConsumptionMultiplier"); }
    float& CharacterMultiplier_ExtraWaterConsumptionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterMultiplier_ExtraWaterConsumptionMultiplier"); }
    float& CharacterMultiplier_SubmergedOxygenDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CharacterMultiplier_SubmergedOxygenDecreaseSpeed"); }
    TArray<void*>& CharacterStatusValueModifiersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.CharacterStatusValueModifiers"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ColorParameterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ColorParameter")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.ControllingMatineeActors"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.CustomTimeDilation"); }
    float& DeactivateAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.DeactivateAfterTime"); }
    float& DeactivateSoundFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.DeactivateSoundFadeOutDuration"); }
    USoundBase*& DeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_Skill.DeactivatedSound"); }
    float& DeactivationLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.DeactivationLifespan"); }
    BrzCampoPonteiro DecalToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.DecalToSpawn")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DepleteInstigatorItemDurabilityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.DepleteInstigatorItemDurabilityPerSecond"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.DesiredRepGraphBehavior"); }
    float& DinoColorizationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.DinoColorizationInterpSpeed"); }
    int& DinoColorizationPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.DinoColorizationPriority"); }
    TArray<void*>& DisabledWeaponTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.DisabledWeaponTags"); }
    BrzCampoPonteiro EmitterNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.EmitterNiagaraComponent")); }
    float& ExtendBuffTimeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ExtendBuffTimeOverride"); }
    USoundBase*& ExtraActivationSoundToPlayField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalBuff_Skill.ExtraActivationSoundToPlay"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.ForceMaximumReplicationRateUntilTime"); }
    int& ForceNetworkSpatializationBuffMaxLimitNumField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.ForceNetworkSpatializationBuffMaxLimitNum"); }
    float& ForceNetworkSpatializationBuffMaxLimitRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ForceNetworkSpatializationBuffMaxLimitRange"); }
    BrzCampoPonteiro ForceNetworkSpatializationMaxLimitBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ForceNetworkSpatializationMaxLimitBuffType")); }
    int& ForceNetworkSpatializationMaxLimitBuffTypeFlagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.ForceNetworkSpatializationMaxLimitBuffTypeFlag"); }
    float& FrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.FrictionModifier"); }
    float& HarvestQuantityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.HarvestQuantityMultiplier"); }
    BrzCampoPonteiro HitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.HitLocation")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.HypoThermiaInsulation"); }
    BrzCampoPonteiro ImpulseDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ImpulseData")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalBuff_Skill.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalBuff_Skill.Instigator"); }
    FName& InstigatorAttachmentSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.InstigatorAttachmentSocket"); }
    FName& InstigatorAttachmentSocket_PlayerOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.InstigatorAttachmentSocket_PlayerOverride"); }
    TWeakObjectPtr<void>& InstigatorItemField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Skill.InstigatorItem"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.InsulationRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastExitStasisTime"); }
    double& LastItemDurabilityDepletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastItemDurabilityDepletionTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Skill.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_Skill.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastThrottledTickTime"); }
    double& LastTimeAddedStackField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.LastTimeAddedStack"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.Layers"); }
    BrzCampoPonteiro MPCAdjustersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.MPCAdjusters")); }
    int& MaxNumStacksField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.MaxNumStacks"); }
    TArray<void*>& MaxStatScalersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.MaxStatScalers"); }
    float& Maximum2DVelocityForStaminaRecoveryField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.Maximum2DVelocityForStaminaRecovery"); }
    float& MaximumVelocityZForSlowingFallField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.MaximumVelocityZForSlowingFall"); }
    float& MeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.MeleeDamageMultiplier"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.MinNetUpdateFrequency"); }
    float& MinTimeBetweenStacksField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.MinTimeBetweenStacks"); }
    UPrimalBuffPersistentData*& MyBuffPersistentDataField() const
    { return *GetNativePointerField<UPrimalBuffPersistentData**>(this, "APrimalBuff_Skill.MyBuffPersistentData"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_Skill.NetworkSpatializationParent"); }
    BrzCampoPonteiro NiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.NiagaraComponent")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnMatineeUpdated")); }
    BrzCampoPonteiro OnParticleBurstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnParticleBurst")); }
    BrzCampoPonteiro OnParticleCollideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnParticleCollide")); }
    BrzCampoPonteiro OnParticleDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnParticleDeath")); }
    BrzCampoPonteiro OnParticleSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnParticleSpawn")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.OnTargetingTeamChanged")); }
    float& OnlyForInstigatorSoundFadeInTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.OnlyForInstigatorSoundFadeInTime"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.OriginalCreationTime"); }
    TArray<void*>& OverrideInventoryItemClassWeightMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.OverrideInventoryItemClassWeightMultipliers"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalBuff_Skill.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Skill.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ParticleSystemComponent")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.PhysicsReplicationMode")); }
    float& PostProcessInterpSpeedDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.PostProcessInterpSpeedDown"); }
    float& PostProcessInterpSpeedUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.PostProcessInterpSpeedUp"); }
    TArray<UMaterialInterface*>& PostprocessBlendablesToExcludeField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalBuff_Skill.PostprocessBlendablesToExclude"); }
    TArray<void*>& PostprocessMaterialAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.PostprocessMaterialAdjusters"); }
    TArray<void*>& PreventActorClassesTargetingField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.PreventActorClassesTargeting"); }
    TArray<void*>& PreventActorClassesTargetingRangesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.PreventActorClassesTargetingRanges"); }
    float& PreventIfMovementMassGreaterThanField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.PreventIfMovementMassGreaterThan"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalBuff_Skill.PrimaryActorTick"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.RayTracingGroupId"); }
    float& ReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ReceiveDamageMultiplier"); }
    float& ReflectMeleeDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ReflectMeleeDamagePercent"); }
    AMissionType*& RelatedMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalBuff_Skill.RelatedMission"); }
    float& RemoteForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.RemoteForcedFleeDuration"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalBuff_Skill.RootComponent"); }
    BrzCampoPonteiro RootTransformCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.RootTransformComp")); }
    float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
    float& ShallowEmitterOverrideSecondsBeforeInactiveField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ShallowEmitterOverrideSecondsBeforeInactive"); }
    float& ShallowEmitterSpawnableMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ShallowEmitterSpawnableMaxDistance"); }
    BrzCampoPonteiro ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.ShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    float& SkillActivationCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SkillActivationCost"); }
    unsigned char& SkillActivationStatusCostTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Skill.SkillActivationStatusCostType"); }
    BrzCampoPonteiro SkillProviderObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.SkillProviderObject")); }
    int& SkillRankField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.SkillRank"); }
    FName& SkillTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalBuff_Skill.SkillTag"); }
    float& SlowInstigatorFallingAddZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SlowInstigatorFallingAddZVelocity"); }
    float& SlowInstigatorFallingDampenZVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SlowInstigatorFallingDampenZVelocity"); }
    UAudioComponent*& SoundToPlayField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalBuff_Skill.SoundToPlay"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnedForActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.SpawnedForActor")); }
    float& StackDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.StackDuration"); }
    float& StackingUpdatedBuffLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.StackingUpdatedBuffLifetime"); }
    float& StaminaDrainMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.StaminaDrainMultiplier"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalBuff_Skill.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalBuff_Skill.StasisUnRegisteredComponents"); }
    float& SubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SubmergedMaxAccelerationModifier"); }
    float& SubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SubmergedMaxSpeedModifier"); }
    float& SubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.SubmergedRotationRateModifier"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.TPVCameraOffsetMultiplier")); }
    float& TPVCameraSpeedInterpolationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.TPVCameraSpeedInterpolationMultiplier"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Skill.Tags"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBuff_Skill.Target"); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Skill.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "APrimalBuff_Skill.TargetingInfoTooltipScale"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.TargetingTeam"); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.TargetingTooltipCheckRange"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Skill.UnstasisLastInRangeTime"); }
    float& UnsubmergedMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.UnsubmergedMaxAccelerationModifier"); }
    float& UnsubmergedMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.UnsubmergedMaxSpeedModifier"); }
    float& UnsubmergedRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.UnsubmergedRotationRateModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.UpdateOverlapsMethodDuringLevelStreaming"); }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamage()
    { return { (void*)this, "UseBPAdjustOutputDamage" }; }
    BitFieldValue<bool, unsigned __int32> UseBPAdjustOutputDamageForNonMeleePlayerDamage()
    { return { (void*)this, "UseBPAdjustOutputDamageForNonMeleePlayerDamage" }; }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_Skill.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ViewMinExposureMultiplier"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPtoAddRate"); }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffIgnoreSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffIgnoreSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnDinos()
    { return { (void*)this, "bAOEApplyOtherBuffOnDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffOnPlayers()
    { return { (void*)this, "bAOEApplyOtherBuffOnPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAOEApplyOtherBuffRequireSameTeam()
    { return { (void*)this, "bAOEApplyOtherBuffRequireSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAOEBuffCarnosOnly()
    { return { (void*)this, "bAOEBuffCarnosOnly" }; }
    BitFieldValue<bool, unsigned __int32> bAOEOnlyApplyOtherBuffToWildDinos()
    { return { (void*)this, "bAOEOnlyApplyOtherBuffToWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAddCharacterValues()
    { return { (void*)this, "bAddCharacterValues" }; }
    BitFieldValue<bool, unsigned __int32> bAddExtendBuffTime()
    { return { (void*)this, "bAddExtendBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddReactivates()
    { return { (void*)this, "bAddReactivates" }; }
    BitFieldValue<bool, unsigned __int32> bAddRequireSameDamageCauser()
    { return { (void*)this, "bAddRequireSameDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bAddResetsBuffTime()
    { return { (void*)this, "bAddResetsBuffTime" }; }
    BitFieldValue<bool, unsigned __int32> bAddStackResetsBuffStart()
    { return { (void*)this, "bAddStackResetsBuffStart" }; }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bAddTPVCameraOffset"); }
    BitFieldValue<bool, unsigned __int32> bAdditionalExperienceMultiplier()
    { return { (void*)this, "bAdditionalExperienceMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAdditionalTamingSpeedMultiplier()
    { return { (void*)this, "bAdditionalTamingSpeedMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffStasis()
    { return { (void*)this, "bAllowBuffStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBuffWhenInstigatorDead()
    { return { (void*)this, "bAllowBuffWhenInstigatorDead" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLoopingEmitter()
    { return { (void*)this, "bAllowLoopingEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseEntriesFromSelf()
    { return { (void*)this, "bAllowMultiUseEntriesFromSelf" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOnlyCustomFallDamage()
    { return { (void*)this, "bAllowOnlyCustomFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretsToTargetInstigatorIfTraceHitsBuff()
    { return { (void*)this, "bAllowTurretsToTargetInstigatorIfTraceHitsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysShowBuffDescription()
    { return { (void*)this, "bAlwaysShowBuffDescription" }; }
    BitFieldValue<bool, unsigned __int32> bAoEApplyDamageAllTargetables()
    { return { (void*)this, "bAoEApplyDamageAllTargetables" }; }
    BitFieldValue<bool, unsigned __int32> bAoEBuffAllowIfAlreadyBuffed()
    { return { (void*)this, "bAoEBuffAllowIfAlreadyBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAoEIgnoreDinosTargetingInstigator()
    { return { (void*)this, "bAoEIgnoreDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoEOnlyOnDinosTargetingInstigator()
    { return { (void*)this, "bAoEOnlyOnDinosTargetingInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bAoETraceToTargets()
    { return { (void*)this, "bAoETraceToTargets" }; }
    BitFieldValue<bool, unsigned __int32> bApplyOneMaxSpeedModifierPerStack()
    { return { (void*)this, "bApplyOneMaxSpeedModifierPerStack" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToDinos()
    { return { (void*)this, "bApplyStatModifierToDinos" }; }
    BitFieldValue<bool, unsigned __int32> bApplyStatModifierToPlayers()
    { return { (void*)this, "bApplyStatModifierToPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPAddMultiUseEntries()
    { return { (void*)this, "bBPAddMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPAdjustStatusValueModification()
    { return { (void*)this, "bBPAdjustStatusValueModification" }; }
    BitFieldValue<bool, unsigned __int32> bBPDrawBuffStatusHUD()
    { return { (void*)this, "bBPDrawBuffStatusHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBPFilterMultiUseFilterTargetEntries()
    { return { (void*)this, "bBPFilterMultiUseFilterTargetEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyCharacterFOV()
    { return { (void*)this, "bBPModifyCharacterFOV" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideActorForTargetingTooltip()
    { return { (void*)this, "bBPOverrideActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bBPOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bBPOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideCharacterWalkVelocity()
    { return { (void*)this, "bBPOverrideCharacterWalkVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideWeaponBob()
    { return { (void*)this, "bBPOverrideWeaponBob" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedByPawn()
    { return { (void*)this, "bBPUseBumpedByPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseBumpedPawn()
    { return { (void*)this, "bBPUseBumpedPawn" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUD()
    { return { (void*)this, "bBuffDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffDrawFloatingHUDRemotePlayers()
    { return { (void*)this, "bBuffDrawFloatingHUDRemotePlayers" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTick()
    { return { (void*)this, "bBuffForceNoTick" }; }
    BitFieldValue<bool, unsigned __int32> bBuffForceNoTickDedicated()
    { return { (void*)this, "bBuffForceNoTickDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHandleInstigatorMultiUseEntries()
    { return { (void*)this, "bBuffHandleInstigatorMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBuffHidesNonWeaponHUD()
    { return { (void*)this, "bBuffHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreSerializeForInstigator()
    { return { (void*)this, "bBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsApplyingLevelUps()
    { return { (void*)this, "bBuffPreventsApplyingLevelUps" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsCryo()
    { return { (void*)this, "bBuffPreventsCryo" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccess()
    { return { (void*)this, "bBuffPreventsInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsInventoryAccessAllowMissions()
    { return { (void*)this, "bBuffPreventsInventoryAccessAllowMissions" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsMountedWeaponry()
    { return { (void*)this, "bBuffPreventsMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bBuffPreventsPlayerDropAllInventory()
    { return { (void*)this, "bBuffPreventsPlayerDropAllInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderNotifiesOnClient()
    { return { (void*)this, "bCallRiderNotifiesOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCameraShakeOrientTowardsEpicenter()
    { return { (void*)this, "bCameraShakeOrientTowardsEpicenter" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCausesCryoSickness()
    { return { (void*)this, "bCausesCryoSickness" }; }
    BitFieldValue<bool, unsigned __int32> bCheckPreventInput()
    { return { (void*)this, "bCheckPreventInput" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bCompleteCustomDepthStencilOverride()
    { return { (void*)this, "bCompleteCustomDepthStencilOverride" }; }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bContinueTickingClientAfterDeactivate"); }
    BitFieldValue<bool, unsigned __int32> bContinueTickingServerAfterDeactivate()
    { return { (void*)this, "bContinueTickingServerAfterDeactivate" }; }
    BitFieldValue<bool, unsigned __int32> bCurrentlyActive()
    { return { (void*)this, "bCurrentlyActive" }; }
    BitFieldValue<bool, unsigned __int32> bCustomDepthStencilIgnoreHealth()
    { return { (void*)this, "bCustomDepthStencilIgnoreHealth" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateAfterAddingXP()
    { return { (void*)this, "bDeactivateAfterAddingXP" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivateOnJump()
    { return { (void*)this, "bDeactivateOnJump" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivated()
    { return { (void*)this, "bDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bDeactivatedSoundOnlyLocal()
    { return { (void*)this, "bDeactivatedSoundOnlyLocal" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bDediServerUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bDelayedDeactivation()
    { return { (void*)this, "bDelayedDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnSystemFinish()
    { return { (void*)this, "bDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnTargetStasis()
    { return { (void*)this, "bDestroyOnTargetStasis" }; }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bDestroyWhenUnpossessed"); }
    BitFieldValue<bool, unsigned __int32> bDinoIgnoreBuffPostprocessEffectWhenRidden()
    { return { (void*)this, "bDinoIgnoreBuffPostprocessEffectWhenRidden" }; }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bDisableBloom"); }
    BitFieldValue<bool, unsigned __int32> bDisableFaceRotation()
    { return { (void*)this, "bDisableFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFootstepsParticles()
    { return { (void*)this, "bDisableFootstepsParticles" }; }
    BitFieldValue<bool, unsigned __int32> bDisableIfCharacterUnderwater()
    { return { (void*)this, "bDisableIfCharacterUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDProgressBar()
    { return { (void*)this, "bDisplayHUDProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachment()
    { return { (void*)this, "bDoCharacterDetachment" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeCarrying()
    { return { (void*)this, "bDoCharacterDetachmentIncludeCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bDoCharacterDetachmentIncludeRiding()
    { return { (void*)this, "bDoCharacterDetachmentIncludeRiding" }; }
    BitFieldValue<bool, unsigned __int32> bDontPlayInstigatorActiveSoundOnDino()
    { return { (void*)this, "bDontPlayInstigatorActiveSoundOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableBuffStacking()
    { return { (void*)this, "bEnableBuffStacking" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableStaticPathing()
    { return { (void*)this, "bEnableStaticPathing" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTargetingTooltip()
    { return { (void*)this, "bEnableTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bEnablesSpyglassEffect()
    { return { (void*)this, "bEnablesSpyglassEffect" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFollowTarget()
    { return { (void*)this, "bFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAddUnderwaterCharacterStatusValues()
    { return { (void*)this, "bForceAddUnderwaterCharacterStatusValues" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowAddingWithoutController()
    { return { (void*)this, "bForceAllowAddingWithoutController" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowWhileBuried()
    { return { (void*)this, "bForceAllowWhileBuried" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBuff()
    { return { (void*)this, "bForceAlwaysAllowBuff" }; }
    BitFieldValue<bool, unsigned __int32> bForceCrosshair()
    { return { (void*)this, "bForceCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawMissionDinoTargetHealthbars()
    { return { (void*)this, "bForceDrawMissionDinoTargetHealthbars" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideFloatingName()
    { return { (void*)this, "bForceHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceInstigatorTick()
    { return { (void*)this, "bForceInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoRotation()
    { return { (void*)this, "bForceNoRotation" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnDediServer()
    { return { (void*)this, "bForceOnDediServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterFlyingVelocity()
    { return { (void*)this, "bForceOverrideCharacterFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bForceOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterSwimmingVelocity()
    { return { (void*)this, "bForceOverrideCharacterSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForceOverrideCharacterWalkingVelocity()
    { return { (void*)this, "bForceOverrideCharacterWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bForcePlayerProne()
    { return { (void*)this, "bForcePlayerProne" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSelfTick()
    { return { (void*)this, "bForceSelfTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowFloatingName()
    { return { (void*)this, "bForceShowFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargeting()
    { return { (void*)this, "bForceUsePreventTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bForceUsePreventTargetingTurret()
    { return { (void*)this, "bForceUsePreventTargetingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseStackCount()
    { return { (void*)this, "bForceUseStackCount" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bForcedOnSpectatorPlayerController()
    { return { (void*)this, "bForcedOnSpectatorPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bGetInstigatorChatMessages()
    { return { (void*)this, "bGetInstigatorChatMessages" }; }
    BitFieldValue<bool, unsigned __int32> bHUDFormatTimerAsTimecode()
    { return { (void*)this, "bHUDFormatTimerAsTimecode" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpulseDataAvailable()
    { return { (void*)this, "bHasImpulseDataAvailable" }; }
    BitFieldValue<bool, unsigned __int32> bHasRelatedMission()
    { return { (void*)this, "bHasRelatedMission" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUD()
    { return { (void*)this, "bHideBuffFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideBuffFromHUDOnly()
    { return { (void*)this, "bHideBuffFromHUDOnly" }; }
    BitFieldValue<bool, unsigned __int32> bHideFootStepDecals()
    { return { (void*)this, "bHideFootStepDecals" }; }
    BitFieldValue<bool, unsigned __int32> bHideTimerFromHUD()
    { return { (void*)this, "bHideTimerFromHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHighPrioritySound()
    { return { (void*)this, "bHighPrioritySound" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTarget()
    { return { (void*)this, "bImmobilizeTarget" }; }
    BitFieldValue<bool, unsigned __int32> bImmobilizeTargetPreventDismount()
    { return { (void*)this, "bImmobilizeTargetPreventDismount" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptInputEvents()
    { return { (void*)this, "bInterceptInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptUseAction()
    { return { (void*)this, "bInterceptUseAction" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptWeaponToggle()
    { return { (void*)this, "bInterceptWeaponToggle" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffPersistent()
    { return { (void*)this, "bIsBuffPersistent" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryBuff()
    { return { (void*)this, "bIsCarryBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDisease()
    { return { (void*)this, "bIsDisease" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromSkill()
    { return { (void*)this, "bIsFromSkill" }; }
    BitFieldValue<bool, unsigned __int32> bIsHighRiskMissionBuff()
    { return { (void*)this, "bIsHighRiskMissionBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkillBuff()
    { return { (void*)this, "bIsSkillBuff" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bListenForInput()
    { return { (void*)this, "bListenForInput" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bModifyFriction()
    { return { (void*)this, "bModifyFriction" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxAcceleration()
    { return { (void*)this, "bModifyMaxAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bModifyMaxSpeed()
    { return { (void*)this, "bModifyMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bModifyRotationRate()
    { return { (void*)this, "bModifyRotationRate" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetResetBuffStart()
    { return { (void*)this, "bNetResetBuffStart" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyDamage()
    { return { (void*)this, "bNotifyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained()
    { return { (void*)this, "bNotifyExperienceGained" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_AllowCountingAlphaKills()
    { return { (void*)this, "bNotifyExperienceGained_AllowCountingAlphaKills" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyExperienceGained_IncludeSmallAmounts()
    { return { (void*)this, "bNotifyExperienceGained_IncludeSmallAmounts" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyActivateSoundForInstigator()
    { return { (void*)this, "bOnlyActivateSoundForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAddCharacterValuesUnderwater()
    { return { (void*)this, "bOnlyAddCharacterValuesUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bOnlyTickIfPlayerCharacter"); }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenPossessed()
    { return { (void*)this, "bOnlyTickWhenPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTickWhenVisible()
    { return { (void*)this, "bOnlyTickWhenVisible" }; }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bOverrideBuffDescription"); }
    BitFieldValue<bool, unsigned __int32> bOverrideBuffType()
    { return { (void*)this, "bOverrideBuffType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterLanding()
    { return { (void*)this, "bOverrideCharacterLanding" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCharacterMovementInput()
    { return { (void*)this, "bOverrideCharacterMovementInput" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideInventoryWeightMultipliers()
    { return { (void*)this, "bOverrideInventoryWeightMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideRightShoulderOnPlayer()
    { return { (void*)this, "bOverrideRightShoulderOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffset()
    { return { (void*)this, "bOverrideTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideTPVCameraOffsetMultiplier()
    { return { (void*)this, "bOverrideTPVCameraOffsetMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bPersistentBuffSurvivesLevelUp()
    { return { (void*)this, "bPersistentBuffSurvivesLevelUp" }; }
    BitFieldValue<bool, unsigned __int32> bPlayerIgnoreBuffPostprocessEffectWhenRidingDino()
    { return { (void*)this, "bPlayerIgnoreBuffPostprocessEffectWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bPostUpdateTickGroup()
    { return { (void*)this, "bPostUpdateTickGroup" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryCharacter()
    { return { (void*)this, "bPreventCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarryOrPassenger()
    { return { (void*)this, "bPreventCarryOrPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearRiderOnDinoImmobilize()
    { return { (void*)this, "bPreventClearRiderOnDinoImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoDismount()
    { return { (void*)this, "bPreventDinoDismount" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoRiding()
    { return { (void*)this, "bPreventDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallDamage()
    { return { (void*)this, "bPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInputDoesOffset()
    { return { (void*)this, "bPreventInputDoesOffset" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInstigatorAttack()
    { return { (void*)this, "bPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLogoutSleeping()
    { return { (void*)this, "bPreventLogoutSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBigDino()
    { return { (void*)this, "bPreventOnBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnBossDino()
    { return { (void*)this, "bPreventOnBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDino()
    { return { (void*)this, "bPreventOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnPlayer()
    { return { (void*)this, "bPreventOnPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnRobotDino()
    { return { (void*)this, "bPreventOnRobotDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnSeatingStructures()
    { return { (void*)this, "bPreventOnSeatingStructures" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnShip()
    { return { (void*)this, "bPreventOnShip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnWildDino()
    { return { (void*)this, "bPreventOnWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bReactivateWithNewDamageCauser()
    { return { (void*)this, "bReactivateWithNewDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bReactivationAddsNewStack()
    { return { (void*)this, "bReactivationAddsNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteForcedFlee()
    { return { (void*)this, "bRemoteForcedFlee" }; }
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
    BitFieldValue<bool, unsigned __int32> bRequireController()
    { return { (void*)this, "bRequireController" }; }
    BitFieldValue<bool, unsigned __int32> bResetTopStackTimeWhenAddingNewStack()
    { return { (void*)this, "bResetTopStackTimeWhenAddingNewStack" }; }
    BitFieldValue<bool, unsigned __int32> bSavePlayerDataOnSaveWorld()
    { return { (void*)this, "bSavePlayerDataOnSaveWorld" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterDontSpawnOutOfView()
    { return { (void*)this, "bShallowEmitterDontSpawnOutOfView" }; }
    BitFieldValue<bool, unsigned __int32> bShallowEmitterSpawnable()
    { return { (void*)this, "bShallowEmitterSpawnable" }; }
    BitFieldValue<bool, unsigned __int32> bShowBuffModifierDescription()
    { return { (void*)this, "bShowBuffModifierDescription" }; }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bShowMammalIncubationOptions"); }
    BitFieldValue<bool, unsigned __int32> bSkillAddBuffDeactivationTimeToCooldown()
    { return { (void*)this, "bSkillAddBuffDeactivationTimeToCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileEncumbered()
    { return { (void*)this, "bSkillAllowUseWhileEncumbered" }; }
    BitFieldValue<bool, unsigned __int32> bSkillAllowUseWhileSeated()
    { return { (void*)this, "bSkillAllowUseWhileSeated" }; }
    BitFieldValue<bool, unsigned __int32> bSkillBuffSetCooldown()
    { return { (void*)this, "bSkillBuffSetCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bSkipInstigatorTick()
    { return { (void*)this, "bSkipInstigatorTick" }; }
    BitFieldValue<bool, unsigned __int32> bSlowInstigatorFalling()
    { return { (void*)this, "bSlowInstigatorFalling" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStatusComponentUsingExtendedHUDText()
    { return { (void*)this, "bStatusComponentUsingExtendedHUDText" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTickSoundInRangePlayback()
    { return { (void*)this, "bTickSoundInRangePlayback" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPUnstasis()
    { return { (void*)this, "bTriggerBPUnstasis" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseASACameraPivotLocationForOldCamera()
    { return { (void*)this, "bUseASACameraPivotLocationForOldCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseActivateSoundFadeInDuration()
    { return { (void*)this, "bUseActivateSoundFadeInDuration" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustCharacterMovementImpulse()
    { return { (void*)this, "bUseBPAdjustCharacterMovementImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustImpulseFromDamage()
    { return { (void*)this, "bUseBPAdjustImpulseFromDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustRadialDamage()
    { return { (void*)this, "bUseBPAdjustRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffControllerKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffControllerKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffKilledSomethingEvent()
    { return { (void*)this, "bUseBPBuffKilledSomethingEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventBuilding()
    { return { (void*)this, "bUseBPBuffPreventBuilding" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsImmobilization()
    { return { (void*)this, "bUseBPBuffPreventsImmobilization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBuffPreventsMultiuseEntries()
    { return { (void*)this, "bUseBPBuffPreventsMultiuseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeCarried()
    { return { (void*)this, "bUseBPCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFly()
    { return { (void*)this, "bUseBPCanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangeBuffStatusValueModifiers()
    { return { (void*)this, "bUseBPChangeBuffStatusValueModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPCustomAllowAddBuff"); }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomApplyColor()
    { return { (void*)this, "bUseBPCustomApplyColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPDeactivated"); }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoNameColorOverride()
    { return { (void*)this, "bUseBPDinoNameColorOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoRefreshColorization()
    { return { (void*)this, "bUseBPDinoRefreshColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPExcludeAoEActor()
    { return { (void*)this, "bUseBPExcludeAoEActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceOverrideWeaponFireTransform()
    { return { (void*)this, "bUseBPForceOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFullyHarvestedNode()
    { return { (void*)this, "bUseBPFullyHarvestedNode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAltInventoryForAmmoConsumption()
    { return { (void*)this, "bUseBPGetAltInventoryForAmmoConsumption" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetAttackAnimPlayRateModifier()
    { return { (void*)this, "bUseBPGetAttackAnimPlayRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDamageCauser()
    { return { (void*)this, "bUseBPGetBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffDescriptionIconAlphaMult()
    { return { (void*)this, "bUseBPGetBuffDescriptionIconAlphaMult" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBuffLevelUpStatOverride()
    { return { (void*)this, "bUseBPGetBuffLevelUpStatOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraShakeScalar()
    { return { (void*)this, "bUseBPGetCameraShakeScalar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCustomTooltipActor()
    { return { (void*)this, "bUseBPGetCustomTooltipActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDElements()
    { return { (void*)this, "bUseBPGetHUDElements" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMoveAnimRate()
    { return { (void*)this, "bUseBPGetMoveAnimRate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPGetPlayerFootStepSound"); }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetWaypointsBuff()
    { return { (void*)this, "bUseBPGetWaypointsBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartAltFire()
    { return { (void*)this, "bUseBPHandleOnStartAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStartFire()
    { return { (void*)this, "bUseBPHandleOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopAltFire()
    { return { (void*)this, "bUseBPHandleOnStopAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPHandleOnStopFire()
    { return { (void*)this, "bUseBPHandleOnStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInformDamageCauserOfBuffAdded()
    { return { (void*)this, "bUseBPInformDamageCauserOfBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInitializedCharacterAnimScriptInstance()
    { return { (void*)this, "bUseBPInitializedCharacterAnimScriptInstance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInstigatorAllowDinoTargetingRange()
    { return { (void*)this, "bUseBPInstigatorAllowDinoTargetingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsCharacterHardAttached()
    { return { (void*)this, "bUseBPIsCharacterHardAttached" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyArmorValue()
    { return { (void*)this, "bUseBPModifyArmorValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyPlayerBoneModifiers()
    { return { (void*)this, "bUseBPModifyPlayerBoneModifiers" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNofityMontagePlay()
    { return { (void*)this, "bUseBPNofityMontagePlay" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNonDedicatedPlayerPostAnimUpdate()
    { return { (void*)this, "bUseBPNonDedicatedPlayerPostAnimUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyBuffWeaponFired()
    { return { (void*)this, "bUseBPNotifyBuffWeaponFired" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemAdded()
    { return { (void*)this, "bUseBPNotifyItemAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemQuantityUpdated()
    { return { (void*)this, "bUseBPNotifyItemQuantityUpdated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyItemRemoved()
    { return { (void*)this, "bUseBPNotifyItemRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffActivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOtherBuffDeactivated()
    { return { (void*)this, "bUseBPNotifyOtherBuffDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyPreventDismounting()
    { return { (void*)this, "bUseBPNotifyPreventDismounting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnAoeBuffAdded()
    { return { (void*)this, "bUseBPOnAoeBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnDestroyInstigator()
    { return { (void*)this, "bUseBPOnDestroyInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnHexagonCountChanged()
    { return { (void*)this, "bUseBPOnHexagonCountChanged" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorCapsuleComponentHit()
    { return { (void*)this, "bUseBPOnInstigatorCapsuleComponentHit" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorLootedCrate()
    { return { (void*)this, "bUseBPOnInstigatorLootedCrate" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnInstigatorMovementModeChangedNotify()
    { return { (void*)this, "bUseBPOnInstigatorMovementModeChangedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnOwnerMassTeleportEvent()
    { return { (void*)this, "bUseBPOnOwnerMassTeleportEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnPlayerShoulderMountDinoChange()
    { return { (void*)this, "bUseBPOnPlayerShoulderMountDinoChange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnRiderChangeWeapons()
    { return { (void*)this, "bUseBPOnRiderChangeWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTamedWildDino()
    { return { (void*)this, "bUseBPOnTamedWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAoEBuffDamageCauser()
    { return { (void*)this, "bUseBPOverrideAoEBuffDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBloodDecals()
    { return { (void*)this, "bUseBPOverrideBloodDecals" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBuffToGiveOnDeactivation()
    { return { (void*)this, "bUseBPOverrideBuffToGiveOnDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLength()
    { return { (void*)this, "bUseBPOverrideCameraArmLength" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraArmLengthInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraArmLengthInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraDesiredPivotLocation()
    { return { (void*)this, "bUseBPOverrideCameraDesiredPivotLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraPivotLocationInterpParams()
    { return { (void*)this, "bUseBPOverrideCameraPivotLocationInterpParams" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterLocalControlZInterpSpeed()
    { return { (void*)this, "bUseBPOverrideCharacterLocalControlZInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCuddleFoodTypes()
    { return { (void*)this, "bUseBPOverrideCuddleFoodTypes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsImprintPlayer()
    { return { (void*)this, "bUseBPOverrideIsImprintPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsNetRelevantFor()
    { return { (void*)this, "bUseBPOverrideIsNetRelevantFor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxInventoryAccessDistance()
    { return { (void*)this, "bUseBPOverrideMaxInventoryAccessDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMaxUseDistance()
    { return { (void*)this, "bUseBPOverrideMaxUseDistance" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTalkerCharacter()
    { return { (void*)this, "bUseBPOverrideTalkerCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetStructureSettingsDamageAdjuster()
    { return { (void*)this, "bUseBPOverrideTargetStructureSettingsDamageAdjuster" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingDesire()
    { return { (void*)this, "bUseBPOverrideTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideValuesToAddPerSecond()
    { return { (void*)this, "bUseBPOverrideValuesToAddPerSecond" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideWaterJumpVelocity()
    { return { (void*)this, "bUseBPOverrideWaterJumpVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPassHarvestExperienceToActor()
    { return { (void*)this, "bUseBPPassHarvestExperienceToActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreClaimWildFollower()
    { return { (void*)this, "bUseBPPreClaimWildFollower" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreServerUpload()
    { return { (void*)this, "bUseBPPreServerUpload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAddingOtherBuff()
    { return { (void*)this, "bUseBPPreventAddingOtherBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventEquipWeapons()
    { return { (void*)this, "bUseBPPreventEquipWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFallDamage()
    { return { (void*)this, "bUseBPPreventFallDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFirstPerson()
    { return { (void*)this, "bUseBPPreventFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventFlight()
    { return { (void*)this, "bUseBPPreventFlight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorAttack()
    { return { (void*)this, "bUseBPPreventInstigatorAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventInstigatorMovementMode()
    { return { (void*)this, "bUseBPPreventInstigatorMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventNotifySound()
    { return { (void*)this, "bUseBPPreventNotifySound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventOnStartJump()
    { return { (void*)this, "bUseBPPreventOnStartJump" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventRunning()
    { return { (void*)this, "bUseBPPreventRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventTekArmorBuffs()
    { return { (void*)this, "bUseBPPreventTekArmorBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventThrowingItem()
    { return { (void*)this, "bUseBPPreventThrowingItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupForInstigator()
    { return { (void*)this, "bUseBPSetupForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldForceOwnerDedicatedMovementTickPerFrame()
    { return { (void*)this, "bUseBPShouldForceOwnerDedicatedMovementTickPerFrame" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustDamageEx()
    { return { (void*)this, "bUseBP_AdjustDamageEx" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerDealtDamage()
    { return { (void*)this, "bUseBP_OnOwnerDealtDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnOwnerTeleported()
    { return { (void*)this, "bUseBP_OnOwnerTeleported" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBlueprintAnimNotifications"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideFinalWanderLocation()
    { return { (void*)this, "bUseBuffOverrideFinalWanderLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBuffOverrideInventoryAccessInput()
    { return { (void*)this, "bUseBuffOverrideInventoryAccessInput" }; }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBuffTickClient"); }
    BitFieldValue<bool, unsigned __int32> bUseBuffTickServer()
    { return { (void*)this, "bUseBuffTickServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCenteredTPVCamera()
    { return { (void*)this, "bUseCenteredTPVCamera" }; }
    BitFieldValue<bool, unsigned __int32> bUseConsolidatedMultiUseWheel()
    { return { (void*)this, "bUseConsolidatedMultiUseWheel" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseFinalAdjustDamage()
    { return { (void*)this, "bUseFinalAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcedBuffAimOverride()
    { return { (void*)this, "bUseForcedBuffAimOverride" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetGravityZScale()
    { return { (void*)this, "bUseGetGravityZScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstigatorItem()
    { return { (void*)this, "bUseInstigatorItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptInstigatorPlayerEmote()
    { return { (void*)this, "bUseInterceptInstigatorPlayerEmote" }; }
    BitFieldValue<bool, unsigned __int32> bUseInterceptItemSlotUse()
    { return { (void*)this, "bUseInterceptItemSlotUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseNiagaraDestroyOnSystemFinish()
    { return { (void*)this, "bUseNiagaraDestroyOnSystemFinish" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCarryCharacter()
    { return { (void*)this, "bUseOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostAdjustDamage()
    { return { (void*)this, "bUsePostAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseRemoteClientTick()
    { return { (void*)this, "bUseRemoteClientTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseSetHiddenInGameFromInstigator()
    { return { (void*)this, "bUseSetHiddenInGameFromInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad()
    { return { (void*)this, "bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseTickingDeactivation()
    { return { (void*)this, "bUseTickingDeactivation" }; }
    BitFieldValue<bool, unsigned __int32> bUsesInstigator()
    { return { (void*)this, "bUsesInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasActivated()
    { return { (void*)this, "bWasActivated" }; }
    BitFieldValue<bool, unsigned __int32> omitHaptics()
    { return { (void*)this, "omitHaptics" }; }
    BrzCampoPonteiro staticPathingDestinationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.staticPathingDestination")); }
    BitFieldValue<bool, unsigned __int32> bCheckBPCanSkillBeActivatedOnDefaultObject()
    { return { (void*)this, "bCheckBPCanSkillBeActivatedOnDefaultObject" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBPCanSkillBeActivatedOnExistingBuff()
    { return { (void*)this, "bCheckBPCanSkillBeActivatedOnExistingBuff" }; }
    BitFieldValue<bool, unsigned __int32> bSkillActivated()
    { return { (void*)this, "bSkillActivated" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_SKILL_H
