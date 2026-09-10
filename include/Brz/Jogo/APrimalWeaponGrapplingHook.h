// ==========================================================================
//  APrimalWeaponGrapplingHook — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALWEAPONGRAPPLINGHOOK_H
#define BRZ_SDK_JOGO_APRIMALWEAPONGRAPPLINGHOOK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USceneComponent;
struct USoundCue;

#include "AShooterWeapon_Projectile.h"

struct APrimalWeaponGrapplingHook : public AShooterWeapon_Projectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalWeaponGrapplingHook"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.CanFire(bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanFire(bool a0) const
    {
        return NativeCall<bool, bool>(this, "APrimalWeaponGrapplingHook.CanFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.CanReload()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    bool CanReload() const
    {
        return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanReload()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.CanTarget()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=87]]
    bool CanTarget() const
    {
        return NativeCall<bool>(this, "APrimalWeaponGrapplingHook.CanTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.Destroyed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponGrapplingHook.GetCableAttachComponent()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCableAttachComponent() const
    {
        return NativeCall<void*>(this, "APrimalWeaponGrapplingHook.GetCableAttachComponent()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalWeaponGrapplingHook.GetReloadAnim(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetReloadAnim(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalWeaponGrapplingHook.GetReloadAnim(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.OnEquip()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=144]]
    void OnEquip() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.OnEquip()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.PlayReloadAnimation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    float PlayReloadAnimation() const
    {
        return NativeCall<float>(this, "APrimalWeaponGrapplingHook.PlayReloadAnimation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.StartFire(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=275]]
    void StartFire(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalWeaponGrapplingHook.StartFire(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.StartSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=277+grafo=4/4]]
    void StartSecondaryAction() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.StartUnequip_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=73]]
    void StartUnequip_Implementation() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.StartUnequip_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.StopFire()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=132]]
    void StopFire() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.StopSecondaryAction()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=197]]
    void StopSecondaryAction() const
    {
        NativeCall<void>(this, "APrimalWeaponGrapplingHook.StopSecondaryAction()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalWeaponGrapplingHook.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=196]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalWeaponGrapplingHook.Tick(float)", a0);
    }

    USceneComponent*& CableAttach1PField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponGrapplingHook.CableAttach1P"); }
    USceneComponent*& CableAttach3PField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalWeaponGrapplingHook.CableAttach3P"); }
    double& LastTimeWithGrapHookField() const
    { return *GetNativePointerField<double*>(this, "APrimalWeaponGrapplingHook.LastTimeWithGrapHook"); }
    USoundCue*& ReelInSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponGrapplingHook.ReelInSoundCue"); }
    USoundCue*& ReelOutSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalWeaponGrapplingHook.ReelOutSoundCue"); }
    bool& bPreventReelingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalWeaponGrapplingHook.bPreventReeling"); }
    BitFieldValue<bool, unsigned __int32> bDetachGrapHookOnUnequip()
    { return { (void*)this, "bDetachGrapHookOnUnequip" }; }
    BitFieldValue<bool, unsigned __int32> bPreventReeling()
    { return { (void*)this, "bPreventReeling" }; }
    BitFieldValue<bool, unsigned __int32> bPullingRope()
    { return { (void*)this, "bPullingRope" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALWEAPONGRAPPLINGHOOK_H
