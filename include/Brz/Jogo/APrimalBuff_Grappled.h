// ==========================================================================
//  APrimalBuff_Grappled — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALBUFF_GRAPPLED_H
#define BRZ_SDK_JOGO_APRIMALBUFF_GRAPPLED_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalCharacter;
struct UClass;
struct USoundCue;
struct UStaticMesh;

#include "APrimalBuff.h"

struct APrimalBuff_Grappled : public APrimalBuff
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalBuff_Grappled"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.AddGrappleTether(FCreateGrappleTetherData&,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddGrappleTether(void* a0, bool a1, int a2) const
    {
        return NativeCall<void*, void*, bool, int>(this, "APrimalBuff_Grappled.AddGrappleTether(FCreateGrappleTetherData&,bool,int)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void AdjustMovementVectorIfAgainstSurface(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface_Implementation(UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    void AdjustMovementVectorIfAgainstSurface_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.AdjustMovementVectorIfAgainstSurface_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.AllowGrappleLogic()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool AllowGrappleLogic() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.AllowGrappleLogic_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool AllowGrappleLogic_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.AllowGrappleLogic_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.ApplyOwnerSwingingVelocity(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ApplyOwnerSwingingVelocity(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.ApplyOwnerSwingingVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ApplyOwnerSwingingVelocity_Implementation(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void ApplyOwnerSwingingVelocity_Implementation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.ApplyOwnerSwingingVelocity_Implementation(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ApplyTetherMoveVelocity(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ApplyTetherMoveVelocity(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ApplyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void ApplyTetherMoveVelocity_Implementation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.ApplyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.AreGrappleTetherTagsEqual(FString,FString,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AreGrappleTetherTagsEqual(const FString& a0, const FString& a1, bool a2) const
    {
        return NativeCall<bool, void*, void*, bool>(this, "APrimalBuff_Grappled.AreGrappleTetherTagsEqual(FString,FString,bool)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool AreGrappleTetherTagsEqual(FString* a0, FString* a1, bool a2) const
    { return AreGrappleTetherTagsEqual(*a0, *a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.BPGetGrappleAltBlendSpaceSettings(float&,float&,UAnimSequence*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetGrappleAltBlendSpaceSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_Grappled.BPGetGrappleAltBlendSpaceSettings(float&,float&,UAnimSequence*&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.BPGetGrappleFPVBlendSpaceAlphas(float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetGrappleFPVBlendSpaceAlphas(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.BPGetGrappleFPVBlendSpaceAlphas(float&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.BP_InterceptGrappleLogic(UE::Math::TVector<double>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=111+chamadores=2]]
    bool BP_InterceptGrappleLogic(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.BP_InterceptGrappleLogic(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.BreakAllTethers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void BreakAllTethers() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.BreakAllTethers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.BreakChildTetherOnGrappledChar(FGrappleTether&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=806+chamadores=2+grafo=7/7]]
    bool BreakChildTetherOnGrappledChar(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.BreakChildTetherOnGrappledChar(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.BreakGrappleTether(int,FString,APrimalBuff_Grappled*,bool)
    // endereco: casamento de bytes com a build de referencia
    char BreakGrappleTether(int a0, const FString& a1, void* a2, bool a3) const
    {
        return NativeCall<char, int, void*, void*, bool>(this, "APrimalBuff_Grappled.BreakGrappleTether(int,FString,APrimalBuff_Grappled*,bool)", a0, const_cast<FString*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    char BreakGrappleTether(int a0, FString* a1, void* a2, bool a3) const
    { return BreakGrappleTether(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CalcGrappleAltBlendSpaceAlphas(UE::Math::TVector<double>&,UE::Math::TVector
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalcGrappleAltBlendSpaceAlphas(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "APrimalBuff_Grappled.CalcGrappleAltBlendSpaceAlphas(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanBeGrappledAgainstSurface()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    bool CanBeGrappledAgainstSurface() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanBeGrappledAgainstSurface_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool CanBeGrappledAgainstSurface_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanBeGrappledAgainstSurface_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CanChangeGrappleState(unsignedchar)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanChangeGrappleState(unsigned char a0) const
    {
        return NativeCall<void*, unsigned char>(this, "APrimalBuff_Grappled.CanChangeGrappleState(unsignedchar)", a0);
    }

    // dump_sobre_sdk_287a0
    //   APrimalBuff_Grappled.CanChangeGrappleState_Implementation(unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    bool CanChangeGrappleState_Implementation(unsigned char a0) const
    {
        return NativeCall<bool, unsigned char>(this, "APrimalBuff_Grappled.CanChangeGrappleState_Implementation(unsignedchar)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CanCharControlGrappleTether(APrimalCharacter*,FGrappleTether&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCharControlGrappleTether(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalBuff_Grappled.CanCharControlGrappleTether(APrimalCharacter*,FGrappleTether&,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CanGrappleTetherAffectOwnerMovement(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanGrappleTetherAffectOwnerMovement(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.CanGrappleTetherAffectOwnerMovement(FGrappleTether&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.CanOwnerGrappleSwing()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanOwnerGrappleSwing() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanOwnerGrappleSwing()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanOwnerGrappleSwing_Implementation()
    // endereco: casamento de bytes com a build de referencia
    bool CanOwnerGrappleSwing_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanOwnerGrappleSwing_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanPullChar(APrimalCharacter*,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    bool CanPullChar(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff_Grappled.CanPullChar(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanPullChar_Implementation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    bool CanPullChar_Implementation(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff_Grappled.CanPullChar_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanReceiveNewGrappleTether(FString)
    // endereco: casamento de bytes com a build de referencia
    bool CanReceiveNewGrappleTether(const FString& a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.CanReceiveNewGrappleTether(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool CanReceiveNewGrappleTether(FString* a0) const
    { return CanReceiveNewGrappleTether(*a0); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.CanSyncGrappleTetherLengths()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool CanSyncGrappleTetherLengths() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanSyncGrappleTetherLengths()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanSyncGrappleTetherLengths_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    bool CanSyncGrappleTetherLengths_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.CanSyncGrappleTetherLengths_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanTetherOwnerPullGrappledChar(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    static bool CanTetherOwnerPullGrappledChar(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "APrimalBuff_Grappled.CanTetherOwnerPullGrappledChar(FGrappleTether&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CanUpdateTetherLength(FGrappleTether&,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanUpdateTetherLength(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalBuff_Grappled.CanUpdateTetherLength(FGrappleTether&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CanUpdateTetherLength_Implementation(FGrappleTether&,float)
    // endereco: casamento de bytes com a build de referencia
    bool CanUpdateTetherLength_Implementation(void* a0, float a1) const
    {
        return NativeCall<bool, void*, float>(this, "APrimalBuff_Grappled.CanUpdateTetherLength_Implementation(FGrappleTether&,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.CheckForAutoBreakTether(FGrappleTether&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=177+grafo=4/4]]
    BrzPonteiro CheckForAutoBreakTether(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.CheckForAutoBreakTether(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CheckForAutoBreakTether_Implementation(FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=405+grafo=11/11]]
    bool CheckForAutoBreakTether_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.CheckForAutoBreakTether_Implementation(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.CheckForTetherBreak(FGrappleTether&,int,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void CheckForTetherBreak(void* a0, int a1, float a2) const
    {
        NativeCall<void, void*, int, float>(this, "APrimalBuff_Grappled.CheckForTetherBreak(FGrappleTether&,int,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ClampGrappleVelocity(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClampGrappleVelocity(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.ClampGrappleVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ClampGrappleVelocity_Implementation(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=91]]
    void ClampGrappleVelocity_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.ClampGrappleVelocity_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.ClampOwnerReleasingVelocity(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ClampOwnerReleasingVelocity(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.ClampOwnerReleasingVelocity(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ClampOwnerReleasingVelocity_Implementation(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=61]]
    void ClampOwnerReleasingVelocity_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.ClampOwnerReleasingVelocity_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.CustomGrappleTick(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void CustomGrappleTick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.CustomGrappleTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Destroyed()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    void Destroyed() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.Destroyed()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.DisplayGrappleSystemHudNotification(AShooterPlayerController*,AActor*,unsig
    // endereco: casamento de bytes com a build de referencia
    bool DisplayGrappleSystemHudNotification(void* a0, void* a1, unsigned char a2, int a3, const FString& a4) const
    {
        return NativeCall<bool, void*, void*, unsigned char, int, void*>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification(AShooterPlayerController*,AActor*,unsignedchar,int,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool DisplayGrappleSystemHudNotification(void* a0, void* a1, unsigned char a2, int a3, FString* a4) const
    { return DisplayGrappleSystemHudNotification(a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.DisplayGrappleSystemHudNotification_Implementation(AShooterPlayerController
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=233]]
    bool DisplayGrappleSystemHudNotification_Implementation(void* a0, void* a1, unsigned char a2, int a3, const FString& a4) const
    {
        return NativeCall<bool, void*, void*, unsigned char, int, void*>(this, "APrimalBuff_Grappled.DisplayGrappleSystemHudNotification_Implementation(AShooterPlayerController*,AActor*,unsignedchar,int,FString&)", a0, a1, a2, a3, const_cast<FString*>(&a4));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    bool DisplayGrappleSystemHudNotification_Implementation(void* a0, void* a1, unsigned char a2, int a3, FString* a4) const
    { return DisplayGrappleSystemHudNotification_Implementation(a0, a1, a2, a3, *a4); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.EndGrapple()
    // endereco: casamento de bytes com a build de referencia
    void EndGrapple() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.EndGrapple_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void EndGrapple_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.EndGrapple_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetActorAttachParentChar(AActor*)
    // endereco: cache_pdb_25090264
    static APrimalCharacter* GetActorAttachParentChar(void* a0)
    {
        return NativeCall<APrimalCharacter*, void*>(nullptr, "APrimalBuff_Grappled.GetActorAttachParentChar(AActor*)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.GetAllCurrentGrapplers()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllCurrentGrapplers() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Grappled.GetAllCurrentGrapplers()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.GetAverageTetherEndLocation(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAverageTetherEndLocation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalBuff_Grappled.GetAverageTetherEndLocation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetCharAngleToGrappleTetherEnd(FGrappleTether&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static float GetCharAngleToGrappleTetherEnd(void* a0, void* a1)
    {
        return NativeCall<float, void*, void*>(nullptr, "APrimalBuff_Grappled.GetCharAngleToGrappleTetherEnd(FGrappleTether&,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetCharDistanceFromTetherEndRatio(FGrappleTether&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCharDistanceFromTetherEndRatio(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.GetCharDistanceFromTetherEndRatio(FGrappleTether&,APrimalCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetCurrentGrappleState(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentGrappleState(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.GetCurrentGrappleState(FGrappleTether&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetCurrentGrappleState_Implementation(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentGrappleState_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.GetCurrentGrappleState_Implementation(FGrappleTether&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.GetCurrentSwingingAxisValues()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentSwingingAxisValues() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Grappled.GetCurrentSwingingAxisValues()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetCurrentTetherMoveDir(FGrappleTether&)
    // endereco: thunk
    BrzPonteiro GetCurrentTetherMoveDir(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.GetCurrentTetherMoveDir(FGrappleTether&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetCurrentTetherMoveDir_Implementation(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentTetherMoveDir_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.GetCurrentTetherMoveDir_Implementation(FGrappleTether&)", a0);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.GetDefaultGrappledBuffClass()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UClass* GetDefaultGrappledBuffClass() const
    {
        return NativeCall<UClass*>(this, "APrimalBuff_Grappled.GetDefaultGrappledBuffClass()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetGrappleAltBlendSpaceSettings(float&,float&,UAnimSequence*&)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetGrappleAltBlendSpaceSettings(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleAltBlendSpaceSettings(float&,float&,UAnimSequence*&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetGrappleAnchorWorldLocation(FGrappleAnchor&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGrappleAnchorWorldLocation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleAnchorWorldLocation(FGrappleAnchor&,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleTetherPullAcceleration(APrimalCharacter*,FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetGrappleTetherPullAcceleration(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullAcceleration(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity(APrimalCharacter*,FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetGrappleTetherPullMaxVelocity(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleTetherPullMaxVelocity(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity(APrimalCharacter*,FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetGrappleTetherReleaseMaxVelocity(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleTetherReleaseMaxVelocity(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleTetherRootTag(FString)
    // endereco: casamento de bytes com a build de referencia
    void GetGrappleTetherRootTag(void* retorno, const FString& a0) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleTetherRootTag(FString)", retorno, const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void GetGrappleTetherRootTag(void* retorno, FString* a0) const
    { GetGrappleTetherRootTag(retorno, *a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleVelocityDampingRate(APrimalCharacter*,FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetGrappleVelocityDampingRate(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGrappleVelocityDampingRate_Implementation(APrimalCharacter*,FGrappleTeth
    // endereco: casamento de bytes com a build de referencia
    float GetGrappleVelocityDampingRate_Implementation(void* a0, void* a1) const
    {
        return NativeCall<float, void*, void*>(this, "APrimalBuff_Grappled.GetGrappleVelocityDampingRate_Implementation(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetGravityZScale(float)
    // endereco: casamento de bytes com a build de referencia
    float GetGravityZScale(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff_Grappled.GetGravityZScale(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetInitGrappleAnchorRelativeOffset(FGrappleAnchor&,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInitGrappleAnchorRelativeOffset(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.GetInitGrappleAnchorRelativeOffset(FGrappleAnchor&,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=608+grafo=22/22]]
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetMaxTetherLength(FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetMaxTetherLength(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff_Grappled.GetMaxTetherLength(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetMinTetherLength(FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetMinTetherLength(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff_Grappled.GetMinTetherLength(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetMinTetherLength_Implementation(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    float GetMinTetherLength_Implementation(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff_Grappled.GetMinTetherLength_Implementation(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetNumValidTethers(bool)
    // endereco: casamento de bytes com a build de referencia
    int GetNumValidTethers(bool a0) const
    {
        return NativeCall<int, bool>(this, "APrimalBuff_Grappled.GetNumValidTethers(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetOwnerAppendedTetherTag(FString,APrimalBuff_Grappled*)
    // endereco: casamento de bytes com a build de referencia
    static void GetOwnerAppendedTetherTag(void* retorno, const FString& a0, void* a1)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "APrimalBuff_Grappled.GetOwnerAppendedTetherTag(FString,APrimalBuff_Grappled*)", retorno, const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void GetOwnerAppendedTetherTag(void* retorno, FString* a0, void* a1)
    { GetOwnerAppendedTetherTag(retorno, *a0, a1); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.GetReplicatedOwnerInputs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetReplicatedOwnerInputs() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Grappled.GetReplicatedOwnerInputs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetRequiredTetherLengthForChar(FGrappleTether&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    static float GetRequiredTetherLengthForChar(void* a0, void* a1)
    {
        return NativeCall<float, void*, void*>(nullptr, "APrimalBuff_Grappled.GetRequiredTetherLengthForChar(FGrappleTether&,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta(FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetTetherBreakLimit_OwnerPastCurrentLengthDelta(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthDelta(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime(FGrappleTether&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    float GetTetherBreakLimit_OwnerPastCurrentLengthForTime(void* a0) const
    {
        return NativeCall<float, void*>(this, "APrimalBuff_Grappled.GetTetherBreakLimit_OwnerPastCurrentLengthForTime(FGrappleTether&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.GetTetherMasterRef(FGrappleTether&,FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTetherMasterRef(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.GetTetherMasterRef(FGrappleTether&,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.GrappleTick(float)
    // endereco: casamento de bytes com a build de referencia
    void GrappleTick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.GrappleTick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.InitGrappleBuff()
    // endereco: casamento de bytes com a build de referencia
    void InitGrappleBuff() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.InitGrappleBuff_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void InitGrappleBuff_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.InitGrappleBuff_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.InitializeGrappleTether(FGrappleTether&,APrimalBuff_Grappled*)
    // endereco: casamento de bytes com a build de referencia
    static bool InitializeGrappleTether(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "APrimalBuff_Grappled.InitializeGrappleTether(FGrappleTether&,APrimalBuff_Grappled*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.IsCharPastMaxTetherLength(FGrappleTether&,APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsCharPastMaxTetherLength(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.IsCharPastMaxTetherLength(FGrappleTether&,APrimalCharacter*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsGrappledCharHardAttached(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=141]]
    bool IsGrappledCharHardAttached(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsGrappledCharHardAttached_Implementation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    bool IsGrappledCharHardAttached_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsGrappledCharHardAttached_Implementation(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.IsHitWithinGrappleRange(FHitResult&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=254]]
    BrzPonteiro IsHitWithinGrappleRange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.IsHitWithinGrappleRange(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsHitWithinGrappleRange_Implementation(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool IsHitWithinGrappleRange_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsHitWithinGrappleRange_Implementation(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.IsOwnerAboveGround(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=228]]
    BrzPonteiro IsOwnerAboveGround(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalBuff_Grappled.IsOwnerAboveGround(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsOwnerAgainstValidSurface()
    // endereco: cache_pdb_25090264
    bool IsOwnerAgainstValidSurface() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerAgainstValidSurface()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsOwnerLookingAtAgainstSurface_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=53]]
    bool IsOwnerLookingAtAgainstSurface_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.IsOwnerLookingAtAgainstSurface_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsSwingingTowardsAxisCenter(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    bool IsSwingingTowardsAxisCenter(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsSwingingTowardsAxisCenter(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsTetherAtMaxLength(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    bool IsTetherAtMaxLength(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsTetherAtMaxLength(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsTethersMasterGrappleBuff(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    bool IsTethersMasterGrappleBuff(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsTethersMasterGrappleBuff(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsValidGrappleHit(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidGrappleHit(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsValidGrappleHit(FHitResult&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.IsValidSurfaceHit(FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    bool IsValidSurfaceHit(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.IsValidSurfaceHit(FHitResult&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.MakeGrappleTether(FCreateGrappleTetherData&,APrimalBuff_Grappled*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MakeGrappleTether(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalBuff_Grappled.MakeGrappleTether(FCreateGrappleTetherData&,APrimalBuff_Grappled*)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.ModifyGrappledCharVelocity(UE::Math::TVector<double>&,FGrappleTether&,float
    // endereco: casamento de bytes com a build de referencia
    void ModifyGrappledCharVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff_Grappled.ModifyGrappledCharVelocity(UE::Math::TVector<double>&,FGrappleTether&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ModifyGrappledCharVelocity_Implementation(UE::Math::TVector<double>&,FGrapp
    // endereco: casamento de bytes com a build de referencia
    void ModifyGrappledCharVelocity_Implementation(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff_Grappled.ModifyGrappledCharVelocity_Implementation(UE::Math::TVector<double>&,FGrappleTether&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ModifyOverriddenCharVelocity(UE::Math::TVector<double>&,float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=168]]
    void ModifyOverriddenCharVelocity(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.ModifyOverriddenCharVelocity(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ModifyTetherMoveVelocity(UE::Math::TVector<double>&,FGrappleTether&)
    // endereco: thunk
    void ModifyTetherMoveVelocity(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity(UE::Math::TVector<double>&,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ModifyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,FGrapple
    // endereco: casamento de bytes com a build de referencia
    void ModifyTetherMoveVelocity_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.ModifyTetherMoveVelocity_Implementation(UE::Math::TVector<double>&,FGrappleTether&)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.ModifyTetherTensionLerpValue(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=140]]
    float ModifyTetherTensionLerpValue(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff_Grappled.ModifyTetherTensionLerpValue(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ModifyTetherTensionLerpValue_Implementation(float)
    // endereco: cache_pdb_25090264
    float ModifyTetherTensionLerpValue_Implementation(float a0) const
    {
        return NativeCall<float, float>(this, "APrimalBuff_Grappled.ModifyTetherTensionLerpValue_Implementation(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Multi_SyncGrappleTetherLength(float)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=54]]
    void Multi_SyncGrappleTetherLength(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Multi_SyncGrappleTetherLength_Implementation(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=172+grafo=4/4]]
    void Multi_SyncGrappleTetherLength_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLength_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths(TArray<float,TSizedDefaultAllocator<32>>&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=168]]
    BrzPonteiro Multi_SyncGrappleTetherLengths(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths(TArray<float,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths_Implementation(TArray<float,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    void Multi_SyncGrappleTetherLengths_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.Multi_SyncGrappleTetherLengths_Implementation(TArray<float,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.NetSyncGrappleTethers()
    // endereco: casamento de bytes com a build de referencia
    void NetSyncGrappleTethers() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.NetSyncGrappleTethers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged()
    // endereco: cache_pdb_25090264
    void OnAgainstValidSurfaceStateChanged() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged_Implementation()
    // endereco: cache_pdb_25090264
    void OnAgainstValidSurfaceStateChanged_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceStateChanged_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.OnAgainstValidSurfaceUpdated()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=96]]
    void OnAgainstValidSurfaceUpdated() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnAgainstValidSurfaceUpdated()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.OnAllowedRestrictedAction()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=45]]
    void OnAllowedRestrictedAction() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnAllowedRestrictedAction()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.OnGrappleStateChanged()
    // endereco: casamento de bytes com a build de referencia
    void OnGrappleStateChanged() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleStateChanged()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.OnGrappleStateChangedNotify(unsignedchar&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGrappleStateChangedNotify(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalBuff_Grappled.OnGrappleStateChangedNotify(unsignedchar&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappleStateChangedNotify_Implementation(unsignedchar&,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=701+grafo=7/7]]
    void OnGrappleStateChangedNotify_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_Grappled.OnGrappleStateChangedNotify_Implementation(unsignedchar&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappleStateChanged_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=33]]
    void OnGrappleStateChanged_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleStateChanged_Implementation()");
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.OnGrappleTetherAdded(FGrappleTether&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=157+grafo=4/4]]
    void OnGrappleTetherAdded(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnGrappleTetherAdded(FGrappleTether&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.OnGrappleTetherBroken(int&)
    // endereco: casamento de bytes com a build de referencia
    void OnGrappleTetherBroken(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnGrappleTetherBroken(int&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappleTetherRemoved(FGrappleTether&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=157+grafo=4/4]]
    void OnGrappleTetherRemoved(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnGrappleTetherRemoved(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappleTethersChanged()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnGrappleTethersChanged() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappleTethersChanged_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
    void OnGrappleTethersChanged_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnGrappleTethersChanged_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappledCharDeath_Implementation(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    void OnGrappledCharDeath_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnGrappledCharDeath_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappledCharSleepStateChange_Implementation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnGrappledCharSleepStateChange_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_Grappled.OnGrappledCharSleepStateChange_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.OnGrappledPrimalChar(APrimalCharacter*,FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    void OnGrappledPrimalChar(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.OnGrappledPrimalChar(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnGrappledPrimalChar_Implementation(APrimalCharacter*,FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    void OnGrappledPrimalChar_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.OnGrappledPrimalChar_Implementation(APrimalCharacter*,FGrappleTether&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnOwnerCapsuleHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FH
    // endereco: casamento de bytes com a build de referencia
    void OnOwnerCapsuleHit(void* a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, void*, void*, void*, void*>(this, "APrimalBuff_Grappled.OnOwnerCapsuleHit(AActor*,UPrimitiveComponent*,UE::Math::TVector<double>,FHitResult&)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnOwnerDeath_Implementation(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void OnOwnerDeath_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnOwnerDeath_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnOwnerSleepStateChanged_Implementation(APrimalCharacter*,bool)
    // endereco: casamento de bytes com a build de referencia
    void OnOwnerSleepStateChanged_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_Grappled.OnOwnerSleepStateChanged_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnOwnerTeleported()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=54]]
    void OnOwnerTeleported() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnOwnerTeleported()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnReleasedPrimalChar(APrimalCharacter*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void OnReleasedPrimalChar(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnReleasedPrimalChar_Implementation(APrimalCharacter*)
    // endereco: cache_pdb_25090264
    void OnReleasedPrimalChar_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.OnReleasedPrimalChar_Implementation(APrimalCharacter*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OnRep_ReplicatedGrappleTethers()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=52]]
    void OnRep_ReplicatedGrappleTethers() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.OnRep_ReplicatedGrappleTethers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVect
    // endereco: casamento de bytes com a build de referencia
    void OverrideCharacterNewFallVelocity(void* a0, void* a1, float a2) const
    {
        NativeCall<void, void*, void*, float>(this, "APrimalBuff_Grappled.OverrideCharacterNewFallVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVec
    // endereco: casamento de bytes com a build de referencia
    void OverrideCharacterSwimmingVelocity(void* a0, void* a1, void* a2, void* a3, float a4) const
    {
        NativeCall<void, void*, void*, void*, void*, float>(this, "APrimalBuff_Grappled.OverrideCharacterSwimmingVelocity(UE::Math::TVector<double>&,UE::Math::TVector<double>&,float&,float&,float)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.PreventInstigatorMovementMode(EMovementMode,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    bool PreventInstigatorMovementMode(int a0, unsigned char a1) const
    {
        return NativeCall<bool, int, unsigned char>(this, "APrimalBuff_Grappled.PreventInstigatorMovementMode(EMovementMode,unsignedchar)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ReceiveRepGrappleTether(FReplicatedGrappleTetherData&,int)
    // endereco: casamento de bytes com a build de referencia
    void ReceiveRepGrappleTether(void* a0, int a1) const
    {
        NativeCall<void, void*, int>(this, "APrimalBuff_Grappled.ReceiveRepGrappleTether(FReplicatedGrappleTetherData&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ReceiveTetherLengthSuggestion(int&,float&)
    // endereco: casamento de bytes com a build de referencia
    void ReceiveTetherLengthSuggestion(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalBuff_Grappled.ReceiveTetherLengthSuggestion(int&,float&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ReceiveTetherLengthsSuggestion(TArray<float,TSizedDefaultAllocator<32>>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=69]]
    void ReceiveTetherLengthsSuggestion(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.ReceiveTetherLengthsSuggestion(TArray<float,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.RefreshAllTetherMasterRefs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    void RefreshAllTetherMasterRefs() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.RefreshAllTetherMasterRefs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.RemoveGrappleTether(int,FString,APrimalBuff_Grappled*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    char RemoveGrappleTether(int a0, const FString& a1, void* a2, bool a3, bool a4) const
    {
        return NativeCall<char, int, void*, void*, bool, bool>(this, "APrimalBuff_Grappled.RemoveGrappleTether(int,FString,APrimalBuff_Grappled*,bool,bool)", a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    char RemoveGrappleTether(int a0, FString* a1, void* a2, bool a3, bool a4) const
    { return RemoveGrappleTether(a0, *a1, a2, a3, a4); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=96]]
    void ResetOwnerClientPositionErrorTolerance() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=208]]
    void ResetOwnerClientPositionErrorTolerance_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerClientPositionErrorTolerance_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ResetOwnerVars()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    void ResetOwnerVars() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ResetOwnerVars_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=444+grafo=3/3]]
    void ResetOwnerVars_Implementation() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.ResetOwnerVars_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Server_SetGrappleState_Implementation(unsignedchar,bool)
    // endereco: cache_pdb_25090264
    void Server_SetGrappleState_Implementation(unsigned char a0, bool a1) const
    {
        NativeCall<void, unsigned char, bool>(this, "APrimalBuff_Grappled.Server_SetGrappleState_Implementation(unsignedchar,bool)", a0, a1);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.Server_SuggestTetherLength(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void Server_SuggestTetherLength(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Server_SuggestTetherLength(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Server_SuggestTetherLength_Implementation(float)
    // endereco: casamento de bytes com a build de referencia
    void Server_SuggestTetherLength_Implementation(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Server_SuggestTetherLength_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.Server_SuggestTetherLengths(TArray<float,TSizedDefaultAllocator<32>>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Server_SuggestTetherLengths(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.Server_SuggestTetherLengths(TArray<float,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Server_SuggestTetherLengths_Implementation(TArray<float,TSizedDefaultAlloca
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=55]]
    void Server_SuggestTetherLengths_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.Server_SuggestTetherLengths_Implementation(TArray<float,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.Server_SyncOwnerInputs(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Server_SyncOwnerInputs(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.Server_SyncOwnerInputs(UE::Math::TVector2<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Server_SyncOwnerInputs_Implementation(UE::Math::TVector2<double>)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=87]]
    void Server_SyncOwnerInputs_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.Server_SyncOwnerInputs_Implementation(UE::Math::TVector2<double>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SetGrappleState(TEnumAsByte<EGrappleState::Type>,bool)
    // endereco: casamento de bytes com a build de referencia
    bool SetGrappleState(unsigned char a0, bool a1) const
    {
        return NativeCall<bool, unsigned char, bool>(this, "APrimalBuff_Grappled.SetGrappleState(TEnumAsByte<EGrappleState::Type>,bool)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.SetGrappleTetherAtIndexLength(int,float)
    // endereco: cache_pdb_25090264
    bool SetGrappleTetherAtIndexLength(int a0, float a1) const
    {
        return NativeCall<bool, int, float>(this, "APrimalBuff_Grappled.SetGrappleTetherAtIndexLength(int,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SetGrappleTetherLength(FGrappleTether&,float,int)
    // endereco: casamento de bytes com a build de referencia
    static bool SetGrappleTetherLength(void* a0, float a1, int a2)
    {
        return NativeCall<bool, void*, float, int>(nullptr, "APrimalBuff_Grappled.SetGrappleTetherLength(FGrappleTether&,float,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SetupDelegateBindingsForChar(APrimalCharacter*,bool)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=138+chamadores=3]]
    void SetupDelegateBindingsForChar(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_Grappled.SetupDelegateBindingsForChar(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SetupDelegateBindingsForChar_Implementation(APrimalCharacter*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void SetupDelegateBindingsForChar_Implementation(void* a0, bool a1) const
    {
        NativeCall<void, void*, bool>(this, "APrimalBuff_Grappled.SetupDelegateBindingsForChar_Implementation(APrimalCharacter*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldForceOwnerDedicatedMovementTickPerFrame()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=148]]
    bool ShouldForceOwnerDedicatedMovementTickPerFrame() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldForceOwnerDedicatedMovementTickPerFrame()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState(FGrappleTether&,UE::Math::TVector<double>&
    // endereco: casamento de bytes com a build de referencia
    bool ShouldForceOwnerIntoFallingState(void* a0, void* a1, int a2) const
    {
        return NativeCall<bool, void*, void*, int>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState(FGrappleTether&,UE::Math::TVector<double>&,EMovementMode)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState_Implementation(FGrappleTether&,UE::Math::T
    // endereco: casamento de bytes com a build de referencia
    bool ShouldForceOwnerIntoFallingState_Implementation(void* a0, void* a1, int a2) const
    {
        return NativeCall<bool, void*, void*, int>(this, "APrimalBuff_Grappled.ShouldForceOwnerIntoFallingState_Implementation(FGrappleTether&,UE::Math::TVector<double>&,EMovementMode)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldOwnerBeAffectedByTether(FGrappleTether&,TEnumAsByte<EGrappleState::Ty
    // endereco: casamento de bytes com a build de referencia
    static bool ShouldOwnerBeAffectedByTether(void* a0, unsigned char a1)
    {
        return NativeCall<bool, void*, unsigned char>(nullptr, "APrimalBuff_Grappled.ShouldOwnerBeAffectedByTether(FGrappleTether&,TEnumAsByte<EGrappleState::Type>)", a0, a1);
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.ShouldReplicateOwnerInputs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool ShouldReplicateOwnerInputs() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReplicateOwnerInputs()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldReplicateOwnerInputs_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=121]]
    bool ShouldReplicateOwnerInputs_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReplicateOwnerInputs_Implementation()");
    }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalBuff_Grappled.ShouldReturnToIdleGrappleState()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=112]]
    bool ShouldReturnToIdleGrappleState() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReturnToIdleGrappleState()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldReturnToIdleGrappleState_Implementation()
    // endereco: cache_pdb_25090264
    bool ShouldReturnToIdleGrappleState_Implementation() const
    {
        return NativeCall<bool>(this, "APrimalBuff_Grappled.ShouldReturnToIdleGrappleState_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.ShouldTetherBreak(FGrappleTether&,APrimalCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ShouldTetherBreak(void* a0, void* a1, float a2) const
    {
        return NativeCall<void*, void*, void*, float>(this, "APrimalBuff_Grappled.ShouldTetherBreak(FGrappleTether&,APrimalCharacter*,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldTetherBreak_Implementation(FGrappleTether&,APrimalCharacter*,float)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldTetherBreak_Implementation(void* a0, void* a1, float a2) const
    {
        return NativeCall<bool, void*, void*, float>(this, "APrimalBuff_Grappled.ShouldTetherBreak_Implementation(FGrappleTether&,APrimalCharacter*,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.ShouldUseDynamicTetherTension(FGrappleTether&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=177+grafo=4/4]]
    BrzPonteiro ShouldUseDynamicTetherTension(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.ShouldUseDynamicTetherTension(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.ShouldUseDynamicTetherTension_Implementation(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    bool ShouldUseDynamicTetherTension_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalBuff_Grappled.ShouldUseDynamicTetherTension_Implementation(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SimulateTautTetherForces(UE::Math::TVector<double>&,float,float)
    // endereco: casamento de bytes com a build de referencia
    void SimulateTautTetherForces(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces(UE::Math::TVector<double>&,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SimulateTautTetherForces_Implementation(UE::Math::TVector<double>&,float,fl
    // endereco: casamento de bytes com a build de referencia
    void SimulateTautTetherForces_Implementation(void* a0, float a1, float a2) const
    {
        NativeCall<void, void*, float, float>(this, "APrimalBuff_Grappled.SimulateTautTetherForces_Implementation(UE::Math::TVector<double>&,float,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SimulateTetherFriction(UE::Math::TVector<double>&,float)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=168+chamadores=2]]
    void SimulateTetherFriction(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SimulateTetherFriction_Implementation(UE::Math::TVector<double>&,float)
    // endereco: casamento de bytes com a build de referencia
    void SimulateTetherFriction_Implementation(void* a0, float a1) const
    {
        NativeCall<void, void*, float>(this, "APrimalBuff_Grappled.SimulateTetherFriction_Implementation(UE::Math::TVector<double>&,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.StaticRegisterNativesAPrimalBuff_Grappled()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    static void StaticRegisterNativesAPrimalBuff_Grappled()
    {
        NativeCall<void>(nullptr, "APrimalBuff_Grappled.StaticRegisterNativesAPrimalBuff_Grappled()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SyncGrappleTetherLengths()
    // endereco: casamento de bytes com a build de referencia
    void SyncGrappleTetherLengths() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengths()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.SyncOwnerInputs(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    void SyncOwnerInputs(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.SyncOwnerInputs(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.TetherHasValidMasterRef(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TetherHasValidMasterRef(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalBuff_Grappled.TetherHasValidMasterRef(FGrappleTether&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=68]]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Tick(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Tick_UpdateAgainstSurface(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_UpdateAgainstSurface(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Tick_UpdateAgainstSurface(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Tick_UpdateGrappleTethers(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick_UpdateGrappleTethers(float a0) const
    {
        NativeCall<void, float>(this, "APrimalBuff_Grappled.Tick_UpdateGrappleTethers(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalBuff_Grappled.TryCutGrappleTether_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryCutGrappleTether_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalBuff_Grappled.TryCutGrappleTether_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.Unstasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateAgainstSurfaceFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>)
    // endereco: casamento de bytes com a build de referencia
    void UpdateAgainstSurfaceFromHits(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.UpdateAgainstSurfaceFromHits(TArray<FHitResult,TSizedDefaultAllocator<32>>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateBrokenTethers()
    // endereco: casamento de bytes com a build de referencia
    void UpdateBrokenTethers() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.UpdateBrokenTethers()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateGrappleTetherVars(FGrappleTether&)
    // endereco: casamento de bytes com a build de referencia
    static void UpdateGrappleTetherVars(void* a0)
    {
        NativeCall<void, void*>(nullptr, "APrimalBuff_Grappled.UpdateGrappleTetherVars(FGrappleTether&)", a0);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalBuff_Grappled.UpdateOwnerMovementSpeed(UE::Math::TVector<double>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void UpdateOwnerMovementSpeed(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.UpdateOwnerMovementSpeed(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateOwnerMovementSpeed_Implementation(UE::Math::TVector<double>&)
    // endereco: cache_pdb_25090264
    void UpdateOwnerMovementSpeed_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.UpdateOwnerMovementSpeed_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateOwnerSwingingVelocity()
    // endereco: casamento de bytes com a build de referencia
    void UpdateOwnerSwingingVelocity() const
    {
        NativeCall<void>(this, "APrimalBuff_Grappled.UpdateOwnerSwingingVelocity()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateTetherMasterRef(FGrappleTether&,bool)
    // endereco: casamento de bytes com a build de referencia
    bool UpdateTetherMasterRef(void* a0, bool a1) const
    {
        return NativeCall<bool, void*, bool>(this, "APrimalBuff_Grappled.UpdateTetherMasterRef(FGrappleTether&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalBuff_Grappled.UpdateTethersByState(float&)
    // endereco: casamento de bytes com a build de referencia
    void UpdateTethersByState(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalBuff_Grappled.UpdateTethersByState(float&)", a0);
    }

    BrzCampoPonteiro AgainstSurfaceNormalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.AgainstSurfaceNormal")); }
    float& AtTetherLimitBelowDistFromEndField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.AtTetherLimitBelowDistFromEnd"); }
    BrzCampoPonteiro AvgParentCharVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.AvgParentCharVelocity")); }
    float& ClientSuggestTetherLength_AllowedDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedDelta"); }
    float& ClientSuggestTetherLength_AllowedIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_AllowedInterval"); }
    double& ClientSuggestTetherLength_LastReceivedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Grappled.ClientSuggestTetherLength_LastReceivedTime"); }
    TArray<void*>& CurrentGrappleTethersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Grappled.CurrentGrappleTethers"); }
    BrzCampoPonteiro CurrentTetherMoveVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.CurrentTetherMoveVelocity")); }
    BrzCampoPonteiro DefaultGrappledBuffClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.DefaultGrappledBuffClass")); }
    BrzCampoPonteiro DirToAgainstSurfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.DirToAgainstSurface")); }
    float& ForceFallingBelowTetherToOwnerDeltaZField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingBelowTetherToOwnerDeltaZ"); }
    float& ForceFallingStateImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingStateImpulse"); }
    float& ForceFallingWhenAboveVelocityAwayFromAnchorField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenAboveVelocityAwayFromAnchor"); }
    float& ForceFallingWhenDirToTetherAboveUpDotField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ForceFallingWhenDirToTetherAboveUpDot"); }
    unsigned char& GrappleState_CurrentField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Grappled.GrappleState_Current"); }
    unsigned char& GrappleState_PreviousField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Grappled.GrappleState_Previous"); }
    UStaticMesh*& GrappleTetherMeshField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalBuff_Grappled.GrappleTetherMesh"); }
    float& GrappleVelocityMAXField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappleVelocityMAX"); }
    float& GrappledFallDamageMult_MINField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledFallDamageMult_MIN"); }
    float& GrappledGravityScaleMult_IdleField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Idle"); }
    float& GrappledGravityScaleMult_PullingField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Pulling"); }
    float& GrappledGravityScaleMult_ReleasingField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.GrappledGravityScaleMult_Releasing"); }
    BrzCampoPonteiro GrappledGravityScaleRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.GrappledGravityScaleRange")); }
    BrzCampoPonteiro LastDirToAgainstSurfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.LastDirToAgainstSurface")); }
    double& LastGrappleTetherLengthSyncTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Grappled.LastGrappleTetherLengthSyncTime"); }
    BrzCampoPonteiro LastGravityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.LastGravity")); }
    BrzCampoPonteiro LastProjectedOwnerInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.LastProjectedOwnerInputs")); }
    TArray<void*>& LastSyncedGrappleTethersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Grappled.LastSyncedGrappleTethers"); }
    float& LookingAtAgainstSurfaceAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.LookingAtAgainstSurfaceAngle"); }
    int& MaxAllowedGrappleTethersField() const
    { return *GetNativePointerField<int*>(this, "APrimalBuff_Grappled.MaxAllowedGrappleTethers"); }
    APrimalCharacter*& MyOwnerField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalBuff_Grappled.MyOwner"); }
    APrimalCharacter*& MyOwnerCDOField() const
    { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalBuff_Grappled.MyOwnerCDO"); }
    float& OwnerCapsuleHalfHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleHalfHeight"); }
    float& OwnerCapsuleRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerCapsuleRadius"); }
    BrzCampoPonteiro OwnerInput_CurrentSwingingVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSwingingVelocity")); }
    BrzCampoPonteiro OwnerInput_CurrentSyncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.OwnerInput_CurrentSynced")); }
    double& OwnerInput_LastSyncTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalBuff_Grappled.OwnerInput_LastSyncTime"); }
    BrzCampoPonteiro OwnerInput_LastSyncedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.OwnerInput_LastSynced")); }
    float& OwnerInput_SwingSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SwingSpeed"); }
    float& OwnerInput_SyncInvervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.OwnerInput_SyncInverval"); }
    BrzCampoPonteiro PreviousOwnerVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.PreviousOwnerVelocity")); }
    float& PullableWeightLimitField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.PullableWeightLimit"); }
    USoundCue*& PullingSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Grappled.PullingSoundCue"); }
    float& ReduceFallDamageUnderAngleToAnchorField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ReduceFallDamageUnderAngleToAnchor"); }
    USoundCue*& ReleasingSoundCueField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalBuff_Grappled.ReleasingSoundCue"); }
    TArray<void*>& ReplicatedGrappleTethersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Grappled.ReplicatedGrappleTethers"); }
    float& RequiredDirToSurfaceDotDeltaToUpdateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.RequiredDirToSurfaceDotDeltaToUpdate"); }
    TArray<void*>& ReservedTetherTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalBuff_Grappled.ReservedTetherTags"); }
    float& SwingingClientLocationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientLocationInterpSpeed"); }
    float& SwingingClientPositionErrorOverride_Dino_MovingFlyingField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_MovingFlying"); }
    float& SwingingClientPositionErrorOverride_Dino_StoppedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Dino_Stopped"); }
    float& SwingingClientPositionErrorOverride_PlayerField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientPositionErrorOverride_Player"); }
    float& SwingingClientRotationInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingClientRotationInterpSpeed"); }
    BrzCampoPonteiro SwingingVelocityDampingRateAxisMults_PullingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRateAxisMults_Pulling")); }
    float& SwingingVelocityDampingRate_IdleField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Idle"); }
    float& SwingingVelocityDampingRate_OwnerInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_OwnerInput"); }
    float& SwingingVelocityDampingRate_PullingField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Pulling"); }
    float& SwingingVelocityDampingRate_ReleasingField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SwingingVelocityDampingRate_Releasing"); }
    float& SyncGrappleTetherLengthIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.SyncGrappleTetherLengthInterval"); }
    float& TetherAutoDetachUnderLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherAutoDetachUnderLength"); }
    float& TetherBreakLimit_GrappledActorAboveVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_GrappledActorAboveVelocity"); }
    float& TetherBreakLimit_OwnerPastCurrentLengthDeltaField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthDelta"); }
    float& TetherBreakLimit_OwnerPastCurrentLengthForTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherBreakLimit_OwnerPastCurrentLengthForTime"); }
    float& TetherMaxLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMaxLength"); }
    float& TetherMinLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherMinLength"); }
    float& TetherPullAccelerationField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration"); }
    float& TetherPullAcceleration_GrappledCharField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullAcceleration_GrappledChar"); }
    float& TetherPullMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity"); }
    float& TetherPullMaxVelocity_GrappledCharField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherPullMaxVelocity_GrappledChar"); }
    float& TetherReleaseMaxVelocityField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity"); }
    float& TetherReleaseMaxVelocity_GrappledCharField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherReleaseMaxVelocity_GrappledChar"); }
    FString& TetherTagOwnerConnectorStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalBuff_Grappled.TetherTagOwnerConnectorString"); }
    float& TetherTensionExponentField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionExponent"); }
    float& TetherTensionStrengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionStrength"); }
    float& TetherTensionVelocityDampingRateField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherTensionVelocityDampingRate"); }
    float& TetherWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.TetherWidth"); }
    float& ValidHitSurface_DistanceFromCapsuleEdgeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.ValidHitSurface_DistanceFromCapsuleEdge"); }
    BrzCampoPonteiro ValidHitSurface_UpVectorAngleRangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalBuff_Grappled.ValidHitSurface_UpVectorAngleRange")); }
    float& VelocityOverrideMaxDeltaTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalBuff_Grappled.VelocityOverrideMaxDeltaTime"); }
    unsigned char& WantsGrappleStateField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalBuff_Grappled.WantsGrappleState"); }
    BitFieldValue<bool, unsigned __int32> bDetachGrappledChars()
    { return { (void*)this, "bDetachGrappledChars" }; }
    BitFieldValue<bool, unsigned __int32> bDebugGrappling()
    { return { (void*)this, "bDebugGrappling" }; }
    BitFieldValue<bool, unsigned __int32> bDebugGrappling_AgainstSurface()
    { return { (void*)this, "bDebugGrappling_AgainstSurface" }; }
    BitFieldValue<bool, unsigned __int32> bAllowGrappleLogicOnRemoteClients()
    { return { (void*)this, "bAllowGrappleLogicOnRemoteClients" }; }
    BitFieldValue<bool, unsigned __int32> bForceIdleGrappleState()
    { return { (void*)this, "bForceIdleGrappleState" }; }
    BitFieldValue<bool, unsigned __int32> bHasGrappleBuffInitialized()
    { return { (void*)this, "bHasGrappleBuffInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bIsOwnerAgainstSurface()
    { return { (void*)this, "bIsOwnerAgainstSurface" }; }
    BitFieldValue<bool, unsigned __int32> bOwnerMovementAffectedByGrappleTethers()
    { return { (void*)this, "bOwnerMovementAffectedByGrappleTethers" }; }
    BitFieldValue<bool, unsigned __int32> bLastIsOwnerSubmerged()
    { return { (void*)this, "bLastIsOwnerSubmerged" }; }
    BitFieldValue<bool, unsigned __int32> bLastIsOwnerSwinging()
    { return { (void*)this, "bLastIsOwnerSwinging" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyValidTethers()
    { return { (void*)this, "bHasAnyValidTethers" }; }
    BitFieldValue<bool, unsigned __int32> bHasValidReservedTethers()
    { return { (void*)this, "bHasValidReservedTethers" }; }
    BitFieldValue<bool, unsigned __int32> bBrokeAnyTethersThisFrame()
    { return { (void*)this, "bBrokeAnyTethersThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyGrappledChars()
    { return { (void*)this, "bHasAnyGrappledChars" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyTethersAttachedToDynamicActors()
    { return { (void*)this, "bHasAnyTethersAttachedToDynamicActors" }; }
    BitFieldValue<bool, unsigned __int32> bDidOverrideVelocityThisFrame()
    { return { (void*)this, "bDidOverrideVelocityThisFrame" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResetOwnerVars()
    { return { (void*)this, "bShouldResetOwnerVars" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoPassenger()
    { return { (void*)this, "bAllowDinoPassenger" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoRiding()
    { return { (void*)this, "bAllowDinoRiding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowGrappledCharacterToCutGrapple()
    { return { (void*)this, "bAllowGrappledCharacterToCutGrapple" }; }
    BitFieldValue<bool, unsigned __int32> bAllowLadderClimbing()
    { return { (void*)this, "bAllowLadderClimbing" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureSeating()
    { return { (void*)this, "bAllowStructureSeating" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALBUFF_GRAPPLED_H
