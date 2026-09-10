// ==========================================================================
//  APrimalStructureTurretBallista — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETBALLISTA_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETBALLISTA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAnimMontage;
struct UAudioComponent;
struct UClass;
struct UNiagaraSystem;
struct UParticleSystem;
struct USkeletalMeshComponent;
struct USoundCue;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture2D;

#include "APrimalStructureSeating.h"

struct APrimalStructureTurretBallista : public APrimalStructureSeating
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTurretBallista"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequence
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalStructureTurretBallista.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.BPCanFire()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanFire() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurretBallista.BPCanFire()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.BPFiredWeapon()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPFiredWeapon() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.BPFiredWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.BPGetDamageMultiplier()
    // endereco: casamento de bytes com a build de referencia
    float BPGetDamageMultiplier() const
    {
        return NativeCall<float>(this, "APrimalStructureTurretBallista.BPGetDamageMultiplier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.BotControl(APrimalBotCharacter*,int)
    // classe: a funcao mora em APrimalStructureSeating, e APrimalStructureTurretBallista herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=168]]
    BrzPonteiro BotControl(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureSeating.BotControl(APrimalBotCharacter*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.BotRelease(APrimalBotCharacter*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BotRelease(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureTurretBallista.BotRelease(APrimalBotCharacter*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.CanFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanFire() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.CanReload()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    bool CanReload() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurretBallista.CanReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.CanUse(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=137]]
    bool CanUse(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureTurretBallista.CanUse(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FV
    // endereco: casamento de bytes com a build de referencia
    void ClientsFireProjectile_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurretBallista.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.ClientsPlayFireAnim()
    // endereco: casamento de bytes com a build de referencia
    void ClientsPlayFireAnim() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.ClientsPlayFireAnim_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void ClientsPlayFireAnim_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.ClientsPlayFireAnim_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.Control(AShooterCharacter*,int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=28]]
    void Control(void* a0, int a1, bool a2) const
    {
        NativeCall<void, void*, int, bool>(this, "APrimalStructureTurretBallista.Control(AShooterCharacter*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf
    // endereco: casamento de bytes com a build de referencia
    void DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, int, void*, float>(this, "APrimalStructureTurretBallista.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.DealDamageOnServer(FHitResult&,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void DealDamageOnServer(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurretBallista.DealDamageOnServer(FHitResult&,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.Demolish(APlayerController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurretBallista.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.Die(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool Die(float a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<bool, float, void*, void*, void*>(this, "APrimalStructureTurretBallista.Die(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.DoFire(int)
    // endereco: casamento de bytes com a build de referencia
    void DoFire(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureTurretBallista.DoFire(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<doub
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectile(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurretBallista.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.Fire(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Fire(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTurretBallista.Fire(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.GetAimRotationForSeatedBot(APrimalBotCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAimRotationForSeatedBot(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurretBallista.GetAimRotationForSeatedBot(APrimalBotCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.GetAimRotationForSeatedBot_Implementation(APrimalBotCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAimRotationForSeatedBot_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurretBallista.GetAimRotationForSeatedBot_Implementation(APrimalBotCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.GetAmmoAmount(UClass*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    int GetAmmoAmount(void* a0, bool a1) const
    {
        return NativeCall<int, void*, bool>(this, "APrimalStructureTurretBallista.GetAmmoAmount(UClass*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.GetAmmoNearby(UClass*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    int GetAmmoNearby(void* a0) const
    {
        return NativeCall<int, void*>(this, "APrimalStructureTurretBallista.GetAmmoNearby(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.GetAttackingFromLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=23]]
    BrzPonteiro GetAttackingFromLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.GetAttackingFromLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.GetCameraLocationAndRotation(UE::Math::TVector<double>&,UE::Math:
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetCameraLocationAndRotation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurretBallista.GetCameraLocationAndRotation(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.GetCurrentAmmoType()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UClass* GetCurrentAmmoType() const
    {
        return NativeCall<UClass*>(this, "APrimalStructureTurretBallista.GetCurrentAmmoType()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.GetCurrentProjectileClass()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UClass* GetCurrentProjectileClass() const
    {
        return NativeCall<UClass*>(this, "APrimalStructureTurretBallista.GetCurrentProjectileClass()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.GetFireProjectileDirection()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=163+chamadores=2]]
    BrzPonteiro GetFireProjectileDirection() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.GetFireProjectileDirection()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.GetFireProjectileDirection_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetFireProjectileDirection_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.GetFireProjectileDirection_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.GetMuzzleFlashSocketName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void GetMuzzleFlashSocketName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurretBallista.GetMuzzleFlashSocketName()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.GetMuzzleLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetMuzzleLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.GetMuzzleLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.GetMuzzleRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleRotation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.GetMuzzleRotation()");
    }

    // dump_sobre_sdk_287a0
    //   APrimalStructureTurretBallista.IsBallistaPenetratingWalls()
    // endereco: casamento de bytes com a build de referencia
    bool IsBallistaPenetratingWalls() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurretBallista.IsBallistaPenetratingWalls()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalStructureTurretBallista.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.OnRep_IsShooting()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRep_IsShooting() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.OnRep_IsShooting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.PlayEmptySound()
    // endereco: cache_pdb_25090264
    BrzPonteiro PlayEmptySound() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.PlayEmptySound()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.PlayFireAnimation()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=29]]
    BrzPonteiro PlayFireAnimation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.PlayFireAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.PlayReloadAnimation()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=29]]
    void PlayReloadAnimation() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.PlayReloadAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.PostInitializeComponents()
    // classe: a funcao mora em APrimalStructureSeating, e APrimalStructureTurretBallista herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureSeating.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.Release(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void Release(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurretBallista.Release(AShooterCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureTurretBallista.ServerSetTargeting(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetTargeting(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureTurretBallista.ServerSetTargeting(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurretBallista.ServerSwitchAmmoType()
    // endereco: casamento de bytes com a build de referencia
    void ServerSwitchAmmoType() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.ServerSwitchAmmoType_Implementation()
    // endereco: cache_pdb_25090264
    void ServerSwitchAmmoType_Implementation() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.ServerSwitchAmmoType_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.ShowProjectileMesh(bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void ShowProjectileMesh(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.ShowProjectileMesh(bool,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnImpactEffects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTurretBallista.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.SpawnTrailEffect(UE::Math::TVector<double>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=32+chamadores=2]]
    void SpawnTrailEffect(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurretBallista.SpawnTrailEffect(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.StartFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=24]]
    void StartFire() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.StartFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.StopFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void StopFire() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.SwitchAmmoType()
    // endereco: casamento de bytes com a build de referencia
    void SwitchAmmoType() const
    {
        NativeCall<void>(this, "APrimalStructureTurretBallista.SwitchAmmoType()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureTurretBallista.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.TickSeatedBot(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickSeatedBot(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureTurretBallista.TickSeatedBot(float)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureTurretBallista.TryFiring(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void TryFiring(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.TryFiring_Implementation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=31]]
    void TryFiring_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalStructureTurretBallista.TryFiring_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretBallista.Unstasis()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    BrzPonteiro Unstasis() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurretBallista.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.UpdateAmmoCount(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void UpdateAmmoCount(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalStructureTurretBallista.UpdateAmmoCount(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretBallista.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=465+grafo=8/8]]
    void WeaponTraceHits(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructureTurretBallista.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    TArray<UStaticMesh*>& AlternateAmmoItemTemplateMeshesField() const
    { return *GetNativePointerField<TArray<UStaticMesh*>*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplateMeshes"); }
    TArray<void*>& AlternateAmmoItemTemplatesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretBallista.AlternateAmmoItemTemplates"); }
    TArray<void*>& AlternateAmmoProjectileClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretBallista.AlternateAmmoProjectileClasses"); }
    TArray<void*>& AlternateAmmoReloadAnimSpeedsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretBallista.AlternateAmmoReloadAnimSpeeds"); }
    int& AmmoCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.AmmoCount"); }
    BrzCampoPonteiro AmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretBallista.AmmoItemTemplate")); }
    UStaticMesh*& AmmoItemTemplateMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureTurretBallista.AmmoItemTemplateMesh"); }
    FName& AttachedModuleComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.AttachedModuleComponentName"); }
    UAnimMontage*& AttachedModuleFireAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleFireAnimation"); }
    UAnimMontage*& AttachedModuleReloadAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.AttachedModuleReloadAnimation"); }
    USkeletalMeshComponent*& AttachedModuleSkeletalMeshCompField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.AttachedModuleSkeletalMeshComp"); }
    //  no cache antigo este campo se chamava AuthorityDisableUpdateMeshAtTime.
    //  nesta build ele e' `ProjectileMeshAttachPointForMeshOnly` — resolve por NOME.
    double& AuthorityDisableUpdateMeshAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPointForMeshOnly"); }
    TArray<void*>& BuffsWhileSeatedField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretBallista.BuffsWhileSeated"); }
    float& ControllerRiddingYawField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ControllerRiddingYaw"); }
    UClass*& CurrentAmmoItemTemplateField() const
    { return *GetNativePointerField<UClass**>(this, "APrimalStructureTurretBallista.CurrentAmmoItemTemplate"); }
    //  no cache antigo este campo se chamava CurrentAmmoSourceString.
    //  nesta build ele e' `AttachedModuleReloadAnimation` — resolve por NOME.
    FString& CurrentAmmoSourceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTurretBallista.AttachedModuleReloadAnimation"); }
    float& DefaultAmmoReloadAnimSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.DefaultAmmoReloadAnimSpeed"); }
    UAnimMontage*& EmptyBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.EmptyBallistaAnimation"); }
    USoundCue*& EmptyFireSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.EmptyFireSound"); }
    UAnimMontage*& FireBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.FireBallistaAnimation"); }
    float& FireMaxDistanceToMuzzleFlashField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.FireMaxDistanceToMuzzleFlash"); }
    USoundCue*& FireSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.FireSound"); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurretBallista.FluidSimSplashTemplateOverride"); }
    float& HealthCostPerShotField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.HealthCostPerShot"); }
    float& InstantFireTraceRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.InstantFireTraceRange"); }
    double& LastShootingFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretBallista.LastShootingFireTime"); }
    int& MagazineSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurretBallista.MagazineSize"); }
    float& MinimumHealthPercentToShootField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.MinimumHealthPercentToShoot"); }
    BrzCampoPonteiro MuzzleFlashEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretBallista.MuzzleFlashEmitter")); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurretBallista.MySkeletalMeshComp"); }
    float& OldYawViewRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.OldYawViewRotation"); }
    float& PitctViewRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.PitctViewRotation"); }
    UTexture2D*& ProgressBarBackgroundField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarBackground"); }
    UTexture2D*& ProgressBarForegroundField() const
    { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructureTurretBallista.ProgressBarForeground"); }
    FName& ProjectileBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileBoneName"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretBallista.ProjectileClass")); }
    UStaticMeshComponent*& ProjectileMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurretBallista.ProjectileMesh"); }
    FName& ProjectileMeshAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPoint"); }
    FName& ProjectileMeshAttachPointForMeshOnlyField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.ProjectileMeshAttachPointForMeshOnly"); }
    float& RangeToCheckForAmmoField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RangeToCheckForAmmo"); }
    UAnimMontage*& ReloadBallistaAnimationField() const
    { return *GetNativePointerField<UAnimMontage**>(this, "APrimalStructureTurretBallista.ReloadBallistaAnimation"); }
    FName& RiderOverrideSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.RiderOverrideSocketName"); }
    UAudioComponent*& RotateSoundComponentField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "APrimalStructureTurretBallista.RotateSoundComponent"); }
    USoundCue*& RotateSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTurretBallista.RotateSoundCue"); }
    float& RotateSoundFadeInSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeInSpeed"); }
    float& RotateSoundFadeOutSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundFadeOutSpeed"); }
    float& RotateSoundMaxVolumeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMaxVolume"); }
    float& RotateSoundMinVolumeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSoundMinVolume"); }
    float& RotateSpeedThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.RotateSpeedThreshold"); }
    BrzCampoPonteiro RotationInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretBallista.RotationInput")); }
    float& ShootingAimSpreadField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingAimSpread"); }
    float& ShootingDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageAmount"); }
    float& ShootingDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingDamageImpulse"); }
    BrzCampoPonteiro ShootingDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretBallista.ShootingDamageType")); }
    float& ShootingFireIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.ShootingFireInterval"); }
    UParticleSystem*& ShootingTrailFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurretBallista.ShootingTrailFX"); }
    float& TPVCameraPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMax"); }
    float& TPVCameraPitchMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraPitchMin"); }
    float& TPVCameraYawMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMax"); }
    float& TPVCameraYawMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.TPVCameraYawMin"); }
    FName& TurretSkeletalMeshComponentNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretSkeletalMeshComponentName"); }
    FName& TurretTipBoneField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTurretBallista.TurretTipBone"); }
    float& YawViewRotationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretBallista.YawViewRotation"); }
    bool& bIsShootingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureTurretBallista.bIsShooting"); }
    unsigned char& bQueueReloadingAnimationField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurretBallista.bQueueReloadingAnimation"); }
    //  no cache antigo este campo se chamava lastFireTime.
    //  nesta build ele e' `AmmoItemTemplateMesh` — resolve por NOME.
    double& lastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurretBallista.AmmoItemTemplateMesh"); }
    BitFieldValue<bool, unsigned __int32> bClientFireProjectile()
    { return { (void*)this, "bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseInstantDamageShooting()
    { return { (void*)this, "bUseInstantDamageShooting" }; }
    BitFieldValue<bool, unsigned __int32> bDisableInElectricalStorm()
    { return { (void*)this, "bDisableInElectricalStorm" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffsetOnCharacter()
    { return { (void*)this, "bUseBallistaAimOffsetOnCharacter" }; }
    BitFieldValue<bool, unsigned __int32> bIsReloading()
    { return { (void*)this, "bIsReloading" }; }
    BitFieldValue<bool, unsigned __int32> bIsFiring()
    { return { (void*)this, "bIsFiring" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectileInvertX()
    { return { (void*)this, "bFireProjectileInvertX" }; }
    BitFieldValue<bool, unsigned __int32> bShowProjectileOnlyBasedOnAmmo()
    { return { (void*)this, "bShowProjectileOnlyBasedOnAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBone()
    { return { (void*)this, "bHideProjectileBone" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFire()
    { return { (void*)this, "bUseBPCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFiredWeapon()
    { return { (void*)this, "bUseBPFiredWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bHideProjectileBoneOnAttachedModule()
    { return { (void*)this, "bHideProjectileBoneOnAttachedModule" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer()
    { return { (void*)this, "bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetDamageMultiplier()
    { return { (void*)this, "bUseBPGetDamageMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> AimFromPlayerView()
    { return { (void*)this, "AimFromPlayerView" }; }
    BitFieldValue<bool, unsigned __int32> bForceBallistaToUseAimOffsets()
    { return { (void*)this, "bForceBallistaToUseAimOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bInfiniteAmmo()
    { return { (void*)this, "bInfiniteAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bIsLoaded()
    { return { (void*)this, "bIsLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bIsShooting()
    { return { (void*)this, "bIsShooting" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargeting()
    { return { (void*)this, "bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIsTryingToShoot()
    { return { (void*)this, "bIsTryingToShoot" }; }
    BitFieldValue<bool, unsigned __int32> bShowProjectileCount()
    { return { (void*)this, "bShowProjectileCount" }; }
    BitFieldValue<bool, unsigned __int32> bUseBallistaAimOffsetOnCharacter_StandingTurret()
    { return { (void*)this, "bUseBallistaAimOffsetOnCharacter_StandingTurret" }; }
    BitFieldValue<bool, unsigned __int32> bUseRiderSocket()
    { return { (void*)this, "bUseRiderSocket" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETBALLISTA_H
