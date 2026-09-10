// ==========================================================================
//  APrimalProjectileBoomerang — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALPROJECTILEBOOMERANG_H
#define BRZ_SDK_JOGO_APRIMALPROJECTILEBOOMERANG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct USceneComponent;

#include "APrimalProjectileArrow.h"

struct APrimalProjectileBoomerang : public APrimalProjectileArrow
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalProjectileBoomerang"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileBoomerang.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalProjectileBoomerang.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileBoomerang.OnImpact_Implementation(FHitResult&,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnImpact_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalProjectileBoomerang.OnImpact_Implementation(FHitResult&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileBoomerang.PickUpCheck_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=179]]
    void PickUpCheck_Implementation() const
    {
        NativeCall<void>(this, "APrimalProjectileBoomerang.PickUpCheck_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileBoomerang.PickedUp_Implementation(AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void PickedUp_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalProjectileBoomerang.PickedUp_Implementation(AShooterCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalProjectileBoomerang.ReturnToOwner(bool)
    // endereco: casamento de bytes com a build de referencia
    void ReturnToOwner(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalProjectileBoomerang.ReturnToOwner(bool)", a0);
    }

    //  no cache antigo este campo se chamava BoomerangPickupTimerHandle.
    //  nesta build ele e' `ReturnFirstPointTravelDistanceMultiplier` — resolve por NOME.
    BrzCampoPonteiro BoomerangPickupTimerHandleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalProjectileBoomerang.ReturnFirstPointTravelDistanceMultiplier")); }
    //  no cache antigo este campo se chamava ElapsedTimeToInstigator.
    //  nesta build ele e' `MaxDistanceToTravel` — resolve por NOME.
    float& ElapsedTimeToInstigatorField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.MaxDistanceToTravel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +168, medido na build 25090264
    //  (offset absoluto medido: 0x890; confianca baixa)
    TArray<AActor*>& HitHurtListField() const
    { return BrzCampoAncorado<TArray<AActor*>>(this, "MaxDistanceToTravel", 168); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +156, medido na build 25090264
    //  (offset absoluto medido: 0x884; confianca baixa)
    TWeakObjectPtr<void>& InstigatorCharacterReferenceField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "MaxDistanceToTravel", 156); }
    float& MaxDistanceToTravelField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.MaxDistanceToTravel"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +104, medido na build 25090264
    //  (offset absoluto medido: 0x850; confianca media)
    void*& NextPointToReachField() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 104); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +8, medido na build 25090264
    //  (offset absoluto medido: 0x7F0; confianca media)
    void*& P0Field() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +32, medido na build 25090264
    //  (offset absoluto medido: 0x808; confianca media)
    void*& P1Field() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +56, medido na build 25090264
    //  (offset absoluto medido: 0x820; confianca media)
    void*& P2Field() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 56); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +80, medido na build 25090264
    //  (offset absoluto medido: 0x838; confianca media)
    void*& P3Field() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 80); }
    float& ReturnFirstPointTravelDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnFirstPointTravelDistanceMultiplier"); }
    float& ReturnSecondPointTravelDistanceMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalProjectileBoomerang.ReturnSecondPointTravelDistanceMultiplier"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +4, medido na build 25090264
    //  (offset absoluto medido: 0x7EC; confianca media)
    float& SqrDesideredTravelDistanceField() const
    { return BrzCampoAncorado<float>(this, "MaxDistanceToTravel", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +128, medido na build 25090264
    //  (offset absoluto medido: 0x868; confianca media)
    void*& StartPositionField() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 128); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +153, medido na build 25090264
    //  (offset absoluto medido: 0x881; confianca baixa)
    bool& bIsFollowingInstigatorField() const
    { return BrzCampoAncorado<bool>(this, "MaxDistanceToTravel", 153); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MaxDistanceToTravel` +152, medido na build 25090264
    //  (offset absoluto medido: 0x880; confianca baixa)
    void*& bIsReturningToInstigatorField() const
    { return BrzCampoAncorado<void*>(this, "MaxDistanceToTravel", 152); }
};

#endif  // BRZ_SDK_JOGO_APRIMALPROJECTILEBOOMERANG_H
