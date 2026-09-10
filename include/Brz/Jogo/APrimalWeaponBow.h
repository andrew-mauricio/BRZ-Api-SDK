// ==========================================================================
//  APrimalWeaponBow — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONBOW_H
#define BRZ_SDK_JOGO_APRIMALWEAPONBOW_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UStaticMeshComponent;

#include "AShooterWeapon_Projectile.h"

struct APrimalWeaponBow : public AShooterWeapon_Projectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponBow"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon_Projectile.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.ApplyWeaponConfig(FProjectileWeaponData&)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void ApplyWeaponConfig(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_Projectile.ApplyWeaponConfig(FProjectileWeaponData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.AttachOtherMeshes()
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void AttachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.AttachOtherMeshes()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponBow.BPCanStartFire()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanStartFire() const
    {
        return NativeCall<bool>(this, "APrimalWeaponBow.BPCanStartFire()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponBow.BPIsArrowHidden()
    // endereco: cache_pdb_25090264
    bool BPIsArrowHidden() const
    {
        return NativeCall<bool>(this, "APrimalWeaponBow.BPIsArrowHidden()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponBow.BPSimulatedResetSetPullingTime()
    // endereco: cache_pdb_25090264
    void BPSimulatedResetSetPullingTime() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.BPSimulatedResetSetPullingTime()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBow.CanMeleeAttack()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=66]]
    BrzPonteiro CanMeleeAttack() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBow.CanMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.CanReload()
    // classe: a funcao mora em AShooterWeapon, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: cache_pdb_25090264
    bool CanReload() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.CanReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.CanRun()
    // endereco: cache_pdb_25090264
    bool CanRun() const
    {
        return NativeCall<bool>(this, "APrimalWeaponBow.CanRun()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponBow.CancelPullString()
    // endereco: cache_pdb_25090264
    void CancelPullString() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.CancelPullString()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.DetachOtherMeshes()
    // endereco: cache_pdb_25090264
    void DetachOtherMeshes() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.DetachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectile(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Projectile.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.DoFireProjectileFP()
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectileFP() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.DoFireProjectileFP()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.DoMeleeAttack()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
    void DoMeleeAttack() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.DoMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=202]]
    void FireProjectileEx(void* a0, void* a1, float a2, int a3, int a4) const
    {
        NativeCall<void, void*, void*, float, int, int>(this, "APrimalWeaponBow.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.FireWeapon()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=39]]
    void FireWeapon() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.FireWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.ForcesTPVCameraOffset_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool ForcesTPVCameraOffset_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalWeaponBow.ForcesTPVCameraOffset_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.HideArrow()
    // endereco: casamento de bytes com a build de referencia
    void HideArrow() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.HideArrow()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.OnEquip()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=330+grafo=5/5]]
    void OnEquip() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.OnEquip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.PlayFireAnimation()
    // classe: a funcao mora em AShooterWeapon, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void PlayFireAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon.PlayFireAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponBow.PlayReloadAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayReloadAnimation() const
    {
        return NativeCall<void*>(this, "APrimalWeaponBow.PlayReloadAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.PullString()
    // endereco: cache_pdb_25090264
    void PullString() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.PullString()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.ServerClampProjectileSpeed(float)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    float ServerClampProjectileSpeed(float a0) const
    {
        return NativeCall<float, float>(this, "AShooterWeapon_Projectile.ServerClampProjectileSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.ServerSetPullString(bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetPullString(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.ServerSetPullString_Implementation(bool)
    // endereco: cache_pdb_25090264
    void ServerSetPullString_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponBow.ServerSetPullString_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.StartFire(bool)
    // classe: a funcao mora em AShooterWeapon, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.StartUnequip_Implementation()
    // endereco: cache_pdb_25090264
    void StartUnequip_Implementation() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.StartUnequip_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.StopFire()
    // endereco: cache_pdb_25090264
    void StopFire() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.StopOwnerEffects()
    // endereco: cache_pdb_25090264
    void StopOwnerEffects() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.StopOwnerEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.Tick(float)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Projectile.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.UnHideArrow()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UnHideArrow() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.UnHideArrow()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.UpdateFirstPersonMeshes(bool)
    // classe: a funcao mora em AShooterWeapon, e APrimalWeaponBow herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=60]]
    void UpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.UpdateFirstPersonMeshes(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.UpdateTPVBowAnimation()
    // endereco: casamento de bytes com a build de referencia
    void UpdateTPVBowAnimation() const
    {
        NativeCall<void>(this, "APrimalWeaponBow.UpdateTPVBowAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponBow.UseAlternateAimOffsetAnim()
    // endereco: cache_pdb_25090264
    bool UseAlternateAimOffsetAnim() const
    {
        return NativeCall<bool>(this, "APrimalWeaponBow.UseAlternateAimOffsetAnim()");
    }

    FName& ArrowAttachPoint1PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint1P"); }
    FName& ArrowAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowAttachPoint3P"); }
    FName& ArrowBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowBoneName"); }
    UStaticMeshComponent*& ArrowMesh1PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBow.ArrowMesh1P"); }
    UStaticMeshComponent*& ArrowMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalWeaponBow.ArrowMesh3P"); }
    FName& ArrowOnWeaponAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponBow.ArrowOnWeaponAttachPoint3P"); }
    float& DamageFactorForFastArrowsField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForFastArrows"); }
    float& DamageFactorForSlowArrowsField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.DamageFactorForSlowArrows"); }
    BrzCampoPonteiro MaxPullCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBow.MaxPullCameraShake")); }
    float& MaximumInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MaximumInitialSpeed"); }
    float& MinimumInitialSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumInitialSpeed"); }
    float& MinimumPullingTimeToFireField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.MinimumPullingTimeToFire"); }
    float& ProjectileSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.ProjectileSpeed"); }
    BrzCampoPonteiro PullStringAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponBow.PullStringAnim")); }
    float& PullingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTime"); }
    float& PullingTimeForMaximumSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponBow.PullingTimeForMaximumSpeed"); }
    BitFieldValue<bool, unsigned __int32> bDisablePullingOnCrouch()
    { return { (void*)this, "bDisablePullingOnCrouch" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePullingOnProne()
    { return { (void*)this, "bDisablePullingOnProne" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysPlayTPVPullStringAnim()
    { return { (void*)this, "bAlwaysPlayTPVPullStringAnim" }; }
    BitFieldValue<bool, unsigned __int32> bHideWeaponOnLaunch()
    { return { (void*)this, "bHideWeaponOnLaunch" }; }
    BitFieldValue<bool, unsigned __int32> bUseArrowMesh1P()
    { return { (void*)this, "bUseArrowMesh1P" }; }
    BitFieldValue<bool, unsigned __int32> bHideOriginalArrowBone1P()
    { return { (void*)this, "bHideOriginalArrowBone1P" }; }
    BitFieldValue<bool, unsigned __int32> bAttachArrowToWeaponMesh3P()
    { return { (void*)this, "bAttachArrowToWeaponMesh3P" }; }
    BitFieldValue<bool, unsigned __int32> bReloadOnEmptyClip()
    { return { (void*)this, "bReloadOnEmptyClip" }; }
    BitFieldValue<bool, unsigned __int32> bPendingPullString()
    { return { (void*)this, "bPendingPullString" }; }
    BitFieldValue<bool, unsigned __int32> bNewPullStringEvent()
    { return { (void*)this, "bNewPullStringEvent" }; }
    BitFieldValue<bool, unsigned __int32> bIsPullingString()
    { return { (void*)this, "bIsPullingString" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlayingPullStringAnim()
    { return { (void*)this, "bIsPlayingPullStringAnim" }; }
    BitFieldValue<bool, unsigned __int32> bDidFireWeapon()
    { return { (void*)this, "bDidFireWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsLastArrow()
    { return { (void*)this, "bIsLastArrow" }; }
    BitFieldValue<bool, unsigned __int32> bDontRequireIdleForReload()
    { return { (void*)this, "bDontRequireIdleForReload" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanStartFire()
    { return { (void*)this, "bUseBPCanStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceServerCheckPullingTime()
    { return { (void*)this, "bForceServerCheckPullingTime" }; }
    BitFieldValue<bool, unsigned __int32> bPreventMeleeWhileFiring()
    { return { (void*)this, "bPreventMeleeWhileFiring" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONBOW_H
