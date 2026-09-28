// ==========================================================================
//  AShooterWeapon_ChainSaw — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_CHAINSAW_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_CHAINSAW_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UAudioComponent;
struct USoundCue;

#include "AShooterWeapon.h"

struct AShooterWeapon_ChainSaw : public AShooterWeapon
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_ChainSaw"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ClientSimulateChangeFireAnim() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ClientSimulateChangeFireAnim_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.ClientSimulateChangeFireAnim_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.FireWeapon()
    // endereco: casamento de bytes com a build de referencia
    void FireWeapon() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.FireWeapon()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.OnEquipFinished()
    // endereco: casamento de bytes com a build de referencia
    void OnEquipFinished() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.OnEquipFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.PlayFireAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayFireAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayFireAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.PlayUnequipAnimation()
    // endereco: casamento de bytes com a build de referencia
    void PlayUnequipAnimation() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.PlayUnequipAnimation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_ChainSaw.ServerHit()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void ServerHit() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerHit()");
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_ChainSaw.ServerHit_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ServerHit_Implementation() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.ServerHit_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.SetWeaponState(EWeaponState::Type)
    // endereco: casamento de bytes com a build de referencia
    void SetWeaponState(int a0) const
    {
        NativeCall<void, int>(this, "AShooterWeapon_ChainSaw.SetWeaponState(EWeaponState::Type)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.SimulateChangeFireAnim()
    // endereco: casamento de bytes com a build de referencia
    void SimulateChangeFireAnim() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateChangeFireAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.SimulateWeaponFire()
    // endereco: casamento de bytes com a build de referencia
    void SimulateWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.SimulateWeaponFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.StopFireAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    void StopFireAnim() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopFireAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.StopOwnerEffects()
    // endereco: casamento de bytes com a build de referencia
    void StopOwnerEffects() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopOwnerEffects()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_ChainSaw.StopSimulatingWeaponFire()
    // endereco: casamento de bytes com a build de referencia
    void StopSimulatingWeaponFire() const
    {
        NativeCall<void>(this, "AShooterWeapon_ChainSaw.StopSimulatingWeaponFire()");
    }

    UAudioComponent*& IdleACField() const
    { return *GetNativePointerField<UAudioComponent**>(this, "AShooterWeapon_ChainSaw.IdleAC"); }
    USoundCue*& IdleSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "AShooterWeapon_ChainSaw.IdleSound"); }
    BrzCampoPonteiro ShootAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChainSaw.ShootAnimList")); }
    BrzCampoPonteiro ShootWithHitAnimListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_ChainSaw.ShootWithHitAnimList")); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_CHAINSAW_H
