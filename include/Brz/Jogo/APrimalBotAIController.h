// ==========================================================================
//  APrimalBotAIController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBOTAICONTROLLER_H
#define BRZ_SDK_JOGO_APRIMALBOTAICONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AAIAttackCoordinator;
struct APrimalDinoCharacter;
struct UObject;
struct UPrimalBotRidingComponent;

#include "APrimalDinoAIController.h"

struct APrimalBotAIController : public APrimalDinoAIController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBotAIController"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.BPFindDinoToClaim()
    // endereco: casamento de bytes com a build de referencia
    UObject* BPFindDinoToClaim() const
    {
        return NativeCall<UObject*>(this, "APrimalBotAIController.BPFindDinoToClaim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.BPFindSeatingStructureToClaim(int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPFindSeatingStructureToClaim(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotAIController.BPFindSeatingStructureToClaim(int&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotAIController.BPOnCharacterAttachedToStructure(APrimalStructureSeating*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnCharacterAttachedToStructure(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBotAIController.BPOnCharacterAttachedToStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotAIController.BPOnCharacterDetachedFromDino(APrimalDinoCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void BPOnCharacterDetachedFromDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.BPOnCharacterDetachedFromDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotAIController.BPOnClaimedSeatingStructure(APrimalStructureSeating*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BPOnClaimedSeatingStructure(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBotAIController.BPOnClaimedSeatingStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBotAIController.BPOnDinoClaimed(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void BPOnDinoClaimed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.BPOnDinoClaimed(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.CanSitOnStructure(APrimalStructureSeating*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=429+grafo=6/7]]
    bool CanSitOnStructure(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotAIController.CanSitOnStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.ChangedAITarget_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void ChangedAITarget_Implementation() const
    {
        NativeCall<void>(this, "APrimalBotAIController.ChangedAITarget_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.ClaimDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool ClaimDino(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotAIController.ClaimDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.ClaimSeatingStructure(APrimalStructureSeating*,int)
    // endereco: casamento de bytes com a build de referencia
    bool ClaimSeatingStructure(void* a0, int a1) const
    {
        return NativeCall<bool, void*, int>(this, "APrimalBotAIController.ClaimSeatingStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.FindADinoToClaim()
    // endereco: casamento de bytes com a build de referencia
    APrimalDinoCharacter* FindADinoToClaim() const
    {
        return NativeCall<APrimalDinoCharacter*>(this, "APrimalBotAIController.FindADinoToClaim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.FindSeatingStructureToClaim(int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindSeatingStructureToClaim(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotAIController.FindSeatingStructureToClaim(int&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.GetAlternativeSourceActorForOverlapTargetCheckTraces()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAlternativeSourceActorForOverlapTargetCheckTraces() const
    {
        return NativeCall<void*>(this, "APrimalBotAIController.GetAlternativeSourceActorForOverlapTargetCheckTraces()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.GetBotRidingComponent(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    UPrimalBotRidingComponent* GetBotRidingComponent(void* a0) const
    {
        return NativeCall<UPrimalBotRidingComponent*, void*>(this, "APrimalBotAIController.GetBotRidingComponent(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.GetHasAttackPriority()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    bool GetHasAttackPriority() const
    {
        return NativeCall<bool>(this, "APrimalBotAIController.GetHasAttackPriority()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.InitializeBlackboardValues(APrimalBotCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void InitializeBlackboardValues(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.InitializeBlackboardValues(APrimalBotCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.IsDinoRideable(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsDinoRideable(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBotAIController.IsDinoRideable(APrimalDinoCharacter*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.IsTooCloseToAttack()
    // endereco: thunk
    bool IsTooCloseToAttack() const
    {
        return NativeCall<bool>(this, "APrimalBotAIController.IsTooCloseToAttack()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.IsTooFarToAttack()
    // endereco: thunk
    bool IsTooFarToAttack() const
    {
        return NativeCall<bool>(this, "APrimalBotAIController.IsTooFarToAttack()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.OnCharacterAttachedToDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnCharacterAttachedToDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.OnCharacterAttachedToDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.OnCharacterAttachedToStructure(APrimalStructureSeating*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCharacterAttachedToStructure(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalBotAIController.OnCharacterAttachedToStructure(APrimalStructureSeating*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.OnCharacterDetachedFromDino(APrimalDinoCharacter*)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1056+grafo=14/15]]
    void OnCharacterDetachedFromDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.OnCharacterDetachedFromDino(APrimalDinoCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.OnCharacterDetachedFromStructure(APrimalStructureSeating*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnCharacterDetachedFromStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBotAIController.OnCharacterDetachedFromStructure(APrimalStructureSeating*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.OnPossess(APawn*)
    // endereco: casamento de bytes com a build de referencia
    void OnPossess(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.OnPossess(APawn*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.OnUnPossess()
    // classe: a funcao mora em AAIController, e APrimalBotAIController herda dela: o `this` e' compativel por construcao
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=93]]
    BrzPonteiro OnUnPossess() const
    {
        return NativeCall<void*>(this, "AAIController.OnUnPossess()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.ReleaseClaimOnDino()
    // endereco: casamento de bytes com a build de referencia
    void ReleaseClaimOnDino() const
    {
        NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnDino()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.ReleaseClaimOnSeatingStructure()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ReleaseClaimOnSeatingStructure() const
    {
        NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnSeatingStructure()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.SetAttackCoordinator(AAIAttackCoordinator*)
    // endereco: cache_pdb_25090264
    void SetAttackCoordinator(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.SetAttackCoordinator(AAIAttackCoordinator*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.SetControllerOnDino(APrimalDinoCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void SetControllerOnDino(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBotAIController.SetControllerOnDino(APrimalDinoCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.SetHasAttackPriority(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102+grafo=3/3]]
    void SetHasAttackPriority(bool a0) const
    {
        NativeCall<void, bool>(this, "APrimalBotAIController.SetHasAttackPriority(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBotAIController.SetIsDodgingBlackboardValue(bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetIsDodgingBlackboardValue(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBotAIController.SetIsDodgingBlackboardValue(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.SetRiddenDinoAttackPriority()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void SetRiddenDinoAttackPriority() const
    {
        NativeCall<void>(this, "APrimalBotAIController.SetRiddenDinoAttackPriority()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.ShouldReleaseFromSeatingStructure()
    // endereco: thunk
    bool ShouldReleaseFromSeatingStructure() const
    {
        return NativeCall<bool>(this, "APrimalBotAIController.ShouldReleaseFromSeatingStructure()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.TimeSinceGivenAttackPriority()
    // endereco: thunk
    float TimeSinceGivenAttackPriority() const
    {
        return NativeCall<float>(this, "APrimalBotAIController.TimeSinceGivenAttackPriority()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.UpdateDinoClaim()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=636+grafo=14/14]]
    void UpdateDinoClaim() const
    {
        NativeCall<void>(this, "APrimalBotAIController.UpdateDinoClaim()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBotAIController.UpdateSeatingStructureClaim()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=272+grafo=4/4]]
    void UpdateSeatingStructureClaim() const
    {
        NativeCall<void>(this, "APrimalBotAIController.UpdateSeatingStructureClaim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBotAIController.WantsAttackPriority()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=60]]
    bool WantsAttackPriority() const
    {
        return NativeCall<bool>(this, "APrimalBotAIController.WantsAttackPriority()");
    }

    AAIAttackCoordinator*& AttackCoordinatorField() const
    { return *GetNativePointerField<AAIAttackCoordinator**>(this, "APrimalBotAIController.AttackCoordinator"); }
    TWeakObjectPtr<void>& ClaimedDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBotAIController.ClaimedDino"); }
    TWeakObjectPtr<void>& ClaimedSeatingStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBotAIController.ClaimedSeatingStructure"); }
    int& ClaimedSeatingStructureSeatNumberField() const
    { return *GetNativePointerField<int*>(this, "APrimalBotAIController.ClaimedSeatingStructureSeatNumber"); }
    TWeakObjectPtr<void>& ControlledBotField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalBotAIController.ControlledBot"); }
    float& DinoSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotAIController.DinoSearchRadius"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ClaimedDino` +12, medido na build 25090264
    //  (offset absoluto medido: 0xAB8; confianca alta)
    double& LastTimeGivenAttackPriorityField() const
    { return BrzCampoAncorado<double>(this, "ClaimedDino", 12); }
    BrzCampoPonteiro RiddenDinoControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotAIController.RiddenDinoControllerClass")); }
    BrzCampoPonteiro RiddenDinoMissionControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotAIController.RiddenDinoMissionControllerClass")); }
    BrzCampoPonteiro RiddenFlyerDinoControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotAIController.RiddenFlyerDinoControllerClass")); }
    BrzCampoPonteiro RiddenFlyerDinoMissionControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBotAIController.RiddenFlyerDinoMissionControllerClass")); }
    float& SeatingStructureSearchRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotAIController.SeatingStructureSearchRadius"); }
    float& SeatingStructureSearchRadiusStationairyField() const
    { return *GetNativePointerField<float*>(this, "APrimalBotAIController.SeatingStructureSearchRadiusStationairy"); }
    BitFieldValue<bool, unsigned __int32> bClaimTamedDinos()
    { return { (void*)this, "bClaimTamedDinos" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBOTAICONTROLLER_H
