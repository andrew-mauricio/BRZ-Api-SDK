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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
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
    int& MaxConcurrentActivatedVfxField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Skill.MaxConcurrentActivatedVfx"); }
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
    BrzCampoPonteiro UseBPAdjustOutputDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.UseBPAdjustOutputDamage")); }
    BrzCampoPonteiro UseBPAdjustOutputDamageForNonMeleePlayerDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.UseBPAdjustOutputDamageForNonMeleePlayerDamage")); }
    FieldArray<float> ValuesToAddPerSecondField() const
    { return { (void*)this, "APrimalBuff_Skill.ValuesToAddPerSecond" }; }
    float& ViewMaxExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ViewMaxExposureMultiplier"); }
    float& ViewMinExposureMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.ViewMinExposureMultiplier"); }
    float& WarmupSecondsPerFrameCapField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.WarmupSecondsPerFrameCap"); }
    float& WeaponRecoilMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.WeaponRecoilMultiplier"); }
    float& XPEarningMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPEarningMultiplier"); }
    float& XPtoAddField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPtoAdd"); }
    float& XPtoAddRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Skill.XPtoAddRate"); }
    BrzCampoPonteiro bAOEApplyOtherBuffIgnoreSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEApplyOtherBuffIgnoreSameTeam")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEApplyOtherBuffOnDinos")); }
    BrzCampoPonteiro bAOEApplyOtherBuffOnPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEApplyOtherBuffOnPlayers")); }
    BrzCampoPonteiro bAOEApplyOtherBuffRequireSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEApplyOtherBuffRequireSameTeam")); }
    BrzCampoPonteiro bAOEBuffCarnosOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEBuffCarnosOnly")); }
    BrzCampoPonteiro bAOEOnlyApplyOtherBuffToWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAOEOnlyApplyOtherBuffToWildDinos")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAddCharacterValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddCharacterValues")); }
    BrzCampoPonteiro bAddExtendBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddExtendBuffTime")); }
    BrzCampoPonteiro bAddReactivatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddReactivates")); }
    BrzCampoPonteiro bAddRequireSameDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddRequireSameDamageCauser")); }
    BrzCampoPonteiro bAddResetsBuffTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddResetsBuffTime")); }
    BrzCampoPonteiro bAddStackResetsBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAddStackResetsBuffStart")); }
    bool& bAddTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bAddTPVCameraOffset"); }
    BrzCampoPonteiro bAdditionalExperienceMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAdditionalExperienceMultiplier")); }
    BrzCampoPonteiro bAdditionalTamingSpeedMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAdditionalTamingSpeedMultiplier")); }
    BrzCampoPonteiro bAllowBuffStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowBuffStasis")); }
    BrzCampoPonteiro bAllowBuffWhenInstigatorDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowBuffWhenInstigatorDead")); }
    BrzCampoPonteiro bAllowLoopingEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowLoopingEmitter")); }
    BrzCampoPonteiro bAllowMultiUseEntriesFromSelfField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowMultiUseEntriesFromSelf")); }
    BrzCampoPonteiro bAllowOnlyCustomFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowOnlyCustomFallDamage")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTurretsToTargetInstigatorIfTraceHitsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAllowTurretsToTargetInstigatorIfTraceHitsBuff")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysShowBuffDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAlwaysShowBuffDescription")); }
    BrzCampoPonteiro bAoEApplyDamageAllTargetablesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAoEApplyDamageAllTargetables")); }
    BrzCampoPonteiro bAoEBuffAllowIfAlreadyBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAoEBuffAllowIfAlreadyBuffed")); }
    BrzCampoPonteiro bAoEIgnoreDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAoEIgnoreDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoEOnlyOnDinosTargetingInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAoEOnlyOnDinosTargetingInstigator")); }
    BrzCampoPonteiro bAoETraceToTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAoETraceToTargets")); }
    BrzCampoPonteiro bApplyOneMaxSpeedModifierPerStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bApplyOneMaxSpeedModifierPerStack")); }
    BrzCampoPonteiro bApplyStatModifierToDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bApplyStatModifierToDinos")); }
    BrzCampoPonteiro bApplyStatModifierToPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bApplyStatModifierToPlayers")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bAutoStasis")); }
    BrzCampoPonteiro bBPAddMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPAddMultiUseEntries")); }
    BrzCampoPonteiro bBPAdjustStatusValueModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPAdjustStatusValueModification")); }
    BrzCampoPonteiro bBPDrawBuffStatusHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPDrawBuffStatusHUD")); }
    BrzCampoPonteiro bBPFilterMultiUseFilterTargetEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPFilterMultiUseFilterTargetEntries")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyCharacterFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPModifyCharacterFOV")); }
    BrzCampoPonteiro bBPOverrideActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideActorForTargetingTooltip")); }
    BrzCampoPonteiro bBPOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bBPOverrideCharacterWalkVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideCharacterWalkVelocity")); }
    BrzCampoPonteiro bBPOverrideWeaponBobField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPOverrideWeaponBob")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBPUseBumpedByPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPUseBumpedByPawn")); }
    BrzCampoPonteiro bBPUseBumpedPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBPUseBumpedPawn")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffDrawFloatingHUD")); }
    BrzCampoPonteiro bBuffDrawFloatingHUDRemotePlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffDrawFloatingHUDRemotePlayers")); }
    BrzCampoPonteiro bBuffForceNoTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffForceNoTick")); }
    BrzCampoPonteiro bBuffForceNoTickDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffForceNoTickDedicated")); }
    BrzCampoPonteiro bBuffHandleInstigatorMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffHandleInstigatorMultiUseEntries")); }
    BrzCampoPonteiro bBuffHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffHidesNonWeaponHUD")); }
    BrzCampoPonteiro bBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bBuffPreventsApplyingLevelUpsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsApplyingLevelUps")); }
    BrzCampoPonteiro bBuffPreventsCryoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsCryo")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsInventoryAccess")); }
    BrzCampoPonteiro bBuffPreventsInventoryAccessAllowMissionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsInventoryAccessAllowMissions")); }
    BrzCampoPonteiro bBuffPreventsMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsMountedWeaponry")); }
    BrzCampoPonteiro bBuffPreventsPlayerDropAllInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bBuffPreventsPlayerDropAllInventory")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCallRiderNotifiesOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCallRiderNotifiesOnClient")); }
    BrzCampoPonteiro bCameraShakeOrientTowardsEpicenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCameraShakeOrientTowardsEpicenter")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCanBeInCluster")); }
    BrzCampoPonteiro bCausesCryoSicknessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCausesCryoSickness")); }
    BrzCampoPonteiro bCheckBPCanSkillBeActivatedOnDefaultObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCheckBPCanSkillBeActivatedOnDefaultObject")); }
    BrzCampoPonteiro bCheckBPCanSkillBeActivatedOnExistingBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCheckBPCanSkillBeActivatedOnExistingBuff")); }
    BrzCampoPonteiro bCheckPreventInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCheckPreventInput")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCollideWhenPlacing")); }
    BrzCampoPonteiro bCompleteCustomDepthStencilOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCompleteCustomDepthStencilOverride")); }
    bool& bContinueTickingClientAfterDeactivateField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bContinueTickingClientAfterDeactivate"); }
    BrzCampoPonteiro bContinueTickingServerAfterDeactivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bContinueTickingServerAfterDeactivate")); }
    BrzCampoPonteiro bCurrentlyActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCurrentlyActive")); }
    BrzCampoPonteiro bCustomDepthStencilIgnoreHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bCustomDepthStencilIgnoreHealth")); }
    BrzCampoPonteiro bDeactivateAfterAddingXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDeactivateAfterAddingXP")); }
    BrzCampoPonteiro bDeactivateOnJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDeactivateOnJump")); }
    BrzCampoPonteiro bDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDeactivated")); }
    BrzCampoPonteiro bDeactivatedSoundOnlyLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDeactivatedSoundOnlyLocal")); }
    BrzCampoPonteiro bDediServerUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDediServerUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bDelayedDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDelayedDeactivation")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDestroyOnSystemFinish")); }
    BrzCampoPonteiro bDestroyOnTargetStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDestroyOnTargetStasis")); }
    bool& bDestroyWhenUnpossessedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bDestroyWhenUnpossessed"); }
    BrzCampoPonteiro bDinoIgnoreBuffPostprocessEffectWhenRiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDinoIgnoreBuffPostprocessEffectWhenRidden")); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bDisableBloom"); }
    BrzCampoPonteiro bDisableFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDisableFaceRotation")); }
    BrzCampoPonteiro bDisableFootstepsParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDisableFootstepsParticles")); }
    BrzCampoPonteiro bDisableIfCharacterUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDisableIfCharacterUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisplayHUDProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDisplayHUDProgressBar")); }
    BrzCampoPonteiro bDoCharacterDetachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDoCharacterDetachment")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeCarryingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDoCharacterDetachmentIncludeCarrying")); }
    BrzCampoPonteiro bDoCharacterDetachmentIncludeRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDoCharacterDetachmentIncludeRiding")); }
    BrzCampoPonteiro bDontPlayInstigatorActiveSoundOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bDontPlayInstigatorActiveSoundOnDino")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableBuffStackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableBuffStacking")); }
    BrzCampoPonteiro bEnableDistanceBasedVfxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableDistanceBasedVfx")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableStaticPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableStaticPathing")); }
    BrzCampoPonteiro bEnableTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnableTargetingTooltip")); }
    BrzCampoPonteiro bEnablesSpyglassEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bEnablesSpyglassEffect")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bFollowTarget")); }
    BrzCampoPonteiro bForceAddUnderwaterCharacterStatusValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceAddUnderwaterCharacterStatusValues")); }
    BrzCampoPonteiro bForceAllowAddingWithoutControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceAllowAddingWithoutController")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowWhileBuriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceAllowWhileBuried")); }
    BrzCampoPonteiro bForceAlwaysAllowBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceAlwaysAllowBuff")); }
    BrzCampoPonteiro bForceCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceCrosshair")); }
    BrzCampoPonteiro bForceDrawMissionDinoTargetHealthbarsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceDrawMissionDinoTargetHealthbars")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceHideFloatingName")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceInstigatorTick")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceNoRotation")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnDediServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceOnDediServer")); }
    BrzCampoPonteiro bForceOverrideCharacterFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceOverrideCharacterFlyingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceOverrideCharacterSwimmingVelocity")); }
    BrzCampoPonteiro bForceOverrideCharacterWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceOverrideCharacterWalkingVelocity")); }
    BrzCampoPonteiro bForcePlayerProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForcePlayerProne")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSelfTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceSelfTick")); }
    BrzCampoPonteiro bForceShowFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceShowFloatingName")); }
    BrzCampoPonteiro bForceUsePreventTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceUsePreventTargeting")); }
    BrzCampoPonteiro bForceUsePreventTargetingTurretField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceUsePreventTargetingTurret")); }
    BrzCampoPonteiro bForceUseStackCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForceUseStackCount")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bForcedOnSpectatorPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bForcedOnSpectatorPlayerController")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGetInstigatorChatMessagesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bGetInstigatorChatMessages")); }
    BrzCampoPonteiro bHUDFormatTimerAsTimecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHUDFormatTimerAsTimecode")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasImpulseDataAvailableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHasImpulseDataAvailable")); }
    BrzCampoPonteiro bHasRelatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHasRelatedMission")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHidden")); }
    BrzCampoPonteiro bHideBuffFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHideBuffFromHUD")); }
    BrzCampoPonteiro bHideBuffFromHUDOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHideBuffFromHUDOnly")); }
    BrzCampoPonteiro bHideFootStepDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHideFootStepDecals")); }
    BrzCampoPonteiro bHideTimerFromHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHideTimerFromHUD")); }
    BrzCampoPonteiro bHighPrioritySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bHighPrioritySound")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bImmobilizeTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bImmobilizeTarget")); }
    BrzCampoPonteiro bImmobilizeTargetPreventDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bImmobilizeTargetPreventDismount")); }
    BrzCampoPonteiro bInterceptInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bInterceptInputEvents")); }
    BrzCampoPonteiro bInterceptUseActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bInterceptUseAction")); }
    BrzCampoPonteiro bInterceptWeaponToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bInterceptWeaponToggle")); }
    BrzCampoPonteiro bIsBuffPersistentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsBuffPersistent")); }
    BrzCampoPonteiro bIsCarryBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsCarryBuff")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDiseaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsDisease")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsFromSkillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsFromSkill")); }
    BrzCampoPonteiro bIsHighRiskMissionBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsHighRiskMissionBuff")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsMapActor")); }
    BrzCampoPonteiro bIsSkillBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsSkillBuff")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bListenForInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bListenForInput")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bModifyFrictionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bModifyFriction")); }
    BrzCampoPonteiro bModifyMaxAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bModifyMaxAcceleration")); }
    BrzCampoPonteiro bModifyMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bModifyMaxSpeed")); }
    BrzCampoPonteiro bModifyRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bModifyRotationRate")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetResetBuffStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetResetBuffStart")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNotifyDamage")); }
    BrzCampoPonteiro bNotifyExperienceGainedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNotifyExperienceGained")); }
    BrzCampoPonteiro bNotifyExperienceGained_AllowCountingAlphaKillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNotifyExperienceGained_AllowCountingAlphaKills")); }
    BrzCampoPonteiro bNotifyExperienceGained_IncludeSmallAmountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bNotifyExperienceGained_IncludeSmallAmounts")); }
    BrzCampoPonteiro bOnlyActivateSoundForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyActivateSoundForInstigator")); }
    BrzCampoPonteiro bOnlyAddCharacterValuesUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyAddCharacterValuesUnderwater")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyReplicateOnNetForcedUpdate")); }
    bool& bOnlyTickIfPlayerCharacterField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bOnlyTickIfPlayerCharacter"); }
    BrzCampoPonteiro bOnlyTickWhenPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyTickWhenPossessed")); }
    BrzCampoPonteiro bOnlyTickWhenVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOnlyTickWhenVisible")); }
    bool& bOverrideBuffDescriptionField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bOverrideBuffDescription"); }
    BrzCampoPonteiro bOverrideBuffTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideBuffType")); }
    BrzCampoPonteiro bOverrideCharacterLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideCharacterLanding")); }
    BrzCampoPonteiro bOverrideCharacterMovementInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideCharacterMovementInput")); }
    BrzCampoPonteiro bOverrideInventoryWeightMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideInventoryWeightMultipliers")); }
    BrzCampoPonteiro bOverrideRightShoulderOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideRightShoulderOnPlayer")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideTPVCameraOffset")); }
    BrzCampoPonteiro bOverrideTPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bOverrideTPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro bPersistentBuffSurvivesLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPersistentBuffSurvivesLevelUp")); }
    BrzCampoPonteiro bPlayerIgnoreBuffPostprocessEffectWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPlayerIgnoreBuffPostprocessEffectWhenRidingDino")); }
    BrzCampoPonteiro bPostUpdateTickGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPostUpdateTickGroup")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventCarryCharacter")); }
    BrzCampoPonteiro bPreventCarryOrPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventCarryOrPassenger")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearRiderOnDinoImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventClearRiderOnDinoImmobilize")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventDinoDismountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventDinoDismount")); }
    BrzCampoPonteiro bPreventDinoRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventDinoRiding")); }
    BrzCampoPonteiro bPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventFallDamage")); }
    BrzCampoPonteiro bPreventInputDoesOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventInputDoesOffset")); }
    BrzCampoPonteiro bPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventInstigatorAttack")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLogoutSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventLogoutSleeping")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnBigDino")); }
    BrzCampoPonteiro bPreventOnBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnBossDino")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnDino")); }
    BrzCampoPonteiro bPreventOnPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnPlayer")); }
    BrzCampoPonteiro bPreventOnRobotDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnRobotDino")); }
    BrzCampoPonteiro bPreventOnSeatingStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnSeatingStructures")); }
    BrzCampoPonteiro bPreventOnShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnShip")); }
    BrzCampoPonteiro bPreventOnWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventOnWildDino")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bPreventSaving")); }
    BrzCampoPonteiro bReactivateWithNewDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReactivateWithNewDamageCauser")); }
    BrzCampoPonteiro bReactivationAddsNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReactivationAddsNewStack")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemoteForcedFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bRemoteForcedFlee")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bReplicates")); }
    BrzCampoPonteiro bRequireControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bRequireController")); }
    BrzCampoPonteiro bResetTopStackTimeWhenAddingNewStackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bResetTopStackTimeWhenAddingNewStack")); }
    BrzCampoPonteiro bSavePlayerDataOnSaveWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSavePlayerDataOnSaveWorld")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSavedWhenStasised")); }
    BrzCampoPonteiro bShallowEmitterDontSpawnOutOfViewField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bShallowEmitterDontSpawnOutOfView")); }
    BrzCampoPonteiro bShallowEmitterSpawnableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bShallowEmitterSpawnable")); }
    BrzCampoPonteiro bShowBuffModifierDescriptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bShowBuffModifierDescription")); }
    bool& bShowMammalIncubationOptionsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bShowMammalIncubationOptions"); }
    BrzCampoPonteiro bSkillActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkillActivated")); }
    BrzCampoPonteiro bSkillAddBuffDeactivationTimeToCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkillAddBuffDeactivationTimeToCooldown")); }
    BrzCampoPonteiro bSkillAllowUseWhileEncumberedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkillAllowUseWhileEncumbered")); }
    BrzCampoPonteiro bSkillAllowUseWhileSeatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkillAllowUseWhileSeated")); }
    BrzCampoPonteiro bSkillBuffSetCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkillBuffSetCooldown")); }
    BrzCampoPonteiro bSkipInstigatorTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSkipInstigatorTick")); }
    BrzCampoPonteiro bSlowInstigatorFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSlowInstigatorFalling")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bStasised")); }
    BrzCampoPonteiro bStatusComponentUsingExtendedHUDTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bStatusComponentUsingExtendedHUDText")); }
    BrzCampoPonteiro bSupportsCustomHexagonConversionShopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bSupportsCustomHexagonConversionShop")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bTearOff")); }
    BrzCampoPonteiro bTickSoundInRangePlaybackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bTickSoundInRangePlayback")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bTriggerBPStasis")); }
    BrzCampoPonteiro bTriggerBPUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bTriggerBPUnstasis")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseASACameraPivotLocationForOldCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseASACameraPivotLocationForOldCamera")); }
    BrzCampoPonteiro bUseActivateSoundFadeInDurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseActivateSoundFadeInDuration")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAdjustCharacterMovementImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPAdjustCharacterMovementImpulse")); }
    BrzCampoPonteiro bUseBPAdjustImpulseFromDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPAdjustImpulseFromDamage")); }
    BrzCampoPonteiro bUseBPAdjustRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPAdjustRadialDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPBuffControllerKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPBuffControllerKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffKilledSomethingEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPBuffKilledSomethingEvent")); }
    BrzCampoPonteiro bUseBPBuffPreventBuildingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPBuffPreventBuilding")); }
    BrzCampoPonteiro bUseBPBuffPreventsImmobilizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPBuffPreventsImmobilization")); }
    BrzCampoPonteiro bUseBPBuffPreventsMultiuseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPBuffPreventsMultiuseEntries")); }
    BrzCampoPonteiro bUseBPCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPCanBeCarried")); }
    BrzCampoPonteiro bUseBPCanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPCanFly")); }
    BrzCampoPonteiro bUseBPChangeBuffStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPChangeBuffStatusValueModifiers")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPCheckForErrors")); }
    bool& bUseBPCustomAllowAddBuffField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPCustomAllowAddBuff"); }
    BrzCampoPonteiro bUseBPCustomApplyColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPCustomApplyColor")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPCustomIsRelevantForClient")); }
    bool& bUseBPDeactivatedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPDeactivated"); }
    BrzCampoPonteiro bUseBPDinoNameColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPDinoNameColorOverride")); }
    BrzCampoPonteiro bUseBPDinoRefreshColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPDinoRefreshColorization")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPExcludeAoEActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPExcludeAoEActor")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPForceOverrideWeaponFireTransform")); }
    BrzCampoPonteiro bUseBPFullyHarvestedNodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPFullyHarvestedNode")); }
    BrzCampoPonteiro bUseBPGetAltInventoryForAmmoConsumptionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetAltInventoryForAmmoConsumption")); }
    BrzCampoPonteiro bUseBPGetAttackAnimPlayRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetAttackAnimPlayRateModifier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPGetBuffDescriptionIconAlphaMultField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetBuffDescriptionIconAlphaMult")); }
    BrzCampoPonteiro bUseBPGetBuffLevelUpStatOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetBuffLevelUpStatOverride")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetCameraShakeScalarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetCameraShakeScalar")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetCustomTooltipActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetCustomTooltipActor")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetHUDElementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetHUDElements")); }
    BrzCampoPonteiro bUseBPGetMoveAnimRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetMoveAnimRate")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetOrbitCamTargetLocation")); }
    bool& bUseBPGetPlayerFootStepSoundField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBPGetPlayerFootStepSound"); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetWaypointsBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPGetWaypointsBuff")); }
    BrzCampoPonteiro bUseBPHandleOnStartAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPHandleOnStartAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStartFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPHandleOnStartFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPHandleOnStopAltFire")); }
    BrzCampoPonteiro bUseBPHandleOnStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPHandleOnStopFire")); }
    BrzCampoPonteiro bUseBPInformDamageCauserOfBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPInformDamageCauserOfBuffAdded")); }
    BrzCampoPonteiro bUseBPInitializedCharacterAnimScriptInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPInitializedCharacterAnimScriptInstance")); }
    BrzCampoPonteiro bUseBPInstigatorAllowDinoTargetingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPInstigatorAllowDinoTargetingRange")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPIsCharacterHardAttachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPIsCharacterHardAttached")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyArmorValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPModifyArmorValue")); }
    BrzCampoPonteiro bUseBPModifyPlayerBoneModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPModifyPlayerBoneModifiers")); }
    BrzCampoPonteiro bUseBPNofityMontagePlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNofityMontagePlay")); }
    BrzCampoPonteiro bUseBPNonDedicatedPlayerPostAnimUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNonDedicatedPlayerPostAnimUpdate")); }
    BrzCampoPonteiro bUseBPNotifyBuffWeaponFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyBuffWeaponFired")); }
    BrzCampoPonteiro bUseBPNotifyItemAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyItemAdded")); }
    BrzCampoPonteiro bUseBPNotifyItemQuantityUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyItemQuantityUpdated")); }
    BrzCampoPonteiro bUseBPNotifyItemRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyItemRemoved")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyOtherBuffActivated")); }
    BrzCampoPonteiro bUseBPNotifyOtherBuffDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyOtherBuffDeactivated")); }
    BrzCampoPonteiro bUseBPNotifyPreventDismountingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPNotifyPreventDismounting")); }
    BrzCampoPonteiro bUseBPOnAoeBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnAoeBuffAdded")); }
    BrzCampoPonteiro bUseBPOnDestroyInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnDestroyInstigator")); }
    BrzCampoPonteiro bUseBPOnHexagonCountChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnHexagonCountChanged")); }
    BrzCampoPonteiro bUseBPOnInstigatorCapsuleComponentHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnInstigatorCapsuleComponentHit")); }
    BrzCampoPonteiro bUseBPOnInstigatorLootedCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnInstigatorLootedCrate")); }
    BrzCampoPonteiro bUseBPOnInstigatorMovementModeChangedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnInstigatorMovementModeChangedNotify")); }
    BrzCampoPonteiro bUseBPOnOwnerMassTeleportEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnOwnerMassTeleportEvent")); }
    BrzCampoPonteiro bUseBPOnPlayerShoulderMountDinoChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnPlayerShoulderMountDinoChange")); }
    BrzCampoPonteiro bUseBPOnRiderChangeWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnRiderChangeWeapons")); }
    BrzCampoPonteiro bUseBPOnTamedWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOnTamedWildDino")); }
    BrzCampoPonteiro bUseBPOverrideAoEBuffDamageCauserField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideAoEBuffDamageCauser")); }
    BrzCampoPonteiro bUseBPOverrideBloodDecalsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideBloodDecals")); }
    BrzCampoPonteiro bUseBPOverrideBuffToGiveOnDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideBuffToGiveOnDeactivation")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCameraArmLength")); }
    BrzCampoPonteiro bUseBPOverrideCameraArmLengthInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCameraArmLengthInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraDesiredPivotLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCameraDesiredPivotLocation")); }
    BrzCampoPonteiro bUseBPOverrideCameraPivotLocationInterpParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCameraPivotLocationInterpParams")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterLocalControlZInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCharacterLocalControlZInterpSpeed")); }
    BrzCampoPonteiro bUseBPOverrideCuddleFoodTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideCuddleFoodTypes")); }
    BrzCampoPonteiro bUseBPOverrideDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideDynamicMusic")); }
    BrzCampoPonteiro bUseBPOverrideIsImprintPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideIsImprintPlayer")); }
    BrzCampoPonteiro bUseBPOverrideIsNetRelevantForField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideIsNetRelevantFor")); }
    BrzCampoPonteiro bUseBPOverrideMaxInventoryAccessDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideMaxInventoryAccessDistance")); }
    BrzCampoPonteiro bUseBPOverrideMaxUseDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideMaxUseDistance")); }
    BrzCampoPonteiro bUseBPOverrideTalkerCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideTalkerCharacter")); }
    BrzCampoPonteiro bUseBPOverrideTargetStructureSettingsDamageAdjusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideTargetStructureSettingsDamageAdjuster")); }
    BrzCampoPonteiro bUseBPOverrideTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideTargetingDesire")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPOverrideValuesToAddPerSecondField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideValuesToAddPerSecond")); }
    BrzCampoPonteiro bUseBPOverrideWaterJumpVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPOverrideWaterJumpVelocity")); }
    BrzCampoPonteiro bUseBPPassHarvestExperienceToActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPassHarvestExperienceToActor")); }
    BrzCampoPonteiro bUseBPPreClaimWildFollowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreClaimWildFollower")); }
    BrzCampoPonteiro bUseBPPreServerUploadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreServerUpload")); }
    BrzCampoPonteiro bUseBPPreventAddingOtherBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventAddingOtherBuff")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventEquipWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventEquipWeapons")); }
    BrzCampoPonteiro bUseBPPreventFallDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventFallDamage")); }
    BrzCampoPonteiro bUseBPPreventFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventFirstPerson")); }
    BrzCampoPonteiro bUseBPPreventFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventFlight")); }
    BrzCampoPonteiro bUseBPPreventInstigatorAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventInstigatorAttack")); }
    BrzCampoPonteiro bUseBPPreventInstigatorMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventInstigatorMovementMode")); }
    BrzCampoPonteiro bUseBPPreventNotifySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventNotifySound")); }
    BrzCampoPonteiro bUseBPPreventOnStartJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventOnStartJump")); }
    BrzCampoPonteiro bUseBPPreventRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventRunning")); }
    BrzCampoPonteiro bUseBPPreventTekArmorBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventTekArmorBuffs")); }
    BrzCampoPonteiro bUseBPPreventThrowingItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPPreventThrowingItem")); }
    BrzCampoPonteiro bUseBPSetupForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPSetupForInstigator")); }
    BrzCampoPonteiro bUseBPShouldForceOwnerDedicatedMovementTickPerFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBPShouldForceOwnerDedicatedMovementTickPerFrame")); }
    BrzCampoPonteiro bUseBP_AdjustDamageExField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBP_AdjustDamageEx")); }
    BrzCampoPonteiro bUseBP_OnOwnerDealtDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBP_OnOwnerDealtDamage")); }
    BrzCampoPonteiro bUseBP_OnOwnerTeleportedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBP_OnOwnerTeleported")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBP_OverrideTerminalVelocity")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBuffOverrideFinalWanderLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBuffOverrideFinalWanderLocation")); }
    BrzCampoPonteiro bUseBuffOverrideInventoryAccessInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBuffOverrideInventoryAccessInput")); }
    bool& bUseBuffTickClientField() const
    { return *GetNativePointerField<bool*>(this, "APrimalBuff_Skill.bUseBuffTickClient"); }
    BrzCampoPonteiro bUseBuffTickServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseBuffTickServer")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCenteredTPVCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseCenteredTPVCamera")); }
    BrzCampoPonteiro bUseConsolidatedMultiUseWheelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseConsolidatedMultiUseWheel")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseFinalAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseFinalAdjustDamage")); }
    BrzCampoPonteiro bUseForcedBuffAimOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseForcedBuffAimOverride")); }
    BrzCampoPonteiro bUseGetGravityZScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseGetGravityZScale")); }
    BrzCampoPonteiro bUseInstigatorItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseInstigatorItem")); }
    BrzCampoPonteiro bUseInterceptInstigatorPlayerEmoteField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseInterceptInstigatorPlayerEmote")); }
    BrzCampoPonteiro bUseInterceptItemSlotUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseInterceptItemSlotUse")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseNiagaraDestroyOnSystemFinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseNiagaraDestroyOnSystemFinish")); }
    BrzCampoPonteiro bUseOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseOnCarryCharacter")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePostAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUsePostAdjustDamage")); }
    BrzCampoPonteiro bUseRemoteClientTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseRemoteClientTick")); }
    BrzCampoPonteiro bUseSetHiddenInGameFromInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseSetHiddenInGameFromInstigator")); }
    BrzCampoPonteiro bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_GamepadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseShouldInterceptedInputEventOverwriteUsualFunctionality_Array_Gamepad")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseStasisGrid")); }
    BrzCampoPonteiro bUseTickingDeactivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUseTickingDeactivation")); }
    BrzCampoPonteiro bUsesInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bUsesInstigator")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.bWasActivated")); }
    BrzCampoPonteiro omitHapticsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Skill.omitHaptics")); }
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
