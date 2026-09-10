// ==========================================================================
//  APrimalProjectileGrapplingHook — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPROJECTILEGRAPPLINGHOOK_H
#define BRZ_SDK_JOGO_APRIMALPROJECTILEGRAPPLINGHOOK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInterface;

#include "AShooterProjectile.h"

struct APrimalProjectileGrapplingHook : public AShooterProjectile
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalProjectileGrapplingHook"); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalProjectileGrapplingHook.BPHandleCharacterTriesToCutGrapplingCable(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPHandleCharacterTriesToCutGrapplingCable(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalProjectileGrapplingHook.BPHandleCharacterTriesToCutGrapplingCable(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileGrapplingHook.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalProjectileGrapplingHook.BeginPlay()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalProjectileGrapplingHook.GetGrapHookEndPoint()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGrapHookEndPoint() const
    {
        return NativeCall<void*>(this, "APrimalProjectileGrapplingHook.GetGrapHookEndPoint()");
    }

    float& DetachGrapHookLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.DetachGrapHookLifespan"); }
    float& GrapHookCableWidthOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.GrapHookCableWidthOverride"); }
    BrzCampoPonteiro GrapHookDefaultOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileGrapplingHook.GrapHookDefaultOffset")); }
    BrzCampoPonteiro GrapHookEndPointOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileGrapplingHook.GrapHookEndPointOffset")); }
    UMaterialInterface*& GrapHookMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalProjectileGrapplingHook.GrapHookMaterial"); }
    float& MaxPullMassOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaxPullMassOverride"); }
    float& MaximumRopeDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaximumRopeDistance"); }
    float& PullingStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.PullingStrength"); }
    float& ReleaseRopeSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.ReleaseRopeSpeed"); }
    bool& bAllowPullFleeingField() const
    { return *GetNativePointerField<bool*>(this, "APrimalProjectileGrapplingHook.bAllowPullFleeing"); }
    BitFieldValue<bool, unsigned __int32> bAllowPullFleeing()
    { return { (void*)this, "bAllowPullFleeing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPullSleeping()
    { return { (void*)this, "bAllowPullSleeping" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALPROJECTILEGRAPPLINGHOOK_H
