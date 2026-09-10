// ==========================================================================
//  AShooterWeapon_Activated — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_ACTIVATED_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_ACTIVATED_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UAudioComponent;
struct USoundCue;

#include "AShooterWeapon_FlameThrower.h"

struct AShooterWeapon_Activated : public AShooterWeapon_FlameThrower
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Activated"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ActivateWeapon(bool,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=149]]
    void ActivateWeapon(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ActivateWeapon(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ActivateWeapon_Internal(bool,int&)
    // endereco: casamento de bytes com a build de referencia
    void ActivateWeapon_Internal(bool a0, void* a1) const
    {
        NativeCall<void, bool, void*>(this, "AShooterWeapon_Activated.ActivateWeapon_Internal(bool,int&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.BeamTrace(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math:
    // endereco: casamento de bytes com a build de referencia
    bool BeamTrace(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "AShooterWeapon_Activated.BeamTrace(UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.CanPlayFireEffects()
    // endereco: cache_pdb_25090264
    bool CanPlayFireEffects() const
    {
        return NativeCall<bool>(this, "AShooterWeapon_Activated.CanPlayFireEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.CancelActivation_Internal()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=133+grafo=3/3]]
    void CancelActivation_Internal() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.CancelActivation_Internal()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ClientActivateWeapon_Implementation(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void ClientActivateWeapon_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientActivateWeapon_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ClientHandleActivation_Implementation(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    void ClientHandleActivation_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Activated.ClientHandleActivation_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Activated.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=164]]
    BrzPonteiro Destroyed() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Activated.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.EndActivationAnim()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=149+grafo=3/3]]
    void EndActivationAnim() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.EndActivationAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.FireWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.FireWeapon()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Activated.GetBeamTarget()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetBeamTarget() const
    {
        return NativeCall<void*>(this, "AShooterWeapon_Activated.GetBeamTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    void GetFirePosition(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Activated.GetFirePosition(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Activated.HandleActivation(bool)
    // endereco: casamento de bytes com a build de referencia
    void HandleActivation(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Activated.HandleActivation(bool)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   AShooterWeapon_Activated.MultiPlayActivationAnim(bool,int)
    // endereco: casamento de bytes com a build de referencia
    void MultiPlayActivationAnim(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.MultiPlayActivationAnim(bool,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_Activated.MultiPlayActivationAnim_Implementation(bool,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=627+grafo=7/7]]
    BrzPonteiro MultiPlayActivationAnim_Implementation(bool a0, int a1) const
    {
        return NativeCall<void*, bool, int>(this, "AShooterWeapon_Activated.MultiPlayActivationAnim_Implementation(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.MuzzlePSCSpawned()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=83]]
    void MuzzlePSCSpawned() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.MuzzlePSCSpawned()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_Activated.OnRep_IsActivated()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=78]]
    void OnRep_IsActivated() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.OnRep_IsActivated()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.PlayFireAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayFireAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.PlayFireAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ServerActivateWeapon_Implementation(bool,int)
    // endereco: casamento de bytes com a build de referencia
    void ServerActivateWeapon_Implementation(bool a0, int a1) const
    {
        NativeCall<void, bool, int>(this, "AShooterWeapon_Activated.ServerActivateWeapon_Implementation(bool,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ServerPreFire_Implementation(UE::Math::TVector<double>,UE::Math::TVecto
    // endereco: casamento de bytes com a build de referencia
    void ServerPreFire_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "AShooterWeapon_Activated.ServerPreFire_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.ShouldDealDamage(AActor*)
    // classe: a funcao mora em AShooterWeapon, e AShooterWeapon_Activated herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon.ShouldDealDamage(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.StartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=97]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "AShooterWeapon_Activated.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.StartSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=147]]
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.StopFire()
    // endereco: casamento de bytes com a build de referencia
    void StopFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Activated.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Activated.TickShootFX_Internal()
    // endereco: casamento de bytes com a build de referencia
    void TickShootFX_Internal() const
    {
        NativeCall<void>(this, "AShooterWeapon_Activated.TickShootFX_Internal()");
    }

    BrzCampoPonteiro ActivateAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.ActivateAnim")); }
    BrzCampoPonteiro ActivateCameraShakeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.ActivateCameraShake")); }
    float& ActivateCameraShakeSpeedScaleField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Activated.ActivateCameraShakeSpeedScale"); }
    FName& BeamTargetParameterNameField() const
    { return *GetNativePointerField<FName*>(this, "AShooterWeapon_Activated.BeamTargetParameterName"); }
    BrzCampoPonteiro DeactivateAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.DeactivateAnim")); }
    USoundCue*& EmptySoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.EmptySound"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MovementFireAnim` +16, medido na build 25090264
    //  (offset absoluto medido: 0x1258; confianca alta)
    void*& EndActivationAnimHandleField() const
    { return BrzCampoAncorado<void*>(this, "MovementFireAnim", 16); }
    BrzCampoPonteiro FireDirectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.FireDirection")); }
    UAudioComponent*& FireLoopACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Activated.FireLoopAC"); }
    USoundCue*& FireLoopSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.FireLoopSound"); }
    BrzCampoPonteiro FireOriginField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.FireOrigin")); }
    UAudioComponent*& IdleACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_Activated.IdleAC"); }
    USoundCue*& IdleSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_Activated.IdleSound"); }
    BrzCampoPonteiro MovementFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.MovementFireAnim")); }
    BrzCampoPonteiro StopFireAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.StopFireAnim")); }
    BrzCampoPonteiro TargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Activated.TargetLocation")); }
    BitFieldValue<bool, unsigned __int32> bIsActivated()
    { return { (void*)this, "bIsActivated" }; }
    BitFieldValue<bool, unsigned __int32> bActivationHeld()
    { return { (void*)this, "bActivationHeld" }; }
    BitFieldValue<bool, unsigned __int32> bDamagePawns()
    { return { (void*)this, "bDamagePawns" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_ACTIVATED_H
