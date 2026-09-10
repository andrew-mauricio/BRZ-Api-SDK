// ==========================================================================
//  AShooterProjectile_Swarm — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPROJECTILE_SWARM_H
#define BRZ_SDK_JOGO_ASHOOTERPROJECTILE_SWARM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UParticleSystem;
struct UParticleSystemComponent;
struct USceneComponent;

#include "AShooterProjectile.h"

struct AShooterProjectile_Swarm : public AShooterProjectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterProjectile_Swarm"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.BPGetBoidSpawnLocationAndVelocity(int,FBoid&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    void BPGetBoidSpawnLocationAndVelocity(int a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, int, void*, void*, void*>(this, "AShooterProjectile_Swarm.BPGetBoidSpawnLocationAndVelocity(int,FBoid&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterProjectile_Swarm.BPOnBoidExplode(int,UFXSystemComponent*,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void BPOnBoidExplode(int a0, void* a1, void* a2) const
    {
        NativeCall<void, int, void*, void*>(this, "AShooterProjectile_Swarm.BPOnBoidExplode(int,UFXSystemComponent*,FHitResult&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterProjectile_Swarm.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.DelayedSpawnBoids()
    // endereco: casamento de bytes com a build de referencia
    void DelayedSpawnBoids() const
    {
        NativeCall<void>(this, "AShooterProjectile_Swarm.DelayedSpawnBoids()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.Destroy(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool Destroy(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "AShooterProjectile_Swarm.Destroy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.DoSwarmSync()
    // endereco: cache_pdb_25090264
    void DoSwarmSync() const
    {
        NativeCall<void>(this, "AShooterProjectile_Swarm.DoSwarmSync()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterProjectile_Swarm.GetNumberOfBoidsInFlight()
    // endereco: cache_pdb_25090264
    int GetNumberOfBoidsInFlight() const
    {
        return NativeCall<int>(this, "AShooterProjectile_Swarm.GetNumberOfBoidsInFlight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Swarm.LifeSpanExpired()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=347]]
    BrzPonteiro LifeSpanExpired() const
    {
        return NativeCall<void*>(this, "AShooterProjectile_Swarm.LifeSpanExpired()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed(UE::Math::TVector<double>,double)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiPrimaryProjectileDestroyed(void* a0, double a1) const
    {
        return NativeCall<void*, void*, double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed(UE::Math::TVector<double>,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed_Implementation(UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    void MultiPrimaryProjectileDestroyed_Implementation(void* a0, double a1) const
    {
        NativeCall<void, void*, double>(this, "AShooterProjectile_Swarm.MultiPrimaryProjectileDestroyed_Implementation(UE::Math::TVector<double>,double)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile_Swarm.MultiSyncSwarm(TArray<FBoid,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiSyncSwarm(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile_Swarm.MultiSyncSwarm(TArray<FBoid,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.MultiSyncSwarm_Implementation(TArray<FBoid,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    void MultiSyncSwarm_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile_Swarm.MultiSyncSwarm_Implementation(TArray<FBoid,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.SpawnSwarm()
    // endereco: casamento de bytes com a build de referencia
    void SpawnSwarm() const
    {
        NativeCall<void>(this, "AShooterProjectile_Swarm.SpawnSwarm()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile_Swarm.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterProjectile_Swarm.Tick(float)", a0);
    }

    float& BoidCollisionRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidCollisionRadius"); }
    TArray<void*>& BoidExplodeTimesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Swarm.BoidExplodeTimes"); }
    float& BoidInitialDisableCollisionTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialDisableCollisionTime"); }
    float& BoidInitialFollowProjectileTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidInitialFollowProjectileTime"); }
    float& BoidSpawnIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.BoidSpawnInterval"); }
    TArray<void*>& BoidSpawnTimesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Swarm.BoidSpawnTimes"); }
    float& CrazinessMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.CrazinessMultiplier"); }
    float& DynamicAvoidanceDurationField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.DynamicAvoidanceDuration"); }
    TArray<void*>& FlockingWhitelistField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile_Swarm.FlockingWhitelist"); }
    BrzCampoPonteiro LaunchArcField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.LaunchArc")); }
    float& LifespanAfterImpactField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.LifespanAfterImpact"); }
    float& ProjectileImpactTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectileImpactTime"); }
    float& ProjectilePeakTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.ProjectilePeakTime"); }
    double& ProjectileSpawnTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile_Swarm.ProjectileSpawnTime"); }
    BrzCampoPonteiro SwarmBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmBehavior")); }
    TArray<UParticleSystemComponent*>& SwarmCompsField() const
    { return *GetNativePointerField<TArray<UParticleSystemComponent*>*>(this, "AShooterProjectile_Swarm.SwarmComps"); }
    BrzCampoPonteiro SwarmDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmData")); }
    float& SwarmDelayedStartTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmDelayedStartTime"); }
    BrzCampoPonteiro SwarmInitialSpeedRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmInitialSpeedRange")); }
    int& SwarmLeaderCountField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmLeaderCount"); }
    float& SwarmLifetimeAfterPrimaryProjectileDestructionField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmLifetimeAfterPrimaryProjectileDestruction"); }
    BrzCampoPonteiro SwarmMaxForceRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmMaxForceRange")); }
    BrzCampoPonteiro SwarmMaxSpeedRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmMaxSpeedRange")); }
    float& SwarmOpacityFadeTimeOnBoidImpactField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmOpacityFadeTimeOnBoidImpact"); }
    FName& SwarmOpacityParticleParamNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile_Swarm.SwarmOpacityParticleParamName"); }
    UParticleSystem*& SwarmParticleSystemField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterProjectile_Swarm.SwarmParticleSystem"); }
    BrzCampoPonteiro SwarmPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmPersistentData")); }
    USceneComponent*& SwarmRootField() const
    { return *GetNativePointerField<USceneComponent**>(this, "AShooterProjectile_Swarm.SwarmRoot"); }
    int& SwarmSizeField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile_Swarm.SwarmSize"); }
    float& SwarmSpawnRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmSpawnRadius"); }
    float& SwarmTargetHelixSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetHelixSpeed"); }
    float& SwarmTargetRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile_Swarm.SwarmTargetRadius"); }
    BrzCampoPonteiro SwarmTurnRateRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.SwarmTurnRateRange")); }
    //  no cache antigo este campo se chamava bPrimaryProjectileDestroyed.
    //  nesta build ele e' `ProjectilePeakTime` — resolve por NOME.
    BrzCampoPonteiro bPrimaryProjectileDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile_Swarm.ProjectilePeakTime")); }
    BitFieldValue<bool, unsigned __int32> bFadeOutSwarmOverProjectileLife()
    { return { (void*)this, "bFadeOutSwarmOverProjectileLife" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBoidSpawnLocationAndVelocity()
    { return { (void*)this, "bUseBPGetBoidSpawnLocationAndVelocity" }; }
    BitFieldValue<bool, unsigned __int32> bUseCrazinessMultiplier()
    { return { (void*)this, "bUseCrazinessMultiplier" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPROJECTILE_SWARM_H
