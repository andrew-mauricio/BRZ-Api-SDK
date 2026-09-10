// ==========================================================================
//  AShooterWeapon_Instant — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANT_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UParticleSystem;

#include "AShooterWeapon.h"

struct AShooterWeapon_Instant : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Instant"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Instant.BPGetCurrentSpread()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=62]]
    float BPGetCurrentSpread() const
    {
        return NativeCall<float>(this, "AShooterWeapon_Instant.BPGetCurrentSpread()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Instant.BPKillImpactEffects()
    // endereco: casamento de bytes com a build de referencia
    void BPKillImpactEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_Instant.BPKillImpactEffects()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Instant.BPPostSpawnTrailEffect(UParticleSystemComponent*,UE::Math::TVector<double
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPPostSpawnTrailEffect(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterWeapon_Instant.BPPostSpawnTrailEffect(UParticleSystemComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Instant.BPSpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void BPSpawnImpactEffects(void* a0, void* a1, bool a2, float a3) const
    {
        NativeCall<void, void*, void*, bool, float>(this, "AShooterWeapon_Instant.BPSpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.CheckRefireTimer()
    // endereco: casamento de bytes com a build de referencia
    void CheckRefireTimer() const
    {
        NativeCall<void>(this, "AShooterWeapon_Instant.CheckRefireTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.ComputeAmountOfHitsToProcess(TArray<FHitResult,TSizedDefaultAllocator<32>
    // endereco: cache_pdb_25090264
    int ComputeAmountOfHitsToProcess(void* a0, void* a1) const
    {
        return NativeCall<int, void*, void*>(this, "AShooterWeapon_Instant.ComputeAmountOfHitsToProcess(TArray<FHitResult,TSizedDefaultAllocator<32>>*,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamage
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, float>(this, "AShooterWeapon_Instant.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.FireWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_Instant.FireWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.GetCurrentSpread()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=103]]
    float GetCurrentSpread() const
    {
        return NativeCall<float>(this, "AShooterWeapon_Instant.GetCurrentSpread()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.GetFireLocation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetFireLocation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Instant.GetFireLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.GetFireLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    BrzPonteiro GetFireLocationAndDirection(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon_Instant.GetFireLocationAndDirection(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.IsValidShootDirForImpact(FHitResult&,FVector_NetQuantizeNormal&)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidShootDirForImpact(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterWeapon_Instant.IsValidShootDirForImpact(FHitResult&,FVector_NetQuantizeNormal&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.NetSimulateForceShot(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetSimulateForceShot(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon_Instant.NetSimulateForceShot(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.OnBurstFinished()
    // endereco: casamento de bytes com a build de referencia
    void OnBurstFinished() const
    {
        NativeCall<void>(this, "AShooterWeapon_Instant.OnBurstFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.ProcessInstantHit_Confirmed(FHitResult&,UE::Math::TVector<double>&,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    void ProcessInstantHit_Confirmed(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterWeapon_Instant.ProcessInstantHit_Confirmed(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.ServerForceShot(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<
    // endereco: thunk
    BrzPonteiro ServerForceShot(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_Instant.ServerForceShot(FHitResult&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.ServerNotifyShot(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FV
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerNotifyShot(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon_Instant.ServerNotifyShot(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.ServerNotifyShotOrigin(UE::Math::TVector<double>,TArray<FHitResult,TSized
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ServerNotifyShotOrigin(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_Instant.ServerNotifyShotOrigin(UE::Math::TVector<double>,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.ServerNotifyShotOrigin_Implementation(UE::Math::TVector<double>,TArray<FH
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyShotOrigin_Implementation(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterWeapon_Instant.ServerNotifyShotOrigin_Implementation(UE::Math::TVector<double>,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.ServerNotifyShot_Implementation(TArray<FHitResult,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void ServerNotifyShot_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Instant.ServerNotifyShot_Implementation(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.ServerProcessShotsInternal(TArray<FHitResult,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    void ServerProcessShotsInternal(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Instant.ServerProcessShotsInternal(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.SimulateInstantHit_Implementation(UE::Math::TVector<double>,FVector_NetQu
    // endereco: casamento de bytes com a build de referencia
    void SimulateInstantHit_Implementation(void* a0, void* a1, bool a2, int a3) const
    {
        NativeCall<void, void*, void*, bool, int>(this, "AShooterWeapon_Instant.SimulateInstantHit_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void SpawnImpactEffects(void* a0, void* a1, bool a2, float a3) const
    {
        NativeCall<void, void*, void*, bool, float>(this, "AShooterWeapon_Instant.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&,bool,float)", a0, a1, a2, a3);
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_Instant.SpawnTrailEffect(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FC
    // endereco: casamento de bytes com a build de referencia
    void SpawnTrailEffect(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "AShooterWeapon_Instant.SpawnTrailEffect(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FColor&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Instant.ValidateServerNotifyShotOrigin(UE::Math::TVector<double>,TArray<FHitResul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateServerNotifyShotOrigin(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_Instant.ValidateServerNotifyShotOrigin(UE::Math::TVector<double>,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Instant.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<
    // endereco: casamento de bytes com a build de referencia
    float WeaponTraceForHits(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<float, void*, void*, void*, void*, bool>(this, "AShooterWeapon_Instant.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4);
    }

    int& NumTracesPerShotField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_Instant.NumTracesPerShot"); }
    float& OriginCheckDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Instant.OriginCheckDistance"); }
    UParticleSystem*& TrailFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_Instant.TrailFX"); }
    UParticleSystem*& TrailFX_LocalField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_Instant.TrailFX_Local"); }
    BrzCampoPonteiro TrailFX_Local_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Instant.TrailFX_Local_Niagara")); }
    BrzCampoPonteiro TrailFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Instant.TrailFX_Niagara")); }
    FName& TrailTargetParamField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Instant.TrailTargetParam"); }
    BitFieldValue<bool, unsigned __int32> bPlayFireSoundOnInstantHit()
    { return { (void*)this, "bPlayFireSoundOnInstantHit" }; }
    BitFieldValue<bool, unsigned __int32> bExecSpread()
    { return { (void*)this, "bExecSpread" }; }
    BitFieldValue<bool, unsigned __int32> bFireFromMuzzle()
    { return { (void*)this, "bFireFromMuzzle" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSimulatingMultipleShots()
    { return { (void*)this, "bPreventSimulatingMultipleShots" }; }
    BitFieldValue<bool, unsigned __int32> bPerformObstructionCheck()
    { return { (void*)this, "bPerformObstructionCheck" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnTrailToHit()
    { return { (void*)this, "bSpawnTrailToHit" }; }
    BitFieldValue<bool, unsigned __int32> bClampTrailToMaxWeaponRange()
    { return { (void*)this, "bClampTrailToMaxWeaponRange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSpawnImpactEffects()
    { return { (void*)this, "bUseBPSpawnImpactEffects" }; }
    BitFieldValue<bool, unsigned __int32> bAllowNativeWithSpawnedImpacts()
    { return { (void*)this, "bAllowNativeWithSpawnedImpacts" }; }
    BitFieldValue<bool, unsigned __int32> bRotateTrailFXByFireDirection()
    { return { (void*)this, "bRotateTrailFXByFireDirection" }; }
    BitFieldValue<bool, unsigned __int32> bAttachTrailFXToFirstPersonMuzzle()
    { return { (void*)this, "bAttachTrailFXToFirstPersonMuzzle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCurrentSpread()
    { return { (void*)this, "bUseBPGetCurrentSpread" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPKillImpactEffects()
    { return { (void*)this, "bUseBPKillImpactEffects" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysSpawnTrailAtMuzzleLoc()
    { return { (void*)this, "bAlwaysSpawnTrailAtMuzzleLoc" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANT_H
