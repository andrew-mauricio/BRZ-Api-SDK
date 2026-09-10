// ==========================================================================
//  AShooterWeapon_MeleeLock — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEELOCK_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEELOCK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterWeapon_Melee.h"

struct AShooterWeapon_MeleeLock : public AShooterWeapon_Melee
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_MeleeLock"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=76]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDama
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=41]]
    void DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, int, void*, float>(this, "AShooterWeapon_MeleeLock.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=281]]
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.DoMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    void DoMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.DoMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.EndMeleeAttack()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void EndMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.EndMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.GetWeaponAttackPlayRate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=86]]
    float GetWeaponAttackPlayRate() const
    {
        return NativeCall<float>(this, "AShooterWeapon_MeleeLock.GetWeaponAttackPlayRate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.OnRep_LockValue()
    // endereco: cache_pdb_25090264
    void OnRep_LockValue() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.OnRep_LockValue()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.PreMeleeAttackCheck()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void PreMeleeAttackCheck() const
    {
        NativeCall<void>(this, "AShooterWeapon_MeleeLock.PreMeleeAttackCheck()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_MeleeLock.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_MeleeLock.Tick(float)", a0);
    }

    unsigned char& AnimationRateCurveField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_MeleeLock.AnimationRateCurve"); }
    float& AttackAirImpulseField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackAirImpulse"); }
    float& AttackMoveDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveDuration"); }
    float& AttackMoveSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.AttackMoveSpeed"); }
    unsigned char& DamageCurveField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_MeleeLock.DamageCurve"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPowerThreshold` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1204; confianca alta)
    float& GetPullRangeField() const
    { return BrzCampoAncorado<float>(this, "MaxPowerThreshold", 16); }
    double& LastAttackTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_MeleeLock.LastAttackTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPowerThreshold` +4, medido na build 25090264
    //  (offset absoluto medido: 0x11F8; confianca alta)
    TWeakObjectPtr<void>& LastHitActorField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "MaxPowerThreshold", 4); }
    double& LastHitTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon_MeleeLock.LastHitTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPowerThreshold` +20, medido na build 25090264
    //  (offset absoluto medido: 0x1208; confianca alta)
    float& LastSentLockValueField() const
    { return BrzCampoAncorado<float>(this, "MaxPowerThreshold", 20); }
    float& LockDecayValueField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockDecayValue"); }
    float& LockHitIncrementField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockHitIncrement"); }
    float& LockMissDecrementField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockMissDecrement"); }
    float& LockTurnRateField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockTurnRate"); }
    float& LockVFXValueField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockVFXValue"); }
    float& LockValueField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.LockValue"); }
    float& MaxAnimationRateField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxAnimationRate"); }
    float& MaxDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxDamageMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxPowerThreshold` +12, medido na build 25090264
    //  (offset absoluto medido: 0x1200; confianca alta)
    float& MaxLockAngleCosField() const
    { return BrzCampoAncorado<float>(this, "MaxPowerThreshold", 12); }
    float& MaxLockTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxLockTime"); }
    float& MaxPowerThresholdField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPowerThreshold"); }
    float& MaxPullDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxPullDistance"); }
    float& MaxTargetDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MaxTargetDistance"); }
    float& MinAnimationRateField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinAnimationRate"); }
    float& MinDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinDamageMultiplier"); }
    float& MinPullDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.MinPullDistance"); }
    BrzCampoPonteiro OwnerBuff_MaxDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_MeleeLock.OwnerBuff_MaxDamage")); }
    float& TargetAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_MeleeLock.TargetAngle"); }
    BrzCampoPonteiro TargetBuff_MaxDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_MeleeLock.TargetBuff_MaxDamage")); }
    BitFieldValue<bool, unsigned __int32> HitThisAttack()
    { return { (void*)this, "HitThisAttack" }; }
    BitFieldValue<bool, unsigned __int32> bSteppingEnabled()
    { return { (void*)this, "bSteppingEnabled" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_MELEELOCK_H
