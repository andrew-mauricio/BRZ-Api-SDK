// ==========================================================================
//  FDinoAttackInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOATTACKINFO_H
#define BRZ_SDK_JOGO_FDINOATTACKINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UPrimalAIState;


struct FDinoAttackInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoAttackInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FDinoAttackInfo.operator=(FDinoAttackInfo&&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=2055+bytes40+grafo=7/7]]
    BrzPonteiro operator_(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FDinoAttackInfo.operator=(FDinoAttackInfo&&)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    FDinoAttackInfo.operator=(FDinoAttackInfo&)
    //      (colide com FDinoAttackInfo.operator=(FDinoAttackInfo&&))

    float& ActivateAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.ActivateAttackRange"); }
    TArray<void*>& AttackAnimDamageImpactFXSocketNamesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.AttackAnimDamageImpactFXSocketNames"); }
    TArray<void*>& AttackAnimationWeightsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.AttackAnimationWeights"); }
    TArray<UAnimMontage*>& AttackAnimationsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "FDinoAttackInfo.AttackAnimations"); }
    TArray<void*>& AttackAnimationsTimeFromEndToConsiderFinishedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.AttackAnimationsTimeFromEndToConsiderFinished"); }
    float& AttackIntervalField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackInterval"); }
    FName& AttackNameField() const
    { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.AttackName"); }
    float& AttackOffsetField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackOffset"); }
    float& AttackRangeField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRange"); }
    float& AttackRotationGroundSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationGroundSpeedMultiplier"); }
    float& AttackRotationRangeDegreesField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRotationRangeDegrees"); }
    BrzCampoPonteiro AttackRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoAttackInfo.AttackRotationRate")); }
    float& AttackRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackRunningSpeedModifier"); }
    float& AttackSelectionExpirationTimeField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackSelectionExpirationTime"); }
    double& AttackSelectionTimeField() const
    { return *GetNativePointerField<double*>(this, "FDinoAttackInfo.AttackSelectionTime"); }
    UPrimalAIState*& AttackStateTypeField() const
    { return *GetNativePointerField<UPrimalAIState**>(this, "FDinoAttackInfo.AttackStateType"); }
    BrzCampoPonteiro AttackStateTypeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoAttackInfo.AttackStateTypeClass")); }
    float& AttackWeightField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWeight"); }
    float& AttackWithJumpChanceField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.AttackWithJumpChance"); }
    TArray<void*>& ChildStateIndexesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.ChildStateIndexes"); }
    float& DotProductCheckMaxField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMax"); }
    float& DotProductCheckMinField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.DotProductCheckMin"); }
    double& LastAttackTimeField() const
    { return *GetNativePointerField<double*>(this, "FDinoAttackInfo.LastAttackTime"); }
    double& LastProjectileSpawnTimeField() const
    { return *GetNativePointerField<double*>(this, "FDinoAttackInfo.LastProjectileSpawnTime"); }
    TArray<void*>& LastSocketPositionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.LastSocketPositions"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "FDinoAttackInfo.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoAttackInfo.MeleeDamageType")); }
    float& MeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MeleeSwingRadius"); }
    TArray<void*>& MeleeSwingSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FDinoAttackInfo.MeleeSwingSockets"); }
    float& MinAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.MinAttackRange"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoAttackInfo.ProjectileClass")); }
    FName& RangedSocketField() const
    { return *GetNativePointerField<FName*>(this, "FDinoAttackInfo.RangedSocket"); }
    float& RiderAttackIntervalField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.RiderAttackInterval"); }
    double& RiderLastAttackTimeField() const
    { return *GetNativePointerField<double*>(this, "FDinoAttackInfo.RiderLastAttackTime"); }
    float& SetAttackTargetTimeField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SetAttackTargetTime"); }
    float& StaminaCostField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.StaminaCost"); }
    float& SwimmingAttackRunningSpeedModifierField() const
    { return *GetNativePointerField<float*>(this, "FDinoAttackInfo.SwimmingAttackRunningSpeedModifier"); }
    BitFieldValue<bool, unsigned __int32> bHighQualityAttack()
    { return { (void*)this, "bHighQualityAttack" }; }
    BitFieldValue<bool, unsigned __int32> bSkipUntamed()
    { return { (void*)this, "bSkipUntamed" }; }
    BitFieldValue<bool, unsigned __int32> bSkipTamed()
    { return { (void*)this, "bSkipTamed" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOnWildDinos()
    { return { (void*)this, "bOnlyOnWildDinos" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWhenEncumbered()
    { return { (void*)this, "bPreventWhenEncumbered" }; }
    BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowOnGround()
    { return { (void*)this, "bRidingOnlyAllowOnGround" }; }
    BitFieldValue<bool, unsigned __int32> bRidingOnlyAllowWhileFlying()
    { return { (void*)this, "bRidingOnlyAllowWhileFlying" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayersOrRiders()
    { return { (void*)this, "bOnlyUseWithPlayersOrRiders" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseWithPlayers()
    { return { (void*)this, "bOnlyUseWithPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWhenSwimming()
    { return { (void*)this, "bPreventWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWhenInsufficientStamina()
    { return { (void*)this, "bPreventWhenInsufficientStamina" }; }
    BitFieldValue<bool, unsigned __int32> bSkipOnFlyers()
    { return { (void*)this, "bSkipOnFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bSkipAI()
    { return { (void*)this, "bSkipAI" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnFemale()
    { return { (void*)this, "bPreventOnFemale" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnMale()
    { return { (void*)this, "bPreventOnMale" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWhenDinoCarrying()
    { return { (void*)this, "bPreventWhenDinoCarrying" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintCanRiderAttack()
    { return { (void*)this, "bUseBlueprintCanRiderAttack" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresWalking()
    { return { (void*)this, "bRequiresWalking" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresSwimming()
    { return { (void*)this, "bRequiresSwimming" }; }
    BitFieldValue<bool, unsigned __int32> AttackStatusStarted()
    { return { (void*)this, "AttackStatusStarted" }; }
    BitFieldValue<bool, unsigned __int32> bAttackStopsMovement()
    { return { (void*)this, "bAttackStopsMovement" }; }
    BitFieldValue<bool, unsigned __int32> bAttackStopsMovementAllowFalling()
    { return { (void*)this, "bAttackStopsMovementAllowFalling" }; }
    BitFieldValue<bool, unsigned __int32> bAttackWithJump()
    { return { (void*)this, "bAttackWithJump" }; }
    BitFieldValue<bool, unsigned __int32> bLocationBasedAttack()
    { return { (void*)this, "bLocationBasedAttack" }; }
    BitFieldValue<bool, unsigned __int32> bDropCarriedCharacter()
    { return { (void*)this, "bDropCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bCancelAndDropIfCarriedCharacter()
    { return { (void*)this, "bCancelAndDropIfCarriedCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAttackWhileRunning()
    { return { (void*)this, "bPreventAttackWhileRunning" }; }
    BitFieldValue<bool, unsigned __int32> ForceUpdateInRange()
    { return { (void*)this, "ForceUpdateInRange" }; }
    BitFieldValue<bool, unsigned __int32> ForceUpdateMeshSelf()
    { return { (void*)this, "ForceUpdateMeshSelf" }; }
    BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationInAir()
    { return { (void*)this, "bUseSecondaryAnimationInAir" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintCanAttack()
    { return { (void*)this, "bUseBlueprintCanAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAdjustOutputDamage()
    { return { (void*)this, "bUseBlueprintAdjustOutputDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRunningWhenAttacking()
    { return { (void*)this, "bDisableRunningWhenAttacking" }; }
    BitFieldValue<bool, unsigned __int32> bKeepExecutingWhenAcquiringTarget()
    { return { (void*)this, "bKeepExecutingWhenAcquiringTarget" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWithRider()
    { return { (void*)this, "bPreventWithRider" }; }
    BitFieldValue<bool, unsigned __int32> bAIForceAttackDotProductCheck()
    { return { (void*)this, "bAIForceAttackDotProductCheck" }; }
    BitFieldValue<bool, unsigned __int32> bInstantlyHarvestCorpse()
    { return { (void*)this, "bInstantlyHarvestCorpse" }; }
    BitFieldValue<bool, unsigned __int32> bAddPawnVelocityToProjectile()
    { return { (void*)this, "bAddPawnVelocityToProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bAttackStopsRotation()
    { return { (void*)this, "bAttackStopsRotation" }; }
    BitFieldValue<bool, unsigned __int32> bTamedAISpecialAttack()
    { return { (void*)this, "bTamedAISpecialAttack" }; }
    BitFieldValue<bool, unsigned __int32> bPreventWhenCarryingExplosive()
    { return { (void*)this, "bPreventWhenCarryingExplosive" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWhenAnimationPreventsInput()
    { return { (void*)this, "bAllowWhenAnimationPreventsInput" }; }
    BitFieldValue<bool, unsigned __int32> bRequireLineOfSight()
    { return { (void*)this, "bRequireLineOfSight" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideGetAttackAnimationIndex()
    { return { (void*)this, "bUseBPOverrideGetAttackAnimationIndex" }; }
    BitFieldValue<bool, unsigned __int32> bUseSecondaryAnimationWhenSwimming()
    { return { (void*)this, "bUseSecondaryAnimationWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bUseTertiaryAnimationWhenSwimming()
    { return { (void*)this, "bUseTertiaryAnimationWhenSwimming" }; }
    BitFieldValue<bool, unsigned __int32> bHighQualityAttackOnlyPlayerOrTamed()
    { return { (void*)this, "bHighQualityAttackOnlyPlayerOrTamed" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockers()
    { return { (void*)this, "bMeleeTraceForHitBlockers" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeTraceForHitBlockersAddHeadsocket()
    { return { (void*)this, "bMeleeTraceForHitBlockersAddHeadsocket" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreCrouchAttack()
    { return { (void*)this, "bIgnoreCrouchAttack" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreResettingAttackIndexInTick()
    { return { (void*)this, "bIgnoreResettingAttackIndexInTick" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSkippingAnimGraphDuringAttack()
    { return { (void*)this, "bPreventSkippingAnimGraphDuringAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseClosestSocketsForDamageImpactFX()
    { return { (void*)this, "bUseClosestSocketsForDamageImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bDisableAttackerDamageImpactFX()
    { return { (void*)this, "bDisableAttackerDamageImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bBasicAttack()
    { return { (void*)this, "bBasicAttack" }; }
    BitFieldValue<bool, unsigned __int32> bDisableControllerDesiredRotation()
    { return { (void*)this, "bDisableControllerDesiredRotation" }; }

};

#endif  // BRZ_SDK_JOGO_FDINOATTACKINFO_H
