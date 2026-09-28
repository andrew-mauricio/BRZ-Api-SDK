// ==========================================================================
//  APrimalShipAIController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSHIPAICONTROLLER_H
#define BRZ_SDK_JOGO_APRIMALSHIPAICONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct ACharacter;
struct APawn;
struct APlayerState;
struct FActorTickFunction;
struct FName;
struct UBehaviorTree;
struct UBrainComponent;
struct UInputComponent;
struct UPrimitiveComponent;
struct USceneComponent;


struct APrimalShipAIController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalShipAIController"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.CanReachShip(APrimalShip*,UE::Math::TVector<double>,UE::Math::TVector<do
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanReachShip(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalShipAIController.CanReachShip(APrimalShip*,UE::Math::TVector<double>,UE::Math::TVector<double>*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.ComputeBroadsideAimEnvelope(APrimalPlayerFollowingShip*,APrimalShip*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeBroadsideAimEnvelope(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalShipAIController.ComputeBroadsideAimEnvelope(APrimalPlayerFollowingShip*,APrimalShip*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.ComputePursuitGoalForSide(UE::Math::TVector<double>&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputePursuitGoalForSide(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalShipAIController.ComputePursuitGoalForSide(UE::Math::TVector<double>&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.DriveAutopilotTowardGoal(UE::Math::TVector<double>&,float,float,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DriveAutopilotTowardGoal(void* a0, float a1, float a2, void* a3) const
    {
        return NativeCall<void*, void*, float, float, void*>(this, "APrimalShipAIController.DriveAutopilotTowardGoal(UE::Math::TVector<double>&,float,float,AActor*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.FindTargetShip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindTargetShip() const
    {
        return NativeCall<void*>(this, "APrimalShipAIController.FindTargetShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.GetControlledShip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetControlledShip() const
    {
        return NativeCall<void*>(this, "APrimalShipAIController.GetControlledShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.GetPursuitGoal(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPursuitGoal(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipAIController.GetPursuitGoal(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.GetWanderDestination()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWanderDestination() const
    {
        return NativeCall<void*>(this, "APrimalShipAIController.GetWanderDestination()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.OnPossess(APawn*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnPossess(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipAIController.OnPossess(APawn*)", a0);
    }

    float& AIFlightMaxLandingZDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AIFlightMaxLandingZDistance"); }
    float& AboveDeltaZAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AboveDeltaZAttackRange"); }
    BrzCampoPonteiro ActionsCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.ActionsComp")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipAIController.ActorUsingQuickAction"); }
    float& AggroFactorDamagePercentageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroFactorDamagePercentageMultiplier"); }
    float& AggroFactorDecreaseGracePeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroFactorDecreaseGracePeriod"); }
    float& AggroFactorDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroFactorDecreaseSpeed"); }
    float& AggroFactorDesirabilityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroFactorDesirabilityMultiplier"); }
    TArray<void*>& AggroNotifyNeighborsClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.AggroNotifyNeighborsClasses"); }
    float& AggroNotifyNeighborsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroNotifyNeighborsMultiplier"); }
    float& AggroNotifyNeighborsRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroNotifyNeighborsRange"); }
    float& AggroNotifyNeighborsRangeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroNotifyNeighborsRangeFalloff"); }
    float& AggroToAddUponAcquiringTargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroToAddUponAcquiringTarget"); }
    float& AggroToAddUponRemovingTargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AggroToAddUponRemovingTarget"); }
    float& AimErrorMaxRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorMaxRadius"); }
    float& AimErrorMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorMultiplier"); }
    float& AimErrorRangeFractionField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimErrorRangeFraction"); }
    float& AimHullBeamFractionField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimHullBeamFraction"); }
    float& AimHullLengthFractionField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AimHullLengthFraction"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.AttachmentReplication")); }
    float& AttackDestinationOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AttackDestinationOffset"); }
    float& AttackIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AttackInterval"); }
    float& AttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AttackRange"); }
    float& AttackRotationGroundSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AttackRotationGroundSpeedMultiplier"); }
    float& AttackRotationRangeDegreesField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.AttackRotationRangeDegrees"); }
    BrzCampoPonteiro AttackRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.AttackRotationRate")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipAIController.AutoReceiveInput"); }
    UBehaviorTree*& BabyHasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.BabyHasEnemyTree"); }
    float& BaseStructureTargetingDesireField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.BaseStructureTargetingDesire"); }
    UBehaviorTree*& BehaviourTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.BehaviourTree"); }
    float& BelowDeltaZAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.BelowDeltaZAttackRange"); }
    float& BeyondTargetingRangeAggroAdditionField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.BeyondTargetingRangeAggroAddition"); }
    BrzCampoPonteiro BlackboardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.Blackboard")); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.BlueprintCreatedComponents"); }
    TObjectPtr<UBrainComponent>& BrainComponentField() const
    { return *GetNativePointerField<TObjectPtr<UBrainComponent>*>(this, "APrimalShipAIController.BrainComponent"); }
    BrzCampoPonteiro CachedGameplayTasksComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.CachedGameplayTasksComponent")); }
    TObjectPtr<ACharacter>& CharacterField() const
    { return *GetNativePointerField<TObjectPtr<ACharacter>*>(this, "APrimalShipAIController.Character"); }
    float& ChaseSideSwapIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ChaseSideSwapInterval"); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.Children"); }
    float& CircleForwardOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleForwardOffset"); }
    float& CircleRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleRadius"); }
    float& CircleSideSwapIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CircleSideSwapInterval"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ClientReplicationSendNowThreshold"); }
    float& CombatFlyingCorpseTargetingZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CombatFlyingCorpseTargetingZOffset"); }
    float& CombatFlyingCrouchProneTargetingZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CombatFlyingCrouchProneTargetingZOffset"); }
    BrzCampoPonteiro CombatFlyingMoveTowardsTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.CombatFlyingMoveTowardsTargetOffset")); }
    BrzCampoPonteiro ControlRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.ControlRotation")); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.ControllingMatineeActors"); }
    float& CorpseAttackDestinationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CorpseAttackDestinationMultiplier"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.CreationTime"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipAIController.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.CustomTimeDilation"); }
    float& DamagedForceAggroIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DamagedForceAggroInterval"); }
    BrzCampoPonteiro DefaultNavigationFilterClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.DefaultNavigationFilterClass")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipAIController.DesiredRepGraphBehavior"); }
    float& DieIfLeftWaterReachedRadiusDistanceCheckMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DieIfLeftWaterReachedRadiusDistanceCheckMultiplier"); }
    float& DieIfLeftWaterTargetUnsubmergedTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DieIfLeftWaterTargetUnsubmergedTimeout"); }
    float& DieIfLeftWaterTargetingRequiresFreeDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DieIfLeftWaterTargetingRequiresFreeDepth"); }
    float& DieIfLeftWaterWanderMinimumWaterHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DieIfLeftWaterWanderMinimumWaterHeightMultiplier"); }
    float& DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepth"); }
    float& ExtraCorpseTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ExtraCorpseTargetingRange"); }
    float& FindLandingPositionZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FindLandingPositionZOffset"); }
    float& FiringCoolDownField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FiringCoolDown"); }
    float& FiringRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FiringRange"); }
    float& FleeFromAttackCoolDownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FleeFromAttackCoolDownTime"); }
    float& FleeFromAttackTimeLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FleeFromAttackTimeLimit"); }
    UBehaviorTree*& FleeFromAttackTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.FleeFromAttackTree"); }
    BrzCampoPonteiro FlyingMoveTowardsTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.FlyingMoveTowardsTargetOffset")); }
    float& FlyingReachedDestinationThresholdOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FlyingReachedDestinationThresholdOffset"); }
    BrzCampoPonteiro FlyingTargetFocalPositionOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.FlyingTargetFocalPositionOffset")); }
    float& FlyingWanderFixedDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FlyingWanderFixedDistanceAmount"); }
    float& FlyingWanderRandomDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FlyingWanderRandomDistanceAmount"); }
    float& FollowStoppingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.FollowStoppingDistance"); }
    double& ForceAggroUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.ForceAggroUntilTime"); }
    float& ForceFleeUnderHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ForceFleeUnderHealthPercentage"); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.ForceMaximumReplicationRateUntilTime"); }
    AActor*& ForceTargetActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShipAIController.ForceTargetActor"); }
    UBehaviorTree*& ForcedAggroHasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.ForcedAggroHasEnemyTree"); }
    float& ForcedAggroTimeCounterField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ForcedAggroTimeCounter"); }
    int& ForcedAttackEnemyTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.ForcedAttackEnemyTeam"); }
    TWeakObjectPtr<void>& ForcedAttackTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipAIController.ForcedAttackTarget"); }
    float& ForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ForcedFleeDuration"); }
    double& ForcedMoveToUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.ForcedMoveToUntilTime"); }
    float& GiveUpAfterNoDamageTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveUpAfterNoDamageTime"); }
    float& GiveWayConeDegreesField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayConeDegrees"); }
    float& GiveWayDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayDistance"); }
    float& GiveWayThrottleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GiveWayThrottle"); }
    float& GroundAttackSpeedOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.GroundAttackSpeedOverride"); }
    BrzCampoPonteiro HasAttackPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.HasAttackPriority")); }
    UBehaviorTree*& HasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.HasEnemyTree"); }
    float& HigherTamedTargetingRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.HigherTamedTargetingRangeOverride"); }
    BrzCampoPonteiro IgnoredTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.IgnoredTargets")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalShipAIController.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalShipAIController.Instigator"); }
    float& LandDinoMaxFlyerTargetDeltaZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.LandDinoMaxFlyerTargetDeltaZ"); }
    float& LandDinoMaxWaterTargetDepthCapsuleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.LandDinoMaxWaterTargetDepthCapsuleMultiplier"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastActorForceReplicationTime"); }
    double& LastBlockadeCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastBlockadeCheckTime"); }
    BrzCampoPonteiro LastBlockadeHitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.LastBlockadeHitLocation")); }
    BrzCampoPonteiro LastBlockadeHitNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.LastBlockadeHitNormal")); }
    float& LastBlockadeWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.LastBlockadeWidth"); }
    BrzCampoPonteiro LastCheckAttackRangeClosestPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.LastCheckAttackRangeClosestPoint")); }
    BrzCampoPonteiro LastCheckAttackRangePawnLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.LastCheckAttackRangePawnLocation")); }
    AActor*& LastCheckAttackRangeTargetField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShipAIController.LastCheckAttackRangeTarget"); }
    BrzCampoPonteiro LastCheckAttackRangeTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.LastCheckAttackRangeTargetLocation")); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastEnterStasisTime"); }
    double& LastExecutedAttackTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastExecutedAttackTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastExitStasisTime"); }
    double& LastFleeLocCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastFleeLocCheckTime"); }
    double& LastForcedAttackEnemyTeamTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastForcedAttackEnemyTeamTime"); }
    double& LastForcedFleeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastForcedFleeTime"); }
    AActor*& LastMovingAroundBlockadeActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalShipAIController.LastMovingAroundBlockadeActor"); }
    double& LastMovingAroundBlockadeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastMovingAroundBlockadeTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipAIController.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalShipAIController.LastSelectedWindSourceComponentName"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.LastThrottledTickTime"); }
    int& LastValidUnstasisCasterFrameField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.LastValidUnstasisCasterFrame"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.Layers"); }
    float& MateBoostAggroNotifyNeighborsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MateBoostAggroNotifyNeighborsMultiplier"); }
    float& MaxFlyingTargetDeltaZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MaxFlyingTargetDeltaZ"); }
    float& MinAggroValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinAggroValue"); }
    float& MinAttackIntervalForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinAttackIntervalForFleeing"); }
    float& MinAttackIntervalForFleeing_WaterField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinAttackIntervalForFleeing_Water"); }
    float& MinLocChangeIntervalForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinLocChangeIntervalForFleeing"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinNetUpdateFrequency"); }
    float& MinimumWanderGroundNormalZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MinimumWanderGroundNormalZ"); }
    UBehaviorTree*& MissionTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.MissionTree"); }
    float& MoveAroundBlockadeAdditionalWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MoveAroundBlockadeAdditionalWidth"); }
    float& MoveAroundObjectMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MoveAroundObjectMaxVelocity"); }
    float& MovingAroundBlockadeDirectionField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.MovingAroundBlockadeDirection"); }
    BrzCampoPonteiro MovingAroundBlockadePointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.MovingAroundBlockadePoint")); }
    float& NaturalMaxDepthZField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NaturalMaxDepthZ"); }
    float& NaturalTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NaturalTargetingRange"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipAIController.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipAIController.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipAIController.NetworkSpatializationParent"); }
    UBehaviorTree*& NoEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.NoEnemyTree"); }
    int& NumAlliesToAttackField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.NumAlliesToAttack"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnEndPlay")); }
    BrzCampoPonteiro OnInstigatedAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnInstigatedAnyDamage")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnMatineeUpdated")); }
    BrzCampoPonteiro OnPossessedPawnChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnPossessedPawnChanged")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.OriginalCreationTime"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.OverrideStasisComponentRadius"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalShipAIController.Owner"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipAIController.ParentComponent"); }
    BrzCampoPonteiro PathFollowingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.PathFollowingComponent")); }
    TObjectPtr<APawn>& PawnField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalShipAIController.Pawn"); }
    float& PercentageTorporForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.PercentageTorporForFleeing"); }
    BrzCampoPonteiro PerceptionComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.PerceptionComponent")); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.PhysicsReplicationMode")); }
    float& PlayerSearchingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.PlayerSearchingRange"); }
    TObjectPtr<APlayerState>& PlayerStateField() const
    { return *GetNativePointerField<TObjectPtr<APlayerState>*>(this, "APrimalShipAIController.PlayerState"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalShipAIController.PrimaryActorTick"); }
    float& ProbeHullLengthsField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ProbeHullLengths"); }
    float& RangeTargetWildDinosMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.RangeTargetWildDinosMultiplier"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.RayTracingGroupId"); }
    BrzCampoPonteiro ReceiveMoveCompletedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.ReceiveMoveCompleted")); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipAIController.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.ReplicatedMovement")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.ReplicationIntervalMultiplier"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalShipAIController.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalShipAIController.RootComponent"); }
    float& SafeDistanceFromShoreField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SafeDistanceFromShore"); }
    float& SeekingIntervalCheckToFlyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SeekingIntervalCheckToFly"); }
    float& SeekingIntervalCheckToLandField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SeekingIntervalCheckToLand"); }
    float& SeekingPercentChanceToFlyField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SeekingPercentChanceToFly"); }
    float& SeekingPercentChanceToLandField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.SeekingPercentChanceToLand"); }
    BrzCampoPonteiro ShipBehaviourTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.ShipBehaviourTree")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.SpawnCollisionHandlingMethod")); }
    BrzCampoPonteiro StartMovingAroundBlockadeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.StartMovingAroundBlockadeLocation")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalShipAIController.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalShipAIController.StasisUnRegisteredComponents"); }
    FName& StateNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalShipAIController.StateName"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.Tags"); }
    TArray<void*>& TamedAITargetingRangeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.TamedAITargetingRangeMultipliers"); }
    float& TamedCorpseFoodTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TamedCorpseFoodTargetingRange"); }
    float& TamedFollowAcceptanceHeightOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TamedFollowAcceptanceHeightOffset"); }
    float& TamedFollowAcceptanceRadiusOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TamedFollowAcceptanceRadiusOffset"); }
    float& TamedMaxFollowDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TamedMaxFollowDistance"); }
    UBehaviorTree*& TamedNoEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalShipAIController.TamedNoEnemyTree"); }
    TArray<void*>& TamedTargetingDesireMultiplierClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.TamedTargetingDesireMultiplierClasses"); }
    TArray<void*>& TamedTargetingDesireMultiplierValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.TamedTargetingDesireMultiplierValues"); }
    float& TamedTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TamedTargetingRange"); }
    TWeakObjectPtr<void>& TargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalShipAIController.Target"); }
    float& TargetingDistanceReductionFactorExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TargetingDistanceReductionFactorExponent"); }
    float& TargetingDistanceReductionFactorLinearField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.TargetingDistanceReductionFactorLinear"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.TargetingTeam"); }
    TObjectPtr<USceneComponent>& TransformComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalShipAIController.TransformComponent"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalShipAIController.UpdateOverlapsMethodDuringLevelStreaming"); }
    double& UseHigherTamedTargetingRangeOverrideUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalShipAIController.UseHigherTamedTargetingRangeOverrideUntilTime"); }
    float& WanderConeHalfAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderConeHalfAngle"); }
    float& WanderFixedDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderFixedDistanceAmount"); }
    float& WanderFlyingClampZHeightAboveGroundField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderFlyingClampZHeightAboveGround"); }
    float& WanderFlyingMinZHeightAboveGroundField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderFlyingMinZHeightAboveGround"); }
    float& WanderFlyingZScalerField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderFlyingZScaler"); }
    float& WanderRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderRadius"); }
    float& WanderRandomDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WanderRandomDistanceAmount"); }
    float& WildAboveDeltaZTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WildAboveDeltaZTargetingRange"); }
    float& WildBelowDeltaZTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalShipAIController.WildBelowDeltaZTargetingRange"); }
    TArray<void*>& WildTargetingDesireMultiplierClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.WildTargetingDesireMultiplierClasses"); }
    TArray<void*>& WildTargetingDesireMultiplierValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalShipAIController.WildTargetingDesireMultiplierValues"); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAllowDinoToTargetShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowDinoToTargetShips")); }
    BrzCampoPonteiro bAllowForceFleeToSameTargetingTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowForceFleeToSameTargetingTeam")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowStrafeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowStrafe")); }
    BrzCampoPonteiro bAllowSwimWanderingForLandDinosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowSwimWanderingForLandDinos")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bAlwaysStartledWhenAggroedByNeighborField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAlwaysStartledWhenAggroedByNeighbor")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAttachToPawn")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttackForcesRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAttackForcesRunning")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCanBeInCluster")); }
    BrzCampoPonteiro bCanPossessWithoutAuthorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCanPossessWithoutAuthority")); }
    BrzCampoPonteiro bCanUseAttackStateOnTargetChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCanUseAttackStateOnTargetChange")); }
    BrzCampoPonteiro bCheckBuffTargetingDesireOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCheckBuffTargetingDesireOverride")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bCollideWhenPlacing")); }
    BrzCampoPonteiro bDebugPathingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDebugPathing")); }
    BrzCampoPonteiro bDeferredTickModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDeferredTickMode")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDisableForceFleeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDisableForceFlee")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDontWanderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bDontWander")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bExchangedRoles")); }
    BrzCampoPonteiro bExecutingRotateToFaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bExecutingRotateToFace")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bFleeOnCriticalHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFleeOnCriticalHealth")); }
    BrzCampoPonteiro bFlyerAllowWaterTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFlyerAllowWaterTargeting")); }
    BrzCampoPonteiro bFlyerWanderDefaultToOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFlyerWanderDefaultToOrigin")); }
    BrzCampoPonteiro bFlyingUseMoveAroundBlockadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFlyingUseMoveAroundBlockade")); }
    BrzCampoPonteiro bFocusOnTargetDuringAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bFocusOnTargetDuringAttack")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForceOnlyTargetingPlayerOrTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceOnlyTargetingPlayerOrTamed")); }
    BrzCampoPonteiro bForceOnlyTargetingPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceOnlyTargetingPlayers")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceTargetDinoRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceTargetDinoRider")); }
    BrzCampoPonteiro bForceTargetingAllStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForceTargetingAllStructures")); }
    BrzCampoPonteiro bForcedAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForcedAggro")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bHidden")); }
    BrzCampoPonteiro bIgnoreMoveAroundBlockadeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIgnoreMoveAroundBlockade")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreWaterOrAmphibiousTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIgnoreWaterOrAmphibiousTargets")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsInvincible")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsMapActor")); }
    BrzCampoPonteiro bIsMissionDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsMissionDino")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLOSflagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bLOSflag")); }
    BrzCampoPonteiro bLastRequestedMoveToLocationWasPlayerCommandField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bLastRequestedMoveToLocationWasPlayerCommand")); }
    BrzCampoPonteiro bLeadMovingTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bLeadMovingTargets")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNotAllowedToFindTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNotAllowedToFindTargets")); }
    BrzCampoPonteiro bNotifyBPTargetSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bNotifyBPTargetSet")); }
    bool& bNotifyNeighborsWithoutDamageField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bNotifyNeighborsWithoutDamage"); }
    BrzCampoPonteiro bOnlyForceFleeUnderHealthPercentageIfWildField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bOnlyForceFleeUnderHealthPercentageIfWild")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bOnlyInitialReplication")); }
    bool& bOnlyOverlapTargetCorpsesUnlessHasTargetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bOnlyOverlapTargetCorpsesUnlessHasTarget"); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyTargetShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bOnlyTargetShips")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bPreventSaving")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bReplicates")); }
    BrzCampoPonteiro bRequireAbsoluteDamageForNeighborNotificationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRequireAbsoluteDamageForNeighborNotification")); }
    BrzCampoPonteiro bRidingDinoTargetPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRidingDinoTargetPlayer")); }
    BrzCampoPonteiro bRidingPlayerTargetDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bRidingPlayerTargetDino")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bSavedWhenStasised")); }
    BrzCampoPonteiro bSetControlRotationFromPawnOrientationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bSetControlRotationFromPawnOrientation")); }
    BrzCampoPonteiro bSkipExtraLOSChecksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bSkipExtraLOSChecks")); }
    BrzCampoPonteiro bStartAILogicOnPossessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bStartAILogicOnPossess")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bStasised")); }
    BrzCampoPonteiro bStopAILogicOnUnpossesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bStopAILogicOnUnposses")); }
    BrzCampoPonteiro bStopMassMovingWithTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bStopMassMovingWithTarget")); }
    BrzCampoPonteiro bTargetChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bTargetChanged")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bTearOff")); }
    BrzCampoPonteiro bTotallyIgnoreWaterTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bTotallyIgnoreWaterTargets")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseAggro")); }
    bool& bUseAlternateMovePointField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bUseAlternateMovePoint"); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPAdjustTargetingDesireForActorOutOfLimitVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPAdjustTargetingDesireForActorOutOfLimitVolume")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPForceAlternateAttackPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPForceAlternateAttackPoint")); }
    BrzCampoPonteiro bUseBPForceTargetDinoRiderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPForceTargetDinoRider")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPOnSetHasAttackPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPOnSetHasAttackPriority")); }
    BrzCampoPonteiro bUseBPOverrideIgnoredByWildDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPOverrideIgnoredByWildDino")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventStartleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPPreventStartle")); }
    BrzCampoPonteiro bUseBPSetupFindTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPSetupFindTarget")); }
    bool& bUseBPShouldNotifyAnyNeighborField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bUseBPShouldNotifyAnyNeighbor"); }
    BrzCampoPonteiro bUseBPShouldNotifyNeighborField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPShouldNotifyNeighbor")); }
    BrzCampoPonteiro bUseBPTargetingDesireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPTargetingDesire")); }
    BrzCampoPonteiro bUseBPUpdateBestTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPUpdateBestTarget")); }
    BrzCampoPonteiro bUseBPWantsAttackPriorityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBPWantsAttackPriority")); }
    BrzCampoPonteiro bUseBP_TamedOverrideHorizontalLandingRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseBP_TamedOverrideHorizontalLandingRange")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCombatMoveTowardsTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseCombatMoveTowardsTargetOffset")); }
    BrzCampoPonteiro bUseFlyingTargetOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseFlyingTargetOffsets")); }
    BrzCampoPonteiro bUseGeometryInsteadOfStationObjForFreeDepthTestField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseGeometryInsteadOfStationObjForFreeDepthTest")); }
    BrzCampoPonteiro bUseImprovedAggroFalloffBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseImprovedAggroFalloffBehavior")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOverlapTargetCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseOverlapTargetCheck")); }
    BrzCampoPonteiro bUseOverlapTargetCheckTracesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseOverlapTargetCheckTraces")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUseStasisGrid")); }
    BrzCampoPonteiro bUse_BPOverrideLandingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bUse_BPOverrideLandingLocation")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsPlayerStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bWantsPlayerState")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bWantsServerThrottledTick")); }
    bool& bWaterDinoAllowUnsubmergedTargetsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bWaterDinoAllowUnsubmergedTargets"); }
    BrzCampoPonteiro bWildUseDeltaZTargetingForFlyerPawnOrBigDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalShipAIController.bWildUseDeltaZTargetingForFlyerPawnOrBigDino")); }
    BitFieldValue<bool, unsigned __int32> bLeadMovingTargets()
    { return { (void*)this, "bLeadMovingTargets" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSHIPAICONTROLLER_H
