// ==========================================================================
//  APrimalWeaponGrenade — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONGRENADE_H
#define BRZ_SDK_JOGO_APRIMALWEAPONGRENADE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "AShooterWeapon_Projectile.h"

struct APrimalWeaponGrenade : public AShooterWeapon_Projectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponGrenade"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAni
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "APrimalWeaponGrenade.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.ApplyWeaponConfig(FProjectileWeaponData&)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponGrenade herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void ApplyWeaponConfig(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_Projectile.ApplyWeaponConfig(FProjectileWeaponData&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponGrenade.BPGetProjectileSpeed()
    // endereco: casamento de bytes com a build de referencia
    float BPGetProjectileSpeed() const
    {
        return NativeCall<float>(this, "APrimalWeaponGrenade.BPGetProjectileSpeed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // classe: a funcao mora em AShooterWeapon_Projectile, e APrimalWeaponGrenade herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectile(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Projectile.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.DoFireProjectileCustom(bool)
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectileCustom(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGrenade.DoFireProjectileCustom(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)
    // endereco: casamento de bytes com a build de referencia
    void FireProjectile(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalWeaponGrenade.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,
    // endereco: casamento de bytes com a build de referencia
    void FireProjectileEx(void* a0, void* a1, float a2, int a3, int a4) const
    {
        NativeCall<void, void*, void*, float, int, int>(this, "APrimalWeaponGrenade.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.HideGrenade()
    // endereco: casamento de bytes com a build de referencia
    void HideGrenade() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.HideGrenade()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponGrenade.HidePin()
    // endereco: cache_pdb_25090264
    void HidePin() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.HidePin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.PlayFireAnimation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    void PlayFireAnimation() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.PlayFireAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.ServerClampProjectileSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    float ServerClampProjectileSpeed(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalWeaponGrenade.ServerClampProjectileSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.StartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGrenade.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.StopFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    void StopFire() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWeaponGrenade.Tick(float)", a0);
    }

    // jogo_confirmou_dump
    //   APrimalWeaponGrenade.UnHideGrenade()
    // endereco: casamento de bytes com a build de referencia
    void UnHideGrenade() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.UnHideGrenade()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalWeaponGrenade.UnHidePin()
    // endereco: cache_pdb_25090264
    void UnHidePin() const
    {
        NativeCall<void>(this, "APrimalWeaponGrenade.UnHidePin()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrenade.UpdateFirstPersonMeshes(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=58]]
    void UpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGrenade.UpdateFirstPersonMeshes(bool)", a0);
    }

    float& CookingTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.CookingTime"); }
    FName& GrenadeBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadeBoneName"); }
    FName& GrenadePinBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalWeaponGrenade.GrenadePinBoneName"); }
    float& MaxGrenadeLifeField() const
    { return *GetNativePointerField<float*>(this, "APrimalWeaponGrenade.MaxGrenadeLife"); }
    BrzCampoPonteiro OvercookHurtAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGrenade.OvercookHurtAnim")); }
    BrzCampoPonteiro PrepareThrowAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGrenade.PrepareThrowAnim")); }
    BrzCampoPonteiro ProjectileOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGrenade.ProjectileOrigin")); }
    BrzCampoPonteiro ProjectileShootDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGrenade.ProjectileShootDir")); }
    BrzCampoPonteiro QuickThrowAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalWeaponGrenade.QuickThrowAnim")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileShootDir` +24, medido na build 25090264
    //  (offset absoluto medido: 0x1288; confianca alta)
    void*& bHiddenGrenadeFPVField() const
    { return BrzCampoAncorado<void*>(this, "ProjectileShootDir", 24); }
    bool& bIsThrowingGrenadeField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsThrowingGrenade"); }
    bool& bIsWeapScoutField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bIsWeapScout"); }
    bool& bUseBlueprintSpeedField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrenade.bUseBlueprintSpeed"); }
    BitFieldValue<bool, unsigned __int32> bDontCookGrenade()
    { return { (void*)this, "bDontCookGrenade" }; }
    BitFieldValue<bool, unsigned __int32> bHideGrenadeOnFireProjectile()
    { return { (void*)this, "bHideGrenadeOnFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bEnablePrepareThrowAnim()
    { return { (void*)this, "bEnablePrepareThrowAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCookingWhileProne()
    { return { (void*)this, "bPreventCookingWhileProne" }; }
    BitFieldValue<bool, unsigned __int32> bHideSkeletalMesh()
    { return { (void*)this, "bHideSkeletalMesh" }; }
    BitFieldValue<bool, unsigned __int32> bIsCookingGrenade()
    { return { (void*)this, "bIsCookingGrenade" }; }
    BitFieldValue<bool, unsigned __int32> bIsThrowingGrenade()
    { return { (void*)this, "bIsThrowingGrenade" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeapScout()
    { return { (void*)this, "bIsWeapScout" }; }
    BitFieldValue<bool, unsigned __int32> bPlayBothFirstAndThirdPersonOnStartFire()
    { return { (void*)this, "bPlayBothFirstAndThirdPersonOnStartFire" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateIsCookingGrenade()
    { return { (void*)this, "bReplicateIsCookingGrenade" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintSpeed()
    { return { (void*)this, "bUseBlueprintSpeed" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONGRENADE_H
