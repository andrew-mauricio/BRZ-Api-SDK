// ==========================================================================
//  UShooterDamageType — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_H
#define BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterDamageType
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterDamageType"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.ApplyBuffToVictimCharacter(APrimalCharacter*,float,FDamageEvent,AController*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyBuffToVictimCharacter(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UShooterDamageType.ApplyBuffToVictimCharacter(APrimalCharacter*,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.ApplyEffectToVictimStructure(APrimalStructure*,AActor*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ApplyEffectToVictimStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UShooterDamageType.ApplyEffectToVictimStructure(APrimalStructure*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.BPAdjustAggro(APrimalDinoAIController*,APrimalCharacter*,float,float,FDamageE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPAdjustAggro(void* a0, void* a1, float a2, float a3, void* a4, void* a5, void* a6) const
    {
        return NativeCall<void*, void*, void*, float, float, void*, void*, void*>(this, "UShooterDamageType.BPAdjustAggro(APrimalDinoAIController*,APrimalCharacter*,float,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.BPAdjustDamage(AActor*,float,FDamageEvent,AController*,AActor*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPAdjustDamage(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UShooterDamageType.BPAdjustDamage(AActor*,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.BPAdjustHarvestingDamage(AActor*,float,FDamageEvent,AController*,AActor*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPAdjustHarvestingDamage(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UShooterDamageType.BPAdjustHarvestingDamage(AActor*,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.OverrideBuffToGiveVictimCharacter(APrimalCharacter*,float,FDamageEvent,AContr
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideBuffToGiveVictimCharacter(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UShooterDamageType.OverrideBuffToGiveVictimCharacter(APrimalCharacter*,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterDamageType.OverrideBuffToGiveVictimCharacter_Implementation(APrimalCharacter*,float,FDam
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideBuffToGiveVictimCharacter_Implementation(void* a0, float a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, float, void*, void*, void*>(this, "UShooterDamageType.OverrideBuffToGiveVictimCharacter_Implementation(APrimalCharacter*,float,FDamageEvent,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    float& ArmorDurabilityDegradationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.ArmorDurabilityDegradationMultiplier"); }
    BrzCampoPonteiro BuffToGiveVictimCharacterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.BuffToGiveVictimCharacter")); }
    BrzCampoPonteiro DamageCharacterStatusValueModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.DamageCharacterStatusValueModifiers")); }
    float& DamageFalloffField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageFalloff"); }
    BrzCampoPonteiro DamageIgnoreActorClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.DamageIgnoreActorClasses")); }
    float& DamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageImpulse"); }
    float& DamageInstigatorPercentageField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageInstigatorPercentage"); }
    BrzCampoPonteiro DamageOnlyActorClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.DamageOnlyActorClasses")); }
    float& DamageTorpidityIncreaseMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DamageTorpidityIncreaseMultiplier"); }
    float& DefaultImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DefaultImpulse"); }
    float& DestructibleDamageSpreadScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DestructibleDamageSpreadScale"); }
    float& DestructibleImpulseField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DestructibleImpulse"); }
    float& DestructibleImpulseScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.DestructibleImpulseScale"); }
    float& GeneralDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.GeneralDamageArmorEffectiveness"); }
    BrzCampoPonteiro HitForceFeedbackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.HitForceFeedback")); }
    BrzCampoPonteiro HitTargetableActorImpactEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.HitTargetableActorImpactEffects")); }
    float& ImpulseMinimumZPercentField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.ImpulseMinimumZPercent"); }
    float& ImpulseRagdollScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.ImpulseRagdollScale"); }
    BrzCampoPonteiro InvalidHarvestOverrideDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.InvalidHarvestOverrideDamageType")); }
    BrzCampoPonteiro KillIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.KillIcon")); }
    BrzCampoPonteiro KilledForceFeedbackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.KilledForceFeedback")); }
    float& MassScaleDamageImpulseExponentField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.MassScaleDamageImpulseExponent"); }
    BrzCampoPonteiro OverrideDamageForResourceHarvestingDamageTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.OverrideDamageForResourceHarvestingDamageTypes")); }
    BrzCampoPonteiro OverrideDamageForResourceHarvestingItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.OverrideDamageForResourceHarvestingItems")); }
    BrzCampoPonteiro OverrideDamageHarvestEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.OverrideDamageHarvestEntries")); }
    float& PercentTrueDamageField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.PercentTrueDamage"); }
    float& PointDamageArmorEffectivenessField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.PointDamageArmorEffectiveness"); }
    float& RadialPartiallyObstructedDamagePercentField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.RadialPartiallyObstructedDamagePercent"); }
    FName& StructureEffectToApplyField() const
    { return *GetNativePointerField<FName*>(this, "UShooterDamageType.StructureEffectToApply"); }
    BrzCampoPonteiro TargetClassDamageScalersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.TargetClassDamageScalers")); }
    float& UseSpecialDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.UseSpecialDamageInterval"); }
    float& WildDinoForcedAggroDurationField() const
    { return *GetNativePointerField<float*>(this, "UShooterDamageType.WildDinoForcedAggroDuration"); }
    BrzCampoPonteiro bAllowDamageCorpsesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bAllowDamageCorpses")); }
    BrzCampoPonteiro bAllowPerBoneDamageAdjustmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bAllowPerBoneDamageAdjustment")); }
    BrzCampoPonteiro bAllowShieldBlockAllPointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bAllowShieldBlockAllPointDamage")); }
    BrzCampoPonteiro bApplyBuffOnKillingDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bApplyBuffOnKillingDamage")); }
    BrzCampoPonteiro bApplyMomentumToBigPawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bApplyMomentumToBigPawns")); }
    BrzCampoPonteiro bAutoDragDeadDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bAutoDragDeadDino")); }
    BrzCampoPonteiro bCausedByWorldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bCausedByWorld")); }
    BrzCampoPonteiro bDamageImpulseOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDamageImpulseOnly")); }
    BrzCampoPonteiro bDamageInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDamageInstigator")); }
    BrzCampoPonteiro bDamageProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDamageProjectiles")); }
    BrzCampoPonteiro bDestroyOnKillField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDestroyOnKill")); }
    BrzCampoPonteiro bDinoDamageCauserAllowSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDinoDamageCauserAllowSameTeam")); }
    BrzCampoPonteiro bDinoOnDinoDamageCauserAllowSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDinoOnDinoDamageCauserAllowSameTeam")); }
    BrzCampoPonteiro bDisplayHitMarkerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDisplayHitMarker")); }
    BrzCampoPonteiro bDontActuallyDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bDontActuallyDealDamage")); }
    BrzCampoPonteiro bForceAllowFriendlyFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bForceAllowFriendlyFire")); }
    BrzCampoPonteiro bForceAllowPvEDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bForceAllowPvEDamage")); }
    BrzCampoPonteiro bForceGeneralArmorUsageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bForceGeneralArmorUsage")); }
    BrzCampoPonteiro bForceRespawnCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bForceRespawnCooldown")); }
    BrzCampoPonteiro bHarvestDamageWithNoResourceGrabField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bHarvestDamageWithNoResourceGrab")); }
    BrzCampoPonteiro bHasRiderIgnoreDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bHasRiderIgnoreDamage")); }
    BrzCampoPonteiro bHitMarkerPlaySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bHitMarkerPlaySound")); }
    BrzCampoPonteiro bIgnoreDinoFlyersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIgnoreDinoFlyers")); }
    BrzCampoPonteiro bImpulseAffectsLivePawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bImpulseAffectsLivePawns")); }
    BrzCampoPonteiro bImpulseResetsDinoVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bImpulseResetsDinoVelocity")); }
    BrzCampoPonteiro bIsInstantDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIsInstantDamage")); }
    BrzCampoPonteiro bIsMeleeDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIsMeleeDamage")); }
    BrzCampoPonteiro bIsPassiveDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIsPassiveDamage")); }
    BrzCampoPonteiro bIsPhysicalDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIsPhysicalDamage")); }
    BrzCampoPonteiro bIsTurretDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bIsTurretDamage")); }
    BrzCampoPonteiro bNoFriendlyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bNoFriendlyDamage")); }
    BrzCampoPonteiro bOnlyApplyDamageTorpidityToPlayersAndTamesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bOnlyApplyDamageTorpidityToPlayersAndTames")); }
    BrzCampoPonteiro bOnlyGiveBuffToDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bOnlyGiveBuffToDino")); }
    BrzCampoPonteiro bOnlyGiveBuffToPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bOnlyGiveBuffToPlayer")); }
    BrzCampoPonteiro bOnlyGiveBuffToPlayerOrTamedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bOnlyGiveBuffToPlayerOrTamed")); }
    BrzCampoPonteiro bPreventDefaultTargetHurtEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventDefaultTargetHurtEffect")); }
    BrzCampoPonteiro bPreventDinoKillVictimItemCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventDinoKillVictimItemCollection")); }
    BrzCampoPonteiro bPreventHitPawnEffectsFromLocalInstigatorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventHitPawnEffectsFromLocalInstigator")); }
    BrzCampoPonteiro bPreventHurtAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventHurtAnim")); }
    BrzCampoPonteiro bPreventHurtSoundAndCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventHurtSoundAndCameraShake")); }
    BrzCampoPonteiro bPreventMeleeHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventMeleeHarvesting")); }
    BrzCampoPonteiro bPreventMomentumWhenFallingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventMomentumWhenFalling")); }
    BrzCampoPonteiro bPreventPointDamageShieldBlockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bPreventPointDamageShieldBlock")); }
    BrzCampoPonteiro bRadialDamageVelChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bRadialDamageVelChange")); }
    BrzCampoPonteiro bRiderIgnoreDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bRiderIgnoreDamage")); }
    BrzCampoPonteiro bScaleMomentumByMassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bScaleMomentumByMass")); }
    BrzCampoPonteiro bUseBPAdjustAggroField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bUseBPAdjustAggro")); }
    BrzCampoPonteiro bUseBPAdjustDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bUseBPAdjustDamage")); }
    BrzCampoPonteiro bUseBPAdjustHarvestingDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bUseBPAdjustHarvestingDamage")); }
    BrzCampoPonteiro bUseOverrideDamageHarvestEntriesForValidHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterDamageType.bUseOverrideDamageHarvestEntriesForValidHarvesting")); }
    BitFieldValue<bool, unsigned __int32> bAllowDamageCorpses()
    { return { (void*)this, "bAllowDamageCorpses" }; }
    BitFieldValue<bool, unsigned __int32> bAllowShieldBlockAllPointDamage()
    { return { (void*)this, "bAllowShieldBlockAllPointDamage" }; }
    BitFieldValue<bool, unsigned __int32> bApplyBuffOnKillingDamage()
    { return { (void*)this, "bApplyBuffOnKillingDamage" }; }
    BitFieldValue<bool, unsigned __int32> bApplyMomentumToBigPawns()
    { return { (void*)this, "bApplyMomentumToBigPawns" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDragDeadDino()
    { return { (void*)this, "bAutoDragDeadDino" }; }
    BitFieldValue<bool, unsigned __int32> bDamageImpulseOnly()
    { return { (void*)this, "bDamageImpulseOnly" }; }
    BitFieldValue<bool, unsigned __int32> bDamageInstigator()
    { return { (void*)this, "bDamageInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bDamageProjectiles()
    { return { (void*)this, "bDamageProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnKill()
    { return { (void*)this, "bDestroyOnKill" }; }
    BitFieldValue<bool, unsigned __int32> bDinoDamageCauserAllowSameTeam()
    { return { (void*)this, "bDinoDamageCauserAllowSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bDinoOnDinoDamageCauserAllowSameTeam()
    { return { (void*)this, "bDinoOnDinoDamageCauserAllowSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayHitMarker()
    { return { (void*)this, "bDisplayHitMarker" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyDealDamage()
    { return { (void*)this, "bDontActuallyDealDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowFriendlyFire()
    { return { (void*)this, "bForceAllowFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowPvEDamage()
    { return { (void*)this, "bForceAllowPvEDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceGeneralArmorUsage()
    { return { (void*)this, "bForceGeneralArmorUsage" }; }
    BitFieldValue<bool, unsigned __int32> bForceRespawnCooldown()
    { return { (void*)this, "bForceRespawnCooldown" }; }
    BitFieldValue<bool, unsigned __int32> bHarvestDamageWithNoResourceGrab()
    { return { (void*)this, "bHarvestDamageWithNoResourceGrab" }; }
    BitFieldValue<bool, unsigned __int32> bHasRiderIgnoreDamage()
    { return { (void*)this, "bHasRiderIgnoreDamage" }; }
    BitFieldValue<bool, unsigned __int32> bHitMarkerPlaySound()
    { return { (void*)this, "bHitMarkerPlaySound" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDinoFlyers()
    { return { (void*)this, "bIgnoreDinoFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bImpulseResetsDinoVelocity()
    { return { (void*)this, "bImpulseResetsDinoVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bIsInstantDamage()
    { return { (void*)this, "bIsInstantDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeleeDamage()
    { return { (void*)this, "bIsMeleeDamage" }; }
    BitFieldValue<bool, unsigned __int32> bIsTurretDamage()
    { return { (void*)this, "bIsTurretDamage" }; }
    BitFieldValue<bool, unsigned __int32> bNoFriendlyDamage()
    { return { (void*)this, "bNoFriendlyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyApplyDamageTorpidityToPlayersAndTames()
    { return { (void*)this, "bOnlyApplyDamageTorpidityToPlayersAndTames" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToDino()
    { return { (void*)this, "bOnlyGiveBuffToDino" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToPlayer()
    { return { (void*)this, "bOnlyGiveBuffToPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyGiveBuffToPlayerOrTamed()
    { return { (void*)this, "bOnlyGiveBuffToPlayerOrTamed" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDefaultTargetHurtEffect()
    { return { (void*)this, "bPreventDefaultTargetHurtEffect" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDinoKillVictimItemCollection()
    { return { (void*)this, "bPreventDinoKillVictimItemCollection" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHitPawnEffectsFromLocalInstigator()
    { return { (void*)this, "bPreventHitPawnEffectsFromLocalInstigator" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHurtAnim()
    { return { (void*)this, "bPreventHurtAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHurtSoundAndCameraShake()
    { return { (void*)this, "bPreventHurtSoundAndCameraShake" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMeleeHarvesting()
    { return { (void*)this, "bPreventMeleeHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMomentumWhenFalling()
    { return { (void*)this, "bPreventMomentumWhenFalling" }; }
    BitFieldValue<bool, unsigned __int32> bPreventPointDamageShieldBlock()
    { return { (void*)this, "bPreventPointDamageShieldBlock" }; }
    BitFieldValue<bool, unsigned __int32> bRiderIgnoreDamage()
    { return { (void*)this, "bRiderIgnoreDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustAggro()
    { return { (void*)this, "bUseBPAdjustAggro" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustDamage()
    { return { (void*)this, "bUseBPAdjustDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustHarvestingDamage()
    { return { (void*)this, "bUseBPAdjustHarvestingDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverrideDamageHarvestEntriesForValidHarvesting()
    { return { (void*)this, "bUseOverrideDamageHarvestEntriesForValidHarvesting" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERDAMAGETYPE_H
