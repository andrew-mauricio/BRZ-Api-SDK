// ==========================================================================
//  AShooterWeapon_Whip — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_WHIP_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_WHIP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterWeapon_Melee.h"

struct AShooterWeapon_Whip : public AShooterWeapon_Melee
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_Whip"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnim
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=105+grafo=4/4]]
    void AnimNotifyCustomEvent(unsigned long long a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, unsigned long long, void*, void*, void*>(this, "AShooterWeapon_Whip.AnimNotifyCustomEvent(FName,USkeletalMeshComponent*,UAnimSequenceBase*,UAnimNotify*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.CanHerdDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanHerdDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_Whip.CanHerdDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.CanStunDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanStunDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_Whip.CanStunDino(APrimalDinoCharacter*)", a0);
    }

    // dump_sobre_sdk_287a0
    //   AShooterWeapon_Whip.Destroyed()
    // endereco: casamento de bytes com a build de referencia
    void Destroyed() const
    {
        NativeCall<void>(this, "AShooterWeapon_Whip.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.DoMeleeAttack()
    // endereco: casamento de bytes com a build de referencia
    void DoMeleeAttack() const
    {
        NativeCall<void>(this, "AShooterWeapon_Whip.DoMeleeAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.HarvestWhipExtended()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=585+bytes40+grafo=6/6]]
    void HarvestWhipExtended() const
    {
        NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipExtended()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.HarvestWhipNear()
    // endereco: casamento de bytes com a build de referencia
    void HarvestWhipNear() const
    {
        NativeCall<void>(this, "AShooterWeapon_Whip.HarvestWhipNear()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.OnEquipFinished()
    // endereco: casamento de bytes com a build de referencia
    void OnEquipFinished() const
    {
        NativeCall<void>(this, "AShooterWeapon_Whip.OnEquipFinished()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_Whip.TickMeleeSwing(float)
    // endereco: casamento de bytes com a build de referencia
    void TickMeleeSwing(float a0) const
    {
        NativeCall<void, float>(this, "AShooterWeapon_Whip.TickMeleeSwing(float)", a0);
    }

    BrzCampoPonteiro BlockedByShieldBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Whip.BlockedByShieldBuff")); }
    float& DurabilityMultiplierForFriendDinosField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForFriendDinos"); }
    float& DurabilityMultiplierForHarvestingField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.DurabilityMultiplierForHarvesting"); }
    BrzCampoPonteiro HarvestingBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Whip.HarvestingBoxExtent")); }
    BrzCampoPonteiro HarvestingWhipTipOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Whip.HarvestingWhipTipOffset")); }
    BrzCampoPonteiro HerdDinoBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Whip.HerdDinoBuff")); }
    float& MaxDinoDragWeightToApplyBuffField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxDinoDragWeightToApplyBuff"); }
    float& MaxFlyerDinoDragWeightToApplyBuffField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_Whip.MaxFlyerDinoDragWeightToApplyBuff"); }
    BrzCampoPonteiro StunBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "AShooterWeapon_Whip.StunBuff")); }
};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_WHIP_H
