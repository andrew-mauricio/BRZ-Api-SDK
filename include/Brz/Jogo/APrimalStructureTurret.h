// ==========================================================================
//  APrimalStructureTurret — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETURRET_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETURRET_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UChildActorComponent;
struct UNiagaraSystem;
struct UParticleSystem;
struct USkeletalMeshComponent;
struct UStaticMeshComponent;
struct UTexture2D;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureTurret : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTurret"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureTurret.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurret.BPCopyCustomSettingsFromTurret(APrimalStructureTurret*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCopyCustomSettingsFromTurret(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureTurret.BPCopyCustomSettingsFromTurret(APrimalStructureTurret*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurret.BPTurretPreventsTargeting(APrimalCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPTurretPreventsTargeting(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureTurret.BPTurretPreventsTargeting(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.CanFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80]]
    bool CanFire() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurret.CanFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureTurret.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_Ne
    // endereco: casamento de bytes com a build de referencia
    void ClientsFireProjectile_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurret.ClientsFireProjectile_Implementation(UE::Math::TVector<double>,FVector_NetQuantizeNormal)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ConsumeAmmo()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ConsumeAmmo() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.ConsumeAmmo()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.CopySettingsToTurrentsInRange(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void CopySettingsToTurrentsInRange(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructureTurret.CopySettingsToTurrentsInRange(APlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamage
    // endereco: casamento de bytes com a build de referencia
    void DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, int, void*, float>(this, "APrimalStructureTurret.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.DoFire(int)
    // endereco: casamento de bytes com a build de referencia
    void DoFire(int a0) const
    {
        NativeCall<void, int>(this, "APrimalStructureTurret.DoFire(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void DoFireProjectile(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurret.DoFireProjectile(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.FindTarget(bool*)
    // endereco: casamento de bytes com a build de referencia
    AActor* FindTarget(void* a0) const
    {
        return NativeCall<AActor*, void*>(this, "APrimalStructureTurret.FindTarget(bool*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurret.FindTargetStaggered(bool*,bool*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindTargetStaggered(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTurret.FindTargetStaggered(bool*,bool*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetAmmoNearby(UClass**,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetAmmoNearby(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalStructureTurret.GetAmmoNearby(UClass**,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetHasNearbyAmmoContainer()
    // endereco: casamento de bytes com a build de referencia
    bool GetHasNearbyAmmoContainer() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurret.GetHasNearbyAmmoContainer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocato
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1386+grafo=52/52]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurret.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureTurret.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetMuzzleFlashSocketName()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void GetMuzzleFlashSocketName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurret.GetMuzzleFlashSocketName()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurret.GetMuzzleLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurret.GetMuzzleLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureTurret.GetMuzzleRotation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleRotation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTurret.GetMuzzleRotation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetSkeletalMeshComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=117]]
    USkeletalMeshComponent* GetSkeletalMeshComponent() const
    {
        return NativeCall<USkeletalMeshComponent*>(this, "APrimalStructureTurret.GetSkeletalMeshComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurret.GetTargetAimAtLocation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetAimAtLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurret.GetTargetAimAtLocation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.GetTargetAltAimSocket(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void GetTargetAltAimSocket(void* retorno, void* a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureTurret.GetTargetAltAimSocket(APrimalCharacter*)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurret.GetTargetFireAtLocation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTargetFireAtLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurret.GetTargetFireAtLocation(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurret.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTurret.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.IsValidToFire()
    // endereco: casamento de bytes com a build de referencia
    bool IsValidToFire() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurret.IsValidToFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.NetExecCommand(FName,FNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    bool NetExecCommand(unsigned long long a0, void* a1) const
    {
        return NativeCall<bool, unsigned long long, void*>(this, "APrimalStructureTurret.NetExecCommand(FName,FNetExecParams&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureTurret.NetMultiUpdateTarget(AActor*,double)
    // endereco: casamento de bytes com a build de referencia
    void NetMultiUpdateTarget(void* a0, double a1) const
    {
        NativeCall<void, void*, double>(this, "APrimalStructureTurret.NetMultiUpdateTarget(AActor*,double)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.PreInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PreInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.PreInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.SetPinToTurrentsInRange(APlayerController*,int)
    // endereco: casamento de bytes com a build de referencia
    void SetPinToTurrentsInRange(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalStructureTurret.SetPinToTurrentsInRange(APlayerController*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ShouldDealDamage(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureTurret.ShouldDealDamage(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurret.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnImpactEffects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTurret.SpawnImpactEffects(FHitResult&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.SpawnTrailEffect(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SpawnTrailEffect(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurret.SpawnTrailEffect(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.StartWarning()
    // endereco: casamento de bytes com a build de referencia
    void StartWarning() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.StartWarning()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureTurret.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ToggleCopySettingsVisualRange()
    // endereco: casamento de bytes com a build de referencia
    void ToggleCopySettingsVisualRange() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.ToggleCopySettingsVisualRange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureTurret.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.UpdateNumBullets()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateNumBullets() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.UpdateNumBullets()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.UpdatedTargeting()
    // endereco: casamento de bytes com a build de referencia
    void UpdatedTargeting() const
    {
        NativeCall<void>(this, "APrimalStructureTurret.UpdatedTargeting()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.UseTurretFastTargeting(bool)
    // endereco: casamento de bytes com a build de referencia
    bool UseTurretFastTargeting(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalStructureTurret.UseTurretFastTargeting(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=1016+grafo=24/24]]
    void ValidateGeneratedRepEnums(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurret.ValidateGeneratedRepEnums(TArray<FRepRecord,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurret.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    void WeaponTraceHits(void* a0, void* a1, void* a2) const
    {
        NativeCall<void, void*, void*, void*>(this, "APrimalStructureTurret.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    unsigned char& AISettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurret.AISetting"); }
    TArray<void*>& AISettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurret.AISettingIcons"); }
    TObjectPtr<UTexture2D>& AddCreatureToExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToExclusionListIcon"); }
    TObjectPtr<UTexture2D>& AddCreatureToInclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.AddCreatureToInclusionListIcon"); }
    float& AimSpreadField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AimSpread"); }
    BrzCampoPonteiro AimTargetLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.AimTargetLocOffset")); }
    float& AlwaysEnableFastTurretTargetingOverVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AlwaysEnableFastTurretTargetingOverVelocity"); }
    float& AmmoBoxReloadCooldownField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.AmmoBoxReloadCooldown"); }
    BrzCampoPonteiro AmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.AmmoItemTemplate")); }
    float& BatteryIntervalFromActivationBeforeFiringField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
    TObjectPtr<UTexture2D>& CopySettingsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeIcon"); }
    TObjectPtr<UTexture2D>& CopySettingsInRangeWithPinCodeIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.CopySettingsInRangeWithPinCodeIcon"); }
    UStaticMeshComponent*& CopySettingsRangeMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTurret.CopySettingsRangeMesh"); }
    BrzCampoPonteiro DefaultTurretAimRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.DefaultTurretAimRotOffset")); }
    TArray<void*>& DinoTargetListField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurret.DinoTargetList"); }
    TObjectPtr<UTexture2D>& ExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ExclusionListIcon"); }
    float& FireDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageAmount"); }
    float& FireDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireDamageImpulse"); }
    BrzCampoPonteiro FireDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.FireDamageType")); }
    float& FireIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FireInterval"); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureTurret.FluidSimSplashTemplateOverride"); }
    TObjectPtr<UTexture2D>& HideCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.HideCopySettingsVisualIcon"); }
    TObjectPtr<UTexture2D>& InclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.InclusionListIcon"); }
    //  no cache antigo este campo se chamava LastCheckNearbyAmmoContainerTime.
    //  nesta build ele e' `MyChildEmitterTargetingEffect` — resolve por NOME.
    double& LastCheckNearbyAmmoContainerTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
    double& LastFindTargetTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.LastFindTargetTime"); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.LastFireTime"); }
    double& LastLongReloadStartTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.LastLongReloadStartTime"); }
    //  no cache antigo este campo se chamava LastWarningTime.
    //  nesta build ele e' `BatteryIntervalFromActivationBeforeFiring` — resolve por NOME.
    double& LastWarningTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTurret.BatteryIntervalFromActivationBeforeFiring"); }
    int& LongAmmoReloadCDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.LongAmmoReloadCD"); }
    int& MagazineSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MagazineSize"); }
    float& MaxAmmoContainerReloadPercentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxAmmoContainerReloadPercent"); }
    float& MaxFirePitchDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFirePitchDelta"); }
    float& MaxFireYawDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.MaxFireYawDelta"); }
    int& MaxTargetLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MaxTargetLevel"); }
    int& MinTargetLevelField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.MinTargetLevel"); }
    BrzCampoPonteiro MuzzleFlashEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.MuzzleFlashEmitter")); }
    BrzCampoPonteiro MuzzleLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.MuzzleLocOffset")); }
    UChildActorComponent*& MyChildEmitterTargetingEffectField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureTurret.MyChildEmitterTargetingEffect"); }
    USkeletalMeshComponent*& MySkeletalMeshCompField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureTurret.MySkeletalMeshComp"); }
    BrzCampoPonteiro MySkinSkeletalMeshCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.MySkinSkeletalMeshComp")); }
    float& NonTargetingRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.NonTargetingRotationInterpSpeed"); }
    int& NumBulletsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBullets"); }
    int& NumBulletsPerShotField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTurret.NumBulletsPerShot"); }
    BrzCampoPonteiro PlayerProneTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.PlayerProneTargetOffset")); }
    BrzCampoPonteiro ProjectileClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.ProjectileClass")); }
    unsigned char& RangeSettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurret.RangeSetting"); }
    TArray<void*>& RangeSettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurret.RangeSettingIcons"); }
    float& RangeToCheckForAmmoField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.RangeToCheckForAmmo"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromExclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromExclusionListIcon"); }
    TObjectPtr<UTexture2D>& RemoveCreatureFromInclusionListIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.RemoveCreatureFromInclusionListIcon"); }
    TObjectPtr<UTexture2D>& ShowCopySettingsVisualIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.ShowCopySettingsVisualIcon"); }
    BrzCampoPonteiro TargetingLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.TargetingLocOffset")); }
    TObjectPtr<UTexture2D>& TargetingOptionsIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureTurret.TargetingOptionsIcon"); }
    FieldArray<float> TargetingRangesField() const
    { return { (void*)this, "APrimalStructureTurret.TargetingRanges" }; }
    float& TargetingRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.TargetingRotationInterpSpeed"); }
    BrzCampoPonteiro TargetingTraceOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.TargetingTraceOffset")); }
    UParticleSystem*& TrailFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTurret.TrailFX"); }
    BrzCampoPonteiro TurretAimRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.TurretAimRotOffset")); }
    BrzCampoPonteiro WarningEmitterLongField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.WarningEmitterLong")); }
    BrzCampoPonteiro WarningEmitterShortField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.WarningEmitterShort")); }
    float& WarningExpirationTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurret.WarningExpirationTime"); }
    unsigned char& WarningSettingField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTurret.WarningSetting"); }
    TArray<void*>& WarningSettingIconsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurret.WarningSettingIcons"); }
    TWeakObjectPtr<void>& WeakTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTurret.WeakTarget"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MySkinSkeletalMeshComp` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1510; confianca alta)
    void*& bHasNearbyAmmoContainerField() const
    { return BrzCampoAncorado<void*>(this, "MySkinSkeletalMeshComp", 16); }
    //  no cache antigo este campo se chamava bWarned.
    //  nesta build ele e' `DinoTargetList` — resolve por NOME.
    BrzCampoPonteiro bWarnedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurret.DinoTargetList")); }
    BitFieldValue<bool, unsigned __int32> bUseNoWarning()
    { return { (void*)this, "bUseNoWarning" }; }
    BitFieldValue<bool, unsigned __int32> bUseLevelLimitsForTargeting()
    { return { (void*)this, "bUseLevelLimitsForTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseInclusionListTargeting()
    { return { (void*)this, "bUseInclusionListTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseNoAmmo()
    { return { (void*)this, "bUseNoAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseAmmoOnDamage()
    { return { (void*)this, "bOnlyUseAmmoOnDamage" }; }
    BitFieldValue<bool, unsigned __int32> bHasOmniDirectionalFire()
    { return { (void*)this, "bHasOmniDirectionalFire" }; }
    BitFieldValue<bool, unsigned __int32> bFireProjectiles()
    { return { (void*)this, "bFireProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bClientFireProjectile()
    { return { (void*)this, "bClientFireProjectile" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargeting()
    { return { (void*)this, "bIsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bInWaterOnlyTargetWater()
    { return { (void*)this, "bInWaterOnlyTargetWater" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIgnoreProjectiles()
    { return { (void*)this, "bTurretIgnoreProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTurretPreventsTargeting()
    { return { (void*)this, "bUseBPTurretPreventsTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bAimIgnoreSockets()
    { return { (void*)this, "bAimIgnoreSockets" }; }
    BitFieldValue<bool, unsigned __int32> bTurretIsDisabledTooManyNearbyTurrets()
    { return { (void*)this, "bTurretIsDisabledTooManyNearbyTurrets" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoFromNearbyContainer()
    { return { (void*)this, "bUseAmmoFromNearbyContainer" }; }
    BitFieldValue<bool, unsigned __int32> bUseMaxInventoryForAmmoContainerReload()
    { return { (void*)this, "bUseMaxInventoryForAmmoContainerReload" }; }
    BitFieldValue<bool, unsigned __int32> bIsTargetListInclusion()
    { return { (void*)this, "bIsTargetListInclusion" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETURRET_H
