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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=413+grafo=6/6]]
    BrzPonteiro ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<void*, void*, int, bool, int>(this, "APrimalReverseVacuumCompartment.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AreBasesOpenToEachOther(APrimalReverseVacuumCompartment*,int,int
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=1386+bytes40+grafo=6/6]]
    BrzPonteiro AreBasesOpenToEachOther(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalReverseVacuumCompartment.AreBasesOpenToEachOther(APrimalReverseVacuumCompartment*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.AreBasesOpenToEachOtherByIndex(int,APrimalReverseVacuumCompartme
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro CountMergedConnectedCubes(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.CountMergedConnectedCubes(TSet<APrimalReverseVacuumCompartment*,DefaultKeyFuncs<APrimalReverseVacuumCompartment*,0>,FDefaultSetAllocator>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.DeActivateAfterPowerOffTimerExpired()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=151+grafo=3/3]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: cache_pdb_25090264
    BrzPonteiro GetInstanceWaterPlacementMinimumWaterHeight() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.GetInstanceWaterPlacementMinimumWaterHeight()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.GetLinkedBaseByPortholeIndex(int,int&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=44]]
    BrzPonteiro IsInsideBase_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalReverseVacuumCompartment.IsInsideBase_Implementation(UE::Math::TVector<double>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.IsMergedVacuumOverLimit(FPorthole&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
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
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=199+chamadores=2]]
    BrzPonteiro OnRep_AreInteriorWallsHidden() const
    {
        return NativeCall<void*>(this, "APrimalReverseVacuumCompartment.OnRep_AreInteriorWallsHidden()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.OnRep_IsFlooded()
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [string_aprovado [tam=2119+grafo=29/29]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetPortholeState(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetPortholeState_Implementation(int,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro SetPortholeState_Implementation(int a0, int a1) const
    {
        return NativeCall<void*, int, int>(this, "APrimalReverseVacuumCompartment.SetPortholeState_Implementation(int,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetStructureCollisionChannels(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    BrzPonteiro SetStructureCollisionChannels(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalReverseVacuumCompartment.SetStructureCollisionChannels(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.SetWaterVolumesVisibility(APlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [grafo=5/5]]
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
    // endereco: cache_pdb_25090264
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
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=211]]
    BrzPonteiro UpdateLockState(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalReverseVacuumCompartment.UpdateLockState(APlayerController*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalReverseVacuumCompartment.UpdateWaterLines()
    // endereco: cache_pdb_25090264
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
    BitFieldValue<bool, unsigned __int32> AllowOverrideParticleLightColor()
    { return { (void*)this, "AllowOverrideParticleLightColor" }; }
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
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
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
    BitFieldValue<bool, unsigned __int32> UseBPApplyPinCode()
    { return { (void*)this, "UseBPApplyPinCode" }; }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
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
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAutoActivateWhenNoPower()
    { return { (void*)this, "bAllowAutoActivateWhenNoPower" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCustomName()
    { return { (void*)this, "bAllowCustomName" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPickingUpStructureAfterPlacement()
    { return { (void*)this, "bAllowPickingUpStructureAfterPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowReceiveTickEventOnDedicatedServer()
    { return { (void*)this, "bAllowReceiveTickEventOnDedicatedServer" }; }
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
    BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration()
    { return { (void*)this, "bEnableAutoLODGeneration" }; }
    BitFieldValue<bool, unsigned __int32> bEnableMultiUse()
    { return { (void*)this, "bEnableMultiUse" }; }
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
    BitFieldValue<bool, unsigned __int32> bHidePowerJunctionConnection()
    { return { (void*)this, "bHidePowerJunctionConnection" }; }
    bool& bHideUnusedParticleTypesOnRefreshActiveEffectsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalReverseVacuumCompartment.bHideUnusedParticleTypesOnRefreshActiveEffects"); }
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
    BitFieldValue<bool, unsigned __int32> bOnlyUseSpoilingMultipliersIfActivated()
    { return { (void*)this, "bOnlyUseSpoilingMultipliersIfActivated" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideFoundationSupportDistance()
    { return { (void*)this, "bOverrideFoundationSupportDistance" }; }
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
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventContainerPingType()
    { return { (void*)this, "bPreventContainerPingType" }; }
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
    BitFieldValue<bool, unsigned __int32> bUsesHealth()
    { return { (void*)this, "bUsesHealth" }; }
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
