// ==========================================================================
//  APrimalReverseVacuumCompartment — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALREVERSEVACUUMCOMPARTMENT_H
#define BRZ_SDK_JOGO_APRIMALREVERSEVACUUMCOMPARTMENT_H

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
struct APrimalStructureUnderwaterBase;
struct FActorTickFunction;
struct FItemNetID;
struct FName;
struct FPrimalMapMarkerEntryData;
struct FPrimalStructureSnapPointOverride;
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


struct APrimalReverseVacuumCompartment
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalReverseVacuumCompartment"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AddTeleportationEntry(FMultiUseEntry&,TArray<FMultiUseEntry,TSiz
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddTeleportationEntry(void* a0, void* a1, void* a2, int a3) const
    {
        return NativeCall<void*, void*, void*, void*, int>(this, "APrimalReverseVacuumCompartment.AddTeleportationEntry(FMultiUseEntry&,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,APlayerController*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AddedLinkedStructure(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddedLinkedStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.AddedLinkedStructure(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<void*, void*, int, bool, int>(this, "APrimalReverseVacuumCompartment.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AreBasesOpenToEachOther(APrimalReverseVacuumCompartment*,int,int
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AreBasesOpenToEachOther(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalReverseVacuumCompartment.AreBasesOpenToEachOther(APrimalReverseVacuumCompartment*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AreBasesOpenToEachOtherByIndex(int,APrimalReverseVacuumCompartme
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AreBasesOpenToEachOtherByIndex(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "APrimalReverseVacuumCompartment.AreBasesOpenToEachOtherByIndex(int,APrimalReverseVacuumCompartment*&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.BPSetPortholeState(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPSetPortholeState(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.BPSetPortholeState(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.BPUpdateWaterLines(APrimalReverseVacuumCompartment*,FPorthole&,F
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPUpdateWaterLines(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalReverseVacuumCompartment.BPUpdateWaterLines(APrimalReverseVacuumCompartment*,FPorthole&,FPorthole&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.CanOpenPorthole(FPorthole&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanOpenPorthole(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.CanOpenPorthole(FPorthole&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.ChangedCompartmentFloodState()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ChangedCompartmentFloodState() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.ChangedCompartmentFloodState()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.CheckConnectivity(FPlacementData&,int&,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckConnectivity(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalReverseVacuumCompartment.CheckConnectivity(FPlacementData&,int&,int&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.ClearWaterLines()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro ClearWaterLines() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.ClearWaterLines()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.CountConnectedCubes(TSet<APrimalReverseVacuumCompartment*,Defaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CountConnectedCubes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.CountConnectedCubes(TSet<APrimalReverseVacuumCompartment*,DefaultKeyFuncs<APrimalReverseVacuumCompartment*,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.CountMergedConnectedCubes(TSet<APrimalReverseVacuumCompartment*,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CountMergedConnectedCubes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.CountMergedConnectedCubes(TSet<APrimalReverseVacuumCompartment*,DefaultKeyFuncs<APrimalReverseVacuumCompartment*,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.DeActivateAfterPowerOffTimerExpired()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeActivateAfterPowerOffTimerExpired() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.DeActivateAfterPowerOffTimerExpired()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.DispatchWindCompSurfaceEvents(UPrimalWindSourceComponent*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DispatchWindCompSurfaceEvents(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "APrimalReverseVacuumCompartment.DispatchWindCompSurfaceEvents(UPrimalWindSourceComponent*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.DoSetPortholeState(int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro DoSetPortholeState(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.DoSetPortholeState(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetAdjacentPorthole(TArray<FPorthole,TSizedDefaultAllocator<32>>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAdjacentPorthole(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalReverseVacuumCompartment.GetAdjacentPorthole(TArray<FPorthole,TSizedDefaultAllocator<32>>&,APrimalReverseVacuumCompartment*,TArray<FPorthole,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetInstanceWaterPlacementMinimumWaterHeight()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro GetInstanceWaterPlacementMinimumWaterHeight() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.GetInstanceWaterPlacementMinimumWaterHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetLinkedBaseByPortholeIndex(int,int&)
    // endereco: casamento de bytes com a build de referencia
    APrimalStructureUnderwaterBase* GetLinkedBaseByPortholeIndex(int a0, void* a1) const
    {
        return NativeCall<APrimalStructureUnderwaterBase*, int, void*>(this, "APrimalReverseVacuumCompartment.GetLinkedBaseByPortholeIndex(int,int&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSiz
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalReverseVacuumCompartment.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetNearestPortholeIndexToALocation(UE::Math::TVector<double>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNearestPortholeIndexToALocation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.GetNearestPortholeIndexToALocation(UE::Math::TVector<double>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetPortholeLinksFromLinkedStructures()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPortholeLinksFromLinkedStructures() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.GetPortholeLinksFromLinkedStructures()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetRandomPointInAllCompartments(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetRandomPointInAllCompartments(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalReverseVacuumCompartment.GetRandomPointInAllCompartments(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.HandlePortholeStateChange(APlayerController*,int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro HandlePortholeStateChange(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalReverseVacuumCompartment.HandlePortholeStateChange(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.HandleTeleportation(ACharacter*,FPorthole&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HandleTeleportation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalReverseVacuumCompartment.HandleTeleportation(ACharacter*,FPorthole&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.IsAPortholeMesh(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAPortholeMesh(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.IsAPortholeMesh(UPrimitiveComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.IsInsideBase_Implementation(UE::Math::TVector<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsInsideBase_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.IsInsideBase_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.IsMergedVacuumOverLimit(FPorthole&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsMergedVacuumOverLimit(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.IsMergedVacuumOverLimit(FPorthole&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.IsPortholeObstructed(FPorthole&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsPortholeObstructed(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalReverseVacuumCompartment.IsPortholeObstructed(FPorthole&,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.NetSetWaterVolumesVisibility(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NetSetWaterVolumesVisibility(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalReverseVacuumCompartment.NetSetWaterVolumesVisibility(APlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.OnRep_AreInteriorWallsHidden()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=199+bytes40+chamadores=2]]
    BrzPonteiro OnRep_AreInteriorWallsHidden() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.OnRep_AreInteriorWallsHidden()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.OnRep_IsFlooded()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro OnRep_IsFlooded() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.OnRep_IsFlooded()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.PopulatePortholes()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1074+bytes40+grafo=28/28]]
    BrzPonteiro PopulatePortholes() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.PopulatePortholes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.PostBeginPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostBeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.PostBeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.RefreshCollisionCompProfile(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshCollisionCompProfile(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalReverseVacuumCompartment.RefreshCollisionCompProfile(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.RefreshPowered(APrimalStructureItemContainer*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RefreshPowered(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.RefreshPowered(APrimalStructureItemContainer*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.RemovedLinkedStructure(APrimalStructure*,APlayerController*)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro RemovedLinkedStructure(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalReverseVacuumCompartment.RemovedLinkedStructure(APrimalStructure*,APlayerController*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.ResetPortholeMeshCollision(UPrimitiveComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetPortholeMeshCollision(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.ResetPortholeMeshCollision(UPrimitiveComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetCurrentViewingPorthole(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetCurrentViewingPorthole(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.SetCurrentViewingPorthole(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetPortholeState(int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetPortholeState(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetPortholeState_Implementation(int,int)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro SetPortholeState_Implementation(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState_Implementation(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetStructureCollisionChannels(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetStructureCollisionChannels(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalReverseVacuumCompartment.SetStructureCollisionChannels(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetWaterVolumesVisibility(APlayerController*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWaterVolumesVisibility(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalReverseVacuumCompartment.SetWaterVolumesVisibility(APlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Tick(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalReverseVacuumCompartment.Tick(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalReverseVacuumCompartment.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.UpdateFloodState(APlayerController*,bool,bool)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateFloodState(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateFloodState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.UpdateInteriorWallsState(APlayerController*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateInteriorWallsState(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateInteriorWallsState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.UpdateLockState(APlayerController*,bool,bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro UpdateLockState(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateLockState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.UpdateWaterLines()
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro UpdateWaterLines() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.UpdateWaterLines()");
    }

    TObjectPtr<UTexture2D>& ActivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.ActivateContainerIcon"); }
    FString& ActivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.ActivateContainerString"); }
    TArray<UMaterialInterface*>& ActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalReverseVacuumCompartment.ActivateMaterials"); }
    BrzCampoPonteiro ActivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ActivatedIconColor")); }
    float& ActivationCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ActivationCooldownTime"); }
    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ActiveEffectVFX")); }
    TArray<void*>& ActiveRequiresFuelItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.ActiveRequiresFuelItems"); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalReverseVacuumCompartment.ActorUsingQuickAction"); }
    BrzCampoPonteiro AllowOverrideParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.AllowOverrideParticleLightColor")); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalReverseVacuumCompartment.AllowStructureColorSets" }; }
    TObjectPtr<UTexture2D>& AllowWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.AllowWirelessCraftingIcon"); }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalReverseVacuumCompartment.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalReverseVacuumCompartment.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.AttachmentReplication")); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.AutoReceiveInput"); }
    BrzCampoPonteiro BPOverrideDestroyedMeshTexturesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.BPOverrideDestroyedMeshTextures")); }
    float& BasedCharacterDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.BasedCharacterDamageAmount"); }
    float& BasedCharacterDamageIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.BasedCharacterDamageInterval"); }
    BrzCampoPonteiro BasedCharacterDamageTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.BasedCharacterDamageType")); }
    BrzCampoPonteiro BatteryClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.BatteryClassOverride")); }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.BedID"); }
    int& BlacklistedItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.BlacklistedItemCount"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.BoneDamageAdjusters"); }
    FString& BoxNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.BoxName"); }
    FString& BoxNamePrefaceStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.BoxNamePrefaceString"); }
    //  no cache antigo este campo se chamava CachedWaterSurfaceZ.
    //  nesta build ele e' `FloodAllConnectedIcon` — resolve por NOME.
    BrzCampoPonteiro CachedWaterSurfaceZField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.FloodAllConnectedIcon")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ClientReplicationSendNowThreshold"); }
    BrzCampoPonteiro ClientsViewingPortholesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ClientsViewingPortholes")); }
    TObjectPtr<UTexture2D>& CloseIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.CloseIcon"); }
    USoundBase*& ClosePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.ClosePortholeSound"); }
    USoundBase*& ContainerActivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.ContainerActivatedSound"); }
    float& ContainerActiveDecreaseHealthSpeedField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ContainerActiveDecreaseHealthSpeed"); }
    BrzCampoPonteiro ContainerActiveHealthDecreaseDamageTypePassiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ContainerActiveHealthDecreaseDamageTypePassive")); }
    USoundBase*& ContainerDeactivatedSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.ContainerDeactivatedSound"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalReverseVacuumCompartment.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.CreationTime"); }
    float& CurrentFuelQuantityField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.CurrentFuelQuantity"); }
    double& CurrentFuelTimeCacheField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.CurrentFuelTimeCache"); }
    int& CurrentItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.CurrentItemCount"); }
    unsigned int& CurrentPinCodeField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalReverseVacuumCompartment.CurrentPinCode"); }
    TArray<void*>& CurrentPinCodesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.CurrentPinCodes"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalReverseVacuumCompartment.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalReverseVacuumCompartment.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.DamageTypeAdjusters"); }
    TObjectPtr<UTexture2D>& DeactivateContainerIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DeactivateContainerIcon"); }
    FString& DeactivateContainerStringField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.DeactivateContainerString"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DeactivateTrapIcon")); }
    BrzCampoPonteiro DeactivatedIconColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DeactivatedIconColor")); }
    double& DeactivationAfterPowerOffStartTimeStampField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.DeactivationAfterPowerOffStartTimeStamp"); }
    unsigned long long& DeathCacheCharacterIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "APrimalReverseVacuumCompartment.DeathCacheCharacterID"); }
    double& DeathCacheCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.DeathCacheCreationTime"); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalReverseVacuumCompartment.DeathSound"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DecayDestructionPeriodMultiplier"); }
    USoundBase*& DefaultAudioTemplateField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.DefaultAudioTemplate"); }
    BrzCampoPonteiro DefaultParticleLightColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DefaultParticleLightColor")); }
    BrzCampoPonteiro DefaultParticleTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DefaultParticleTemplate")); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DemolishGiveItemCraftingResourcePercentage"); }
    BrzCampoPonteiro DemolishInventoryDepositClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DemolishInventoryDepositClass")); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DestructionEmitter")); }
    TObjectPtr<UTexture2D>& DisableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DisableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& DisableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DisableUnpoweredAutoActivationIcon"); }
    TObjectPtr<UTexture2D>& DisabledOpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DisabledOpenSceneActionIcon"); }
    FString& DisabledOpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.DisabledOpenSceneActionName"); }
    BrzCampoPonteiro DoorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.DoorClass")); }
    TObjectPtr<UTexture2D>& DrainAllConnectedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DrainAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& DrainCompartmentIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DrainCompartmentIcon"); }
    float& DrawFuelRemainingOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DrawFuelRemainingOffset"); }
    TObjectPtr<UTexture2D>& DrinkWaterIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.DrinkWaterIcon"); }
    float& DropInventoryDepositTraceDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DropInventoryDepositTraceDistance"); }
    float& DropInventoryOnDestructionLifespanField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.DropInventoryOnDestructionLifespan"); }
    int& EmitterColorRegionIndexField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.EmitterColorRegionIndex"); }
    TObjectPtr<UTexture2D>& EnableAutoCraftIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.EnableAutoCraftIcon"); }
    TObjectPtr<UTexture2D>& EnableUnpoweredAutoActivationIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.EnableUnpoweredAutoActivationIcon"); }
    BrzCampoPonteiro EngramRequirementClassOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.EngramRequirementClassOverride")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.FloatingHudLocTextOffset")); }
    TObjectPtr<UTexture2D>& FloodAllConnectedIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.FloodAllConnectedIcon"); }
    TObjectPtr<UTexture2D>& FloodCompartmentIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.FloodCompartmentIcon"); }
    BrzCampoPonteiro FloodedEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.FloodedEmitter")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.ForceMaximumReplicationRateUntilTime"); }
    USoundBase*& FreezePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.FreezePortholeSound"); }
    TArray<void*>& FuelConsumeDecreaseDurabilityAmountsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.FuelConsumeDecreaseDurabilityAmounts"); }
    float& FuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.FuelConsumptionIntervalsMultiplier"); }
    BrzCampoPonteiro FuelItemTrueClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.FuelItemTrueClass")); }
    TArray<void*>& FuelItemsConsumeIntervalField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.FuelItemsConsumeInterval"); }
    TArray<void*>& FuelItemsConsumedGiveItemsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.FuelItemsConsumedGiveItems"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.Health"); }
    TObjectPtr<UTexture2D>& HideConnectedFramesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.HideConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& HideFrameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.HideFrameIcon"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalReverseVacuumCompartment.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.HurtFX_Niagara")); }
    float& HyperThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.HyperThermiaInsulation"); }
    float& HypoThermiaInsulationField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.HypoThermiaInsulation"); }
    TArray<UMaterialInterface*>& InActivateMaterialsField() const
    { return *GetNativePointerField<TArray<UMaterialInterface*>*>(this, "APrimalReverseVacuumCompartment.InActivateMaterials"); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalReverseVacuumCompartment.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalReverseVacuumCompartment.Instigator"); }
    float& InsulationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.InsulationRange"); }
    BrzCampoPonteiro ItemsToDisplayInStructureTooltipField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ItemsToDisplayInStructureTooltip")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ItemsUseAlternateActorClassAttachment")); }
    BrzCampoPonteiro JunctionCableBeamOffsetEndField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.JunctionCableBeamOffsetEnd")); }
    BrzCampoPonteiro JunctionCableBeamOffsetStartField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.JunctionCableBeamOffsetStart")); }
    UParticleSystemComponent*& JunctionLinkCableParticleField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalReverseVacuumCompartment.JunctionLinkCableParticle"); }
    UParticleSystem*& JunctionLinkParticleTemplateField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalReverseVacuumCompartment.JunctionLinkParticleTemplate"); }
    double& LastActivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastActivatedTime"); }
    double& LastActiveStateChangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastActiveStateChangeTime"); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastActorForceReplicationTime"); }
    double& LastCheckedFuelTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastCheckedFuelTime"); }
    double& LastDeactivatedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastDeactivatedTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastInAllyRangeTimeSerialized"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalReverseVacuumCompartment.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastPreReplicationTime"); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastSkinAppliedTime"); }
    double& LastSolarRefreshTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastSolarRefreshTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalReverseVacuumCompartment.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.LifeSpanAfterDeath"); }
    AActor*& LinkedBlueprintSpawnActorPointField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalReverseVacuumCompartment.LinkedBlueprintSpawnActorPoint"); }
    TWeakObjectPtr<void>& LinkedPowerJunctionStructureField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalReverseVacuumCompartment.LinkedPowerJunctionStructure"); }
    int& LinkedPowerJunctionStructureIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.LinkedPowerJunctionStructureID"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalReverseVacuumCompartment.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.LinkedStructuresID"); }
    UParticleSystemComponent*& LocalCorpseEmitterField() const
    { return *GetNativePointerField<UParticleSystemComponent**>(this, "APrimalReverseVacuumCompartment.LocalCorpseEmitter"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.LocalOnlySkinCustomPersistentData")); }
    BrzCampoPonteiro LockSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.LockSound")); }
    FPrimalMapMarkerEntryData& MapMarkerLocationInfoField() const
    { return *GetNativePointerField<FPrimalMapMarkerEntryData*>(this, "APrimalReverseVacuumCompartment.MapMarkerLocationInfo"); }
    float& MaxActivationDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.MaxActivationDistance"); }
    int& MaxBoxNameLengthField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaxBoxNameLength"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.MaxHealth"); }
    int& MaxItemCountField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaxItemCount"); }
    int& MaximumConnectedCubesField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaximumConnectedCubes"); }
    int& MaximumConnectedMergedCubesField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MaximumConnectedMergedCubes"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.MultiSoftDestructionGeoCollectionAssets")); }
    UChildActorComponent*& MyChildEmitterSpawnableField() const
    { return *GetNativePointerField<UChildActorComponent**>(this, "APrimalReverseVacuumCompartment.MyChildEmitterSpawnable"); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalReverseVacuumCompartment.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalReverseVacuumCompartment.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalReverseVacuumCompartment.MyHarvestingComponent"); }
    UPrimalInventoryComponent*& MyInventoryComponentField() const
    { return *GetNativePointerField<UPrimalInventoryComponent**>(this, "APrimalReverseVacuumCompartment.MyInventoryComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalReverseVacuumCompartment.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalReverseVacuumCompartment.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalReverseVacuumCompartment.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetCullDistanceSquaredDormant"); }
    double& NetDestructionTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.NetDestructionTime"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalReverseVacuumCompartment.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalReverseVacuumCompartment.NetworkSpatializationParent"); }
    BrzCampoPonteiro NextConsumeFuelGiveItemTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.NextConsumeFuelGiveItemType")); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.NotifyCarriedByDinoChanged")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OnTargetingTeamChanged")); }
    TObjectPtr<UTexture2D>& OpenIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.OpenIcon"); }
    USoundBase*& OpenPortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.OpenPortholeSound"); }
    TObjectPtr<UTexture2D>& OpenSceneActionIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.OpenSceneActionIcon"); }
    FString& OpenSceneActionNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.OpenSceneActionName"); }
    TObjectPtr<UTexture2D>& OpenWindowIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.OpenWindowIcon"); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.OriginalPlacerPlayerID"); }
    TArray<USoundBase*>& OverrideAudioTemplatesField() const
    { return *GetNativePointerField<TArray<USoundBase*>*>(this, "APrimalReverseVacuumCompartment.OverrideAudioTemplates"); }
    TArray<void*>& OverrideParticleLightColorField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.OverrideParticleLightColor"); }
    TArray<void*>& OverrideParticleTemplateItemClassesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.OverrideParticleTemplateItemClasses"); }
    BrzCampoPonteiro OverrideParticleTemplatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OverrideParticleTemplates")); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalReverseVacuumCompartment.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalReverseVacuumCompartment.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalReverseVacuumCompartment.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalReverseVacuumCompartment.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalReverseVacuumCompartment.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalReverseVacuumCompartment.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalReverseVacuumCompartment.PlaceUsingItemID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalReverseVacuumCompartment.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PlacementYawOffsetIncrement"); }
    TArray<APrimalStructureUnderwaterBase*>& PortholeLinksField() const
    { return *GetNativePointerField<TArray<APrimalStructureUnderwaterBase*>*>(this, "APrimalReverseVacuumCompartment.PortholeLinks"); }
    TArray<void*>& PortholeNameIconColorOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.PortholeNameIconColorOverrides"); }
    TArray<void*>& PortholeNameOverridesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.PortholeNameOverrides"); }
    TArray<void*>& PortholeSaveStateField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.PortholeSaveState"); }
    TArray<void*>& PortholeStateField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.PortholeState"); }
    TArray<void*>& PortholesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.Portholes"); }
    float& PoweredBatteryDurabilityToDecreasePerSecondField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PoweredBatteryDurabilityToDecreasePerSecond"); }
    float& PoweredNearbyStructureRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.PoweredNearbyStructureRange"); }
    BrzCampoPonteiro PoweredNearbyStructureTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PoweredNearbyStructureTemplate")); }
    int& PoweredOverrideCounterField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.PoweredOverrideCounter"); }
    TObjectPtr<UTexture2D>& PreventWirelessCraftingIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.PreventWirelessCraftingIcon"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.PreviewCameraRotation")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalReverseVacuumCompartment.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalReverseVacuumCompartment.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalReverseVacuumCompartment.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalReverseVacuumCompartment.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalReverseVacuumCompartment.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalReverseVacuumCompartment.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalReverseVacuumCompartment.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalReverseVacuumCompartment.PrimarySnappedStructureParent"); }
    float& RandomFuelUpdateTimeMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.RandomFuelUpdateTimeMax"); }
    float& RandomFuelUpdateTimeMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.RandomFuelUpdateTimeMin"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.RepGraphBehavior")); }
    BrzCampoPonteiro ReplicatedFuelItemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ReplicatedFuelItemClass")); }
    short& ReplicatedFuelItemColorIndexField() const
    { return *GetNativePointerField<short*>(this, "APrimalReverseVacuumCompartment.ReplicatedFuelItemColorIndex"); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ReplicationIntervalMultiplier"); }
    BrzCampoPonteiro RequiresItemForOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.RequiresItemForOpenSceneAction")); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalReverseVacuumCompartment.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalReverseVacuumCompartment.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.SavedStructureMinAllowedVersion"); }
    TObjectPtr<UTexture2D>& ShowConnectedFramesIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.ShowConnectedFramesIcon"); }
    TObjectPtr<UTexture2D>& ShowFrameIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalReverseVacuumCompartment.ShowFrameIcon"); }
    BrzCampoPonteiro ShutdownTimerIndicatorIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.ShutdownTimerIndicatorIcon")); }
    float& SinglePlayerFuelConsumptionIntervalsMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SinglePlayerFuelConsumptionIntervalsMultiplier"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinInventoryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.SkinInventoryData")); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.SkinPersistentData")); }
    double& SkipConsumeFuelUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.SkipConsumeFuelUntilTime"); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.SnappedChooseRotationPlacementData")); }
    float& SolarRefreshIntervalField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SolarRefreshInterval"); }
    float& SolarRefreshIntervalMaxField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SolarRefreshIntervalMax"); }
    float& SolarRefreshIntervalMinField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.SolarRefreshIntervalMin"); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalReverseVacuumCompartment.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalReverseVacuumCompartment.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalReverseVacuumCompartment.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalReverseVacuumCompartment.StructureID"); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalReverseVacuumCompartment.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.TargetingTeam"); }
    BrzCampoPonteiro TeleportInsideIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.TeleportInsideIcon")); }
    BrzCampoPonteiro TeleportOutsideIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.TeleportOutsideIcon")); }
    float& TimeCooldownRequestFuelRemainingField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.TimeCooldownRequestFuelRemaining"); }
    double& TimeUntilDeactivationAfterPowerOffField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.TimeUntilDeactivationAfterPowerOff"); }
    BrzCampoPonteiro TimeUntilDeactivationAfterPowerOffTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.TimeUntilDeactivationAfterPowerOffTimer")); }
    //  no cache antigo este campo se chamava TopWaterPlaneZOffset.
    //  nesta build ele e' `MaximumConnectedCubes` — resolve por NOME.
    BrzCampoPonteiro TopWaterPlaneZOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.MaximumConnectedCubes")); }
    unsigned char& TribeGroupInventoryRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.TribeGroupInventoryRank"); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalReverseVacuumCompartment.TribeGroupStructureRank"); }
    BrzCampoPonteiro UISceneTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.UISceneTemplate")); }
    BrzCampoPonteiro UnLockSoundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.UnLockSound")); }
    BrzCampoPonteiro UnfloodedEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.UnfloodedEmitter")); }
    USoundBase*& UnfreezePortholeSoundField() const
    { return *GetNativePointerField<USoundBase**>(this, "APrimalReverseVacuumCompartment.UnfreezePortholeSound"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalReverseVacuumCompartment.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalReverseVacuumCompartment.UpdateOverlapsMethodDuringLevelStreaming"); }
    BrzCampoPonteiro UseBPApplyPinCodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.UseBPApplyPinCode")); }
    BrzCampoPonteiro UseBPOverrideTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.UseBPOverrideTargetLocation")); }
    float& ValidCraftingResourceMaxDurabilityField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.ValidCraftingResourceMaxDurability"); }
    TArray<TWeakObjectPtr<void>>& ValidatedByPinCodePlayerControllersField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalReverseVacuumCompartment.ValidatedByPinCodePlayerControllers"); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalReverseVacuumCompartment.Variants"); }
    float& WaterFrictionField() const
    { return *GetNativePointerField<float*>(this, "APrimalReverseVacuumCompartment.WaterFriction"); }
    BrzCampoPonteiro WaterVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.WaterVolume")); }
    BrzCampoPonteiro WaterVolumeInteriorBoxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.WaterVolumeInteriorBox")); }
    //  no cache antigo este campo se chamava WindCompSurfaceState.
    //  nesta build ele e' `CloseIcon` — resolve por NOME.
    BrzCampoPonteiro WindCompSurfaceStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.CloseIcon")); }
    //  no cache antigo este campo se chamava WindCompsReusableBuffer.
    //  nesta build ele e' `OpenIcon` — resolve por NOME.
    BrzCampoPonteiro WindCompsReusableBufferField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.OpenIcon")); }
    BrzCampoPonteiro WirelessExchangeRefsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.WirelessExchangeRefs")); }
    BrzCampoPonteiro WirelessExchangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.WirelessExchanges")); }
    BrzCampoPonteiro bActiveRequiresPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bActiveRequiresPower")); }
    BrzCampoPonteiro bActorEnableCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bActorEnableCollision")); }
    BrzCampoPonteiro bActorIsBeingDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bActorIsBeingDestroyed")); }
    BrzCampoPonteiro bActorPreventPhysicsSceneRegistrationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bActorPreventPhysicsSceneRegistration")); }
    BrzCampoPonteiro bAdjustDamageAsPlayerWithEquipmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAdjustDamageAsPlayerWithEquipment")); }
    BrzCampoPonteiro bAllowAttachToSaddleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowAttachToSaddle")); }
    BrzCampoPonteiro bAllowAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAllowChooseRotationWhenSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowChooseRotationWhenSnapped")); }
    BrzCampoPonteiro bAllowCustomNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowCustomName")); }
    BrzCampoPonteiro bAllowPickingUpStructureAfterPlacementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowPickingUpStructureAfterPlacement")); }
    BrzCampoPonteiro bAllowReceiveTickEventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowReceiveTickEventOnDedicatedServer")); }
    BrzCampoPonteiro bAllowSnapRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowSnapRotation")); }
    BrzCampoPonteiro bAllowStructureSkinsWithoutTeamCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowStructureSkinsWithoutTeamCheck")); }
    BrzCampoPonteiro bAllowTickBeforeBeginPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowTickBeforeBeginPlay")); }
    BrzCampoPonteiro bAllowWeldRoundRobinField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowWeldRoundRobin")); }
    BrzCampoPonteiro bAllowWeldingToShipsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAllowWeldingToShips")); }
    BrzCampoPonteiro bAlwaysCreatePhysicsStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAlwaysCreatePhysicsState")); }
    BrzCampoPonteiro bAlwaysRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAlwaysRelevant")); }
    BrzCampoPonteiro bAlwaysRelevantPrimalStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAlwaysRelevantPrimalStructure")); }
    BrzCampoPonteiro bApplyNiagaraColorInBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bApplyNiagaraColorInBP")); }
    BrzCampoPonteiro bAreInteriorWallsHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAreInteriorWallsHidden")); }
    BrzCampoPonteiro bAsyncPhysicsTickEnabledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAsyncPhysicsTickEnabled")); }
    BrzCampoPonteiro bAttachmentReplicationUseNetworkParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAttachmentReplicationUseNetworkParent")); }
    BrzCampoPonteiro bAutoActivateContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoActivateContainer")); }
    BrzCampoPonteiro bAutoActivateIfPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoActivateIfPowered")); }
    BrzCampoPonteiro bAutoActivateWhenFueledField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoActivateWhenFueled")); }
    BrzCampoPonteiro bAutoActivateWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoActivateWhenNoPower")); }
    BrzCampoPonteiro bAutoDestroyWhenFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoDestroyWhenFinished")); }
    BrzCampoPonteiro bAutoStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bAutoStasis")); }
    BrzCampoPonteiro bBPInventoryItemUsedHandlesDurabilityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPInventoryItemUsedHandlesDurability")); }
    BrzCampoPonteiro bBPIsValidWaterSourceForPipeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPIsValidWaterSourceForPipe")); }
    BrzCampoPonteiro bBPNotifyRemoteViewerChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPNotifyRemoteViewerChange")); }
    BrzCampoPonteiro bBPOnContainerActiveHealthDecreaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPOnContainerActiveHealthDecrease")); }
    BrzCampoPonteiro bBPPostInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPPostInitializeComponents")); }
    BrzCampoPonteiro bBPPreInitializeComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBPPreInitializeComponents")); }
    BrzCampoPonteiro bBlockInputField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBlockInput")); }
    BrzCampoPonteiro bBlueprintMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bBlueprintMultiUseEntries")); }
    BrzCampoPonteiro bCallPreReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCallPreReplication")); }
    BrzCampoPonteiro bCallPreReplicationForReplayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCallPreReplicationForReplay")); }
    BrzCampoPonteiro bCanAttachToExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanAttachToExosuit")); }
    BrzCampoPonteiro bCanBeDamagedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanBeDamaged")); }
    BrzCampoPonteiro bCanBeInClusterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanBeInCluster")); }
    BrzCampoPonteiro bCanBeRepairedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanBeRepaired")); }
    BrzCampoPonteiro bCanBeStoredByExosuitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanBeStoredByExosuit")); }
    BrzCampoPonteiro bCanToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCanToggleActivation")); }
    BrzCampoPonteiro bCarriedByDinoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCarriedByDino")); }
    BrzCampoPonteiro bCenterOffscreenFloatingHUDWidgetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCenterOffscreenFloatingHUDWidgets")); }
    BrzCampoPonteiro bCheckStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCheckStartedUnderwater")); }
    BrzCampoPonteiro bClientBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bClientBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bClientReceivedStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bClientReceivedStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bClimbableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bClimbable")); }
    BrzCampoPonteiro bCollideWhenPlacingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCollideWhenPlacing")); }
    BrzCampoPonteiro bContainerActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bContainerActivated")); }
    BrzCampoPonteiro bCraftingSubstractConnectedWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bCraftingSubstractConnectedWater")); }
    BrzCampoPonteiro bDebugField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDebug")); }
    BrzCampoPonteiro bDemolishJustDestroyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDemolishJustDestroy")); }
    BrzCampoPonteiro bDesiredRepGraphBehaviorHasBeenSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDesiredRepGraphBehaviorHasBeenSet")); }
    BrzCampoPonteiro bDestroyDontClearNetworkChildrenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDestroyDontClearNetworkChildren")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDestroyWhenAllItemsRemoved")); }
    BrzCampoPonteiro bDestroyWhenAllItemsRemovedExceptDefaultsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDestroyWhenAllItemsRemovedExceptDefaults")); }
    BrzCampoPonteiro bDidSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDidSpawnEffects")); }
    BrzCampoPonteiro bDisableActivationUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisableActivationUnderwater")); }
    BrzCampoPonteiro bDisableRigidBodyAnimNodesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisableRigidBodyAnimNodes")); }
    BrzCampoPonteiro bDisableStructureOnElectricStormField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisableStructureOnElectricStorm")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUIField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisplayActivationOnInventoryUI")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUISecondaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisplayActivationOnInventoryUISecondary")); }
    BrzCampoPonteiro bDisplayActivationOnInventoryUITertiaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDisplayActivationOnInventoryUITertiary")); }
    BrzCampoPonteiro bDontResetPickupTimerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDontResetPickupTimer")); }
    BrzCampoPonteiro bDontSetDamageParametersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDontSetDamageParameters")); }
    BrzCampoPonteiro bDrawFuelRemainingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDrawFuelRemaining")); }
    BrzCampoPonteiro bDrinkingWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDrinkingWater")); }
    BrzCampoPonteiro bDropInventoryOnDestructionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bDropInventoryOnDestruction")); }
    BrzCampoPonteiro bEditorOnlyActorShowInPIEField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bEditorOnlyActorShowInPIE")); }
    BrzCampoPonteiro bEnableAutoLODGenerationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bEnableAutoLODGeneration")); }
    BrzCampoPonteiro bEnableMultiUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bEnableMultiUse")); }
    BrzCampoPonteiro bExchangedRolesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bExchangedRoles")); }
    BrzCampoPonteiro bFindCameraComponentWhenViewTargetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bFindCameraComponentWhenViewTarget")); }
    BrzCampoPonteiro bForceAllowNetMulticastField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceAllowNetMulticast")); }
    BrzCampoPonteiro bForceFloatingDamageNumbersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceFloatingDamageNumbers")); }
    BrzCampoPonteiro bForceFloorCollisionGroupField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceFloorCollisionGroup")); }
    BrzCampoPonteiro bForceHiddenReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceHiddenReplication")); }
    BrzCampoPonteiro bForceHighQualityViewerReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceHighQualityViewerReplication")); }
    BrzCampoPonteiro bForceInfiniteDrawDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceInfiniteDrawDistance")); }
    BrzCampoPonteiro bForceNetAddressableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceNetAddressable")); }
    BrzCampoPonteiro bForceNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceNetworkSpatialization")); }
    BrzCampoPonteiro bForceNeverLockField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceNeverLock")); }
    BrzCampoPonteiro bForceNoPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceNoPinLocking")); }
    BrzCampoPonteiro bForceNonBlockingHitsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceNonBlockingHits")); }
    BrzCampoPonteiro bForcePreventAutoActivateWhenConnectedToWaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForcePreventAutoActivateWhenConnectedToWater")); }
    BrzCampoPonteiro bForcePreventSeamlessTravelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForcePreventSeamlessTravel")); }
    BrzCampoPonteiro bForceReplicateDormantChildrenWithoutSpatialRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceReplicateDormantChildrenWithoutSpatialRelevancy")); }
    BrzCampoPonteiro bForceSnappedStructureToGroundField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceSnappedStructureToGround")); }
    BrzCampoPonteiro bForceZeroDamageProcessingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForceZeroDamageProcessing")); }
    BrzCampoPonteiro bForcedHudDrawingRequiresSameTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bForcedHudDrawingRequiresSameTeam")); }
    BrzCampoPonteiro bFuelAllowActivationWhenNoPowerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bFuelAllowActivationWhenNoPower")); }
    BrzCampoPonteiro bGenerateOverlapEventsDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bGenerateOverlapEventsDuringLevelStreaming")); }
    BrzCampoPonteiro bHasAnyStructuresPlacedOnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHasAnyStructuresPlacedOnFloor")); }
    BrzCampoPonteiro bHasFuelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHasFuel")); }
    BrzCampoPonteiro bHasHighVolumeRPCsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHasHighVolumeRPCs")); }
    BrzCampoPonteiro bHasResetDecayTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHasResetDecayTime")); }
    BrzCampoPonteiro bHibernateChangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHibernateChange")); }
    BrzCampoPonteiro bHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHidden")); }
    BrzCampoPonteiro bHideAutoActivateToggleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHideAutoActivateToggle")); }
    BrzCampoPonteiro bHidePowerJunctionConnectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bHidePowerJunctionConnection")); }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalReverseVacuumCompartment.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
    BrzCampoPonteiro bIgnoreDestructionEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoreDestructionEffects")); }
    BrzCampoPonteiro bIgnoreDyingWhenDemolishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoreDyingWhenDemolished")); }
    BrzCampoPonteiro bIgnoreNetworkRangeScalingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoreNetworkRangeScaling")); }
    BrzCampoPonteiro bIgnoreSpawnEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoreSpawnEffects")); }
    BrzCampoPonteiro bIgnoredByCharacterEncroachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoredByCharacterEncroachment")); }
    BrzCampoPonteiro bIgnoredByTargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoredByTargeting")); }
    BrzCampoPonteiro bIgnoresOriginShiftingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIgnoresOriginShifting")); }
    BrzCampoPonteiro bInventoryForcePreventItemAppendsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bInventoryForcePreventItemAppends")); }
    BrzCampoPonteiro bInventoryForcePreventRemoteAddItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bInventoryForcePreventRemoteAddItems")); }
    BrzCampoPonteiro bIsActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsActivated")); }
    BrzCampoPonteiro bIsAmmoContainerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsAmmoContainer")); }
    BrzCampoPonteiro bIsBedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsBed")); }
    BrzCampoPonteiro bIsDeadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsDead")); }
    BrzCampoPonteiro bIsDestroyedFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsDestroyedFromChildActorComponent")); }
    BrzCampoPonteiro bIsDoorframeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsDoorframe")); }
    BrzCampoPonteiro bIsEditorOnlyActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsEditorOnlyActor")); }
    BrzCampoPonteiro bIsFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsFlipped")); }
    BrzCampoPonteiro bIsFloodedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsFlooded")); }
    BrzCampoPonteiro bIsFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsFloor")); }
    BrzCampoPonteiro bIsFoundationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsFoundation")); }
    BrzCampoPonteiro bIsFromChildActorComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsFromChildActorComponent")); }
    BrzCampoPonteiro bIsInvincibleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsInvincible")); }
    BrzCampoPonteiro bIsLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsLocked")); }
    BrzCampoPonteiro bIsMapActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsMapActor")); }
    BrzCampoPonteiro bIsPinLockedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsPinLocked")); }
    BrzCampoPonteiro bIsPowerJunctionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsPowerJunction")); }
    BrzCampoPonteiro bIsPoweredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsPowered")); }
    BrzCampoPonteiro bIsPreviewStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsPreviewStructure")); }
    BrzCampoPonteiro bIsRepairingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsRepairing")); }
    BrzCampoPonteiro bIsStructureAttachmentBaseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsStructureAttachmentBase")); }
    BrzCampoPonteiro bIsTeleporterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsTeleporter")); }
    BrzCampoPonteiro bIsTrappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsTrapped")); }
    BrzCampoPonteiro bIsUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsUnderwater")); }
    BrzCampoPonteiro bIsValidUnstasisCasterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bIsValidUnstasisCaster")); }
    BrzCampoPonteiro bLastToggleActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bLastToggleActivated")); }
    BrzCampoPonteiro bLinkedStructureRemovalForceClientUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bLinkedStructureRemovalForceClientUpdate")); }
    BrzCampoPonteiro bLoadedFromSaveGameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bLoadedFromSaveGame")); }
    BrzCampoPonteiro bMultiUseCenterHUDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bMultiUseCenterHUD")); }
    BrzCampoPonteiro bNetCriticalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetCritical")); }
    BrzCampoPonteiro bNetLoadOnClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetLoadOnClient")); }
    BrzCampoPonteiro bNetTemporaryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetTemporary")); }
    BrzCampoPonteiro bNetUseClientRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetUseClientRelevancy")); }
    BrzCampoPonteiro bNetUseOwnerRelevancyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetUseOwnerRelevancy")); }
    BrzCampoPonteiro bNetworkSpatializationForceRelevancyCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNetworkSpatializationForceRelevancyCheck")); }
    BrzCampoPonteiro bNoCollisionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bNoCollision")); }
    BrzCampoPonteiro bOnlyAllowTeamActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyAllowTeamActivation")); }
    BrzCampoPonteiro bOnlyConsumeDurabilityOnEquipmentForEnemiesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyConsumeDurabilityOnEquipmentForEnemies")); }
    BrzCampoPonteiro bOnlyInitialReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyInitialReplication")); }
    BrzCampoPonteiro bOnlyRelevantToOwnerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyRelevantToOwner")); }
    BrzCampoPonteiro bOnlyReplicateOnNetForcedUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyReplicateOnNetForcedUpdate")); }
    BrzCampoPonteiro bOnlyUseSpoilingMultipliersIfActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOnlyUseSpoilingMultipliersIfActivated")); }
    BrzCampoPonteiro bOverrideFoundationSupportDistanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bOverrideFoundationSupportDistance")); }
    BrzCampoPonteiro bPendingRemovalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPendingRemoval")); }
    BrzCampoPonteiro bPlacementAdjustHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPlacementAdjustHeight")); }
    BrzCampoPonteiro bPlacementChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPlacementChooseRotation")); }
    BrzCampoPonteiro bPlacementIgnoreChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPlacementIgnoreChooseRotation")); }
    BrzCampoPonteiro bPlacementPreventLockingCameraWhileChooseRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPlacementPreventLockingCameraWhileChooseRotation")); }
    BrzCampoPonteiro bPoweredAllowBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredAllowBattery")); }
    BrzCampoPonteiro bPoweredAllowBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredAllowBot")); }
    BrzCampoPonteiro bPoweredAllowSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredAllowSolar")); }
    BrzCampoPonteiro bPoweredHasBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredHasBattery")); }
    BrzCampoPonteiro bPoweredHasBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredHasBot")); }
    BrzCampoPonteiro bPoweredUsingBatteryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredUsingBattery")); }
    BrzCampoPonteiro bPoweredUsingBotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredUsingBot")); }
    BrzCampoPonteiro bPoweredUsingSolarField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredUsingSolar")); }
    BrzCampoPonteiro bPoweredWaterSourceWhenActiveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPoweredWaterSourceWhenActive")); }
    BrzCampoPonteiro bPreventActorStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventActorStasis")); }
    BrzCampoPonteiro bPreventAddingPortholeMUEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventAddingPortholeMUEntries")); }
    BrzCampoPonteiro bPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventCharacterBasing")); }
    BrzCampoPonteiro bPreventCharacterBasingAllowSteppingUpField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventCharacterBasingAllowSteppingUp")); }
    BrzCampoPonteiro bPreventCliffPlatformsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventCliffPlatforms")); }
    BrzCampoPonteiro bPreventContainerPingTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventContainerPingType")); }
    BrzCampoPonteiro bPreventLevelBoundsRelevantField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventLevelBoundsRelevant")); }
    BrzCampoPonteiro bPreventLinkingToStorageInterfaceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventLinkingToStorageInterface")); }
    BrzCampoPonteiro bPreventNPCSpawnFloorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventNPCSpawnFloor")); }
    BrzCampoPonteiro bPreventOnDedicatedServerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventOnDedicatedServer")); }
    BrzCampoPonteiro bPreventRegularForceNetUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventRegularForceNetUpdate")); }
    BrzCampoPonteiro bPreventSavingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventSaving")); }
    BrzCampoPonteiro bPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventStasis")); }
    BrzCampoPonteiro bPreventStructureHibernationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventStructureHibernation")); }
    BrzCampoPonteiro bPreventToggleActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventToggleActivation")); }
    BrzCampoPonteiro bPreventUsingAsWirelessCraftingSourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreventUsingAsWirelessCraftingSource")); }
    BrzCampoPonteiro bPreviewApplyColorToChildComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bPreviewApplyColorToChildComponents")); }
    BrzCampoPonteiro bRealtimeThrottledTickUseNativeTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bRealtimeThrottledTickUseNativeTick")); }
    BrzCampoPonteiro bRelevantForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bRelevantForLevelBounds")); }
    BrzCampoPonteiro bRelevantForNetworkReplaysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bRelevantForNetworkReplays")); }
    BrzCampoPonteiro bReplayRewindableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplayRewindable")); }
    BrzCampoPonteiro bReplicateHiddenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicateHidden")); }
    BrzCampoPonteiro bReplicateItemFuelClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicateItemFuelClass")); }
    BrzCampoPonteiro bReplicateLastActivatedTimeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicateLastActivatedTime")); }
    BrzCampoPonteiro bReplicateMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicateMovement")); }
    BrzCampoPonteiro bReplicateUsingRegisteredSubObjectListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicateUsingRegisteredSubObjectList")); }
    BrzCampoPonteiro bReplicatesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bReplicates")); }
    BrzCampoPonteiro bRequiresItemExactClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bRequiresItemExactClass")); }
    BrzCampoPonteiro bSavedWhenStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bSavedWhenStasised")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bServerBPNotifyInventoryItemChanges")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseQuantityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bServerBPNotifyInventoryItemChangesUseQuantity")); }
    BrzCampoPonteiro bServerBPNotifyInventoryItemChangesUseSwappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bServerBPNotifyInventoryItemChangesUseSwapped")); }
    BrzCampoPonteiro bStartedUnderwaterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStartedUnderwater")); }
    BrzCampoPonteiro bStasisComponentRadiusForceDistanceCheckField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStasisComponentRadiusForceDistanceCheck")); }
    BrzCampoPonteiro bStasisedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStasised")); }
    BrzCampoPonteiro bStationaryStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStationaryStructure")); }
    BrzCampoPonteiro bStructureCosmeticOverrideStructureColorSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStructureCosmeticOverrideStructureColorSets")); }
    BrzCampoPonteiro bStructureFiresProjectilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStructureFiresProjectiles")); }
    BrzCampoPonteiro bStructureIgnoreDyingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bStructureIgnoreDying")); }
    BrzCampoPonteiro bSupportsLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bSupportsLocking")); }
    BrzCampoPonteiro bSupportsPinActivationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bSupportsPinActivation")); }
    BrzCampoPonteiro bSupportsPinLockingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bSupportsPinLocking")); }
    BrzCampoPonteiro bSupportsStorageInterfaceLinkingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bSupportsStorageInterfaceLinking")); }
    BrzCampoPonteiro bTearOffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bTearOff")); }
    BrzCampoPonteiro bUnstreamComponentsUseEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUnstreamComponentsUseEndOverlap")); }
    BrzCampoPonteiro bUseActorNotifyCustomEventBPField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseActorNotifyCustomEventBP")); }
    BrzCampoPonteiro bUseAmmoContainerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseAmmoContainerBuff")); }
    BrzCampoPonteiro bUseAttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseAttachmentReplication")); }
    BrzCampoPonteiro bUseBPActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPActivated")); }
    BrzCampoPonteiro bUseBPAllowActorSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPAllowActorSpawn")); }
    BrzCampoPonteiro bUseBPCanAddWirelessExchangeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPCanAddWirelessExchange")); }
    BrzCampoPonteiro bUseBPCanBeActivatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPCanBeActivated")); }
    BrzCampoPonteiro bUseBPCanBeActivatedByPlayerField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPCanBeActivatedByPlayer")); }
    BrzCampoPonteiro bUseBPChangedActorTeamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPChangedActorTeam")); }
    BrzCampoPonteiro bUseBPCheckForErrorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPCheckForErrors")); }
    BrzCampoPonteiro bUseBPCustomIsRelevantForClientField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPCustomIsRelevantForClient")); }
    BrzCampoPonteiro bUseBPDrawEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPDrawEntry")); }
    BrzCampoPonteiro bUseBPFilterMultiUseEntriesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPFilterMultiUseEntries")); }
    BrzCampoPonteiro bUseBPForceAllowsInventoryUseField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPForceAllowsInventoryUse")); }
    BrzCampoPonteiro bUseBPGetBonesToHideOnAllocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetBonesToHideOnAllocation")); }
    BrzCampoPonteiro bUseBPGetCameraCollisionIgnoreActorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetCameraCollisionIgnoreActors")); }
    BrzCampoPonteiro bUseBPGetFuelConsumptionMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetFuelConsumptionMultiplier")); }
    BrzCampoPonteiro bUseBPGetHUDDrawLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetHUDDrawLocationOffset")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetMultiUseCenterText")); }
    BrzCampoPonteiro bUseBPGetMultiUseCenterTextWithNameField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetMultiUseCenterTextWithName")); }
    BrzCampoPonteiro bUseBPGetOrbitCamTargetLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetOrbitCamTargetLocation")); }
    BrzCampoPonteiro bUseBPGetQuantityOfItemWithoutCheckingInventoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetQuantityOfItemWithoutCheckingInventory")); }
    BrzCampoPonteiro bUseBPGetShowDebugAnimationComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPGetShowDebugAnimationComponents")); }
    BrzCampoPonteiro bUseBPInventoryItemDroppedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPInventoryItemDropped")); }
    BrzCampoPonteiro bUseBPInventoryItemUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPInventoryItemUsed")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPNotifyWirelessConsumerAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessConsumerRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPNotifyWirelessConsumerRemoved")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceAddedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPNotifyWirelessSourceAdded")); }
    BrzCampoPonteiro bUseBPNotifyWirelessSourceRemovedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPNotifyWirelessSourceRemoved")); }
    BrzCampoPonteiro bUseBPOnClientUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPOnClientUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOnServerUpdatedLinkedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPOnServerUpdatedLinkedStructures")); }
    BrzCampoPonteiro bUseBPOverrideTargetingLocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPOverrideTargetingLocation")); }
    BrzCampoPonteiro bUseBPOverrideUILocationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPOverrideUILocation")); }
    BrzCampoPonteiro bUseBPPostPreviewStructureFlippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPPostPreviewStructureFlipped")); }
    BrzCampoPonteiro bUseBPPreventAttachmentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPPreventAttachments")); }
    BrzCampoPonteiro bUseBPPreventCharacterBasingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPPreventCharacterBasing")); }
    BrzCampoPonteiro bUseBPPreventStasisField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPPreventStasis")); }
    BrzCampoPonteiro bUseBPSetPlayerConstructorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseBPSetPlayerConstructor")); }
    BrzCampoPonteiro bUseCanMoveThroughActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseCanMoveThroughActor")); }
    BrzCampoPonteiro bUseCollisionCompsForFloatingDPSField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseCollisionCompsForFloatingDPS")); }
    BrzCampoPonteiro bUseColorRegionForEmitterColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseColorRegionForEmitterColor")); }
    BrzCampoPonteiro bUseCooldownOnTransferAllField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseCooldownOnTransferAll")); }
    BrzCampoPonteiro bUseDeathCacheCharacterIDField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseDeathCacheCharacterID")); }
    BrzCampoPonteiro bUseHarvestingComponentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseHarvestingComponent")); }
    BrzCampoPonteiro bUseMeshOriginForInventoryAccessTraceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseMeshOriginForInventoryAccessTrace")); }
    BrzCampoPonteiro bUseNetworkSpatializationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseNetworkSpatialization")); }
    BrzCampoPonteiro bUseOnlyPointForLevelBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseOnlyPointForLevelBounds")); }
    BrzCampoPonteiro bUseOpenSceneActionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseOpenSceneAction")); }
    BrzCampoPonteiro bUseStasisGridField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUseStasisGrid")); }
    BrzCampoPonteiro bUsesHealthField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUsesHealth")); }
    BrzCampoPonteiro bUsingStructureColorsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bUsingStructureColors")); }
    BrzCampoPonteiro bWantsPerformanceThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWantsPerformanceThrottledTick")); }
    BrzCampoPonteiro bWantsRealtimeThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWantsRealtimeThrottledTick")); }
    BrzCampoPonteiro bWantsServerThrottledTickField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWantsServerThrottledTick")); }
    BrzCampoPonteiro bWasAttachedToPawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWasAttachedToPawn")); }
    BrzCampoPonteiro bWasPlacementSnappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWasPlacementSnapped")); }
    BrzCampoPonteiro bWithinPreventionVolumeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalReverseVacuumCompartment.bWithinPreventionVolume")); }
    BitFieldValue<bool, unsigned __int32> bAreInteriorWallsHidden()
    { return { (void*)this, "bAreInteriorWallsHidden" }; }
    BitFieldValue<bool, unsigned __int32> bIsActivated()
    { return { (void*)this, "bIsActivated" }; }
    BitFieldValue<bool, unsigned __int32> bIsFlooded()
    { return { (void*)this, "bIsFlooded" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAddingPortholeMUEntries()
    { return { (void*)this, "bPreventAddingPortholeMUEntries" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALREVERSEVACUUMCOMPARTMENT_H
