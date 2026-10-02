// ==========================================================================
//  APrimalStructureSeating_DriverSeat — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_DRIVERSEAT_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_DRIVERSEAT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct AMissionType;
struct APawn;
struct APrimalDinoCharacter;
struct APrimalStructure;
struct FActorTickFunction;
struct FItemNetID;
struct FName;
struct FPrimalMapMarkerEntryData;
struct FPrimalStructureSnapPointOverride;
struct UAnimSequence;
struct UChildActorComponent;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UPrimalHarvestingComponent;
struct UPrimalInventoryComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundBase;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;
struct UTexture2D;


struct APrimalStructureSeating_DriverSeat
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSeating_DriverSeat"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AreAnyRowersNPCs()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AreAnyRowersNPCs() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.AreAnyRowersNPCs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Global(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_GetHeadingFromAngleIndex_Global(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Global(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Ship(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_GetHeadingFromAngleIndex_Ship(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_GetHeadingFromAngleIndex_Ship(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_Start(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_Start(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Start(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_Stop()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_Stop() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Stop()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_UpdateDesiredDir(UE::Math::TVector2<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AutoPilot_UpdateDesiredDir(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_UpdateDesiredDir(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetCameraCollisionIgnoreActors_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.BPGetCameraCollisionIgnoreActors_Implementation(TArray<AActor*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BP_OffsetRowLocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_OffsetRowLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.BP_OffsetRowLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BP_OffsetRowLocation_Implementation(UE::Math::TVector<double>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BP_OffsetRowLocation_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.BP_OffsetRowLocation_Implementation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BindCaptainsOrdersSeatInputs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindCaptainsOrdersSeatInputs() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.BindCaptainsOrdersSeatInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BindDriverSeatInputs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BindDriverSeatInputs() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.BindDriverSeatInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanPlaceDriverSeat(APrimalShip*,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanPlaceDriverSeat(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureSeating_DriverSeat.CanPlaceDriverSeat(APrimalShip*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanRow()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro CanRow() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.CanRow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanSeatedCharRow(APrimalCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CanSeatedCharRow(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.CanSeatedCharRow(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanUseAutoPilot()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro CanUseAutoPilot() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.CanUseAutoPilot()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CaptainExtraActions(ECaptainOtherActions::Type,int,TSubclassO
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro CaptainExtraActions(int a0, int a1, void* a2) const
    {
        return NativeCall<void*, int, int, void*>(this, "APrimalStructureSeating_DriverSeat.CaptainExtraActions(ECaptainOtherActions::Type,int,TSubclassOf<UPrimalItem>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClientMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalStructureSeating_DriverSeat.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DoOnCaptainOrderPressed(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DoOnCaptainOrderPressed(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.DoOnCaptainOrderPressed(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DrawFloatingHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawFloatingHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.DrawFloatingHUD(AShooterHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DrawHUD(AShooterHUD*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DrawHUD(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.DrawHUD(AShooterHUD*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_AutoThrottleBindReleased()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_AutoThrottleBindReleased() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_AutoThrottleBindReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_GamepadZoomAxis(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_GamepadZoomAxis(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_GamepadZoomAxis(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_PressedActivateTurningSail_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_PressedProne_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedStartRowing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_PressedStartRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedStartRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_ReleasedActivateTurningSail_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyClosed()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_SetSailsFullyClosed() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyClosed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyOpen()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_SetSailsFullyOpen() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyOpen()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatSteeringInput(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DriverSeat_SetSeatSteeringInput(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatSteeringInput(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatThrottleInput(float,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DriverSeat_SetSeatThrottleInput(float a0, int a1) const
    {
        return NativeCall<void*, float, int>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSeatThrottleInput(float,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetShipThrottleRatio(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DriverSeat_SetShipThrottleRatio(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetShipThrottleRatio(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSteeringInput(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DriverSeat_SetSteeringInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSteeringInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetTurnSailsInput(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_SetTurnSailsInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetTurnSailsInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ZoomIn()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_ZoomIn() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ZoomIn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ZoomOut()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DriverSeat_ZoomOut() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ZoomOut()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.FindOceanRowLocation(UE::Math::TVector<double>&,TEnumAsByte<E
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindOceanRowLocation(void* a0, unsigned char a1) const
    {
        return NativeCall<void*, void*, unsigned char>(this, "APrimalStructureSeating_DriverSeat.FindOceanRowLocation(UE::Math::TVector<double>&,TEnumAsByte<EDriverSeatRowingSide::Type>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ForceFirstPerson_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ForceFirstPerson_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPerson_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ForceThirdPerson_Implementation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ForceThirdPerson_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.ForceThirdPerson_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderPressed(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GamepadDoOnCaptainOrderPressed(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderPressed(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderReleased(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GamepadDoOnCaptainOrderReleased(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderReleased(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<0>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GamepadOnCaptainOrderPressed_0_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<7>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GamepadOnCaptainOrderPressed_7_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderReleased<7>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GamepadOnCaptainOrderReleased_7_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderReleased<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetActiveDriverCount()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetActiveDriverCount() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetActiveDriverCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetCameraModifiedOriginLocationOffset_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCameraModifiedOriginLocationOffset_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetCameraModifiedOriginLocationOffset_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetCameraPivotOverride(UE::Math::TVector<double>&,float&,bool
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetCameraPivotOverride(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetCameraPivotOverride(UE::Math::TVector<double>&,float&,bool&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetCrosshairColorOverride_Implementation(FColor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCrosshairColorOverride_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetCrosshairColorOverride_Implementation(FColor&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetHandIKEnabled(bool&,bool&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetHandIKEnabled(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetHandIKEnabled(bool&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::M
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetHandsSocketsTransforms(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLifetimeReplicatedProps(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,T
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureSeating_DriverSeat.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetMultiUseEntries_AutoPilot(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries_AutoPilot(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureSeating_DriverSeat.GetMultiUseEntries_AutoPilot(APlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetNextRowingAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetNextRowingAnim() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetNextRowingAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetOarBottomLocation()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetOarBottomLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetOarBottomLocation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetRowingInput_All()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRowingInput_All() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetRowingInput_All()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetRowingInput_Seat(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetRowingInput_Seat(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.GetRowingInput_Seat(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetRowingLineVectorsBySide(UE::Math::TVector<double>&,UE::Mat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRowingLineVectorsBySide(void* a0, void* a1, unsigned char a2, float a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, unsigned char, float, void*>(this, "APrimalStructureSeating_DriverSeat.GetRowingLineVectorsBySide(UE::Math::TVector<double>&,UE::Math::TVector<double>&,TEnumAsByte<EDriverSeatRowingSide::Type>,float,APrimalShip*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetTPVCameraOffset()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTPVCameraOffset() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetTPVCameraOffset()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetValidDriverCount()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro GetValidDriverCount() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetValidDriverCount()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.HasActivePlayer()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro HasActivePlayer() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.HasActivePlayer()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.HideAmmoGroupHighlight()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HideAmmoGroupHighlight() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.HideAmmoGroupHighlight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.HidePreviewOars()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HidePreviewOars() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.HidePreviewOars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.IsRowing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro IsRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.IsRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.LocalSetShouldDrawFloatingHUD(bool)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro LocalSetShouldDrawFloatingHUD(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureSeating_DriverSeat.LocalSetShouldDrawFloatingHUD(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.LowerAnchor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LowerAnchor() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.LowerAnchor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_OnDriverSeated(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Multi_OnDriverSeated(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.Multi_OnDriverSeated(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TV
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_OnRow(bool a0, float a1, void* a2, void* a3) const
    {
        return NativeCall<void*, bool, float, void*, void*>(this, "APrimalStructureSeating_DriverSeat.Multi_OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_OnRow_Implementation(bool,float,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_OnRow_Implementation(bool a0, float a1, void* a2, void* a3) const
    {
        return NativeCall<void*, bool, float, void*, void*>(this, "APrimalStructureSeating_DriverSeat.Multi_OnRow_Implementation(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_OnStartRowing_Implementation(bool,float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Multi_OnStartRowing_Implementation(bool a0, float a1) const
    {
        return NativeCall<void*, bool, float>(this, "APrimalStructureSeating_DriverSeat.Multi_OnStartRowing_Implementation(bool,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim(UAnimMontage*,float,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_PlayRowingAnim(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim(UAnimMontage*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim_Implementation(UAnimMontage*,float,float
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Multi_PlayRowingAnim_Implementation(void* a0, float a1, float a2) const
    {
        return NativeCall<void*, void*, float, float>(this, "APrimalStructureSeating_DriverSeat.Multi_PlayRowingAnim_Implementation(UAnimMontage*,float,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Net_StartRowing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Net_StartRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.Net_StartRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Net_StopRowing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Net_StopRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.Net_StopRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnAttachedToValidShip()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnAttachedToValidShip() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnAttachedToValidShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<0>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_0_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<1>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_1_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<1>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<2>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_2_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<2>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<3>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_3_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<3>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<5>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_5_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<5>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<6>()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnCaptainOrderPressed_6_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<6>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnDriverSeated(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnDriverSeated(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverSeated(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnDriverUnseated(int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnDriverUnseated(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverUnseated(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnHoldingReload()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=673+grafo=7/7]]
    BrzPonteiro OnHoldingReload() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnHoldingReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnPressReload()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=365+grafo=5/5]]
    BrzPonteiro OnPressReload() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnPressReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnReleaseReload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnReleaseReload() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnReleaseReload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnRow(bool a0, float a1, void* a2, void* a3) const
    {
        return NativeCall<void*, bool, float, void*, void*>(this, "APrimalStructureSeating_DriverSeat.OnRow(bool,float,UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnStopRowing()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnStopRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnStopRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnStopShowAllGroupIcons()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnStopShowAllGroupIcons() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnStopShowAllGroupIcons()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.PlayNextRowingAnim()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro PlayNextRowingAnim() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.PlayNextRowingAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitializeComponents() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.PostInitializeComponents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Release(AShooterCharacter*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro Release(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.Release(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ServerSetTurningSailState_Implementation(bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ServerSetTurningSailState_Implementation(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureSeating_DriverSeat.ServerSetTurningSailState_Implementation(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.SetAttackMyTargetMode(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetAttackMyTargetMode(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureSeating_DriverSeat.SetAttackMyTargetMode(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.SetManualFireMode(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetManualFireMode(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureSeating_DriverSeat.SetManualFireMode(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.SetShipAutoThrottle(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetShipAutoThrottle(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureSeating_DriverSeat.SetShipAutoThrottle(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.SetupNextRow()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetupNextRow() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.SetupNextRow()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.StaticRegisterNativesAPrimalStructureSeating_DriverSeat()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro StaticRegisterNativesAPrimalStructureSeating_DriverSeat() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.StaticRegisterNativesAPrimalStructureSeating_DriverSeat()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.StopAllRowingAnims()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StopAllRowingAnims() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.StopAllRowingAnims()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.TickCriticalShipStructure(float)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro TickCriticalShipStructure(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.TickCriticalShipStructure(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ToggleLadders()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ToggleLadders() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.ToggleLadders()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.TraceForOpenRowingArea(bool,APrimalShip*,TEnumAsByte<EDriverS
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TraceForOpenRowingArea(bool a0, void* a1, unsigned char a2) const
    {
        return NativeCall<void*, bool, void*, unsigned char>(this, "APrimalStructureSeating_DriverSeat.TraceForOpenRowingArea(bool,APrimalShip*,TEnumAsByte<EDriverSeatRowingSide::Type>)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalStructureSeating_DriverSeat.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.TryRowingFX()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryRowingFX() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.TryRowingFX()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.UpdateDriverSeatPlacementPreview(TEnumAsByte<EDriverSeatRowin
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateDriverSeatPlacementPreview(unsigned char a0, bool a1) const
    {
        return NativeCall<void*, unsigned char, bool>(this, "APrimalStructureSeating_DriverSeat.UpdateDriverSeatPlacementPreview(TEnumAsByte<EDriverSeatRowingSide::Type>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.UpdateManualFireLocation(UE::Math::TVector<double>)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateManualFireLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.UpdateManualFireLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.UpdateWindSourceActorRef()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo]
    BrzPonteiro UpdateWindSourceActorRef() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.UpdateWindSourceActorRef()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.WeaponAllowCommand()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro WeaponAllowCommand() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.WeaponAllowCommand()");
    }

    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureSeating_DriverSeat.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ActivationCooldownTime"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ActiveEffectVFX")); }
    int& ActiveGroupsForSeatField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.ActiveGroupsForSeat"); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.ActiveRequiresFuelItems"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureSeating_DriverSeat.ActorUsingQuickAction"); }
    BrzCampoPonteiro AllowOverrideParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AllowOverrideParticleLightColor")); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureSeating_DriverSeat.AllowStructureColorSets" }; }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.AllowWirelessCraftingIcon"); }
    BrzCampoPonteiro AmmoTypesToShowOnHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AmmoTypesToShowOnHUD")); }
    BrzCampoPonteiro AnchorIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AnchorIcon")); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureSeating_DriverSeat.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureSeating_DriverSeat.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AttachmentReplication")); }
    BrzCampoPonteiro AutoPilot_DesiredDirField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_DesiredDir")); }
    BrzCampoPonteiro AutoPilot_FollowWindTextColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindTextColor")); }
    double& AutoPilot_FollowWindUpdateInterval_CurrentField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_Current"); }
    float& AutoPilot_FollowWindUpdateInterval_MAXField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_MAX"); }
    float& AutoPilot_FollowWindUpdateInterval_MINField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_FollowWindUpdateInterval_MIN"); }
    float& AutoPilot_HeadingIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_HeadingInterval"); }
    double& AutoPilot_LastFollowWindUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_LastFollowWindUpdateTime"); }
    int& AutoPilot_ThrottleIntervalCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_ThrottleIntervalCount"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.AutoReceiveInput"); }
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.BPOverrideDestroyedMeshTextures")); }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.BatteryClassOverride")); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.BedID"); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.BlacklistedItemCount"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.BoneDamageAdjusters"); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.BoxNamePrefaceString"); }
    //  no cache antigo este campo se chamava CaptainExtraActionCooldown.
    //  nesta build ele e' `bAutoPilotActive` — resolve por NOME.
    BrzCampoPonteiro CaptainExtraActionCooldownField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoPilotActive")); }
    float& CaptainsOrderTargetRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.CaptainsOrderTargetRange"); }
    TArray<TWeakObjectPtr<void>>& CharacterPerSeatField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureSeating_DriverSeat.CharacterPerSeat"); }
    //  no cache antigo este campo se chamava CheckUntilAttachedToShipStartTime.
    //  nesta build ele e' `AutoPilot_DesiredDir` — resolve por NOME.
    BrzCampoPonteiro CheckUntilAttachedToShipStartTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_DesiredDir")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ClientReplicationSendNowThreshold"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeating_DriverSeat.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeating_DriverSeat.ContainerDeactivatedSound"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeating_DriverSeat.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.CreationTime"); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.CurrentItemCount"); }
    BrzCampoPonteiro CurrentManualFireEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.CurrentManualFireEmitter")); }
    BrzCampoPonteiro CurrentMyTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.CurrentMyTarget")); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureSeating_DriverSeat.CurrentPinCode"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.DamageTypeAdjusters"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DeactivateTrapIcon")); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DeactivatedIconColor")); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalStructureSeating_DriverSeat.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.DeathCacheCreationTime"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating_DriverSeat.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DecayDestructionPeriodMultiplier"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeating_DriverSeat.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DefaultParticleTemplate")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DemolishInventoryDepositClass")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.DestructionEmitter")); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.DisabledOpenSceneActionName"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.EngramRequirementClassOverride")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.FloatingHudLocTextOffset")); }
    BrzCampoPonteiro ForceFirstPersonCameraOffsetStructureTracesEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraOffsetStructureTracesEnd")); }
    BrzCampoPonteiro ForceFirstPersonCameraOffsetStructureTracesStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraOffsetStructureTracesStart")); }
    float& ForceFirstPersonCameraTraceLengthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonCameraTraceLengthMultiplier"); }
    BrzCampoPonteiro ForceFirstPersonTraceIgnoreClassesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ForceFirstPersonTraceIgnoreClasses")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.ForceMaximumReplicationRateUntilTime"); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.FuelItemsConsumedGiveItems"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeating_DriverSeat.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.HurtFX_Niagara")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalStructureSeating_DriverSeat.InActivateMaterials"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureSeating_DriverSeat.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureSeating_DriverSeat.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.InsulationRange"); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ItemsUseAlternateActorClassAttachment")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureSeating_DriverSeat.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeating_DriverSeat.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastActiveStateChangeTime"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastActorForceReplicationTime"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastDeactivatedTime"); }
    TWeakObjectPtr<void>& LastDriverField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.LastDriver"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastExitStasisTime"); }
    double& LastForceTpvTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastForceTpvTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastInAllyRangeTimeSerialized"); }
    unsigned char& LastOrderGivenField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.LastOrderGiven"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastPreReplicationTime"); }
    //  no cache antigo este campo se chamava LastReleaseReloadTime.
    //  nesta build ele e' `SteeringSockets` — resolve por NOME.
    double& LastReleaseReloadTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.SteeringSockets"); }
    BrzCampoPonteiro LastRowImpulseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LastRowImpulse")); }
    BrzCampoPonteiro LastRowLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LastRowLocation")); }
    unsigned char& LastRowSideField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.LastRowSide"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.LastSelectedWindSourceComponentName"); }
    double& LastServerUpdateSentField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastServerUpdateSent"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastSkinAppliedTime"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastSolarRefreshTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastThrottledTickTime"); }
    double& LastTimeGivenCaptainOrderField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastTimeGivenCaptainOrder"); }
    //  no cache antigo este campo se chamava LastTimeSetMyTarget.
    //  nesta build ele e' `ToggleLightsIcon` — resolve por NOME.
    BrzCampoPonteiro LastTimeSetMyTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ToggleLightsIcon")); }
    double& LastTimeUpdatedManualFireLocationField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.LastTimeUpdatedManualFireLocation"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureSeating_DriverSeat.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.Layers"); }
    FName& LeftHandSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.LeftHandSocketName"); }
    FName& LeftHandkdSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.LeftHandkdSkeletalMeshSocketName"); }
    FName& LeftHandkdStaticMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.LeftHandkdStaticMeshSocketName"); }
    BrzCampoPonteiro LeftSteeringSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LeftSteeringSockets")); }
    int& LieutenantSeatIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.LieutenantSeatIndex"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.LifeSpanAfterDeath"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureSeating_DriverSeat.LinkedBlueprintSpawnActorPoint"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.LinkedPowerJunctionStructureID"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureSeating_DriverSeat.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.LinkedStructuresID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalStructureSeating_DriverSeat.LocalCorpseEmitter"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LocalOnlySkinCustomPersistentData")); }
    BrzCampoPonteiro MainOarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.MainOar")); }
    BrzCampoPonteiro MainOar_BottomField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.MainOar_Bottom")); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalStructureSeating_DriverSeat.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.MaxActivationDistance"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.MaxBoxNameLength"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.MaxHealth"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.MaxItemCount"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.MultiSoftDestructionGeoCollectionAssets")); }
    BrzCampoPonteiro MusicPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.MusicPlayer")); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalStructureSeating_DriverSeat.MyChildEmitterSpawnable"); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureSeating_DriverSeat.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureSeating_DriverSeat.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureSeating_DriverSeat.MyHarvestingComponent"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalStructureSeating_DriverSeat.MyInventoryComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureSeating_DriverSeat.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureSeating_DriverSeat.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureSeating_DriverSeat.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetCullDistanceSquaredDormant"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.NetDestructionTime"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureSeating_DriverSeat.NetworkSpatializationParent"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.NextConsumeFuelGiveItemType")); }
    unsigned char& NextRowSideField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.NextRowSide"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.NotifyCarriedByDinoChanged")); }
    int& NumSeatsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.NumSeats"); }
    float& OarAngleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarAngle"); }
    float& OarLength_PlacementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarLength_Placement"); }
    float& OarLength_RowingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarLength_Rowing"); }
    float& OarRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarRadius"); }
    float& OarStartOffsetX_LeftField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetX_Left"); }
    float& OarStartOffsetX_RightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetX_Right"); }
    float& OarStartOffsetZField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OarStartOffsetZ"); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OnTargetingTeamChanged")); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.OpenSceneActionName"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.OriginalPlacerPlayerID"); }
    BrzCampoPonteiro OtherSeatingSpotsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OtherSeatingSpots")); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalStructureSeating_DriverSeat.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.OverrideParticleTemplates")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureSeating_DriverSeat.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureSeating_DriverSeat.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureSeating_DriverSeat.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureSeating_DriverSeat.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureSeating_DriverSeat.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureSeating_DriverSeat.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PlacementYawOffsetIncrement"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.PreventWirelessCraftingIcon"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureSeating_DriverSeat.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureSeating_DriverSeat.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureSeating_DriverSeat.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureSeating_DriverSeat.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureSeating_DriverSeat.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureSeating_DriverSeat.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureSeating_DriverSeat.PrimarySnappedStructureParent"); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RandomFuelUpdateTimeMin"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalStructureSeating_DriverSeat.ReplicatedFuelItemColorIndex"); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ReplicationIntervalMultiplier"); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RequiresItemForOpenSceneAction")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ReturnDamageImpulse"); }
    USoundCue*& RideSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating_DriverSeat.RideSound"); }
    FName& RightHandSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.RightHandSocketName"); }
    FName& RightHandkdSkeletalMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.RightHandkdSkeletalMeshSocketName"); }
    FName& RightHandkdStaticMeshSocketNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating_DriverSeat.RightHandkdStaticMeshSocketName"); }
    BrzCampoPonteiro RightSteeringSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RightSteeringSockets")); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureSeating_DriverSeat.RootComponent"); }
    float& RowLocationOffsetToSeat_MultField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowLocationOffsetToSeat_Mult"); }
    float& RowingImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingImpulse"); }
    float& RowingIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingInterval"); }
    float& RowingIntervalMult_FXField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingIntervalMult_FX"); }
    BrzCampoPonteiro RowingMontage_LeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Left")); }
    BrzCampoPonteiro RowingMontage_Left_ReverseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Left_Reverse")); }
    BrzCampoPonteiro RowingMontage_RightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Right")); }
    BrzCampoPonteiro RowingMontage_Right_ReverseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingMontage_Right_Reverse")); }
    BrzCampoPonteiro RowingSFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingSFX")); }
    float& RowingStaminaCostField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingStaminaCost"); }
    BrzCampoPonteiro RowingVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.RowingVFX")); }
    float& RowingVFX_ZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.RowingVFX_ZOffset"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.SavedStructureMinAllowedVersion"); }
    BrzCampoPonteiro SeatSteeringInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SeatSteeringInputs")); }
    BrzCampoPonteiro SeatThrottleInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SeatThrottleInputs")); }
    float& SeatedCameraBaseArmLengthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SeatedCameraBaseArmLength"); }
    float& SeatedCameraZoomMaxLevelMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SeatedCameraZoomMaxLevelMult"); }
    float& SeatedCameraZoomMinLevelMultField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SeatedCameraZoomMinLevelMult"); }
    float& SeatedCameraZoomStepSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SeatedCameraZoomStepSize"); }
    TWeakObjectPtr<void>& SeatedCharacterField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.SeatedCharacter"); }
    BrzCampoPonteiro SeatedCharacterLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SeatedCharacterLocationOffset")); }
    BrzCampoPonteiro SeatedCharacterRotationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SeatedCharacterRotationOffset")); }
    TWeakObjectPtr<void>& SeatedControllerField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureSeating_DriverSeat.SeatedController"); }
    TObjectPtr<UTexture2D>& SeatingActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating_DriverSeat.SeatingActionIcon"); }
    int& SeatingActionPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.SeatingActionPriority"); }
    FString& SeatingActionTextField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating_DriverSeat.SeatingActionText"); }
    UAnimSequence*& SeatingAnimOverrideField() const
    { return *GetNativePointerField<UAnimSequence**>(this, "APrimalStructureSeating_DriverSeat.SeatingAnimOverride"); }
    BrzCampoPonteiro SeatingUITemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SeatingUITemplate")); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SkinInventoryData")); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SkinPersistentData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.SkipConsumeFuelUntilTime"); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SnappedChooseRotationPlacementData")); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SolarRefreshIntervalMin"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureSeating_DriverSeat.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureSeating_DriverSeat.StasisUnRegisteredComponents"); }
    float& SteeringInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.SteeringInput"); }
    BrzCampoPonteiro SteeringSocketsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.SteeringSockets")); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureSeating_DriverSeat.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureSeating_DriverSeat.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureSeating_DriverSeat.StructuresPlacedOnFloor"); }
    BrzCampoPonteiro TPVCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.TPVCameraOffset")); }
    BrzCampoPonteiro TPVCameraOffsetMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.TPVCameraOffsetMultiplier")); }
    float& TPVCameraYawRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.TPVCameraYawRange"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.TargetingTeam"); }
    float& ThrottleInputField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ThrottleInput"); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.TimeCooldownRequestFuelRemaining"); }
    //  no cache antigo este campo se chamava TimeOfLastCaptainExtraAction.
    //  nesta build ele e' `LastForceTpvTime` — resolve por NOME.
    BrzCampoPonteiro TimeOfLastCaptainExtraActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LastForceTpvTime")); }
    //  no cache antigo este campo se chamava TimeToStartDrawingFloatingHUD.
    //  nesta build ele e' `LastOrderGiven` — resolve por NOME.
    BrzCampoPonteiro TimeToStartDrawingFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.LastOrderGiven")); }
    BrzCampoPonteiro ToggleLaddersIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ToggleLaddersIcon")); }
    BrzCampoPonteiro ToggleLightsIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.ToggleLightsIcon")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureSeating_DriverSeat.TribeGroupStructureRank"); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.UISceneTemplate")); }
    float& UnboardDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.UnboardDistance"); }
    USoundCue*& UnrideSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating_DriverSeat.UnrideSound"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureSeating_DriverSeat.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSeating_DriverSeat.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPApplyPinCodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.UseBPApplyPinCode")); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.UseBPOverrideTargetLocation")); }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSeating_DriverSeat.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureSeating_DriverSeat.ValidatedByPinCodePlayerControllers"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureSeating_DriverSeat.Variants"); }
    BrzCampoPonteiro WindSourceRefField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.WindSourceRef")); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.WirelessExchangeRefs")); }
    BrzCampoPonteiro bActiveRequiresPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bActiveRequiresPower")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAdjustDamageAsPlayerWithEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAdjustDamageAsPlayerWithEquipment")); }
    BrzCampoPonteiro bAdjustForLegLengthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAdjustForLegLength")); }
    BrzCampoPonteiro bAdjustForLegLengthStandingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAdjustForLegLengthStanding")); }
    BrzCampoPonteiro bAllowAnyTeamToSitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowAnyTeamToSit")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAllowCaptainOrdersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowCaptainOrders")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowCrouchProneToSitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowCrouchProneToSit")); }
    BrzCampoPonteiro bAllowCustomNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowCustomName")); }
    BrzCampoPonteiro bAllowDinoCompanionAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowDinoCompanionAttachment")); }
    BrzCampoPonteiro bAllowFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowFPV")); }
    BrzCampoPonteiro bAllowOrbitCamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowOrbitCam")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSleepingPlayersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowSleepingPlayers")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyNiagaraColorInBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bApplyNiagaraColorInBP")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAttackMyTargetEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAttackMyTargetEnabled")); }
    BrzCampoPonteiro bAutoActivateContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoActivateContainer")); }
    BrzCampoPonteiro bAutoActivateIfPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoActivateIfPowered")); }
    BrzCampoPonteiro bAutoActivateWhenFueledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoActivateWhenFueled")); }
    BrzCampoPonteiro bAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoFurlSailsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoFurlSails")); }
    BrzCampoPonteiro bAutoHoldThrottleForwardField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoHoldThrottleForward")); }
    BrzCampoPonteiro bAutoPilotActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoPilotActive")); }
    BrzCampoPonteiro bAutoPilot_FollowWindField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoPilot_FollowWind")); }
    BrzCampoPonteiro bAutoPilot_HasReachedHeadingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoPilot_HasReachedHeading")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPIsValidWaterSourceForPipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPIsValidWaterSourceForPipe")); }
    BrzCampoPonteiro bBPNotifyRemoteViewerChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPNotifyRemoteViewerChange")); }
    BrzCampoPonteiro bBPOnContainerActiveHealthDecreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPOnContainerActiveHealthDecrease")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBendForwardWithIKField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBendForwardWithIK")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCanToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCanToggleActivation")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheckStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCheckStartedUnderwater")); }
    BrzCampoPonteiro bClientBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bClientBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCollideWhenPlacing")); }
    BrzCampoPonteiro bContainerActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bContainerActivated")); }
    BrzCampoPonteiro bCraftingSubstractConnectedWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCraftingSubstractConnectedWater")); }
    BrzCampoPonteiro bCreateMusicPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bCreateMusicPlayer")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDebug")); }
    BrzCampoPonteiro bDebugAutoPilotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDebugAutoPilot")); }
    BrzCampoPonteiro bDebugDrivingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDebugDriving")); }
    BrzCampoPonteiro bDebugRowingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDebugRowing")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDestroyWhenAllItemsRemoved")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedExceptDefaultsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDestroyWhenAllItemsRemovedExceptDefaults")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableActivationUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisableActivationUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisplayActivationOnInventoryUI")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUISecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisplayActivationOnInventoryUISecondary")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUITertiaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDisplayActivationOnInventoryUITertiary")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDontSetDamageParameters")); }
    BrzCampoPonteiro bDrawFuelRemainingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDrawFuelRemaining")); }
    BrzCampoPonteiro bDrinkingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDrinkingWater")); }
    BrzCampoPonteiro bDropInventoryOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bDropInventoryOnDestruction")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bEditorOnlyActorShowInPIE")); }
    //  no cache antigo este campo se chamava bEnabeldLoweringAnchor.
    //  nesta build ele e' `bUsingSteeringAnimation` — resolve por NOME.
    BrzCampoPonteiro bEnabeldLoweringAnchorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsingSteeringAnimation")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bEnableMultiUse")); }
    BrzCampoPonteiro bEnableSeatedFreeLookField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bEnableSeatedFreeLook")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceDrawFloatingHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceDrawFloatingHUD")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNeverLockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceNeverLock")); }
    BrzCampoPonteiro bForceNoPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceNoPinLocking")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventAutoActivateWhenConnectedToWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForcePreventAutoActivateWhenConnectedToWater")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFreeLookActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bFreeLookActive")); }
    BrzCampoPonteiro bFuelAllowActivationWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bFuelAllowActivationWhenNoPower")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasFuelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHasFuel")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHidden")); }
    BrzCampoPonteiro bHideAutoActivateToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHideAutoActivateToggle")); }
    BrzCampoPonteiro bHideCharacterInFPVField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHideCharacterInFPV")); }
    BrzCampoPonteiro bHideLegacyStructureAmmoHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHideLegacyStructureAmmoHUD")); }
    BrzCampoPonteiro bHidePowerJunctionConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHidePowerJunctionConnection")); }
    BrzCampoPonteiro bHideSailsForAimingCaptainOrdersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bHideSailsForAimingCaptainOrders")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIgnoresOriginShifting")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MusicPlayer` +10 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x1622; confianca alta)
    void*& bInGamepadLoweringAnchorField() const
    { return BrzCampoAncorado<void*>(this, "MusicPlayer", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MusicPlayer` +9 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x1621; confianca alta)
    void*& bInGamepadZoomingStateField() const
    { return BrzCampoAncorado<void*>(this, "MusicPlayer", 9); }
    BrzCampoPonteiro bInventoryForcePreventItemAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bInventoryForcePreventItemAppends")); }
    BrzCampoPonteiro bInventoryForcePreventRemoteAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bInventoryForcePreventRemoteAddItems")); }
    BrzCampoPonteiro bIsAmmoContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsAmmoContainer")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsBed")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsFlipped")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsInvincible")); }
    BrzCampoPonteiro bIsLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsLocked")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsMapActor")); }
    BrzCampoPonteiro bIsPinLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsPinLocked")); }
    BrzCampoPonteiro bIsPowerJunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsPowerJunction")); }
    BrzCampoPonteiro bIsPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsPowered")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsRepairing")); }
    BrzCampoPonteiro bIsRowingSeatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsRowingSeat")); }
    BrzCampoPonteiro bIsRowingSeatActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsRowingSeatActive")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsTrapped")); }
    BrzCampoPonteiro bIsUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsUnderwater")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bJumpOnDetachField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bJumpOnDetach")); }
    BrzCampoPonteiro bLastRowSuccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bLastRowSuccess")); }
    BrzCampoPonteiro bLastToggleActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bLastToggleActivated")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bManualFireEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bManualFireEnabled")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bNoCollision")); }
    BrzCampoPonteiro bOarTracesIgnoreHullField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOarTracesIgnoreHull")); }
    BrzCampoPonteiro bOnlyAllowTeamActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyAllowTeamActivation")); }
    BrzCampoPonteiro bOnlyConsumeDurabilityOnEquipmentForEnemiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyConsumeDurabilityOnEquipmentForEnemies")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseHandIKForFirstSeatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyUseHandIKForFirstSeat")); }
    BrzCampoPonteiro bOnlyUseSpoilingMultipliersIfActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOnlyUseSpoilingMultipliersIfActivated")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bOverrideOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bOverrideOrbitCamTargetLocation")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPoweredAllowBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredAllowBattery")); }
    BrzCampoPonteiro bPoweredAllowBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredAllowBot")); }
    BrzCampoPonteiro bPoweredAllowSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredAllowSolar")); }
    BrzCampoPonteiro bPoweredHasBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredHasBattery")); }
    BrzCampoPonteiro bPoweredHasBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredHasBot")); }
    BrzCampoPonteiro bPoweredUsingBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredUsingBattery")); }
    BrzCampoPonteiro bPoweredUsingBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredUsingBot")); }
    BrzCampoPonteiro bPoweredUsingSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredUsingSolar")); }
    BrzCampoPonteiro bPoweredWaterSourceWhenActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPoweredWaterSourceWhenActive")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventBotIdleFidgetAnimationsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventBotIdleFidgetAnimations")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventContainerPingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventContainerPingType")); }
    BrzCampoPonteiro bPreventHandcuffLockedSeatingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventHandcuffLockedSeating")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLinkingToStorageInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventLinkingToStorageInterface")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventSaving")); }
    BrzCampoPonteiro bPreventSeatingWhenHandcuffedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventSeatingWhenHandcuffed")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreventToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventToggleActivation")); }
    BrzCampoPonteiro bPreventUsingAsWirelessCraftingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreventUsingAsWirelessCraftingSource")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bReleaseFindsGroundPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReleaseFindsGroundPlacement")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateItemFuelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicateItemFuelClass")); }
    BrzCampoPonteiro bReplicateLastActivatedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicateLastActivatedTime")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bReplicates")); }
    BrzCampoPonteiro bRequiresItemExactClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bRequiresItemExactClass")); }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bRestrictTPVCameraYaw"); }
    BrzCampoPonteiro bRowingSeatPlacementRequiresBothSidesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bRowingSeatPlacementRequiresBothSides")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSavedWhenStasised")); }
    BrzCampoPonteiro bSeatOnlyAllowsCaptainOrdersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSeatOnlyAllowsCaptainOrders")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bServerBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bServerBPNotifyInventoryItemChangesUseQuantity")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseSwappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bServerBPNotifyInventoryItemChangesUseSwapped")); }
    BrzCampoPonteiro bSkipForceFirstPersonCameraCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSkipForceFirstPersonCameraCheck")); }
    BrzCampoPonteiro bStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStartedUnderwater")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bStructureIgnoreDying")); }
    BrzCampoPonteiro bSupportDynamicSeatingChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSupportDynamicSeatingChanges")); }
    BrzCampoPonteiro bSupportsLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSupportsLocking")); }
    BrzCampoPonteiro bSupportsPinActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSupportsPinActivation")); }
    BrzCampoPonteiro bSupportsPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSupportsPinLocking")); }
    BrzCampoPonteiro bSupportsStorageInterfaceLinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bSupportsStorageInterfaceLinking")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bTearOff")); }
    BrzCampoPonteiro bToggleOpenGunportsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bToggleOpenGunports")); }
    BrzCampoPonteiro bTraceToUnboardLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bTraceToUnboardLocation")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAmmoContainerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseAmmoContainerBuff")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPCanAddWirelessExchangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPCanAddWirelessExchange")); }
    BrzCampoPonteiro bUseBPCanBeActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPCanBeActivated")); }
    BrzCampoPonteiro bUseBPCanBeActivatedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPCanBeActivatedByPlayer")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFuelConsumptionMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetFuelConsumptionMultiplier")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetQuantityOfItemWithoutCheckingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetQuantityOfItemWithoutCheckingInventory")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPNotifyWirelessConsumerAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPNotifyWirelessConsumerRemoved")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPNotifyWirelessSourceAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPNotifyWirelessSourceRemoved")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseBPSetPlayerConstructorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseBPSetPlayerConstructor")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCollisionCompsForFloatingDPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseCollisionCompsForFloatingDPS")); }
    BrzCampoPonteiro bUseColorRegionForEmitterColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseColorRegionForEmitterColor")); }
    BrzCampoPonteiro bUseCooldownOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseCooldownOnTransferAll")); }
    BrzCampoPonteiro bUseDeathCacheCharacterIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseDeathCacheCharacterID")); }
    BrzCampoPonteiro bUseGetSeatingAnimOverrideBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseGetSeatingAnimOverrideBP")); }
    BrzCampoPonteiro bUseHandIkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseHandIk")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseMeshOriginForInventoryAccessTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseMeshOriginForInventoryAccessTrace")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseOpenSceneAction")); }
    BrzCampoPonteiro bUseShipCameraOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseShipCameraOffset")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesAltFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesAltFire")); }
    BrzCampoPonteiro bUsesCustomSteeringField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesCustomSteering")); }
    BrzCampoPonteiro bUsesCustomThrottleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesCustomThrottle")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesHealth")); }
    BrzCampoPonteiro bUsesItemSlotKeysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesItemSlotKeys")); }
    BrzCampoPonteiro bUsesPrimaryFireField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesPrimaryFire")); }
    BrzCampoPonteiro bUsesSubControlsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesSubControls")); }
    BrzCampoPonteiro bUsesTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsesTargeting")); }
    BrzCampoPonteiro bUsingSteeringAnimationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsingSteeringAnimation")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasForceTPVLastFrameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWasForceTPVLastFrame")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSeating_DriverSeat.bWithinPreventionVolume")); }
    BitFieldValue<bool, unsigned __int32> bAllowCaptainOrders()
    { return { (void*)this, "bAllowCaptainOrders" }; }
    BitFieldValue<bool, unsigned __int32> bAttackMyTargetEnabled()
    { return { (void*)this, "bAttackMyTargetEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAutoFurlSails()
    { return { (void*)this, "bAutoFurlSails" }; }
    BitFieldValue<bool, unsigned __int32> bAutoHoldThrottleForward()
    { return { (void*)this, "bAutoHoldThrottleForward" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPilotActive()
    { return { (void*)this, "bAutoPilotActive" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPilot_FollowWind()
    { return { (void*)this, "bAutoPilot_FollowWind" }; }
    BitFieldValue<bool, unsigned __int32> bAutoPilot_HasReachedHeading()
    { return { (void*)this, "bAutoPilot_HasReachedHeading" }; }
    BitFieldValue<bool, unsigned __int32> bCreateMusicPlayer()
    { return { (void*)this, "bCreateMusicPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bDebugAutoPilot()
    { return { (void*)this, "bDebugAutoPilot" }; }
    BitFieldValue<bool, unsigned __int32> bDebugDriving()
    { return { (void*)this, "bDebugDriving" }; }
    BitFieldValue<bool, unsigned __int32> bDebugRowing()
    { return { (void*)this, "bDebugRowing" }; }
    BitFieldValue<bool, unsigned __int32> bForceDrawFloatingHUD()
    { return { (void*)this, "bForceDrawFloatingHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHideSailsForAimingCaptainOrders()
    { return { (void*)this, "bHideSailsForAimingCaptainOrders" }; }
    BitFieldValue<bool, unsigned __int32> bIsRowingSeat()
    { return { (void*)this, "bIsRowingSeat" }; }
    BitFieldValue<bool, unsigned __int32> bIsRowingSeatActive()
    { return { (void*)this, "bIsRowingSeatActive" }; }
    BitFieldValue<bool, unsigned __int32> bLastRowSuccess()
    { return { (void*)this, "bLastRowSuccess" }; }
    BitFieldValue<bool, unsigned __int32> bManualFireEnabled()
    { return { (void*)this, "bManualFireEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bOarTracesIgnoreHull()
    { return { (void*)this, "bOarTracesIgnoreHull" }; }
    BitFieldValue<bool, unsigned __int32> bRowingSeatPlacementRequiresBothSides()
    { return { (void*)this, "bRowingSeatPlacementRequiresBothSides" }; }
    BitFieldValue<bool, unsigned __int32> bSeatOnlyAllowsCaptainOrders()
    { return { (void*)this, "bSeatOnlyAllowsCaptainOrders" }; }
    BitFieldValue<bool, unsigned __int32> bSkipForceFirstPersonCameraCheck()
    { return { (void*)this, "bSkipForceFirstPersonCameraCheck" }; }
    BitFieldValue<bool, unsigned __int32> bToggleOpenGunports()
    { return { (void*)this, "bToggleOpenGunports" }; }
    BitFieldValue<bool, unsigned __int32> bUseShipCameraOffset()
    { return { (void*)this, "bUseShipCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCustomSteering()
    { return { (void*)this, "bUsesCustomSteering" }; }
    BitFieldValue<bool, unsigned __int32> bUsesCustomThrottle()
    { return { (void*)this, "bUsesCustomThrottle" }; }
    BitFieldValue<bool, unsigned __int32> bUsesSubControls()
    { return { (void*)this, "bUsesSubControls" }; }
    BitFieldValue<bool, unsigned __int32> bUsingSteeringAnimation()
    { return { (void*)this, "bUsingSteeringAnimation" }; }
    BitFieldValue<bool, unsigned __int32> bWasForceTPVLastFrame()
    { return { (void*)this, "bWasForceTPVLastFrame" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESEATING_DRIVERSEAT_H
