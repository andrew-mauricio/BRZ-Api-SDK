// ==========================================================================
//  UPrimalShipCannonControlComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALSHIPCANNONCONTROLCOMPONENT_H
#define BRZ_SDK_JOGO_UPRIMALSHIPCANNONCONTROLCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FActorComponentTickFunction;
struct FName;


struct UPrimalShipCannonControlComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalShipCannonControlComponent"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.BPOnCannonFired(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro BPOnCannonFired(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.BPOnCannonFired(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.BPOnGunportsChanged(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPOnGunportsChanged(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalShipCannonControlComponent.BPOnGunportsChanged(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.BeginAimLocal(AShooterPlayerController*,EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginAimLocal(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalShipCannonControlComponent.BeginAimLocal(AShooterPlayerController*,EShipFiringSide)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.CanCharacterClaimSide(APrimalCharacter*,EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanCharacterClaimSide(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalShipCannonControlComponent.CanCharacterClaimSide(APrimalCharacter*,EShipFiringSide)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.CanEnterCannons()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanEnterCannons() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.CanEnterCannons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_AimPressed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_AimPressed() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_AimPressed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_AimReleased()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_AimReleased() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_AimReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_CyclePressed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_CyclePressed() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_CyclePressed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_CycleReleased()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_CycleReleased() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_CycleReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_FirePressed()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_FirePressed() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_FirePressed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_FireReleased()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Cannon_FireReleased() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_FireReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_OnGamepadPitchInput(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Cannon_OnGamepadPitchInput(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipCannonControlComponent.Cannon_OnGamepadPitchInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_OnGamepadYawInput(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Cannon_OnGamepadYawInput(float a0) const
    {
        return NativeCall<void*, float>(this, "UPrimalShipCannonControlComponent.Cannon_OnGamepadYawInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_PumpAimDeltas()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Cannon_PumpAimDeltas() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_PumpAimDeltas()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_PumpFire()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Cannon_PumpFire() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_PumpFire()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.Cannon_UseReleaseClaim()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Cannon_UseReleaseClaim() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.Cannon_UseReleaseClaim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeActiveSideCannonCentroid(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeActiveSideCannonCentroid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.ComputeActiveSideCannonCentroid(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeBandFootprint(EShipFiringSide,float,UE::Math::TVector<d
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeBandFootprint(int a0, float a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, int, float, void*, void*, void*, void*>(this, "UPrimalShipCannonControlComponent.ComputeBandFootprint(EShipFiringSide,float,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector2<double>&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeBarrelMatchedRangeForSide(EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeBarrelMatchedRangeForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.ComputeBarrelMatchedRangeForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeCannonBandSlot(int,EShipFiringSide,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeCannonBandSlot(int a0, int a1, float a2) const
    {
        return NativeCall<void*, int, int, float>(this, "UPrimalShipCannonControlComponent.ComputeCannonBandSlot(int,EShipFiringSide,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeInterceptPoint(UE::Math::TVector<double>&,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeInterceptPoint(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "UPrimalShipCannonControlComponent.ComputeInterceptPoint(UE::Math::TVector<double>&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeMaxReachableRangeForSide(EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeMaxReachableRangeForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.ComputeMaxReachableRangeForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeMaxReachableYawForSide(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ComputeMaxReachableYawForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.ComputeMaxReachableYawForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ComputeSideStationSegment(EShipFiringSide,bool&,float&,float&,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ComputeSideStationSegment(int a0, void* a1, void* a2, void* a3, void* a4, void* a5) const
    {
        return NativeCall<void*, int, void*, void*, void*, void*, void*>(this, "UPrimalShipCannonControlComponent.ComputeSideStationSegment(EShipFiringSide,bool&,float&,float&,float&,float&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.DisableCannonInputForPC(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DisableCannonInputForPC(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.DisableCannonInputForPC(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.EnableCannonInputForPC(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnableCannonInputForPC(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.EnableCannonInputForPC(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.EndAimLocal(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndAimLocal(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.EndAimLocal(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EndPlay(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.FireBroadsideAtTarget(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FireBroadsideAtTarget(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.FireBroadsideAtTarget(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.FireCannonDeferred(int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro FireCannonDeferred(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalShipCannonControlComponent.FireCannonDeferred(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.FireSideVolley(EShipFiringSide,int,AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro FireSideVolley(int a0, int a1, void* a2) const
    {
        return NativeCall<void*, int, int, void*>(this, "UPrimalShipCannonControlComponent.FireSideVolley(EShipFiringSide,int,AShooterCharacter*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetActiveAimYaw()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetActiveAimYaw() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.GetActiveAimYaw()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetActiveBandRange()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetActiveBandRange() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.GetActiveBandRange()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetAimYawForSide(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetAimYawForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetAimYawForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetAmmoConfig(int,FCannonAmmoConfig&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAmmoConfig(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.GetAmmoConfig(int,FCannonAmmoConfig&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetAmmoCount(int,bool,APrimalStructureItemContainer*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAmmoCount(int a0, bool a1, void* a2) const
    {
        return NativeCall<void*, int, bool, void*>(this, "UPrimalShipCannonControlComponent.GetAmmoCount(int,bool,APrimalStructureItemContainer*&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetBandRangeForSide(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetBandRangeForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetBandRangeForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetCameraPivotOverride(UE::Math::TVector<double>&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraPivotOverride(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonControlComponent.GetCameraPivotOverride(UE::Math::TVector<double>&,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetCannonsCooldownForSide(EShipFiringSide,float&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCannonsCooldownForSide(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.GetCannonsCooldownForSide(EShipFiringSide,float&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetCannonsForSide(EShipFiringSide,TArray<UPrimalShipCannonComp
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCannonsForSide(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.GetCannonsForSide(EShipFiringSide,TArray<UPrimalShipCannonComponent*,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetClaimedSideForCharacter(APrimalCharacter*,EShipFiringSide&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetClaimedSideForCharacter(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonControlComponent.GetClaimedSideForCharacter(APrimalCharacter*,EShipFiringSide&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetEffectiveAimerForSide(EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEffectiveAimerForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetEffectiveAimerForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetProjectileSpeedForAmmo(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetProjectileSpeedForAmmo(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetProjectileSpeedForAmmo(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetSideCenterYawLocal(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSideCenterYawLocal(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetSideCenterYawLocal(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetSideRecoveryInterval(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetSideRecoveryInterval(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.GetSideRecoveryInterval(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.GetSideSpeedAndGravity(int,float&,float&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSideSpeedAndGravity(int a0, void* a1, void* a2) const
    {
        return NativeCall<void*, int, void*, void*>(this, "UPrimalShipCannonControlComponent.GetSideSpeedAndGravity(int,float&,float&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.IsCannonAvailableForCharacter(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsCannonAvailableForCharacter(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.IsCannonAvailableForCharacter(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.IsCannonBeingAimedForSide(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsCannonBeingAimedForSide(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.IsCannonBeingAimedForSide(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.IsGunportMoving()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsGunportMoving() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.IsGunportMoving()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon(AShooterCharacter*,UE::Math::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastFireCharacterFromCannon(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon(AShooterCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon_Implementation(AShooterCharac
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastFireCharacterFromCannon_Implementation(void* a0, void* a1, void* a2, void* a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(this, "UPrimalShipCannonControlComponent.MulticastFireCharacterFromCannon_Implementation(AShooterCharacter*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TVector<double>,AActor*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastLoadCharacterIntoCannon_Implementation(int,AShooterCh
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MulticastLoadCharacterIntoCannon_Implementation(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.MulticastLoadCharacterIntoCannon_Implementation(int,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastPlayCannonFireFX(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX_Implementation(int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MulticastPlayCannonFireFX_Implementation(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "UPrimalShipCannonControlComponent.MulticastPlayCannonFireFX_Implementation(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastPlayGunportSound(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastPlayGunportSound(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UPrimalShipCannonControlComponent.MulticastPlayGunportSound(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon(int,AShooterCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastUnloadCharacterFromCannon(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon(int,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon_Implementation(int,AShooter
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro MulticastUnloadCharacterFromCannon_Implementation(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.MulticastUnloadCharacterFromCannon_Implementation(int,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.OnRep_GunportsOpen()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnRep_GunportsOpen() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.OnRep_GunportsOpen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.PickFiringSideForCharacter(APrimalCharacter*,EShipFiringSide&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PickFiringSideForCharacter(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonControlComponent.PickFiringSideForCharacter(APrimalCharacter*,EShipFiringSide&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.PickFiringSideFromCamera(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PickFiringSideFromCamera(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.PickFiringSideFromCamera(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.RebindCannonInputComponent(UInputComponent*,AShooterPlayerCont
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RebindCannonInputComponent(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "UPrimalShipCannonControlComponent.RebindCannonInputComponent(UInputComponent*,AShooterPlayerController*,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.RegisterGunportMeshes(TArray<UStaticMeshComponent*,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterGunportMeshes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.RegisterGunportMeshes(TArray<UStaticMeshComponent*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ReleaseAllSidesForCharacter(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleaseAllSidesForCharacter(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.ReleaseAllSidesForCharacter(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.RemoveAmmoBox(APrimalStructureItemContainer*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro RemoveAmmoBox(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.RemoveAmmoBox(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ResolveActiveSideForChar(APrimalCharacter*,EShipFiringSide&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveActiveSideForChar(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalShipCannonControlComponent.ResolveActiveSideForChar(APrimalCharacter*,EShipFiringSide&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.ResolveFor(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveFor(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.ResolveFor(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SetCannonClaimLock(AShooterPlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCannonClaimLock(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalShipCannonControlComponent.SetCannonClaimLock(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SetCannonLoadedCharacter(int,AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetCannonLoadedCharacter(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "UPrimalShipCannonControlComponent.SetCannonLoadedCharacter(int,AShooterCharacter*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SetInputEnabledForPC(AShooterPlayerController*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetInputEnabledForPC(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalShipCannonControlComponent.SetInputEnabledForPC(AShooterPlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SideHasCannons(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SideHasCannons(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.SideHasCannons(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SideRequiresGunports(EShipFiringSide)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SideRequiresGunports(int a0) const
    {
        return NativeCall<void*, int>(this, "UPrimalShipCannonControlComponent.SideRequiresGunports(EShipFiringSide)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SpawnCannonProjectile(UWorld*,UE::Math::TTransform<double>&,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnCannonProjectile(void* a0, void* a1, void* a2, int a3, void* a4, void* a5, void* a6, int a7) const
    {
        return NativeCall<void*, void*, void*, void*, int, void*, void*, void*, int>(this, "UPrimalShipCannonControlComponent.SpawnCannonProjectile(UWorld*,UE::Math::TTransform<double>&,UE::Math::TVector<double>&,int,AActor*,AShooterCharacter*,APrimalCharacter*,int)", a0, a1, a2, a3, a4, a5, a6, a7);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.SpawnShipCannons()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SpawnShipCannons() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.SpawnShipCannons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TickComponent(float a0, int a1, void* a2) const
    {
        return NativeCall<void*, float, int, void*>(this, "UPrimalShipCannonControlComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryApplyCannonAimDeltas(APrimalCharacter*,float,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TryApplyCannonAimDeltas(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "UPrimalShipCannonControlComponent.TryApplyCannonAimDeltas(APrimalCharacter*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryBeginCannonAim(APrimalCharacter*,EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryBeginCannonAim(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalShipCannonControlComponent.TryBeginCannonAim(APrimalCharacter*,EShipFiringSide)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryClaimCannonSide(APrimalCharacter*,EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryClaimCannonSide(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalShipCannonControlComponent.TryClaimCannonSide(APrimalCharacter*,EShipFiringSide)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryCycleCannonAmmo(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryCycleCannonAmmo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.TryCycleCannonAmmo(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryEndCannonAim(APrimalCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TryEndCannonAim(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.TryEndCannonAim(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryLoadCharacterIntoCannon(APrimalCharacter*,EShipFiringSide)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryLoadCharacterIntoCannon(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalShipCannonControlComponent.TryLoadCharacterIntoCannon(APrimalCharacter*,EShipFiringSide)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryReleaseCannonSide(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryReleaseCannonSide(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.TryReleaseCannonSide(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryToggleGunports(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryToggleGunports(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.TryToggleGunports(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.TryUnloadCharacterFromCannon(APrimalCharacter*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryUnloadCharacterFromCannon(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalShipCannonControlComponent.TryUnloadCharacterFromCannon(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalShipCannonControlComponent.UnloadAllCharactersFromCannons()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnloadAllCharactersFromCannons() const
    {
        return NativeCall<void*>(this, "UPrimalShipCannonControlComponent.UnloadAllCharactersFromCannons()");
    }

    BrzCampoPonteiro AimBandColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.AimBandColor")); }
    BrzCampoPonteiro AimBandColorCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.AimBandColorCooldown")); }
    float& AimIndicatorMaxSimTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimIndicatorMaxSimTime"); }
    float& AimIndicatorSimFrequencyField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimIndicatorSimFrequency"); }
    float& AimYawHalfWedgeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.AimYawHalfWedge"); }
    BrzCampoPonteiro AmmoConfigsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.AmmoConfigs")); }
    TArray<void*>& AssetUserDataField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonControlComponent.AssetUserData"); }
    BrzCampoPonteiro BandAimNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.BandAimNiagaraComponent")); }
    BrzCampoPonteiro BandAimNiagaraSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.BandAimNiagaraSystem")); }
    float& BandHalfDepthField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.BandHalfDepth"); }
    BrzCampoPonteiro CachedAmmoBoxesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CachedAmmoBoxes")); }
    BrzCampoPonteiro CannonAimCameraDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonAimCameraDistance")); }
    BrzCampoPonteiro CannonAimCameraHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonAimCameraHeight")); }
    BrzCampoPonteiro CannonAimCameraPitchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonAimCameraPitch")); }
    BrzCampoPonteiro CannonHitIndicatorNiagaraComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonHitIndicatorNiagaraComponent")); }
    BrzCampoPonteiro CannonHitIndicatorNiagaraSystemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonHitIndicatorNiagaraSystem")); }
    BrzCampoPonteiro CannonInputComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonInputComponent")); }
    TWeakObjectPtr<void>& CannonInputPushedForField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalShipCannonControlComponent.CannonInputPushedFor"); }
    BrzCampoPonteiro CannonMountsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CannonMounts")); }
    float& CannonRangeSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.CannonRangeSensitivity"); }
    float& CannonYawSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.CannonYawSensitivity"); }
    BrzCampoPonteiro CannonsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.Cannons")); }
    int& CaptainAmmoIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonControlComponent.CaptainAmmoIndex"); }
    BrzCampoPonteiro CaptainCurrentAimSideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CaptainCurrentAimSide")); }
    BrzCampoPonteiro CharacterCannonBallBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.CharacterCannonBallBuff")); }
    TArray<void*>& ComponentTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UPrimalShipCannonControlComponent.ComponentTags"); }
    int& CreationMethodField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonControlComponent.CreationMethod"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonControlComponent.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonControlComponent.CustomTag"); }
    BrzCampoPonteiro DefaultAimCameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.DefaultAimCamera")); }
    BrzCampoPonteiro DefaultMountSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.DefaultMountSettings")); }
    float& GamepadCannonPitchRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GamepadCannonPitchRate"); }
    float& GamepadCannonYawRateField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GamepadCannonYawRate"); }
    BrzCampoPonteiro GunportCloseSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.GunportCloseSound")); }
    float& GunportInterpSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GunportInterpSpeed"); }
    BrzCampoPonteiro GunportMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.GunportMeshes")); }
    float& GunportOpenRatioField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.GunportOpenRatio"); }
    BrzCampoPonteiro GunportOpenRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.GunportOpenRotationOffset")); }
    BrzCampoPonteiro GunportOpenSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.GunportOpenSound")); }
    BrzCampoPonteiro HitIndicatorColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.HitIndicatorColor")); }
    BrzCampoPonteiro HitIndicatorColorCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.HitIndicatorColorCooldown")); }
    BrzCampoPonteiro LoadedAmmoVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.LoadedAmmoVFX")); }
    BrzCampoPonteiro LoadedCharacterAnimField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.LoadedCharacterAnim")); }
    FName& LoadedCharacterAttachSocketField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonControlComponent.LoadedCharacterAttachSocket"); }
    BrzCampoPonteiro LoadedCharacterMontageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.LoadedCharacterMontage")); }
    BrzCampoPonteiro LocalAimSideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.LocalAimSide")); }
    float& LocalAimYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalAimYawOffset"); }
    float& LocalGamepadPitchAccumField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalGamepadPitchAccum"); }
    float& LocalGamepadYawAccumField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.LocalGamepadYawAccum"); }
    float& MaxBandRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MaxBandRange"); }
    float& MaxFireDelayField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MaxFireDelay"); }
    float& MinBandRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.MinBandRange"); }
    BrzCampoPonteiro OnCannonAimChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.OnCannonAimChanged")); }
    BrzCampoPonteiro OnCannonFiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.OnCannonFired")); }
    BrzCampoPonteiro OnComponentActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.OnComponentActivated")); }
    BrzCampoPonteiro OnComponentDeactivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.OnComponentDeactivated")); }
    BrzCampoPonteiro OnGunportsChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.OnGunportsChanged")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bGunportsOpen` +8, medido na build 25535041
    //  (offset absoluto medido: 0x338; confianca alta)
    void*& PendingFireTimersField() const
    { return BrzCampoAncorado<void*>(this, "bGunportsOpen", 8); }
    float& PendingRangeDeltaForRPCField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.PendingRangeDeltaForRPC"); }
    float& PendingYawDeltaForRPCField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.PendingYawDeltaForRPC"); }
    TWeakObjectPtr<void>& PilotPCField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "UPrimalShipCannonControlComponent.PilotPC"); }
    FActorComponentTickFunction& PrimaryComponentTickField() const
    { return *GetNativePointerField<FActorComponentTickFunction*>(this, "UPrimalShipCannonControlComponent.PrimaryComponentTick"); }
    BrzCampoPonteiro SavedAimYawAccumPerSideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.SavedAimYawAccumPerSide")); }
    BrzCampoPonteiro SavedBandRangePerSideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.SavedBandRangePerSide")); }
    FName& SavedCameraStyleField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalShipCannonControlComponent.SavedCameraStyle"); }
    float& SavedViewPitchMaxField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.SavedViewPitchMax"); }
    float& SavedViewPitchMinField() const
    { return *GetNativePointerField<float*>(this, "UPrimalShipCannonControlComponent.SavedViewPitchMin"); }
    BrzCampoPonteiro SideAmmoIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.SideAmmoIndex")); }
    BrzCampoPonteiro SideClaimantsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.SideClaimants")); }
    BrzCampoPonteiro SideVolleyStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.SideVolleyState")); }
    BrzCampoPonteiro StationCamerasField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.StationCameras")); }
    BrzCampoPonteiro StationGatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.StationGates")); }
    int& UCSSerializationIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalShipCannonControlComponent.UCSSerializationIndex"); }
    BrzCampoPonteiro bAimActiveLocalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bAimActiveLocal")); }
    BrzCampoPonteiro bAimActivePerSideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bAimActivePerSide")); }
    BrzCampoPonteiro bAimPitchLockActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bAimPitchLockActive")); }
    BrzCampoPonteiro bAlwaysReplicatePropertyConditionalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bAlwaysReplicatePropertyConditional")); }
    BrzCampoPonteiro bAutoActivateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bAutoActivate")); }
    BrzCampoPonteiro bCanEverAffectNavigationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bCanEverAffectNavigation")); }
    BrzCampoPonteiro bCannonClaimLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bCannonClaimLocked")); }
    BrzCampoPonteiro bCannonFiringHeldField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bCannonFiringHeld")); }
    BrzCampoPonteiro bDedicatedForceTickingEveryFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bDedicatedForceTickingEveryFrame")); }
    BrzCampoPonteiro bEditableWhenInheritedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bEditableWhenInherited")); }
    BrzCampoPonteiro bGunportsOpenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bGunportsOpen")); }
    BrzCampoPonteiro bHasMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bHasMultiUseEntries")); }
    BrzCampoPonteiro bIsActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bIsActive")); }
    BrzCampoPonteiro bIsEditorOnlyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bIsEditorOnly")); }
    BrzCampoPonteiro bNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bNetAddressable")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bPreventOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bPreventOnClient")); }
    BrzCampoPonteiro bPreventOnConsolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bPreventOnConsoles")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventOnNonDedicatedHostField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bPreventOnNonDedicatedHost")); }
    BrzCampoPonteiro bProjectilesInheritShipVelocityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bProjectilesInheritShipVelocity")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bReplicates")); }
    BrzCampoPonteiro bStasisPreventUnregisterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bStasisPreventUnregister")); }
    BrzCampoPonteiro bUseBPOnComponentCreatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bUseBPOnComponentCreated")); }
    BrzCampoPonteiro bUseBPOnComponentDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bUseBPOnComponentDestroyed")); }
    BrzCampoPonteiro bUseBPOnComponentTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalShipCannonControlComponent.bUseBPOnComponentTick")); }
    BitFieldValue<bool, unsigned __int32> bAimActiveLocal()
    { return { (void*)this, "bAimActiveLocal" }; }
    BitFieldValue<bool, unsigned __int32> bAimPitchLockActive()
    { return { (void*)this, "bAimPitchLockActive" }; }
    BitFieldValue<bool, unsigned __int32> bCannonClaimLocked()
    { return { (void*)this, "bCannonClaimLocked" }; }
    BitFieldValue<bool, unsigned __int32> bCannonFiringHeld()
    { return { (void*)this, "bCannonFiringHeld" }; }
    BitFieldValue<bool, unsigned __int32> bGunportsOpen()
    { return { (void*)this, "bGunportsOpen" }; }
    BitFieldValue<bool, unsigned __int32> bProjectilesInheritShipVelocity()
    { return { (void*)this, "bProjectilesInheritShipVelocity" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALSHIPCANNONCONTROLCOMPONENT_H
