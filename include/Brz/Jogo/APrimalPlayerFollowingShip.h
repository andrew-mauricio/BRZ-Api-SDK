// ==========================================================================
//  APrimalPlayerFollowingShip — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPLAYERFOLLOWINGSHIP_H
#define BRZ_SDK_JOGO_APRIMALPLAYERFOLLOWINGSHIP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AController;
struct AMissionType;
struct ANPCZoneManager;
struct APawn;
struct APlayerState;
struct APrimalCharacter;
struct APrimalDinoCharacter;
struct APrimalProjectileGrapplingHook;
struct APrimalStructure;
struct AShooterCharacter;
struct AShooterPlayerController;
struct FActorTickFunction;
struct FDinoSaddleStruct;
struct FName;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimationAsset;
struct UAudioComponent;
struct UCapsuleComponent;
struct UCharacterMovementComponent;
struct UInputComponent;
struct UNetDriver;
struct UParticleSystem;
struct UPrimalCharacterStatusComponent;
struct UPrimalDinoSettings;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimalNavigationInvokerComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;
struct UToolTipWidget;


struct APrimalPlayerFollowingShip
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalPlayerFollowingShip"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerFollowingShip.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalPlayerFollowingShip.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerFollowingShip.GetThrottleForceMultiplier()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetThrottleForceMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalPlayerFollowingShip.GetThrottleForceMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerFollowingShip.Tick(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalPlayerFollowingShip.Tick(float)", a0);
    }

    float& AIAggroNotifyNeighborsClassesRangeScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AIAggroNotifyNeighborsClassesRangeScale"); }
    float& AICombatRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AICombatRotationRateModifier"); }
    BrzCampoPonteiro AIControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AIControllerClass")); }
    float& AIRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AIRangeMultiplier"); }
    BrzCampoPonteiro ASACameraConfigClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ASACameraConfigClass")); }
    int& AbsoluteBaseLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.AbsoluteBaseLevel"); }
    float& AccurateOceanVolumeOverlapsCapsuleHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AccurateOceanVolumeOverlapsCapsuleHeightMultiplier"); }
    BrzCampoPonteiro ActiveShipDyingNiagaraCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ActiveShipDyingNiagaraComp")); }
    BrzCampoPonteiro ActiveShipSinkingNiagaraCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ActiveShipSinkingNiagaraComp")); }
    BrzCampoPonteiro ActiveSkillsOnHotbarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ActiveSkillsOnHotbar")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalPlayerFollowingShip.ActorUsingQuickAction"); }
    float& AddForwardVelocityOnJumpField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AddForwardVelocityOnJump"); }
    float& AddForwardVelocityOnJumpMaxSpeedMultiplierClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AddForwardVelocityOnJumpMaxSpeedMultiplierClamp"); }
    float& AdditionalTamingSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AdditionalTamingSpeedMultiplier"); }
    FieldArray<unsigned char> AllowPaintingColorRegionsField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.AllowPaintingColorRegions" }; }
    float& AllowRidingMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AllowRidingMaxDistance"); }
    BrzCampoPonteiro AllowWildBabyTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AllowWildBabyTaming")); }
    BrzCampoPonteiro AnchorActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorActor")); }
    BrzCampoPonteiro AnchorActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorActorClass")); }
    double& AnchorFullySetTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.AnchorFullySetTime"); }
    BrzCampoPonteiro AnchorIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorIcon")); }
    float& AnchorLowerSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorLowerSpeed"); }
    BrzCampoPonteiro AnchorLoweringIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorLoweringIcon")); }
    float& AnchorMaximumDistanceFromShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorMaximumDistanceFromShore"); }
    float& AnchorMaximumTraceDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorMaximumTraceDepth"); }
    float& AnchorMinimumWaveDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorMinimumWaveDamping"); }
    float& AnchorRaiseDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorRaiseDuration"); }
    float& AnchorRaiseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorRaiseSpeed"); }
    BrzCampoPonteiro AnchorRaisingIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorRaisingIcon")); }
    BrzCampoPonteiro AnchorReleaseLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorReleaseLocation")); }
    float& AnchorSetDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchorSetDelay"); }
    BrzCampoPonteiro AnchorSoundComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSoundComponent")); }
    BrzCampoPonteiro AnchorSound_MovingDownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSound_MovingDown")); }
    BrzCampoPonteiro AnchorSound_MovingDown_BreakWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSound_MovingDown_BreakWater")); }
    BrzCampoPonteiro AnchorSound_MovingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSound_MovingUp")); }
    BrzCampoPonteiro AnchorSound_MovingUp_BreakWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSound_MovingUp_BreakWater")); }
    BrzCampoPonteiro AnchorSound_MovingUp_FinishField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchorSound_MovingUp_Finish")); }
    float& AnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchoredAutoDestroyTime"); }
    BrzCampoPonteiro AnchoredIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnchoredIcon")); }
    float& AnchoredNetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnchoredNetworkAndStasisRangeMultiplier"); }
    float& AnimRootMotionTranslationScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AnimRootMotionTranslationScale"); }
    BrzCampoPonteiro AnimSharingStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AnimSharingState")); }
    TArray<void*>& AnimationsPreventInputField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.AnimationsPreventInput"); }
    BrzCampoPonteiro AreTorchesLitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AreTorchesLit")); }
    float& ArrivalDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ArrivalDistance"); }
    BrzCampoPonteiro AttachedCaptiansOrderSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedCaptiansOrderSeats")); }
    BrzCampoPonteiro AttachedDeckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedDeck")); }
    BrzCampoPonteiro AttachedDriverSeatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedDriverSeat")); }
    BrzCampoPonteiro AttachedMiscCriticalStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedMiscCriticalStructures")); }
    BrzCampoPonteiro AttachedRowingSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedRowingSeats")); }
    BrzCampoPonteiro AttachedSailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachedSails")); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AttachmentReplication")); }
    TArray<void*>& AttackAnimationWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.AttackAnimationWeights"); }
    TArray<UAnimMontage*>& AttackAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalPlayerFollowingShip.AttackAnimations"); }
    unsigned char& AttackIndexOfPlayedAnimationField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.AttackIndexOfPlayedAnimation"); }
    TArray<void*>& AttackInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.AttackInfos"); }
    AShooterPlayerController*& AttackMyTargetForPlayerControllerField() const
    { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalPlayerFollowingShip.AttackMyTargetForPlayerController"); }
    float& AttackOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AttackOffset"); }
    float& AttackOnLaunchMaximumTargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AttackOnLaunchMaximumTargetDistance"); }
    double& AutoAnchorCountdownStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.AutoAnchorCountdownStartTime"); }
    float& AutoAnchorDelaySecField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoAnchorDelaySec"); }
    float& AutoPilot_AllowSnapToHeadingBelowAngularVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_AllowSnapToHeadingBelowAngularVelocity"); }
    float& AutoPilot_AngularVelocityMaxInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_AngularVelocityMaxInterpSpeed"); }
    float& AutoPilot_ForceMinAngularVelocity_MAXField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_ForceMinAngularVelocity_MAX"); }
    float& AutoPilot_ForceMinAngularVelocity_MINField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_ForceMinAngularVelocity_MIN"); }
    float& AutoPilot_TargetHeadingErrorRange_ResumeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_TargetHeadingErrorRange_Resume"); }
    float& AutoPilot_TargetHeadingErrorRange_SlowField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_TargetHeadingErrorRange_Slow"); }
    float& AutoPilot_TargetHeadingErrorRange_StopField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.AutoPilot_TargetHeadingErrorRange_Stop"); }
    FieldArray<char> AutoPossessAIField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.AutoPossessAI" }; }
    unsigned char& AutoPossessPlayerField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.AutoPossessPlayer"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.AutoReceiveInput"); }
    BrzCampoPonteiro AutoStopReplicationWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AutoStopReplicationWhenSleeping")); }
    BrzCampoPonteiro AutoThrottleIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.AutoThrottleIcon")); }
    float& BPTimerNonDedicatedMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BPTimerNonDedicatedMax"); }
    float& BPTimerNonDedicatedMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BPTimerNonDedicatedMin"); }
    float& BPTimerServerMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BPTimerServerMax"); }
    float& BPTimerServerMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BPTimerServerMin"); }
    float& BabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyAge"); }
    float& BabyAgeSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyAgeSpeed"); }
    BrzCampoPonteiro BabyCuddleFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BabyCuddleFood")); }
    float& BabyCuddleGracePeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyCuddleGracePeriod"); }
    float& BabyCuddleLoseImpringQualityPerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyCuddleLoseImpringQualityPerSecond"); }
    unsigned char& BabyCuddleTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.BabyCuddleType"); }
    BrzCampoPonteiro BabyCuddleWalkStartingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BabyCuddleWalkStartingLocation")); }
    UAnimMontage*& BabyCuddledAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.BabyCuddledAnimation"); }
    float& BabyGestationProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyGestationProgress"); }
    double& BabyNextCuddleTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.BabyNextCuddleTime"); }
    float& BabyPitchMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyPitchMultiplier"); }
    float& BabyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyScale"); }
    float& BabySpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabySpeedMultiplier"); }
    float& BabyVolumeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BabyVolumeMultiplier"); }
    float& BackGroupMaxYCoordinateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BackGroupMaxYCoordinate"); }
    BrzCampoPonteiro BaseDinoScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BaseDinoScale")); }
    float& BaseEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BaseEyeHeight"); }
    float& BaseMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BaseMovementWeight"); }
    BrzCampoPonteiro BaseRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BaseRotationOffset")); }
    float& BaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BaseTargetingDesirability"); }
    BrzCampoPonteiro BaseTranslationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BaseTranslationOffset")); }
    BrzCampoPonteiro BasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BasedMovement")); }
    float& BlinkDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BlinkDuration"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.BlueprintCreatedComponents"); }
    TWeakObjectPtr<void>& BoardedUnderWaterCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.BoardedUnderWaterCharacter"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.BoneDamageAdjusters"); }
    BrzCampoPonteiro BoneIndexArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BoneIndexArrayForDataChannelVFX")); }
    BrzCampoPonteiro BoneScaleArrayForDataChannelVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BoneScaleArrayForDataChannelVFX")); }
    TArray<void*>& BonesToIngoreWhileDraggedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.BonesToIngoreWhileDragged"); }
    float& BreakFleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BreakFleeHealthPercentage"); }
    BrzCampoPonteiro BuffGivenToBasedCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BuffGivenToBasedCharacters")); }
    BrzCampoPonteiro BuffToGiveWhenOpeningSkillsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BuffToGiveWhenOpeningSkills")); }
    BrzCampoPonteiro BuffToGiveWhenPilotingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.BuffToGiveWhenPiloting")); }
    float& BuffedDamageMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BuffedDamageMult"); }
    float& BuffedResistanceMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.BuffedResistanceMult"); }
    BrzCampoPonteiro Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReductionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.Cached_BaseItemClassesThatAreCheckedForGeneTraitWeightReduction")); }
    BrzCampoPonteiro Cached_GeneTraitWeightReductionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.Cached_GeneTraitWeightReductions")); }
    FName& CameraProfileIdOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.CameraProfileIdOverride"); }
    int& CameraZoomLevelToIgnoreDeckField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CameraZoomLevelToIgnoreDeck"); }
    BrzCampoPonteiro CanAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CanAnchor")); }
    BrzCampoPonteiro CanElevateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CanElevate")); }
    BrzCampoPonteiro CannonControlField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CannonControl")); }
    BrzCampoPonteiro CannonControlIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CannonControlIcon")); }
    TObjectPtr<UCapsuleComponent>& CapsuleComponentField() const
    { return *GetNativePointerField<TObjectPtr<UCapsuleComponent>*>(this, "APrimalPlayerFollowingShip.CapsuleComponent"); }
    BrzCampoPonteiro CaptainDoorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CaptainDoorClass")); }
    float& CargoContainerLifetimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CargoContainerLifetime"); }
    float& CargoContainerTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CargoContainerTimer"); }
    float& CarriedAsBabyPassengerSizeLimitOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CarriedAsBabyPassengerSizeLimitOverride"); }
    TWeakObjectPtr<void>& CarriedCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.CarriedCharacter"); }
    TWeakObjectPtr<void>& CarryingDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.CarryingDino"); }
    float& ChanceToLookAtNearbyDyingCharacterField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ChanceToLookAtNearbyDyingCharacter"); }
    float& ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInsteadField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ChanceToLookAtNearbyDyingCharactersDamageInstigatingPawnInstead"); }
    float& CharacterLocalControlZInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CharacterLocalControlZInterpSpeed"); }
    TObjectPtr<UCharacterMovementComponent>& CharacterMovementField() const
    { return *GetNativePointerField<TObjectPtr<UCharacterMovementComponent>*>(this, "APrimalPlayerFollowingShip.CharacterMovement"); }
    AActor*& CharacterSavedDynamicBaseField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalPlayerFollowingShip.CharacterSavedDynamicBase"); }
    FName& CharacterSavedDynamicBaseBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.CharacterSavedDynamicBaseBoneName"); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CharacterSavedDynamicBaseRelativeLocation")); }
    BrzCampoPonteiro CharacterSavedDynamicBaseRelativeRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CharacterSavedDynamicBaseRelativeRotation")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.Children"); }
    TObjectPtr<UTexture2D>& ClaimIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalPlayerFollowingShip.ClaimIcon"); }
    float& ClientLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientLocationInterpSpeed"); }
    float& ClientPositionErrorToleranceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientPositionErrorToleranceSquared"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ClientRootMotionParamsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ClientRootMotionParams")); }
    float& ClientRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientRotationInterpSpeed"); }
    float& ClientUnanchoringAllowSlowInterpolationPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientUnanchoringAllowSlowInterpolationPeriod"); }
    float& ClientUnanchoringInterpSpeedFastField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientUnanchoringInterpSpeedFast"); }
    float& ClientUnanchoringLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientUnanchoringLocationInterpSpeed"); }
    float& ClientUnanchoringRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ClientUnanchoringRotationInterpSpeed"); }
    float& CloneBaseElementCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CloneBaseElementCost"); }
    float& CloneElementCostPerLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CloneElementCostPerLevel"); }
    BrzCampoPonteiro ClothColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ClothColorOptions")); }
    float& CollideOntoEnemyRaftDamageImpulseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollideOntoEnemyRaftDamageImpulseMultiplier"); }
    BrzCampoPonteiro CollisionImpactDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CollisionImpactDamageType")); }
    float& CollisionImpactMaxDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMaxDamageAmount"); }
    float& CollisionImpactMaxDamageRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMaxDamageRadius"); }
    float& CollisionImpactMaxImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMaxImpulse"); }
    float& CollisionImpactMinDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMinDamageAmount"); }
    float& CollisionImpactMinDamageRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMinDamageRadius"); }
    float& CollisionImpactMinImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMinImpulse"); }
    float& CollisionImpactMinImpulseForDamageField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMinImpulseForDamage"); }
    float& CollisionImpactMinIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CollisionImpactMinInterval"); }
    int& CollisionImpactWeightClassField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CollisionImpactWeightClass"); }
    TWeakObjectPtr<void>& ColorOverrideBuffField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.ColorOverrideBuff"); }
    FieldArray<unsigned char> ColorSetIndicesField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.ColorSetIndices" }; }
    FieldArray<FName> ColorSetNamesField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.ColorSetNames" }; }
    BrzCampoPonteiro CombatIdleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CombatIdle")); }
    BrzCampoPonteiro CombatMusicTracksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CombatMusicTracks")); }
    BrzCampoPonteiro ControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ControlInputVector")); }
    TObjectPtr<AController>& ControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalPlayerFollowingShip.Controller"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.ControllingMatineeActors"); }
    UStaticMeshComponent*& CopyDinoSettingsRangeMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalPlayerFollowingShip.CopyDinoSettingsRangeMesh"); }
    double& CorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.CorpseDestructionTime"); }
    float& CorpseDestructionTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CorpseDestructionTimer"); }
    float& CorpseFadeAwayTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CorpseFadeAwayTime"); }
    float& CorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CorpseLifespan"); }
    float& CorpseLifespanNonRelevantField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CorpseLifespanNonRelevant"); }
    BrzCampoPonteiro CreakChangeDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakChangeDirectionSoundInfo")); }
    BrzCampoPonteiro CreakFullSpeedSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakFullSpeedSoundInfo")); }
    BrzCampoPonteiro CreakIdleComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakIdleComponent")); }
    BrzCampoPonteiro CreakIdleSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakIdleSoundInfo")); }
    BrzCampoPonteiro CreakMetalComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakMetalComponent")); }
    BrzCampoPonteiro CreakMetalSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CreakMetalSoundInfo")); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.CreationTime"); }
    float& CrouchedEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CrouchedEyeHeight"); }
    BrzCampoPonteiro CurrentAimRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentAimRot")); }
    float& CurrentAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CurrentAnchorLength"); }
    unsigned char& CurrentAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.CurrentAttackIndex"); }
    BrzCampoPonteiro CurrentCombatMusicTrackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentCombatMusicTrack")); }
    BrzCampoPonteiro CurrentIdleFidgetMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentIdleFidgetMontage")); }
    BrzCampoPonteiro CurrentManualFireLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentManualFireLocations")); }
    float& CurrentMovementAnimRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CurrentMovementAnimRate"); }
    BrzCampoPonteiro CurrentPrimalCameraConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentPrimalCameraConfig")); }
    BrzCampoPonteiro CurrentRootLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.CurrentRootLoc")); }
    float& CurrentSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CurrentSailRotation"); }
    int& CurrentSpecificHarvestResourceIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CurrentSpecificHarvestResourceIndex"); }
    float& CurrentStrafeMagnitudeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CurrentStrafeMagnitude"); }
    float& CurrentTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CurrentTameAffinity"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CustomData"); }
    int& CustomReplicatedDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.CustomReplicatedData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.CustomTimeDilation"); }
    UToolTipWidget*& CustomTooltipWidgetField() const
    { return *GetNativePointerField<UToolTipWidget**>(this, "APrimalPlayerFollowingShip.CustomTooltipWidget"); }
    float& DamageMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DamageMultiplierInRamSocketRadius"); }
    float& DamageNotifyTeamAggroRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DamageNotifyTeamAggroRange"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DamageTypeAdjusters"); }
    BrzCampoPonteiro DataChannelForSkeletonVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DataChannelForSkeletonVFX")); }
    float& DeadBaseTargetingDesirabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeadBaseTargetingDesirability"); }
    UAnimMontage*& DeathAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.DeathAnim"); }
    BrzCampoPonteiro DeathAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DeathAnimations")); }
    float& DeathCapsuleHalfHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathCapsuleHalfHeightMultiplier"); }
    float& DeathCapsuleRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathCapsuleRadiusMultiplier"); }
    BrzCampoPonteiro DeathDestructionDepositInventoryClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DeathDestructionDepositInventoryClass")); }
    BrzCampoPonteiro DeathEssenceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DeathEssenceClass")); }
    TArray<void*>& DeathGiveItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DeathGiveItemClasses"); }
    float& DeathGiveItemRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathGiveItemRange"); }
    float& DeathHarvestFadeOutDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathHarvestFadeOutDuration"); }
    BrzCampoPonteiro DeathHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DeathHarvestingComponent")); }
    float& DeathInventoryChanceToUseField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathInventoryChanceToUse"); }
    BrzCampoPonteiro DeathInventoryTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DeathInventoryTemplates")); }
    float& DeathMeshRelativeZOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DeathMeshRelativeZOffsetAsCapsulePercent"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalPlayerFollowingShip.DeathSound"); }
    BrzCampoPonteiro DecksClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DecksClass")); }
    float& DefaultAngularDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DefaultAngularDamping"); }
    TArray<void*>& DefaultBuffsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DefaultBuffs"); }
    float& DefaultLinearDampingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DefaultLinearDamping"); }
    BrzCampoPonteiro DefaultNoItemTextureParamOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DefaultNoItemTextureParamOverrides")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.DescriptiveName"); }
    FString& DescriptiveNameGenderOverrideFemaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.DescriptiveNameGenderOverrideFemale"); }
    FString& DescriptiveNameGenderOverrideMaleField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.DescriptiveNameGenderOverrideMale"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.DesiredRepGraphBehavior"); }
    float& DestroyIfNoTargetUnderShoreDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DestroyIfNoTargetUnderShoreDistanceAmount"); }
    float& DestroyIfNoTargetUnderShoreDistanceTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DestroyIfNoTargetUnderShoreDistanceTimer"); }
    double& DiedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.DiedAtTime"); }
    TArray<void*>& DinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DinoAncestors"); }
    TArray<void*>& DinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DinoAncestorsMale"); }
    TArray<void*>& DinoBaseLevelWeightEntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DinoBaseLevelWeightEntries"); }
    double& DinoDownloadedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.DinoDownloadedAtTime"); }
    TArray<void*>& DinoExtraDefaultInventoryItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.DinoExtraDefaultInventoryItems"); }
    unsigned int& DinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalPlayerFollowingShip.DinoID1"); }
    unsigned int& DinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalPlayerFollowingShip.DinoID2"); }
    UAnimMontage*& DinoLevelUpAnimationOverrideField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.DinoLevelUpAnimationOverride"); }
    FName& DinoNameTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.DinoNameTag"); }
    BrzCampoPonteiro DinoSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DinoSettingsClass")); }
    UAnimMontage*& DinoWithDinoPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.DinoWithDinoPassengerAnim"); }
    UAnimMontage*& DinoWithPassengerAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.DinoWithPassengerAnim"); }
    ANPCZoneManager*& DirectLinkNPCZoneManagerField() const
    { return *GetNativePointerField<ANPCZoneManager**>(this, "APrimalPlayerFollowingShip.DirectLinkNPCZoneManager"); }
    BrzCampoPonteiro DisableCameraShakesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DisableCameraShakes")); }
    BrzCampoPonteiro DockIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DockIcon")); }
    FName& DragBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.DragBoneName"); }
    BrzCampoPonteiro DragOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DragOffset")); }
    FName& DragSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.DragSocketName"); }
    float& DragSocketVerticalOffsetAsCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DragSocketVerticalOffsetAsCapsulePercent"); }
    float& DragWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.DragWeight"); }
    int& DraggedBoneIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.DraggedBoneIndex"); }
    APrimalCharacter*& DraggedCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalPlayerFollowingShip.DraggedCharacter"); }
    APrimalCharacter*& DraggingCharacterField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalPlayerFollowingShip.DraggingCharacter"); }
    TObjectPtr<UNetDriver>& DriverField() const
    { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "APrimalPlayerFollowingShip.Driver"); }
    BrzCampoPonteiro DriverSeatClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.DriverSeatClass")); }
    float& EffectorInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EffectorInterpSpeed"); }
    float& EggChanceToSpawnUnstasisField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EggChanceToSpawnUnstasis"); }
    TArray<void*>& EggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.EggItemsToSpawn"); }
    TArray<void*>& EggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.EggWeightsToSpawn"); }
    UAnimMontage*& EndChargingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.EndChargingAnimation"); }
    BrzCampoPonteiro EnterCannonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.EnterCannonIcon")); }
    UAnimMontage*& EnterFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.EnterFlightAnim"); }
    float& EnvironmentInteractionPlasticityExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EnvironmentInteractionPlasticityExponent"); }
    float& EnvironmentInteractionPlasticityMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EnvironmentInteractionPlasticityMult"); }
    float& EquippedArmorDurabilityPercent1Field() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EquippedArmorDurabilityPercent1"); }
    float& EquippedArmorDurabilityPercent2Field() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EquippedArmorDurabilityPercent2"); }
    float& EquippedArmorDurabilityPercent3Field() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.EquippedArmorDurabilityPercent3"); }
    BrzCampoPonteiro ExitCannonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ExitCannonIcon")); }
    UAnimMontage*& ExitFlightAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.ExitFlightAnim"); }
    float& ExternalForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExternalForceMultiplier"); }
    float& ExtraBabyAgeSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraBabyAgeSpeedMultiplier"); }
    float& ExtraDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraDamageMultiplier"); }
    float& ExtraFrictionModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraFrictionModifier"); }
    float& ExtraMaxAccelerationModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraMaxAccelerationModifier"); }
    float& ExtraMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraMaxSpeedModifier"); }
    float& ExtraMeleeDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraMeleeDamageMultiplier"); }
    float& ExtraReceiveDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraReceiveDamageMultiplier"); }
    float& ExtraRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraRotationRateModifier"); }
    float& ExtraRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraRunningSpeedModifier"); }
    float& ExtraTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraTamedSpeedMultiplier"); }
    float& ExtraUnTamedSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ExtraUnTamedSpeedMultiplier"); }
    UAnimMontage*& FallAsleepAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.FallAsleepAnim"); }
    float& FallDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FallDamageMultiplier"); }
    TArray<void*>& FertilizedEggItemsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.FertilizedEggItemsToSpawn"); }
    TArray<void*>& FertilizedEggWeightsToSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.FertilizedEggWeightsToSpawn"); }
    float& FinalAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FinalAnchorLength"); }
    float& FixedBackwardsThrottleForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FixedBackwardsThrottleForce"); }
    float& FixedThrottleRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FixedThrottleRate"); }
    float& FleeHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FleeHealthPercentage"); }
    BrzCampoPonteiro FleetCoordinatorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.FleetCoordinatorClass")); }
    float& FleetRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FleetRadius"); }
    BrzCampoPonteiro FloatingHUDTextWorldOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.FloatingHUDTextWorldOffset")); }
    float& FluidInteractionScalarField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FluidInteractionScalar"); }
    float& FlyerForceLimitPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FlyerForceLimitPitchMax"); }
    float& FlyerForceLimitPitchMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FlyerForceLimitPitchMin"); }
    BrzCampoPonteiro FlyerTakeOffAdditionalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.FlyerTakeOffAdditionalVelocity")); }
    float& FlyingForceRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FlyingForceRotationRateModifier"); }
    BrzCampoPonteiro FlyingMovementModeUseFlyingRunSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.FlyingMovementModeUseFlyingRunSpeedModifier")); }
    float& FlyingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FlyingRunSpeedModifier"); }
    unsigned char& FollowStoppingDistanceField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.FollowStoppingDistance"); }
    float& FollowingRunDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FollowingRunDistance"); }
    TArray<USoundBase*>& FootStepSoundsPhysMatField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalPlayerFollowingShip.FootStepSoundsPhysMat"); }
    float& FootstepsMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FootstepsMaxRange"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.ForceMaximumReplicationRateUntilTime"); }
    double& ForcePreventCharZInterpUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.ForcePreventCharZInterpUntilTime"); }
    double& ForceUnfreezeSkeletalDynamicsUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.ForceUnfreezeSkeletalDynamicsUntilTime"); }
    TWeakObjectPtr<void>& ForcedMasterTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.ForcedMasterTarget"); }
    float& ForcedWildBabyAgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ForcedWildBabyAge"); }
    float& ForcesToApplyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ForcesToApplyScale"); }
    float& FrontGroupMinYCoordinateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FrontGroupMinYCoordinate"); }
    float& FullIKDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.FullIKDistance"); }
    int& GangCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.GangCount"); }
    float& GangOverlapRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GangOverlapRange"); }
    TArray<void*>& GeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.GeneTraits"); }
    FieldArray<unsigned char> GestationEggColorSetIndicesField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.GestationEggColorSetIndices" }; }
    FieldArray<unsigned char> GestationEggNumberOfLevelUpPointsAppliedField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.GestationEggNumberOfLevelUpPointsApplied" }; }
    FieldArray<unsigned char> GestationEggNumberOfMutationsAppliedField() const
    { return { (void*)this, "APrimalPlayerFollowingShip.GestationEggNumberOfMutationsApplied" }; }
    int& GestationEggRandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.GestationEggRandomMutationsFemale"); }
    int& GestationEggRandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.GestationEggRandomMutationsMale"); }
    float& GestationEggTamedIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GestationEggTamedIneffectivenessModifier"); }
    unsigned char& GestationGenderOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.GestationGenderOverride"); }
    float& GlideGravityScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GlideGravityScaleMultiplier"); }
    float& GlideMaxCarriedWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GlideMaxCarriedWeight"); }
    float& GlobalSailForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GlobalSailForceMultiplier"); }
    float& GlobalSteeringForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GlobalSteeringForceMultiplier"); }
    float& GlobalSteeringStandForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GlobalSteeringStandForceMultiplier"); }
    float& GrabWeightThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GrabWeightThreshold"); }
    BrzCampoPonteiro GroundCheckExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.GroundCheckExtent")); }
    float& GroundDistToStopShipField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.GroundDistToStopShip"); }
    BrzCampoPonteiro HUDOverlayToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.HUDOverlayToolTipWidget")); }
    float& HUDScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HUDScaleMultiplier"); }
    float& HUDTextScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HUDTextScaleMultiplier"); }
    float& HalfLegLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HalfLegLength"); }
    TWeakObjectPtr<void>& HardLimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.HardLimitWildDinoToVolume"); }
    float& HarvestingDestructionMeshRangeMultiplerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HarvestingDestructionMeshRangeMultipler"); }
    float& HealthBarMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HealthBarMaxDrawDistance"); }
    float& HealthBarOffsetYField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.HealthBarOffsetY"); }
    TArray<void*>& HibernatedZoneVolumesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.HibernatedZoneVolumes"); }
    TArray<void*>& HideBoneNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.HideBoneNames"); }
    BrzCampoPonteiro HideSpankerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.HideSpankerIcon")); }
    BrzCampoPonteiro Hotfix_AreGeneTraitsEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.Hotfix_AreGeneTraitsEnabled")); }
    BrzCampoPonteiro HullColorSetIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.HullColorSetIndices")); }
    TWeakObjectPtr<void>& HullMeshField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.HullMesh"); }
    FName& HullMeshCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.HullMeshCollisionProfileName"); }
    UAnimMontage*& HurtAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.HurtAnim"); }
    UAnimMontage*& HurtAnim_FlyingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.HurtAnim_Flying"); }
    UAnimMontage*& HurtAnim_SleepingField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.HurtAnim_Sleeping"); }
    BrzCampoPonteiro HurtDecalDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.HurtDecalData")); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalPlayerFollowingShip.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.HurtFX_Niagara")); }
    USoundBase*& HurtSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.HurtSound"); }
    float& IKAfterFallingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.IKAfterFallingTime"); }
    TObjectPtr<UTexture2D>& IconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalPlayerFollowingShip.Icon"); }
    BrzCampoPonteiro IdleFidgetAnimInfosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.IdleFidgetAnimInfos")); }
    float& IdleFidgetPlayFrequencyMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.IdleFidgetPlayFrequencyMax"); }
    float& IdleFidgetPlayFrequencyMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.IdleFidgetPlayFrequencyMin"); }
    AActor*& ImmobilizationActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalPlayerFollowingShip.ImmobilizationActor"); }
    TArray<void*>& ImmobilizationTrapsToIgnoreField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.ImmobilizationTrapsToIgnore"); }
    FString& ImprinterNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.ImprinterName"); }
    FString& ImprinterPlayerUniqueNetIdField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.ImprinterPlayerUniqueNetId"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalPlayerFollowingShip.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalPlayerFollowingShip.Instigator"); }
    BrzCampoPonteiro IsAnchoredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.IsAnchored")); }
    BrzCampoPonteiro IsAnchoringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.IsAnchoring")); }
    UAnimMontage*& JumpAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.JumpAnim"); }
    int& JumpCurrentCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.JumpCurrentCount"); }
    int& JumpCurrentCountPreJumpField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.JumpCurrentCountPreJump"); }
    float& JumpForceTimeRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.JumpForceTimeRemaining"); }
    float& JumpKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.JumpKeyHoldTime"); }
    int& JumpMaxCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.JumpMaxCount"); }
    float& JumpMaxHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.JumpMaxHoldTime"); }
    float& JumpOfWaterKeyHoldTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.JumpOfWaterKeyHoldTime"); }
    float& KeepFlightRemainingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.KeepFlightRemainingTime"); }
    float& KillXPBaseField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.KillXPBase"); }
    BrzCampoPonteiro LaddersMastClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LaddersMastClass")); }
    BrzCampoPonteiro LaddersSideClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LaddersSideClass")); }
    UAnimMontage*& LandedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.LandedAnim"); }
    BrzCampoPonteiro LandedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LandedDelegate")); }
    float& LandedSoundMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LandedSoundMaxRange"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastActorForceReplicationTime"); }
    TWeakObjectPtr<void>& LastAllyLookTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LastAllyLookTarget"); }
    double& LastAnchorLiftedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastAnchorLiftedTime"); }
    unsigned char& LastAttackIndexField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.LastAttackIndex"); }
    TWeakObjectPtr<void>& LastAttackedNearbyPlayerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LastAttackedNearbyPlayer"); }
    double& LastAttackedNearbyPlayerTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastAttackedNearbyPlayerTime"); }
    double& LastBabyFlyerFlyTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastBabyFlyerFlyTime"); }
    TWeakObjectPtr<void>& LastBasedMovementActorRefField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LastBasedMovementActorRef"); }
    double& LastBoostDinoImpulseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastBoostDinoImpulseTime"); }
    double& LastCausedDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastCausedDamageTime"); }
    double& LastClientCameraRotationServerUpdateField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastClientCameraRotationServerUpdate"); }
    BrzCampoPonteiro LastControlInputVectorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastControlInputVector")); }
    AActor*& LastDamageCauserField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalPlayerFollowingShip.LastDamageCauser"); }
    TWeakObjectPtr<void>& LastDamageEventInstigatorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LastDamageEventInstigator"); }
    float& LastDistanceToShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LastDistanceToShore"); }
    double& LastEggBoostedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastEggBoostedTime"); }
    double& LastEggSpawnChanceTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastEggSpawnChanceTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastExitStasisTime"); }
    double& LastForceAimedCharactersTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastForceAimedCharactersTime"); }
    double& LastFrameMarkedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastFrameMarkedTime"); }
    int& LastFrameMoveLeftField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LastFrameMoveLeft"); }
    int& LastFrameMoveRightField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LastFrameMoveRight"); }
    APrimalProjectileGrapplingHook*& LastGrapHookPullingMeField() const
    { return *GetNativePointerField<APrimalProjectileGrapplingHook**>(this, "APrimalPlayerFollowingShip.LastGrapHookPullingMe"); }
    AShooterCharacter*& LastGrapHookPullingOwnerField() const
    { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalPlayerFollowingShip.LastGrapHookPullingOwner"); }
    double& LastGrappledTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastGrappledTime"); }
    double& LastHigherScaleExtraRunningSpeedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastHigherScaleExtraRunningSpeedTime"); }
    float& LastHigherScaleExtraRunningSpeedValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LastHigherScaleExtraRunningSpeedValue"); }
    TObjectPtr<AController>& LastHitByField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalPlayerFollowingShip.LastHitBy"); }
    double& LastHitDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastHitDamageTime"); }
    BrzCampoPonteiro LastHitWallSweepCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastHitWallSweepCheckLocation")); }
    double& LastIkUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastIkUpdateTime"); }
    double& LastInAllyRangeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastInAllyRangeSerialized"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastInAllyRangeTime"); }
    BrzCampoPonteiro LastInWaterVolumeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastInWaterVolumeLocation")); }
    BrzCampoPonteiro LastInWaterVolumeRecoveryDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastInWaterVolumeRecoveryDir")); }
    float& LastIncomingDamagePreArmorField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LastIncomingDamagePreArmor"); }
    BrzCampoPonteiro LastIsInsideInActiveReverseVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideInActiveReverseVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideInActiveReverseVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideInActiveReverseVaccumSealedCubeOnDino")); }
    BrzCampoPonteiro LastIsInsideReverseVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideReverseVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideReverseVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideReverseVaccumSealedCubeOnDino")); }
    BrzCampoPonteiro LastIsInsideVaccumSealedCubeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideVaccumSealedCube")); }
    BrzCampoPonteiro LastIsInsideVaccumSealedCubeOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastIsInsideVaccumSealedCubeOnDino")); }
    int& LastMarkedFrameCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LastMarkedFrameCount"); }
    double& LastMatingNotificationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastMatingNotificationTime"); }
    BrzCampoPonteiro LastMovementDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastMovementDesiredRotation")); }
    BrzCampoPonteiro LastMovementDesiredRotation_MountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastMovementDesiredRotation_MountedWeaponry")); }
    int& LastPlayedAttackAnimationField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LastPlayedAttackAnimation"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastPreReplicationTime"); }
    BrzCampoPonteiro LastReverseVacuumCompartmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastReverseVacuumCompartment")); }
    BrzCampoPonteiro LastRiderMountedWeaponRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LastRiderMountedWeaponRotation")); }
    double& LastRowTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastRowTime"); }
    double& LastRunningTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastRunningTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.LastSelectedWindSourceComponentName"); }
    double& LastSkinnedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastSkinnedTime"); }
    double& LastStartedSleepingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastStartedSleepingTime"); }
    double& LastTameConsumedFoodTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTameConsumedFoodTime"); }
    double& LastThrottleCheckStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastThrottleCheckStartTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastThrottledTickTime"); }
    double& LastTimeInSwimmingField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimeInSwimming"); }
    double& LastTimeNotInFallingField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimeNotInFalling"); }
    double& LastTimePlacedDriverSeatField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimePlacedDriverSeat"); }
    double& LastTimeSubmergedField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimeSubmerged"); }
    double& LastTimeUpdatedCharacterStatusComponentField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimeUpdatedCharacterStatusComponent"); }
    double& LastTimeUpdatedCorpseDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTimeUpdatedCorpseDestructionTime"); }
    double& LastTookDamageTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTookDamageTime"); }
    double& LastTookDamageTimeDifferentTeamField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastTookDamageTimeDifferentTeam"); }
    double& LastUpdatedBabyAgeAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastUpdatedBabyAgeAtTime"); }
    double& LastUpdatedGestationAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastUpdatedGestationAtTime"); }
    double& LastUpdatedMatingAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastUpdatedMatingAtTime"); }
    double& LastUpdatedPlankDecayTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastUpdatedPlankDecayTime"); }
    int& LastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LastValidTameVersion"); }
    double& LastWalkingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.LastWalkingTime"); }
    float& LatchedFirstPersonViewAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchedFirstPersonViewAngle"); }
    TArray<APrimalStructure*>& LatchedOnStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalPlayerFollowingShip.LatchedOnStructures"); }
    float& LatchingCameraInterpolationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchingCameraInterpolationSpeed"); }
    float& LatchingDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchingDistanceLimit"); }
    float& LatchingInitialPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchingInitialPitch"); }
    float& LatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchingInitialYaw"); }
    float& LatchingInterpolatedPitchField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LatchingInterpolatedPitch"); }
    FString& LatestUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.LatestUploadedFromServerName"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.Layers"); }
    float& LeavePlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LeavePlayAnimBelowHealthPercent"); }
    int& LevelColorBandRegionField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LevelColorBandRegion"); }
    float& LimitRiderYawOnLatchedRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LimitRiderYawOnLatchedRange"); }
    TWeakObjectPtr<void>& LimitWildDinoToVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LimitWildDinoToVolume"); }
    int& LimitWildDinoToVolumenIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LimitWildDinoToVolumenIndex"); }
    FName& LimitWildDinoToVolumenTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.LimitWildDinoToVolumenTag"); }
    TWeakObjectPtr<void>& LinkedSupplyCrateField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LinkedSupplyCrate"); }
    TWeakObjectPtr<void>& LocalCaptainControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.LocalCaptainController"); }
    float& LootCrateRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LootCrateRadius"); }
    int& LootCratesToDropField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.LootCratesToDrop"); }
    BrzCampoPonteiro LootDropClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.LootDropClass")); }
    BrzCampoPonteiro MaidenVoyageIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MaidenVoyageIcon")); }
    BrzCampoPonteiro MaidenVoyageTrackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MaidenVoyageTrack")); }
    float& MastExtensionZScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MastExtensionZScale"); }
    float& MatingProgressField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MatingProgress"); }
    APrimalDinoCharacter*& MatingWithDinoField() const
    { return *GetNativePointerField<APrimalDinoCharacter**>(this, "APrimalPlayerFollowingShip.MatingWithDino"); }
    int& MaxAllowedRandomMutationsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.MaxAllowedRandomMutations"); }
    float& MaxBackwardsVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxBackwardsVelocity"); }
    float& MaxDragDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxDragDistance"); }
    float& MaxDragDistanceTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxDragDistanceTimeout"); }
    float& MaxDragMovementSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxDragMovementSpeed"); }
    float& MaxFallSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxFallSpeed"); }
    BrzCampoPonteiro MaxNameplateDimensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MaxNameplateDimensions")); }
    float& MaxPercentOfCapsulHeightAllowedForIKField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxPercentOfCapsulHeightAllowedForIK"); }
    float& MaxSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxSailRotation"); }
    float& MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxTamedDinos_SoftTameLimit_CountdownForDeletionTimeCache"); }
    double& MaxTamedDinos_SoftTameLimit_MarkedForDeletionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.MaxTamedDinos_SoftTameLimit_MarkedForDeletionTime"); }
    float& MaxTimeToShootAtLocationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxTimeToShootAtLocation"); }
    float& MaxWeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaxWeightMultiplier"); }
    float& MaximumAnchorHorizonalLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaximumAnchorHorizonalLength"); }
    float& MaximumAnchorLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MaximumAnchorLength"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MeleeDamageType")); }
    float& MeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MeleeSwingRadius"); }
    TObjectPtr<USkeletalMeshComponent>& MeshField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "APrimalPlayerFollowingShip.Mesh"); }
    int& MeshingTickCounterMultiplierField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.MeshingTickCounterMultiplier"); }
    BrzCampoPonteiro MetalColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MetalColorOptions")); }
    float& MinAllowedGroundDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinAllowedGroundDist"); }
    float& MinMaxThrottleRatioToBeachField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinMaxThrottleRatioToBeach"); }
    float& MinMovingMusicSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinMovingMusicSpeed"); }
    float& MinMovingSoundSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinMovingSoundSpeed"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinNetUpdateFrequency"); }
    int& MinPlayerLevelForWakingTameField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.MinPlayerLevelForWakingTame"); }
    float& MinRammingDirectionDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MinRammingDirectionDamageMultiplier"); }
    BrzCampoPonteiro MirroredUPaintingIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MirroredUPaintingIndices")); }
    TWeakObjectPtr<void>& MountCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.MountCharacter"); }
    BrzCampoPonteiro MountCharacterProneLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MountCharacterProneLocOffset")); }
    float& MountCharacterProneOffsetSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.MountCharacterProneOffsetSpeed"); }
    BrzCampoPonteiro MountCharacterProneRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MountCharacterProneRotOffset")); }
    FName& MountCharacterSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.MountCharacterSocketName"); }
    TWeakObjectPtr<void>& MountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.MountedDino"); }
    double& MountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.MountedDinoTime"); }
    BrzCampoPonteiro MouthFlapAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MouthFlapAnim")); }
    BrzCampoPonteiro MouthFlapSoundClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MouthFlapSoundClass")); }
    BrzCampoPonteiro MoveSteeringWheelIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MoveSteeringWheelIcon")); }
    BrzCampoPonteiro MovementModeChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MovementModeChangedDelegate")); }
    UAudioComponent*& MovingSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalPlayerFollowingShip.MovingSoundComponent"); }
    USoundBase*& MovingSoundCueField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.MovingSoundCue"); }
    BrzCampoPonteiro MutagenAppliedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MutagenApplied")); }
    TArray<void*>& MyBabyCuddleFoodTypesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.MyBabyCuddleFoodTypes"); }
    UPrimalCharacterStatusComponent*& MyCharacterStatusComponentField() const
    { return *GetNativePointerField<UPrimalCharacterStatusComponent**>(this, "APrimalPlayerFollowingShip.MyCharacterStatusComponent"); }
    UPrimalHarvestingComponent*& MyDeathHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalPlayerFollowingShip.MyDeathHarvestingComponent"); }
    BrzCampoPonteiro MyDinoEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.MyDinoEntry")); }
    UPrimalDinoSettings*& MyDinoSettingsCDOField() const
    { return *GetNativePointerField<UPrimalDinoSettings**>(this, "APrimalPlayerFollowingShip.MyDinoSettingsCDO"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalPlayerFollowingShip.MyInventoryComponent"); }
    UPrimalNavigationInvokerComponent*& NavigationInvokerComponentField() const
    { return *GetNativePointerField<UPrimalNavigationInvokerComponent**>(this, "APrimalPlayerFollowingShip.NavigationInvokerComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.NetDriverName"); }
    USoundBase*& NetDynamicMusicSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.NetDynamicMusicSound"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetworkAndStasisRangeMultiplier"); }
    double& NetworkCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NetworkCreationTime"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalPlayerFollowingShip.NetworkSpatializationParent"); }
    int& NewMutationCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.NewMutationCount"); }
    double& NextAllowedBedUseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NextAllowedBedUseTime"); }
    double& NextAllowedMatingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NextAllowedMatingTime"); }
    double& NextBPTimerNonDedicatedField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NextBPTimerNonDedicated"); }
    double& NextBPTimerServerField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NextBPTimerServer"); }
    TArray<void*>& NextBabyDinoAncestorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NextBabyDinoAncestors"); }
    TArray<void*>& NextBabyDinoAncestorsMaleField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NextBabyDinoAncestorsMale"); }
    TArray<void*>& NextBabyGeneTraitsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NextBabyGeneTraits"); }
    double& NextTimePlayIdleFidgetAnimationField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.NextTimePlayIdleFidgetAnimation"); }
    BrzCampoPonteiro NiagaraSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.NiagaraSystemsToActivateAfterDragged")); }
    float& NoRiderFlyingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NoRiderFlyingRotationRateModifier"); }
    TArray<void*>& NoSaddlePassengerSeatsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.NoSaddlePassengerSeats"); }
    FName& NonDedicatedFreezeDinoPhysicsIfLayerUnloadedField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.NonDedicatedFreezeDinoPhysicsIfLayerUnloaded"); }
    BrzCampoPonteiro NotifyInputEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.NotifyInputEvent")); }
    BrzCampoPonteiro NotifyLevelUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.NotifyLevelUp")); }
    BrzCampoPonteiro NotifyStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.NotifyStasis")); }
    BrzCampoPonteiro NotifyUnstasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.NotifyUnstasis")); }
    int& NumLevelColorBandsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.NumLevelColorBands"); }
    float& NursingTroughFoodEffectivenessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.NursingTroughFoodEffectivenessMultiplier"); }
    BrzCampoPonteiro OldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OldLocation")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnActorHit")); }
    BrzCampoPonteiro OnCharacterMovementUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnCharacterMovementUpdated")); }
    BrzCampoPonteiro OnClearMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnClearMountedDino")); }
    float& OnDeathNotifyNearbyCharactersRadiusOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.OnDeathNotifyNearbyCharactersRadiusOverride"); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnDestroyed")); }
    BrzCampoPonteiro OnDiedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnDied")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnEndPlay")); }
    BrzCampoPonteiro OnFlyerLandedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnFlyerLanded")); }
    BrzCampoPonteiro OnFlyerLandingInterruptedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnFlyerLandingInterrupted")); }
    BrzCampoPonteiro OnFlyerStartLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnFlyerStartLanding")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnMatineeUpdated")); }
    BrzCampoPonteiro OnMovementTetherSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnMovementTetherSet")); }
    BrzCampoPonteiro OnNotifyAddPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnNotifyAddPassenger")); }
    BrzCampoPonteiro OnNotifyClearPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnNotifyClearPassenger")); }
    BrzCampoPonteiro OnNotifyClearRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnNotifyClearRider")); }
    BrzCampoPonteiro OnNotifyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnNotifyDamage")); }
    BrzCampoPonteiro OnNotifySetRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnNotifySetRider")); }
    BrzCampoPonteiro OnOrbitCameraViewChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnOrbitCameraViewChange")); }
    BrzCampoPonteiro OnReachedJumpApexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnReachedJumpApex")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnSetMountedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnSetMountedDino")); }
    BrzCampoPonteiro OnShipAquiredCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnShipAquiredCargo")); }
    BrzCampoPonteiro OnShipLostCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnShipLostCargo")); }
    BrzCampoPonteiro OnShipSkillsChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnShipSkillsChanged")); }
    BrzCampoPonteiro OnSleepStateChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnSleepStateChanged")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OnTargetingTeamChanged")); }
    BrzCampoPonteiro OrbitCamRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OrbitCamRot")); }
    float& OrbitCamZoomField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.OrbitCamZoom"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.OriginalCreationTime"); }
    FName& OriginalNPCVolumeNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.OriginalNPCVolumeName"); }
    float& OverlapAsTargetCheckTraceZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.OverlapAsTargetCheckTraceZOffset"); }
    BrzCampoPonteiro OverlayTooltipPaddingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OverlayTooltipPadding")); }
    BrzCampoPonteiro OverlayTooltipScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OverlayTooltipScale")); }
    USoundBase*& OverrideAreaMusicField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.OverrideAreaMusic"); }
    TArray<void*>& OverrideBaseStatLevelsOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.OverrideBaseStatLevelsOnSpawn"); }
    BrzCampoPonteiro OverrideInputComponentClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OverrideInputComponentClass")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.OverrideStasisComponentRadius"); }
    TArray<void*>& OverrideStatPriorityOnSpawnField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.OverrideStatPriorityOnSpawn"); }
    BrzCampoPonteiro OverrideStatsPanelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.OverrideStatsPanelClass")); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalPlayerFollowingShip.OverrideTargetComponents"); }
    TArray<void*>& OverwrittenWildFollowingDinoInfosField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.OverwrittenWildFollowingDinoInfos"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalPlayerFollowingShip.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalPlayerFollowingShip.OwnerMission"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.OwningPlayerName"); }
    BrzCampoPonteiro PaintedColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PaintedColorOptions")); }
    BrzCampoPonteiro PaintingAllowedUVRangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PaintingAllowedUVRanges")); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalPlayerFollowingShip.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.ParentComponent"); }
    BrzCampoPonteiro ParticleSystemsToActivateAfterDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ParticleSystemsToActivateAfterDragged")); }
    FName& PassengerFPVCameraRootSocketField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.PassengerFPVCameraRootSocket"); }
    TArray<TWeakObjectPtr<void>>& PassengerPerSeatField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalPlayerFollowingShip.PassengerPerSeat"); }
    float& PathfollowingMaxSpeedModiferField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PathfollowingMaxSpeedModifer"); }
    int& PatrolGroupIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.PatrolGroupID"); }
    BrzCampoPonteiro PatrolGroupOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PatrolGroupOffset")); }
    float& PercentChanceFemaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PercentChanceFemale"); }
    float& PercentOfWeightForMaxSinkingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PercentOfWeightForMaxSinkingSpeed"); }
    float& PercentOfWeightForMinSinkingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PercentOfWeightForMinSinkingSpeed"); }
    int& PersonalTamedDinoCostField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.PersonalTamedDinoCost"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PhysicsReplicationMode")); }
    BrzCampoPonteiro PickedUpCargoSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PickedUpCargoSound")); }
    UAnimMontage*& PinnedAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.PinnedAnim"); }
    float& PlankDecayIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PlankDecayInterval"); }
    float& PlankDecayPercentPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PlankDecayPercentPerInterval"); }
    float& PlayAnimBelowHealthPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PlayAnimBelowHealthPercent"); }
    float& PlayerMountedLaunchFowardSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PlayerMountedLaunchFowardSpeed"); }
    float& PlayerMountedLaunchUpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.PlayerMountedLaunchUpSpeed"); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "APrimalPlayerFollowingShip.PlayerState"); }
    BrzCampoPonteiro PoopAltItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PoopAltItemClass")); }
    UAnimMontage*& PoopAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.PoopAnimation"); }
    BrzCampoPonteiro PoopItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PoopItemClass")); }
    USoundBase*& PoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.PoopSound"); }
    double& PossessedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.PossessedAtTime"); }
    TArray<void*>& PreventBuffClassesWithTagField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.PreventBuffClassesWithTag"); }
    double& PreventMateBoostUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.PreventMateBoostUntilTime"); }
    BrzCampoPonteiro PreventMutationColorizationRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PreventMutationColorizationRegions")); }
    BrzCampoPonteiro PreventPVPMountedWeaponClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PreventPVPMountedWeaponClasses")); }
    int& PreventSavingCharOnlyDamageTargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.PreventSavingCharOnlyDamageTargetingTeam"); }
    BrzCampoPonteiro PreviousAngularVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PreviousAngularVelocity")); }
    TObjectPtr<AController>& PreviousControllerField() const
    { return *GetNativePointerField<TObjectPtr<AController>*>(this, "APrimalPlayerFollowingShip.PreviousController"); }
    BrzCampoPonteiro PreviousLinearVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PreviousLinearVelocity")); }
    TWeakObjectPtr<void>& PreviousRiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.PreviousRider"); }
    FString& PreviousUploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.PreviousUploadedFromServerName"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalPlayerFollowingShip.PrimaryActorTick"); }
    float& ProneEyeHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ProneEyeHeight"); }
    float& ProneWaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ProneWaterSubmergedDepthThreshold"); }
    BrzCampoPonteiro PropertyBagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.PropertyBag")); }
    float& ProxyJumpForceStartedTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ProxyJumpForceStartedTime"); }
    float& RaftCharacterBasingAbsoluteMaxDirZField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RaftCharacterBasingAbsoluteMaxDirZ"); }
    BrzCampoPonteiro RaftSpawnEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RaftSpawnEffect")); }
    float& RagdollReplicationIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RagdollReplicationInterval"); }
    float& RamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RamSocketRadius"); }
    float& RammingExtraImpulseMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RammingExtraImpulseMultiplierInRamSocketRadius"); }
    float& RammingImpulseMitigationMultiplierInRamSocketRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RammingImpulseMitigationMultiplierInRamSocketRadius"); }
    BrzCampoPonteiro RandomColorSetsFemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RandomColorSetsFemale")); }
    BrzCampoPonteiro RandomColorSetsMaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RandomColorSetsMale")); }
    float& RandomLookAtBaseSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtBaseSearchRadius"); }
    float& RandomLookAtChanceToSkipCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtChanceToSkipCooldown"); }
    float& RandomLookAtCooldownMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtCooldownMax"); }
    float& RandomLookAtCooldownMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtCooldownMin"); }
    float& RandomLookAtDinoWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtDinoWeight"); }
    float& RandomLookAtDurationMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtDurationMax"); }
    float& RandomLookAtDurationMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtDurationMin"); }
    BrzCampoPonteiro RandomLookAtIgnoreDinoNameTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RandomLookAtIgnoreDinoNameTags")); }
    float& RandomLookAtPlayerWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtPlayerWeight"); }
    float& RandomLookAtTargetMinDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RandomLookAtTargetMinDot"); }
    int& RandomMutationsFemaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.RandomMutationsFemale"); }
    int& RandomMutationsMaleField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.RandomMutationsMale"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.RayTracingGroupId"); }
    BrzCampoPonteiro ReceiveControllerChangedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReceiveControllerChangedDelegate")); }
    BrzCampoPonteiro ReceiveRestartedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReceiveRestartedDelegate")); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.RemoteRole"); }
    unsigned char& RemoteViewPitchField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.RemoteViewPitch"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RepGraphBehavior")); }
    BrzCampoPonteiro RepRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RepRootMotion")); }
    float& ReplayLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplayLastTransformUpdateTimeStamp"); }
    BrzCampoPonteiro ReplicateAllBonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicateAllBones")); }
    BrzCampoPonteiro ReplicatedAvailableShipRepairResourceQuantitiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedAvailableShipRepairResourceQuantities")); }
    BrzCampoPonteiro ReplicatedBasedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedBasedMovement")); }
    float& ReplicatedCurrentHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedCurrentHealth"); }
    float& ReplicatedCurrentTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedCurrentTorpor"); }
    int& ReplicatedCurrentWetDockStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.ReplicatedCurrentWetDockStructureID"); }
    UAnimationAsset*& ReplicatedDeathAnimField() const
    { return *GetNativePointerField<UAnimationAsset**>(this, "APrimalPlayerFollowingShip.ReplicatedDeathAnim"); }
    BrzCampoPonteiro ReplicatedGravityDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedGravityDirection")); }
    float& ReplicatedMaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedMaxHealth"); }
    float& ReplicatedMaxTorporField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedMaxTorpor"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedMovement")); }
    unsigned char& ReplicatedMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.ReplicatedMovementMode"); }
    BrzCampoPonteiro ReplicatedRagdollPositionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedRagdollPositions")); }
    BrzCampoPonteiro ReplicatedRagdollRotationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ReplicatedRagdollRotations")); }
    float& ReplicatedRudderAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedRudderAngle"); }
    float& ReplicatedRudderSteeringAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedRudderSteeringAmount"); }
    float& ReplicatedSailRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedSailRotation"); }
    double& ReplicatedServerLastTransformUpdateTimeStampField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.ReplicatedServerLastTransformUpdateTimeStamp"); }
    float& ReplicatedSteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedSteeringInput"); }
    float& ReplicatedThrottleRatio_TargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicatedThrottleRatio_Target"); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ReplicationIntervalMultiplier"); }
    float& RequiredTameAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RequiredTameAffinity"); }
    float& RequiredTameAffinityPerBaseLevelField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RequiredTameAffinityPerBaseLevel"); }
    TWeakObjectPtr<void>& RiderField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.Rider"); }
    UAnimSequence*& RiderAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalPlayerFollowingShip.RiderAnimOverride"); }
    BrzCampoPonteiro RiderCheckTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RiderCheckTraceOffset")); }
    BrzCampoPonteiro RiderEjectionImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RiderEjectionImpulse")); }
    BrzCampoPonteiro RiderFPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RiderFPVCameraOffset")); }
    FName& RiderFPVCameraUseSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.RiderFPVCameraUseSocketName"); }
    float& RiderMaxRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RiderMaxRunSpeedModifier"); }
    float& RiderMaxSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RiderMaxSpeedModifier"); }
    UAnimSequence*& RiderMoveAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalPlayerFollowingShip.RiderMoveAnimOverride"); }
    float& RiderRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RiderRotationRateModifier"); }
    FName& RiderSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.RiderSocketName"); }
    float& RidingNetUpdateFequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RidingNetUpdateFequency"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalPlayerFollowingShip.RootComponent"); }
    float& RootLocSwimOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RootLocSwimOffset"); }
    TArray<void*>& RootMotionRepMovesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.RootMotionRepMoves"); }
    BrzCampoPonteiro RopeBeingPulledSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RopeBeingPulledSoundInfo")); }
    BrzCampoPonteiro RopeReachingEndOfTravelSoundinfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RopeReachingEndOfTravelSoundinfo")); }
    float& RotateSailsSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RotateSailsSpeedMultiplier"); }
    float& RowingImpulse_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RowingImpulse_Max"); }
    int& RowingSeatCount_MaxField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.RowingSeatCount_Max"); }
    float& RowingSeatImpulseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RowingSeatImpulseMultiplier"); }
    float& RowingSeats_RowingInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RowingSeats_RowingInput"); }
    float& RowingSeats_RowingIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RowingSeats_RowingInterval"); }
    float& RudderAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderAngle"); }
    float& RudderAngleThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderAngleThreshold"); }
    float& RudderAutoBackAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderAutoBackAngle"); }
    BrzCampoPonteiro RudderCenterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RudderCenter")); }
    float& RudderSteerForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderSteerForce"); }
    float& RudderSteeringAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderSteeringAmount"); }
    BrzCampoPonteiro RudderSteeringComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.RudderSteeringComponent")); }
    float& RudderSteeringRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RudderSteeringRate"); }
    UAudioComponent*& RunLoopACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalPlayerFollowingShip.RunLoopAC"); }
    USoundBase*& RunLoopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.RunLoopSound"); }
    float& RunMinVelocityRotDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RunMinVelocityRotDot"); }
    float& RunMinVelocityRotDotAutonomousClientSlackField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RunMinVelocityRotDotAutonomousClientSlack"); }
    USoundBase*& RunStopSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalPlayerFollowingShip.RunStopSound"); }
    float& RunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.RunningSpeedModifier"); }
    BrzCampoPonteiro SaddleItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SaddleItemClass")); }
    FDinoSaddleStruct& SaddleStructField() const
    { return *GetNativePointerField<FDinoSaddleStruct*>(this, "APrimalPlayerFollowingShip.SaddleStruct"); }
    TArray<void*>& SaddleStructuresField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.SaddleStructures"); }
    TArray<APrimalStructure*>& SaddledStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalPlayerFollowingShip.SaddledStructures"); }
    BrzCampoPonteiro SailClassesForceMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailClassesForceMultipliers")); }
    BrzCampoPonteiro SailColorOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailColorOverride")); }
    float& SailTurningInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SailTurningInput"); }
    float& SailUnits_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SailUnits_Max"); }
    float& SailingVelocity_AbsoluteMaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SailingVelocity_AbsoluteMaxAllowed"); }
    float& SailingVelocity_MaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SailingVelocity_MaxAllowed"); }
    BrzCampoPonteiro SailsChangingDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsChangingDirectionSoundInfo")); }
    BrzCampoPonteiro SailsOpenedSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsOpenedSoundInfo")); }
    BrzCampoPonteiro SailsPivotingSoundinfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsPivotingSoundinfo")); }
    BrzCampoPonteiro SailsPulledSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsPulledSoundInfo")); }
    BrzCampoPonteiro SailsRunningAgainstTheWindSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsRunningAgainstTheWindSoundInfo")); }
    BrzCampoPonteiro SailsRunningWithTheWindSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SailsRunningWithTheWindSoundInfo")); }
    float& Sails_AdditionalMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_AdditionalMaxVelocity"); }
    float& Sails_AvgSailRotationSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_AvgSailRotationSpeed"); }
    float& Sails_MaxMovementWeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_MaxMovementWeight"); }
    float& Sails_MaxThrottleForceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_MaxThrottleForce"); }
    float& Sails_SteeringForce_AtVelocityMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_SteeringForce_AtVelocityMax"); }
    BrzCampoPonteiro Sails_ThrottleForceLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.Sails_ThrottleForceLocation")); }
    float& Sails_ThrottleForceWindMult_MaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_ThrottleForceWindMult_Max"); }
    float& Sails_ThrottleForceWindMult_MinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Sails_ThrottleForceWindMult_Min"); }
    int& SaveDestroyWildDinosUnderVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.SaveDestroyWildDinosUnderVersion"); }
    BrzCampoPonteiro SavedBaseWorldLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SavedBaseWorldLocation")); }
    TArray<TWeakObjectPtr<void>>& SavedBasedCharactersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalPlayerFollowingShip.SavedBasedCharacters"); }
    BrzCampoPonteiro SavedDeathAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SavedDeathAnim")); }
    int& SavedLastValidTameVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.SavedLastValidTameVersion"); }
    TArray<APrimalCharacter*>& SavedPassengerPerSeatField() const
    { return *GetNativePointerField<TArray<APrimalCharacter*>*>(this, "APrimalPlayerFollowingShip.SavedPassengerPerSeat"); }
    BrzCampoPonteiro SavedRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SavedRootMotion")); }
    float& ScaleExtraRunningSpeedModifierMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScaleExtraRunningSpeedModifierMax"); }
    float& ScaleExtraRunningSpeedModifierMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScaleExtraRunningSpeedModifierMin"); }
    float& ScaleExtraRunningSpeedModifierSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScaleExtraRunningSpeedModifierSpeed"); }
    float& ScrapeVFXSpawnDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScrapeVFXSpawnDistance"); }
    float& ScrapeVFXSpawnDurationAfterHitField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScrapeVFXSpawnDurationAfterHit"); }
    float& ScrapeVFXSpawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ScrapeVFXSpawnInterval"); }
    UPrimalInventoryComponent*& SecondaryInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalPlayerFollowingShip.SecondaryInventoryComponent"); }
    TWeakObjectPtr<void>& SecondaryMountedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.SecondaryMountedDino"); }
    double& SecondaryMountedDinoTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.SecondaryMountedDinoTime"); }
    float& ServerTargetCarriedYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ServerTargetCarriedYaw"); }
    float& ShipBowOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipBowOffset"); }
    BrzCampoPonteiro ShipCycloneDamageEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipCycloneDamageEffect")); }
    BrzCampoPonteiro ShipDyingNiagaraFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipDyingNiagaraFX")); }
    float& ShipHullSinkMovementForceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipHullSinkMovementForceMultiplier"); }
    FName& ShipRamSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.ShipRamSocketName"); }
    BrzCampoPonteiro ShipRammingNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipRammingNS")); }
    BrzCampoPonteiro ShipRammingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipRammingSound")); }
    float& ShipScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipScale"); }
    BrzCampoPonteiro ShipScrapeNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipScrapeNS")); }
    BrzCampoPonteiro ShipSinkingNiagaraFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipSinkingNiagaraFX")); }
    BrzCampoPonteiro ShipSkillCooldownsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipSkillCooldowns")); }
    BrzCampoPonteiro ShipSkillTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipSkillTree")); }
    BrzCampoPonteiro ShipSkillsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipSkillsIcon")); }
    float& ShipStructureHealthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipStructureHealthMultiplier"); }
    unsigned char& ShipTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.ShipType"); }
    float& ShipWeightMovementForcePowerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ShipWeightMovementForcePower"); }
    BrzCampoPonteiro ShowSpankerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShowSpankerIcon")); }
    float& SimpleIkRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SimpleIkRate"); }
    float& SingleMastExtensionLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SingleMastExtensionLength"); }
    float& SinkDelayTimerField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SinkDelayTimer"); }
    UAnimMontage*& SleepConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.SleepConsumeFoodAnim"); }
    float& SlopeBiasForMaxCapsulePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SlopeBiasForMaxCapsulePercent"); }
    BrzCampoPonteiro SnapshotAnimInstanceClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SnapshotAnimInstanceClass")); }
    TArray<void*>& SnapshotPosesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.SnapshotPoses"); }
    float& SnapshotScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SnapshotScale"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro SpawnerColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.SpawnerColorSets")); }
    float& SpeedMultiplierWhenFacingHeadwindField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SpeedMultiplierWhenFacingHeadwind"); }
    float& SpeedScalarThresholdForRammingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SpeedScalarThresholdForRamming"); }
    float& SpeedToConsiderMaxForRammingField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SpeedToConsiderMaxForRamming"); }
    BrzCampoPonteiro StartChargingShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.StartChargingShake")); }
    float& StartWaveLockingThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StartWaveLockingThreshold"); }
    UAnimMontage*& StartledAnimationRightDefaultField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.StartledAnimationRightDefault"); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalPlayerFollowingShip.StasisCheckComponent"); }
    float& StasisConsumerRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StasisConsumerRangeMultiplier"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalPlayerFollowingShip.StasisUnRegisteredComponents"); }
    float& StationaryTurnBackwardsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StationaryTurnBackwardsMultiplier"); }
    float& StationaryTurnMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StationaryTurnMultiplier"); }
    float& StationaryTurnVelocityThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StationaryTurnVelocityThreshold"); }
    float& SteeringForceStandBoostThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SteeringForceStandBoostThreshold"); }
    float& SteeringForce_MaxAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SteeringForce_MaxAllowed"); }
    float& SteeringForce_MinAllowedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SteeringForce_MinAllowed"); }
    float& SteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SteeringInput"); }
    BrzCampoPonteiro StepActorDamageTypeOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.StepActorDamageTypeOverride")); }
    TArray<void*>& StepDamageFootDamageSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.StepDamageFootDamageSockets"); }
    float& StepDamageRadialDamageAmountGeneralField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StepDamageRadialDamageAmountGeneral"); }
    float& StepDamageRadialDamageAmountHarvestableField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StepDamageRadialDamageAmountHarvestable"); }
    float& StepDamageRadialDamageExtraRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StepDamageRadialDamageExtraRadius"); }
    float& StepDamageRadialDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.StepDamageRadialDamageInterval"); }
    BrzCampoPonteiro StepHarvestableDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.StepHarvestableDamageType")); }
    BrzCampoPonteiro StowedAnchorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.StowedAnchorComponent")); }
    BrzCampoPonteiro StowedAnchorSocketOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.StowedAnchorSocketOffset")); }
    unsigned char& SubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.SubmergedWaterMovementMode"); }
    float& SwimmingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SwimmingRotationRateModifier"); }
    float& SwimmingRunSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.SwimmingRunSpeedModifier"); }
    UAnimMontage*& SyncedMontageField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.SyncedMontage"); }
    float& TPVCameraHorizontalOffsetFactorMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TPVCameraHorizontalOffsetFactorMax"); }
    float& TPVCameraHorizontalOffsetFactorMaxClampField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TPVCameraHorizontalOffsetFactorMaxClamp"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TPVCameraOffsetMultiplier")); }
    BrzCampoPonteiro TPVCameraOrgOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TPVCameraOrgOffset")); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.Tags"); }
    float& TameIneffectivenessByAffinityField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TameIneffectivenessByAffinity"); }
    float& TameIneffectivenessModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TameIneffectivenessModifier"); }
    BrzCampoPonteiro TamedAIControllerOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TamedAIControllerOverride")); }
    unsigned char& TamedAITargetingRangeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.TamedAITargetingRange"); }
    int& TamedAggressionLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.TamedAggressionLevel"); }
    double& TamedAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.TamedAtTime"); }
    float& TamedCorpseLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamedCorpseLifespan"); }
    TWeakObjectPtr<void>& TamedFollowTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.TamedFollowTarget"); }
    BrzCampoPonteiro TamedInventoryComponentTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TamedInventoryComponentTemplate")); }
    TWeakObjectPtr<void>& TamedLandTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.TamedLandTarget"); }
    FString& TamedNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.TamedName"); }
    FString& TamedOnServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.TamedOnServerName"); }
    float& TamedRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamedRunningRotationRateModifier"); }
    float& TamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamedRunningSpeedModifier"); }
    FString& TamedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.TamedTimeStamp"); }
    float& TamedWalkableFloorZField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamedWalkableFloorZ"); }
    float& TamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamedWalkingSpeedModifier"); }
    FString& TamerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.TamerString"); }
    float& TamingFoodConsumeIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamingFoodConsumeInterval"); }
    float& TamingFoodConsumeIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamingFoodConsumeIntervalMax"); }
    float& TamingIneffectivenessModifierIncreaseByDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TamingIneffectivenessModifierIncreaseByDamagePercent"); }
    double& TamingLastFoodConsumptionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.TamingLastFoodConsumptionTime"); }
    int& TamingTeamIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.TamingTeamID"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.Target"); }
    float& TargetLatchingInitialYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TargetLatchingInitialYaw"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.TargetingTeam"); }
    FName& TargetingTeamNameOverrideField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.TargetingTeamNameOverride"); }
    BrzCampoPonteiro TaxidermySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TaxidermySkinClass")); }
    float& Teleport_AllowedAboveTopDeckDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Teleport_AllowedAboveTopDeckDist"); }
    float& Teleport_AllowedBelowTopDeckDistField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.Teleport_AllowedBelowTopDeckDist"); }
    TWeakObjectPtr<void>& TetherActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.TetherActor"); }
    float& TetherHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TetherHeight"); }
    float& TetherRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TetherRadius"); }
    unsigned char& ThrottleAxisField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.ThrottleAxis"); }
    float& ThrottleCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ThrottleCheckInterval"); }
    BrzCampoPonteiro ThrottleForceLocation_OffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ThrottleForceLocation_Offset")); }
    float& ThrottleInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ThrottleInput"); }
    float& ThrottleInputThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ThrottleInputThreshold"); }
    float& ThrottleRatioInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ThrottleRatioInterpSpeed"); }
    float& ThrottleRatio_TargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.ThrottleRatio_Target"); }
    float& TimeBetweenTamedWakingEatAnimationsField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TimeBetweenTamedWakingEatAnimations"); }
    BrzCampoPonteiro ToggleDeckIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ToggleDeckIcon")); }
    BrzCampoPonteiro ToggleLaddersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ToggleLaddersIcon")); }
    BrzCampoPonteiro ToggleLightsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ToggleLightsIcon")); }
    BrzCampoPonteiro TorchMaterial_UnlitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TorchMaterial_Unlit")); }
    BrzCampoPonteiro TorchMaterials_LitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.TorchMaterials_Lit")); }
    float& TorquesToApplyScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TorquesToApplyScale"); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupPetOrderingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.TribeGroupPetOrderingRank"); }
    unsigned char& TribeGroupPetRidingRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.TribeGroupPetRidingRank"); }
    FString& TribeNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.TribeName"); }
    float& TwoLeggedVirtualPointDistFactorField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.TwoLeggedVirtualPointDistFactor"); }
    float& UnAnchoredAutoDestroyTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.UnAnchoredAutoDestroyTime"); }
    unsigned char& UnSubmergedWaterMovementModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalPlayerFollowingShip.UnSubmergedWaterMovementMode"); }
    BrzCampoPonteiro UnboardLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.UnboardLocationOffset")); }
    BrzCampoPonteiro UnlockedShipSkillNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.UnlockedShipSkillNodes")); }
    BrzCampoPonteiro UnlockedShipSkillRanksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.UnlockedShipSkillRanks")); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.UnstasisLastInRangeTime"); }
    float& UntamedPoopTimeCacheField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.UntamedPoopTimeCache"); }
    float& UntamedRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.UntamedRunningSpeedModifier"); }
    float& UntamedWalkingSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.UntamedWalkingSpeedModifier"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.UpdateOverlapsMethodDuringLevelStreaming"); }
    double& UploadEarliestValidTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalPlayerFollowingShip.UploadEarliestValidTime"); }
    FString& UploadedFromServerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalPlayerFollowingShip.UploadedFromServerName"); }
    BrzCampoPonteiro UseBPGetWiegthedAttackOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.UseBPGetWiegthedAttackOverride")); }
    BrzCampoPonteiro VelocityBasedEnteredSwimmingSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.VelocityBasedEnteredSwimmingSounds")); }
    BrzCampoPonteiro VelocityBasedLandedSoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.VelocityBasedLandedSounds")); }
    FName& VesselDynamicsCollisionProfileNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalPlayerFollowingShip.VesselDynamicsCollisionProfileName"); }
    BrzCampoPonteiro VesselDynamicsComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.VesselDynamicsComponent")); }
    UAnimMontage*& WakingConsumeFoodAnimField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.WakingConsumeFoodAnim"); }
    float& WakingTameAffinityDecreaseFoodPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WakingTameAffinityDecreaseFoodPercentage"); }
    float& WakingTameFeedIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WakingTameFeedInterval"); }
    float& WakingTameFoodIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WakingTameFoodIncreaseMultiplier"); }
    float& WalkingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WalkingRotationRateModifier"); }
    TWeakObjectPtr<void>& WanderAroundActorField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.WanderAroundActor"); }
    float& WanderRadiusMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WanderRadiusMultiplier"); }
    BrzCampoPonteiro WaterSplashAgainstFastBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WaterSplashAgainstFastBoat")); }
    BrzCampoPonteiro WaterSplashAgainstMediumSpeedBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WaterSplashAgainstMediumSpeedBoat")); }
    BrzCampoPonteiro WaterSplashAgainstSlowBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WaterSplashAgainstSlowBoat")); }
    BrzCampoPonteiro WaterSplashAgainstStillBoatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WaterSplashAgainstStillBoat")); }
    float& WaterSubmergedDepthThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WaterSubmergedDepthThreshold"); }
    float& WetDockOceanZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WetDockOceanZOffset"); }
    BrzCampoPonteiro WheelsChangeDirectionSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WheelsChangeDirectionSoundInfo")); }
    BrzCampoPonteiro WheelsTurningSoundInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WheelsTurningSoundInfo")); }
    UAnimMontage*& WildAmbientHarvestingAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalPlayerFollowingShip.WildAmbientHarvestingAnimation"); }
    TArray<UAnimMontage*>& WildAmbientHarvestingAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalPlayerFollowingShip.WildAmbientHarvestingAnimations"); }
    TArray<void*>& WildAmbientHarvestingComponentClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalPlayerFollowingShip.WildAmbientHarvestingComponentClasses"); }
    TArray<AActor*>& WildFollowerRefsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "APrimalPlayerFollowingShip.WildFollowerRefs"); }
    AActor*& WildFollowingParentRefField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalPlayerFollowingShip.WildFollowingParentRef"); }
    TWeakObjectPtr<void>& WildLimitTargetVolumeField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalPlayerFollowingShip.WildLimitTargetVolume"); }
    float& WildPercentageChanceOfBabyField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WildPercentageChanceOfBaby"); }
    float& WildRandomScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WildRandomScale"); }
    float& WildRunningRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.WildRunningRotationRateModifier"); }
    BrzCampoPonteiro WoodColorOptionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.WoodColorOptions")); }
    float& YawInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.YawInterpSpeed"); }
    BrzCampoPonteiro bAccurateOceanVolumeOverlapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAccurateOceanVolumeOverlaps")); }
    BrzCampoPonteiro bActiveRunToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bActiveRunToggle")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowASACameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowASACamera")); }
    BrzCampoPonteiro bAllowAutoPilotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowAutoPilot")); }
    BrzCampoPonteiro bAllowBPNewDoorInteractionDrawHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowBPNewDoorInteractionDrawHUD")); }
    BrzCampoPonteiro bAllowBasedCharactersAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowBasedCharactersAttacks")); }
    BrzCampoPonteiro bAllowCarryCharacterWithoutRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowCarryCharacterWithoutRider")); }
    BrzCampoPonteiro bAllowCarryFlyerDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowCarryFlyerDinos")); }
    BrzCampoPonteiro bAllowCorpseDestructionWithPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowCorpseDestructionWithPreventSaving")); }
    BrzCampoPonteiro bAllowDamageSameTeamAndClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowDamageSameTeamAndClass")); }
    BrzCampoPonteiro bAllowDinoAutoConsumeInventoryFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowDinoAutoConsumeInventoryFood")); }
    BrzCampoPonteiro bAllowDriverSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowDriverSeats")); }
    BrzCampoPonteiro bAllowMountedWeaponryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowMountedWeaponry")); }
    BrzCampoPonteiro bAllowMountedWeaponryPVEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowMountedWeaponryPVE")); }
    BrzCampoPonteiro bAllowMultiUseByRemoteDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowMultiUseByRemoteDino")); }
    BrzCampoPonteiro bAllowPublicSeatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowPublicSeating")); }
    BrzCampoPonteiro bAllowRaftAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRaftAttacks")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowRidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRiding")); }
    BrzCampoPonteiro bAllowRidingInTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRidingInTurretMode")); }
    BrzCampoPonteiro bAllowRidingInWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRidingInWater")); }
    BrzCampoPonteiro bAllowRowingSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRowingSeats")); }
    BrzCampoPonteiro bAllowRudderAngleSpeedModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRudderAngleSpeedModification")); }
    BrzCampoPonteiro bAllowRunningWhileSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowRunningWhileSwimming")); }
    BrzCampoPonteiro bAllowSailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowSails")); }
    BrzCampoPonteiro bAllowShipForcedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowShipForcedMovement")); }
    BrzCampoPonteiro bAllowSteeringForceModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowSteeringForceModification")); }
    BrzCampoPonteiro bAllowTargetingCorpsesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTargetingCorpses")); }
    BrzCampoPonteiro bAllowTeleportMeshInterpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTeleportMeshInterp")); }
    BrzCampoPonteiro bAllowThrottleRatioInterpSpeedModificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowThrottleRatioInterpSpeedModification")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowTrappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTrapping")); }
    BrzCampoPonteiro bAllowTreadWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTreadWater")); }
    BrzCampoPonteiro bAllowTurretTargetOverrideLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowTurretTargetOverrideLocations")); }
    BrzCampoPonteiro bAllowWanderAroundActorWildTameMixField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowWanderAroundActorWildTameMix")); }
    BrzCampoPonteiro bAllowWhistleThroughRemoteDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowWhistleThroughRemoteDino")); }
    BrzCampoPonteiro bAllowWildDinoEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowWildDinoEquipment")); }
    BrzCampoPonteiro bAllowWildRunningWithoutTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowWildRunningWithoutTarget")); }
    BrzCampoPonteiro bAllowsTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAllowsTurretMode")); }
    BrzCampoPonteiro bAlwaysAllowStrafingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAlwaysAllowStrafing")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysUpdateDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAlwaysUpdateDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bAnchoredSetToOceanHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAnchoredSetToOceanHeight")); }
    BrzCampoPonteiro bAnimIsMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAnimIsMoving")); }
    BrzCampoPonteiro bApplyDamageEffectToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bApplyDamageEffectToChildComponents")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttemptAnchoringNextFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAttemptAnchoringNextFrame")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAutoStasis")); }
    BrzCampoPonteiro bAutoThrottleActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bAutoThrottleActive")); }
    BrzCampoPonteiro bBPCameraRotationFinalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPCameraRotationFinal")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPLimitPlayerRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPLimitPlayerRotation")); }
    BrzCampoPonteiro bBPManagedFPVViewLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPManagedFPVViewLocation")); }
    BrzCampoPonteiro bBPManagedFPVViewLocationNoRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPManagedFPVViewLocationNoRider")); }
    BrzCampoPonteiro bBPModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bBPModifyAllowedViewHitDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPModifyAllowedViewHitDir")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBabyInitiallyUnclaimedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBabyInitiallyUnclaimed")); }
    BrzCampoPonteiro bBabyPreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBabyPreventExitingWater")); }
    BrzCampoPonteiro bBasedCharactersForceDisableCollisionCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBasedCharactersForceDisableCollisionCheck")); }
    BrzCampoPonteiro bBasingRequiresInteriorPositionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBasingRequiresInteriorPosition")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bBonesHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bBonesHidden")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCallRiderChangeWeaponsOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCallRiderChangeWeaponsOnClient")); }
    BrzCampoPonteiro bCanAffectNavigationGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanAffectNavigationGeneration")); }
    BrzCampoPonteiro bCanBeCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeCarried")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeDragged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeOrderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeOrdered")); }
    BrzCampoPonteiro bCanBePushedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBePushed")); }
    BrzCampoPonteiro bCanBeRepairedInOpenWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeRepairedInOpenWater")); }
    BrzCampoPonteiro bCanBeTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeTamed")); }
    BrzCampoPonteiro bCanBeTorpidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanBeTorpid")); }
    BrzCampoPonteiro bCanDragField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanDrag")); }
    BrzCampoPonteiro bCanEverCrouchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanEverCrouch")); }
    BrzCampoPonteiro bCanEverProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanEverProne")); }
    BrzCampoPonteiro bCanHaveBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanHaveBaby")); }
    BrzCampoPonteiro bCanHideSpankerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanHideSpanker")); }
    BrzCampoPonteiro bCanIgnoreWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanIgnoreWater")); }
    BrzCampoPonteiro bCanMountOnHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanMountOnHumans")); }
    BrzCampoPonteiro bCanMoveWithoutRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanMoveWithoutRider")); }
    BrzCampoPonteiro bCanPlayLandingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanPlayLandingAnim")); }
    BrzCampoPonteiro bCanPushOthersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanPushOthers")); }
    BrzCampoPonteiro bCanRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanRun")); }
    BrzCampoPonteiro bCanSecondaryMountOnHumansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanSecondaryMountOnHumans")); }
    BrzCampoPonteiro bCanTargetVehiclesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanTargetVehicles")); }
    BrzCampoPonteiro bCanUnclaimTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCanUnclaimTame")); }
    BrzCampoPonteiro bCancelInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCancelInterpolation")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheatForceTameRideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCheatForceTameRide")); }
    BrzCampoPonteiro bCheatPossessedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCheatPossessed")); }
    BrzCampoPonteiro bCheckBuffModifyAimOffsetNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCheckBuffModifyAimOffsetNoTarget")); }
    BrzCampoPonteiro bClampOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClampOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bClearOnConsumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClearOnConsume")); }
    BrzCampoPonteiro bClearRiderOnDinoImmobilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClearRiderOnDinoImmobilized")); }
    BrzCampoPonteiro bClientCheckEncroachmentOnNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientCheckEncroachmentOnNetUpdate")); }
    BrzCampoPonteiro bClientInterpLocationInCustomMovemodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientInterpLocationInCustomMovemode")); }
    BrzCampoPonteiro bClientResimulateRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientResimulateRootMotion")); }
    BrzCampoPonteiro bClientResimulateRootMotionSourcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientResimulateRootMotionSources")); }
    BrzCampoPonteiro bClientSideSailingForcesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientSideSailingForces")); }
    BrzCampoPonteiro bClientUpdatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientUpdating")); }
    BrzCampoPonteiro bClientWasFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClientWasFalling")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bClimbable")); }
    BrzCampoPonteiro bCollectVictimItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCollectVictimItems")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCollideWhenPlacing")); }
    BrzCampoPonteiro bConsumeZoomInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bConsumeZoomInput")); }
    BrzCampoPonteiro bControlledDinoPreventsPlayerInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bControlledDinoPreventsPlayerInventory")); }
    BrzCampoPonteiro bCreatureIsImmuneToServerSoftTameLimitDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCreatureIsImmuneToServerSoftTameLimitDestruction")); }
    BrzCampoPonteiro bCuddleRequestRefreshedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bCuddleRequestRefreshed")); }
    BrzCampoPonteiro bDamageNotifyTeamAggroAIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDamageNotifyTeamAggroAI")); }
    BrzCampoPonteiro bDeathUseRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDeathUseRagdoll")); }
    BrzCampoPonteiro bDebugBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugBaby")); }
    BrzCampoPonteiro bDebugIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugIK")); }
    BrzCampoPonteiro bDebugIK_ShowTraceNamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugIK_ShowTraceNames")); }
    BrzCampoPonteiro bDebugMeleeAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugMeleeAttacks")); }
    BrzCampoPonteiro bDebugRowingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugRowing")); }
    BrzCampoPonteiro bDebugRowing_ForceAllSeatsRowSyncField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugRowing_ForceAllSeatsRowSync")); }
    BrzCampoPonteiro bDebugSailingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugSailing")); }
    BrzCampoPonteiro bDebugSteeringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugSteering")); }
    BrzCampoPonteiro bDebugStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDebugStructures")); }
    BrzCampoPonteiro bDediServerAutoUnregisterSkeletalMeshWhenNotRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyOnStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDestroyOnStasis")); }
    BrzCampoPonteiro bDieIfLeftWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDieIfLeftWater")); }
    BrzCampoPonteiro bDinoHasBondedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDinoHasBonded")); }
    BrzCampoPonteiro bDisableAutoMatingWhileTamedWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableAutoMatingWhileTamedWandering")); }
    BrzCampoPonteiro bDisableCameraShakeOnNotifyHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableCameraShakeOnNotifyHit")); }
    BrzCampoPonteiro bDisableControllerDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableControllerDesiredRotation")); }
    BrzCampoPonteiro bDisableDefaultDinoTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableDefaultDinoTaming")); }
    BrzCampoPonteiro bDisableFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableFPV")); }
    BrzCampoPonteiro bDisableHarvestHealthGainField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableHarvestHealthGain")); }
    BrzCampoPonteiro bDisableHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableHarvesting")); }
    BrzCampoPonteiro bDisablePathfindingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisablePathfinding")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableShipHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableShipHUD")); }
    BrzCampoPonteiro bDisableSpawnDefaultControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisableSpawnDefaultController")); }
    BrzCampoPonteiro bDisabledFromAscensionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisabledFromAscension")); }
    BrzCampoPonteiro bDisallowPostNetReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDisallowPostNetReplication")); }
    BrzCampoPonteiro bDoStepDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDoStepDamage")); }
    BrzCampoPonteiro bDontActuallyEmitPoopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDontActuallyEmitPoop")); }
    BrzCampoPonteiro bDontForceUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDontForceUpdateRateOptimizations")); }
    BrzCampoPonteiro bDontOverrideToNavMeshStepHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDontOverrideToNavMeshStepHeight")); }
    BrzCampoPonteiro bDontWanderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDontWander")); }
    BrzCampoPonteiro bDraggedFromExtremitiesOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDraggedFromExtremitiesOnly")); }
    BrzCampoPonteiro bDrawHealthBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDrawHealthBar")); }
    BrzCampoPonteiro bDropWildEggsWithoutMateBoostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bDropWildEggsWithoutMateBoost")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEggBoostedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEggBoosted")); }
    BrzCampoPonteiro bEnableAnimationGroundConformingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableAnimationGroundConforming")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableIK")); }
    BrzCampoPonteiro bEnableMouthFlapAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableMouthFlapAnimations")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableTamedMatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableTamedMating")); }
    BrzCampoPonteiro bEnableTamedWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bEnableTamedWandering")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFlyerDinoAllowBackwardsFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerDinoAllowBackwardsFlight")); }
    BrzCampoPonteiro bFlyerDinoAllowStrafingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerDinoAllowStrafing")); }
    BrzCampoPonteiro bFlyerDontGainImpulseOnSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerDontGainImpulseOnSubmerged")); }
    BrzCampoPonteiro bFlyerForceLimitPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerForceLimitPitch")); }
    BrzCampoPonteiro bFlyerForceNoPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerForceNoPitch")); }
    BrzCampoPonteiro bFlyerPrioritizeAllyMountToCarryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bFlyerPrioritizeAllyMountToCarry")); }
    BrzCampoPonteiro bForceAllowBackwardsMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowBackwardsMovement")); }
    BrzCampoPonteiro bForceAllowDediServerGroundConformInterpolateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowDediServerGroundConformInterpolate")); }
    BrzCampoPonteiro bForceAllowMountedAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowMountedAimOffset")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceAllowSalvagingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowSalvaging")); }
    BrzCampoPonteiro bForceAllowTamedTickEggLayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAllowTamedTickEggLay")); }
    BrzCampoPonteiro bForceAlwaysAllowBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAlwaysAllowBasing")); }
    BrzCampoPonteiro bForceAlwaysUpdateMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAlwaysUpdateMesh")); }
    BrzCampoPonteiro bForceAutoTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceAutoTame")); }
    BrzCampoPonteiro bForceDisableClientGravitySimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceDisableClientGravitySim")); }
    BrzCampoPonteiro bForceDisablingTamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceDisablingTaming")); }
    BrzCampoPonteiro bForceDrawHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceDrawHUD")); }
    BrzCampoPonteiro bForceDrawHUDWithoutRecentlyRenderedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceDrawHUDWithoutRecentlyRendered")); }
    BrzCampoPonteiro bForceFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceFirstPerson")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHideSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceHideSaddle")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceIKOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceIKOnDedicatedServer")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNoCharacterStatusComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceNoCharacterStatusComponentTick")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePerFrameTickingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePerFrameTicking")); }
    BrzCampoPonteiro bForcePreventAllInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePreventAllInput")); }
    BrzCampoPonteiro bForcePreventExitingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePreventExitingWater")); }
    BrzCampoPonteiro bForcePreventInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePreventInventoryAccess")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForcePvEAllowNonAlignedShipBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcePvEAllowNonAlignedShipBasing")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceRiderDrawCrosshairField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceRiderDrawCrosshair")); }
    BrzCampoPonteiro bForceSimpleTeleportFadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceSimpleTeleportFade")); }
    BrzCampoPonteiro bForceTickingBehaviorTreeEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceTickingBehaviorTreeEveryFrame")); }
    BrzCampoPonteiro bForceUseAltAimSocketsForTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceUseAltAimSocketsForTurrets")); }
    BrzCampoPonteiro bForceUseCustomCameraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceUseCustomCameraComponent")); }
    BrzCampoPonteiro bForceValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceValidUnstasisCaster")); }
    BrzCampoPonteiro bForceWildEncumberBasedOnTamedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceWildEncumberBasedOnTamedDino")); }
    BrzCampoPonteiro bForceWildMeleeSwingTraceAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForceWildMeleeSwingTraceAll")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bGlideWhenFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bGlideWhenFalling")); }
    BrzCampoPonteiro bGlideWhenMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bGlideWhenMounted")); }
    BrzCampoPonteiro bHackForcesToApplyCheckForInvalidPhysxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHackForcesToApplyCheckForInvalidPhysx")); }
    BrzCampoPonteiro bHadLinkedSupplyCrateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHadLinkedSupplyCrate")); }
    BrzCampoPonteiro bHadStaticBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHadStaticBase")); }
    BrzCampoPonteiro bHadStaticMapActorBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHadStaticMapActorBase")); }
    BrzCampoPonteiro bHasBotRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasBotRider")); }
    BrzCampoPonteiro bHasBuffPreSerializeForInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasBuffPreSerializeForInstigator")); }
    BrzCampoPonteiro bHasBuffPreventingUploadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasBuffPreventingUploading")); }
    BrzCampoPonteiro bHasDynamicBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasDynamicBase")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasMateBoostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasMateBoost")); }
    BrzCampoPonteiro bHasPlayerControllerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasPlayerController")); }
    BrzCampoPonteiro bHasRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHasRider")); }
    BrzCampoPonteiro bHealthPercentageUseHullHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHealthPercentageUseHullHealth")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHidden")); }
    BrzCampoPonteiro bHiddenForLocalPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHiddenForLocalPassenger")); }
    BrzCampoPonteiro bHideFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHideFloatingHUD")); }
    BrzCampoPonteiro bHideFloatingNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHideFloatingName")); }
    BrzCampoPonteiro bHideFromScansField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bHideFromScans")); }
    BrzCampoPonteiro bIKEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIKEnabled")); }
    BrzCampoPonteiro bIfAmphibiousCountAsLandDinoForNPCVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIfAmphibiousCountAsLandDinoForNPCVolumes")); }
    BrzCampoPonteiro bIgnoreAllImmobilizationTrapsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreAllImmobilizationTraps")); }
    BrzCampoPonteiro bIgnoreAllWhistlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreAllWhistles")); }
    BrzCampoPonteiro bIgnoreAllyLookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreAllyLook")); }
    BrzCampoPonteiro bIgnoreBasedDinosWhenTeleportingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreBasedDinosWhenTeleporting")); }
    BrzCampoPonteiro bIgnoreCorpseDecompositionMultipliersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreCorpseDecompositionMultipliers")); }
    BrzCampoPonteiro bIgnoreDestroyOnRapidDeathField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreDestroyOnRapidDeath")); }
    BrzCampoPonteiro bIgnoreFlierRidingRestrictionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreFlierRidingRestrictions")); }
    BrzCampoPonteiro bIgnoreLowGravityDisorientationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreLowGravityDisorientation")); }
    BrzCampoPonteiro bIgnoreNPCCountVolumesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreNPCCountVolumes")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreOnDeathNotifyNearbyCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreOnDeathNotifyNearbyCharacters")); }
    BrzCampoPonteiro bIgnoreWeightWhenUsingExtraMaxSpeedModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreWeightWhenUsingExtraMaxSpeedModifier")); }
    BrzCampoPonteiro bIgnoreWindEffectivenessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoreWindEffectiveness")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIgnoresOriginShifting")); }
    bool& bInBaseReplicationField() const
    { return *GetNativePointerField<bool*>(this, "APrimalPlayerFollowingShip.bInBaseReplication"); }
    BrzCampoPonteiro bInRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bInRagdoll")); }
    BrzCampoPonteiro bIncludePreventManualInPassengerCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIncludePreventManualInPassengerCount")); }
    BrzCampoPonteiro bIncrementedZoneManagerDirectLinkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIncrementedZoneManagerDirectLink")); }
    BrzCampoPonteiro bInterceptPlayerEmotesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bInterceptPlayerEmotes")); }
    BrzCampoPonteiro bInterpHealthDamageMaterialOverlayAlphaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bInterpHealthDamageMaterialOverlayAlpha")); }
    BrzCampoPonteiro bIsAWildFollowerKnownServersideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsAWildFollowerKnownServerside")); }
    BrzCampoPonteiro bIsAmphibiousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsAmphibious")); }
    BrzCampoPonteiro bIsAnimSharingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsAnimSharing")); }
    BrzCampoPonteiro bIsAtMaxInventoryItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsAtMaxInventoryItems")); }
    BrzCampoPonteiro bIsAttachedOtherCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsAttachedOtherCharacter")); }
    BrzCampoPonteiro bIsBabyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBaby")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBed")); }
    BrzCampoPonteiro bIsBeingDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBeingDragged")); }
    BrzCampoPonteiro bIsBlinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBlinking")); }
    BrzCampoPonteiro bIsBossDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBossDino")); }
    BrzCampoPonteiro bIsBuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsBuffed")); }
    BrzCampoPonteiro bIsCarnivoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCarnivore")); }
    BrzCampoPonteiro bIsCarriedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCarried")); }
    BrzCampoPonteiro bIsCarriedAsPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCarriedAsPassenger")); }
    BrzCampoPonteiro bIsCarryingCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCarryingCharacter")); }
    BrzCampoPonteiro bIsCarryingPassengerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCarryingPassenger")); }
    BrzCampoPonteiro bIsChargingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCharging")); }
    BrzCampoPonteiro bIsCheckingThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCheckingThrottle")); }
    BrzCampoPonteiro bIsCloneDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCloneDino")); }
    BrzCampoPonteiro bIsCorruptedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCorrupted")); }
    BrzCampoPonteiro bIsCrouchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsCrouched")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDestroyingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDestroyingDino")); }
    BrzCampoPonteiro bIsDoingDraggedInterpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDoingDraggedInterp")); }
    BrzCampoPonteiro bIsDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDragging")); }
    BrzCampoPonteiro bIsDraggingWithGrapHookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsDraggingWithGrapHook")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsEnforcerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsEnforcer")); }
    BrzCampoPonteiro bIsExtinctionTitanField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsExtinctionTitan")); }
    BrzCampoPonteiro bIsFemaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsFemale")); }
    BrzCampoPonteiro bIsFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsFlying")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsHeldJumpSlowFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsHeldJumpSlowFalling")); }
    BrzCampoPonteiro bIsHordeDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsHordeDino")); }
    BrzCampoPonteiro bIsHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsHost")); }
    BrzCampoPonteiro bIsImmobilizedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsImmobilized")); }
    BrzCampoPonteiro bIsInTurretModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsInTurretMode")); }
    BrzCampoPonteiro bIsInWetDockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsInWetDock")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsInvincible")); }
    BrzCampoPonteiro bIsLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsLanding")); }
    BrzCampoPonteiro bIsLatchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsLatched")); }
    BrzCampoPonteiro bIsLatchedDownwardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsLatchedDownward")); }
    BrzCampoPonteiro bIsLatchingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsLatching")); }
    BrzCampoPonteiro bIsLocalViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsLocalViewTarget")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsMapActor")); }
    BrzCampoPonteiro bIsMassMovingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsMassMoving")); }
    BrzCampoPonteiro bIsMekField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsMek")); }
    BrzCampoPonteiro bIsMetalHullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsMetalHull")); }
    BrzCampoPonteiro bIsMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsMounted")); }
    BrzCampoPonteiro bIsNPCShipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsNPCShip")); }
    BrzCampoPonteiro bIsNursingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsNursing")); }
    BrzCampoPonteiro bIsNursingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsNursingDino")); }
    BrzCampoPonteiro bIsOceanManagerDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsOceanManagerDino")); }
    BrzCampoPonteiro bIsOverridingClientPositionErrorToleranceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsOverridingClientPositionErrorTolerance")); }
    BrzCampoPonteiro bIsParentWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsParentWildDino")); }
    BrzCampoPonteiro bIsPlayingLowHealthAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsPlayingLowHealthAnim")); }
    BrzCampoPonteiro bIsPlayingTurningAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsPlayingTurningAnim")); }
    BrzCampoPonteiro bIsProneField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsProne")); }
    BrzCampoPonteiro bIsRaidDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsRaidDino")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsRepairing")); }
    BrzCampoPonteiro bIsSaveProfilingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsSaveProfilingDino")); }
    BrzCampoPonteiro bIsScoutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsScout")); }
    BrzCampoPonteiro bIsSecondaryMountedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsSecondaryMounted")); }
    BrzCampoPonteiro bIsSkinnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsSkinned")); }
    BrzCampoPonteiro bIsSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsSleeping")); }
    BrzCampoPonteiro bIsSmallRaftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsSmallRaft")); }
    BrzCampoPonteiro bIsTemporaryMissionDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsTemporaryMissionDino")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bIsVoiceTalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsVoiceTalking")); }
    BrzCampoPonteiro bIsWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsWakingTame")); }
    BrzCampoPonteiro bIsWanderingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bIsWandering")); }
    BrzCampoPonteiro bJumpOnReleaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bJumpOnRelease")); }
    BrzCampoPonteiro bKeepAffinityOnDamageRecievedWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bKeepAffinityOnDamageRecievedWakingTame")); }
    BrzCampoPonteiro bKillingThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bKillingThrottle")); }
    BrzCampoPonteiro bLimitRiderYawOnLatchedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bLimitRiderYawOnLatched")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bLocalIsDraggingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bLocalIsDragging")); }
    BrzCampoPonteiro bMaidenVoyagePlayedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bMaidenVoyagePlayed")); }
    BrzCampoPonteiro bMeleeSwingDamageBlockedByStruturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bMeleeSwingDamageBlockedByStrutures")); }
    BrzCampoPonteiro bMotionWantsMusicOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bMotionWantsMusicOn")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bMusicFadedInField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bMusicFadedIn")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNeuteredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNeutered")); }
    BrzCampoPonteiro bNoDamageImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNoDamageImpulse")); }
    BrzCampoPonteiro bNoKillXPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bNoKillXP")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyTargetConsciousField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOnlyTargetConscious")); }
    BrzCampoPonteiro bOnlyUseBPSimulatePhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOnlyUseBPSimulatePhysics")); }
    BrzCampoPonteiro bOrbitCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOrbitCamera")); }
    BrzCampoPonteiro bOverrideBlendSpaceSmoothTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideBlendSpaceSmoothType")); }
    BrzCampoPonteiro bOverrideCrosshairAlphaField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideCrosshairAlpha")); }
    BrzCampoPonteiro bOverrideCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideCrosshairColor")); }
    BrzCampoPonteiro bOverrideFlyingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideFlyingVelocity")); }
    BrzCampoPonteiro bOverrideNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideNewFallVelocity")); }
    BrzCampoPonteiro bOverrideSwimmingAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideSwimmingAcceleration")); }
    BrzCampoPonteiro bOverrideSwimmingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideSwimmingVelocity")); }
    BrzCampoPonteiro bOverrideWalkingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bOverrideWalkingVelocity")); }
    BrzCampoPonteiro bPaintingSupportSkinsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPaintingSupportSkins")); }
    BrzCampoPonteiro bPassiveFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPassiveFlee")); }
    BrzCampoPonteiro bPressedJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPressedJump")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventAllBuffsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventAllBuffs")); }
    BrzCampoPonteiro bPreventAllRiderWeaponsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventAllRiderWeapons")); }
    BrzCampoPonteiro bPreventAnimationUpdateRateOptimizationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventAnimationUpdateRateOptimizations")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventClearShoulderMountOfDiffTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventClearShoulderMountOfDiffTeam")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventCloningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventCloning")); }
    BrzCampoPonteiro bPreventDinoResetAffinityOnUnsleepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventDinoResetAffinityOnUnsleep")); }
    BrzCampoPonteiro bPreventDynamicMusicField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventDynamicMusic")); }
    BrzCampoPonteiro bPreventExportDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventExportDino")); }
    BrzCampoPonteiro bPreventFallingBumpCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventFallingBumpCheck")); }
    BrzCampoPonteiro bPreventFlyerLandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventFlyerLanding")); }
    BrzCampoPonteiro bPreventForceBabyFlyerLandField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventForceBabyFlyerLand")); }
    BrzCampoPonteiro bPreventHUDInitializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventHUDInitialization")); }
    BrzCampoPonteiro bPreventHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventHibernation")); }
    BrzCampoPonteiro bPreventHurtAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventHurtAnim")); }
    BrzCampoPonteiro bPreventIKWhenNotWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventIKWhenNotWalking")); }
    BrzCampoPonteiro bPreventInventoryAccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventInventoryAccess")); }
    BrzCampoPonteiro bPreventJumpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventJump")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLiveBlinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventLiveBlinking")); }
    BrzCampoPonteiro bPreventMatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventMating")); }
    BrzCampoPonteiro bPreventMoveUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventMoveUp")); }
    BrzCampoPonteiro bPreventMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventMovement")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventPassengerFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventPassengerFPV")); }
    BrzCampoPonteiro bPreventPerPixelPaintingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventPerPixelPainting")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventRotationRateModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventRotationRateModifier")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventStasis")); }
    BrzCampoPonteiro bPreventTargetingAndMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventTargetingAndMovement")); }
    BrzCampoPonteiro bPreventUntamedRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventUntamedRun")); }
    BrzCampoPonteiro bPreventUploadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventUploading")); }
    BrzCampoPonteiro bPreventWakingTameFeedingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventWakingTameFeeding")); }
    BrzCampoPonteiro bPreventWanderingUnderWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventWanderingUnderWater")); }
    BrzCampoPonteiro bPreventWaterHopCorrectionVelChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventWaterHopCorrectionVelChange")); }
    BrzCampoPonteiro bPreventWildTrappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventWildTrapping")); }
    BrzCampoPonteiro bPreventsDinosWithStructureSupportingSaddlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bPreventsDinosWithStructureSupportingSaddles")); }
    BrzCampoPonteiro bProxyIsJumpForceAppliedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bProxyIsJumpForceApplied")); }
    BrzCampoPonteiro bRagdollIgnoresPawnCapsulesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRagdollIgnoresPawnCapsules")); }
    BrzCampoPonteiro bReachedMaxStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReachedMaxStructures")); }
    BrzCampoPonteiro bReadyToPoopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReadyToPoop")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRecentlyUpdateIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRecentlyUpdateIk")); }
    BrzCampoPonteiro bRefreshedColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRefreshedColorization")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bRemainLatchedOnClearRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRemainLatchedOnClearRider")); }
    BrzCampoPonteiro bRemoteRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRemoteRunning")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateCurrentSailRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicateCurrentSailRotation")); }
    BrzCampoPonteiro bReplicateDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicateDesiredRotation")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicateMovement")); }
    BrzCampoPonteiro bReplicatePassengerTPVAimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicatePassengerTPVAim")); }
    BrzCampoPonteiro bReplicatePitchWhileSwimmingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicatePitchWhileSwimming")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatedIsSubmergedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicatedIsSubmerged")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bReplicates")); }
    BrzCampoPonteiro bRiderDontRequireSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRiderDontRequireSaddle")); }
    BrzCampoPonteiro bRiderJumpTogglesFlightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRiderJumpTogglesFlight")); }
    BrzCampoPonteiro bRiderMovementLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRiderMovementLocked")); }
    BrzCampoPonteiro bRidingIsSeperateUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRidingIsSeperateUnstasisCaster")); }
    BrzCampoPonteiro bRidingRequiresTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRidingRequiresTamed")); }
    BrzCampoPonteiro bRotateToFaceLatchingObjectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRotateToFaceLatchingObject")); }
    BrzCampoPonteiro bRotatingUpdatesDinoIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bRotatingUpdatesDinoIK")); }
    BrzCampoPonteiro bSailsAffectThrottleLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSailsAffectThrottleLocation")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerForceUpdateDinoGameplayMeshNearPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bServerForceUpdateDinoGameplayMeshNearPlayer")); }
    BrzCampoPonteiro bServerInitializedDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bServerInitializedDino")); }
    BrzCampoPonteiro bServerMoveIgnoreRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bServerMoveIgnoreRootMotion")); }
    BrzCampoPonteiro bShipHasSpecialAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bShipHasSpecialAttack")); }
    BrzCampoPonteiro bShouldBeInGodModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bShouldBeInGodMode")); }
    BrzCampoPonteiro bShouldHaveCargoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bShouldHaveCargo")); }
    BrzCampoPonteiro bSimGravityDisabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSimGravityDisabled")); }
    BrzCampoPonteiro bSimulateRootMotionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSimulateRootMotion")); }
    BrzCampoPonteiro bSingleplayerFreezePhysicsWhenNoTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSingleplayerFreezePhysicsWhenNoTarget")); }
    BrzCampoPonteiro bSkipProcessRootRotAndLocInAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSkipProcessRootRotAndLocInAimOffset")); }
    BrzCampoPonteiro bSkipRamDamageWhenNPCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSkipRamDamageWhenNPC")); }
    BrzCampoPonteiro bSleepedWaterRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSleepedWaterRagdoll")); }
    BrzCampoPonteiro bSleepingDisableRagdollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSleepingDisableRagdoll")); }
    BrzCampoPonteiro bSmallRaftPushAwayPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSmallRaftPushAwayPlayers")); }
    BrzCampoPonteiro bSpankerVisibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSpankerVisible")); }
    BrzCampoPonteiro bSpawnScrapeVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSpawnScrapeVFX")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bStasised")); }
    BrzCampoPonteiro bStepDamageFoliageOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bStepDamageFoliageOnly")); }
    BrzCampoPonteiro bSupportWakingTameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSupportWakingTame")); }
    BrzCampoPonteiro bSupportsPassengerSeatsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSupportsPassengerSeats")); }
    BrzCampoPonteiro bSuppressDeathNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSuppressDeathNotification")); }
    BrzCampoPonteiro bSuppressPlayerKillNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSuppressPlayerKillNotification")); }
    BrzCampoPonteiro bSuppressWakingTameMessageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSuppressWakingTameMessage")); }
    BrzCampoPonteiro bSwimmingWaterDinoMoveLikeFlyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bSwimmingWaterDinoMoveLikeFlying")); }
    BrzCampoPonteiro bTakingOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTakingOff")); }
    BrzCampoPonteiro bTamedAIAllowSpecialAttacksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTamedAIAllowSpecialAttacks")); }
    BrzCampoPonteiro bTamedAlwaysUseTamedUnsleepAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTamedAlwaysUseTamedUnsleepAnim")); }
    BrzCampoPonteiro bTamingHasFoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTamingHasFood")); }
    BrzCampoPonteiro bTargetEverythingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTargetEverything")); }
    BrzCampoPonteiro bTargetingIgnoreWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTargetingIgnoreWildDinos")); }
    BrzCampoPonteiro bTargetingIgnoredByWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTargetingIgnoredByWildDinos")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTearOff")); }
    BrzCampoPonteiro bTickRowingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTickRowing")); }
    BrzCampoPonteiro bTriggerBPStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bTriggerBPStasis")); }
    BrzCampoPonteiro bUniqueDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUniqueDino")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUpdateDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUpdateDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAdvancedAnimLerpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseAdvancedAnimLerp")); }
    BrzCampoPonteiro bUseAmphibiousTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseAmphibiousTargeting")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAdjustAttackIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAdjustAttackIndex")); }
    BrzCampoPonteiro bUseBPAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAdjustDamage")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPAllowPlayMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAllowPlayMontage")); }
    BrzCampoPonteiro bUseBPAllowRunningWhileFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAllowRunningWhileFalling")); }
    BrzCampoPonteiro bUseBPAllowTeamToTrackTamingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPAllowTeamToTrackTamingDino")); }
    BrzCampoPonteiro bUseBPCanAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCanAnchor")); }
    BrzCampoPonteiro bUseBPCanCombineMovesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCanCombineMoves")); }
    BrzCampoPonteiro bUseBPCanTargetCorpseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCanTargetCorpse")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckCanSpawnFromLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCheckCanSpawnFromLocation")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDinoFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPDinoFaceRotation")); }
    BrzCampoPonteiro bUseBPDinoTooltipCustomProgressBarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPDinoTooltipCustomProgressBar")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFaceRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPFaceRotation")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceCameraStyleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPForceCameraStyle")); }
    BrzCampoPonteiro bUseBPForceKeepBasedOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPForceKeepBasedOnDino")); }
    BrzCampoPonteiro bUseBPGetArmorDurabilityDecreaseMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetArmorDurabilityDecreaseMultiplier")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFinalMaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetFinalMaxSpeed")); }
    BrzCampoPonteiro bUseBPGetGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetGravity")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetOtherActorToIgnoreField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetOtherActorToIgnore")); }
    BrzCampoPonteiro bUseBPGetOverrideCameraInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetOverrideCameraInterpSpeed")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPGetTamedFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetTamedFollowTarget")); }
    BrzCampoPonteiro bUseBPGetTargetingDesirabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetTargetingDesirability")); }
    BrzCampoPonteiro bUseBPGetTargetingDesirabilityForTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPGetTargetingDesirabilityForTurrets")); }
    BrzCampoPonteiro bUseBPInterceptMoveInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPInterceptMoveInputEvents")); }
    BrzCampoPonteiro bUseBPInterceptMoveInputEventsEvenIfZeroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPInterceptMoveInputEventsEvenIfZero")); }
    BrzCampoPonteiro bUseBPInterceptTurnInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPInterceptTurnInputEvents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPItemSlotOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPItemSlotOverrides")); }
    BrzCampoPonteiro bUseBPModifyDesiredRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPModifyDesiredRotation")); }
    BrzCampoPonteiro bUseBPModifyWanderAroundActorLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPModifyWanderAroundActorLocation")); }
    BrzCampoPonteiro bUseBPModifyXPMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPModifyXPMultiplier")); }
    BrzCampoPonteiro bUseBPNotifyOnBuffAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPNotifyOnBuffAdded")); }
    BrzCampoPonteiro bUseBPNotifyOnBuffAddedToMountCharField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPNotifyOnBuffAddedToMountChar")); }
    BrzCampoPonteiro bUseBPOnCarryCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOnCarryCharacter")); }
    BrzCampoPonteiro bUseBPOnEndChargingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOnEndCharging")); }
    BrzCampoPonteiro bUseBPOnImmobilizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOnImmobilize")); }
    BrzCampoPonteiro bUseBPOnLethalDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOnLethalDamage")); }
    BrzCampoPonteiro bUseBPOnSimulatedTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOnSimulatedTick")); }
    BrzCampoPonteiro bUseBPOverrideAccessInventoryInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideAccessInventoryInput")); }
    BrzCampoPonteiro bUseBPOverrideBasedPlayerAimOffsetYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideBasedPlayerAimOffsetYaw")); }
    BrzCampoPonteiro bUseBPOverrideCameraViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideCameraViewTarget")); }
    BrzCampoPonteiro bUseBPOverrideCharacterNewFallVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideCharacterNewFallVelocity")); }
    BrzCampoPonteiro bUseBPOverrideCharacterNewSwimVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideCharacterNewSwimVelocity")); }
    BrzCampoPonteiro bUseBPOverrideCharacterParticleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideCharacterParticle")); }
    BrzCampoPonteiro bUseBPOverrideCharacterSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideCharacterSound")); }
    BrzCampoPonteiro bUseBPOverrideDamageCauserHitMarkerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideDamageCauserHitMarker")); }
    BrzCampoPonteiro bUseBPOverrideFloatingHUDLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideFloatingHUDLocation")); }
    BrzCampoPonteiro bUseBPOverrideIsSubmergedForWaterTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideIsSubmergedForWaterTargeting")); }
    BrzCampoPonteiro bUseBPOverrideJumpZModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideJumpZModifier")); }
    BrzCampoPonteiro bUseBPOverridePassengerAdditiveAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverridePassengerAdditiveAnim")); }
    BrzCampoPonteiro bUseBPOverridePhysicsImpulsesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverridePhysicsImpulses")); }
    BrzCampoPonteiro bUseBPOverridePlayAnimExMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverridePlayAnimExMontage")); }
    BrzCampoPonteiro bUseBPOverrideRiderAccessInventoryInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideRiderAccessInventoryInput")); }
    BrzCampoPonteiro bUseBPOverrideRiderIndoorsCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideRiderIndoorsCheckLocation")); }
    BrzCampoPonteiro bUseBPOverrideStencilAllianceForTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideStencilAllianceForTarget")); }
    BrzCampoPonteiro bUseBPOverrideTamingDescriptionLabelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideTamingDescriptionLabel")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPlayHitEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPPlayHitEffect")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventMovementModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPPreventMovementMode")); }
    BrzCampoPonteiro bUseBPSetCharacterMeshseMaterialScalarParamValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPSetCharacterMeshseMaterialScalarParamValue")); }
    BrzCampoPonteiro bUseBPSetTamedFollowTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPSetTamedFollowTarget")); }
    BrzCampoPonteiro bUseBPSetThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPSetThrottle")); }
    BrzCampoPonteiro bUseBPShieldBlockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPShieldBlock")); }
    BrzCampoPonteiro bUseBPShouldUseLongFallCameraPivotZValuesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPShouldUseLongFallCameraPivotZValues")); }
    BrzCampoPonteiro bUseBPSimulatePhysicsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPSimulatePhysics")); }
    BrzCampoPonteiro bUseBPSkipTerrainTraceForCarriedCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPSkipTerrainTraceForCarriedCharacter")); }
    BrzCampoPonteiro bUseBPTimerNonDedicatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPTimerNonDedicated")); }
    BrzCampoPonteiro bUseBPTimerServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBPTimerServer")); }
    BrzCampoPonteiro bUseBP_AdjustRowingImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_AdjustRowingImpulse")); }
    BrzCampoPonteiro bUseBP_CanFlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_CanFly")); }
    BrzCampoPonteiro bUseBP_CustomModifier_MaxSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_CustomModifier_MaxSpeed")); }
    BrzCampoPonteiro bUseBP_ForceAllowBuffClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_ForceAllowBuffClasses")); }
    BrzCampoPonteiro bUseBP_ModifyInputAccelerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_ModifyInputAcceleration")); }
    BrzCampoPonteiro bUseBP_OnBasedPawnNotifiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OnBasedPawnNotifies")); }
    BrzCampoPonteiro bUseBP_OnBasedPawnSetNotifiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OnBasedPawnSetNotifies")); }
    BrzCampoPonteiro bUseBP_OnPostNetReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OnPostNetReplication")); }
    BrzCampoPonteiro bUseBP_OverrideBasedCharactersCameraInterpSpeedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OverrideBasedCharactersCameraInterpSpeed")); }
    BrzCampoPonteiro bUseBP_OverrideCarriedCharacterTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OverrideCarriedCharacterTransform")); }
    BrzCampoPonteiro bUseBP_OverrideDinoNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OverrideDinoName")); }
    BrzCampoPonteiro bUseBP_OverrideRiderCameraCollisionSweepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OverrideRiderCameraCollisionSweep")); }
    BrzCampoPonteiro bUseBP_OverrideTerminalVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_OverrideTerminalVelocity")); }
    BrzCampoPonteiro bUseBP_ShouldPreventBasedCharactersCameraInterpolationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBP_ShouldPreventBasedCharactersCameraInterpolation")); }
    BrzCampoPonteiro bUseBlueprintExtraBabyScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBlueprintExtraBabyScale")); }
    BrzCampoPonteiro bUseBlueprintJumpInputEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseBlueprintJumpInputEvents")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseColorizationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseColorization")); }
    BrzCampoPonteiro bUseControllerRotationPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseControllerRotationPitch")); }
    BrzCampoPonteiro bUseControllerRotationRollField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseControllerRotationRoll")); }
    BrzCampoPonteiro bUseControllerRotationYawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseControllerRotationYaw")); }
    BrzCampoPonteiro bUseDeferredMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseDeferredMovement")); }
    BrzCampoPonteiro bUseDescriptiveNameGenderOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseDescriptiveNameGenderOverrides")); }
    BrzCampoPonteiro bUseDinoLimbWallAvoidanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseDinoLimbWallAvoidance")); }
    BrzCampoPonteiro bUseFixedSpawnLevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseFixedSpawnLevel")); }
    BrzCampoPonteiro bUseForcestoApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseForcestoApply")); }
    BrzCampoPonteiro bUseGangField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseGang")); }
    BrzCampoPonteiro bUseGetOverrideSocketField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseGetOverrideSocket")); }
    BrzCampoPonteiro bUseLevelColorBandsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseLevelColorBands")); }
    BrzCampoPonteiro bUseMountCharacterProneOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseMountCharacterProneOffset")); }
    BrzCampoPonteiro bUseMyBabyCuddleFoodTypesAsAdditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseMyBabyCuddleFoodTypesAsAdditional")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnCharacterSteppedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseOnCharacterSteppedNotify")); }
    BrzCampoPonteiro bUseOnStartedAllyTargetLookingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseOnStartedAllyTargetLooking")); }
    BrzCampoPonteiro bUseOnUpdateMountedDinoMeshHidingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseOnUpdateMountedDinoMeshHiding")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUsePlayerMountedCarryingDinoAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsePlayerMountedCarryingDinoAnimation")); }
    BrzCampoPonteiro bUsePoopAnimationNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsePoopAnimationNotify")); }
    BrzCampoPonteiro bUsePreciseLaunchingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsePreciseLaunching")); }
    BrzCampoPonteiro bUseRaftBPTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseRaftBPTick")); }
    BrzCampoPonteiro bUseRandomLookAtTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseRandomLookAtTarget")); }
    BrzCampoPonteiro bUseRootLocSwimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseRootLocSwimOffset")); }
    BrzCampoPonteiro bUseShoulderMountedLaunchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseShoulderMountedLaunch")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseStasisGrid")); }
    BrzCampoPonteiro bUseWildRandomScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseWildRandomScale")); }
    BrzCampoPonteiro bUseZeroGravityWanderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUseZeroGravityWander")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PostRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUse_ModifySavedMoveAcceleration_PostRep")); }
    BrzCampoPonteiro bUse_ModifySavedMoveAcceleration_PreRepField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUse_ModifySavedMoveAcceleration_PreRep")); }
    BrzCampoPonteiro bUsesGenderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsesGender")); }
    BrzCampoPonteiro bUsesRunningAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsesRunningAnimation")); }
    BrzCampoPonteiro bUsesWaterWalkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bUsesWaterWalking")); }
    BrzCampoPonteiro bVehicleAlwaysAllowTargetingByWildDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bVehicleAlwaysAllowTargetingByWildDinos")); }
    BrzCampoPonteiro bVehicleUpdatePPBlendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bVehicleUpdatePPBlends")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWantsToRunField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWantsToRun")); }
    BrzCampoPonteiro bWasBeingDraggedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWasBeingDragged")); }
    BrzCampoPonteiro bWasInCombatLastTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWasInCombatLastTick")); }
    BrzCampoPonteiro bWasJumpingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWasJumping")); }
    BrzCampoPonteiro bWildAllowFollowTamedTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWildAllowFollowTamedTarget")); }
    BrzCampoPonteiro bWildAllowTargetingNeutralStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWildAllowTargetingNeutralStructures")); }
    BrzCampoPonteiro bWildIgnoredByAutoTurretsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.bWildIgnoredByAutoTurrets")); }
    float& chargingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.chargingRotationRateModifier"); }
    int& customBitFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.customBitFlags"); }
    BrzCampoPonteiro hasAlreadySetGenderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.hasAlreadySetGender")); }
    float& maxRangeForWeaponTriggeredTooltipField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.maxRangeForWeaponTriggeredTooltip"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPLAYERFOLLOWINGSHIP_H
