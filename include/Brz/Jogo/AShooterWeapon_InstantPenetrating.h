// ==========================================================================
//  AShooterWeapon_InstantPenetrating — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTPENETRATING_H
#define BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTPENETRATING_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterWeapon_Instant.h"

struct AShooterWeapon_InstantPenetrating : public AShooterWeapon_Instant
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AShooterWeapon_InstantPenetrating"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_InstantPenetrating.BPStopPenetratingAtHit(FHitResult&,bool,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPStopPenetratingAtHit(void* a0, bool a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, bool, float, float>(this, "AShooterWeapon_InstantPenetrating.BPStopPenetratingAtHit(FHitResult&,bool,float,float)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_InstantPenetrating.FindExitHit(FHitResult&,FHitResult&,FCollisionQueryParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindExitHit(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_InstantPenetrating.FindExitHit(FHitResult&,FHitResult&,FCollisionQueryParams&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   AShooterWeapon_InstantPenetrating.PassiveUseAmmo(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=255]]
    int PassiveUseAmmo(int a0) const
    {
        return NativeCall<int, int>(this, "AShooterWeapon_InstantPenetrating.PassiveUseAmmo(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantPenetrating.Serialize(FArchive&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=46]]
    void Serialize(void* a0) const
    {
        NativeCall<void, void*>(this, "AShooterWeapon_InstantPenetrating.Serialize(FArchive&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantPenetrating.ShouldDealDamage(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldDealDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "AShooterWeapon_InstantPenetrating.ShouldDealDamage(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AShooterWeapon_InstantPenetrating.ValidateServerNotifyShotOrigin(UE::Math::TVector<double>,TArra
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateServerNotifyShotOrigin(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "AShooterWeapon_InstantPenetrating.ValidateServerNotifyShotOrigin(UE::Math::TVector<double>,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<FVector_NetQuantizeNormal,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantPenetrating.WeaponPenetrationTrace(UE::Math::TVector<double>&,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    void WeaponPenetrationTrace(void* a0, void* a1, bool a2, bool a3, float a4, void* a5, void* a6, void* a7) const
    {
        NativeCall<void, void*, void*, bool, bool, float, void*, void*, void*>(this, "AShooterWeapon_InstantPenetrating.WeaponPenetrationTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,bool,float,TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,float&)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AShooterWeapon_InstantPenetrating.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32
    // endereco: casamento de bytes com a build de referencia
    float WeaponTraceForHits(void* a0, void* a1, void* a2, void* a3, bool a4) const
    {
        return NativeCall<float, void*, void*, void*, void*, bool>(this, "AShooterWeapon_InstantPenetrating.WeaponTraceForHits(TArray<FHitResult,TSizedDefaultAllocator<32>>&,TArray<bool,TSizedDefaultAllocator<32>>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", a0, a1, a2, a3, a4);
    }

    float& MaxPenetrationTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.MaxPenetrationTraceDistance"); }
    float& PenaltyPerPenetrationField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerPenetration"); }
    float& PenaltyPerUnrealUnitField() const
    { return *GetNativePointerField<float*>(this, "AShooterWeapon_InstantPenetrating.PenaltyPerUnrealUnit"); }
    BitFieldValue<bool, unsigned __int32> bDebugPenetration()
    { return { (void*)this, "bDebugPenetration" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPStopPenetratingAtHit()
    { return { (void*)this, "bUseBPStopPenetratingAtHit" }; }

};

#endif  // BRZ_SDK_JOGO_ASHOOTERWEAPON_INSTANTPENETRATING_H
