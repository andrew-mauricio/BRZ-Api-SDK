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
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [grafo=12/12]]
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
    // endereco: thunk
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=72+chamadores=2]]
    BrzPonteiro GetControlledShip() const
    {
        return NativeCall<void*>(this, "APrimalShipAIController.GetControlledShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.GetPursuitGoal(UE::Math::TVector<double>&)
    // endereco: thunk
    BrzPonteiro GetPursuitGoal(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalShipAIController.GetPursuitGoal(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.GetWanderDestination()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=110]]
    BrzPonteiro GetWanderDestination() const
    {
        return NativeCall<void*>(this, "APrimalShipAIController.GetWanderDestination()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalShipAIController.OnPossess(APawn*)
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> HasAttackPriority()
    { return { (void*)this, "HasAttackPriority" }; }
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
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoToTargetShips()
    { return { (void*)this, "bAllowDinoToTargetShips" }; }
    BitFieldValue<bool, unsigned __int32> bAllowForceFleeToSameTargetingTeam()
    { return { (void*)this, "bAllowForceFleeToSameTargetingTeam" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStrafe()
    { return { (void*)this, "bAllowStrafe" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSwimWanderingForLandDinos()
    { return { (void*)this, "bAllowSwimWanderingForLandDinos" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysStartledWhenAggroedByNeighbor()
    { return { (void*)this, "bAlwaysStartledWhenAggroedByNeighbor" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachToPawn()
    { return { (void*)this, "bAttachToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAttackForcesRunning()
    { return { (void*)this, "bAttackForcesRunning" }; }
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
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanPossessWithoutAuthority()
    { return { (void*)this, "bCanPossessWithoutAuthority" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseAttackStateOnTargetChange()
    { return { (void*)this, "bCanUseAttackStateOnTargetChange" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffTargetingDesireOverride()
    { return { (void*)this, "bCheckBuffTargetingDesireOverride" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPathing()
    { return { (void*)this, "bDebugPathing" }; }
    BitFieldValue<bool, unsigned __int32> bDeferredTickMode()
    { return { (void*)this, "bDeferredTickMode" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDisableForceFlee()
    { return { (void*)this, "bDisableForceFlee" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDontWander()
    { return { (void*)this, "bDontWander" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bExecutingRotateToFace()
    { return { (void*)this, "bExecutingRotateToFace" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bFleeOnCriticalHealth()
    { return { (void*)this, "bFleeOnCriticalHealth" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerAllowWaterTargeting()
    { return { (void*)this, "bFlyerAllowWaterTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerWanderDefaultToOrigin()
    { return { (void*)this, "bFlyerWanderDefaultToOrigin" }; }
    BitFieldValue<bool, unsigned __int32> bFlyingUseMoveAroundBlockade()
    { return { (void*)this, "bFlyingUseMoveAroundBlockade" }; }
    BitFieldValue<bool, unsigned __int32> bFocusOnTargetDuringAttack()
    { return { (void*)this, "bFocusOnTargetDuringAttack" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
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
    BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayerOrTamed()
    { return { (void*)this, "bForceOnlyTargetingPlayerOrTamed" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayers()
    { return { (void*)this, "bForceOnlyTargetingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetDinoRider()
    { return { (void*)this, "bForceTargetDinoRider" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetingAllStructures()
    { return { (void*)this, "bForceTargetingAllStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForcedAggro()
    { return { (void*)this, "bForcedAggro" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMoveAroundBlockade()
    { return { (void*)this, "bIgnoreMoveAroundBlockade" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWaterOrAmphibiousTargets()
    { return { (void*)this, "bIgnoreWaterOrAmphibiousTargets" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsMissionDino()
    { return { (void*)this, "bIsMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bLOSflag()
    { return { (void*)this, "bLOSflag" }; }
    BitFieldValue<bool, unsigned __int32> bLastRequestedMoveToLocationWasPlayerCommand()
    { return { (void*)this, "bLastRequestedMoveToLocationWasPlayerCommand" }; }
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
    BitFieldValue<bool, unsigned __int32> bNotAllowedToFindTargets()
    { return { (void*)this, "bNotAllowedToFindTargets" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyBPTargetSet()
    { return { (void*)this, "bNotifyBPTargetSet" }; }
    bool& bNotifyNeighborsWithoutDamageField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bNotifyNeighborsWithoutDamage"); }
    BitFieldValue<bool, unsigned __int32> bOnlyForceFleeUnderHealthPercentageIfWild()
    { return { (void*)this, "bOnlyForceFleeUnderHealthPercentageIfWild" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    bool& bOnlyOverlapTargetCorpsesUnlessHasTargetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bOnlyOverlapTargetCorpsesUnlessHasTarget"); }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTargetShips()
    { return { (void*)this, "bOnlyTargetShips" }; }
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
    BitFieldValue<bool, unsigned __int32> bRequireAbsoluteDamageForNeighborNotification()
    { return { (void*)this, "bRequireAbsoluteDamageForNeighborNotification" }; }
    BitFieldValue<bool, unsigned __int32> bRidingDinoTargetPlayer()
    { return { (void*)this, "bRidingDinoTargetPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bRidingPlayerTargetDino()
    { return { (void*)this, "bRidingPlayerTargetDino" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bSetControlRotationFromPawnOrientation()
    { return { (void*)this, "bSetControlRotationFromPawnOrientation" }; }
    BitFieldValue<bool, unsigned __int32> bSkipExtraLOSChecks()
    { return { (void*)this, "bSkipExtraLOSChecks" }; }
    BitFieldValue<bool, unsigned __int32> bStartAILogicOnPossess()
    { return { (void*)this, "bStartAILogicOnPossess" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStopAILogicOnUnposses()
    { return { (void*)this, "bStopAILogicOnUnposses" }; }
    BitFieldValue<bool, unsigned __int32> bStopMassMovingWithTarget()
    { return { (void*)this, "bStopMassMovingWithTarget" }; }
    BitFieldValue<bool, unsigned __int32> bTargetChanged()
    { return { (void*)this, "bTargetChanged" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTotallyIgnoreWaterTargets()
    { return { (void*)this, "bTotallyIgnoreWaterTargets" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAggro()
    { return { (void*)this, "bUseAggro" }; }
    bool& bUseAlternateMovePointField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bUseAlternateMovePoint"); }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustTargetingDesireForActorOutOfLimitVolume()
    { return { (void*)this, "bUseBPAdjustTargetingDesireForActorOutOfLimitVolume" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseBPForceAlternateAttackPoint()
    { return { (void*)this, "bUseBPForceAlternateAttackPoint" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceTargetDinoRider()
    { return { (void*)this, "bUseBPForceTargetDinoRider" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseBPOnSetHasAttackPriority()
    { return { (void*)this, "bUseBPOnSetHasAttackPriority" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIgnoredByWildDino()
    { return { (void*)this, "bUseBPOverrideIgnoredByWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStartle()
    { return { (void*)this, "bUseBPPreventStartle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupFindTarget()
    { return { (void*)this, "bUseBPSetupFindTarget" }; }
    bool& bUseBPShouldNotifyAnyNeighborField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bUseBPShouldNotifyAnyNeighbor"); }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldNotifyNeighbor()
    { return { (void*)this, "bUseBPShouldNotifyNeighbor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTargetingDesire()
    { return { (void*)this, "bUseBPTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateBestTarget()
    { return { (void*)this, "bUseBPUpdateBestTarget" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPWantsAttackPriority()
    { return { (void*)this, "bUseBPWantsAttackPriority" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_TamedOverrideHorizontalLandingRange()
    { return { (void*)this, "bUseBP_TamedOverrideHorizontalLandingRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCombatMoveTowardsTargetOffset()
    { return { (void*)this, "bUseCombatMoveTowardsTargetOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseFlyingTargetOffsets()
    { return { (void*)this, "bUseFlyingTargetOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bUseGeometryInsteadOfStationObjForFreeDepthTest()
    { return { (void*)this, "bUseGeometryInsteadOfStationObjForFreeDepthTest" }; }
    BitFieldValue<bool, unsigned __int32> bUseImprovedAggroFalloffBehavior()
    { return { (void*)this, "bUseImprovedAggroFalloffBehavior" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverlapTargetCheck()
    { return { (void*)this, "bUseOverlapTargetCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverlapTargetCheckTraces()
    { return { (void*)this, "bUseOverlapTargetCheckTraces" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUse_BPOverrideLandingLocation()
    { return { (void*)this, "bUse_BPOverrideLandingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPlayerState()
    { return { (void*)this, "bWantsPlayerState" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    bool& bWaterDinoAllowUnsubmergedTargetsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalShipAIController.bWaterDinoAllowUnsubmergedTargets"); }
    BitFieldValue<bool, unsigned __int32> bWildUseDeltaZTargetingForFlyerPawnOrBigDino()
    { return { (void*)this, "bWildUseDeltaZTargetingForFlyerPawnOrBigDino" }; }
    BitFieldValue<bool, unsigned __int32> bLeadMovingTargets()
    { return { (void*)this, "bLeadMovingTargets" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSHIPAICONTROLLER_H
