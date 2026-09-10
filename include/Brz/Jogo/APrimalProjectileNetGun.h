// ==========================================================================
//  APrimalProjectileNetGun — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPROJECTILENETGUN_H
#define BRZ_SDK_JOGO_APRIMALPROJECTILENETGUN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInstanceDynamic;
struct USkeletalMeshComponent;

#include "APrimalProjectileArrow.h"

struct APrimalProjectileNetGun : public APrimalProjectileArrow
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalProjectileNetGun"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileNetGun.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalProjectileNetGun.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileNetGun.CalculateBonePositions()
    // endereco: casamento de bytes com a build de referencia
    void CalculateBonePositions() const
    {
        NativeCall<void>(this, "APrimalProjectileNetGun.CalculateBonePositions()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileNetGun.OnImpact_Implementation(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnImpact_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalProjectileNetGun.OnImpact_Implementation(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileNetGun.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalProjectileNetGun.Tick(float)", a0);
    }

    BrzCampoPonteiro BuffToApplyToHeavyCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileNetGun.BuffToApplyToHeavyCharacters")); }
    BrzCampoPonteiro BuffToApplyToLightCharactersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileNetGun.BuffToApplyToLightCharacters")); }
    float& DissolveTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.DissolveTime"); }
    //  no cache antigo este campo se chamava ManagedBoneLocations.
    //  nesta build ele e' `OnInpactMaxTraceDistance` — resolve por NOME.
    BrzCampoPonteiro ManagedBoneLocationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileNetGun.OnInpactMaxTraceDistance")); }
    BrzCampoPonteiro ManagedBonesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileNetGun.ManagedBones")); }
    float& MaxDinoMassToInmovilizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.MaxDinoMassToInmovilize"); }
    float& OnInpactMaxTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileNetGun.OnInpactMaxTraceDistance"); }
    USkeletalMeshComponent*& SkeletalMeshCompField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalProjectileNetGun.SkeletalMeshComp"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPROJECTILENETGUN_H
