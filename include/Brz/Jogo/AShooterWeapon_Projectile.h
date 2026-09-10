// ==========================================================================
//  AShooterWeapon_Projectile — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_PROJECTILE_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_PROJECTILE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct USoundCue;
struct UStaticMeshComponent;

#include "AShooterWeapon.h"

struct AShooterWeapon_Projectile : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Projectile"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*
    // endereco: casamento de bytes com a build de referencia
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon_Projectile.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ApplyWeaponConfig(FProjectileWeaponData&)
    // endereco: casamento de bytes com a build de referencia
    void ApplyWeaponConfig(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_Projectile.ApplyWeaponConfig(FProjectileWeaponData&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.AttachOtherMeshes()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void AttachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.AttachOtherMeshes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.BPGetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVe
    // endereco: cache_pdb_25090264
    BrzPonteiro BPGetProjectileSpawnTransform(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon_Projectile.BPGetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Projectile.BPSelectProjectileToFire(TSubclassOf<AShooterProjectile>&,USoundCue*&,
    // endereco: casamento de bytes com a build de referencia
    void BPSelectProjectileToFire(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void**, void*, void*, void*>(this, "AShooterWeapon_Projectile.BPSelectProjectileToFire(TSubclassOf<AShooterProjectile>&,USoundCue*&,bool&,float&)", &a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.CheckRefireTimer()
    // endereco: casamento de bytes com a build de referencia
    void CheckRefireTimer() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.CheckRefireTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ClearLockOn()
    // endereco: casamento de bytes com a build de referencia
    void ClearLockOn() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.ClearLockOn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector
    // endereco: casamento de bytes com a build de referencia
    void ClientsFireProjectile_Implementation(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterWeapon_Projectile.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.ClientsSpawnStoredProjectile_Implementation(UE::Math::TTransform<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientsSpawnStoredProjectile_Implementation(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "AShooterWeapon_Projectile.ClientsSpawnStoredProjectile_Implementation(UE::Math::TTransform<double>,TSubclassOf<AShooterProjectile>,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.CreateProjectileID()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateProjectileID() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Projectile.CreateProjectileID()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.CustomEventUnHideProjectile()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void CustomEventUnHideProjectile() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.CustomEventUnHideProjectile()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectile(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Projectile.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    void DrawHUD(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_Projectile.DrawHUD(AShooterHUD*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int
    // endereco: casamento de bytes com a build de referencia
    void FireProjectile(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterWeapon_Projectile.FireProjectile(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,f
    // endereco: casamento de bytes com a build de referencia
    void FireProjectileEx(void* a0, void* a1, float a2, int a3, int a4) const
    {
        NativeCall<void, void*, void*, float, int, int>(this, "AShooterWeapon_Projectile.FireProjectileEx(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.FireWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.FireWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.GetAdjustedAim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdjustedAim() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Projectile.GetAdjustedAim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Projectile.GetProjectileGravityModifier()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=577+grafo=12/12]]
    float GetProjectileGravityModifier() const
    {
        return NativeCall<float>(this, "AShooterWeapon_Projectile.GetProjectileGravityModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.GetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    void GetProjectileSpawnTransform(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Projectile.GetProjectileSpawnTransform(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Projectile.GetProjectileSpeedModifier()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=577+grafo=12/12]]
    float GetProjectileSpeedModifier() const
    {
        return NativeCall<float>(this, "AShooterWeapon_Projectile.GetProjectileSpeedModifier()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.GetTrajectoryTarget(int,float)
    // endereco: casamento de bytes com a build de referencia
    void GetTrajectoryTarget(void* retorno, int a0, float a1) const
    {
        NativeCall<void, void*, int, float>(this, "AShooterWeapon_Projectile.GetTrajectoryTarget(int,float)", retorno, a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.HideProjectile()
    // endereco: casamento de bytes com a build de referencia
    void HideProjectile() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.HideProjectile()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Projectile.Listener_LockOn_Stop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void Listener_LockOn_Stop() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.Listener_LockOn_Stop()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.Listener_LockOn_Update(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=129+chamadores=2]]
    void Listener_LockOn_Update(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Projectile.Listener_LockOn_Update(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.OnEquip()
    // classe: a funcao mora em AShooterWeapon, e AShooterWeapon_Projectile herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEquip() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnEquip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.OnHideProjectile()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnHideProjectile() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.OnHideProjectile()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.PostAttachOtherMeshes()
    // endereco: cache_pdb_25090264
    void PostAttachOtherMeshes() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.PostAttachOtherMeshes()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=30]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "AShooterWeapon_Projectile.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ServerClampProjectileSpeed(float)
    // endereco: casamento de bytes com a build de referencia
    float ServerClampProjectileSpeed(float a0) const
    {
        return NativeCall<float, float>(this, "AShooterWeapon_Projectile.ServerClampProjectileSpeed(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ServerFireProjectileEx_Implementation(UE::Math::TVector<double>,FVecto
    // endereco: casamento de bytes com a build de referencia
    void ServerFireProjectileEx_Implementation(void* a0, void* a1, float a2, int a3, int a4) const
    {
        NativeCall<void, void*, void*, float, int, int>(this, "AShooterWeapon_Projectile.ServerFireProjectileEx_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,float,int,int)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.ServerFireProjectile_Implementation(UE::Math::TVector<double>,FVector_
    // endereco: casamento de bytes com a build de referencia
    void ServerFireProjectile_Implementation(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "AShooterWeapon_Projectile.ServerFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.SetLockedTarget(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetLockedTarget(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.SetLockedTarget_Implementation(AActor*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    void SetLockedTarget_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "AShooterWeapon_Projectile.SetLockedTarget_Implementation(AActor*,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Projectile.ShouldUseBPSelectProjectileToFireV2()
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseBPSelectProjectileToFireV2() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Projectile.ShouldUseBPSelectProjectileToFireV2()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Projectile.SpawnStoredProjectile(UE::Math::TTransform<double>,TSubclassOf<AShoote
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnStoredProjectile(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "AShooterWeapon_Projectile.SpawnStoredProjectile(UE::Math::TTransform<double>,TSubclassOf<AShooterProjectile>,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Projectile.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Projectile.Tick(float)", a0);
    }

    UMaterialInterface*& ActorInLockedAreaMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_Projectile.ActorInLockedAreaMI"); }
    UMaterialInstanceDynamic*& ActorInLockedAreaMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_Projectile.ActorInLockedAreaMID"); }
    UMaterialInterface*& ActorLockedMIField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "AShooterWeapon_Projectile.ActorLockedMI"); }
    UMaterialInstanceDynamic*& ActorLockedMIDField() const
    { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "AShooterWeapon_Projectile.ActorLockedMID"); }
    float& CurrentLockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.CurrentLockOnTime"); }
    USoundCue*& FireProjectileSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Projectile.FireProjectileSound"); }
    float& LockOnMaxTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnMaxTraceDistance"); }
    float& LockOnTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnTime"); }
    BrzCampoPonteiro LockOnTraceBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Projectile.LockOnTraceBoxExtent")); }
    float& LockOnYScreenPercentageField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.LockOnYScreenPercentage"); }
    FName& Mesh1PProjectileBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.Mesh1PProjectileBoneName"); }
    FName& ProjectileAttachPoint3PField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Projectile.ProjectileAttachPoint3P"); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Projectile.ProjectileClass")); }
    UStaticMeshComponent*& ProjectileMesh3PField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "AShooterWeapon_Projectile.ProjectileMesh3P"); }
    float& ProjectileSpreadPitchField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadPitch"); }
    float& ProjectileSpreadYawField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ProjectileSpreadYaw"); }
    float& ServerMaxProjectileAngleErrorField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileAngleError"); }
    float& ServerMaxProjectileOriginErrorField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Projectile.ServerMaxProjectileOriginError"); }
    bool& bUseBPSelectProjectileToFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon_Projectile.bUseBPSelectProjectileToFire"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProjectileAttachPoint3P` +8, medido na build 25090264
    //  (offset absoluto medido: 0x1158; confianca alta)
    int& trashFramesField() const
    { return BrzCampoAncorado<int>(this, "ProjectileAttachPoint3P", 8); }
    BitFieldValue<bool, unsigned __int32> bServerFireProjectileForceUpdateAimActors()
    { return { (void*)this, "bServerFireProjectileForceUpdateAimActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseHideProjectileAnimEvents()
    { return { (void*)this, "bUseHideProjectileAnimEvents" }; }
    BitFieldValue<bool, unsigned __int32> bCallBPCustomSpawningEventOnProjectileSpawn()
    { return { (void*)this, "bCallBPCustomSpawningEventOnProjectileSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bHasLockedTarget()
    { return { (void*)this, "bHasLockedTarget" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnProjectileOnClient()
    { return { (void*)this, "bSpawnProjectileOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoOnFireProjectile()
    { return { (void*)this, "bUseAmmoOnFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSelectProjectileToFire()
    { return { (void*)this, "bUseBPSelectProjectileToFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseLockOn()
    { return { (void*)this, "bUseLockOn" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_PROJECTILE_H
