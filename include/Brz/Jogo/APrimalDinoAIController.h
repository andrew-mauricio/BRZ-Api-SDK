// ==========================================================================
//  APrimalDinoAIController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALDINOAICONTROLLER_H
#define BRZ_SDK_JOGO_APRIMALDINOAICONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UBehaviorTree;
struct UObject;
struct UStaticMeshComponent;

#include "AAIController.h"

struct APrimalDinoAIController : public AAIController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalDinoAIController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.AddToAggro(AActor*,float,bool,bool,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void AddToAggro(void* a0, float a1, bool a2, bool a3, bool a4, bool a5) const
    {
        NativeCall<void, void*, float, bool, bool, bool, bool>(this, "APrimalDinoAIController.AddToAggro(AActor*,float,bool,bool,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.AvoidGenericToPoint(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    void AvoidGenericToPoint(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.AvoidGenericToPoint(UE::Math::TVector<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.AvoidOutOfWater()
    // endereco: casamento de bytes com a build de referencia
    void AvoidOutOfWater() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.AvoidOutOfWater()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPAdjustTargetingDesireForActorOutOfLimitVolume(AActor*,float)
    // endereco: casamento de bytes com a build de referencia
    float BPAdjustTargetingDesireForActorOutOfLimitVolume(void* a0, float a1) const
    {
        return NativeCall<float, void*, float>(this, "APrimalDinoAIController.BPAdjustTargetingDesireForActorOutOfLimitVolume(AActor*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.BPForceAlternateAttackPoint(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPForceAlternateAttackPoint(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoAIController.BPForceAlternateAttackPoint(UE::Math::TVector<double>&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPForceTargetDinoRider(AShooterCharacter*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool BPForceTargetDinoRider(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPForceTargetDinoRider(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPNotifyTargetSet()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPNotifyTargetSet() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.BPNotifyTargetSet()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.BPOnFleeEvent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=45]]
    void BPOnFleeEvent() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.BPOnFleeEvent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPOverrideIgnoredByWildDino(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool BPOverrideIgnoredByWildDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPOverrideIgnoredByWildDino(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.BPOverrideLandingLocation(float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOverrideLandingLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoAIController.BPOverrideLandingLocation(float&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPPreventAddAggroOnTakeDamage(AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=66]]
    bool BPPreventAddAggroOnTakeDamage(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPPreventAddAggroOnTakeDamage(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPPreventStartle(AActor*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=66+chamadores=3]]
    bool BPPreventStartle(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPPreventStartle(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPSetLastCharacterTargetTeam(int)
    // endereco: cache_pdb_25090264
    void BPSetLastCharacterTargetTeam(int a0) const
    {
        NativeCall<void, int>(this, "APrimalDinoAIController.BPSetLastCharacterTargetTeam(int)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPSetupFindTarget()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void BPSetupFindTarget() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.BPSetupFindTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPShouldNotifyAnyNeighbor(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool BPShouldNotifyAnyNeighbor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPShouldNotifyAnyNeighbor(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BPShouldNotifyNeighbor(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool BPShouldNotifyNeighbor(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.BPShouldNotifyNeighbor(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.BPUpdateBestTarget(AActor*,bool,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPUpdateBestTarget(void* a0, bool a1, void* a2) const
    {
        return NativeCall<void*, void*, bool, void*>(this, "APrimalDinoAIController.BPUpdateBestTarget(AActor*,bool,bool&)", a0, a1, a2);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.BP_TamedOverrideHorizontalLandingRange()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_TamedOverrideHorizontalLandingRange() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.BP_TamedOverrideHorizontalLandingRange()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=231]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.CanLand()
    // endereco: casamento de bytes com a build de referencia
    bool CanLand() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.CanLand()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ChangedAITarget()
    // endereco: casamento de bytes com a build de referencia
    void ChangedAITarget() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ChangedAITarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.CheckMoveAroundBlockadePoint(UE::Math::TVector<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CheckMoveAroundBlockadePoint(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.CheckMoveAroundBlockadePoint(UE::Math::TVector<double>)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ClearAggroEntries()
    // endereco: casamento de bytes com a build de referencia
    void ClearAggroEntries() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ClearAggroEntries()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.FindTarget(bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* FindTarget(bool a0) const
    {
        return NativeCall<AActor*, bool>(this, "APrimalDinoAIController.FindTarget(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.ForceLand()
    // endereco: casamento de bytes com a build de referencia
    void ForceLand() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ForceLand()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetAcceptanceHeightOffset()
    // endereco: cache_pdb_25090264
    float GetAcceptanceHeightOffset() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceHeightOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetAcceptanceRadiusOffset()
    // endereco: cache_pdb_25090264
    float GetAcceptanceRadiusOffset() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceRadiusOffset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetAggroDesirability(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetAggroDesirability(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoAIController.GetAggroDesirability(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAggroEntriesAttackerAtIndex(int)
    // endereco: cache_pdb_25090264
    UObject* GetAggroEntriesAttackerAtIndex(int a0) const
    {
        return NativeCall<UObject*, int>(this, "APrimalDinoAIController.GetAggroEntriesAttackerAtIndex(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetAggroEntry(int,AActor*&,float&,double&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAggroEntry(int a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, int, void*, void*, void*>(this, "APrimalDinoAIController.GetAggroEntry(int,AActor*&,float&,double&)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAggroLastHitTime(AActor*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    float GetAggroLastHitTime(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoAIController.GetAggroLastHitTime(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAggroNotifyNeighborsRange()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetAggroNotifyNeighborsRange() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetAggroNotifyNeighborsRange_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAggroNotifyNeighborsRange_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAttackInterval()
    // endereco: cache_pdb_25090264
    float GetAttackInterval() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAttackInterval()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAttackRange()
    // endereco: cache_pdb_25090264
    float GetAttackRange() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRange()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier()
    // endereco: cache_pdb_25090264
    float GetAttackRotationGroundSpeedMultiplier() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAttackRotationRangeDegrees()
    // endereco: cache_pdb_25090264
    float GetAttackRotationRangeDegrees() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationRangeDegrees()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetAttackRotationRate()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetAttackRotationRate() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.GetAttackRotationRate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetClosestTree(FOverlapResult&)
    // endereco: casamento de bytes com a build de referencia
    UStaticMeshComponent* GetClosestTree(void* a0) const
    {
        return NativeCall<UStaticMeshComponent*, void*>(this, "APrimalDinoAIController.GetClosestTree(FOverlapResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetCorpseFoodTarget()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetCorpseFoodTarget() const
    {
        return NativeCall<AActor*>(this, "APrimalDinoAIController.GetCorpseFoodTarget()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetCurrentAttackIndex()
    // endereco: cache_pdb_25090264
    unsigned char GetCurrentAttackIndex() const
    {
        return NativeCall<unsigned char>(this, "APrimalDinoAIController.GetCurrentAttackIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetDebugInfoString()
    // endereco: casamento de bytes com a build de referencia
    void GetDebugInfoString(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.GetDebugInfoString()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetFocalPointOnActor(AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFocalPointOnActor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoAIController.GetFocalPointOnActor(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetLandingLocation()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=5419+bytes40+grafo=44/44]]
    BrzPonteiro GetLandingLocation() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.GetLandingLocation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetMinAttackRange()
    // endereco: cache_pdb_25090264
    float GetMinAttackRange() const
    {
        return NativeCall<float>(this, "APrimalDinoAIController.GetMinAttackRange()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetNavigationTargetPoint()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNavigationTargetPoint() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.GetNavigationTargetPoint()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetRandomPointInReverseVacuumCompartment(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRandomPointInReverseVacuumCompartment(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalDinoAIController.GetRandomPointInReverseVacuumCompartment(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetRandomWanderDestination(UE::Math::TVector<double>,float,bool,bool,UE:
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=214/214]]
    BrzPonteiro GetRandomWanderDestination(void* a0, float a1, bool a2, bool a3, void* a4) const
    {
        return NativeCall<void*, void*, float, bool, bool, void*>(this, "APrimalDinoAIController.GetRandomWanderDestination(UE::Math::TVector<double>,float,bool,bool,UE::Math::TRotator<double>)", a0, a1, a2, a3, a4);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetTarget()
    // endereco: cache_pdb_25090264
    UObject* GetTarget() const
    {
        return NativeCall<UObject*>(this, "APrimalDinoAIController.GetTarget()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.GetTargetingDesire(AActor*)
    // endereco: casamento de bytes com a build de referencia
    float GetTargetingDesire(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalDinoAIController.GetTargetingDesire(AActor*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.GetWanderAroundActorDestination(APrimalDinoCharacter*,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWanderAroundActorDestination(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoAIController.GetWanderAroundActorDestination(APrimalDinoCharacter*,UE::Math::TVector<double>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.GetWanderRandomWaitTime(float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    float GetWanderRandomWaitTime(float a0, float a1, bool a2) const
    {
        return NativeCall<float, float, float, bool>(this, "APrimalDinoAIController.GetWanderRandomWaitTime(float,float,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.IsForceTargetDinoRider(AShooterCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool IsForceTargetDinoRider(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.IsForceTargetDinoRider(AShooterCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.IsLogicPaused()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    bool IsLogicPaused() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.IsLogicPaused()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.IsWildWandering()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsWildWandering() const
    {
        return NativeCall<void*>(this, "APrimalDinoAIController.IsWildWandering()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.IsWithinAttackRange(AActor*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool IsWithinAttackRange(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalDinoAIController.IsWithinAttackRange(AActor*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack(AActor*,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool IsWithinAttackRangeAndCalculateBestAttack(void* a0, void* a1) const
    {
        return NativeCall<bool, void*, void*>(this, "APrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack(AActor*,bool&)", a0, a1);
    }

    // dump_sobre_sdk_287a0
    //   APrimalDinoAIController.MoveAroundBlockade(UE::Math::TVector<double>,AActor*,UPrimitiveComponent
    // endereco: casamento de bytes com a build de referencia
    char MoveAroundBlockade(void* a0, void* a1, void* a2, float a3, void* a4, void* a5, bool a6) const
    {
        return NativeCall<char, void*, void*, void*, float, void*, void*, bool>(this, "APrimalDinoAIController.MoveAroundBlockade(UE::Math::TVector<double>,AActor*,UPrimitiveComponent*,float,UE::Math::TVector<double>,UE::Math::TVector<double>,bool)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.MoveTo(FAIMoveRequest&,TSharedPtr<FNavigationPath,1>*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MoveTo(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalDinoAIController.MoveTo(FAIMoveRequest&,TSharedPtr<FNavigationPath,1>*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.NotifyBump(UE::Math::TVector<double>,AActor*,UPrimitiveComponent*,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    void NotifyBump(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        NativeCall<void, void*, void*, void*, void*, void*>(this, "APrimalDinoAIController.NotifyBump(UE::Math::TVector<double>,AActor*,UPrimitiveComponent*,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.NotifyTakeDamage(float,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    void NotifyTakeDamage(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalDinoAIController.NotifyTakeDamage(float,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.OnLosingTargetEvent()
    // endereco: casamento de bytes com a build de referencia
    void OnLosingTargetEvent() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.OnLosingTargetEvent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.OnPossess(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.OnPossess(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.OrderedToLand()
    // endereco: casamento de bytes com a build de referencia
    bool OrderedToLand() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.OrderedToLand()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.OverrideHasReachedGoalWithUseHeight(UE::Math::TVector<double>&,float,flo
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OverrideHasReachedGoalWithUseHeight(void* a0, float a1, float a2, float a3) const
    {
        return NativeCall<void*, void*, float, float, float>(this, "APrimalDinoAIController.OverrideHasReachedGoalWithUseHeight(UE::Math::TVector<double>&,float,float,float)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.PlayStartledAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayStartledAnim() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.PlayStartledAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.RebootBrainComponent()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void RebootBrainComponent() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.RebootBrainComponent()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.RecoverMovement()
    // endereco: casamento de bytes com a build de referencia
    void RecoverMovement() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.RecoverMovement()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.RemoveFromAggro(AActor*)
    // endereco: cache_pdb_25090264
    void RemoveFromAggro(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.RemoveFromAggro(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ResetAccelerationFollowsRotation()
    // endereco: cache_pdb_25090264
    void ResetAccelerationFollowsRotation() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ResetAccelerationFollowsRotation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ResetGroundSpeed()
    // endereco: cache_pdb_25090264
    void ResetGroundSpeed() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ResetGroundSpeed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ResetRotationRate()
    // endereco: cache_pdb_25090264
    void ResetRotationRate() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ResetRotationRate()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ResetRotationUseAcceleration()
    // endereco: cache_pdb_25090264
    void ResetRotationUseAcceleration() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.ResetRotationUseAcceleration()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.RestartBrainComponent()
    // endereco: cache_pdb_25090264
    void RestartBrainComponent() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.RestartBrainComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.RunBehaviorTree(UBehaviorTree*)
    // endereco: casamento de bytes com a build de referencia
    bool RunBehaviorTree(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalDinoAIController.RunBehaviorTree(UBehaviorTree*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.SetAttackGroundSpeed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=89]]
    void SetAttackGroundSpeed() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.SetAttackGroundSpeed()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.SetAttackRotationRate()
    // endereco: cache_pdb_25090264
    void SetAttackRotationRate() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.SetAttackRotationRate()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.SetDeferredTick(bool,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
    void SetDeferredTick(bool a0, bool a1) const
    {
        NativeCall<void, bool, bool>(this, "APrimalDinoAIController.SetDeferredTick(bool,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.SetHasAttackPriority(bool)
    // endereco: cache_pdb_25090264
    void SetHasAttackPriority(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalDinoAIController.SetHasAttackPriority(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.SetPawn(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SetPawn(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.SetPawn(APawn*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.SetTarget(AActor*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetTarget(void* a0, bool a1, bool a2) const
    {
        NativeCall<void, void*, bool, bool>(this, "APrimalDinoAIController.SetTarget(AActor*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.ShouldForceFlee()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1743+bytes40+grafo=20/20]]
    bool ShouldForceFlee() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceFlee()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.ShouldForceRunWhenAttacking()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=123]]
    bool ShouldForceRunWhenAttacking() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceRunWhenAttacking()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.StaticFindRandomWanderDestinationAroundPoint(APrimalDinoCharacter*,APrim
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticFindRandomWanderDestinationAroundPoint(void* a0, void* a1, void* a2, float a3, float a4) const
    {
        return NativeCall<void*, void*, void*, void*, float, float>(this, "APrimalDinoAIController.StaticFindRandomWanderDestinationAroundPoint(APrimalDinoCharacter*,APrimalDinoAIController*,UE::Math::TVector<double>,float,float)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalDinoAIController.StaticGetRandomWanderDestination(APrimalDinoCharacter*,APrimalDinoAICont
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticGetRandomWanderDestination(void* a0, void* a1, void* a2, float a3, bool a4, bool a5, void* a6, float a7, bool a8, bool a9) const
    {
        return NativeCall<void*, void*, void*, void*, float, bool, bool, void*, float, bool, bool>(this, "APrimalDinoAIController.StaticGetRandomWanderDestination(APrimalDinoCharacter*,APrimalDinoAIController*,UE::Math::TVector<double>,float,bool,bool,UE::Math::TRotator<double>,float,bool,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.StaticRegisterNativesAPrimalDinoAIController()
    // endereco: casamento de bytes com a build de referencia
    static void StaticRegisterNativesAPrimalDinoAIController()
    {
        NativeCall<void>(nullptr, "APrimalDinoAIController.StaticRegisterNativesAPrimalDinoAIController()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.StopBrainComponent(FString)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void StopBrainComponent(const FString& a0) const
    {
        NativeCall<void, void*>(this, "APrimalDinoAIController.StopBrainComponent(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void StopBrainComponent(FString* a0) const
    { StopBrainComponent(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.Tick(float)
    // classe: a funcao mora em AAIController, e APrimalDinoAIController herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "AAIController.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalDinoAIController.UpdateAggro()
    // endereco: cache_pdb_25090264
    void UpdateAggro() const
    {
        NativeCall<void>(this, "APrimalDinoAIController.UpdateAggro()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalDinoAIController.WantsAttackPriority()
    // endereco: cache_pdb_25090264
    bool WantsAttackPriority() const
    {
        return NativeCall<bool>(this, "APrimalDinoAIController.WantsAttackPriority()");
    }

    float& AIFlightMaxLandingZDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AIFlightMaxLandingZDistance"); }
    float& AboveDeltaZAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AboveDeltaZAttackRange"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastForcedAttackEnemyTeamTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x8F0; confianca alta)
    float& AccumulatedBehaviorDeltaField() const
    { return BrzCampoAncorado<float>(this, "LastForcedAttackEnemyTeamTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastForcedAttackEnemyTeamTime` +20, medido na build 25090264
    //  (offset absoluto medido: 0x8F4; confianca alta)
    int& AccumulatedBehaviorFrameCountField() const
    { return BrzCampoAncorado<int>(this, "LastForcedAttackEnemyTeamTime", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bWildUseDeltaZTargetingForFlyerPawnOrBigDino` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6C8; confianca alta)
    TArray<void*>& AggroEntriesField() const
    { return BrzCampoAncorado<TArray<void*>>(this, "bWildUseDeltaZTargetingForFlyerPawnOrBigDino", 4); }
    float& AggroFactorDamagePercentageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDamagePercentageMultiplier"); }
    float& AggroFactorDecreaseGracePeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseGracePeriod"); }
    float& AggroFactorDecreaseSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseSpeed"); }
    float& AggroFactorDesirabilityMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDesirabilityMultiplier"); }
    TArray<void*>& AggroNotifyNeighborsClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.AggroNotifyNeighborsClasses"); }
    float& AggroNotifyNeighborsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsMultiplier"); }
    float& AggroNotifyNeighborsRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRange"); }
    float& AggroNotifyNeighborsRangeFalloffField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRangeFalloff"); }
    float& AggroToAddUponAcquiringTargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponAcquiringTarget"); }
    float& AggroToAddUponRemovingTargetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponRemovingTarget"); }
    float& AttackDestinationOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackDestinationOffset"); }
    float& AttackIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackInterval"); }
    float& AttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRange"); }
    float& AttackRotationGroundSpeedMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationGroundSpeedMultiplier"); }
    float& AttackRotationRangeDegreesField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationRangeDegrees"); }
    BrzCampoPonteiro AttackRotationRateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.AttackRotationRate")); }
    UBehaviorTree*& BabyHasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.BabyHasEnemyTree"); }
    float& BaseStructureTargetingDesireField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BaseStructureTargetingDesire"); }
    UBehaviorTree*& BehaviourTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.BehaviourTree"); }
    float& BelowDeltaZAttackRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BelowDeltaZAttackRange"); }
    float& BeyondTargetingRangeAggroAdditionField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BeyondTargetingRangeAggroAddition"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForcedMoveToUntilTime` +16, medido na build 25090264
    //  (offset absoluto medido: 0x978; confianca alta)
    void*& CachedWanderDestinationField() const
    { return BrzCampoAncorado<void*>(this, "ForcedMoveToUntilTime", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForcedMoveToUntilTime` +40, medido na build 25090264
    //  (offset absoluto medido: 0x990; confianca media)
    void*& CachedWanderFromLocationField() const
    { return BrzCampoAncorado<void*>(this, "ForcedMoveToUntilTime", 40); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForcedMoveToUntilTime` +64, medido na build 25090264
    //  (offset absoluto medido: 0x9A8; confianca media)
    void*& CachedWanderTimeField() const
    { return BrzCampoAncorado<void*>(this, "ForcedMoveToUntilTime", 64); }
    float& CombatFlyingCorpseTargetingZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CombatFlyingCorpseTargetingZOffset"); }
    float& CombatFlyingCrouchProneTargetingZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CombatFlyingCrouchProneTargetingZOffset"); }
    BrzCampoPonteiro CombatFlyingMoveTowardsTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.CombatFlyingMoveTowardsTargetOffset")); }
    float& CorpseAttackDestinationMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.CorpseAttackDestinationMultiplier"); }
    float& DamagedForceAggroIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DamagedForceAggroInterval"); }
    float& DieIfLeftWaterReachedRadiusDistanceCheckMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterReachedRadiusDistanceCheckMultiplier"); }
    float& DieIfLeftWaterTargetUnsubmergedTimeoutField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetUnsubmergedTimeout"); }
    float& DieIfLeftWaterTargetingRequiresFreeDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetingRequiresFreeDepth"); }
    float& DieIfLeftWaterWanderMinimumWaterHeightMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterWanderMinimumWaterHeightMultiplier"); }
    float& DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepthField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterWanderRequiresCapsuleMultiFreeDepth"); }
    float& ExtraCorpseTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ExtraCorpseTargetingRange"); }
    float& FindLandingPositionZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FindLandingPositionZOffset"); }
    float& FleeFromAttackCoolDownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackCoolDownTime"); }
    float& FleeFromAttackTimeLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackTimeLimit"); }
    UBehaviorTree*& FleeFromAttackTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.FleeFromAttackTree"); }
    BrzCampoPonteiro FlyingMoveTowardsTargetOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.FlyingMoveTowardsTargetOffset")); }
    float& FlyingReachedDestinationThresholdOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingReachedDestinationThresholdOffset"); }
    BrzCampoPonteiro FlyingTargetFocalPositionOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.FlyingTargetFocalPositionOffset")); }
    float& FlyingWanderFixedDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderFixedDistanceAmount"); }
    float& FlyingWanderRandomDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderRandomDistanceAmount"); }
    float& FollowStoppingDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FollowStoppingDistance"); }
    double& ForceAggroUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.ForceAggroUntilTime"); }
    float& ForceFleeUnderHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForceFleeUnderHealthPercentage"); }
    AActor*& ForceTargetActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.ForceTargetActor"); }
    UBehaviorTree*& ForcedAggroHasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.ForcedAggroHasEnemyTree"); }
    float& ForcedAggroTimeCounterField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedAggroTimeCounter"); }
    int& ForcedAttackEnemyTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.ForcedAttackEnemyTeam"); }
    TWeakObjectPtr<void>& ForcedAttackTargetField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalDinoAIController.ForcedAttackTarget"); }
    float& ForcedFleeDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedFleeDuration"); }
    double& ForcedMoveToUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.ForcedMoveToUntilTime"); }
    float& GroundAttackSpeedOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.GroundAttackSpeedOverride"); }
    UBehaviorTree*& HasEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.HasEnemyTree"); }
    float& HigherTamedTargetingRangeOverrideField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.HigherTamedTargetingRangeOverride"); }
    BrzCampoPonteiro IgnoredTargetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.IgnoredTargets")); }
    float& LandDinoMaxFlyerTargetDeltaZField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxFlyerTargetDeltaZ"); }
    float& LandDinoMaxWaterTargetDepthCapsuleMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxWaterTargetDepthCapsuleMultiplier"); }
    double& LastBlockadeCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastBlockadeCheckTime"); }
    BrzCampoPonteiro LastBlockadeHitLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.LastBlockadeHitLocation")); }
    BrzCampoPonteiro LastBlockadeHitNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.LastBlockadeHitNormal")); }
    float& LastBlockadeWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LastBlockadeWidth"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastForcedAttackEnemyTeamTime` +24, medido na build 25090264
    //  (offset absoluto medido: 0x8F8; confianca alta)
    int& LastCharacterTargetTeamField() const
    { return BrzCampoAncorado<int>(this, "LastForcedAttackEnemyTeamTime", 24); }
    BrzCampoPonteiro LastCheckAttackRangeClosestPointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.LastCheckAttackRangeClosestPoint")); }
    BrzCampoPonteiro LastCheckAttackRangePawnLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.LastCheckAttackRangePawnLocation")); }
    AActor*& LastCheckAttackRangeTargetField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.LastCheckAttackRangeTarget"); }
    BrzCampoPonteiro LastCheckAttackRangeTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.LastCheckAttackRangeTargetLocation")); }
    double& LastExecutedAttackTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastExecutedAttackTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastFleeLocCheckTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x938; confianca alta)
    void*& LastFleeLocCheckField() const
    { return BrzCampoAncorado<void*>(this, "LastFleeLocCheckTime", 8); }
    double& LastFleeLocCheckTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastFleeLocCheckTime"); }
    double& LastForcedAttackEnemyTeamTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastForcedAttackEnemyTeamTime"); }
    double& LastForcedFleeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastForcedFleeTime"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ForcedMoveToUntilTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x970; confianca alta)
    double& LastHadAggroEntriesTimeField() const
    { return BrzCampoAncorado<double>(this, "ForcedMoveToUntilTime", 8); }
    AActor*& LastMovingAroundBlockadeActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalDinoAIController.LastMovingAroundBlockadeActor"); }
    double& LastMovingAroundBlockadeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.LastMovingAroundBlockadeTime"); }
    float& MateBoostAggroNotifyNeighborsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MateBoostAggroNotifyNeighborsMultiplier"); }
    float& MaxFlyingTargetDeltaZField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MaxFlyingTargetDeltaZ"); }
    float& MinAggroValueField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAggroValue"); }
    float& MinAttackIntervalForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAttackIntervalForFleeing"); }
    float& MinAttackIntervalForFleeing_WaterField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAttackIntervalForFleeing_Water"); }
    float& MinLocChangeIntervalForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinLocChangeIntervalForFleeing"); }
    float& MinimumWanderGroundNormalZField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinimumWanderGroundNormalZ"); }
    UBehaviorTree*& MissionTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.MissionTree"); }
    float& MoveAroundBlockadeAdditionalWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundBlockadeAdditionalWidth"); }
    float& MoveAroundObjectMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundObjectMaxVelocity"); }
    float& MovingAroundBlockadeDirectionField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MovingAroundBlockadeDirection"); }
    BrzCampoPonteiro MovingAroundBlockadePointField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.MovingAroundBlockadePoint")); }
    float& NaturalMaxDepthZField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalMaxDepthZ"); }
    float& NaturalTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalTargetingRange"); }
    UBehaviorTree*& NoEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.NoEnemyTree"); }
    int& NumAlliesToAttackField() const
    { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.NumAlliesToAttack"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `LastForcedAttackEnemyTeamTime` +8, medido na build 25090264
    //  (offset absoluto medido: 0x8E8; confianca alta)
    TWeakObjectPtr<void>& PawnPersistentReferenceField() const
    { return BrzCampoAncorado<TWeakObjectPtr<void>>(this, "LastForcedAttackEnemyTeamTime", 8); }
    float& PercentageTorporForFleeingField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.PercentageTorporForFleeing"); }
    float& RangeTargetWildDinosMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.RangeTargetWildDinosMultiplier"); }
    float& SeekingIntervalCheckToFlyField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToFly"); }
    float& SeekingIntervalCheckToLandField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToLand"); }
    float& SeekingPercentChanceToFlyField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToFly"); }
    float& SeekingPercentChanceToLandField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToLand"); }
    BrzCampoPonteiro StartMovingAroundBlockadeLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.StartMovingAroundBlockadeLocation")); }
    TArray<void*>& TamedAITargetingRangeMultipliersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.TamedAITargetingRangeMultipliers"); }
    float& TamedCorpseFoodTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedCorpseFoodTargetingRange"); }
    float& TamedFollowAcceptanceHeightOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceHeightOffset"); }
    float& TamedFollowAcceptanceRadiusOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceRadiusOffset"); }
    float& TamedMaxFollowDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedMaxFollowDistance"); }
    UBehaviorTree*& TamedNoEnemyTreeField() const
    { return *GetNativePointerField<UBehaviorTree**>(this, "APrimalDinoAIController.TamedNoEnemyTree"); }
    TArray<void*>& TamedTargetingDesireMultiplierClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.TamedTargetingDesireMultiplierClasses"); }
    TArray<void*>& TamedTargetingDesireMultiplierValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.TamedTargetingDesireMultiplierValues"); }
    float& TamedTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedTargetingRange"); }
    BrzCampoPonteiro TargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalDinoAIController.Target")); }
    float& TargetingDistanceReductionFactorExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorExponent"); }
    float& TargetingDistanceReductionFactorLinearField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorLinear"); }
    double& UseHigherTamedTargetingRangeOverrideUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalDinoAIController.UseHigherTamedTargetingRangeOverrideUntilTime"); }
    float& WanderFixedDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFixedDistanceAmount"); }
    float& WanderFlyingClampZHeightAboveGroundField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingClampZHeightAboveGround"); }
    float& WanderFlyingMinZHeightAboveGroundField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingMinZHeightAboveGround"); }
    float& WanderFlyingZScalerField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingZScaler"); }
    float& WanderRandomDistanceAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderRandomDistanceAmount"); }
    float& WildAboveDeltaZTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildAboveDeltaZTargetingRange"); }
    float& WildBelowDeltaZTargetingRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildBelowDeltaZTargetingRange"); }
    TArray<void*>& WildTargetingDesireMultiplierClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.WildTargetingDesireMultiplierClasses"); }
    TArray<void*>& WildTargetingDesireMultiplierValuesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalDinoAIController.WildTargetingDesireMultiplierValues"); }
    bool& bNotifyNeighborsWithoutDamageField() const
    { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bNotifyNeighborsWithoutDamage"); }
    bool& bOnlyOverlapTargetCorpsesUnlessHasTargetField() const
    { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bOnlyOverlapTargetCorpsesUnlessHasTarget"); }
    bool& bUseAlternateMovePointField() const
    { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseAlternateMovePoint"); }
    bool& bUseBPShouldNotifyAnyNeighborField() const
    { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPShouldNotifyAnyNeighbor"); }
    bool& bWaterDinoAllowUnsubmergedTargetsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bWaterDinoAllowUnsubmergedTargets"); }
    BitFieldValue<bool, unsigned __int32> bForcedAggro()
    { return { (void*)this, "bForcedAggro" }; }
    BitFieldValue<bool, unsigned __int32> bDeferredTickMode()
    { return { (void*)this, "bDeferredTickMode" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMoveAroundBlockade()
    { return { (void*)this, "bIgnoreMoveAroundBlockade" }; }
    BitFieldValue<bool, unsigned __int32> bFlyingUseMoveAroundBlockade()
    { return { (void*)this, "bFlyingUseMoveAroundBlockade" }; }
    BitFieldValue<bool, unsigned __int32> bUseGeometryInsteadOfStationObjForFreeDepthTest()
    { return { (void*)this, "bUseGeometryInsteadOfStationObjForFreeDepthTest" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyBPTargetSet()
    { return { (void*)this, "bNotifyBPTargetSet" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetupFindTarget()
    { return { (void*)this, "bUseBPSetupFindTarget" }; }
    BitFieldValue<bool, unsigned __int32> bNotAllowedToFindTargets()
    { return { (void*)this, "bNotAllowedToFindTargets" }; }
    BitFieldValue<bool, unsigned __int32> bAllowForceFleeToSameTargetingTeam()
    { return { (void*)this, "bAllowForceFleeToSameTargetingTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPUpdateBestTarget()
    { return { (void*)this, "bUseBPUpdateBestTarget" }; }
    BitFieldValue<bool, unsigned __int32> bTargetChanged()
    { return { (void*)this, "bTargetChanged" }; }
    BitFieldValue<bool, unsigned __int32> bAttackForcesRunning()
    { return { (void*)this, "bAttackForcesRunning" }; }
    BitFieldValue<bool, unsigned __int32> bUseFlyingTargetOffsets()
    { return { (void*)this, "bUseFlyingTargetOffsets" }; }
    BitFieldValue<bool, unsigned __int32> bRidingDinoTargetPlayer()
    { return { (void*)this, "bRidingDinoTargetPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bRidingPlayerTargetDino()
    { return { (void*)this, "bRidingPlayerTargetDino" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreWaterOrAmphibiousTargets()
    { return { (void*)this, "bIgnoreWaterOrAmphibiousTargets" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPTargetingDesire()
    { return { (void*)this, "bUseBPTargetingDesire" }; }
    BitFieldValue<bool, unsigned __int32> bDisableForceFlee()
    { return { (void*)this, "bDisableForceFlee" }; }
    BitFieldValue<bool, unsigned __int32> bUseCombatMoveTowardsTargetOffset()
    { return { (void*)this, "bUseCombatMoveTowardsTargetOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideIgnoredByWildDino()
    { return { (void*)this, "bUseBPOverrideIgnoredByWildDino" }; }
    BitFieldValue<bool, unsigned __int32> bCanUseAttackStateOnTargetChange()
    { return { (void*)this, "bCanUseAttackStateOnTargetChange" }; }
    BitFieldValue<bool, unsigned __int32> bModifiedWanderRadius()
    { return { (void*)this, "bModifiedWanderRadius" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayerOrTamed()
    { return { (void*)this, "bForceOnlyTargetingPlayerOrTamed" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetingAllStructures()
    { return { (void*)this, "bForceTargetingAllStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceTargetDinoRider()
    { return { (void*)this, "bForceTargetDinoRider" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerAllowWaterTargeting()
    { return { (void*)this, "bFlyerAllowWaterTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceTargetDinoRider()
    { return { (void*)this, "bUseBPForceTargetDinoRider" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysStartledWhenAggroedByNeighbor()
    { return { (void*)this, "bAlwaysStartledWhenAggroedByNeighbor" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnlyTargetingPlayers()
    { return { (void*)this, "bForceOnlyTargetingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bIsMissionDino()
    { return { (void*)this, "bIsMissionDino" }; }
    BitFieldValue<bool, unsigned __int32> bUseImprovedAggroFalloffBehavior()
    { return { (void*)this, "bUseImprovedAggroFalloffBehavior" }; }
    BitFieldValue<bool, unsigned __int32> bUseBP_TamedOverrideHorizontalLandingRange()
    { return { (void*)this, "bUseBP_TamedOverrideHorizontalLandingRange" }; }
    BitFieldValue<bool, unsigned __int32> bFlyerWanderDefaultToOrigin()
    { return { (void*)this, "bFlyerWanderDefaultToOrigin" }; }
    BitFieldValue<bool, unsigned __int32> bCheckBuffTargetingDesireOverride()
    { return { (void*)this, "bCheckBuffTargetingDesireOverride" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSwimWanderingForLandDinos()
    { return { (void*)this, "bAllowSwimWanderingForLandDinos" }; }
    BitFieldValue<bool, unsigned __int32> bUse_BPOverrideLandingLocation()
    { return { (void*)this, "bUse_BPOverrideLandingLocation" }; }
    BitFieldValue<bool, unsigned __int32> HasAttackPriority()
    { return { (void*)this, "HasAttackPriority" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoToTargetShips()
    { return { (void*)this, "bAllowDinoToTargetShips" }; }
    BitFieldValue<bool, unsigned __int32> bDontWander()
    { return { (void*)this, "bDontWander" }; }
    BitFieldValue<bool, unsigned __int32> bFleeOnCriticalHealth()
    { return { (void*)this, "bFleeOnCriticalHealth" }; }
    BitFieldValue<bool, unsigned __int32> bFocusOnTargetDuringAttack()
    { return { (void*)this, "bFocusOnTargetDuringAttack" }; }
    BitFieldValue<bool, unsigned __int32> bNotifyNeighborsWithoutDamage()
    { return { (void*)this, "bNotifyNeighborsWithoutDamage" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyForceFleeUnderHealthPercentageIfWild()
    { return { (void*)this, "bOnlyForceFleeUnderHealthPercentageIfWild" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyOverlapTargetCorpsesUnlessHasTarget()
    { return { (void*)this, "bOnlyOverlapTargetCorpsesUnlessHasTarget" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyTargetShips()
    { return { (void*)this, "bOnlyTargetShips" }; }
    BitFieldValue<bool, unsigned __int32> bRequireAbsoluteDamageForNeighborNotification()
    { return { (void*)this, "bRequireAbsoluteDamageForNeighborNotification" }; }
    BitFieldValue<bool, unsigned __int32> bStopMassMovingWithTarget()
    { return { (void*)this, "bStopMassMovingWithTarget" }; }
    BitFieldValue<bool, unsigned __int32> bTotallyIgnoreWaterTargets()
    { return { (void*)this, "bTotallyIgnoreWaterTargets" }; }
    BitFieldValue<bool, unsigned __int32> bUseAggro()
    { return { (void*)this, "bUseAggro" }; }
    BitFieldValue<bool, unsigned __int32> bUseAlternateMovePoint()
    { return { (void*)this, "bUseAlternateMovePoint" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAdjustTargetingDesireForActorOutOfLimitVolume()
    { return { (void*)this, "bUseBPAdjustTargetingDesireForActorOutOfLimitVolume" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAlternateAttackPoint()
    { return { (void*)this, "bUseBPForceAlternateAttackPoint" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnSetHasAttackPriority()
    { return { (void*)this, "bUseBPOnSetHasAttackPriority" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStartle()
    { return { (void*)this, "bUseBPPreventStartle" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldNotifyAnyNeighbor()
    { return { (void*)this, "bUseBPShouldNotifyAnyNeighbor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPShouldNotifyNeighbor()
    { return { (void*)this, "bUseBPShouldNotifyNeighbor" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPWantsAttackPriority()
    { return { (void*)this, "bUseBPWantsAttackPriority" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverlapTargetCheck()
    { return { (void*)this, "bUseOverlapTargetCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseOverlapTargetCheckTraces()
    { return { (void*)this, "bUseOverlapTargetCheckTraces" }; }
    BitFieldValue<bool, unsigned __int32> bWaterDinoAllowUnsubmergedTargets()
    { return { (void*)this, "bWaterDinoAllowUnsubmergedTargets" }; }
    BitFieldValue<bool, unsigned __int32> bWildUseDeltaZTargetingForFlyerPawnOrBigDino()
    { return { (void*)this, "bWildUseDeltaZTargetingForFlyerPawnOrBigDino" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALDINOAICONTROLLER_H
