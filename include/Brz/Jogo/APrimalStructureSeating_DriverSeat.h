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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=165]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro AutoPilot_Start(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.AutoPilot_Start(UE::Math::TVector2<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.AutoPilot_Stop()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo+string_aprovado]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=3033+grafo=24/24]]
    BrzPonteiro BindCaptainsOrdersSeatInputs() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.BindCaptainsOrdersSeatInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.BindDriverSeatInputs()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=39/39]]
    BrzPonteiro BindDriverSeatInputs() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.BindDriverSeatInputs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanPlaceDriverSeat(APrimalShip*,bool)
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro CanSeatedCharRow(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.CanSeatedCharRow(APrimalCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.CanUseAutoPilot()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_AutoThrottleBindReleased() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_AutoThrottleBindReleased()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_GamepadZoomAxis(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_GamepadZoomAxis(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_GamepadZoomAxis(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_PressedActivateTurningSail_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedActivateTurningSail_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_PressedProne_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedProne_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_PressedStartRowing()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_PressedStartRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_PressedStartRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail_Implementation()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_ReleasedActivateTurningSail_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ReleasedActivateTurningSail_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyClosed()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_SetSailsFullyClosed() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyClosed()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_SetSailsFullyOpen()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_SetTurnSailsInput(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_SetTurnSailsInput(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ZoomIn()
    // endereco: cache_pdb_25090264
    BrzPonteiro DriverSeat_ZoomIn() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.DriverSeat_ZoomIn()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.DriverSeat_ZoomOut()
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro ForceThirdPerson_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.ForceThirdPerson_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderPressed(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro GamepadDoOnCaptainOrderPressed(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderPressed(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderReleased(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro GamepadDoOnCaptainOrderReleased(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.GamepadDoOnCaptainOrderReleased(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<0>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GamepadOnCaptainOrderPressed_0_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<7>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GamepadOnCaptainOrderPressed_7_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderPressed<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderReleased<7>()
    // endereco: cache_pdb_25090264
    BrzPonteiro GamepadOnCaptainOrderReleased_7_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GamepadOnCaptainOrderReleased<7>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetActiveDriverCount()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=50]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=110]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetHandIKEnabled(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureSeating_DriverSeat.GetHandIKEnabled(bool&,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetHandsSocketsTransforms(UE::Math::TTransform<double>&,UE::M
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=108]]
    BrzPonteiro GetNextRowingAnim() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.GetNextRowingAnim()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.GetOarBottomLocation()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro IsRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.IsRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.LocalSetShouldDrawFloatingHUD(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro Net_StartRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.Net_StartRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.Net_StopRowing()
    // endereco: cache_pdb_25090264
    BrzPonteiro Net_StopRowing() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.Net_StopRowing()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnAttachedToValidShip()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnAttachedToValidShip() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnAttachedToValidShip()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<0>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_0_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<0>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<1>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_1_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<1>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<2>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_2_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<2>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<3>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_3_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<3>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<5>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_5_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<5>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<6>()
    // endereco: cache_pdb_25090264
    BrzPonteiro OnCaptainOrderPressed_6_() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.OnCaptainOrderPressed<6>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnDriverSeated(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnDriverSeated(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverSeated(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnDriverUnseated(int)
    // endereco: cache_pdb_25090264
    BrzPonteiro OnDriverUnseated(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureSeating_DriverSeat.OnDriverUnseated(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.OnHoldingReload()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=673+grafo=8/8]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=72]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro Release(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.Release(AShooterCharacter*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ServerSetTurningSailState_Implementation(bool)
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro StaticRegisterNativesAPrimalStructureSeating_DriverSeat() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.StaticRegisterNativesAPrimalStructureSeating_DriverSeat()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.StopAllRowingAnims()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=56]]
    BrzPonteiro StopAllRowingAnims() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.StopAllRowingAnims()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.TickCriticalShipStructure(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro TickCriticalShipStructure(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSeating_DriverSeat.TickCriticalShipStructure(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.ToggleLadders()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=172]]
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
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateManualFireLocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSeating_DriverSeat.UpdateManualFireLocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.UpdateWindSourceActorRef()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro UpdateWindSourceActorRef() const
    {
        return NativeCall<void*>(this, "APrimalStructureSeating_DriverSeat.UpdateWindSourceActorRef()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSeating_DriverSeat.WeaponAllowCommand()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=101]]
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
    BitFieldValue<bool, unsigned __int32> AllowOverrideParticleLightColor()
    { return { (void*)this, "AllowOverrideParticleLightColor" }; }
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
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
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
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode()
    { return { (void*)this, "UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
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
    BitFieldValue<bool, unsigned __int32> bActiveRequiresPower()
    { return { (void*)this, "bActiveRequiresPower" }; }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustDamageAsPlayerWithEquipment()
    { return { (void*)this, "bAdjustDamageAsPlayerWithEquipment" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustForLegLength()
    { return { (void*)this, "bAdjustForLegLength" }; }
    BitFieldValue<bool, unsigned __int32> bAdjustForLegLengthStanding()
    { return { (void*)this, "bAdjustForLegLengthStanding" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyTeamToSit()
    { return { (void*)this, "bAllowAnyTeamToSit" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower()
    { return { (void*)this, "bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCrouchProneToSit()
    { return { (void*)this, "bAllowCrouchProneToSit" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName()
    { return { (void*)this, "bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bAllowDinoCompanionAttachment()
    { return { (void*)this, "bAllowDinoCompanionAttachment" }; }
    BitFieldValue<bool, unsigned __int32> bAllowFPV()
    { return { (void*)this, "bAllowFPV" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOrbitCam()
    { return { (void*)this, "bAllowOrbitCam" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement()
    { return { (void*)this, "bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSleepingPlayers()
    { return { (void*)this, "bAllowSleepingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSnapRotation()
    { return { (void*)this, "bAllowSnapRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowStructureSkinsWithoutTeamCheck()
    { return { (void*)this, "bAllowStructureSkinsWithoutTeamCheck" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTickBeforeBeginPlay()
    { return { (void*)this, "bAllowTickBeforeBeginPlay" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldRoundRobin()
    { return { (void*)this, "bAllowWeldRoundRobin" }; }
    BitFieldValue<bool, unsigned __int32> bAllowWeldingToShips()
    { return { (void*)this, "bAllowWeldingToShips" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState()
    { return { (void*)this, "bAlwaysCreatePhysicsState" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevant()
    { return { (void*)this, "bAlwaysRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bAlwaysRelevantPrimalStructure()
    { return { (void*)this, "bAlwaysRelevantPrimalStructure" }; }
    BitFieldValue<bool, unsigned __int32> bApplyNiagaraColorInBP()
    { return { (void*)this, "bApplyNiagaraColorInBP" }; }
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateContainer()
    { return { (void*)this, "bAutoActivateContainer" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateIfPowered()
    { return { (void*)this, "bAutoActivateIfPowered" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenFueled()
    { return { (void*)this, "bAutoActivateWhenFueled" }; }
    BitFieldValue<bool, unsigned __int32> bAutoActivateWhenNoPower()
    { return { (void*)this, "bAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
    BitFieldValue<bool, unsigned __int32> bBPIsValidWaterSourceForPipe()
    { return { (void*)this, "bBPIsValidWaterSourceForPipe" }; }
    BitFieldValue<bool, unsigned __int32> bBPNotifyRemoteViewerChange()
    { return { (void*)this, "bBPNotifyRemoteViewerChange" }; }
    BitFieldValue<bool, unsigned __int32> bBPOnContainerActiveHealthDecrease()
    { return { (void*)this, "bBPOnContainerActiveHealthDecrease" }; }
    BitFieldValue<bool, unsigned __int32> bBPPostInitializeComponents()
    { return { (void*)this, "bBPPostInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBPPreInitializeComponents()
    { return { (void*)this, "bBPPreInitializeComponents" }; }
    BitFieldValue<bool, unsigned __int32> bBendForwardWithIK()
    { return { (void*)this, "bBendForwardWithIK" }; }
    BitFieldValue<bool, unsigned __int32> bBlockInput()
    { return { (void*)this, "bBlockInput" }; }
    BitFieldValue<bool, unsigned __int32> bBlueprintMultiUseEntries()
    { return { (void*)this, "bBlueprintMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplication()
    { return { (void*)this, "bCallPreReplication" }; }
    BitFieldValue<bool, unsigned __int32> bCallPreReplicationForReplay()
    { return { (void*)this, "bCallPreReplicationForReplay" }; }
    BitFieldValue<bool, unsigned __int32> bCanAttachToExosuit()
    { return { (void*)this, "bCanAttachToExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeDamaged()
    { return { (void*)this, "bCanBeDamaged" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeInCluster()
    { return { (void*)this, "bCanBeInCluster" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeRepaired()
    { return { (void*)this, "bCanBeRepaired" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeStoredByExosuit()
    { return { (void*)this, "bCanBeStoredByExosuit" }; }
    BitFieldValue<bool, unsigned __int32> bCanToggleActivation()
    { return { (void*)this, "bCanToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bCarriedByDino()
    { return { (void*)this, "bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bCheckStartedUnderwater()
    { return { (void*)this, "bCheckStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bClientBPNotifyInventoryItemChanges()
    { return { (void*)this, "bClientBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor()
    { return { (void*)this, "bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bContainerActivated()
    { return { (void*)this, "bContainerActivated" }; }
    BitFieldValue<bool, unsigned __int32> bCraftingSubstractConnectedWater()
    { return { (void*)this, "bCraftingSubstractConnectedWater" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy()
    { return { (void*)this, "bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemoved()
    { return { (void*)this, "bDestroyWhenAllItemsRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyWhenAllItemsRemovedExceptDefaults()
    { return { (void*)this, "bDestroyWhenAllItemsRemovedExceptDefaults" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects()
    { return { (void*)this, "bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bDisableActivationUnderwater()
    { return { (void*)this, "bDisableActivationUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm()
    { return { (void*)this, "bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUI()
    { return { (void*)this, "bDisplayActivationOnInventoryUI" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUISecondary()
    { return { (void*)this, "bDisplayActivationOnInventoryUISecondary" }; }
    BitFieldValue<bool, unsigned __int32> bDisplayActivationOnInventoryUITertiary()
    { return { (void*)this, "bDisplayActivationOnInventoryUITertiary" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetPickupTimer()
    { return { (void*)this, "bDontResetPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters()
    { return { (void*)this, "bDontSetDamageParameters" }; }
    BitFieldValue<bool, unsigned __int32> bDrawFuelRemaining()
    { return { (void*)this, "bDrawFuelRemaining" }; }
    BitFieldValue<bool, unsigned __int32> bDrinkingWater()
    { return { (void*)this, "bDrinkingWater" }; }
    BitFieldValue<bool, unsigned __int32> bDropInventoryOnDestruction()
    { return { (void*)this, "bDropInventoryOnDestruction" }; }
    BitFieldValue<bool, unsigned __int32> bEditorOnlyActorShowInPIE()
    { return { (void*)this, "bEditorOnlyActorShowInPIE" }; }
    //  no cache antigo este campo se chamava bEnabeldLoweringAnchor.
    //  nesta build ele e' `bUsingSteeringAnimation` — resolve por NOME.
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
    BitFieldValue<bool, unsigned __int32> bEnableSeatedFreeLook()
    { return { (void*)this, "bEnableSeatedFreeLook" }; }
    BitFieldValue<bool, unsigned __int32> bExchangedRoles()
    { return { (void*)this, "bExchangedRoles" }; }
    BitFieldValue<bool, unsigned __int32> bFindCameraComponentWhenViewTarget()
    { return { (void*)this, "bFindCameraComponentWhenViewTarget" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowNetMulticast()
    { return { (void*)this, "bForceAllowNetMulticast" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers()
    { return { (void*)this, "bForceFloatingDamageNumbers" }; }
    BitFieldValue<bool, unsigned __int32> bForceFloorCollisionGroup()
    { return { (void*)this, "bForceFloorCollisionGroup" }; }
    BitFieldValue<bool, unsigned __int32> bForceHiddenReplication()
    { return { (void*)this, "bForceHiddenReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceHighQualityViewerReplication()
    { return { (void*)this, "bForceHighQualityViewerReplication" }; }
    BitFieldValue<bool, unsigned __int32> bForceInfiniteDrawDistance()
    { return { (void*)this, "bForceInfiniteDrawDistance" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetAddressable()
    { return { (void*)this, "bForceNetAddressable" }; }
    BitFieldValue<bool, unsigned __int32> bForceNetworkSpatialization()
    { return { (void*)this, "bForceNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bForceNeverLock()
    { return { (void*)this, "bForceNeverLock" }; }
    BitFieldValue<bool, unsigned __int32> bForceNoPinLocking()
    { return { (void*)this, "bForceNoPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventAutoActivateWhenConnectedToWater()
    { return { (void*)this, "bForcePreventAutoActivateWhenConnectedToWater" }; }
    BitFieldValue<bool, unsigned __int32> bForcePreventSeamlessTravel()
    { return { (void*)this, "bForcePreventSeamlessTravel" }; }
    BitFieldValue<bool, unsigned __int32> bForceReplicateDormantChildrenWithoutSpatialRelevancy()
    { return { (void*)this, "bForceReplicateDormantChildrenWithoutSpatialRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bForceSnappedStructureToGround()
    { return { (void*)this, "bForceSnappedStructureToGround" }; }
    BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing()
    { return { (void*)this, "bForceZeroDamageProcessing" }; }
    BitFieldValue<bool, unsigned __int32> bForcedHudDrawingRequiresSameTeam()
    { return { (void*)this, "bForcedHudDrawingRequiresSameTeam" }; }
    BitFieldValue<bool, unsigned __int32> bFreeLookActive()
    { return { (void*)this, "bFreeLookActive" }; }
    BitFieldValue<bool, unsigned __int32> bFuelAllowActivationWhenNoPower()
    { return { (void*)this, "bFuelAllowActivationWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor()
    { return { (void*)this, "bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasFuel()
    { return { (void*)this, "bHasFuel" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime()
    { return { (void*)this, "bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
    BitFieldValue<bool, unsigned __int32> bHideAutoActivateToggle()
    { return { (void*)this, "bHideAutoActivateToggle" }; }
    BitFieldValue<bool, unsigned __int32> bHideCharacterInFPV()
    { return { (void*)this, "bHideCharacterInFPV" }; }
    BitFieldValue<bool, unsigned __int32> bHideLegacyStructureAmmoHUD()
    { return { (void*)this, "bHideLegacyStructureAmmoHUD" }; }
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection()
    { return { (void*)this, "bHidePowerJunctionConnection" }; }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects()
    { return { (void*)this, "bIgnoreDestructionEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreDyingWhenDemolished()
    { return { (void*)this, "bIgnoreDyingWhenDemolished" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreNetworkRangeScaling()
    { return { (void*)this, "bIgnoreNetworkRangeScaling" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreSpawnEffects()
    { return { (void*)this, "bIgnoreSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment()
    { return { (void*)this, "bIgnoredByCharacterEncroachment" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoredByTargeting()
    { return { (void*)this, "bIgnoredByTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoresOriginShifting()
    { return { (void*)this, "bIgnoresOriginShifting" }; }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MusicPlayer` +10, medido na build 25090264
    //  (offset absoluto medido: 0x1622; confianca alta)
    void*& bInGamepadLoweringAnchorField() const
    { return BrzCampoAncorado<void*>(this, "MusicPlayer", 10); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MusicPlayer` +9, medido na build 25090264
    //  (offset absoluto medido: 0x1621; confianca alta)
    void*& bInGamepadZoomingStateField() const
    { return BrzCampoAncorado<void*>(this, "MusicPlayer", 9); }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventItemAppends()
    { return { (void*)this, "bInventoryForcePreventItemAppends" }; }
    BitFieldValue<bool, unsigned __int32> bInventoryForcePreventRemoteAddItems()
    { return { (void*)this, "bInventoryForcePreventRemoteAddItems" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmmoContainer()
    { return { (void*)this, "bIsAmmoContainer" }; }
    BitFieldValue<bool, unsigned __int32> bIsBed()
    { return { (void*)this, "bIsBed" }; }
    BitFieldValue<bool, unsigned __int32> bIsDead()
    { return { (void*)this, "bIsDead" }; }
    BitFieldValue<bool, unsigned __int32> bIsDestroyedFromChildActorComponent()
    { return { (void*)this, "bIsDestroyedFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsDoorframe()
    { return { (void*)this, "bIsDoorframe" }; }
    BitFieldValue<bool, unsigned __int32> bIsEditorOnlyActor()
    { return { (void*)this, "bIsEditorOnlyActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlipped()
    { return { (void*)this, "bIsFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bIsFloor()
    { return { (void*)this, "bIsFloor" }; }
    BitFieldValue<bool, unsigned __int32> bIsFoundation()
    { return { (void*)this, "bIsFoundation" }; }
    BitFieldValue<bool, unsigned __int32> bIsFromChildActorComponent()
    { return { (void*)this, "bIsFromChildActorComponent" }; }
    BitFieldValue<bool, unsigned __int32> bIsInvincible()
    { return { (void*)this, "bIsInvincible" }; }
    BitFieldValue<bool, unsigned __int32> bIsLocked()
    { return { (void*)this, "bIsLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
    BitFieldValue<bool, unsigned __int32> bIsPinLocked()
    { return { (void*)this, "bIsPinLocked" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowerJunction()
    { return { (void*)this, "bIsPowerJunction" }; }
    BitFieldValue<bool, unsigned __int32> bIsPowered()
    { return { (void*)this, "bIsPowered" }; }
    BitFieldValue<bool, unsigned __int32> bIsPreviewStructure()
    { return { (void*)this, "bIsPreviewStructure" }; }
    BitFieldValue<bool, unsigned __int32> bIsRepairing()
    { return { (void*)this, "bIsRepairing" }; }
    BitFieldValue<bool, unsigned __int32> bIsStructureAttachmentBase()
    { return { (void*)this, "bIsStructureAttachmentBase" }; }
    BitFieldValue<bool, unsigned __int32> bIsTeleporter()
    { return { (void*)this, "bIsTeleporter" }; }
    BitFieldValue<bool, unsigned __int32> bIsTrapped()
    { return { (void*)this, "bIsTrapped" }; }
    BitFieldValue<bool, unsigned __int32> bIsUnderwater()
    { return { (void*)this, "bIsUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnDetach()
    { return { (void*)this, "bJumpOnDetach" }; }
    BitFieldValue<bool, unsigned __int32> bLastToggleActivated()
    { return { (void*)this, "bLastToggleActivated" }; }
    BitFieldValue<bool, unsigned __int32> bLinkedStructureRemovalForceClientUpdate()
    { return { (void*)this, "bLinkedStructureRemovalForceClientUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bLoadedFromSaveGame()
    { return { (void*)this, "bLoadedFromSaveGame" }; }
    BitFieldValue<bool, unsigned __int32> bMultiUseCenterHUD()
    { return { (void*)this, "bMultiUseCenterHUD" }; }
    BitFieldValue<bool, unsigned __int32> bNetCritical()
    { return { (void*)this, "bNetCritical" }; }
    BitFieldValue<bool, unsigned __int32> bNetLoadOnClient()
    { return { (void*)this, "bNetLoadOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bNetTemporary()
    { return { (void*)this, "bNetTemporary" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseClientRelevancy()
    { return { (void*)this, "bNetUseClientRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetUseOwnerRelevancy()
    { return { (void*)this, "bNetUseOwnerRelevancy" }; }
    BitFieldValue<bool, unsigned __int32> bNetworkSpatializationForceRelevancyCheck()
    { return { (void*)this, "bNetworkSpatializationForceRelevancyCheck" }; }
    BitFieldValue<bool, unsigned __int32> bNoCollision()
    { return { (void*)this, "bNoCollision" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyAllowTeamActivation()
    { return { (void*)this, "bOnlyAllowTeamActivation" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyConsumeDurabilityOnEquipmentForEnemies()
    { return { (void*)this, "bOnlyConsumeDurabilityOnEquipmentForEnemies" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseHandIKForFirstSeat()
    { return { (void*)this, "bOnlyUseHandIKForFirstSeat" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated()
    { return { (void*)this, "bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance()
    { return { (void*)this, "bOverrideFoundationSupportDistance" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideOrbitCamTargetLocation()
    { return { (void*)this, "bOverrideOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bPendingRemoval()
    { return { (void*)this, "bPendingRemoval" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementAdjustHeight()
    { return { (void*)this, "bPlacementAdjustHeight" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementChooseRotation()
    { return { (void*)this, "bPlacementChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementIgnoreChooseRotation()
    { return { (void*)this, "bPlacementIgnoreChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementPreventLockingCameraWhileChooseRotation()
    { return { (void*)this, "bPlacementPreventLockingCameraWhileChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBattery()
    { return { (void*)this, "bPoweredAllowBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowBot()
    { return { (void*)this, "bPoweredAllowBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredAllowSolar()
    { return { (void*)this, "bPoweredAllowSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBattery()
    { return { (void*)this, "bPoweredHasBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredHasBot()
    { return { (void*)this, "bPoweredHasBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBattery()
    { return { (void*)this, "bPoweredUsingBattery" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingBot()
    { return { (void*)this, "bPoweredUsingBot" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredUsingSolar()
    { return { (void*)this, "bPoweredUsingSolar" }; }
    BitFieldValue<bool, unsigned __int32> bPoweredWaterSourceWhenActive()
    { return { (void*)this, "bPoweredWaterSourceWhenActive" }; }
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBotIdleFidgetAnimations()
    { return { (void*)this, "bPreventBotIdleFidgetAnimations" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventContainerPingType()
    { return { (void*)this, "bPreventContainerPingType" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHandcuffLockedSeating()
    { return { (void*)this, "bPreventHandcuffLockedSeating" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLinkingToStorageInterface()
    { return { (void*)this, "bPreventLinkingToStorageInterface" }; }
    BitFieldValue<bool, unsigned __int32> bPreventNPCSpawnFloor()
    { return { (void*)this, "bPreventNPCSpawnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bPreventOnDedicatedServer()
    { return { (void*)this, "bPreventOnDedicatedServer" }; }
    BitFieldValue<bool, unsigned __int32> bPreventRegularForceNetUpdate()
    { return { (void*)this, "bPreventRegularForceNetUpdate" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSaving()
    { return { (void*)this, "bPreventSaving" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSeatingWhenHandcuffed()
    { return { (void*)this, "bPreventSeatingWhenHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStasis()
    { return { (void*)this, "bPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventToggleActivation()
    { return { (void*)this, "bPreventToggleActivation" }; }
    BitFieldValue<bool, unsigned __int32> bPreventUsingAsWirelessCraftingSource()
    { return { (void*)this, "bPreventUsingAsWirelessCraftingSource" }; }
    BitFieldValue<bool, unsigned __int32> bPreviewApplyColorToChildComponents()
    { return { (void*)this, "bPreviewApplyColorToChildComponents" }; }
    BitFieldValue<bool, unsigned __int32> bRealtimeThrottledTickUseNativeTick()
    { return { (void*)this, "bRealtimeThrottledTickUseNativeTick" }; }
    BitFieldValue<bool, unsigned __int32> bReleaseFindsGroundPlacement()
    { return { (void*)this, "bReleaseFindsGroundPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForLevelBounds()
    { return { (void*)this, "bRelevantForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bRelevantForNetworkReplays()
    { return { (void*)this, "bRelevantForNetworkReplays" }; }
    BitFieldValue<bool, unsigned __int32> bReplayRewindable()
    { return { (void*)this, "bReplayRewindable" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateHidden()
    { return { (void*)this, "bReplicateHidden" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateItemFuelClass()
    { return { (void*)this, "bReplicateItemFuelClass" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateLastActivatedTime()
    { return { (void*)this, "bReplicateLastActivatedTime" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresItemExactClass()
    { return { (void*)this, "bRequiresItemExactClass" }; }
    bool& bRestrictTPVCameraYawField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating_DriverSeat.bRestrictTPVCameraYaw"); }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChanges()
    { return { (void*)this, "bServerBPNotifyInventoryItemChanges" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseQuantity()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseQuantity" }; }
    BitFieldValue<bool, unsigned __int32> bServerBPNotifyInventoryItemChangesUseSwapped()
    { return { (void*)this, "bServerBPNotifyInventoryItemChangesUseSwapped" }; }
    BitFieldValue<bool, unsigned __int32> bStartedUnderwater()
    { return { (void*)this, "bStartedUnderwater" }; }
    BitFieldValue<bool, unsigned __int32> bStasisComponentRadiusForceDistanceCheck()
    { return { (void*)this, "bStasisComponentRadiusForceDistanceCheck" }; }
    BitFieldValue<bool, unsigned __int32> bStasised()
    { return { (void*)this, "bStasised" }; }
    BitFieldValue<bool, unsigned __int32> bStationaryStructure()
    { return { (void*)this, "bStationaryStructure" }; }
    BitFieldValue<bool, unsigned __int32> bStructureCosmeticOverrideStructureColorSets()
    { return { (void*)this, "bStructureCosmeticOverrideStructureColorSets" }; }
    BitFieldValue<bool, unsigned __int32> bStructureFiresProjectiles()
    { return { (void*)this, "bStructureFiresProjectiles" }; }
    BitFieldValue<bool, unsigned __int32> bStructureIgnoreDying()
    { return { (void*)this, "bStructureIgnoreDying" }; }
    BitFieldValue<bool, unsigned __int32> bSupportDynamicSeatingChanges()
    { return { (void*)this, "bSupportDynamicSeatingChanges" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsLocking()
    { return { (void*)this, "bSupportsLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinActivation()
    { return { (void*)this, "bSupportsPinActivation" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsPinLocking()
    { return { (void*)this, "bSupportsPinLocking" }; }
    BitFieldValue<bool, unsigned __int32> bSupportsStorageInterfaceLinking()
    { return { (void*)this, "bSupportsStorageInterfaceLinking" }; }
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bTraceToUnboardLocation()
    { return { (void*)this, "bTraceToUnboardLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAmmoContainerBuff()
    { return { (void*)this, "bUseAmmoContainerBuff" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPActivated()
    { return { (void*)this, "bUseBPActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanAddWirelessExchange()
    { return { (void*)this, "bUseBPCanAddWirelessExchange" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivated()
    { return { (void*)this, "bUseBPCanBeActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCanBeActivatedByPlayer()
    { return { (void*)this, "bUseBPCanBeActivatedByPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPChangedActorTeam()
    { return { (void*)this, "bUseBPChangedActorTeam" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCheckForErrors()
    { return { (void*)this, "bUseBPCheckForErrors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPCustomIsRelevantForClient()
    { return { (void*)this, "bUseBPCustomIsRelevantForClient" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPDrawEntry()
    { return { (void*)this, "bUseBPDrawEntry" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPFilterMultiUseEntries()
    { return { (void*)this, "bUseBPFilterMultiUseEntries" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceAllowsInventoryUse()
    { return { (void*)this, "bUseBPForceAllowsInventoryUse" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetBonesToHideOnAllocation()
    { return { (void*)this, "bUseBPGetBonesToHideOnAllocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetCameraCollisionIgnoreActors()
    { return { (void*)this, "bUseBPGetCameraCollisionIgnoreActors" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetFuelConsumptionMultiplier()
    { return { (void*)this, "bUseBPGetFuelConsumptionMultiplier" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetQuantityOfItemWithoutCheckingInventory()
    { return { (void*)this, "bUseBPGetQuantityOfItemWithoutCheckingInventory" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerAdded()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessConsumerRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessConsumerRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceAdded()
    { return { (void*)this, "bUseBPNotifyWirelessSourceAdded" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyWirelessSourceRemoved()
    { return { (void*)this, "bUseBPNotifyWirelessSourceRemoved" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnClientUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnClientUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnServerUpdatedLinkedStructures()
    { return { (void*)this, "bUseBPOnServerUpdatedLinkedStructures" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideTargetingLocation()
    { return { (void*)this, "bUseBPOverrideTargetingLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOverrideUILocation()
    { return { (void*)this, "bUseBPOverrideUILocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPostPreviewStructureFlipped()
    { return { (void*)this, "bUseBPPostPreviewStructureFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventAttachments()
    { return { (void*)this, "bUseBPPreventAttachments" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventCharacterBasing()
    { return { (void*)this, "bUseBPPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPPreventStasis()
    { return { (void*)this, "bUseBPPreventStasis" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPSetPlayerConstructor()
    { return { (void*)this, "bUseBPSetPlayerConstructor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCollisionCompsForFloatingDPS()
    { return { (void*)this, "bUseCollisionCompsForFloatingDPS" }; }
    BitFieldValue<bool, unsigned __int32> bUseColorRegionForEmitterColor()
    { return { (void*)this, "bUseColorRegionForEmitterColor" }; }
    BitFieldValue<bool, unsigned __int32> bUseCooldownOnTransferAll()
    { return { (void*)this, "bUseCooldownOnTransferAll" }; }
    BitFieldValue<bool, unsigned __int32> bUseDeathCacheCharacterID()
    { return { (void*)this, "bUseDeathCacheCharacterID" }; }
    BitFieldValue<bool, unsigned __int32> bUseGetSeatingAnimOverrideBP()
    { return { (void*)this, "bUseGetSeatingAnimOverrideBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseHandIk()
    { return { (void*)this, "bUseHandIk" }; }
    BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent()
    { return { (void*)this, "bUseHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseMeshOriginForInventoryAccessTrace()
    { return { (void*)this, "bUseMeshOriginForInventoryAccessTrace" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
    BitFieldValue<bool, unsigned __int32> bUseOpenSceneAction()
    { return { (void*)this, "bUseOpenSceneAction" }; }
    BitFieldValue<bool, unsigned __int32> bUseStasisGrid()
    { return { (void*)this, "bUseStasisGrid" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAltFire()
    { return { (void*)this, "bUsesAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesHealth()
    { return { (void*)this, "bUsesHealth" }; }
    BitFieldValue<bool, unsigned __int32> bUsesItemSlotKeys()
    { return { (void*)this, "bUsesItemSlotKeys" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPrimaryFire()
    { return { (void*)this, "bUsesPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesTargeting()
    { return { (void*)this, "bUsesTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bUsingStructureColors()
    { return { (void*)this, "bUsingStructureColors" }; }
    BitFieldValue<bool, unsigned __int32> bWantsPerformanceThrottledTick()
    { return { (void*)this, "bWantsPerformanceThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsRealtimeThrottledTick()
    { return { (void*)this, "bWantsRealtimeThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWantsServerThrottledTick()
    { return { (void*)this, "bWantsServerThrottledTick" }; }
    BitFieldValue<bool, unsigned __int32> bWasAttachedToPawn()
    { return { (void*)this, "bWasAttachedToPawn" }; }
    BitFieldValue<bool, unsigned __int32> bWasPlacementSnapped()
    { return { (void*)this, "bWasPlacementSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume()
    { return { (void*)this, "bWithinPreventionVolume" }; }
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
