// ==========================================================================
//  AShooterWeapon — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FItemNetInfo;
struct FName;
struct FVector2D;
struct UAnimSequence;
struct UClass;
struct UMeshComponent;
struct UNiagaraSystem;
struct UObject;
struct USkeletalMeshComponent;
struct USoundBase;
struct USoundCue;

#include "AActor.h"

struct AShooterWeapon : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.AddToMeleeSwingHurtList(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool AddToMeleeSwingHurtList(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon.AddToMeleeSwingHurtList(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AllowFiring()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AllowFiring() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.AllowFiring()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.AllowedToFire(bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowedToFire(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterWeapon.AllowedToFire(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotif
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "AShooterWeapon.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,floa
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*>(this, "AShooterWeapon.AnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimN
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, void*>(this, "AShooterWeapon.AnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AnimNotifyCustomState_Tick(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, unsigned long long, void*, void*, float, void*>(this, "AShooterWeapon.AnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ApplyCharacterSnapshot(UPrimalItem*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCharacterSnapshot(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.ApplyCharacterSnapshot(UPrimalItem*,AActor*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ApplyPrimalItemSettingsToWeapon(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyPrimalItemSettingsToWeapon(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon.ApplyPrimalItemSettingsToWeapon(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.AttachMeshToPawn()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AttachMeshToPawn() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.AttachMeshToPawn()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPAdjustAmmoPerShot()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=60+chamadores=2]]
    int BPAdjustAmmoPerShot() const
    {
        return NativeCall<int>(this, "AShooterWeapon.BPAdjustAmmoPerShot()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPAllowNativeFireWeapon()
    // endereco: casamento de bytes com a build de referencia
    bool BPAllowNativeFireWeapon() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPAllowNativeFireWeapon()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNot
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPAnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon.BPAnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,fl
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPAnimNotifyCustomState_Begin(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "AShooterWeapon.BPAnimNotifyCustomState_Begin(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAni
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPAnimNotifyCustomState_End(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon.BPAnimNotifyCustomState_End(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotifyState*)", a0, a1, a2, a3);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPAnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,flo
    // endereco: casamento de bytes com a build de referencia
    void BPAnimNotifyCustomState_Tick(unsigned long long a0, void* a1, void* a2, float a3, void* a4) const
    {
        NativeCall<void, unsigned long long, void*, void*, float, void*>(this, "AShooterWeapon.BPAnimNotifyCustomState_Tick(FName,USkeletalMeshComponent*,UAnimSequenceBase*,float,UAnimNotifyState*)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPAppliedPrimalItemToWeapon()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPAppliedPrimalItemToWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPAppliedPrimalItemToWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPCanEquip(AShooterCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=2]]
    bool BPCanEquip(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon.BPCanEquip(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPCanFire(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPCanFire(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterWeapon.BPCanFire(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPCanToggleAccessory()
    // endereco: casamento de bytes com a build de referencia
    bool BPCanToggleAccessory() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPCanToggleAccessory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPConstrainAspectRatio(float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPConstrainAspectRatio(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.BPConstrainAspectRatio(float&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPDealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPDealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, float>(this, "AShooterWeapon.BPDealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPFireWeapon()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPFireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPFireWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPFiredWeapon()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPFiredWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPFiredWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetActorForTargetingTooltip()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPGetActorForTargetingTooltip() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.BPGetActorForTargetingTooltip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetCrosshairColor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCrosshairColor() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.BPGetCrosshairColor()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetDebugInfoString()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPGetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon.BPGetDebugInfoString()", retorno);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetSeatingAnimation()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPGetSeatingAnimation() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.BPGetSeatingAnimation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetSelectedMeleeAttackAnim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetSelectedMeleeAttackAnim() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.BPGetSelectedMeleeAttackAnim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGetTPVCameraOffset()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetTPVCameraOffset() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.BPGetTPVCameraOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPGetTargetingTooltipInfoLabel()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetTargetingTooltipInfoLabel() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.BPGetTargetingTooltipInfoLabel()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPGlobalFireWeapon()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPGlobalFireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPGlobalFireWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPHandleMeleeAttack()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPHandleMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPHandleMeleeAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPHandleOutOfAmmo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool BPHandleOutOfAmmo() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPHandleOutOfAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPLostController()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPLostController() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPLostController()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPModifyFOV(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float BPModifyFOV(float a0) const
    {
        return NativeCall<float, float>(this, "AShooterWeapon.BPModifyFOV(float)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOnBurstFinished()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPOnBurstFinished() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPOnBurstFinished()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOnBurstStarted()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPOnBurstStarted() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPOnBurstStarted()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOnMaxDurability()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPOnMaxDurability() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPOnMaxDurability()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOnScoped()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPOnScoped() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPOnScoped()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPOnWeaponAnimPlayedNotify(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnWeaponAnimPlayedNotify(void* a0, float a1, bool a2, bool a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.BPOnWeaponAnimPlayedNotify(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPOverrideAimDirection(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideAimDirection(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.BPOverrideAimDirection(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPOverrideDamageImpactLocation(FHitResult)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideDamageImpactLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.BPOverrideDamageImpactLocation(FHitResult)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOverrideFPVMasterPoseComponent()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    UObject* BPOverrideFPVMasterPoseComponent() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.BPOverrideFPVMasterPoseComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOverrideMeleeSwingSocket(FName)
    // endereco: casamento de bytes com a build de referencia
    unsigned long long BPOverrideMeleeSwingSocket(unsigned long long a0) const
    {
        return NativeCall<unsigned long long, unsigned long long>(this, "AShooterWeapon.BPOverrideMeleeSwingSocket(FName)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPOverridePerShotDurabilityCost(int)
    // endereco: casamento de bytes com a build de referencia
    float BPOverridePerShotDurabilityCost(int a0) const
    {
        return NativeCall<float, int>(this, "AShooterWeapon.BPOverridePerShotDurabilityCost(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPOverrideRootRotationOffset(UE::Math::TRotator<double>)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOverrideRootRotationOffset(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.BPOverrideRootRotationOffset(UE::Math::TRotator<double>)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPPostSpawnMuzzleEffect(UParticleSystemComponent*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPPostSpawnMuzzleEffect(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon.BPPostSpawnMuzzleEffect(UParticleSystemComponent*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPRemainEquipped()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPRemainEquipped() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPRemainEquipped()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPShouldDealDamage(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon.BPShouldDealDamage(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=88+chamadores=2]]
    BrzPonteiro BPSpawnMeleeEffects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.BPSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPStartEquippedNotify()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPStartEquippedNotify() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPStartEquippedNotify()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPStopMeleeAttack()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPStopMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPStopMeleeAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPToggleAccessory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BPToggleAccessory() const
    {
        NativeCall<void>(this, "AShooterWeapon.BPToggleAccessory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPTryFireWeapon()
    // endereco: casamento de bytes com a build de referencia
    bool BPTryFireWeapon() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPTryFireWeapon()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPUpdateFirstPersonMeshes(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPUpdateFirstPersonMeshes(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.BPUpdateFirstPersonMeshes(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BPWeaponCanFire()
    // endereco: casamento de bytes com a build de referencia
    bool BPWeaponCanFire() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.BPWeaponCanFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BPWeaponDealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamage
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPWeaponDealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, float>(this, "AShooterWeapon.BPWeaponDealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.BPWeaponZoom(bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=52+chamadores=2]]
    void BPWeaponZoom(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.BPWeaponZoom(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.BP_OnReloadNotify()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void BP_OnReloadNotify() const
    {
        NativeCall<void>(this, "AShooterWeapon.BP_OnReloadNotify()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.CanFire(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanFire(bool a0) const
    {
        return NativeCall<bool, bool>(this, "AShooterWeapon.CanFire(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.CanHarvestHitInstance(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanHarvestHitInstance(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.CanHarvestHitInstance(FHitResult&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.CanMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    bool CanMeleeAttack() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.CanMeleeAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.CanReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool CanReload() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.CanReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.CanRun()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanRun() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.CanRun()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.CanTarget()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanTarget() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.CanTarget()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.CheckForMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckForMeleeAttack() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.CheckForMeleeAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.CheckItemAssocation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void CheckItemAssocation() const
    {
        NativeCall<void>(this, "AShooterWeapon.CheckItemAssocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClearClientReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClearClientReload() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClearClientReload()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClearMeleeSwingHurtList()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClearMeleeSwingHurtList() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClearMeleeSwingHurtList()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientClearPendingReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientClearPendingReload() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientClearPendingReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientClearPendingReload_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientClearPendingReload_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ClientClearPendingReload_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientPlayShieldHitAnim()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientPlayShieldHitAnim() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientPlayShieldHitAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientPlayShieldHitAnim_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientPlayShieldHitAnim_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ClientPlayShieldHitAnim_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.ClientSetClipAmmo(int,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=57+chamadores=8]]
    void ClientSetClipAmmo(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientSetClipAmmo_Implementation(int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientSetClipAmmo_Implementation(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "AShooterWeapon.ClientSetClipAmmo_Implementation(int,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientSimulateWeaponFire()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientSimulateWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientSimulateWeaponFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=88+chamadores=6]]
    BrzPonteiro ClientSpawnMeleeEffects(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.ClientSpawnMeleeEffects(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientStartMuzzleFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientStartMuzzleFX() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientStartMuzzleFX()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientStartMuzzleFX_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientStartMuzzleFX_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ClientStartMuzzleFX_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientStartReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientStartReload() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientStartReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ClientStartReload_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClientStartReload_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ClientStartReload_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ClientStopSimulatingWeaponFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientStopSimulatingWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ClientStopSimulatingWeaponFire()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ConsumeAmmoItem(int)
    // endereco: casamento de bytes com a build de referencia
    void ConsumeAmmoItem(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.ConsumeAmmoItem(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ConsumeStamina(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ConsumeStamina(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterWeapon.ConsumeStamina(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.CosumeMeleeHitDurability(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void CosumeMeleeHitDurability(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "AShooterWeapon.CosumeMeleeHitDurability(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,fl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DealDamage(void* a0, void* a1, int a2, void* a3, float a4) const
    {
        return NativeCall<void*, void*, void*, int, void*, float>(this, "AShooterWeapon.DealDamage(FHitResult&,UE::Math::TVector<double>&,int,TSubclassOf<UDamageType>,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.DetachMeshFromPawn()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetachMeshFromPawn() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.DetachMeshFromPawn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.DetermineWeaponState()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DetermineWeaponState() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.DetermineWeaponState()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.DoMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    void DoMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon.DoMeleeAttack()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.DrawHUD(AShooterHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.EndDoMeleeSwing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro EndDoMeleeSwing() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.EndDoMeleeSwing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.EndMeleeSwing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndMeleeSwing() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.EndMeleeSwing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.FindAndDamageNearbyHarvestingElements(UE::Math::TVector<double>,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindAndDamageNearbyHarvestingElements(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.FindAndDamageNearbyHarvestingElements(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.FindComponentByName(FName)
    // endereco: casamento de bytes com a build de referencia
    UObject* FindComponentByName(unsigned long long a0) const
    {
        return NativeCall<UObject*, unsigned long long>(this, "AShooterWeapon.FindComponentByName(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.FireWeapon()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.FireWeapon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ForceFirstPerson()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceFirstPerson() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ForceFirstPerson()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ForceMeshUpdate(bool)
    // endereco: casamento de bytes com a build de referencia
    void ForceMeshUpdate(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.ForceMeshUpdate(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ForceUpdateClientAmmo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ForceUpdateClientAmmo() const
    {
        NativeCall<void>(this, "AShooterWeapon.ForceUpdateClientAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ForcesTPVCameraOffset()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool ForcesTPVCameraOffset() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.ForcesTPVCameraOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ForcesTPVCameraOffset_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForcesTPVCameraOffset_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ForcesTPVCameraOffset_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetActorForTargetingTooltip(FAttachedInstancedHarvestingElement**)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorForTargetingTooltip(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.GetActorForTargetingTooltip(FAttachedInstancedHarvestingElement**)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetAdjustedAim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdjustedAim() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetAdjustedAim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetAimAssistStrength()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAimAssistStrength() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetAimAssistStrength()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetAmmoPerClip()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAmmoPerClip() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetAmmoPerClip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetAmmoQuantityForAmmoItemTemplate(TSoftClassPtr<UPrimalItem>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAmmoQuantityForAmmoItemTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.GetAmmoQuantityForAmmoItemTemplate(TSoftClassPtr<UPrimalItem>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetAmmoReloadState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetAmmoReloadState() const
    {
        return NativeCall<int>(this, "AShooterWeapon.GetAmmoReloadState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetAttackerDamageImpactFXAttachSocket()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAttackerDamageImpactFXAttachSocket() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetAttackerDamageImpactFXAttachSocket()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetCameraDamageStartLocation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraDamageStartLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.GetCameraDamageStartLocation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetCameraShakeScale()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraShakeScale() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetCameraShakeScale()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetColorizeRegionActivated(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool GetColorizeRegionActivated(int a0) const
    {
        return NativeCall<bool, int>(this, "AShooterWeapon.GetColorizeRegionActivated(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.GetConsumeDurabilityPerShot()
    // endereco: casamento de bytes com a build de referencia
    float GetConsumeDurabilityPerShot() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetConsumeDurabilityPerShot()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetCurrentAmmo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetCurrentAmmo() const
    {
        return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetCurrentAmmoInClip()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    int GetCurrentAmmoInClip() const
    {
        return NativeCall<int>(this, "AShooterWeapon.GetCurrentAmmoInClip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetCurrentAmmoItemTemplate()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=239+chamadores=3+grafo=5/5]]
    UClass* GetCurrentAmmoItemTemplate() const
    {
        return NativeCall<UClass*>(this, "AShooterWeapon.GetCurrentAmmoItemTemplate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetCurrentAmmoItemTemplate_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentAmmoItemTemplate_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetCurrentAmmoItemTemplate_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetCurrentState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCurrentState() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetCurrentState()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon.GetDebugInfoString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetFireCameraShakeScale()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFireCameraShakeScale() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetFireCameraShakeScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::Math::TTransform<doub
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetHandsSocketsTransforms(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetIsUnequipping()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool GetIsUnequipping() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.GetIsUnequipping()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1155+grafo=42/42]]
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetMeleeSwingInteractionRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetMeleeSwingInteractionRadius() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetMeleeSwingInteractionRadius()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetMeleeSwingRadius()
    // endereco: casamento de bytes com a build de referencia
    float GetMeleeSwingRadius() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetMeleeSwingRadius()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetMuzzleDirection()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleDirection() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetMuzzleDirection()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetMuzzleLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMuzzleLocation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetMuzzleLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetPawnOwner()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetPawnOwner() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.GetPawnOwner()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetReloadAnim(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetReloadAnim(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon.GetReloadAnim(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetShootingCameraLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetShootingCameraLocation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.GetShootingCameraLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetSkeletalMeshComponent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UMeshComponent* GetSkeletalMeshComponent() const
    {
        return NativeCall<UMeshComponent*>(this, "AShooterWeapon.GetSkeletalMeshComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.GetStandingAnimation(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    UAnimSequence* GetStandingAnimation(void* a0, void* a1) const
    {
        return NativeCall<UAnimSequence*, void*, void*>(this, "AShooterWeapon.GetStandingAnimation(float&,float&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetTimeBetweenShots()
    // endereco: casamento de bytes com a build de referencia
    float GetTimeBetweenShots() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetTimeBetweenShots()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetWeaponAttackPlayRate()
    // endereco: casamento de bytes com a build de referencia
    float GetWeaponAttackPlayRate() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetWeaponAttackPlayRate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetWeaponCameraSettingsOverride()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    UObject* GetWeaponCameraSettingsOverride() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.GetWeaponCameraSettingsOverride()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetWeaponDamageMultiplier()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    float GetWeaponDamageMultiplier() const
    {
        return NativeCall<float>(this, "AShooterWeapon.GetWeaponDamageMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.GetWeaponMesh()
    // endereco: casamento de bytes com a build de referencia
    UObject* GetWeaponMesh() const
    {
        return NativeCall<UObject*>(this, "AShooterWeapon.GetWeaponMesh()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.HandleFiring(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleFiring(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon.HandleFiring(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.HasInfiniteAmmo()
    // endereco: casamento de bytes com a build de referencia
    bool HasInfiniteAmmo() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.HasInfiniteAmmo()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsFiring()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsFiring() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.IsFiring()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.IsFirstPersonMeshVisible()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsFirstPersonMeshVisible() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.IsFirstPersonMeshVisible()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsInMeleeAttack()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsInMeleeAttack() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.IsInMeleeAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsLocallyOwned()
    // endereco: casamento de bytes com a build de referencia
    bool IsLocallyOwned() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.IsLocallyOwned()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsMeleeSwingHurtListEmpty()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool IsMeleeSwingHurtListEmpty() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.IsMeleeSwingHurtListEmpty()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsOwningClient()
    // endereco: casamento de bytes com a build de referencia
    bool IsOwningClient() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.IsOwningClient()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.IsPlayingWeaponAnimMontage(FWeaponAnim&,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPlayingWeaponAnimMontage(void* a0, float a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, float, bool, bool>(this, "AShooterWeapon.IsPlayingWeaponAnimMontage(FWeaponAnim&,float,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.IsSimulated()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsSimulated() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.IsSimulated()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.IsValidUnStasisCaster()
    // classe: a funcao mora em UPrimalActor, e AShooterWeapon herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidUnStasisCaster() const
    {
        return NativeCall<void*>(this, "UPrimalActor.IsValidUnStasisCaster()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.IsWithinVolumeThatPreventsWeaponClass(AActor*,TSubclassOf<AShooterWeapon>)
    // endereco: casamento de bytes com a build de referencia
    bool IsWithinVolumeThatPreventsWeaponClass(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "AShooterWeapon.IsWithinVolumeThatPreventsWeaponClass(AActor*,TSubclassOf<AShooterWeapon>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.LocalPossessed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LocalPossessed() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.LocalPossessed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ManageClientTrashFrames()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ManageClientTrashFrames() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ManageClientTrashFrames()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.NetSetLastAttackMontage(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void NetSetLastAttackMontage(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.NetSetLastAttackMontage(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.NetSetLastAttackMontage_Implementation(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro NetSetLastAttackMontage_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon.NetSetLastAttackMontage_Implementation(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnBurstFinished()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnBurstFinished() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnBurstFinished()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnBurstStarted()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnBurstStarted() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnBurstStarted()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCameraUpdate(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon.OnCameraUpdate(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnDeserializedByGame(EOnDeserializationType::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDeserializedByGame(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon.OnDeserializedByGame(EOnDeserializationType::Type)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.OnDurabilityChanged(float,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnDurabilityChanged(float a0, bool a1) const
    {
        NativeCall<void, float, bool>(this, "AShooterWeapon.OnDurabilityChanged(float,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnEquip()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEquip() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnEquip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnEquipFinished()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnEquipFinished() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnEquipFinished()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.OnFPVMeshForceRefreshTimer()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnFPVMeshForceRefreshTimer() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.OnFPVMeshForceRefreshTimer()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.OnRep_CurrentAmmoInClip()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_CurrentAmmoInClip() const
    {
        NativeCall<void>(this, "AShooterWeapon.OnRep_CurrentAmmoInClip()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.OnRep_NetLoopedWeaponFire()
    // endereco: casamento de bytes com a build de referencia
    void OnRep_NetLoopedWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.OnRep_NetLoopedWeaponFire()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.OnRep_WeaponDurabilityPercent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void OnRep_WeaponDurabilityPercent() const
    {
        NativeCall<void>(this, "AShooterWeapon.OnRep_WeaponDurabilityPercent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayCameraAnimationFPV(UAnimMontage*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayCameraAnimationFPV(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.PlayCameraAnimationFPV(UAnimMontage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayFireAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayFireAnimation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.PlayFireAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayReloadAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayReloadAnimation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.PlayReloadAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayUnequipAnimation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayUnequipAnimation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.PlayUnequipAnimation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.PlayUseHarvestAnimation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void PlayUseHarvestAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon.PlayUseHarvestAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayWeaponAnimation(FWeaponAnim&,bool,bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayWeaponAnimation(void* a0, bool a1, bool a2, bool a3, bool a4, bool a5, bool a6) const
    {
        return NativeCall<void*, void*, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimation(FWeaponAnim&,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayWeaponAnimationEx(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayWeaponAnimationEx(void* a0, float a1, bool a2, bool a3, bool a4, bool a5, bool a6, bool a7) const
    {
        return NativeCall<void*, void*, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimationEx(FWeaponAnim&,float,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PlayWeaponAnimationEx_v2(FWeaponAnim&,UAnimMontage*,float,bool,bool,bool,bool,boo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlayWeaponAnimationEx_v2(void* a0, void* a1, float a2, bool a3, bool a4, bool a5, bool a6, bool a7, bool a8) const
    {
        return NativeCall<void*, void*, void*, float, bool, bool, bool, bool, bool, bool>(this, "AShooterWeapon.PlayWeaponAnimationEx_v2(FWeaponAnim&,UAnimMontage*,float,bool,bool,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.PlayWeaponBreakAnimation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=45+chamadores=2]]
    void PlayWeaponBreakAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon.PlayWeaponBreakAnimation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.PlayWeaponSound(USoundCue*)
    // endereco: casamento de bytes com a build de referencia
    UObject* PlayWeaponSound(void* a0) const
    {
        return NativeCall<UObject*, void*>(this, "AShooterWeapon.PlayWeaponSound(USoundCue*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.PostInitializeComponents()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.RefreshAmmoItemQuantity()
    // endereco: casamento de bytes com a build de referencia
    void RefreshAmmoItemQuantity() const
    {
        NativeCall<void>(this, "AShooterWeapon.RefreshAmmoItemQuantity()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.RefreshToggleAccessory()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshToggleAccessory() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.RefreshToggleAccessory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ReloadWeapon()
    // endereco: casamento de bytes com a build de referencia
    void ReloadWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon.ReloadWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.SelectMeleeAttackAnim(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SelectMeleeAttackAnim(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon.SelectMeleeAttackAnim(int)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.ServerSetColorizeRegion(int,bool)
    // endereco: casamento de bytes com a build de referencia
    void ServerSetColorizeRegion(int a0, bool a1) const
    {
        NativeCall<void, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ServerSetColorizeRegion_Implementation(int,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerSetColorizeRegion_Implementation(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "AShooterWeapon.ServerSetColorizeRegion_Implementation(int,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon.ServerSetMeleeAnimIndex(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ServerSetMeleeAnimIndex(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.ServerSetMeleeAnimIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ServerSetMeleeAnimIndex_Implementation(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerSetMeleeAnimIndex_Implementation(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon.ServerSetMeleeAnimIndex_Implementation(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStartAltFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStartAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStartAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStartFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStartFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStartFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStartReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStartReload() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStartReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStartSecondaryAction()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStartSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStopAltFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStopAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStopAltFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerStopFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerStopFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerStopFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ServerStopFire_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerStopFire_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ServerStopFire_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.ServerToggleAccessory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerToggleAccessory() const
    {
        NativeCall<void>(this, "AShooterWeapon.ServerToggleAccessory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ServerToggleAccessory_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerToggleAccessory_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ServerToggleAccessory_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.SetAccessoryEnabled(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetAccessoryEnabled(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.SetAccessoryEnabled(bool)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.SetAmmoInClip(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetAmmoInClip(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.SetAmmoInClip(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.SetAmmoReloadState(EWeaponAmmoReloadState)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetAmmoReloadState(int a0) const
    {
        return NativeCall<void*, int>(this, "AShooterWeapon.SetAmmoReloadState(EWeaponAmmoReloadState)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.SetAutoReload()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetAutoReload() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.SetAutoReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.SetOwningPawn(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetOwningPawn(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AShooterWeapon.SetOwningPawn(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.SetWeaponState(EWeaponState::Type)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void SetWeaponState(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.SetWeaponState(EWeaponState::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ShouldCheckAmmoReloadState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ShouldCheckAmmoReloadState() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ShouldCheckAmmoReloadState()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ShouldDealDamage(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon.ShouldDealDamage(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.SimulateWeaponFire()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SimulateWeaponFire() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.SimulateWeaponFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.SlowAccuracyReset()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SlowAccuracyReset() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.SlowAccuracyReset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StartAltFire()
    // endereco: casamento de bytes com a build de referencia
    void StartAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.StartAltFire()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.StartFire(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartFire(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StartMeleeSwing()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMeleeSwing() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StartMeleeSwing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StartMuzzleFX()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartMuzzleFX() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StartMuzzleFX()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StartReload(bool)
    // endereco: casamento de bytes com a build de referencia
    void StartReload(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.StartReload(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StartSecondaryAction()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StartSecondaryAction() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StartSecondaryActionEvent()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StartSecondaryActionEvent() const
    {
        NativeCall<void>(this, "AShooterWeapon.StartSecondaryActionEvent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StartUnequip()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StartUnequip() const
    {
        NativeCall<void>(this, "AShooterWeapon.StartUnequip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StartUnequipEvent()
    // endereco: casamento de bytes com a build de referencia
    void StartUnequipEvent() const
    {
        NativeCall<void>(this, "AShooterWeapon.StartUnequipEvent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StartUnequip_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StartUnequip_Implementation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StartUnequip_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StaticRegisterNativesAShooterWeapon()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro StaticRegisterNativesAShooterWeapon() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StaticRegisterNativesAShooterWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StopAltFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopAltFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.StopAltFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopCameraAnimationFPV(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopCameraAnimationFPV(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon.StopCameraAnimationFPV(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopCheckForMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopCheckForMeleeAttack() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StopCheckForMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StopFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.StopFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopMuzzleFX()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopMuzzleFX() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StopMuzzleFX()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopReloadAnimation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopReloadAnimation() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StopReloadAnimation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopSecondaryAction()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StopSecondaryAction() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.StopSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.StopSimulatingWeaponFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopSimulatingWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon.StopSimulatingWeaponFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.StopWeaponAnimation(FWeaponAnim&,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopWeaponAnimation(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "AShooterWeapon.StopWeaponAnimation(FWeaponAnim&,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "AShooterWeapon.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.TickMeleeSwing_SingleTraceInFront(float,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TickMeleeSwing_SingleTraceInFront(float a0, bool a1) const
    {
        return NativeCall<void*, float, bool>(this, "AShooterWeapon.TickMeleeSwing_SingleTraceInFront(float,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.ToggleAccessory()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ToggleAccessory() const
    {
        NativeCall<void>(this, "AShooterWeapon.ToggleAccessory()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.TriggerMeleeTickIfNoneWereOnHurtList(bool)
    // endereco: casamento de bytes com a build de referencia
    void TriggerMeleeTickIfNoneWereOnHurtList(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon.TriggerMeleeTickIfNoneWereOnHurtList(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon.TryFireWeapon()
    // endereco: casamento de bytes com a build de referencia
    bool TryFireWeapon() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.TryFireWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.UpdateDurabilityMaterialParams()
    // endereco: casamento de bytes com a build de referencia
    void UpdateDurabilityMaterialParams() const
    {
        NativeCall<void>(this, "AShooterWeapon.UpdateDurabilityMaterialParams()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.UpdateFirstPersonMeshes(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateFirstPersonMeshes(bool a0) const
    {
        return NativeCall<void*, bool>(this, "AShooterWeapon.UpdateFirstPersonMeshes(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.UseAlternateAimOffsetAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UseAlternateAimOffsetAnim() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.UseAlternateAimOffsetAnim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.UseAmmo(int)
    // endereco: casamento de bytes com a build de referencia
    void UseAmmo(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon.UseAmmo(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon.UsesAmmo()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool UsesAmmo() const
    {
        return NativeCall<bool>(this, "AShooterWeapon.UsesAmmo()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.ValidateFire()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateFire() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.ValidateFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.WeaponTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WeaponTrace(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AShooterWeapon.WeaponTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro WeaponTraceHits(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon.WeaponTraceHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon.`vcall'{4408,{flat}}()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro _vcall__4408__flat__() const
    {
        return NativeCall<void*>(this, "AShooterWeapon.`vcall'{4408,{flat}}()");
    }

    float& AimAssistStrengthWeaponField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimAssistStrengthWeapon"); }
    float& AimDriftPitchAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchAngle"); }
    float& AimDriftPitchFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftPitchFrequency"); }
    float& AimDriftYawAngleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawAngle"); }
    float& AimDriftYawFrequencyField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AimDriftYawFrequency"); }
    float& AllowMeleeTimeBeforeAnimationEndField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AllowMeleeTimeBeforeAnimationEnd"); }
    BrzCampoPonteiro AltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AltFireSound")); }
    BrzCampoPonteiro AltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AltMuzzleFX")); }
    BrzCampoPonteiro AltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AltMuzzleFX_FPV")); }
    BrzCampoPonteiro AltWeaponAmmoItemTemplatesDecendingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AltWeaponAmmoItemTemplatesDecending")); }
    BrzCampoPonteiro AlternateInventoryEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AlternateInventoryEquipAnim")); }
    float& AmmoIconsCountField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.AmmoIconsCount"); }
    int& AmmoInClipOnReloadField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.AmmoInClipOnReload"); }
    BrzCampoPonteiro AmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AmmoReloadState")); }
    BrzCampoPonteiro AmmoWheelIconOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AmmoWheelIconOverride")); }
    BrzCampoPonteiro AnimatedCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AnimatedCamera")); }
    FItemNetInfo& AssociatedItemNetInfoField() const
    { return *GetNativePointerField<FItemNetInfo*>(this, "AShooterWeapon.AssociatedItemNetInfo"); }
    BrzCampoPonteiro AssociatedMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AssociatedMission")); }
    BrzCampoPonteiro AssociatedPrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.AssociatedPrimalItem")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bLastMeleeHitStationary` +3, medido na build 25535041
    //  (offset absoluto medido: 0xE84; confianca alta)
    float& AutoReloadTimerField() const
    { return BrzCampoAncorado<float>(this, "bLastMeleeHitStationary", 3); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AmmoReloadState` +4, medido na build 25535041
    //  (offset absoluto medido: 0x1078; confianca alta)
    void*& CachedSelectedMeleeAnimField() const
    { return BrzCampoAncorado<void*>(this, "AmmoReloadState", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InsulationRange` +8, medido na build 25535041
    //  (offset absoluto medido: 0xE70; confianca alta)
    void*& CheckForMeleeAttackHandleField() const
    { return BrzCampoAncorado<void*>(this, "InsulationRange", 8); }
    unsigned char& ColorizeMuzzleVFXUseColorRegionField() const
    { return *GetNativePointerField<unsigned char*>(this, "AShooterWeapon.ColorizeMuzzleVFXUseColorRegion"); }
    int& CurrentAmmoField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmo"); }
    int& CurrentAmmoInClipField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.CurrentAmmoInClip"); }
    float& CurrentFiringSpreadField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.CurrentFiringSpread"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ProneTPVTargetingReloadAnim` +8, medido na build 25535041
    //  (offset absoluto medido: 0xD00; confianca alta)
    int& CurrentStateField() const
    { return BrzCampoAncorado<int>(this, "ProneTPVTargetingReloadAnim", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AmmoReloadState` +12, medido na build 25535041
    //  (offset absoluto medido: 0x1080; confianca alta)
    void*& CurrentWeaponCameraSettingsOverrideField() const
    { return BrzCampoAncorado<void*>(this, "AmmoReloadState", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastNotifyShotTime` +16, medido na build 25535041
    //  (offset absoluto medido: 0xD60; confianca alta)
    void*& DoHandleFiringHandleField() const
    { return BrzCampoAncorado<void*>(this, "LastNotifyShotTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AimAssistStrengthWeapon` +12, medido na build 25535041
    //  (offset absoluto medido: 0x1040; confianca alta)
    float& DraggingOffsetInterpField() const
    { return BrzCampoAncorado<float>(this, "AimAssistStrengthWeapon", 12); }
    float& DurabilityCostToEquipField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.DurabilityCostToEquip"); }
    BrzCampoPonteiro DyePreviewMeshOverrideSKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.DyePreviewMeshOverrideSK")); }
    BrzCampoPonteiro DyePreviewMeshOverrideSMField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.DyePreviewMeshOverrideSM")); }
    float& EndDoMeleeSwingTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.EndDoMeleeSwingTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bUseBlueprintAnimNotifications` +4, medido na build 25535041
    //  (offset absoluto medido: 0x6F0; confianca alta)
    void*& EndMeleeSwingHandleField() const
    { return BrzCampoAncorado<void*>(this, "bUseBlueprintAnimNotifications", 4); }
    BrzCampoPonteiro EquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.EquipAnim")); }
    BrzCampoPonteiro EquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.EquipNoAmmoClipAnim")); }
    USoundBase*& EquipSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "AShooterWeapon.EquipSound"); }
    float& EquipTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.EquipTime"); }
    FName& FPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.FPVAccessoryToggleComponent"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +64, medido na build 25535041
    //  (offset absoluto medido: 0xA08; confianca media)
    FRotator& FPVAdditionalLookRotOffsetField() const
    { return BrzCampoAncorado<FRotator>(this, "LastSocketPositions", 64); }
    float& FPVEnterTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVEnterTargetingInterpSpeed"); }
    float& FPVExitTargetingInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVExitTargetingInterpSpeed"); }
    float& FPVImmobilizedInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVImmobilizedInterpSpeed"); }
    FVector& FPVImmobilizedLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVImmobilizedLocationOffset"); }
    FRotator& FPVImmobilizedRotationOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVImmobilizedRotationOffset"); }
    FVector& FPVInventoryReequipOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVInventoryReequipOffset"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +88, medido na build 25535041
    //  (offset absoluto medido: 0xA20; confianca media)
    FVector& FPVLastLocOffsetField() const
    { return BrzCampoAncorado<FVector>(this, "LastSocketPositions", 88); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +160, medido na build 25535041
    //  (offset absoluto medido: 0xA68; confianca baixa)
    FRotator& FPVLastRotOffsetField() const
    { return BrzCampoAncorado<FRotator>(this, "LastSocketPositions", 160); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +112, medido na build 25535041
    //  (offset absoluto medido: 0xA38; confianca media)
    FVector& FPVLastVROffsetField() const
    { return BrzCampoAncorado<FVector>(this, "LastSocketPositions", 112); }
    FRotator& FPVLookAtInterpSpeedField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed"); }
    FRotator& FPVLookAtInterpSpeed_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtInterpSpeed_Targeting"); }
    FRotator& FPVLookAtMaximumOffsetField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset"); }
    FRotator& FPVLookAtMaximumOffset_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtMaximumOffset_Targeting"); }
    FRotator& FPVLookAtSpeedBaseField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase"); }
    FRotator& FPVLookAtSpeedBase_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVLookAtSpeedBase_Targeting"); }
    float& FPVMeleeTraceFXRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMeleeTraceFXRange"); }
    float& FPVMoveOffscreenIdleRestoreIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreInterval"); }
    float& FPVMoveOffscreenIdleRestoreSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenIdleRestoreSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMaxOffsetField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxOffset"); }
    float& FPVMoveOffscreenWhenTurningMaxViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMaxViewRotSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinMoveWeaponSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinMoveWeaponSpeed"); }
    float& FPVMoveOffscreenWhenTurningMinViewRotSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FPVMoveOffscreenWhenTurningMinViewRotSpeed"); }
    FVector& FPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVMuzzleLocationOffset"); }
    FVector& FPVRelativeLocationField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +136, medido na build 25535041
    //  (offset absoluto medido: 0xA50; confianca baixa)
    FVector& FPVRelativeLocationOffscreenOffsetField() const
    { return BrzCampoAncorado<FVector>(this, "LastSocketPositions", 136); }
    FVector& FPVRelativeLocation_TargetingField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.FPVRelativeLocation_Targeting"); }
    FRotator& FPVRelativeRotationField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation"); }
    FRotator& FPVRelativeRotation_TargetingField() const
    { return *GetNativePointerField<FRotator*>(this, "AShooterWeapon.FPVRelativeRotation_Targeting"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FPVMoveOffscreenWhenTurningMaxOffset` +8, medido na build 25535041
    //  (offset absoluto medido: 0xCB0; confianca alta)
    double& FPVStoppedTurningTimeField() const
    { return BrzCampoAncorado<double>(this, "FPVMoveOffscreenWhenTurningMaxOffset", 8); }
    BrzCampoPonteiro FinishBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FinishBurstAnim")); }
    BrzCampoPonteiro FireACField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FireAC")); }
    BrzCampoPonteiro FireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FireAnim")); }
    BrzCampoPonteiro FireCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FireCameraShake")); }
    float& FireCameraShakeSpreadScaleExponentField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponent"); }
    float& FireCameraShakeSpreadScaleExponentLessThanField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleExponentLessThan"); }
    float& FireCameraShakeSpreadScaleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplier"); }
    float& FireCameraShakeSpreadScaleMultiplierLessThanField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FireCameraShakeSpreadScaleMultiplierLessThan"); }
    BrzCampoPonteiro FireFinishSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FireFinishSound")); }
    BrzCampoPonteiro FireForceFeedbackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.FireForceFeedback")); }
    USoundCue*& FireSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon.FireSound"); }
    int& FiredLastNoAmmoShotField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.FiredLastNoAmmoShot"); }
    float& FluidSimSplashStrengthField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() const
    { return *GetNativePointerField<UNiagaraSystem**>(this, "AShooterWeapon.FluidSimSplashTemplateOverride"); }
    float& GlobalFireCameraShakeScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScale"); }
    float& GlobalFireCameraShakeScaleTargetingField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.GlobalFireCameraShakeScaleTargeting"); }
    BrzCampoPonteiro HarvestAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.HarvestAnim")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.HypoThermiaInsulation"); }
    BrzCampoPonteiro InstantConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.InstantConfig")); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.InsulationRange"); }
    float& ItemDestructionUnequipWeaponDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDestructionUnequipWeaponDelay"); }
    float& ItemDurabilityToConsumePerMeleeHitField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.ItemDurabilityToConsumePerMeleeHit"); }
    int& LastAmmoToConsumeField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.LastAmmoToConsume"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +40, medido na build 25535041
    //  (offset absoluto medido: 0x9F0; confianca media)
    FRotator& LastCameraRotationField() const
    { return BrzCampoAncorado<FRotator>(this, "LastSocketPositions", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InsulationRange` +16, medido na build 25535041
    //  (offset absoluto medido: 0xE78; confianca alta)
    double& LastDurabilityConsumptionTimeField() const
    { return BrzCampoAncorado<double>(this, "InsulationRange", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +32, medido na build 25535041
    //  (offset absoluto medido: 0x9E8; confianca media)
    double& LastFPVRenderTimeField() const
    { return BrzCampoAncorado<double>(this, "LastSocketPositions", 32); }
    double& LastFireTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon.LastFireTime"); }
    double& LastNotifyShotTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon.LastNotifyShotTime"); }
    int& LastSelectedMeleeAnimField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.LastSelectedMeleeAnim"); }
    TArray<void*>& LastSocketPositionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon.LastSocketPositions"); }
    FName& LeftHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.LeftHandIkSkeletalMeshSocketName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `AimAssistStrengthWeapon` +4, medido na build 25535041
    //  (offset absoluto medido: 0x1038; confianca alta)
    double& LocalInventoryViewingSkippedEquipAnimTimeField() const
    { return BrzCampoAncorado<double>(this, "AimAssistStrengthWeapon", 4); }
    BrzCampoPonteiro LockToIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.LockToIcon")); }
    BrzCampoPonteiro MeleeAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeAnim")); }
    BrzCampoPonteiro MeleeAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeAnimList")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets1PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeAnimListImpactFXAttachSockets1P")); }
    BrzCampoPonteiro MeleeAnimListImpactFXAttachSockets3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeAnimListImpactFXAttachSockets3P")); }
    float& MeleeAttackHarvetUsableComponentsRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackHarvetUsableComponentsRadius"); }
    float& MeleeAttackUsableHarvestDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageMultiplier"); }
    BrzCampoPonteiro MeleeAttackUsableHarvestDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeAttackUsableHarvestDamageType")); }
    BrzCampoPonteiro MeleeCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeCameraShake")); }
    float& MeleeCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeCameraShakeSpeedScale"); }
    BrzCampoPonteiro MeleeCameraShakeTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeCameraShakeTPV")); }
    float& MeleeConsumesStaminaField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeConsumesStamina"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.MeleeDamageAmount"); }
    float& MeleeDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeDamageImpulse"); }
    BrzCampoPonteiro MeleeDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeDamageType")); }
    BrzCampoPonteiro MeleeHitColorizeStructuresUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeHitColorizeStructuresUI")); }
    float& MeleeHitRandomChanceToDestroyItemField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MeleeHitRandomChanceToDestroyItem"); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeHitTargetCameraShake")); }
    BrzCampoPonteiro MeleeHitTargetCameraShakeMobileField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeHitTargetCameraShakeMobile")); }
    BrzCampoPonteiro MeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeNoAmmoClipAnim")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MeleeAttackUsableHarvestDamageMultiplier` +4, medido na build 25535041
    //  (offset absoluto medido: 0xEB8; confianca alta)
    void*& MeleeSwingHarvestableComponentListField() const
    { return BrzCampoAncorado<void*>(this, "MeleeAttackUsableHarvestDamageMultiplier", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastSocketPositions` +16, medido na build 25535041
    //  (offset absoluto medido: 0x9D8; confianca media)
    void*& MeleeSwingHurtListField() const
    { return BrzCampoAncorado<void*>(this, "LastSocketPositions", 16); }
    TArray<void*>& MeleeSwingSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AShooterWeapon.MeleeSwingSockets"); }
    BrzCampoPonteiro MeleeWithHitAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MeleeWithHitAnimList")); }
    USkeletalMeshComponent*& Mesh1PField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "AShooterWeapon.Mesh1P"); }
    BrzCampoPonteiro Mesh3PField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.Mesh3P")); }
    float& MinItemDurabilityPercentageForShotField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.MinItemDurabilityPercentageForShot"); }
    FName& MuzzleAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.MuzzleAttachPoint"); }
    BrzCampoPonteiro MuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MuzzleFX")); }
    BrzCampoPonteiro MuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MuzzleFX_FPV")); }
    BrzCampoPonteiro MuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MuzzlePSC")); }
    BrzCampoPonteiro MuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MuzzlePSCSecondary")); }
    BrzCampoPonteiro MyPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.MyPawn")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ScopedBuff` +40, medido na build 25535041
    //  (offset absoluto medido: 0xFC8; confianca media)
    TWeakObjectPtr<void>& MyScopedBuffField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "ScopedBuff", 40); }
    double& NextAllowedMeleeTimeField() const
    { return *GetNativePointerField<double*>(this, "AShooterWeapon.NextAllowedMeleeTime"); }
    BrzCampoPonteiro NiagaraAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraAltMuzzleFX")); }
    BrzCampoPonteiro NiagaraAltMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraAltMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraMuzzleFX")); }
    BrzCampoPonteiro NiagaraMuzzleFX_FPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraMuzzleFX_FPV")); }
    BrzCampoPonteiro NiagaraMuzzlePSCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraMuzzlePSC")); }
    BrzCampoPonteiro NiagaraMuzzlePSCSecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NiagaraMuzzlePSCSecondary")); }
    BrzCampoPonteiro NoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.NoAmmoFireAnim")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EquipTime` +8, medido na build 25535041
    //  (offset absoluto medido: 0x4A0; confianca alta)
    void*& OnEquipFinishedHandleField() const
    { return BrzCampoAncorado<void*>(this, "EquipTime", 8); }
    BrzCampoPonteiro OpenInventoryAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OpenInventoryAnim")); }
    BrzCampoPonteiro OutOfAmmoSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OutOfAmmoSound")); }
    FName& OverrideAttachPointField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.OverrideAttachPoint"); }
    BrzCampoPonteiro OverrideJumpAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideJumpAnim")); }
    BrzCampoPonteiro OverrideLandedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideLandedAnim")); }
    float& OverrideMuzzleFXAlphaField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.OverrideMuzzleFXAlpha"); }
    BrzCampoPonteiro OverridePawnTPVAnimBlueprintField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverridePawnTPVAnimBlueprint")); }
    BrzCampoPonteiro OverrideProneInAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideProneInAnim")); }
    BrzCampoPonteiro OverrideProneOutAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideProneOutAnim")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceFromField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideRiderAnimSequenceFrom")); }
    BrzCampoPonteiro OverrideRiderAnimSequenceToField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideRiderAnimSequenceTo")); }
    BrzCampoPonteiro OverrideTPVShieldAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.OverrideTPVShieldAnimation")); }
    float& OverrideTargetingFOVField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.OverrideTargetingFOV"); }
    BrzCampoPonteiro PartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.PartialReloadAnim")); }
    float& PassiveDurabilityCostIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostInterval"); }
    float& PassiveDurabilityCostPerIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.PassiveDurabilityCostPerInterval"); }
    BrzCampoPonteiro PrimaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.PrimaryClipIcon")); }
    int& PrimaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.PrimaryClipIconOffset"); }
    BrzCampoPonteiro PrimaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.PrimaryIcon")); }
    BrzCampoPonteiro ProneTPVPartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ProneTPVPartialReloadAnim")); }
    BrzCampoPonteiro ProneTPVReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ProneTPVReloadAnim")); }
    BrzCampoPonteiro ProneTPVTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ProneTPVTargetingReloadAnim")); }
    BrzCampoPonteiro ReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ReloadAnim")); }
    float& ReloadBeforeAnimFinishesTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.ReloadBeforeAnimFinishesTime"); }
    BrzCampoPonteiro ReloadCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ReloadCameraShake")); }
    float& ReloadCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.ReloadCameraShakeSpeedScale"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EquipTime` +16, medido na build 25535041
    //  (offset absoluto medido: 0x4A8; confianca alta)
    void*& ReloadWeaponHandleField() const
    { return BrzCampoAncorado<void*>(this, "EquipTime", 16); }
    BrzCampoPonteiro RemovalOptionsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.RemovalOptionsIcon")); }
    BrzCampoPonteiro RemoveIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.RemoveIcon")); }
    FName& RightHandIkSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.RightHandIkSkeletalMeshSocketName"); }
    FName& ScopeCrosshairColorParameterField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.ScopeCrosshairColorParameter"); }
    BrzCampoPonteiro ScopeCrosshairMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ScopeCrosshairMI")); }
    BrzCampoPonteiro ScopeCrosshairMIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ScopeCrosshairMID")); }
    float& ScopeCrosshairSizeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.ScopeCrosshairSize"); }
    BrzCampoPonteiro ScopeOverlayMIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ScopeOverlayMI")); }
    BrzCampoPonteiro ScopedBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ScopedBuff")); }
    BrzCampoPonteiro SecondaryClipIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.SecondaryClipIcon")); }
    int& SecondaryClipIconOffsetField() const
    { return *GetNativePointerField<int*>(this, "AShooterWeapon.SecondaryClipIconOffset"); }
    BrzCampoPonteiro SecondaryIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.SecondaryIcon")); }
    BrzCampoPonteiro ShieldHitAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ShieldHitAnim")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `CurrentFiringSpread` +8, medido na build 25535041
    //  (offset absoluto medido: 0xF98; confianca alta)
    void*& SlowAccuracyResetHandleField() const
    { return BrzCampoAncorado<void*>(this, "CurrentFiringSpread", 8); }
    BrzCampoPonteiro StartBurstAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.StartBurstAnim")); }
    FName& TPVAccessoryToggleComponentField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon.TPVAccessoryToggleComponent"); }
    float& TPVCameraYawRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TPVCameraYawRange"); }
    BrzCampoPonteiro TPVForcePlayAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TPVForcePlayAnim")); }
    FVector& TPVMuzzleLocationOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.TPVMuzzleLocationOffset"); }
    float& TargetingDelayTimeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingDelayTime"); }
    float& TargetingFOVInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingFOVInterpSpeed"); }
    BrzCampoPonteiro TargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TargetingFireAnim")); }
    BrzCampoPonteiro TargetingInfoToolTipWidgetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TargetingInfoToolTipWidget")); }
    FVector2D& TargetingInfoTooltipPaddingField() const
    { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipPadding"); }
    FVector2D& TargetingInfoTooltipScaleField() const
    { return *GetNativePointerField<FVector2D*>(this, "AShooterWeapon.TargetingInfoTooltipScale"); }
    BrzCampoPonteiro TargetingNoAmmoFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TargetingNoAmmoFireAnim")); }
    BrzCampoPonteiro TargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TargetingReloadAnim")); }
    BrzCampoPonteiro TargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.TargetingSound")); }
    float& TargetingTooltipCheckRangeField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TargetingTooltipCheckRange"); }
    float& TheMeleeSwingInteractionRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingInteractionRadius"); }
    float& TheMeleeSwingRadiusField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingRadius"); }
    float& TheMeleeSwingRadiusScalarWhenRidingField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TheMeleeSwingRadiusScalarWhenRiding"); }
    float& TimeToAutoReloadField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.TimeToAutoReload"); }
    BrzCampoPonteiro ToggleAccessorySoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.ToggleAccessorySound")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `EquipTime` +24, medido na build 25535041
    //  (offset absoluto medido: 0x4B0; confianca alta)
    void*& TriggerEffectField() const
    { return BrzCampoAncorado<void*>(this, "EquipTime", 24); }
    BrzCampoPonteiro UnequipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.UnequipAnim")); }
    BrzCampoPonteiro UnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.UnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro UnlockFromIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.UnlockFromIcon")); }
    BrzCampoPonteiro UntargetingSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.UntargetingSound")); }
    FVector& VRTargetingAimOriginOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingAimOriginOffset"); }
    FVector& VRTargetingModelOffsetField() const
    { return *GetNativePointerField<FVector*>(this, "AShooterWeapon.VRTargetingModelOffset"); }
    BrzCampoPonteiro WeaponAmmoItemTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponAmmoItemTemplate")); }
    BrzCampoPonteiro WeaponBreakAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponBreakAnim")); }
    BrzCampoPonteiro WeaponCameraSettingsOverrideClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponCameraSettingsOverrideClass")); }
    BrzCampoPonteiro WeaponConfigField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponConfig")); }
    float& WeaponDurabilityPercentField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponDurabilityPercent"); }
    float& WeaponDurabilityPercentUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponDurabilityPercentUpdateInterval"); }
    BrzCampoPonteiro WeaponMesh3PFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponMesh3PFireAnim")); }
    BrzCampoPonteiro WeaponMesh3PReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.WeaponMesh3PReloadAnim")); }
    float& WeaponUnequipDelayField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon.WeaponUnequipDelay"); }
    BrzCampoPonteiro bAllowDedicatedThirdPersonWeaponMeshTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowDedicatedThirdPersonWeaponMeshTick")); }
    BrzCampoPonteiro bAllowDropAndPickupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowDropAndPickup")); }
    BrzCampoPonteiro bAllowDropAndPickupOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowDropAndPickupOnReload")); }
    BrzCampoPonteiro bAllowEmptyAmmoClipOnFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowEmptyAmmoClipOnFire")); }
    BrzCampoPonteiro bAllowFullClipReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowFullClipReload")); }
    BrzCampoPonteiro bAllowRunningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowRunning")); }
    BrzCampoPonteiro bAllowRunningWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowRunningWhileFiring")); }
    BrzCampoPonteiro bAllowRunningWhileMeleeAttackingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowRunningWhileMeleeAttacking")); }
    BrzCampoPonteiro bAllowRunningWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowRunningWhileReloading")); }
    BrzCampoPonteiro bAllowSeattingWhileEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowSeattingWhileEquipped")); }
    BrzCampoPonteiro bAllowSettingColorizeRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowSettingColorizeRegions")); }
    BrzCampoPonteiro bAllowSubmergedFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowSubmergedFiring")); }
    BrzCampoPonteiro bAllowTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowTargeting")); }
    bool& bAllowTargetingDuringMeleeSwingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowTargetingDuringMeleeSwing"); }
    BrzCampoPonteiro bAllowTargetingWhileReloadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowTargetingWhileReloading")); }
    BrzCampoPonteiro bAllowUseHarvestingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowUseHarvesting")); }
    bool& bAllowUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bAllowUseOnSeatingStructure"); }
    BrzCampoPonteiro bAllowUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAllowUseWhileRidingDino")); }
    BrzCampoPonteiro bAltFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAltFireDoesMeleeAttack")); }
    BrzCampoPonteiro bAltFireDoesNotStopFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAltFireDoesNotStopFire")); }
    BrzCampoPonteiro bAlternateStandingAnimBypassLayeredBlendField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAlternateStandingAnimBypassLayeredBlend")); }
    BrzCampoPonteiro bApplyAimDriftWhenTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bApplyAimDriftWhenTargeting")); }
    BrzCampoPonteiro bAttemptToDyeWithMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAttemptToDyeWithMeleeAttack")); }
    BrzCampoPonteiro bAutoDestroyPlayerWeaponWhenSleepingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAutoDestroyPlayerWeaponWhenSleeping")); }
    BrzCampoPonteiro bAutoRefireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bAutoRefire")); }
    bool& bBPDoClientCheckCanFireField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPDoClientCheckCanFire"); }
    BrzCampoPonteiro bBPHandleMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bBPHandleMeleeAttack")); }
    bool& bBPOverrideAspectRatioField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideAspectRatio"); }
    bool& bBPOverrideFPVMasterPoseComponentField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bBPOverrideFPVMasterPoseComponent"); }
    BrzCampoPonteiro bBPUseTargetingEventsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bBPUseTargetingEvents")); }
    BrzCampoPonteiro bBPUseWeaponCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bBPUseWeaponCanFire")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `FinishBurstAnim` +16, medido na build 25535041
    //  (offset absoluto medido: 0x1068; confianca alta)
    void*& bBlockCameraAnimFPVField() const
    { return BrzCampoAncorado<void*>(this, "FinishBurstAnim", 16); }
    BrzCampoPonteiro bCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bCanAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bCanAltFire")); }
    bool& bCanBeUsedAsEquipmentField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCanBeUsedAsEquipment"); }
    BrzCampoPonteiro bCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bCanFire")); }
    BrzCampoPonteiro bCheckBuffOverrideWeaponFireTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bCheckBuffOverrideWeaponFireTransform")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bLastMeleeHitStationary` +1, medido na build 25535041
    //  (offset absoluto medido: 0xE82; confianca alta)
    bool& bClientAlreadyReloadedField() const
    { return BrzCampoAncorado<bool>(this, "bLastMeleeHitStationary", 1); }
    BrzCampoPonteiro bClientTriggersHandleFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bClientTriggersHandleFiring")); }
    BrzCampoPonteiro bClipScopeInYField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bClipScopeInY")); }
    BrzCampoPonteiro bCloseRadialWheelOnAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bCloseRadialWheelOnAltFire")); }
    BrzCampoPonteiro bColorCrosshairBasedOnTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bColorCrosshairBasedOnTarget")); }
    BrzCampoPonteiro bColorizeMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bColorizeMuzzleFX")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MeleeAttackUsableHarvestDamageMultiplier` +84, medido na build 25535041
    //  (offset absoluto medido: 0xF08; confianca media)
    void*& bColorizeRegionsField() const
    { return BrzCampoAncorado<void*>(this, "MeleeAttackUsableHarvestDamageMultiplier", 84); }
    BrzCampoPonteiro bConsiderWeaponScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bConsiderWeaponScaleOnAttach")); }
    BrzCampoPonteiro bConsumeAmmoItemOnReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bConsumeAmmoItemOnReload")); }
    BrzCampoPonteiro bConsumeAmmoOnUseAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bConsumeAmmoOnUseAmmo")); }
    BrzCampoPonteiro bConsumeZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bConsumeZoomInOut")); }
    bool& bConsumedDurabilityForThisMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bConsumedDurabilityForThisMeleeHit"); }
    bool& bCutsEnemyGrapplingCableField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bCutsEnemyGrapplingCable"); }
    BrzCampoPonteiro bDirectAltFireToSeconaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectAltFireToSeconaryAction")); }
    BrzCampoPonteiro bDirectPrimaryFireToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectPrimaryFireToAltFire")); }
    BrzCampoPonteiro bDirectPrimaryFireToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectPrimaryFireToSecondaryAction")); }
    BrzCampoPonteiro bDirectTargetingToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectTargetingToAltFire")); }
    BrzCampoPonteiro bDirectTargetingToPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectTargetingToPrimaryFire")); }
    BrzCampoPonteiro bDirectTargetingToSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDirectTargetingToSecondaryAction")); }
    BrzCampoPonteiro bDisableGamepadAimAssistField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDisableGamepadAimAssist")); }
    bool& bDisableShooterOnElectricStormField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableShooterOnElectricStorm"); }
    bool& bDisableWeaponCrosshairField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bDisableWeaponCrosshair"); }
    BrzCampoPonteiro bDoMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDoMeleeSwing")); }
    BrzCampoPonteiro bDoesntUsePrimalItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDoesntUsePrimalItem")); }
    BrzCampoPonteiro bDontActuallyConsumeItemAmmoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDontActuallyConsumeItemAmmo")); }
    BrzCampoPonteiro bDontDeactivateWeaponInstigatorBuffsOnUnequipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDontDeactivateWeaponInstigatorBuffsOnUnequip")); }
    BrzCampoPonteiro bDontUseNativeTickMeleeSwingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDontUseNativeTickMeleeSwing")); }
    BrzCampoPonteiro bDurabilityUseWeaponMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bDurabilityUseWeaponMaterial")); }
    BrzCampoPonteiro bFPVMoveOffscreenWhenTurningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bFPVMoveOffscreenWhenTurning")); }
    BrzCampoPonteiro bFPVNonDefaultWeaponBonesHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bFPVNonDefaultWeaponBonesHidden")); }
    BrzCampoPonteiro bFPVScopedTargetingHidesNonWeaponHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bFPVScopedTargetingHidesNonWeaponHUD")); }
    bool& bFoceSimulatedTickField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bFoceSimulatedTick"); }
    bool& bForceAllowMountedWeaponryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceAllowMountedWeaponry"); }
    BrzCampoPonteiro bForceAllowPassengerTPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceAllowPassengerTPV")); }
    BrzCampoPonteiro bForceAlwaysPlayEquipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceAlwaysPlayEquipAnim")); }
    BrzCampoPonteiro bForceFirstPersonWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceFirstPersonWhileTargeting")); }
    BrzCampoPonteiro bForceKeepEquippedWhileInInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceKeepEquippedWhileInInventory")); }
    BrzCampoPonteiro bForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bForcePreventUseWhileRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForcePreventUseWhileRidingDino")); }
    BrzCampoPonteiro bForceReloadOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceReloadOnDestruction")); }
    BrzCampoPonteiro bForceShowCrosshairWhileFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceShowCrosshairWhileFiring")); }
    bool& bForceTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPVCameraOffset"); }
    bool& bForceTPV_EquippedWhileRidingField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTPV_EquippedWhileRiding"); }
    BrzCampoPonteiro bForceTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceTargeting")); }
    BrzCampoPonteiro bForceTargetingOnDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bForceTargetingOnDino")); }
    bool& bForceTickWithNoControllerField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bForceTickWithNoController"); }
    BrzCampoPonteiro bGamepadLeftIsPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bGamepadLeftIsPrimaryFire")); }
    BrzCampoPonteiro bGamepadRightIsSecondaryActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bGamepadRightIsSecondaryAction")); }
    BrzCampoPonteiro bHasPlayedReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHasPlayedReload")); }
    BrzCampoPonteiro bHasToggleableAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHasToggleableAccessory")); }
    BrzCampoPonteiro bHideDamageSourceFromLogsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHideDamageSourceFromLogs")); }
    BrzCampoPonteiro bHideFPVMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHideFPVMesh")); }
    BrzCampoPonteiro bHideFPVMeshWhileTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHideFPVMeshWhileTargeting")); }
    BrzCampoPonteiro bHideLeftArmFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bHideLeftArmFPV")); }
    BrzCampoPonteiro bIgnorePlayerReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIgnorePlayerReload")); }
    BrzCampoPonteiro bIgnoreReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIgnoreReloadState")); }
    BrzCampoPonteiro bIgnoreTargetingFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIgnoreTargetingFOV")); }
    BrzCampoPonteiro bImpactAttachFXUsesPawnMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bImpactAttachFXUsesPawnMesh")); }
    BrzCampoPonteiro bInstantAccuracyResetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bInstantAccuracyReset")); }
    BrzCampoPonteiro bIsAccessoryActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsAccessoryActive")); }
    BrzCampoPonteiro bIsChainsawWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsChainsawWeapon")); }
    BrzCampoPonteiro bIsDefaultWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsDefaultWeapon")); }
    BrzCampoPonteiro bIsInDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsInDestruction")); }
    BrzCampoPonteiro bIsLastAmmoInClipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsLastAmmoInClip")); }
    BrzCampoPonteiro bIsMeleeWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsMeleeWeapon")); }
    BrzCampoPonteiro bIsSpyglassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsSpyglass")); }
    BrzCampoPonteiro bIsWeaponPingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsWeaponPing")); }
    BrzCampoPonteiro bIsWeaponTrackerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bIsWeaponTracker")); }
    bool& bLastMeleeHitField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHit"); }
    bool& bLastMeleeHitStationaryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bLastMeleeHitStationary"); }
    BrzCampoPonteiro bListenToAppliedForecesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bListenToAppliedForeces")); }
    BrzCampoPonteiro bLoopedFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bLoopedFireAnim")); }
    BrzCampoPonteiro bLoopedFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bLoopedFireSound")); }
    BrzCampoPonteiro bLoopedMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bLoopedMuzzleFX")); }
    BrzCampoPonteiro bLoopingSimulateWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bLoopingSimulateWeaponFire")); }
    BrzCampoPonteiro bMeleeAttackHarvetUsableComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bMeleeAttackHarvetUsableComponents")); }
    BrzCampoPonteiro bMeleeHitCaptureDermisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bMeleeHitCaptureDermis")); }
    BrzCampoPonteiro bMeleeHitColorizesStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bMeleeHitColorizesStructures")); }
    BrzCampoPonteiro bMeleeHitUseMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bMeleeHitUseMuzzleFX")); }
    BrzCampoPonteiro bNetLoopedSimulatingWeaponFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bNetLoopedSimulatingWeaponFire")); }
    BrzCampoPonteiro bOnlyAllowUseWhenRidingDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bOnlyAllowUseWhenRidingDino")); }
    BrzCampoPonteiro bOnlyDamagePawnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bOnlyDamagePawns")); }
    bool& bOnlyPassiveDurabilityWhenAccessoryActiveField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyPassiveDurabilityWhenAccessoryActive"); }
    BrzCampoPonteiro bOnlyUseFirstMeleeAnimWithShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bOnlyUseFirstMeleeAnimWithShield")); }
    bool& bOnlyUseOnSeatingStructureField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bOnlyUseOnSeatingStructure"); }
    BrzCampoPonteiro bOverrideAimOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bOverrideAimOffsets")); }
    BrzCampoPonteiro bOverrideStandingAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bOverrideStandingAnim")); }
    BrzCampoPonteiro bPreventCarriedZoomInOutField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventCarriedZoomInOut")); }
    BrzCampoPonteiro bPreventCrosshairDrawField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventCrosshairDraw")); }
    BrzCampoPonteiro bPreventEquippingUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventEquippingUnderwater")); }
    BrzCampoPonteiro bPreventItemColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventItemColors")); }
    BrzCampoPonteiro bPreventLeftShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventLeftShoulder")); }
    bool& bPreventOpeningInventoryField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bPreventOpeningInventory"); }
    BrzCampoPonteiro bPreventRightShoulderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPreventRightShoulder")); }
    BrzCampoPonteiro bPrimaryFireDoesMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bPrimaryFireDoesMeleeAttack")); }
    BrzCampoPonteiro bReloadAnimForceTickPoseOnServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bReloadAnimForceTickPoseOnServer")); }
    bool& bReplicateCurrentAmmoInClipToNonOwnersField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bReplicateCurrentAmmoInClipToNonOwners"); }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bRestrictTPVCameraYaw"); }
    BrzCampoPonteiro bScopeFullscreenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bScopeFullscreen")); }
    BrzCampoPonteiro bSecondaryActionStopsFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bSecondaryActionStopsFire")); }
    BrzCampoPonteiro bServerIgnoreCheckCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bServerIgnoreCheckCanFire")); }
    BrzCampoPonteiro bSpawnedByMissionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bSpawnedByMission")); }
    BrzCampoPonteiro bSupportsOffhandShieldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bSupportsOffhandShield")); }
    BrzCampoPonteiro bTargetUnTargetWithClickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bTargetUnTargetWithClick")); }
    BrzCampoPonteiro bTargetingForceOwnerControllerHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bTargetingForceOwnerControllerHighQualityViewerReplication")); }
    BrzCampoPonteiro bTargetingForceTraceFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bTargetingForceTraceFloatingHUD")); }
    BrzCampoPonteiro bToggleAccessoryUseAltFireSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bToggleAccessoryUseAltFireSound")); }
    BrzCampoPonteiro bToggleAccessoryUseAltMuzzleFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bToggleAccessoryUseAltMuzzleFX")); }
    BrzCampoPonteiro bUseAbsoluteScaleOnAttachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAbsoluteScaleOnAttach")); }
    BrzCampoPonteiro bUseAlternateAimOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAlternateAimOffset")); }
    BrzCampoPonteiro bUseAmmoOnFiringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAmmoOnFiring")); }
    BrzCampoPonteiro bUseAmmoReloadStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAmmoReloadState")); }
    BrzCampoPonteiro bUseAmmoServerOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAmmoServerOnly")); }
    BrzCampoPonteiro bUseAmmoSupportsAdjustedAmmoPerShotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAmmoSupportsAdjustedAmmoPerShot")); }
    BrzCampoPonteiro bUseAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseAutoReload")); }
    bool& bUseBPAdjustAmmoPerShotField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPAdjustAmmoPerShot"); }
    BrzCampoPonteiro bUseBPAnimNotifyCustomState_TickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPAnimNotifyCustomState_Tick")); }
    BrzCampoPonteiro bUseBPCanEquipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPCanEquip")); }
    BrzCampoPonteiro bUseBPCanFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPCanFire")); }
    BrzCampoPonteiro bUseBPCanMeleeAttackField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPCanMeleeAttack")); }
    BrzCampoPonteiro bUseBPCanToggleAccessoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPCanToggleAccessory")); }
    BrzCampoPonteiro bUseBPForceFirstPersonField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPForceFirstPerson")); }
    BrzCampoPonteiro bUseBPForceTPVTargetingAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPForceTPVTargetingAnimation")); }
    BrzCampoPonteiro bUseBPGetActorForTargetingTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPGetActorForTargetingTooltip")); }
    BrzCampoPonteiro bUseBPGetCrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPGetCrosshairColor")); }
    BrzCampoPonteiro bUseBPGetExtraPreviewMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPGetExtraPreviewMeshes")); }
    BrzCampoPonteiro bUseBPGetSelectedMeleeAttackAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPGetSelectedMeleeAttackAnim")); }
    BrzCampoPonteiro bUseBPGetTPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPGetTPVCameraOffset")); }
    BrzCampoPonteiro bUseBPIsValidUnstasisActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPIsValidUnstasisActor")); }
    BrzCampoPonteiro bUseBPModifyFOVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPModifyFOV")); }
    BrzCampoPonteiro bUseBPOnBurstFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOnBurstFinished")); }
    BrzCampoPonteiro bUseBPOnBurstStartedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOnBurstStarted")); }
    BrzCampoPonteiro bUseBPOnMaxDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOnMaxDurability")); }
    BrzCampoPonteiro bUseBPOnScopedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOnScoped")); }
    BrzCampoPonteiro bUseBPOnWeaponAnimPlayedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOnWeaponAnimPlayedNotify")); }
    BrzCampoPonteiro bUseBPOverrideAimDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOverrideAimDirection")); }
    BrzCampoPonteiro bUseBPOverrideDamageImpactLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOverrideDamageImpactLocation")); }
    BrzCampoPonteiro bUseBPOverrideMeleeSwingSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOverrideMeleeSwingSockets")); }
    BrzCampoPonteiro bUseBPOverridePerShotDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOverridePerShotDurability")); }
    BrzCampoPonteiro bUseBPOverrideRootRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPOverrideRootRotationOffset")); }
    BrzCampoPonteiro bUseBPPostSpawnMuzzleEffectField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPPostSpawnMuzzleEffect")); }
    BrzCampoPonteiro bUseBPPreventSwitchingWeaponField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPPreventSwitchingWeapon")); }
    BrzCampoPonteiro bUseBPRemainEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPRemainEquipped")); }
    BrzCampoPonteiro bUseBPShouldDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPShouldDealDamage")); }
    bool& bUseBPSpawnMeleeEffectsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBPSpawnMeleeEffects"); }
    BrzCampoPonteiro bUseBPStartEquippedNotifyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPStartEquippedNotify")); }
    BrzCampoPonteiro bUseBPUpdateFirstPersonMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPUpdateFirstPersonMeshes")); }
    BrzCampoPonteiro bUseBPWeaponDealDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBPWeaponDealDamage")); }
    bool& bUseBlueprintAnimNotificationsField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseBlueprintAnimNotifications"); }
    BrzCampoPonteiro bUseBurstFinishAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBurstFinishAnim")); }
    BrzCampoPonteiro bUseBurstStartAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseBurstStartAnim")); }
    BrzCampoPonteiro bUseCanAccessoryBeSetOnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseCanAccessoryBeSetOn")); }
    BrzCampoPonteiro bUseCharacterMeleeDamageModifierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseCharacterMeleeDamageModifier")); }
    BrzCampoPonteiro bUseCustomSeatedAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseCustomSeatedAnim")); }
    BrzCampoPonteiro bUseDinoRangeForTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseDinoRangeForTooltip")); }
    BrzCampoPonteiro bUseEquipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseEquipNoAmmoClipAnim")); }
    bool& bUseFireCameraShakeScaleField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bUseFireCameraShakeScale"); }
    BrzCampoPonteiro bUseHandIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseHandIk")); }
    BrzCampoPonteiro bUseMeleeNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseMeleeNoAmmoClipAnim")); }
    BrzCampoPonteiro bUsePartialReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUsePartialReloadAnim")); }
    BrzCampoPonteiro bUsePostUpdateTickForFPVParticlesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUsePostUpdateTickForFPVParticles")); }
    BrzCampoPonteiro bUseScopeOverlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseScopeOverlay")); }
    BrzCampoPonteiro bUseTPVWeaponMeshMeleeSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseTPVWeaponMeshMeleeSockets")); }
    BrzCampoPonteiro bUseTargetingAimDownSightsExposureAdjustmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseTargetingAimDownSightsExposureAdjustment")); }
    BrzCampoPonteiro bUseTargetingFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseTargetingFireAnim")); }
    BrzCampoPonteiro bUseTargetingReloadAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseTargetingReloadAnim")); }
    BrzCampoPonteiro bUseUnequipNoAmmoClipAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bUseUnequipNoAmmoClipAnim")); }
    BrzCampoPonteiro bWantsToAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bWantsToAltFire")); }
    BrzCampoPonteiro bWantsToAutoReloadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bWantsToAutoReload")); }
    BrzCampoPonteiro bWantsToFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon.bWantsToFire")); }
    bool& bWasLastFireFromGamePadField() const
    { return *GetNativePointerField<bool*>(this, "AShooterWeapon.bWasLastFireFromGamePad"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `TargetingFireAnim` +24, medido na build 25535041
    //  (offset absoluto medido: 0xCD0; confianca alta)
    void*& clientTrashFramesField() const
    { return BrzCampoAncorado<void*>(this, "TargetingFireAnim", 24); }
    BitFieldValue<bool, unsigned __int32> bUseDinoRangeForTooltip()
    { return { (void*)this, "bUseDinoRangeForTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bFPVUsingImmobilizedTransform()
    { return { (void*)this, "bFPVUsingImmobilizedTransform" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseFirstMeleeAnimWithShield()
    { return { (void*)this, "bOnlyUseFirstMeleeAnimWithShield" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowCrosshairWhileFiring()
    { return { (void*)this, "bForceShowCrosshairWhileFiring" }; }
    BitFieldValue<bool, unsigned __int32> bIsFireActivelyHeld()
    { return { (void*)this, "bIsFireActivelyHeld" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSubmergedFiring()
    { return { (void*)this, "bAllowSubmergedFiring" }; }
    BitFieldValue<bool, unsigned __int32> bIsInMeleeSwing()
    { return { (void*)this, "bIsInMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bDoMeleeSwing()
    { return { (void*)this, "bDoMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingCameraAnimFPV()
    { return { (void*)this, "bPlayingCameraAnimFPV" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeaponBreaking()
    { return { (void*)this, "bIsWeaponBreaking" }; }
    BitFieldValue<bool, unsigned __int32> bHideFPVMesh()
    { return { (void*)this, "bHideFPVMesh" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargeting()
    { return { (void*)this, "bForceTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bCanAltFire()
    { return { (void*)this, "bCanAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bAltFireDoesMeleeAttack()
    { return { (void*)this, "bAltFireDoesMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bAltFireDoesNotStopFire()
    { return { (void*)this, "bAltFireDoesNotStopFire" }; }
    BitFieldValue<bool, unsigned __int32> bHideDamageSourceFromLogs()
    { return { (void*)this, "bHideDamageSourceFromLogs" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingFireAnim()
    { return { (void*)this, "bUseTargetingFireAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingReloadAnim()
    { return { (void*)this, "bUseTargetingReloadAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUsePartialReloadAnim()
    { return { (void*)this, "bUsePartialReloadAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseEquipNoAmmoClipAnim()
    { return { (void*)this, "bUseEquipNoAmmoClipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseUnequipNoAmmoClipAnim()
    { return { (void*)this, "bUseUnequipNoAmmoClipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeleeNoAmmoClipAnim()
    { return { (void*)this, "bUseMeleeNoAmmoClipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bHideLeftArmFPV()
    { return { (void*)this, "bHideLeftArmFPV" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedMuzzleFX()
    { return { (void*)this, "bLoopedMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitUseMuzzleFX()
    { return { (void*)this, "bMeleeHitUseMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bUsePostUpdateTickForFPVParticles()
    { return { (void*)this, "bUsePostUpdateTickForFPVParticles" }; }
    BitFieldValue<bool, unsigned __int32> bFPVMoveOffscreenWhenTurning()
    { return { (void*)this, "bFPVMoveOffscreenWhenTurning" }; }
    BitFieldValue<bool, unsigned __int32> bReloadAnimForceTickPoseOnServer()
    { return { (void*)this, "bReloadAnimForceTickPoseOnServer" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedFireSound()
    { return { (void*)this, "bLoopedFireSound" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingWhileReloading()
    { return { (void*)this, "bAllowTargetingWhileReloading" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitColorizesStructures()
    { return { (void*)this, "bMeleeHitColorizesStructures" }; }
    BitFieldValue<bool, unsigned __int32> bLoopedFireAnim()
    { return { (void*)this, "bLoopedFireAnim" }; }
    BitFieldValue<bool, unsigned __int32> bPlayingFireAnim()
    { return { (void*)this, "bPlayingFireAnim" }; }
    BitFieldValue<bool, unsigned __int32> bFPVWasTurning()
    { return { (void*)this, "bFPVWasTurning" }; }
    BitFieldValue<bool, unsigned __int32> bAutoRefire()
    { return { (void*)this, "bAutoRefire" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeAmmoOnUseAmmo()
    { return { (void*)this, "bConsumeAmmoOnUseAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bTargetUnTargetWithClick()
    { return { (void*)this, "bTargetUnTargetWithClick" }; }
    BitFieldValue<bool, unsigned __int32> bDontActuallyConsumeItemAmmo()
    { return { (void*)this, "bDontActuallyConsumeItemAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseWeaponCanFire()
    { return { (void*)this, "bBPUseWeaponCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bBPUseTargetingEvents()
    { return { (void*)this, "bBPUseTargetingEvents" }; }
    BitFieldValue<bool, unsigned __int32> bIsEquipped()
    { return { (void*)this, "bIsEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToFire()
    { return { (void*)this, "bWantsToFire" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToAltFire()
    { return { (void*)this, "bWantsToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bPendingReload()
    { return { (void*)this, "bPendingReload" }; }
    BitFieldValue<bool, unsigned __int32> bPendingEquip()
    { return { (void*)this, "bPendingEquip" }; }
    BitFieldValue<bool, unsigned __int32> bUnequipping()
    { return { (void*)this, "bUnequipping" }; }
    BitFieldValue<bool, unsigned __int32> bNotifiedOutOfAmmo()
    { return { (void*)this, "bNotifiedOutOfAmmo" }; }
    BitFieldValue<bool, unsigned __int32> bPlayedTargetingSound()
    { return { (void*)this, "bPlayedTargetingSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoOnFiring()
    { return { (void*)this, "bUseAmmoOnFiring" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoServerOnly()
    { return { (void*)this, "bUseAmmoServerOnly" }; }
    BitFieldValue<bool, unsigned __int32> bListenToAppliedForeces()
    { return { (void*)this, "bListenToAppliedForeces" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideAimOffsets()
    { return { (void*)this, "bOverrideAimOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bHasToggleableAccessory()
    { return { (void*)this, "bHasToggleableAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltMuzzleFX()
    { return { (void*)this, "bToggleAccessoryUseAltMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bToggleAccessoryUseAltFireSound()
    { return { (void*)this, "bToggleAccessoryUseAltFireSound" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanToggleAccessory()
    { return { (void*)this, "bUseBPCanToggleAccessory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnScoped()
    { return { (void*)this, "bUseBPOnScoped" }; }
    BitFieldValue<bool, unsigned __int32> bIsDefaultWeapon()
    { return { (void*)this, "bIsDefaultWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bForceKeepEquippedWhileInInventory()
    { return { (void*)this, "bForceKeepEquippedWhileInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowUseWhenRidingDino()
    { return { (void*)this, "bOnlyAllowUseWhenRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bPrimaryFireDoesMeleeAttack()
    { return { (void*)this, "bPrimaryFireDoesMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeHitCaptureDermis()
    { return { (void*)this, "bMeleeHitCaptureDermis" }; }
    BitFieldValue<bool, unsigned __int32> bIsAccessoryActive()
    { return { (void*)this, "bIsAccessoryActive" }; }
    BitFieldValue<bool, unsigned __int32> bCanAccessoryBeSetOn()
    { return { (void*)this, "bCanAccessoryBeSetOn" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeAmmoItemOnReload()
    { return { (void*)this, "bConsumeAmmoItemOnReload" }; }
    BitFieldValue<bool, unsigned __int32> bUseAutoReload()
    { return { (void*)this, "bUseAutoReload" }; }
    BitFieldValue<bool, unsigned __int32> bWantsToAutoReload()
    { return { (void*)this, "bWantsToAutoReload" }; }
    BitFieldValue<bool, unsigned __int32> bHasPlayedReload()
    { return { (void*)this, "bHasPlayedReload" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoopedSimulatingWeaponFire()
    { return { (void*)this, "bNetLoopedSimulatingWeaponFire" }; }
    BitFieldValue<bool, unsigned __int32> bClientLoopingSimulateWeaponFire()
    { return { (void*)this, "bClientLoopingSimulateWeaponFire" }; }
    BitFieldValue<bool, unsigned __int32> bBPHandleMeleeAttack()
    { return { (void*)this, "bBPHandleMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldDealDamage()
    { return { (void*)this, "bUseBPShouldDealDamage" }; }
    BitFieldValue<bool, unsigned __int32> bDoesntUsePrimalItem()
    { return { (void*)this, "bDoesntUsePrimalItem" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanAccessoryBeSetOn()
    { return { (void*)this, "bUseCanAccessoryBeSetOn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetActorForTargetingTooltip()
    { return { (void*)this, "bUseBPGetActorForTargetingTooltip" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideAimDirection()
    { return { (void*)this, "bUseBPOverrideAimDirection" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPIsValidUnstasisActor()
    { return { (void*)this, "bUseBPIsValidUnstasisActor" }; }
    BitFieldValue<bool, unsigned __int32> bLoopingSimulateWeaponFire()
    { return { (void*)this, "bLoopingSimulateWeaponFire" }; }
    BitFieldValue<bool, unsigned __int32> bFiredFirstBurstShot()
    { return { (void*)this, "bFiredFirstBurstShot" }; }
    BitFieldValue<bool, unsigned __int32> bClientTriggersHandleFiring()
    { return { (void*)this, "bClientTriggersHandleFiring" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseHarvesting()
    { return { (void*)this, "bAllowUseHarvesting" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemColors()
    { return { (void*)this, "bPreventItemColors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetSelectedMeleeAttackAnim()
    { return { (void*)this, "bUseBPGetSelectedMeleeAttackAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPWeaponDealDamage()
    { return { (void*)this, "bUseBPWeaponDealDamage" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnWeaponAnimPlayedNotify()
    { return { (void*)this, "bUseBPOnWeaponAnimPlayedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bColorCrosshairBasedOnTarget()
    { return { (void*)this, "bColorCrosshairBasedOnTarget" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargeting()
    { return { (void*)this, "bAllowTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDropAndPickup()
    { return { (void*)this, "bAllowDropAndPickup" }; }
    BitFieldValue<bool, unsigned __int32> bApplyAimDriftWhenTargeting()
    { return { (void*)this, "bApplyAimDriftWhenTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseScopeOverlay()
    { return { (void*)this, "bUseScopeOverlay" }; }
    BitFieldValue<bool, unsigned __int32> bHideFPVMeshWhileTargeting()
    { return { (void*)this, "bHideFPVMeshWhileTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadRightIsSecondaryAction()
    { return { (void*)this, "bGamepadRightIsSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bGamepadLeftIsPrimaryFire()
    { return { (void*)this, "bGamepadLeftIsPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToAltFire()
    { return { (void*)this, "bDirectPrimaryFireToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bCanFire()
    { return { (void*)this, "bCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetingOnDino()
    { return { (void*)this, "bForceTargetingOnDino" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToPrimaryFire()
    { return { (void*)this, "bDirectTargetingToPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToAltFire()
    { return { (void*)this, "bDirectTargetingToAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bDirectTargetingToSecondaryAction()
    { return { (void*)this, "bDirectTargetingToSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bPreventEquippingUnderwater()
    { return { (void*)this, "bPreventEquippingUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bUseTPVWeaponMeshMeleeSockets()
    { return { (void*)this, "bUseTPVWeaponMeshMeleeSockets" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingForceTraceFloatingHUD()
    { return { (void*)this, "bTargetingForceTraceFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunning()
    { return { (void*)this, "bAllowRunning" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseWhileRidingDino()
    { return { (void*)this, "bAllowUseWhileRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsOffhandShield()
    { return { (void*)this, "bSupportsOffhandShield" }; }
    BitFieldValue<bool, unsigned __int32> bMeleeAttackHarvetUsableComponents()
    { return { (void*)this, "bMeleeAttackHarvetUsableComponents" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSettingColorizeRegions()
    { return { (void*)this, "bAllowSettingColorizeRegions" }; }
    BitFieldValue<bool, unsigned __int32> bAttemptToDyeWithMeleeAttack()
    { return { (void*)this, "bAttemptToDyeWithMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyDamagePawns()
    { return { (void*)this, "bOnlyDamagePawns" }; }
    BitFieldValue<bool, unsigned __int32> bUseCharacterMeleeDamageModifier()
    { return { (void*)this, "bUseCharacterMeleeDamageModifier" }; }
    BitFieldValue<bool, unsigned __int32> bConsumeZoomInOut()
    { return { (void*)this, "bConsumeZoomInOut" }; }
    BitFieldValue<bool, unsigned __int32> bClipScopeInY()
    { return { (void*)this, "bClipScopeInY" }; }
    BitFieldValue<bool, unsigned __int32> bScopeFullscreen()
    { return { (void*)this, "bScopeFullscreen" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileFiring()
    { return { (void*)this, "bAllowRunningWhileFiring" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileReloading()
    { return { (void*)this, "bAllowRunningWhileReloading" }; }
    BitFieldValue<bool, unsigned __int32> bAllowRunningWhileMeleeAttacking()
    { return { (void*)this, "bAllowRunningWhileMeleeAttacking" }; }
    BitFieldValue<bool, unsigned __int32> bColorizeMuzzleFX()
    { return { (void*)this, "bColorizeMuzzleFX" }; }
    BitFieldValue<bool, unsigned __int32> bForceFirstPersonWhileTargeting()
    { return { (void*)this, "bForceFirstPersonWhileTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPStartEquippedNotify()
    { return { (void*)this, "bUseBPStartEquippedNotify" }; }
    BitFieldValue<bool, unsigned __int32> bDirectPrimaryFireToSecondaryAction()
    { return { (void*)this, "bDirectPrimaryFireToSecondaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseAlternateAimOffset()
    { return { (void*)this, "bUseAlternateAimOffset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideStandingAnim()
    { return { (void*)this, "bOverrideStandingAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseCustomSeatedAnim()
    { return { (void*)this, "bUseCustomSeatedAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceTPVTargetingAnimation()
    { return { (void*)this, "bUseBPForceTPVTargetingAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventUseWhileRidingDino()
    { return { (void*)this, "bForcePreventUseWhileRidingDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventSwitchingWeapon()
    { return { (void*)this, "bUseBPPreventSwitchingWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanEquip()
    { return { (void*)this, "bUseBPCanEquip" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPRemainEquipped()
    { return { (void*)this, "bUseBPRemainEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bIsInDestruction()
    { return { (void*)this, "bIsInDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bForceReloadOnDestruction()
    { return { (void*)this, "bForceReloadOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPModifyFOV()
    { return { (void*)this, "bUseBPModifyFOV" }; }
    BitFieldValue<bool, unsigned __int32> bServerIgnoreCheckCanFire()
    { return { (void*)this, "bServerIgnoreCheckCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTPVCameraOffset()
    { return { (void*)this, "bUseBPGetTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideRootRotationOffset()
    { return { (void*)this, "bUseBPOverrideRootRotationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnedByMission()
    { return { (void*)this, "bSpawnedByMission" }; }
    BitFieldValue<bool, unsigned __int32> bForceAlwaysPlayEquipAnim()
    { return { (void*)this, "bForceAlwaysPlayEquipAnim" }; }
    BitFieldValue<bool, unsigned __int32> bLastMeleeAttacked()
    { return { (void*)this, "bLastMeleeAttacked" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreReloadState()
    { return { (void*)this, "bIgnoreReloadState" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDedicatedThirdPersonWeaponMeshTick()
    { return { (void*)this, "bAllowDedicatedThirdPersonWeaponMeshTick" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDropAndPickupOnReload()
    { return { (void*)this, "bAllowDropAndPickupOnReload" }; }
    BitFieldValue<bool, unsigned __int32> bAllowEmptyAmmoClipOnFire()
    { return { (void*)this, "bAllowEmptyAmmoClipOnFire" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFullClipReload()
    { return { (void*)this, "bAllowFullClipReload" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSeattingWhileEquipped()
    { return { (void*)this, "bAllowSeattingWhileEquipped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTargetingDuringMeleeSwing()
    { return { (void*)this, "bAllowTargetingDuringMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowUseOnSeatingStructure()
    { return { (void*)this, "bAllowUseOnSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bAlternateStandingAnimBypassLayeredBlend()
    { return { (void*)this, "bAlternateStandingAnimBypassLayeredBlend" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyPlayerWeaponWhenSleeping()
    { return { (void*)this, "bAutoDestroyPlayerWeaponWhenSleeping" }; }
    BitFieldValue<bool, unsigned __int32> bBPDoClientCheckCanFire()
    { return { (void*)this, "bBPDoClientCheckCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideAspectRatio()
    { return { (void*)this, "bBPOverrideAspectRatio" }; }
    BitFieldValue<bool, unsigned __int32> bBPOverrideFPVMasterPoseComponent()
    { return { (void*)this, "bBPOverrideFPVMasterPoseComponent" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeUsedAsEquipment()
    { return { (void*)this, "bCanBeUsedAsEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffOverrideWeaponFireTransform()
    { return { (void*)this, "bCheckBuffOverrideWeaponFireTransform" }; }
    BitFieldValue<bool, unsigned __int32> bCloseRadialWheelOnAltFire()
    { return { (void*)this, "bCloseRadialWheelOnAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bConsiderWeaponScaleOnAttach()
    { return { (void*)this, "bConsiderWeaponScaleOnAttach" }; }
    BitFieldValue<bool, unsigned __int32> bConsumedDurabilityForThisMeleeHit()
    { return { (void*)this, "bConsumedDurabilityForThisMeleeHit" }; }
    BitFieldValue<bool, unsigned __int32> bCutsEnemyGrapplingCable()
    { return { (void*)this, "bCutsEnemyGrapplingCable" }; }
    BitFieldValue<bool, unsigned __int32> bDirectAltFireToSeconaryAction()
    { return { (void*)this, "bDirectAltFireToSeconaryAction" }; }
    BitFieldValue<bool, unsigned __int32> bDisableGamepadAimAssist()
    { return { (void*)this, "bDisableGamepadAimAssist" }; }
    BitFieldValue<bool, unsigned __int32> bDisableShooterOnElectricStorm()
    { return { (void*)this, "bDisableShooterOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bDisableWeaponCrosshair()
    { return { (void*)this, "bDisableWeaponCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bDontDeactivateWeaponInstigatorBuffsOnUnequip()
    { return { (void*)this, "bDontDeactivateWeaponInstigatorBuffsOnUnequip" }; }
    BitFieldValue<bool, unsigned __int32> bDontUseNativeTickMeleeSwing()
    { return { (void*)this, "bDontUseNativeTickMeleeSwing" }; }
    BitFieldValue<bool, unsigned __int32> bDurabilityUseWeaponMaterial()
    { return { (void*)this, "bDurabilityUseWeaponMaterial" }; }
    BitFieldValue<bool, unsigned __int32> bFPVNonDefaultWeaponBonesHidden()
    { return { (void*)this, "bFPVNonDefaultWeaponBonesHidden" }; }
    BitFieldValue<bool, unsigned __int32> bFPVScopedTargetingHidesNonWeaponHUD()
    { return { (void*)this, "bFPVScopedTargetingHidesNonWeaponHUD" }; }
    BitFieldValue<bool, unsigned __int32> bFoceSimulatedTick()
    { return { (void*)this, "bFoceSimulatedTick" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowMountedWeaponry()
    { return { (void*)this, "bForceAllowMountedWeaponry" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowPassengerTPV()
    { return { (void*)this, "bForceAllowPassengerTPV" }; }
    BitFieldValue<bool, unsigned __int32> bForceOwnerControllerHighQualityViewerReplication()
    { return { (void*)this, "bForceOwnerControllerHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceTPVCameraOffset()
    { return { (void*)this, "bForceTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bForceTPV_EquippedWhileRiding()
    { return { (void*)this, "bForceTPV_EquippedWhileRiding" }; }
    BitFieldValue<bool, unsigned __int32> bForceTickWithNoController()
    { return { (void*)this, "bForceTickWithNoController" }; }
    BitFieldValue<bool, unsigned __int32> bIgnorePlayerReload()
    { return { (void*)this, "bIgnorePlayerReload" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreTargetingFOV()
    { return { (void*)this, "bIgnoreTargetingFOV" }; }
    BitFieldValue<bool, unsigned __int32> bImpactAttachFXUsesPawnMesh()
    { return { (void*)this, "bImpactAttachFXUsesPawnMesh" }; }
    BitFieldValue<bool, unsigned __int32> bInstantAccuracyReset()
    { return { (void*)this, "bInstantAccuracyReset" }; }
    BitFieldValue<bool, unsigned __int32> bIsChainsawWeapon()
    { return { (void*)this, "bIsChainsawWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsLastAmmoInClip()
    { return { (void*)this, "bIsLastAmmoInClip" }; }
    BitFieldValue<bool, unsigned __int32> bIsMeleeWeapon()
    { return { (void*)this, "bIsMeleeWeapon" }; }
    BitFieldValue<bool, unsigned __int32> bIsSpyglass()
    { return { (void*)this, "bIsSpyglass" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeaponPing()
    { return { (void*)this, "bIsWeaponPing" }; }
    BitFieldValue<bool, unsigned __int32> bIsWeaponTracker()
    { return { (void*)this, "bIsWeaponTracker" }; }
    BitFieldValue<bool, unsigned __int32> bLastMeleeHit()
    { return { (void*)this, "bLastMeleeHit" }; }
    BitFieldValue<bool, unsigned __int32> bLastMeleeHitStationary()
    { return { (void*)this, "bLastMeleeHitStationary" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyPassiveDurabilityWhenAccessoryActive()
    { return { (void*)this, "bOnlyPassiveDurabilityWhenAccessoryActive" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseOnSeatingStructure()
    { return { (void*)this, "bOnlyUseOnSeatingStructure" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCarriedZoomInOut()
    { return { (void*)this, "bPreventCarriedZoomInOut" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCrosshairDraw()
    { return { (void*)this, "bPreventCrosshairDraw" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLeftShoulder()
    { return { (void*)this, "bPreventLeftShoulder" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOpeningInventory()
    { return { (void*)this, "bPreventOpeningInventory" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRightShoulder()
    { return { (void*)this, "bPreventRightShoulder" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateCurrentAmmoInClipToNonOwners()
    { return { (void*)this, "bReplicateCurrentAmmoInClipToNonOwners" }; }
    BitFieldValue<bool, unsigned __int32> bRestrictTPVCameraYaw()
    { return { (void*)this, "bRestrictTPVCameraYaw" }; }
    BitFieldValue<bool, unsigned __int32> bSecondaryActionStopsFire()
    { return { (void*)this, "bSecondaryActionStopsFire" }; }
    BitFieldValue<bool, unsigned __int32> bTargetingForceOwnerControllerHighQualityViewerReplication()
    { return { (void*)this, "bTargetingForceOwnerControllerHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseAbsoluteScaleOnAttach()
    { return { (void*)this, "bUseAbsoluteScaleOnAttach" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoReloadState()
    { return { (void*)this, "bUseAmmoReloadState" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoSupportsAdjustedAmmoPerShot()
    { return { (void*)this, "bUseAmmoSupportsAdjustedAmmoPerShot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustAmmoPerShot()
    { return { (void*)this, "bUseBPAdjustAmmoPerShot" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAnimNotifyCustomState_Tick()
    { return { (void*)this, "bUseBPAnimNotifyCustomState_Tick" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanFire()
    { return { (void*)this, "bUseBPCanFire" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanMeleeAttack()
    { return { (void*)this, "bUseBPCanMeleeAttack" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceFirstPerson()
    { return { (void*)this, "bUseBPForceFirstPerson" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCrosshairColor()
    { return { (void*)this, "bUseBPGetCrosshairColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetExtraPreviewMeshes()
    { return { (void*)this, "bUseBPGetExtraPreviewMeshes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnBurstFinished()
    { return { (void*)this, "bUseBPOnBurstFinished" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnBurstStarted()
    { return { (void*)this, "bUseBPOnBurstStarted" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnMaxDurability()
    { return { (void*)this, "bUseBPOnMaxDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideDamageImpactLocation()
    { return { (void*)this, "bUseBPOverrideDamageImpactLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideMeleeSwingSockets()
    { return { (void*)this, "bUseBPOverrideMeleeSwingSockets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverridePerShotDurability()
    { return { (void*)this, "bUseBPOverridePerShotDurability" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostSpawnMuzzleEffect()
    { return { (void*)this, "bUseBPPostSpawnMuzzleEffect" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSpawnMeleeEffects()
    { return { (void*)this, "bUseBPSpawnMeleeEffects" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateFirstPersonMeshes()
    { return { (void*)this, "bUseBPUpdateFirstPersonMeshes" }; }
    BitFieldValue<bool, unsigned __int32> bUseBlueprintAnimNotifications()
    { return { (void*)this, "bUseBlueprintAnimNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bUseBurstFinishAnim()
    { return { (void*)this, "bUseBurstFinishAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseBurstStartAnim()
    { return { (void*)this, "bUseBurstStartAnim" }; }
    BitFieldValue<bool, unsigned __int32> bUseFireCameraShakeScale()
    { return { (void*)this, "bUseFireCameraShakeScale" }; }
    BitFieldValue<bool, unsigned __int32> bUseHandIk()
    { return { (void*)this, "bUseHandIk" }; }
    BitFieldValue<bool, unsigned __int32> bUseTargetingAimDownSightsExposureAdjustment()
    { return { (void*)this, "bUseTargetingAimDownSightsExposureAdjustment" }; }
    BitFieldValue<bool, unsigned __int32> bWasLastFireFromGamePad()
    { return { (void*)this, "bWasLastFireFromGamePad" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_H
