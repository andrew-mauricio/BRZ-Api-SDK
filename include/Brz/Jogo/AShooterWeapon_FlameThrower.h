// ==========================================================================
//  AShooterWeapon_FlameThrower — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_FLAMETHROWER_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_FLAMETHROWER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;
struct UParticleSystem;

#include "AShooterWeapon.h"

struct AShooterWeapon_FlameThrower : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_FlameThrower"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.BPBeginShootEffects()
    // endereco: casamento de bytes com a build de referencia
    void BPBeginShootEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.BPBeginShootEffects()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_FlameThrower.BPOverrideImpactEffectSpawnLocation(FHitResult)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideImpactEffectSpawnLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon_FlameThrower.BPOverrideImpactEffectSpawnLocation(FHitResult)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_FlameThrower.BPSpawnImpactEffects(TArray<UE::Math::TVector<double>,TSizedDefaultA
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro BPSpawnImpactEffects(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon_FlameThrower.BPSpawnImpactEffects(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.BPStopShootEffects()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPStopShootEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.BPStopShootEffects()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.BeginShootFX()
    // endereco: casamento de bytes com a build de referencia
    void BeginShootFX() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.BeginShootFX_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void BeginShootFX_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.BeginShootFX_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_FlameThrower.ClientSpawnHarvestFX(TArray<UE::Math::TVector<double>,TSizedDefaultA
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro ClientSpawnHarvestFX(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.ClientSpawnHarvestFX_Implementation(TArray<UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void ClientSpawnHarvestFX_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_FlameThrower.ClientSpawnHarvestFX_Implementation(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.EndFXDelay()
    // endereco: casamento de bytes com a build de referencia
    void EndFXDelay() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.EndFXDelay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.FireWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.FireWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.GetActiveMuzzleParticle()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetActiveMuzzleParticle() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon_FlameThrower.GetActiveMuzzleParticle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    void GetFirePosition(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_FlameThrower.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.GetSecondaryActiveMuzzleParticle()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetSecondaryActiveMuzzleParticle() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon_FlameThrower.GetSecondaryActiveMuzzleParticle()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.ResetFXDelay()
    // endereco: casamento de bytes com a build de referencia
    void ResetFXDelay() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.ResetFXDelay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.ServerBeginShootFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerBeginShootFX() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerBeginShootFX()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.ServerTickShootFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerTickShootFX() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.ServerTickShootFX_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerTickShootFX_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.ServerTickShootFX_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.SpawnImpactEffects()
    // endereco: casamento de bytes com a build de referencia
    void SpawnImpactEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.SpawnImpactEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.StartFire(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_FlameThrower.StartFire(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.StopShootFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopShootFX() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.StopShootFX_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void StopShootFX_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.StopShootFX_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_FlameThrower.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_FlameThrower.Tick(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_FlameThrower.TickShootFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void TickShootFX() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_FlameThrower.TickShootFX_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void TickShootFX_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_FlameThrower.TickShootFX_Implementation()");
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `Niagara_HarvestFX` +8 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x11C8; confianca alta)
    TArray<void*>& CachedShotsField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "Niagara_HarvestFX", 8); }
    TArray<void*>& DamageImpactPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon_FlameThrower.DamageImpactPoints"); }
    float& DamageTestBoxExtentSideField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestBoxExtentSide"); }
    float& DamageTestMuzzleOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestMuzzleOffset"); }
    float& DamageTestSphereRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.DamageTestSphereRadius"); }
    BrzCampoPonteiro DamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.DamageType")); }
    float& FXDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FXDelay"); }
    float& FlameHurtMaxDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.FlameHurtMaxDistance"); }
    UParticleSystem*& FlameThrowerFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX"); }
    BrzCampoPonteiro FlameThrowerFXDefaultColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.FlameThrowerFXDefaultColor")); }
    UParticleSystem*& FlameThrowerFX_FPVField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.FlameThrowerFX_FPV"); }
    UParticleSystem*& HarvestFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.HarvestFX"); }
    int& InstantDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon_FlameThrower.InstantDamageAmount"); }
    BrzCampoPonteiro MuzzleDirectionOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.MuzzleDirectionOffset")); }
    unsigned char& MuzzlePSCTickGroupOverrideField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon_FlameThrower.MuzzlePSCTickGroupOverride"); }
    BrzCampoPonteiro Niagara_FlameThrowerFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.Niagara_FlameThrowerFX")); }
    BrzCampoPonteiro Niagara_FlameThrowerFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.Niagara_FlameThrowerFX_FPV")); }
    BrzCampoPonteiro Niagara_HarvestFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.Niagara_HarvestFX")); }
    BrzCampoPonteiro Niagara_OnFireFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.Niagara_OnFireFX")); }
    UParticleSystem*& OnFireFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "AShooterWeapon_FlameThrower.OnFireFX"); }
    float& ShotDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_FlameThrower.ShotDelay"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ShotDelay` +4 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x11DC; confianca alta)
    void*& bAllowLocalExecutionField() const
    { return BrzCampoAncorado<void*>(this, "ShotDelay", 4); }
    BrzCampoPonteiro bMuzzlePSC_IsTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bMuzzlePSC_IsTPV")); }
    BrzCampoPonteiro bSpawnGeneralTargetImpactEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bSpawnGeneralTargetImpactEffects")); }
    BrzCampoPonteiro bUseBPBeginStopShootEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bUseBPBeginStopShootEffects")); }
    BrzCampoPonteiro bUseBPOverrideImpactEffectSpawnLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bUseBPOverrideImpactEffectSpawnLocation")); }
    BrzCampoPonteiro bUseBPSpawnImpactEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bUseBPSpawnImpactEffects")); }
    BrzCampoPonteiro bUseMuzzlePSCTickGroupOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_FlameThrower.bUseMuzzlePSCTickGroupOverride")); }
    BitFieldValue<bool, unsigned __int32> bUseMuzzlePSCTickGroupOverride()
    { return { (void*)this, "bUseMuzzlePSCTickGroupOverride" }; }
    BitFieldValue<bool, unsigned __int32> bMuzzlePSC_IsTPV()
    { return { (void*)this, "bMuzzlePSC_IsTPV" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnGeneralTargetImpactEffects()
    { return { (void*)this, "bSpawnGeneralTargetImpactEffects" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPBeginStopShootEffects()
    { return { (void*)this, "bUseBPBeginStopShootEffects" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideImpactEffectSpawnLocation()
    { return { (void*)this, "bUseBPOverrideImpactEffectSpawnLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSpawnImpactEffects()
    { return { (void*)this, "bUseBPSpawnImpactEffects" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_FLAMETHROWER_H
