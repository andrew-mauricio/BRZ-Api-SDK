// ==========================================================================
//  AShooterProjectile — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERPROJECTILE_H
#define BRZ_SDK_JOGO_ASHOOTERPROJECTILE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct FHitResult;
struct UNiagaraSystem;
struct UParticleSystemComponent;
struct USoundCue;
struct USphereComponent;
struct UStaticMeshComponent;

#include "AActor.h"

struct AShooterProjectile : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterProjectile"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.AddInheritedVelocityToHitTarget(UE::Math::TVector<double>,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddInheritedVelocityToHitTarget(void* a0, void* a1, float a2, float a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, float, float, void*>(this, "AShooterProjectile.AddInheritedVelocityToHitTarget(UE::Math::TVector<double>,UE::Math::TVector<double>,float,float,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.AddMoveIgnoreActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void AddMoveIgnoreActor(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.AddMoveIgnoreActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ApplyDamageScalar(float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyDamageScalar(float a0) const
    {
        NativeCall<void, float>(this, "AShooterProjectile.ApplyDamageScalar(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ApplyExplosionDamageAndVFX(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ApplyExplosionDamageAndVFX(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterProjectile.ApplyExplosionDamageAndVFX(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.BPIgnoreRadialDamageVictim(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool BPIgnoreRadialDamageVictim(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterProjectile.BPIgnoreRadialDamageVictim(AActor*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterProjectile.BPProjectileBounced(FHitResult&,UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPProjectileBounced(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterProjectile.BPProjectileBounced(FHitResult&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.BPSpawnedFragments(TArray<AShooterProjectile*,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPSpawnedFragments(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile.BPSpawnedFragments(TArray<AShooterProjectile*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterProjectile.BPUpdateExplosionEmitter(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void BPUpdateExplosionEmitter(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.BPUpdateExplosionEmitter(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.BP_IgnoreProjectileImpact(FHitResult)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_IgnoreProjectileImpact(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile.BP_IgnoreProjectileImpact(FHitResult)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AShooterProjectile.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterProjectile.ClearHomingTarget()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=83]]
    void ClearHomingTarget() const
    {
        NativeCall<void>(this, "AShooterProjectile.ClearHomingTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterProjectile.ClientNetDestroy()
    // endereco: casamento de bytes com a build de referencia
    void ClientNetDestroy() const
    {
        NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ClientNetDestroy_Implementation()
    // endereco: cache_pdb_25090264
    void ClientNetDestroy_Implementation() const
    {
        NativeCall<void>(this, "AShooterProjectile.ClientNetDestroy_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ClientNetExplode(FHitResult)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClientNetExplode(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.ClientNetExplode(FHitResult)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ClientNetExplode_Implementation(FHitResult)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=70]]
    void ClientNetExplode_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.ClientNetExplode_Implementation(FHitResult)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.ClientNetImpactFX(FHitResult)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro ClientNetImpactFX(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile.ClientNetImpactFX(FHitResult)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ClientNetImpactFX_Implementation(FHitResult)
    // endereco: casamento de bytes com a build de referencia
    void ClientNetImpactFX_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.ClientNetImpactFX_Implementation(FHitResult)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.ClientOnImpact(UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientOnImpact(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterProjectile.ClientOnImpact(UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ClientOnImpact_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<do
    // endereco: casamento de bytes com a build de referencia
    void ClientOnImpact_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterProjectile.ClientOnImpact_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,FHitResult)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Colorize()
    // endereco: casamento de bytes com a build de referencia
    void Colorize() const
    {
        NativeCall<void>(this, "AShooterProjectile.Colorize()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.DeactivateProjectileEffects()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DeactivateProjectileEffects() const
    {
        NativeCall<void>(this, "AShooterProjectile.DeactivateProjectileEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.DeleteNearbyGlowSticks()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=605+grafo=8/8]]
    void DeleteNearbyGlowSticks() const
    {
        NativeCall<void>(this, "AShooterProjectile.DeleteNearbyGlowSticks()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Destroy(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool Destroy(bool a0, bool a1) const
    {
        return NativeCall<bool, bool, bool>(this, "AShooterProjectile.Destroy(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterProjectile.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.DisableAndDestroy(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=208]]
    void DisableAndDestroy(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterProjectile.DisableAndDestroy(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Explode(FHitResult&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=243+chamadores=2]]
    void Explode(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.Explode(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ExplodeAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void ExplodeAtLocation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterProjectile.ExplodeAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Explode_Implementation(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void Explode_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.Explode_Implementation(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=447+grafo=16/16]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterProjectile.GetProjectileID()
    // endereco: cache_pdb_25090264
    int GetProjectileID() const
    {
        return NativeCall<int>(this, "AShooterProjectile.GetProjectileID()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterProjectile.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()
    // endereco: casamento de bytes com a build de referencia
    unsigned long long GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim() const
    {
        return NativeCall<unsigned long long>(this, "AShooterProjectile.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.IgnoreRadialDamageToActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool IgnoreRadialDamageToActor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterProjectile.IgnoreRadialDamageToActor(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.InitVelocity(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=283]]
    void InitVelocity(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.InitVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.InitVelocity(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=274]]
    void InitVelocity(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "AShooterProjectile.InitVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.IsProjectileInShield(UE::Math::TVector<double>,float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsProjectileInShield(void* a0, float a1, bool a2) const
    {
        return NativeCall<void*, void*, float, bool>(this, "AShooterProjectile.IsProjectileInShield(UE::Math::TVector<double>,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.LifeSpanExpired()
    // endereco: casamento de bytes com a build de referencia
    void LifeSpanExpired() const
    {
        NativeCall<void>(this, "AShooterProjectile.LifeSpanExpired()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.NetAttachRootComponentTo(USceneComponent*,FName,UE::Math::TVector<double>,UE:
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetAttachRootComponentTo(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, unsigned long long, void*, void*>(this, "AShooterProjectile.NetAttachRootComponentTo(USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.NetAttachRootComponentTo_Implementation(USceneComponent*,FName,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    void NetAttachRootComponentTo_Implementation(void* a0, unsigned long long a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, unsigned long long, void*, void*>(this, "AShooterProjectile.NetAttachRootComponentTo_Implementation(USceneComponent*,FName,UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.NetResetTransformAndVelocity_Implementation(UE::Math::TVector<double>,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    void NetResetTransformAndVelocity_Implementation(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "AShooterProjectile.NetResetTransformAndVelocity_Implementation(UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.NetUpdateTimer()
    // endereco: cache_pdb_25090264
    void NetUpdateTimer() const
    {
        NativeCall<void>(this, "AShooterProjectile.NetUpdateTimer()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterProjectile.OnExplode(FHitResult&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void OnExplode(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.OnExplode(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.OnImpact(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnImpact(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterProjectile.OnImpact(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.OnImpact_Implementation(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnImpact_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterProjectile.OnImpact_Implementation(FHitResult&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterProjectile.OnProjectileStop(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnProjectileStop(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterProjectile.OnProjectileStop(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.OnRep_AttachmentReplication()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void OnRep_AttachmentReplication() const
    {
        NativeCall<void>(this, "AShooterProjectile.OnRep_AttachmentReplication()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.OnTouch(AActor*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void OnTouch(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterProjectile.OnTouch(AActor*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.PlayDestructionEffect(bool,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void PlayDestructionEffect(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterProjectile.PlayDestructionEffect(bool,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.PostNetReceiveVelocity(UE::Math::TVector<double>&)
    // classe: a funcao mora em AActor, e AShooterProjectile herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostNetReceiveVelocity(void* a0) const
    {
        NativeCall<void, void*>(this, "AActor.PostNetReceiveVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.PreventExplosionEmitter(FHitResult&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool PreventExplosionEmitter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterProjectile.PreventExplosionEmitter(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ProjectileBounced(FHitResult&,UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=26]]
    void ProjectileBounced(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterProjectile.ProjectileBounced(FHitResult&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Reset()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void Reset() const
    {
        NativeCall<void>(this, "AShooterProjectile.Reset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.RestartProjectileMovement()
    // endereco: casamento de bytes com a build de referencia
    void RestartProjectileMovement() const
    {
        NativeCall<void>(this, "AShooterProjectile.RestartProjectileMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.ShouldNotifyServerOfClientImpact(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool ShouldNotifyServerOfClientImpact(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterProjectile.ShouldNotifyServerOfClientImpact(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.SpawnImpactEffect(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    void SpawnImpactEffect(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterProjectile.SpawnImpactEffect(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.SpawnProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,TArray<AS
    // endereco: casamento de bytes com a build de referencia
    void SpawnProjectile(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterProjectile.SpawnProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,TArray<AShooterProjectile*,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.StopProjectileMovement()
    // endereco: casamento de bytes com a build de referencia
    void StopProjectileMovement() const
    {
        NativeCall<void>(this, "AShooterProjectile.StopProjectileMovement()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.TakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    float TakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<float, float, void*, void*, void*>(this, "AShooterProjectile.TakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterProjectile.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterProjectile.UpdateTargetPhysics()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTargetPhysics() const
    {
        NativeCall<void>(this, "AShooterProjectile.UpdateTargetPhysics()");
    }

    float& ClientFailsafeLifespanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientFailsafeLifespan"); }
    float& ClientSideCollisionRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.ClientSideCollisionRadius"); }
    USphereComponent*& CollisionCompField() const
    { return *GetNativePointerField<USphereComponent**>(this, "AShooterProjectile.CollisionComp"); }
    BrzCampoPonteiro CustomColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.CustomColor")); }
    float& CustomColorDesaturationField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.CustomColorDesaturation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileBounceSound` +50, medido na build 25090264
    //  (offset absoluto medido: 0x6F2; confianca media)
    short& CustomColorIDField() const
    { return BrzCampoAncorado<short>(this, "ProjectileBounceSound", 50); }
    TWeakObjectPtr<void>& DamageCauserField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile.DamageCauser"); }
    float& DistanceCutoffForMidairProjectileFoliageTracingField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.DistanceCutoffForMidairProjectileFoliageTracing"); }
    BrzCampoPonteiro ExplosionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.ExplosionEmitter")); }
    double& ExplosionNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile.ExplosionNetworkTime"); }
    BrzCampoPonteiro FiredFromWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.FiredFromWeapon")); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterProjectile.FluidSimSplashTemplateOverride"); }
    float& ForceNetUpdateTimeIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.ForceNetUpdateTimeInterval"); }
    float& FragmentConeHalfAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentConeHalfAngle"); }
    float& FragmentOriginOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.FragmentOriginOffset"); }
    BrzCampoPonteiro FragmentProjectileTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.FragmentProjectileTemplate")); }
    TArray<void*>& IgnoreNonBlockingHitClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterProjectile.IgnoreNonBlockingHitClasses"); }
    BrzCampoPonteiro ImpactEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.ImpactEmitter")); }
    BrzCampoPonteiro ImpactTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.ImpactTemplate")); }
    TArray<AActor*>& ImpactedActorsField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "AShooterProjectile.ImpactedActors"); }
    BrzCampoPonteiro LastFoliageTraceCheckLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.LastFoliageTraceCheckLocation")); }
    double& LastFoliageTraceCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterProjectile.LastFoliageTraceCheckTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileBounceSound` +8, medido na build 25090264
    //  (offset absoluto medido: 0x6C8; confianca alta)
    double& LastProjectileBounceSoundField() const
    { return BrzCampoAncorado<double>(this, "ProjectileBounceSound", 8); }
    BrzCampoPonteiro LastVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.LastVelocity")); }
    BrzCampoPonteiro MovementCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.MovementComp")); }
    BrzCampoPonteiro MyAmmoTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.MyAmmoTemplate")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ImpactEmitter` +8, medido na build 25090264
    //  (offset absoluto medido: 0x4E8; confianca alta)
    TWeakObjectPtr<void>& MyControllerField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "ImpactEmitter", 8); }
    BrzCampoPonteiro NiagaraParticleCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.NiagaraParticleComp")); }
    float& NudgedImpactDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.NudgedImpactDistance"); }
    int& NumberOfFragmentProjectilesField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile.NumberOfFragmentProjectiles"); }
    int& OverrideImpactExplosionVFXColorIDField() const
    { return *GetNativePointerField<int*>(this, "AShooterProjectile.OverrideImpactExplosionVFXColorID"); }
    float& ParticleColorIntensityField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.ParticleColorIntensity"); }
    UParticleSystemComponent*& ParticleCompField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "AShooterProjectile.ParticleComp"); }
    float& PostExplosionKeepAliveLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.PostExplosionKeepAliveLifeSpan"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileBounceSound` +16, medido na build 25090264
    //  (offset absoluto medido: 0x6D0; confianca alta)
    void*& PreviousLocationField() const
    { return BrzCampoAncorado<void*>(this, "ProjectileBounceSound", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CustomColorDesaturation` +8, medido na build 25090264
    //  (offset absoluto medido: 0x508; confianca alta)
    TArray<TWeakObjectPtr<void>>& PreviousNonBlockingHitComponentsField() const
    { return BrzCampoAncorado<TArray<TWeakObjectPtr<void>>>(this, "CustomColorDesaturation", 8); }
    USoundCue*& ProjectileBounceSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterProjectile.ProjectileBounceSound"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileBounceSound` +40, medido na build 25090264
    //  (offset absoluto medido: 0x6E8; confianca media)
    int& RandIntSeedField() const
    { return BrzCampoAncorado<int>(this, "ProjectileBounceSound", 40); }
    FHitResult& ReplicatedHitInfoField() const
    { return *GetNativePointerField<FHitResult*>(this, "AShooterProjectile.ReplicatedHitInfo"); }
    BrzCampoPonteiro RotateMeshFactorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.RotateMeshFactor")); }
    UStaticMeshComponent*& StaticMeshCompField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterProjectile.StaticMeshComp"); }
    float& TimeBetweenMidairProjectileFoliageTracesField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.TimeBetweenMidairProjectileFoliageTraces"); }
    float& TornOffLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.TornOffLifeSpan"); }
    float& TraceForBlockingRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterProjectile.TraceForBlockingRadius"); }
    FName& VFXColorizationParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterProjectile.VFXColorizationParameterName"); }
    TWeakObjectPtr<void>& WeaponField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "AShooterProjectile.Weapon"); }
    unsigned char& WeaponColorizeVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterProjectile.WeaponColorizeVFXUseColorRegion"); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.WeaponConfig")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileBounceSound` +44, medido na build 25090264
    //  (offset absoluto medido: 0x6EC; confianca media)
    void*& bColorizeRegionsField() const
    { return BrzCampoAncorado<void*>(this, "ProjectileBounceSound", 44); }
    bool& bForceNetUpdateField() const
    { return *GetNativePointerField<bool*>(this, "AShooterProjectile.bForceNetUpdate"); }
    //  no cache antigo este campo se chamava bSpawnedExplosionEffects.
    //  nesta build ele e' `ProjectileBounceSound` — resolve por NOME.
    BrzCampoPonteiro bSpawnedExplosionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterProjectile.ProjectileBounceSound")); }
    BitFieldValue<bool, unsigned __int32> bExploded()
    { return { (void*)this, "bExploded" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnExplosionTemplateOnClient()
    { return { (void*)this, "bSpawnExplosionTemplateOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnClient()
    { return { (void*)this, "bExplodeOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnImpact()
    { return { (void*)this, "bExplodeOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnLifeTimeEnd()
    { return { (void*)this, "bExplodeOnLifeTimeEnd" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnExplode()
    { return { (void*)this, "bDestroyOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bForceUseTickFunction()
    { return { (void*)this, "bForceUseTickFunction" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreFriendlyFire()
    { return { (void*)this, "bForceIgnoreFriendlyFire" }; }
    BitFieldValue<bool, unsigned __int32> bAttachOnImpact()
    { return { (void*)this, "bAttachOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnImpactEffectOnHit()
    { return { (void*)this, "bSpawnImpactEffectOnHit" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateImpact()
    { return { (void*)this, "bReplicateImpact" }; }
    BitFieldValue<bool, unsigned __int32> bImpactSetRotationToNormal()
    { return { (void*)this, "bImpactSetRotationToNormal" }; }
    BitFieldValue<bool, unsigned __int32> bNoImpactEmitterOnCharacterHit()
    { return { (void*)this, "bNoImpactEmitterOnCharacterHit" }; }
    BitFieldValue<bool, unsigned __int32> bRotateMeshWhileMoving()
    { return { (void*)this, "bRotateMeshWhileMoving" }; }
    BitFieldValue<bool, unsigned __int32> bCheckForNonBlockingHitImpactFX()
    { return { (void*)this, "bCheckForNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX()
    { return { (void*)this, "bClientTickWhenInAirAndCheckForNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bTickedNonBlockingHitImpactFX()
    { return { (void*)this, "bTickedNonBlockingHitImpactFX" }; }
    BitFieldValue<bool, unsigned __int32> bUseTraceForBlocking()
    { return { (void*)this, "bUseTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bHadAttachParent()
    { return { (void*)this, "bHadAttachParent" }; }
    BitFieldValue<bool, unsigned __int32> bTraceImpacted()
    { return { (void*)this, "bTraceImpacted" }; }
    BitFieldValue<bool, unsigned __int32> bStopOnExplode()
    { return { (void*)this, "bStopOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bUseTraceForBlockingStopOnExplode()
    { return { (void*)this, "bUseTraceForBlockingStopOnExplode" }; }
    BitFieldValue<bool, unsigned __int32> bUseMultiTraceForBlocking()
    { return { (void*)this, "bUseMultiTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bProjectileEffectsDeactivated()
    { return { (void*)this, "bProjectileEffectsDeactivated" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeEffectOnDestroy()
    { return { (void*)this, "bExplodeEffectOnDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bImpactRequiresDinoLineOfSight()
    { return { (void*)this, "bImpactRequiresDinoLineOfSight" }; }
    BitFieldValue<bool, unsigned __int32> bImpactPvEOnlyAlly()
    { return { (void*)this, "bImpactPvEOnlyAlly" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPProjectileBounced()
    { return { (void*)this, "bUseBPProjectileBounced" }; }
    BitFieldValue<bool, unsigned __int32> bAttachOnProjectileBounced()
    { return { (void*)this, "bAttachOnProjectileBounced" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIgnoreProjectileImpact()
    { return { (void*)this, "bUseBPIgnoreProjectileImpact" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTurrets()
    { return { (void*)this, "bIgnoredByTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bResetHasImpactedOnMultiTraceForBlocking()
    { return { (void*)this, "bResetHasImpactedOnMultiTraceForBlocking" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingVolumeMustBeWater()
    { return { (void*)this, "bNonBlockingVolumeMustBeWater" }; }
    BitFieldValue<bool, unsigned __int32> bUseWeaponColorization()
    { return { (void*)this, "bUseWeaponColorization" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomColor()
    { return { (void*)this, "bUseCustomColor" }; }
    BitFieldValue<bool, unsigned __int32> bDoFullRadialDamage()
    { return { (void*)this, "bDoFullRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bExplodeOnNonBlockingImpact()
    { return { (void*)this, "bExplodeOnNonBlockingImpact" }; }
    BitFieldValue<bool, unsigned __int32> bRadialDamageIgnoreDamageCauser()
    { return { (void*)this, "bRadialDamageIgnoreDamageCauser" }; }
    BitFieldValue<bool, unsigned __int32> bMultiTraceCollideAgainstPawns()
    { return { (void*)this, "bMultiTraceCollideAgainstPawns" }; }
    BitFieldValue<bool, unsigned __int32> bTraceForBlockingDoImpactBackTrace()
    { return { (void*)this, "bTraceForBlockingDoImpactBackTrace" }; }
    BitFieldValue<bool, unsigned __int32> bExplosionOrientUpwards()
    { return { (void*)this, "bExplosionOrientUpwards" }; }
    BitFieldValue<bool, unsigned __int32> bColorizeStructureOnImpact()
    { return { (void*)this, "bColorizeStructureOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bClearStructureColorsOnImpact()
    { return { (void*)this, "bClearStructureColorsOnImpact" }; }
    BitFieldValue<bool, unsigned __int32> bNonBlockingImpactNoExplosionEmitter()
    { return { (void*)this, "bNonBlockingImpactNoExplosionEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyOnExplodeNonBlockingImpact()
    { return { (void*)this, "bDestroyOnExplodeNonBlockingImpact" }; }
    BitFieldValue<bool, unsigned __int32> bDontFragmentOnDamage()
    { return { (void*)this, "bDontFragmentOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventReflecting()
    { return { (void*)this, "bPreventReflecting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIgnoreRadialDamageVictim()
    { return { (void*)this, "bUseBPIgnoreRadialDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckToDirectDamageVictim()
    { return { (void*)this, "bDoFinalTraceCheckToDirectDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bDoFinalTraceCheckFromInstigatorToDirectDamageVictim()
    { return { (void*)this, "bDoFinalTraceCheckFromInstigatorToDirectDamageVictim" }; }
    BitFieldValue<bool, unsigned __int32> bUseProjectileTraceChannel()
    { return { (void*)this, "bUseProjectileTraceChannel" }; }
    BitFieldValue<bool, unsigned __int32> bIsGlowStick()
    { return { (void*)this, "bIsGlowStick" }; }
    BitFieldValue<bool, unsigned __int32> bIsGlowStickSelf()
    { return { (void*)this, "bIsGlowStickSelf" }; }
    BitFieldValue<bool, unsigned __int32> bUseClientHitDetermination()
    { return { (void*)this, "bUseClientHitDetermination" }; }
    BitFieldValue<bool, unsigned __int32> HasPerformedAnEnvirnonmentalImpact()
    { return { (void*)this, "HasPerformedAnEnvirnonmentalImpact" }; }
    BitFieldValue<bool, unsigned __int32> bDamageOnBeginOverlap()
    { return { (void*)this, "bDamageOnBeginOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bDontExplodeOnAnyDamage()
    { return { (void*)this, "bDontExplodeOnAnyDamage" }; }
    BitFieldValue<bool, unsigned __int32> bForceIgnoreBlockingHitClasses()
    { return { (void*)this, "bForceIgnoreBlockingHitClasses" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetUpdate()
    { return { (void*)this, "bForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bFragmentate()
    { return { (void*)this, "bFragmentate" }; }
    BitFieldValue<bool, unsigned __int32> bHasImpacted()
    { return { (void*)this, "bHasImpacted" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDirectImpactRadialDamage()
    { return { (void*)this, "bIgnoreDirectImpactRadialDamage" }; }
    BitFieldValue<bool, unsigned __int32> bMoveIgnoreOwner()
    { return { (void*)this, "bMoveIgnoreOwner" }; }
    BitFieldValue<bool, unsigned __int32> bTriggerDealtDirectDamageEvent()
    { return { (void*)this, "bTriggerDealtDirectDamageEvent" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRadialDamageMultiplier()
    { return { (void*)this, "bUseBPRadialDamageMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateExplosionEmitter()
    { return { (void*)this, "bUseBPUpdateExplosionEmitter" }; }
    BitFieldValue<bool, unsigned __int32> bUseOwnerProjectileLife()
    { return { (void*)this, "bUseOwnerProjectileLife" }; }
    BitFieldValue<bool, unsigned __int32> bWeaponColorizationColorizeVFX()
    { return { (void*)this, "bWeaponColorizationColorizeVFX" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERPROJECTILE_H
