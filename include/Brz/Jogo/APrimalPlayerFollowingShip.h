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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetThrottleForceMultiplier() const
    {
        return NativeCall<void*>(this, "APrimalPlayerFollowingShip.GetThrottleForceMultiplier()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalPlayerFollowingShip.Tick(float)
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> AllowWildBabyTaming()
    { return { (void*)this, "AllowWildBabyTaming" }; }
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
    BitFieldValue<bool, unsigned __int32> AreTorchesLit()
    { return { (void*)this, "AreTorchesLit" }; }
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
    BitFieldValue<bool, unsigned __int32> AutoStopReplicationWhenSleeping()
    { return { (void*)this, "AutoStopReplicationWhenSleeping" }; }
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
    BitFieldValue<bool, unsigned __int32> CanAnchor()
    { return { (void*)this, "CanAnchor" }; }
    BitFieldValue<bool, unsigned __int32> CanElevate()
    { return { (void*)this, "CanElevate" }; }
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
    BitFieldValue<bool, unsigned __int32> DisableCameraShakes()
    { return { (void*)this, "DisableCameraShakes" }; }
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
    BitFieldValue<bool, unsigned __int32> FlyingMovementModeUseFlyingRunSpeedModifier()
    { return { (void*)this, "FlyingMovementModeUseFlyingRunSpeedModifier" }; }
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
    BitFieldValue<bool, unsigned __int32> Hotfix_AreGeneTraitsEnabled()
    { return { (void*)this, "Hotfix_AreGeneTraitsEnabled" }; }
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
    BitFieldValue<bool, unsigned __int32> IsAnchored()
    { return { (void*)this, "IsAnchored" }; }
    BitFieldValue<bool, unsigned __int32> IsAnchoring()
    { return { (void*)this, "IsAnchoring" }; }
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
    float& LastIncomingDamagePreArmorField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.LastIncomingDamagePreArmor"); }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideInActiveReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideInActiveReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCube()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideReverseVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideReverseVaccumSealedCubeOnDino" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCube()
    { return { (void*)this, "LastIsInsideVaccumSealedCube" }; }
    BitFieldValue<bool, unsigned __int32> LastIsInsideVaccumSealedCubeOnDino()
    { return { (void*)this, "LastIsInsideVaccumSealedCubeOnDino" }; }
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
    BitFieldValue<bool, unsigned __int32> MutagenApplied()
    { return { (void*)this, "MutagenApplied" }; }
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
    BitFieldValue<bool, unsigned __int32> ReplicateAllBones()
    { return { (void*)this, "ReplicateAllBones" }; }
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
    BrzCampoPonteiro ShipRammingNSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipRammingNS")); }
    BrzCampoPonteiro ShipRammingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalPlayerFollowingShip.ShipRammingSound")); }
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
    BitFieldValue<bool, unsigned __int32> UseBPGetWiegthedAttackOverride()
    { return { (void*)this, "UseBPGetWiegthedAttackOverride" }; }
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
    BitFieldValue<bool, unsigned __int32> bAccurateOceanVolumeOverlaps()
    { return { (void*)this, "bAccurateOceanVolumeOverlaps" }; }
    BitFieldValue<bool, unsigned __int32> bActiveRunToggle()
    { return { (void*)this, "bActiveRunToggle" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowASACamera()
    { return { (void*)this, "bAllowASACamera" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoPilot()
    { return { (void*)this, "bAllowAutoPilot" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBPNewDoorInteractionDrawHUD()
    { return { (void*)this, "bAllowBPNewDoorInteractionDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bAllowBasedCharactersAttacks()
    { return { (void*)this, "bAllowBasedCharactersAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryCharacterWithoutRider()
    { return { (void*)this, "bAllowCarryCharacterWithoutRider" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCarryFlyerDinos()
    { return { (void*)this, "bAllowCarryFlyerDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCorpseDestructionWithPreventSaving()
    { return { (void*)this, "bAllowCorpseDestructionWithPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDamageSameTeamAndClass()
    { return { (void*)this, "bAllowDamageSameTeamAndClass" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoAutoConsumeInventoryFood()
    { return { (void*)this, "bAllowDinoAutoConsumeInventoryFood" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDriverSeats()
    { return { (void*)this, "bAllowDriverSeats" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponry()
    { return { (void*)this, "bAllowMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMountedWeaponryPVE()
    { return { (void*)this, "bAllowMountedWeaponryPVE" }; }
    BitFieldValue<bool, unsigned __int32> bAllowMultiUseByRemoteDino()
    { return { (void*)this, "bAllowMultiUseByRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicSeating()
    { return { (void*)this, "bAllowPublicSeating" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRaftAttacks()
    { return { (void*)this, "bAllowRaftAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRiding()
    { return { (void*)this, "bAllowRiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInTurretMode()
    { return { (void*)this, "bAllowRidingInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRidingInWater()
    { return { (void*)this, "bAllowRidingInWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRowingSeats()
    { return { (void*)this, "bAllowRowingSeats" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRudderAngleSpeedModification()
    { return { (void*)this, "bAllowRudderAngleSpeedModification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileSwimming()
    { return { (void*)this, "bAllowRunningWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSails()
    { return { (void*)this, "bAllowSails" }; }
    BitFieldValue<bool, unsigned __int32> bAllowShipForcedMovement()
    { return { (void*)this, "bAllowShipForcedMovement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSteeringForceModification()
    { return { (void*)this, "bAllowSteeringForceModification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingCorpses()
    { return { (void*)this, "bAllowTargetingCorpses" }; }
    BitFieldValue<bool, unsigned __int32> bAllowThrottleRatioInterpSpeedModification()
    { return { (void*)this, "bAllowThrottleRatioInterpSpeedModification" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTrapping()
    { return { (void*)this, "bAllowTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTreadWater()
    { return { (void*)this, "bAllowTreadWater" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTurretTargetOverrideLocations()
    { return { (void*)this, "bAllowTurretTargetOverrideLocations" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWanderAroundActorWildTameMix()
    { return { (void*)this, "bAllowWanderAroundActorWildTameMix" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhistleThroughRemoteDino()
    { return { (void*)this, "bAllowWhistleThroughRemoteDino" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildDinoEquipment()
    { return { (void*)this, "bAllowWildDinoEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWildRunningWithoutTarget()
    { return { (void*)this, "bAllowWildRunningWithoutTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAllowsTurretMode()
    { return { (void*)this, "bAllowsTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysAllowStrafing()
    { return { (void*)this, "bAlwaysAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bAlwaysUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bAnchoredSetToOceanHeight()
    { return { (void*)this, "bAnchoredSetToOceanHeight" }; }
    BitFieldValue<bool, unsigned __int32> bAnimIsMoving()
    { return { (void*)this, "bAnimIsMoving" }; }
    BitFieldValue<bool, unsigned __int32> bApplyDamageEffectToChildComponents()
    { return { (void*)this, "bApplyDamageEffectToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAttemptAnchoringNextFrame()
    { return { (void*)this, "bAttemptAnchoringNextFrame" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bAutoThrottleActive()
    { return { (void*)this, "bAutoThrottleActive" }; }
    BitFieldValue<bool, unsigned __int32> bBPCameraRotationFinal()
    { return { (void*)this, "bBPCameraRotationFinal" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPLimitPlayerRotation()
    { return { (void*)this, "bBPLimitPlayerRotation" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocation()
    { return { (void*)this, "bBPManagedFPVViewLocation" }; }
    BitFieldValue<bool, unsigned __int32> bBPManagedFPVViewLocationNoRider()
    { return { (void*)this, "bBPManagedFPVViewLocationNoRider" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAimOffsetNoTarget()
    { return { (void*)this, "bBPModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bBPModifyAllowedViewHitDir()
    { return { (void*)this, "bBPModifyAllowedViewHitDir" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBabyInitiallyUnclaimed()
    { return { (void*)this, "bBabyInitiallyUnclaimed" }; }
    BitFieldValue<bool, unsigned __int32> bBabyPreventExitingWater()
    { return { (void*)this, "bBabyPreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bBasedCharactersForceDisableCollisionCheck()
    { return { (void*)this, "bBasedCharactersForceDisableCollisionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bBasingRequiresInteriorPosition()
    { return { (void*)this, "bBasingRequiresInteriorPosition" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bBonesHidden()
    { return { (void*)this, "bBonesHidden" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCallRiderChangeWeaponsOnClient()
    { return { (void*)this, "bCallRiderChangeWeaponsOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bCanAffectNavigationGeneration()
    { return { (void*)this, "bCanAffectNavigationGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeCarried()
    { return { (void*)this, "bCanBeCarried" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDragged()
    { return { (void*)this, "bCanBeDragged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeOrdered()
    { return { (void*)this, "bCanBeOrdered" }; }
    BitFieldValue<bool, unsigned __int32> bCanBePushed()
    { return { (void*)this, "bCanBePushed" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTamed()
    { return { (void*)this, "bCanBeTamed" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeTorpid()
    { return { (void*)this, "bCanBeTorpid" }; }
    BitFieldValue<bool, unsigned __int32> bCanDrag()
    { return { (void*)this, "bCanDrag" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverCrouch()
    { return { (void*)this, "bCanEverCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bCanEverProne()
    { return { (void*)this, "bCanEverProne" }; }
    BitFieldValue<bool, unsigned __int32> bCanHaveBaby()
    { return { (void*)this, "bCanHaveBaby" }; }
    BitFieldValue<bool, unsigned __int32> bCanHideSpanker()
    { return { (void*)this, "bCanHideSpanker" }; }
    BitFieldValue<bool, unsigned __int32> bCanIgnoreWater()
    { return { (void*)this, "bCanIgnoreWater" }; }
    BitFieldValue<bool, unsigned __int32> bCanMountOnHumans()
    { return { (void*)this, "bCanMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bCanMoveWithoutRider()
    { return { (void*)this, "bCanMoveWithoutRider" }; }
    BitFieldValue<bool, unsigned __int32> bCanPlayLandingAnim()
    { return { (void*)this, "bCanPlayLandingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bCanPushOthers()
    { return { (void*)this, "bCanPushOthers" }; }
    BitFieldValue<bool, unsigned __int32> bCanRun()
    { return { (void*)this, "bCanRun" }; }
    BitFieldValue<bool, unsigned __int32> bCanSecondaryMountOnHumans()
    { return { (void*)this, "bCanSecondaryMountOnHumans" }; }
    BitFieldValue<bool, unsigned __int32> bCanTargetVehicles()
    { return { (void*)this, "bCanTargetVehicles" }; }
    BitFieldValue<bool, unsigned __int32> bCanUnclaimTame()
    { return { (void*)this, "bCanUnclaimTame" }; }
    BitFieldValue<bool, unsigned __int32> bCancelInterpolation()
    { return { (void*)this, "bCancelInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bCheatForceTameRide()
    { return { (void*)this, "bCheatForceTameRide" }; }
    BitFieldValue<bool, unsigned __int32> bCheatPossessed()
    { return { (void*)this, "bCheatPossessed" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffModifyAimOffsetNoTarget()
    { return { (void*)this, "bCheckBuffModifyAimOffsetNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bClampOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bClampOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bClearOnConsume()
    { return { (void*)this, "bClearOnConsume" }; }
    BitFieldValue<bool, unsigned __int32> bClearRiderOnDinoImmobilized()
    { return { (void*)this, "bClearRiderOnDinoImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bClientCheckEncroachmentOnNetUpdate()
    { return { (void*)this, "bClientCheckEncroachmentOnNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bClientInterpLocationInCustomMovemode()
    { return { (void*)this, "bClientInterpLocationInCustomMovemode" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotion()
    { return { (void*)this, "bClientResimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bClientResimulateRootMotionSources()
    { return { (void*)this, "bClientResimulateRootMotionSources" }; }
    BitFieldValue<bool, unsigned __int32> bClientSideSailingForces()
    { return { (void*)this, "bClientSideSailingForces" }; }
    BitFieldValue<bool, unsigned __int32> bClientUpdating()
    { return { (void*)this, "bClientUpdating" }; }
    BitFieldValue<bool, unsigned __int32> bClientWasFalling()
    { return { (void*)this, "bClientWasFalling" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollectVictimItems()
    { return { (void*)this, "bCollectVictimItems" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeZoomInput()
    { return { (void*)this, "bConsumeZoomInput" }; }
    BitFieldValue<bool, unsigned __int32> bControlledDinoPreventsPlayerInventory()
    { return { (void*)this, "bControlledDinoPreventsPlayerInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCreatureIsImmuneToServerSoftTameLimitDestruction()
    { return { (void*)this, "bCreatureIsImmuneToServerSoftTameLimitDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bCuddleRequestRefreshed()
    { return { (void*)this, "bCuddleRequestRefreshed" }; }
    BitFieldValue<bool, unsigned __int32> bDamageNotifyTeamAggroAI()
    { return { (void*)this, "bDamageNotifyTeamAggroAI" }; }
    BitFieldValue<bool, unsigned __int32> bDeathUseRagdoll()
    { return { (void*)this, "bDeathUseRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bDebugBaby()
    { return { (void*)this, "bDebugBaby" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK()
    { return { (void*)this, "bDebugIK" }; }
    BitFieldValue<bool, unsigned __int32> bDebugIK_ShowTraceNames()
    { return { (void*)this, "bDebugIK_ShowTraceNames" }; }
    BitFieldValue<bool, unsigned __int32> bDebugMeleeAttacks()
    { return { (void*)this, "bDebugMeleeAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRowing()
    { return { (void*)this, "bDebugRowing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRowing_ForceAllSeatsRowSync()
    { return { (void*)this, "bDebugRowing_ForceAllSeatsRowSync" }; }
    BitFieldValue<bool, unsigned __int32> bDebugSailing()
    { return { (void*)this, "bDebugSailing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugSteering()
    { return { (void*)this, "bDebugSteering" }; }
    BitFieldValue<bool, unsigned __int32> bDebugStructures()
    { return { (void*)this, "bDebugStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant()
    { return { (void*)this, "bDediServerAutoUnregisterSkeletalMeshWhenNotRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnStasis()
    { return { (void*)this, "bDestroyOnStasis" }; }
    BitFieldValue<bool, unsigned __int32> bDieIfLeftWater()
    { return { (void*)this, "bDieIfLeftWater" }; }
    BitFieldValue<bool, unsigned __int32> bDinoHasBonded()
    { return { (void*)this, "bDinoHasBonded" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAutoMatingWhileTamedWandering()
    { return { (void*)this, "bDisableAutoMatingWhileTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bDisableCameraShakeOnNotifyHit()
    { return { (void*)this, "bDisableCameraShakeOnNotifyHit" }; }
    BitFieldValue<bool, unsigned __int32> bDisableControllerDesiredRotation()
    { return { (void*)this, "bDisableControllerDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableDefaultDinoTaming()
    { return { (void*)this, "bDisableDefaultDinoTaming" }; }
    BitFieldValue<bool, unsigned __int32> bDisableFPV()
    { return { (void*)this, "bDisableFPV" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvestHealthGain()
    { return { (void*)this, "bDisableHarvestHealthGain" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHarvesting()
    { return { (void*)this, "bDisableHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePathfinding()
    { return { (void*)this, "bDisablePathfinding" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableShipHUD()
    { return { (void*)this, "bDisableShipHUD" }; }
    BitFieldValue<bool, unsigned __int32> bDisableSpawnDefaultController()
    { return { (void*)this, "bDisableSpawnDefaultController" }; }
    BitFieldValue<bool, unsigned __int32> bDisabledFromAscension()
    { return { (void*)this, "bDisabledFromAscension" }; }
    BitFieldValue<bool, unsigned __int32> bDisallowPostNetReplication()
    { return { (void*)this, "bDisallowPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bDoStepDamage()
    { return { (void*)this, "bDoStepDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyEmitPoop()
    { return { (void*)this, "bDontActuallyEmitPoop" }; }
    BitFieldValue<bool, unsigned __int32> bDontForceUpdateRateOptimizations()
    { return { (void*)this, "bDontForceUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bDontOverrideToNavMeshStepHeight()
    { return { (void*)this, "bDontOverrideToNavMeshStepHeight" }; }
    BitFieldValue<bool, unsigned __int32> bDontWander()
    { return { (void*)this, "bDontWander" }; }
    BitFieldValue<bool, unsigned __int32> bDraggedFromExtremitiesOnly()
    { return { (void*)this, "bDraggedFromExtremitiesOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDrawHealthBar()
    { return { (void*)this, "bDrawHealthBar" }; }
    BitFieldValue<bool, unsigned __int32> bDropWildEggsWithoutMateBoost()
    { return { (void*)this, "bDropWildEggsWithoutMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEggBoosted()
    { return { (void*)this, "bEggBoosted" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAnimationGroundConforming()
    { return { (void*)this, "bEnableAnimationGroundConforming" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableIK()
    { return { (void*)this, "bEnableIK" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMouthFlapAnimations()
    { return { (void*)this, "bEnableMouthFlapAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedMating()
    { return { (void*)this, "bEnableTamedMating" }; }
    BitFieldValue<bool, unsigned __int32> bEnableTamedWandering()
    { return { (void*)this, "bEnableTamedWandering" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowBackwardsFlight()
    { return { (void*)this, "bFlyerDinoAllowBackwardsFlight" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDinoAllowStrafing()
    { return { (void*)this, "bFlyerDinoAllowStrafing" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerDontGainImpulseOnSubmerged()
    { return { (void*)this, "bFlyerDontGainImpulseOnSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceLimitPitch()
    { return { (void*)this, "bFlyerForceLimitPitch" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerForceNoPitch()
    { return { (void*)this, "bFlyerForceNoPitch" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerPrioritizeAllyMountToCarry()
    { return { (void*)this, "bFlyerPrioritizeAllyMountToCarry" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowBackwardsMovement()
    { return { (void*)this, "bForceAllowBackwardsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowDediServerGroundConformInterpolate()
    { return { (void*)this, "bForceAllowDediServerGroundConformInterpolate" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowMountedAimOffset()
    { return { (void*)this, "bForceAllowMountedAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowSalvaging()
    { return { (void*)this, "bForceAllowSalvaging" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowTamedTickEggLay()
    { return { (void*)this, "bForceAllowTamedTickEggLay" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysAllowBasing()
    { return { (void*)this, "bForceAlwaysAllowBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysUpdateMesh()
    { return { (void*)this, "bForceAlwaysUpdateMesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceAutoTame()
    { return { (void*)this, "bForceAutoTame" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisableClientGravitySim()
    { return { (void*)this, "bForceDisableClientGravitySim" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisablingTaming()
    { return { (void*)this, "bForceDisablingTaming" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUD()
    { return { (void*)this, "bForceDrawHUD" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawHUDWithoutRecentlyRendered()
    { return { (void*)this, "bForceDrawHUDWithoutRecentlyRendered" }; }
    BitFieldValue<bool, unsigned __int32> bForceFirstPerson()
    { return { (void*)this, "bForceFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHideSaddle()
    { return { (void*)this, "bForceHideSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceIKOnDedicatedServer()
    { return { (void*)this, "bForceIKOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoCharacterStatusComponentTick()
    { return { (void*)this, "bForceNoCharacterStatusComponentTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePerFrameTicking()
    { return { (void*)this, "bForcePerFrameTicking" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAllInput()
    { return { (void*)this, "bForcePreventAllInput" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventExitingWater()
    { return { (void*)this, "bForcePreventExitingWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventInventoryAccess()
    { return { (void*)this, "bForcePreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForcePvEAllowNonAlignedShipBasing()
    { return { (void*)this, "bForcePvEAllowNonAlignedShipBasing" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceRiderDrawCrosshair()
    { return { (void*)this, "bForceRiderDrawCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bForceSimpleTeleportFade()
    { return { (void*)this, "bForceSimpleTeleportFade" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickingBehaviorTreeEveryFrame()
    { return { (void*)this, "bForceTickingBehaviorTreeEveryFrame" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseAltAimSocketsForTurrets()
    { return { (void*)this, "bForceUseAltAimSocketsForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseCustomCameraComponent()
    { return { (void*)this, "bForceUseCustomCameraComponent" }; }
    BitFieldValue<bool, unsigned __int32> bForceValidUnstasisCaster()
    { return { (void*)this, "bForceValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildEncumberBasedOnTamedDino()
    { return { (void*)this, "bForceWildEncumberBasedOnTamedDino" }; }
    BitFieldValue<bool, unsigned __int32> bForceWildMeleeSwingTraceAll()
    { return { (void*)this, "bForceWildMeleeSwingTraceAll" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenFalling()
    { return { (void*)this, "bGlideWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bGlideWhenMounted()
    { return { (void*)this, "bGlideWhenMounted" }; }
    BitFieldValue<bool, unsigned __int32> bHackForcesToApplyCheckForInvalidPhysx()
    { return { (void*)this, "bHackForcesToApplyCheckForInvalidPhysx" }; }
    BitFieldValue<bool, unsigned __int32> bHadLinkedSupplyCrate()
    { return { (void*)this, "bHadLinkedSupplyCrate" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticBase()
    { return { (void*)this, "bHadStaticBase" }; }
    BitFieldValue<bool, unsigned __int32> bHadStaticMapActorBase()
    { return { (void*)this, "bHadStaticMapActorBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasBotRider()
    { return { (void*)this, "bHasBotRider" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreSerializeForInstigator()
    { return { (void*)this, "bHasBuffPreSerializeForInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bHasBuffPreventingUploading()
    { return { (void*)this, "bHasBuffPreventingUploading" }; }
    BitFieldValue<bool, unsigned __int32> bHasDynamicBase()
    { return { (void*)this, "bHasDynamicBase" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasMateBoost()
    { return { (void*)this, "bHasMateBoost" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayerController()
    { return { (void*)this, "bHasPlayerController" }; }
    BitFieldValue<bool, unsigned __int32> bHasRider()
    { return { (void*)this, "bHasRider" }; }
    BitFieldValue<bool, unsigned __int32> bHealthPercentageUseHullHealth()
    { return { (void*)this, "bHealthPercentageUseHullHealth" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHiddenForLocalPassenger()
    { return { (void*)this, "bHiddenForLocalPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingHUD()
    { return { (void*)this, "bHideFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingName()
    { return { (void*)this, "bHideFloatingName" }; }
    BitFieldValue<bool, unsigned __int32> bHideFromScans()
    { return { (void*)this, "bHideFromScans" }; }
    BitFieldValue<bool, unsigned __int32> bIKEnabled()
    { return { (void*)this, "bIKEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bIfAmphibiousCountAsLandDinoForNPCVolumes()
    { return { (void*)this, "bIfAmphibiousCountAsLandDinoForNPCVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllImmobilizationTraps()
    { return { (void*)this, "bIgnoreAllImmobilizationTraps" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllWhistles()
    { return { (void*)this, "bIgnoreAllWhistles" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreAllyLook()
    { return { (void*)this, "bIgnoreAllyLook" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreCorpseDecompositionMultipliers()
    { return { (void*)this, "bIgnoreCorpseDecompositionMultipliers" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestroyOnRapidDeath()
    { return { (void*)this, "bIgnoreDestroyOnRapidDeath" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreFlierRidingRestrictions()
    { return { (void*)this, "bIgnoreFlierRidingRestrictions" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreLowGravityDisorientation()
    { return { (void*)this, "bIgnoreLowGravityDisorientation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNPCCountVolumes()
    { return { (void*)this, "bIgnoreNPCCountVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOnDeathNotifyNearbyCharacters()
    { return { (void*)this, "bIgnoreOnDeathNotifyNearbyCharacters" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWeightWhenUsingExtraMaxSpeedModifier()
    { return { (void*)this, "bIgnoreWeightWhenUsingExtraMaxSpeedModifier" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWindEffectiveness()
    { return { (void*)this, "bIgnoreWindEffectiveness" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    bool& bInBaseReplicationField() const
    { return *GetNativePointerField<bool*>(this, "APrimalPlayerFollowingShip.bInBaseReplication"); }
    BitFieldValue<bool, unsigned __int32> bInRagdoll()
    { return { (void*)this, "bInRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bIncludePreventManualInPassengerCount()
    { return { (void*)this, "bIncludePreventManualInPassengerCount" }; }
    BitFieldValue<bool, unsigned __int32> bIncrementedZoneManagerDirectLink()
    { return { (void*)this, "bIncrementedZoneManagerDirectLink" }; }
    BitFieldValue<bool, unsigned __int32> bInterceptPlayerEmotes()
    { return { (void*)this, "bInterceptPlayerEmotes" }; }
    BitFieldValue<bool, unsigned __int32> bInterpHealthDamageMaterialOverlayAlpha()
    { return { (void*)this, "bInterpHealthDamageMaterialOverlayAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bIsAWildFollowerKnownServerside()
    { return { (void*)this, "bIsAWildFollowerKnownServerside" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmphibious()
    { return { (void*)this, "bIsAmphibious" }; }
    BitFieldValue<bool, unsigned __int32> bIsAnimSharing()
    { return { (void*)this, "bIsAnimSharing" }; }
    BitFieldValue<bool, unsigned __int32> bIsAtMaxInventoryItems()
    { return { (void*)this, "bIsAtMaxInventoryItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsAttachedOtherCharacter()
    { return { (void*)this, "bIsAttachedOtherCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsBaby()
    { return { (void*)this, "bIsBaby" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsBeingDragged()
    { return { (void*)this, "bIsBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bIsBlinking()
    { return { (void*)this, "bIsBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bIsBossDino()
    { return { (void*)this, "bIsBossDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsBuffed()
    { return { (void*)this, "bIsBuffed" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarnivore()
    { return { (void*)this, "bIsCarnivore" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarried()
    { return { (void*)this, "bIsCarried" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarriedAsPassenger()
    { return { (void*)this, "bIsCarriedAsPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingCharacter()
    { return { (void*)this, "bIsCarryingCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsCarryingPassenger()
    { return { (void*)this, "bIsCarryingPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bIsCharging()
    { return { (void*)this, "bIsCharging" }; }
    BitFieldValue<bool, unsigned __int32> bIsCheckingThrottle()
    { return { (void*)this, "bIsCheckingThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bIsCloneDino()
    { return { (void*)this, "bIsCloneDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsCorrupted()
    { return { (void*)this, "bIsCorrupted" }; }
    BitFieldValue<bool, unsigned __int32> bIsCrouched()
    { return { (void*)this, "bIsCrouched" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyingDino()
    { return { (void*)this, "bIsDestroyingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoingDraggedInterp()
    { return { (void*)this, "bIsDoingDraggedInterp" }; }
    BitFieldValue<bool, unsigned __int32> bIsDragging()
    { return { (void*)this, "bIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bIsDraggingWithGrapHook()
    { return { (void*)this, "bIsDraggingWithGrapHook" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsEnforcer()
    { return { (void*)this, "bIsEnforcer" }; }
    BitFieldValue<bool, unsigned __int32> bIsExtinctionTitan()
    { return { (void*)this, "bIsExtinctionTitan" }; }
    BitFieldValue<bool, unsigned __int32> bIsFemale()
    { return { (void*)this, "bIsFemale" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlying()
    { return { (void*)this, "bIsFlying" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsHeldJumpSlowFalling()
    { return { (void*)this, "bIsHeldJumpSlowFalling" }; }
    BitFieldValue<bool, unsigned __int32> bIsHordeDino()
    { return { (void*)this, "bIsHordeDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsHost()
    { return { (void*)this, "bIsHost" }; }
    BitFieldValue<bool, unsigned __int32> bIsImmobilized()
    { return { (void*)this, "bIsImmobilized" }; }
    BitFieldValue<bool, unsigned __int32> bIsInTurretMode()
    { return { (void*)this, "bIsInTurretMode" }; }
    BitFieldValue<bool, unsigned __int32> bIsInWetDock()
    { return { (void*)this, "bIsInWetDock" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLanding()
    { return { (void*)this, "bIsLanding" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatched()
    { return { (void*)this, "bIsLatched" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatchedDownward()
    { return { (void*)this, "bIsLatchedDownward" }; }
    BitFieldValue<bool, unsigned __int32> bIsLatching()
    { return { (void*)this, "bIsLatching" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocalViewTarget()
    { return { (void*)this, "bIsLocalViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsMassMoving()
    { return { (void*)this, "bIsMassMoving" }; }
    BitFieldValue<bool, unsigned __int32> bIsMek()
    { return { (void*)this, "bIsMek" }; }
    BitFieldValue<bool, unsigned __int32> bIsMetalHull()
    { return { (void*)this, "bIsMetalHull" }; }
    BitFieldValue<bool, unsigned __int32> bIsMounted()
    { return { (void*)this, "bIsMounted" }; }
    BitFieldValue<bool, unsigned __int32> bIsNPCShip()
    { return { (void*)this, "bIsNPCShip" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursing()
    { return { (void*)this, "bIsNursing" }; }
    BitFieldValue<bool, unsigned __int32> bIsNursingDino()
    { return { (void*)this, "bIsNursingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsOceanManagerDino()
    { return { (void*)this, "bIsOceanManagerDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverridingClientPositionErrorTolerance()
    { return { (void*)this, "bIsOverridingClientPositionErrorTolerance" }; }
    BitFieldValue<bool, unsigned __int32> bIsParentWildDino()
    { return { (void*)this, "bIsParentWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingLowHealthAnim()
    { return { (void*)this, "bIsPlayingLowHealthAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingTurningAnim()
    { return { (void*)this, "bIsPlayingTurningAnim" }; }
    BitFieldValue<bool, unsigned __int32> bIsProne()
    { return { (void*)this, "bIsProne" }; }
    BitFieldValue<bool, unsigned __int32> bIsRaidDino()
    { return { (void*)this, "bIsRaidDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsSaveProfilingDino()
    { return { (void*)this, "bIsSaveProfilingDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsScout()
    { return { (void*)this, "bIsScout" }; }
    BitFieldValue<bool, unsigned __int32> bIsSecondaryMounted()
    { return { (void*)this, "bIsSecondaryMounted" }; }
    BitFieldValue<bool, unsigned __int32> bIsSkinned()
    { return { (void*)this, "bIsSkinned" }; }
    BitFieldValue<bool, unsigned __int32> bIsSleeping()
    { return { (void*)this, "bIsSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bIsSmallRaft()
    { return { (void*)this, "bIsSmallRaft" }; }
    BitFieldValue<bool, unsigned __int32> bIsTemporaryMissionDino()
    { return { (void*)this, "bIsTemporaryMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bIsVoiceTalking()
    { return { (void*)this, "bIsVoiceTalking" }; }
    BitFieldValue<bool, unsigned __int32> bIsWakingTame()
    { return { (void*)this, "bIsWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bIsWandering()
    { return { (void*)this, "bIsWandering" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnRelease()
    { return { (void*)this, "bJumpOnRelease" }; }
    BitFieldValue<bool, unsigned __int32> bKeepAffinityOnDamageRecievedWakingTame()
    { return { (void*)this, "bKeepAffinityOnDamageRecievedWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bKillingThrottle()
    { return { (void*)this, "bKillingThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bLimitRiderYawOnLatched()
    { return { (void*)this, "bLimitRiderYawOnLatched" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bLocalIsDragging()
    { return { (void*)this, "bLocalIsDragging" }; }
    BitFieldValue<bool, unsigned __int32> bMaidenVoyagePlayed()
    { return { (void*)this, "bMaidenVoyagePlayed" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeSwingDamageBlockedByStrutures()
    { return { (void*)this, "bMeleeSwingDamageBlockedByStrutures" }; }
    BitFieldValue<bool, unsigned __int32> bMotionWantsMusicOn()
    { return { (void*)this, "bMotionWantsMusicOn" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bMusicFadedIn()
    { return { (void*)this, "bMusicFadedIn" }; }
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
    BitFieldValue<bool, unsigned __int32> bNeutered()
    { return { (void*)this, "bNeutered" }; }
    BitFieldValue<bool, unsigned __int32> bNoDamageImpulse()
    { return { (void*)this, "bNoDamageImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bNoKillXP()
    { return { (void*)this, "bNoKillXP" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTargetConscious()
    { return { (void*)this, "bOnlyTargetConscious" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseBPSimulatePhysics()
    { return { (void*)this, "bOnlyUseBPSimulatePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bOrbitCamera()
    { return { (void*)this, "bOrbitCamera" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideBlendSpaceSmoothType()
    { return { (void*)this, "bOverrideBlendSpaceSmoothType" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairAlpha()
    { return { (void*)this, "bOverrideCrosshairAlpha" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideCrosshairColor()
    { return { (void*)this, "bOverrideCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFlyingVelocity()
    { return { (void*)this, "bOverrideFlyingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideNewFallVelocity()
    { return { (void*)this, "bOverrideNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingAcceleration()
    { return { (void*)this, "bOverrideSwimmingAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideSwimmingVelocity()
    { return { (void*)this, "bOverrideSwimmingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideWalkingVelocity()
    { return { (void*)this, "bOverrideWalkingVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bPaintingSupportSkins()
    { return { (void*)this, "bPaintingSupportSkins" }; }
    BitFieldValue<bool, unsigned __int32> bPassiveFlee()
    { return { (void*)this, "bPassiveFlee" }; }
    BitFieldValue<bool, unsigned __int32> bPressedJump()
    { return { (void*)this, "bPressedJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllBuffs()
    { return { (void*)this, "bPreventAllBuffs" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllRiderWeapons()
    { return { (void*)this, "bPreventAllRiderWeapons" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAnimationUpdateRateOptimizations()
    { return { (void*)this, "bPreventAnimationUpdateRateOptimizations" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventClearShoulderMountOfDiffTeam()
    { return { (void*)this, "bPreventClearShoulderMountOfDiffTeam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCloning()
    { return { (void*)this, "bPreventCloning" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoResetAffinityOnUnsleep()
    { return { (void*)this, "bPreventDinoResetAffinityOnUnsleep" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDynamicMusic()
    { return { (void*)this, "bPreventDynamicMusic" }; }
    BitFieldValue<bool, unsigned __int32> bPreventExportDino()
    { return { (void*)this, "bPreventExportDino" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFallingBumpCheck()
    { return { (void*)this, "bPreventFallingBumpCheck" }; }
    BitFieldValue<bool, unsigned __int32> bPreventFlyerLanding()
    { return { (void*)this, "bPreventFlyerLanding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventForceBabyFlyerLand()
    { return { (void*)this, "bPreventForceBabyFlyerLand" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHUDInitialization()
    { return { (void*)this, "bPreventHUDInitialization" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHibernation()
    { return { (void*)this, "bPreventHibernation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHurtAnim()
    { return { (void*)this, "bPreventHurtAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventIKWhenNotWalking()
    { return { (void*)this, "bPreventIKWhenNotWalking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryAccess()
    { return { (void*)this, "bPreventInventoryAccess" }; }
    BitFieldValue<bool, unsigned __int32> bPreventJump()
    { return { (void*)this, "bPreventJump" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLiveBlinking()
    { return { (void*)this, "bPreventLiveBlinking" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMating()
    { return { (void*)this, "bPreventMating" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMoveUp()
    { return { (void*)this, "bPreventMoveUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMovement()
    { return { (void*)this, "bPreventMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPassengerFPV()
    { return { (void*)this, "bPreventPassengerFPV" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPerPixelPainting()
    { return { (void*)this, "bPreventPerPixelPainting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRotationRateModifier()
    { return { (void*)this, "bPreventRotationRateModifier" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventTargetingAndMovement()
    { return { (void*)this, "bPreventTargetingAndMovement" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUntamedRun()
    { return { (void*)this, "bPreventUntamedRun" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUploading()
    { return { (void*)this, "bPreventUploading" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWakingTameFeeding()
    { return { (void*)this, "bPreventWakingTameFeeding" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWanderingUnderWater()
    { return { (void*)this, "bPreventWanderingUnderWater" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWaterHopCorrectionVelChange()
    { return { (void*)this, "bPreventWaterHopCorrectionVelChange" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWildTrapping()
    { return { (void*)this, "bPreventWildTrapping" }; }
    BitFieldValue<bool, unsigned __int32> bPreventsDinosWithStructureSupportingSaddles()
    { return { (void*)this, "bPreventsDinosWithStructureSupportingSaddles" }; }
    BitFieldValue<bool, unsigned __int32> bProxyIsJumpForceApplied()
    { return { (void*)this, "bProxyIsJumpForceApplied" }; }
    BitFieldValue<bool, unsigned __int32> bRagdollIgnoresPawnCapsules()
    { return { (void*)this, "bRagdollIgnoresPawnCapsules" }; }
    BitFieldValue<bool, unsigned __int32> bReachedMaxStructures()
    { return { (void*)this, "bReachedMaxStructures" }; }
    BitFieldValue<bool, unsigned __int32> bReadyToPoop()
    { return { (void*)this, "bReadyToPoop" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bRecentlyUpdateIk()
    { return { (void*)this, "bRecentlyUpdateIk" }; }
    BitFieldValue<bool, unsigned __int32> bRefreshedColorization()
    { return { (void*)this, "bRefreshedColorization" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bRemainLatchedOnClearRider()
    { return { (void*)this, "bRemainLatchedOnClearRider" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteRunning()
    { return { (void*)this, "bRemoteRunning" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateCurrentSailRotation()
    { return { (void*)this, "bReplicateCurrentSailRotation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateDesiredRotation()
    { return { (void*)this, "bReplicateDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePassengerTPVAim()
    { return { (void*)this, "bReplicatePassengerTPVAim" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatePitchWhileSwimming()
    { return { (void*)this, "bReplicatePitchWhileSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicatedIsSubmerged()
    { return { (void*)this, "bReplicatedIsSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRiderDontRequireSaddle()
    { return { (void*)this, "bRiderDontRequireSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bRiderJumpTogglesFlight()
    { return { (void*)this, "bRiderJumpTogglesFlight" }; }
    BitFieldValue<bool, unsigned __int32> bRiderMovementLocked()
    { return { (void*)this, "bRiderMovementLocked" }; }
    BitFieldValue<bool, unsigned __int32> bRidingIsSeperateUnstasisCaster()
    { return { (void*)this, "bRidingIsSeperateUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bRidingRequiresTamed()
    { return { (void*)this, "bRidingRequiresTamed" }; }
    BitFieldValue<bool, unsigned __int32> bRotateToFaceLatchingObject()
    { return { (void*)this, "bRotateToFaceLatchingObject" }; }
    BitFieldValue<bool, unsigned __int32> bRotatingUpdatesDinoIK()
    { return { (void*)this, "bRotatingUpdatesDinoIK" }; }
    BitFieldValue<bool, unsigned __int32> bSailsAffectThrottleLocation()
    { return { (void*)this, "bSailsAffectThrottleLocation" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bServerForceUpdateDinoGameplayMeshNearPlayer()
    { return { (void*)this, "bServerForceUpdateDinoGameplayMeshNearPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bServerInitializedDino()
    { return { (void*)this, "bServerInitializedDino" }; }
    BitFieldValue<bool, unsigned __int32> bServerMoveIgnoreRootMotion()
    { return { (void*)this, "bServerMoveIgnoreRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bShipHasSpecialAttack()
    { return { (void*)this, "bShipHasSpecialAttack" }; }
    BitFieldValue<bool, unsigned __int32> bShouldBeInGodMode()
    { return { (void*)this, "bShouldBeInGodMode" }; }
    BitFieldValue<bool, unsigned __int32> bSimGravityDisabled()
    { return { (void*)this, "bSimGravityDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bSimulateRootMotion()
    { return { (void*)this, "bSimulateRootMotion" }; }
    BitFieldValue<bool, unsigned __int32> bSingleplayerFreezePhysicsWhenNoTarget()
    { return { (void*)this, "bSingleplayerFreezePhysicsWhenNoTarget" }; }
    BitFieldValue<bool, unsigned __int32> bSkipProcessRootRotAndLocInAimOffset()
    { return { (void*)this, "bSkipProcessRootRotAndLocInAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bSkipRamDamageWhenNPC()
    { return { (void*)this, "bSkipRamDamageWhenNPC" }; }
    BitFieldValue<bool, unsigned __int32> bSleepedWaterRagdoll()
    { return { (void*)this, "bSleepedWaterRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bSleepingDisableRagdoll()
    { return { (void*)this, "bSleepingDisableRagdoll" }; }
    BitFieldValue<bool, unsigned __int32> bSmallRaftPushAwayPlayers()
    { return { (void*)this, "bSmallRaftPushAwayPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bSpankerVisible()
    { return { (void*)this, "bSpankerVisible" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStepDamageFoliageOnly()
    { return { (void*)this, "bStepDamageFoliageOnly" }; }
    BitFieldValue<bool, unsigned __int32> bSupportWakingTame()
    { return { (void*)this, "bSupportWakingTame" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPassengerSeats()
    { return { (void*)this, "bSupportsPassengerSeats" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressDeathNotification()
    { return { (void*)this, "bSuppressDeathNotification" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressPlayerKillNotification()
    { return { (void*)this, "bSuppressPlayerKillNotification" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressWakingTameMessage()
    { return { (void*)this, "bSuppressWakingTameMessage" }; }
    BitFieldValue<bool, unsigned __int32> bSwimmingWaterDinoMoveLikeFlying()
    { return { (void*)this, "bSwimmingWaterDinoMoveLikeFlying" }; }
    BitFieldValue<bool, unsigned __int32> bTakingOff()
    { return { (void*)this, "bTakingOff" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAIAllowSpecialAttacks()
    { return { (void*)this, "bTamedAIAllowSpecialAttacks" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAlwaysUseTamedUnsleepAnim()
    { return { (void*)this, "bTamedAlwaysUseTamedUnsleepAnim" }; }
    BitFieldValue<bool, unsigned __int32> bTamingHasFood()
    { return { (void*)this, "bTamingHasFood" }; }
    BitFieldValue<bool, unsigned __int32> bTargetEverything()
    { return { (void*)this, "bTargetEverything" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoreWildDinos()
    { return { (void*)this, "bTargetingIgnoreWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingIgnoredByWildDinos()
    { return { (void*)this, "bTargetingIgnoredByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTickRowing()
    { return { (void*)this, "bTickRowing" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerBPStasis()
    { return { (void*)this, "bTriggerBPStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUniqueDino()
    { return { (void*)this, "bUniqueDino" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUpdateDinoLimbWallAvoidance()
    { return { (void*)this, "bUpdateDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAdvancedAnimLerp()
    { return { (void*)this, "bUseAdvancedAnimLerp" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmphibiousTargeting()
    { return { (void*)this, "bUseAmphibiousTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustAttackIndex()
    { return { (void*)this, "bUseBPAdjustAttackIndex" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowPlayMontage()
    { return { (void*)this, "bUseBPAllowPlayMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowRunningWhileFalling()
    { return { (void*)this, "bUseBPAllowRunningWhileFalling" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowTeamToTrackTamingDino()
    { return { (void*)this, "bUseBPAllowTeamToTrackTamingDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAnchor()
    { return { (void*)this, "bUseBPCanAnchor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanCombineMoves()
    { return { (void*)this, "bUseBPCanCombineMoves" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanTargetCorpse()
    { return { (void*)this, "bUseBPCanTargetCorpse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckCanSpawnFromLocation()
    { return { (void*)this, "bUseBPCheckCanSpawnFromLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoFaceRotation()
    { return { (void*)this, "bUseBPDinoFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDinoTooltipCustomProgressBar()
    { return { (void*)this, "bUseBPDinoTooltipCustomProgressBar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFaceRotation()
    { return { (void*)this, "bUseBPFaceRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceCameraStyle()
    { return { (void*)this, "bUseBPForceCameraStyle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceKeepBasedOnDino()
    { return { (void*)this, "bUseBPForceKeepBasedOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetArmorDurabilityDecreaseMultiplier()
    { return { (void*)this, "bUseBPGetArmorDurabilityDecreaseMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFinalMaxSpeed()
    { return { (void*)this, "bUseBPGetFinalMaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetGravity()
    { return { (void*)this, "bUseBPGetGravity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOtherActorToIgnore()
    { return { (void*)this, "bUseBPGetOtherActorToIgnore" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOverrideCameraInterpSpeed()
    { return { (void*)this, "bUseBPGetOverrideCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTamedFollowTarget()
    { return { (void*)this, "bUseBPGetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirability()
    { return { (void*)this, "bUseBPGetTargetingDesirability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTargetingDesirabilityForTurrets()
    { return { (void*)this, "bUseBPGetTargetingDesirabilityForTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEvents()
    { return { (void*)this, "bUseBPInterceptMoveInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptMoveInputEventsEvenIfZero()
    { return { (void*)this, "bUseBPInterceptMoveInputEventsEvenIfZero" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInterceptTurnInputEvents()
    { return { (void*)this, "bUseBPInterceptTurnInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPItemSlotOverrides()
    { return { (void*)this, "bUseBPItemSlotOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyDesiredRotation()
    { return { (void*)this, "bUseBPModifyDesiredRotation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyWanderAroundActorLocation()
    { return { (void*)this, "bUseBPModifyWanderAroundActorLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyXPMultiplier()
    { return { (void*)this, "bUseBPModifyXPMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAdded()
    { return { (void*)this, "bUseBPNotifyOnBuffAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyOnBuffAddedToMountChar()
    { return { (void*)this, "bUseBPNotifyOnBuffAddedToMountChar" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnCarryCharacter()
    { return { (void*)this, "bUseBPOnCarryCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnEndCharging()
    { return { (void*)this, "bUseBPOnEndCharging" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnImmobilize()
    { return { (void*)this, "bUseBPOnImmobilize" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnLethalDamage()
    { return { (void*)this, "bUseBPOnLethalDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSimulatedTick()
    { return { (void*)this, "bUseBPOnSimulatedTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideBasedPlayerAimOffsetYaw()
    { return { (void*)this, "bUseBPOverrideBasedPlayerAimOffsetYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCameraViewTarget()
    { return { (void*)this, "bUseBPOverrideCameraViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewFallVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewFallVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterNewSwimVelocity()
    { return { (void*)this, "bUseBPOverrideCharacterNewSwimVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterParticle()
    { return { (void*)this, "bUseBPOverrideCharacterParticle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideCharacterSound()
    { return { (void*)this, "bUseBPOverrideCharacterSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageCauserHitMarker()
    { return { (void*)this, "bUseBPOverrideDamageCauserHitMarker" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideFloatingHUDLocation()
    { return { (void*)this, "bUseBPOverrideFloatingHUDLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIsSubmergedForWaterTargeting()
    { return { (void*)this, "bUseBPOverrideIsSubmergedForWaterTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideJumpZModifier()
    { return { (void*)this, "bUseBPOverrideJumpZModifier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePassengerAdditiveAnim()
    { return { (void*)this, "bUseBPOverridePassengerAdditiveAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePhysicsImpulses()
    { return { (void*)this, "bUseBPOverridePhysicsImpulses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePlayAnimExMontage()
    { return { (void*)this, "bUseBPOverridePlayAnimExMontage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderAccessInventoryInput()
    { return { (void*)this, "bUseBPOverrideRiderAccessInventoryInput" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRiderIndoorsCheckLocation()
    { return { (void*)this, "bUseBPOverrideRiderIndoorsCheckLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideStencilAllianceForTarget()
    { return { (void*)this, "bUseBPOverrideStencilAllianceForTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTamingDescriptionLabel()
    { return { (void*)this, "bUseBPOverrideTamingDescriptionLabel" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPlayHitEffect()
    { return { (void*)this, "bUseBPPlayHitEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventMovementMode()
    { return { (void*)this, "bUseBPPreventMovementMode" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetCharacterMeshseMaterialScalarParamValue()
    { return { (void*)this, "bUseBPSetCharacterMeshseMaterialScalarParamValue" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetTamedFollowTarget()
    { return { (void*)this, "bUseBPSetTamedFollowTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetThrottle()
    { return { (void*)this, "bUseBPSetThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShieldBlock()
    { return { (void*)this, "bUseBPShieldBlock" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldUseLongFallCameraPivotZValues()
    { return { (void*)this, "bUseBPShouldUseLongFallCameraPivotZValues" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSimulatePhysics()
    { return { (void*)this, "bUseBPSimulatePhysics" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSkipTerrainTraceForCarriedCharacter()
    { return { (void*)this, "bUseBPSkipTerrainTraceForCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerNonDedicated()
    { return { (void*)this, "bUseBPTimerNonDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTimerServer()
    { return { (void*)this, "bUseBPTimerServer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_AdjustRowingImpulse()
    { return { (void*)this, "bUseBP_AdjustRowingImpulse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CanFly()
    { return { (void*)this, "bUseBP_CanFly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_CustomModifier_MaxSpeed()
    { return { (void*)this, "bUseBP_CustomModifier_MaxSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ForceAllowBuffClasses()
    { return { (void*)this, "bUseBP_ForceAllowBuffClasses" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ModifyInputAcceleration()
    { return { (void*)this, "bUseBP_ModifyInputAcceleration" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnBasedPawnSetNotifies()
    { return { (void*)this, "bUseBP_OnBasedPawnSetNotifies" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OnPostNetReplication()
    { return { (void*)this, "bUseBP_OnPostNetReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideBasedCharactersCameraInterpSpeed()
    { return { (void*)this, "bUseBP_OverrideBasedCharactersCameraInterpSpeed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideCarriedCharacterTransform()
    { return { (void*)this, "bUseBP_OverrideCarriedCharacterTransform" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideDinoName()
    { return { (void*)this, "bUseBP_OverrideDinoName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideRiderCameraCollisionSweep()
    { return { (void*)this, "bUseBP_OverrideRiderCameraCollisionSweep" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_OverrideTerminalVelocity()
    { return { (void*)this, "bUseBP_OverrideTerminalVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_ShouldPreventBasedCharactersCameraInterpolation()
    { return { (void*)this, "bUseBP_ShouldPreventBasedCharactersCameraInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintExtraBabyScale()
    { return { (void*)this, "bUseBlueprintExtraBabyScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintJumpInputEvents()
    { return { (void*)this, "bUseBlueprintJumpInputEvents" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorization()
    { return { (void*)this, "bUseColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationPitch()
    { return { (void*)this, "bUseControllerRotationPitch" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationRoll()
    { return { (void*)this, "bUseControllerRotationRoll" }; }
    BitFieldValue<bool, unsigned __int32> bUseControllerRotationYaw()
    { return { (void*)this, "bUseControllerRotationYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeferredMovement()
    { return { (void*)this, "bUseDeferredMovement" }; }
    BitFieldValue<bool, unsigned __int32> bUseDescriptiveNameGenderOverrides()
    { return { (void*)this, "bUseDescriptiveNameGenderOverrides" }; }
    BitFieldValue<bool, unsigned __int32> bUseDinoLimbWallAvoidance()
    { return { (void*)this, "bUseDinoLimbWallAvoidance" }; }
    BitFieldValue<bool, unsigned __int32> bUseFixedSpawnLevel()
    { return { (void*)this, "bUseFixedSpawnLevel" }; }
    BitFieldValue<bool, unsigned __int32> bUseForcestoApply()
    { return { (void*)this, "bUseForcestoApply" }; }
    BitFieldValue<bool, unsigned __int32> bUseGang()
    { return { (void*)this, "bUseGang" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetOverrideSocket()
    { return { (void*)this, "bUseGetOverrideSocket" }; }
    BitFieldValue<bool, unsigned __int32> bUseMountCharacterProneOffset()
    { return { (void*)this, "bUseMountCharacterProneOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseMyBabyCuddleFoodTypesAsAdditional()
    { return { (void*)this, "bUseMyBabyCuddleFoodTypesAsAdditional" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnCharacterSteppedNotify()
    { return { (void*)this, "bUseOnCharacterSteppedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnStartedAllyTargetLooking()
    { return { (void*)this, "bUseOnStartedAllyTargetLooking" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnUpdateMountedDinoMeshHiding()
    { return { (void*)this, "bUseOnUpdateMountedDinoMeshHiding" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUsePlayerMountedCarryingDinoAnimation()
    { return { (void*)this, "bUsePlayerMountedCarryingDinoAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUsePoopAnimationNotify()
    { return { (void*)this, "bUsePoopAnimationNotify" }; }
    BitFieldValue<bool, unsigned __int32> bUsePreciseLaunching()
    { return { (void*)this, "bUsePreciseLaunching" }; }
    BitFieldValue<bool, unsigned __int32> bUseRaftBPTick()
    { return { (void*)this, "bUseRaftBPTick" }; }
    BitFieldValue<bool, unsigned __int32> bUseRandomLookAtTarget()
    { return { (void*)this, "bUseRandomLookAtTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseRootLocSwimOffset()
    { return { (void*)this, "bUseRootLocSwimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseShoulderMountedLaunch()
    { return { (void*)this, "bUseShoulderMountedLaunch" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUseWildRandomScale()
    { return { (void*)this, "bUseWildRandomScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseZeroGravityWander()
    { return { (void*)this, "bUseZeroGravityWander" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PostRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PostRep" }; }
    BitFieldValue<bool, unsigned __int32> bUse_ModifySavedMoveAcceleration_PreRep()
    { return { (void*)this, "bUse_ModifySavedMoveAcceleration_PreRep" }; }
    BitFieldValue<bool, unsigned __int32> bUsesGender()
    { return { (void*)this, "bUsesGender" }; }
    BitFieldValue<bool, unsigned __int32> bUsesRunningAnimation()
    { return { (void*)this, "bUsesRunningAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bUsesWaterWalking()
    { return { (void*)this, "bUsesWaterWalking" }; }
    BitFieldValue<bool, unsigned __int32> bVehicleAlwaysAllowTargetingByWildDinos()
    { return { (void*)this, "bVehicleAlwaysAllowTargetingByWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bVehicleUpdatePPBlends()
    { return { (void*)this, "bVehicleUpdatePPBlends" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToRun()
    { return { (void*)this, "bWantsToRun" }; }
    BitFieldValue<bool, unsigned __int32> bWasBeingDragged()
    { return { (void*)this, "bWasBeingDragged" }; }
    BitFieldValue<bool, unsigned __int32> bWasInCombatLastTick()
    { return { (void*)this, "bWasInCombatLastTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasJumping()
    { return { (void*)this, "bWasJumping" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowFollowTamedTarget()
    { return { (void*)this, "bWildAllowFollowTamedTarget" }; }
    BitFieldValue<bool, unsigned __int32> bWildAllowTargetingNeutralStructures()
    { return { (void*)this, "bWildAllowTargetingNeutralStructures" }; }
    BitFieldValue<bool, unsigned __int32> bWildIgnoredByAutoTurrets()
    { return { (void*)this, "bWildIgnoredByAutoTurrets" }; }
    float& chargingRotationRateModifierField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.chargingRotationRateModifier"); }
    int& customBitFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalPlayerFollowingShip.customBitFlags"); }
    BitFieldValue<bool, unsigned __int32> hasAlreadySetGender()
    { return { (void*)this, "hasAlreadySetGender" }; }
    float& maxRangeForWeaponTriggeredTooltipField() const
    { return *GetNativePointerField<float*>(this, "APrimalPlayerFollowingShip.maxRangeForWeaponTriggeredTooltip"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPLAYERFOLLOWINGSHIP_H
