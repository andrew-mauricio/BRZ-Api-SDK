// ==========================================================================
//  APrimalStructureTemplate — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETEMPLATE_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETEMPLATE_H

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
struct FPrimalStructureSnapPointOverride;
struct UInputComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UParticleSystem;
struct UPrimalHarvestingComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct USoundCue;
struct UStaticMeshComponent;
struct UStructurePaintingComponent;


struct APrimalStructureTemplate
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTemplate"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.AddToInterimTemplate(APrimalStructure*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToInterimTemplate(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalStructureTemplate.AddToInterimTemplate(APrimalStructure*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.AlignTemplateToSaddle()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro AlignTemplateToSaddle() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.AlignTemplateToSaddle()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ApplyTemplateOverridePlacementVars(TSubclassOf<APrimalStructure>)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [chamadores=3+grafo=4/4]]
    BrzPonteiro ApplyTemplateOverridePlacementVars(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.ApplyTemplateOverridePlacementVars(TSubclassOf<APrimalStructure>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.BeginPlay()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=119]]
    BrzPonteiro BeginPlay() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.BeginPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CalculateTemplateOrigin(TArray<FInterimTemplateEntry,TSizedDefaultAlloc
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CalculateTemplateOrigin(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.CalculateTemplateOrigin(TArray<FInterimTemplateEntry,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CanBuildTemplateEntry(APlayerController*,int,bool,bool,bool,bool,FPlace
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanBuildTemplateEntry(void* a0, int a1, bool a2, bool a3, bool a4, bool a5, void* a6) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool, bool, void*>(this, "APrimalStructureTemplate.CanBuildTemplateEntry(APlayerController*,int,bool,bool,bool,bool,FPlacementData&)", a0, a1, a2, a3, a4, a5, a6);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CanStartAutoBuilding(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanStartAutoBuilding(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.CanStartAutoBuilding(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CanTemplateStructure(APrimalStructure*,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanTemplateStructure(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureTemplate.CanTemplateStructure(APrimalStructure*,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CanToggleTemplateEntry(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=126]]
    BrzPonteiro CanToggleTemplateEntry(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalStructureTemplate.CanToggleTemplateEntry(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CanToggleTemplateSnapOverride(APrimalStructure*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanToggleTemplateSnapOverride(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.CanToggleTemplateSnapOverride(APrimalStructure*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CheckAdditionalStructureTag_Implementation(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=337]]
    BrzPonteiro CheckAdditionalStructureTag_Implementation(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "APrimalStructureTemplate.CheckAdditionalStructureTag_Implementation(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CheckItemForEntry(TSoftClassPtr<APrimalStructure>,int,UPrimalItem*,TSof
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckItemForEntry(void* a0, int a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, int, void*, void**>(this, "APrimalStructureTemplate.CheckItemForEntry(TSoftClassPtr<APrimalStructure>,int,UPrimalItem*,TSoftClassPtr<APrimalStructure>&)", a0, a1, a2, &a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CheckStructureForEntry(TSoftClassPtr<APrimalStructure>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckStructureForEntry(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureTemplate.CheckStructureForEntry(TSoftClassPtr<APrimalStructure>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CompressTemplate(FPrimalStructureTemplateData,TArray<unsignedchar,TSize
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CompressTemplate(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.CompressTemplate(FPrimalStructureTemplateData,TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CreateSavedTemplateItem(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateSavedTemplateItem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.CreateSavedTemplateItem(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CreateTemplateEntryCollision(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateTemplateEntryCollision(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureTemplate.CreateTemplateEntryCollision(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CreateTemplateEntryPreview(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateTemplateEntryPreview(int a0) const
    {
        return NativeCall<void*, int>(this, "APrimalStructureTemplate.CreateTemplateEntryPreview(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.CreateTemplateMaterials()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateTemplateMaterials() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.CreateTemplateMaterials()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.DecompressTemplate(TArray<unsignedchar,TSizedDefaultAllocator<32>>,FPri
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DecompressTemplate(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.DecompressTemplate(TArray<unsignedchar,TSizedDefaultAllocator<32>>,FPrimalStructureTemplateData&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.DeleteTemplateFile(FString,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DeleteTemplateFile(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.DeleteTemplateFile(FString,AActor*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DeleteTemplateFile(FString* a0, void* a1) const
    { return DeleteTemplateFile(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.DestroyPreviewMeshComps()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DestroyPreviewMeshComps() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.DestroyPreviewMeshComps()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.DoesTemplateExist(FString,AActor*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoesTemplateExist(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.DoesTemplateExist(FString,AActor*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro DoesTemplateExist(FString* a0, void* a1) const
    { return DoesTemplateExist(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ExportTemplateToClipboard(FPrimalStructureTemplateData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExportTemplateToClipboard(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.ExportTemplateToClipboard(FPrimalStructureTemplateData)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ExportTemplateToString(FPrimalStructureTemplateData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ExportTemplateToString(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.ExportTemplateToString(FPrimalStructureTemplateData)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetAutoBuildBatch(APlayerController*,bool,bool,TArray<FTemplateBuildBat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAutoBuildBatch(void* a0, bool a1, bool a2, void* a3) const
    {
        return NativeCall<void*, void*, bool, bool, void*>(this, "APrimalStructureTemplate.GetAutoBuildBatch(APlayerController*,bool,bool,TArray<FTemplateBuildBatchEntry,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetAvailableSkinsForTemplate(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvailableSkinsForTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetAvailableSkinsForTemplate(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetEntryBuildData(APlayerController*,int,bool,bool,bool,FTemplateBuildB
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEntryBuildData(void* a0, int a1, bool a2, bool a3, bool a4, void* a5) const
    {
        return NativeCall<void*, void*, int, bool, bool, bool, void*>(this, "APrimalStructureTemplate.GetEntryBuildData(APlayerController*,int,bool,bool,bool,FTemplateBuildBatchEntry&)", a0, a1, a2, a3, a4, a5);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetEntryStructureToConsume(APlayerController*,int,TSoftClassPtr<APrimal
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEntryStructureToConsume(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void**>(this, "APrimalStructureTemplate.GetEntryStructureToConsume(APlayerController*,int,TSoftClassPtr<APrimalStructure>&)", a0, a1, &a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetInterimTemplateContents()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInterimTemplateContents() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.GetInterimTemplateContents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetInterimTemplateEntryData(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetInterimTemplateEntryData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetInterimTemplateEntryData(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetLinkedStructuresForTemplate(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLinkedStructuresForTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetLinkedStructuresForTemplate(APrimalStructure*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureTemplate.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetPlacingTemplate(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlacingTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetPlacingTemplate(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetSkinDataFromItem(UPrimalItem*,FTemplateSkinItemData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSkinDataFromItem(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.GetSkinDataFromItem(UPrimalItem*,FTemplateSkinItemData&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetStructureItemData(UPrimalItem*,int,TSoftClassPtr<APrimalStructure>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStructureItemData(void* a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void**>(this, "APrimalStructureTemplate.GetStructureItemData(UPrimalItem*,int,TSoftClassPtr<APrimalStructure>&)", a0, a1, &a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetStructuresPlacedOn(TArray<APrimalStructure*,TSizedDefaultAllocator<3
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetStructuresPlacedOn(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetStructuresPlacedOn(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateContents(FPrimalStructureTemplateData)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateContents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetTemplateContents(FPrimalStructureTemplateData)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateExtents()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTemplateExtents() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.GetTemplateExtents()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateFiles(AActor*,TArray<FStructureTemplateFileData,TSizedDefaul
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateFiles(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.GetTemplateFiles(AActor*,TArray<FStructureTemplateFileData,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateFloorType()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateFloorType() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.GetTemplateFloorType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateMeshScale(UE::Math::TVector<double>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateMeshScale(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.GetTemplateMeshScale(UE::Math::TVector<double>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateProgress(TArray<FSortedTemplateContentsEntry,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateProgress(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.GetTemplateProgress(TArray<FSortedTemplateContentsEntry,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateSaveDir()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=234+chamadores=6+grafo=5/5]]
    BrzPonteiro GetTemplateSaveDir() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.GetTemplateSaveDir()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.GetTemplateUploadData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTemplateUploadData() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.GetTemplateUploadData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.HasPlacedTemplate(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasPlacedTemplate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.HasPlacedTemplate(APlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ImportTemplateFromClipboard(FPrimalStructureTemplateData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ImportTemplateFromClipboard(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.ImportTemplateFromClipboard(FPrimalStructureTemplateData&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ImportTemplateFromString(FString,FPrimalStructureTemplateData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ImportTemplateFromString(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.ImportTemplateFromString(FString,FPrimalStructureTemplateData&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ImportTemplateFromString(FString* a0, void* a1) const
    { return ImportTemplateFromString(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.InterimTemplateContains(APrimalStructure*,bool&,bool&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InterimTemplateContains(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTemplate.InterimTemplateContains(APrimalStructure*,bool&,bool&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.IsStructureInRangeOfTemplateRoot(UE::Math::TVector<double>,UE::Math::TV
    // endereco: cache_pdb_25090264
    BrzPonteiro IsStructureInRangeOfTemplateRoot(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.IsStructureInRangeOfTemplateRoot(UE::Math::TVector<double>,UE::Math::TVector<double>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.IsValidPlacementForTemplate(UE::Math::TVector<double>,UE::Math::TRotato
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidPlacementForTemplate(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "APrimalStructureTemplate.IsValidPlacementForTemplate(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.LoadPreviewAssets()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadPreviewAssets() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.LoadPreviewAssets()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.LoadTemplate(FString,FPrimalStructureTemplateData&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadTemplate(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.LoadTemplate(FString,FPrimalStructureTemplateData&)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro LoadTemplate(FString* a0, void* a1) const
    { return LoadTemplate(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MultiCastTemplateEntryDisabled_Implementation(int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MultiCastTemplateEntryDisabled_Implementation(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "APrimalStructureTemplate.MultiCastTemplateEntryDisabled_Implementation(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MulticastBulkSkinApplication(TArray<FTemplateSkinStructureData,TSizedDe
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MulticastBulkSkinApplication(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.MulticastBulkSkinApplication(TArray<FTemplateSkinStructureData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MulticastBulkSkinApplication_Implementation(TArray<FTemplateSkinStructu
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastBulkSkinApplication_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.MulticastBulkSkinApplication_Implementation(TArray<FTemplateSkinStructureData,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MulticastTemplateBuildUpdate(TArray<int,TSizedDefaultAllocator<32>>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=168+bytes40+chamadores=2]]
    BrzPonteiro MulticastTemplateBuildUpdate(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.MulticastTemplateBuildUpdate(TArray<int,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MulticastTemplateBuildUpdate_Implementation(TArray<int,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastTemplateBuildUpdate_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.MulticastTemplateBuildUpdate_Implementation(TArray<int,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.MulticastTemplateData_Implementation(TArray<unsignedchar,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MulticastTemplateData_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.MulticastTemplateData_Implementation(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OnRep_BinaryData()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro OnRep_BinaryData() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OnRep_BinaryData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OverrideAttachToStaticMeshSocketNameBase_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=359]]
    BrzPonteiro OverrideAttachToStaticMeshSocketNameBase_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OverrideAttachToStaticMeshSocketNameBase_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OverrideAttachToStaticMeshSocket_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=355]]
    BrzPonteiro OverrideAttachToStaticMeshSocket_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OverrideAttachToStaticMeshSocket_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OverrideOnlyAllowPlacementInWater_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=357]]
    BrzPonteiro OverrideOnlyAllowPlacementInWater_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OverrideOnlyAllowPlacementInWater_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OverrideSnapToWaterSurface_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=357]]
    BrzPonteiro OverrideSnapToWaterSurface_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OverrideSnapToWaterSurface_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.OverrideWaterVolumeCheckPointOffset_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=393]]
    BrzPonteiro OverrideWaterVolumeCheckPointOffset_Implementation() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.OverrideWaterVolumeCheckPointOffset_Implementation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PlacedStructure(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PlacedStructure(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureTemplate.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Backup()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_Backup() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Backup()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_FloorsByDirection(TArray<FPrimalStructureTe
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_FloorsByDirection(void* a0, int a1, bool a2) const
    {
        return NativeCall<void*, void*, int, bool>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_FloorsByDirection(TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_OceanPlatform()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_OceanPlatform() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_OceanPlatform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Overrides()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_Overrides() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Overrides()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Pillars()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_Pillars() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Pillars()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_TreePlatform()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro PrepareTemplatePreviewSnaps_TreePlatform() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_TreePlatform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Underwater()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_Underwater() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Underwater()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_UnderwaterByDirection(TArray<FPrimalStructu
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_UnderwaterByDirection(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_UnderwaterByDirection(TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Walls()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_Walls() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_Walls()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.PrepareTemplatePreviewSnaps_WallsByDirection(TArray<FPrimalStructureTem
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareTemplatePreviewSnaps_WallsByDirection(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps_WallsByDirection(TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.RemoveFromInterimTemplate(APrimalStructure*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveFromInterimTemplate(void* a0, bool a1, bool a2) const
    {
        return NativeCall<void*, void*, bool, bool>(this, "APrimalStructureTemplate.RemoveFromInterimTemplate(APrimalStructure*,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ResolveItems()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveItems() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.ResolveItems()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.SaveInterimTemplate(FString,FString,FString)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveInterimTemplate(const FString& a0, const FString& a1, const FString& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTemplate.SaveInterimTemplate(FString,FString,FString)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SaveInterimTemplate(FString* a0, FString* a1, FString* a2) const
    { return SaveInterimTemplate(*a0, *a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.SaveTemplate(FPrimalStructureTemplateData,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveTemplate(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.SaveTemplate(FPrimalStructureTemplateData,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SaveTemplate(void* a0, FString* a1) const
    { return SaveTemplate(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.SetTemplatePreviewVisibility(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=27]]
    BrzPonteiro SetTemplatePreviewVisibility(bool a0) const
    {
        return NativeCall<void*, bool>(this, "APrimalStructureTemplate.SetTemplatePreviewVisibility(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.SortEntriesByLocation(UE::Math::TVector<double>,TArray<FPrimalStructure
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortEntriesByLocation(void* a0, void* a1, void* a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, void*, void*, void*, int>(this, "APrimalStructureTemplate.SortEntriesByLocation(UE::Math::TVector<double>,TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,TMap<int,TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,0>>&,TArray<int,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.SortEntriesForBuilding(TArray<FPrimalStructureTemplateEntry,TSizedDefau
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SortEntriesForBuilding(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.SortEntriesForBuilding(TArray<FPrimalStructureTemplateEntry,TSizedDefaultAllocator<32>>,bool&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.StartAutoSkinning(APlayerController*,TArray<FTemplateSkinStructureData,
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StartAutoSkinning(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.StartAutoSkinning(APlayerController*,TArray<FTemplateSkinStructureData,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.StartCreatingPreview()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=862+grafo=12/12]]
    BrzPonteiro StartCreatingPreview() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.StartCreatingPreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.StartItemResolver()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=504+grafo=8/8]]
    BrzPonteiro StartItemResolver() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.StartItemResolver()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.StaticCreateInterimTemplate(TSubclassOf<APrimalStructureTemplate>,APrim
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro StaticCreateInterimTemplate(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, bool, bool>(this, "APrimalStructureTemplate.StaticCreateInterimTemplate(TSubclassOf<APrimalStructureTemplate>,APrimalStructure*,bool,bool)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.StaticRegisterNativesAPrimalStructureTemplate()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=34]]
    BrzPonteiro StaticRegisterNativesAPrimalStructureTemplate() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.StaticRegisterNativesAPrimalStructureTemplate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TemplateHasUnownedDLCEntries(APlayerController*,int&,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TemplateHasUnownedDLCEntries(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTemplate.TemplateHasUnownedDLCEntries(APlayerController*,int&,int&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.ToggleTemplateSnapOverride(APrimalStructure*,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ToggleTemplateSnapOverride(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.ToggleTemplateSnapOverride(APrimalStructure*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TryAutoSkinning()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryAutoSkinning() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.TryAutoSkinning()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TryBuildBatch(APlayerController*,TArray<FTemplateBuildBatchEntry,TSized
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryBuildBatch(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "APrimalStructureTemplate.TryBuildBatch(APlayerController*,TArray<FTemplateBuildBatchEntry,TSizedDefaultAllocator<32>>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TryBuildEntry(APlayerController*,FTemplateBuildBatchEntry,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryBuildEntry(void* a0, void* a1, bool a2) const
    {
        return NativeCall<void*, void*, void*, bool>(this, "APrimalStructureTemplate.TryBuildEntry(APlayerController*,FTemplateBuildBatchEntry,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TryCreatingPreview()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro TryCreatingPreview() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.TryCreatingPreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "APrimalStructureTemplate.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.UpdateInterimTemplateContents(TArray<APrimalStructure*,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateInterimTemplateContents(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.UpdateInterimTemplateContents(TArray<APrimalStructure*,TSizedDefaultAllocator<32>>,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.UpdateInterimTemplatePreview()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateInterimTemplatePreview() const
    {
        return NativeCall<void*>(this, "APrimalStructureTemplate.UpdateInterimTemplatePreview()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.UpdateItemQuantities(APlayerController*,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    BrzPonteiro UpdateItemQuantities(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "APrimalStructureTemplate.UpdateItemQuantities(APlayerController*,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTemplate.UpdateTemplateMeshMaterials(TArray<UMeshComponent*,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTemplateMeshMaterials(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "APrimalStructureTemplate.UpdateTemplateMeshMaterials(TArray<UMeshComponent*,TSizedDefaultAllocator<32>>,UMaterialInstanceDynamic*,UMaterialInstanceDynamic*)", a0, a1, a2);
    }

    BrzCampoPonteiro ActiveEffectIdsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ActiveEffectIds")); }
    BrzCampoPonteiro ActiveEffectVFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ActiveEffectVFX")); }
    TObjectPtr<AActor>& ActorUsingQuickActionField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTemplate.ActorUsingQuickAction"); }
    FieldArray<unsigned char> AllowStructureColorSetsField() const
    { return { (void*)this, "APrimalStructureTemplate.AllowStructureColorSets" }; }
    BrzCampoPonteiro AttachToStaticMeshSocketMinScaleOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.AttachToStaticMeshSocketMinScaleOverrides")); }
    BrzCampoPonteiro AttachedStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.AttachedStructures")); }
    APawn*& AttachedToField() const
    { return *GetNativePointerField<APawn**>(this, "APrimalStructureTemplate.AttachedTo"); }
    unsigned int& AttachedToDinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTemplate.AttachedToDinoID1"); }
    BrzCampoPonteiro AttachmentReplicationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.AttachmentReplication")); }
    float& AutoBuildBatchDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.AutoBuildBatchDelay"); }
    int& AutoBuildBatchSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.AutoBuildBatchSize"); }
    unsigned char& AutoReceiveInputField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.AutoReceiveInput"); }
    float& AutoSkinBatchDelayField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.AutoSkinBatchDelay"); }
    int& AutoSkinBatchSizeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.AutoSkinBatchSize"); }
    BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures()
    { return { (void*)this, "BPOverrideDestroyedMeshTextures" }; }
    int& BedIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.BedID"); }
    TArray<void*>& BlueprintCreatedComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.BlueprintCreatedComponents"); }
    TArray<void*>& BoneDamageAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.BoneDamageAdjusters"); }
    BrzCampoPonteiro BuiltIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.BuiltIndices")); }
    BrzCampoPonteiro BuiltStructuresField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.BuiltStructures")); }
    TArray<void*>& ChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.Children"); }
    float& ClientReplicationSendNowThresholdField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.ClientReplicationSendNowThreshold"); }
    TArray<void*>& ControllingMatineeActorsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.ControllingMatineeActors"); }
    UStaticMeshComponent*& CosmeticVariantStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTemplate.CosmeticVariantStaticMesh"); }
    double& CreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.CreationTime"); }
    FName& CurrentVariantTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTemplate.CurrentVariantTag"); }
    int& CustomActorFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.CustomActorFlags"); }
    int& CustomDataField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.CustomData"); }
    FName& CustomTagField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTemplate.CustomTag"); }
    float& CustomTimeDilationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.CustomTimeDilation"); }
    TArray<void*>& DamageTypeAdjustersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.DamageTypeAdjusters"); }
    BrzCampoPonteiro DeactivateTrapIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DeactivateTrapIcon")); }
    USoundCue*& DeathSoundField() const
    { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureTemplate.DeathSound"); }
    float& DecayAfterTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.DecayAfterTime"); }
    double& DecayAtTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.DecayAtTime"); }
    float& DecayDestructionPeriodField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.DecayDestructionPeriod"); }
    float& DecayDestructionPeriodMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.DecayDestructionPeriodMultiplier"); }
    int& DefaultStasisComponentOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.DefaultStasisComponentOctreeFlags"); }
    int& DefaultStasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.DefaultStasisedOctreeFlags"); }
    int& DefaultUnstasisedOctreeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.DefaultUnstasisedOctreeFlags"); }
    BrzCampoPonteiro DefaultUpdateOverlapsMethodDuringLevelStreamingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DefaultUpdateOverlapsMethodDuringLevelStreaming")); }
    float& DemolishGiveItemCraftingResourcePercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.DemolishGiveItemCraftingResourcePercentage"); }
    FString& DescriptiveNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.DescriptiveName"); }
    unsigned char& DesiredRepGraphBehaviorField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.DesiredRepGraphBehavior"); }
    BrzCampoPonteiro DestroyedMeshActorClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DestroyedMeshActorClass")); }
    BrzCampoPonteiro DestructibleMeshLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DestructibleMeshLocationOffset")); }
    BrzCampoPonteiro DestructibleMeshScaleOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DestructibleMeshScaleOverride")); }
    BrzCampoPonteiro DestructionEmitterField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DestructionEmitter")); }
    BrzCampoPonteiro DisabledIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.DisabledIndices")); }
    BrzCampoPonteiro ExtraStructureSnapTypeFlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ExtraStructureSnapTypeFlags")); }
    BrzCampoPonteiro FloatingHudLocTextOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.FloatingHudLocTextOffset")); }
    double& ForceMaximumReplicationRateUntilTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.ForceMaximumReplicationRateUntilTime"); }
    BrzCampoPonteiro GroundEncroachmentCheckLocationOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.GroundEncroachmentCheckLocationOffset")); }
    float& HealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.Health"); }
    UParticleSystem*& HurtFXField() const
    { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureTemplate.HurtFX"); }
    BrzCampoPonteiro HurtFX_NiagaraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.HurtFX_Niagara")); }
    float& InitialLifeSpanField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.InitialLifeSpan"); }
    TObjectPtr<UInputComponent>& InputComponentField() const
    { return *GetNativePointerField<TObjectPtr<UInputComponent>*>(this, "APrimalStructureTemplate.InputComponent"); }
    int& InputPriorityField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.InputPriority"); }
    TArray<void*>& InstanceComponentsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.InstanceComponents"); }
    TObjectPtr<APawn>& InstigatorField() const
    { return *GetNativePointerField<TObjectPtr<APawn>*>(this, "APrimalStructureTemplate.Instigator"); }
    BrzCampoPonteiro InterimTemplateDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.InterimTemplateData")); }
    BrzCampoPonteiro InterimTemplateRefField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.InterimTemplateRef")); }
    BrzCampoPonteiro ItemsUseAlternateActorClassAttachmentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ItemsUseAlternateActorClassAttachment")); }
    double& LastActorForceReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastActorForceReplicationTime"); }
    double& LastEnterStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastEnterStasisTime"); }
    double& LastExitStasisTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastExitStasisTime"); }
    float& LastHealthPercentageField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.LastHealthPercentage"); }
    double& LastInAllyRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastInAllyRangeTime"); }
    double& LastInAllyRangeTimeSerializedField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastInAllyRangeTimeSerialized"); }
    double& LastItemUpdateTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastItemUpdateTime"); }
    TWeakObjectPtr<void>& LastPostProcessVolumeSoundField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTemplate.LastPostProcessVolumeSound"); }
    double& LastPreReplicationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastPreReplicationTime"); }
    BrzCampoPonteiro LastResolveRequestField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.LastResolveRequest")); }
    FString& LastSelectedWindSourceComponentNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.LastSelectedWindSourceComponentName"); }
    double& LastSkinAppliedTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastSkinAppliedTime"); }
    double& LastThrottledTickTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastThrottledTickTime"); }
    TArray<APrimalDinoCharacter*>& LatchedDinosField() const
    { return *GetNativePointerField<TArray<APrimalDinoCharacter*>*>(this, "APrimalStructureTemplate.LatchedDinos"); }
    TArray<void*>& LayersField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.Layers"); }
    float& LifeSpanAfterDeathField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.LifeSpanAfterDeath"); }
    TArray<APrimalStructure*>& LinkedStructuresField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureTemplate.LinkedStructures"); }
    TArray<void*>& LinkedStructuresIDField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.LinkedStructuresID"); }
    BrzCampoPonteiro LocalOnlySkinCustomPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.LocalOnlySkinCustomPersistentData")); }
    float& MaxAutoBuildDistanceField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.MaxAutoBuildDistance"); }
    float& MaxHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.MaxHealth"); }
    float& MinNetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.MinNetUpdateFrequency"); }
    BrzCampoPonteiro MultiSoftDestructionGeoCollectionAssetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.MultiSoftDestructionGeoCollectionAssets")); }
    long long& MyCustomCosmeticStructureSkinIDField() const
    { return *GetNativePointerField<long long*>(this, "APrimalStructureTemplate.MyCustomCosmeticStructureSkinID"); }
    int& MyCustomCosmeticStructureSkinVariantIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.MyCustomCosmeticStructureSkinVariantID"); }
    AActor*& MyDestructionActorField() const
    { return *GetNativePointerField<AActor**>(this, "APrimalStructureTemplate.MyDestructionActor"); }
    UPrimalHarvestingComponent*& MyHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureTemplate.MyHarvestingComponent"); }
    USceneComponent*& MyRootTransformField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APrimalStructureTemplate.MyRootTransform"); }
    UStaticMeshComponent*& MyStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureTemplate.MyStaticMesh"); }
    UPrimalHarvestingComponent*& MyStructureHarvestingComponentField() const
    { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalStructureTemplate.MyStructureHarvestingComponent"); }
    int& NetCriticalPriorityAdjustmentField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.NetCriticalPriorityAdjustment"); }
    float& NetCullDistanceSquaredField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetCullDistanceSquared"); }
    float& NetCullDistanceSquaredDormantField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetCullDistanceSquaredDormant"); }
    unsigned char& NetDormancyField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.NetDormancy"); }
    FName& NetDriverNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTemplate.NetDriverName"); }
    float& NetPriorityField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetPriority"); }
    int& NetTagField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.NetTag"); }
    float& NetUpdateFrequencyField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetUpdateFrequency"); }
    float& NetworkAndStasisRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetworkAndStasisRangeMultiplier"); }
    float& NetworkRangeMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.NetworkRangeMultiplier"); }
    TArray<void*>& NetworkSpatializationChildrenField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.NetworkSpatializationChildren"); }
    TArray<void*>& NetworkSpatializationChildrenDormantField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.NetworkSpatializationChildrenDormant"); }
    TObjectPtr<AActor>& NetworkSpatializationParentField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTemplate.NetworkSpatializationParent"); }
    BrzCampoPonteiro NotifyCarriedByDinoChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.NotifyCarriedByDinoChanged")); }
    BrzCampoPonteiro OnActorBeginOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnActorBeginOverlap")); }
    BrzCampoPonteiro OnActorCustomEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnActorCustomEvent")); }
    BrzCampoPonteiro OnActorEndOverlapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnActorEndOverlap")); }
    BrzCampoPonteiro OnActorHitField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnActorHit")); }
    BrzCampoPonteiro OnDestroyedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnDestroyed")); }
    BrzCampoPonteiro OnEndPlayField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnEndPlay")); }
    BrzCampoPonteiro OnMatineeUpdatedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnMatineeUpdated")); }
    BrzCampoPonteiro OnSemaphoreTakenField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnSemaphoreTaken")); }
    BrzCampoPonteiro OnTakeAnyDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnTakeAnyDamage")); }
    BrzCampoPonteiro OnTakePointDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnTakePointDamage")); }
    BrzCampoPonteiro OnTakeRadialDamageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnTakeRadialDamage")); }
    BrzCampoPonteiro OnTargetingTeamChangedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.OnTargetingTeamChanged")); }
    double& OriginalCreationTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.OriginalCreationTime"); }
    FString& OriginalPlacedTimeStampField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.OriginalPlacedTimeStamp"); }
    int& OriginalPlacerPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.OriginalPlacerPlayerID"); }
    float& OverrideStasisComponentRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.OverrideStasisComponentRadius"); }
    TArray<USceneComponent*>& OverrideTargetComponentsField() const
    { return *GetNativePointerField<TArray<USceneComponent*>*>(this, "APrimalStructureTemplate.OverrideTargetComponents"); }
    TObjectPtr<AActor>& OwnerField() const
    { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "APrimalStructureTemplate.Owner"); }
    AMissionType*& OwnerMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "APrimalStructureTemplate.OwnerMission"); }
    FString& OwnerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.OwnerName"); }
    int& OwningPlayerIDField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.OwningPlayerID"); }
    FString& OwningPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.OwningPlayerName"); }
    UStructurePaintingComponent*& PaintingComponentField() const
    { return *GetNativePointerField<UStructurePaintingComponent**>(this, "APrimalStructureTemplate.PaintingComponent"); }
    TWeakObjectPtr<void>& ParentComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTemplate.ParentComponent"); }
    BrzCampoPonteiro PhysicsReplicationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PhysicsReplicationMode")); }
    double& PickupAllowedBeforeNetworkTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.PickupAllowedBeforeNetworkTime"); }
    BrzCampoPonteiro PickupGivesItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PickupGivesItem")); }
    FItemNetID& PlaceUsingItemIDField() const
    { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructureTemplate.PlaceUsingItemID"); }
    FString& PlacedByNetIDField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.PlacedByNetID"); }
    BrzCampoPonteiro PlacedByTemplateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PlacedByTemplate")); }
    APrimalStructure*& PlacedOnFloorStructureField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTemplate.PlacedOnFloorStructure"); }
    BrzCampoPonteiro PlacementEncroachmentBoxExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PlacementEncroachmentBoxExtent")); }
    BrzCampoPonteiro PlacementEncroachmentCheckOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PlacementEncroachmentCheckOffset")); }
    float& PlacementFloorCheckZExtentField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.PlacementFloorCheckZExtent"); }
    float& PlacementFloorCheckZExtentUpField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.PlacementFloorCheckZExtentUp"); }
    BrzCampoPonteiro PlacementHitLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PlacementHitLocOffset")); }
    float& PlacementMaxRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.PlacementMaxRange"); }
    BrzCampoPonteiro PlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PlacementTraceScale")); }
    float& PlacementYawOffsetField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.PlacementYawOffset"); }
    float& PlacementYawOffsetIncrementField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.PlacementYawOffsetIncrement"); }
    BrzCampoPonteiro PreviewCameraRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PreviewCameraRotation")); }
    BrzCampoPonteiro PreviewColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PreviewColor")); }
    BrzCampoPonteiro PreviewColorExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PreviewColorExtent")); }
    BrzCampoPonteiro PreviewColorSnapOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.PreviewColorSnapOverride")); }
    UMaterialInterface*& PreviewMaterialField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureTemplate.PreviewMaterial"); }
    FName& PreviewMaterialColorParamNameField() const
    { return *GetNativePointerField<FName*>(this, "APrimalStructureTemplate.PreviewMaterialColorParamName"); }
    TArray<UMaterialInstanceDynamic*>& PreviewMaterialInstancesField() const
    { return *GetNativePointerField<TArray<UMaterialInstanceDynamic*>*>(this, "APrimalStructureTemplate.PreviewMaterialInstances"); }
    UMaterialInterface*& PreviewMaterialMaskedField() const
    { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureTemplate.PreviewMaterialMasked"); }
    FPrimalStructureSnapPointOverride& PreviewSnapOverrideField() const
    { return *GetNativePointerField<FPrimalStructureSnapPointOverride*>(this, "APrimalStructureTemplate.PreviewSnapOverride"); }
    FActorTickFunction& PrimaryActorTickField() const
    { return *GetNativePointerField<FActorTickFunction*>(this, "APrimalStructureTemplate.PrimaryActorTick"); }
    APrimalStructure*& PrimarySnappedStructureChildField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTemplate.PrimarySnappedStructureChild"); }
    APrimalStructure*& PrimarySnappedStructureParentField() const
    { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructureTemplate.PrimarySnappedStructureParent"); }
    int& RayTracingGroupIdField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.RayTracingGroupId"); }
    unsigned char& RemoteRoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.RemoteRole"); }
    BrzCampoPonteiro RepGraphBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.RepGraphBehavior")); }
    float& ReplicatedHealthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.ReplicatedHealth"); }
    BrzCampoPonteiro ReplicatedMovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ReplicatedMovement")); }
    BrzCampoPonteiro ReplicatedStructureMySkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.ReplicatedStructureMySkinClass")); }
    float& ReplicationIntervalMultiplierField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.ReplicationIntervalMultiplier"); }
    float& ReturnDamageAmountField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.ReturnDamageAmount"); }
    float& ReturnDamageImpulseField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.ReturnDamageImpulse"); }
    unsigned char& RoleField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.Role"); }
    TObjectPtr<USceneComponent>& RootComponentField() const
    { return *GetNativePointerField<TObjectPtr<USceneComponent>*>(this, "APrimalStructureTemplate.RootComponent"); }
    TWeakObjectPtr<void>& SaddleDinoField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "APrimalStructureTemplate.SaddleDino"); }
    int& SavedStructureMinAllowedVersionField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.SavedStructureMinAllowedVersion"); }
    int& Setting_BuildTypeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.Setting_BuildType"); }
    int& Setting_ModifyTypeField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.Setting_ModifyType"); }
    float& SkinCooldownDurationField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.SkinCooldownDuration"); }
    BrzCampoPonteiro SkinPersistentDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SkinPersistentData")); }
    BrzCampoPonteiro SkinnedIndicesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SkinnedIndices")); }
    BrzCampoPonteiro SkinsAppliedByPCField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SkinsAppliedByPC")); }
    BrzCampoPonteiro SkinsToApplyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SkinsToApply")); }
    BrzCampoPonteiro SnapAlternatePlacementTraceScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SnapAlternatePlacementTraceScale")); }
    float& SnapOverlapCheckRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.SnapOverlapCheckRadius"); }
    TArray<void*>& SnapPointsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.SnapPoints"); }
    BrzCampoPonteiro SnappedChooseRotationPlacementDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SnappedChooseRotationPlacementData")); }
    BrzCampoPonteiro SpawnCollisionHandlingMethodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.SpawnCollisionHandlingMethod")); }
    TObjectPtr<UPrimitiveComponent>& StasisCheckComponentField() const
    { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "APrimalStructureTemplate.StasisCheckComponent"); }
    TArray<TWeakObjectPtr<void>>& StasisUnRegisteredComponentsField() const
    { return *GetNativePointerField<TArray<TWeakObjectPtr<void>>*>(this, "APrimalStructureTemplate.StasisUnRegisteredComponents"); }
    int& StructureAttachmentBaseMaxStructuresField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.StructureAttachmentBaseMaxStructures"); }
    FieldArray<short> StructureColorsField() const
    { return { (void*)this, "APrimalStructureTemplate.StructureColors" }; }
    unsigned int& StructureIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTemplate.StructureID"); }
    BrzCampoPonteiro StructureItemQtysField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.StructureItemQtys")); }
    BrzCampoPonteiro StructureSettingsClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.StructureSettingsClass")); }
    BrzCampoPonteiro StructureSkinClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.StructureSkinClass")); }
    int& StructureSnapTypeFlagsField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.StructureSnapTypeFlags"); }
    TArray<APrimalStructure*>& StructuresPlacedOnFloorField() const
    { return *GetNativePointerField<TArray<APrimalStructure*>*>(this, "APrimalStructureTemplate.StructuresPlacedOnFloor"); }
    TArray<void*>& TagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.Tags"); }
    unsigned char& TargetableDamageFXDefaultPhysMaterialField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.TargetableDamageFXDefaultPhysMaterial"); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.TargetingTeam"); }
    BrzCampoPonteiro TemplateBinaryDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateBinaryData")); }
    BrzCampoPonteiro TemplateBuilderBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateBuilderBuff")); }
    BrzCampoPonteiro TemplateDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateData")); }
    BrzCampoPonteiro TemplateMaterialField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterial")); }
    BrzCampoPonteiro TemplateMaterialExtentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterialExtent")); }
    BrzCampoPonteiro TemplateMaterialExtentMaskedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterialExtentMasked")); }
    BrzCampoPonteiro TemplateMaterialMaskedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterialMasked")); }
    BrzCampoPonteiro TemplateMaterialSnapOverrideField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterialSnapOverride")); }
    BrzCampoPonteiro TemplateMaterialSnapOverrideMaskedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateMaterialSnapOverrideMasked")); }
    BrzCampoPonteiro TemplateOwnerBuffField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateOwnerBuff")); }
    BrzCampoPonteiro TemplateSaveItemField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateSaveItem")); }
    BrzCampoPonteiro TemplateSnapCeilingTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateSnapCeilingTags")); }
    BrzCampoPonteiro TemplateSnapFloorTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateSnapFloorTags")); }
    BrzCampoPonteiro TemplateSnapWallTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateSnapWallTags")); }
    BrzCampoPonteiro TemplateThickFloorTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateThickFloorTags")); }
    BrzCampoPonteiro TemplateThinFloorTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTemplate.TemplateThinFloorTags")); }
    unsigned char& TribeGroupStructureRankField() const
    { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureTemplate.TribeGroupStructureRank"); }
    double& UnstasisLastInRangeTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.UnstasisLastInRangeTime"); }
    int& UpdateOverlapsMethodDuringLevelStreamingField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.UpdateOverlapsMethodDuringLevelStreaming"); }
    BitFieldValue<bool, unsigned __int32> UseBPOverrideTargetLocation()
    { return { (void*)this, "UseBPOverrideTargetLocation" }; }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTemplate.Variants"); }
    BitFieldValue<bool, unsigned __int32> bActorEnableCollision()
    { return { (void*)this, "bActorEnableCollision" }; }
    BitFieldValue<bool, unsigned __int32> bActorIsBeingDestroyed()
    { return { (void*)this, "bActorIsBeingDestroyed" }; }
    BitFieldValue<bool, unsigned __int32> bActorPreventPhysicsSceneRegistration()
    { return { (void*)this, "bActorPreventPhysicsSceneRegistration" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAttachToSaddle()
    { return { (void*)this, "bAllowAttachToSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bAllowChooseRotationWhenSnapped()
    { return { (void*)this, "bAllowChooseRotationWhenSnapped" }; }
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
    BitFieldValue<bool, unsigned __int32> bAsyncPhysicsTickEnabled()
    { return { (void*)this, "bAsyncPhysicsTickEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bAttachmentReplicationUseNetworkParent()
    { return { (void*)this, "bAttachmentReplicationUseNetworkParent" }; }
    BitFieldValue<bool, unsigned __int32> bAutoDestroyWhenFinished()
    { return { (void*)this, "bAutoDestroyWhenFinished" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStasis()
    { return { (void*)this, "bAutoStasis" }; }
    BitFieldValue<bool, unsigned __int32> bBPInventoryItemUsedHandlesDurability()
    { return { (void*)this, "bBPInventoryItemUsedHandlesDurability" }; }
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
    BitFieldValue<bool, unsigned __int32> bCarriedByDino()
    { return { (void*)this, "bCarriedByDino" }; }
    BitFieldValue<bool, unsigned __int32> bCenterOffscreenFloatingHUDWidgets()
    { return { (void*)this, "bCenterOffscreenFloatingHUDWidgets" }; }
    BitFieldValue<bool, unsigned __int32> bClientReceivedStructuresPlacedOnFloor()
    { return { (void*)this, "bClientReceivedStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bClimbable()
    { return { (void*)this, "bClimbable" }; }
    BitFieldValue<bool, unsigned __int32> bCollideWhenPlacing()
    { return { (void*)this, "bCollideWhenPlacing" }; }
    BitFieldValue<bool, unsigned __int32> bDebug()
    { return { (void*)this, "bDebug" }; }
    BitFieldValue<bool, unsigned __int32> bDemolishJustDestroy()
    { return { (void*)this, "bDemolishJustDestroy" }; }
    BitFieldValue<bool, unsigned __int32> bDesiredRepGraphBehaviorHasBeenSet()
    { return { (void*)this, "bDesiredRepGraphBehaviorHasBeenSet" }; }
    BitFieldValue<bool, unsigned __int32> bDestroyDontClearNetworkChildren()
    { return { (void*)this, "bDestroyDontClearNetworkChildren" }; }
    BitFieldValue<bool, unsigned __int32> bDidSpawnEffects()
    { return { (void*)this, "bDidSpawnEffects" }; }
    BitFieldValue<bool, unsigned __int32> bDisableRigidBodyAnimNodes()
    { return { (void*)this, "bDisableRigidBodyAnimNodes" }; }
    BitFieldValue<bool, unsigned __int32> bDisableStructureOnElectricStorm()
    { return { (void*)this, "bDisableStructureOnElectricStorm" }; }
    BitFieldValue<bool, unsigned __int32> bDontResetPickupTimer()
    { return { (void*)this, "bDontResetPickupTimer" }; }
    BitFieldValue<bool, unsigned __int32> bDontSetDamageParameters()
    { return { (void*)this, "bDontSetDamageParameters" }; }
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
    BitFieldValue<bool, unsigned __int32> bForceNonBlockingHits()
    { return { (void*)this, "bForceNonBlockingHits" }; }
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
    BitFieldValue<bool, unsigned __int32> bGenerateOverlapEventsDuringLevelStreaming()
    { return { (void*)this, "bGenerateOverlapEventsDuringLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bHasAnyStructuresPlacedOnFloor()
    { return { (void*)this, "bHasAnyStructuresPlacedOnFloor" }; }
    BitFieldValue<bool, unsigned __int32> bHasHighVolumeRPCs()
    { return { (void*)this, "bHasHighVolumeRPCs" }; }
    BitFieldValue<bool, unsigned __int32> bHasResetDecayTime()
    { return { (void*)this, "bHasResetDecayTime" }; }
    BitFieldValue<bool, unsigned __int32> bHibernateChange()
    { return { (void*)this, "bHibernateChange" }; }
    BitFieldValue<bool, unsigned __int32> bHidden()
    { return { (void*)this, "bHidden" }; }
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
    BitFieldValue<bool, unsigned __int32> bIsMapActor()
    { return { (void*)this, "bIsMapActor" }; }
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
    BitFieldValue<bool, unsigned __int32> bIsValidUnstasisCaster()
    { return { (void*)this, "bIsValidUnstasisCaster" }; }
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
    BitFieldValue<bool, unsigned __int32> bOnlyInitialReplication()
    { return { (void*)this, "bOnlyInitialReplication" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyRelevantToOwner()
    { return { (void*)this, "bOnlyRelevantToOwner" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyReplicateOnNetForcedUpdate()
    { return { (void*)this, "bOnlyReplicateOnNetForcedUpdate" }; }
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
    BitFieldValue<bool, unsigned __int32> bPreventActorStasis()
    { return { (void*)this, "bPreventActorStasis" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing()
    { return { (void*)this, "bPreventCharacterBasing" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCharacterBasingAllowSteppingUp()
    { return { (void*)this, "bPreventCharacterBasingAllowSteppingUp" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCliffPlatforms()
    { return { (void*)this, "bPreventCliffPlatforms" }; }
    BitFieldValue<bool, unsigned __int32> bPreventLevelBoundsRelevant()
    { return { (void*)this, "bPreventLevelBoundsRelevant" }; }
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
    BitFieldValue<bool, unsigned __int32> bReplicateMovement()
    { return { (void*)this, "bReplicateMovement" }; }
    BitFieldValue<bool, unsigned __int32> bReplicateUsingRegisteredSubObjectList()
    { return { (void*)this, "bReplicateUsingRegisteredSubObjectList" }; }
    BitFieldValue<bool, unsigned __int32> bReplicates()
    { return { (void*)this, "bReplicates" }; }
    BitFieldValue<bool, unsigned __int32> bSavedWhenStasised()
    { return { (void*)this, "bSavedWhenStasised" }; }
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
    BitFieldValue<bool, unsigned __int32> bTearOff()
    { return { (void*)this, "bTearOff" }; }
    BitFieldValue<bool, unsigned __int32> bUnstreamComponentsUseEndOverlap()
    { return { (void*)this, "bUnstreamComponentsUseEndOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseActorNotifyCustomEventBP()
    { return { (void*)this, "bUseActorNotifyCustomEventBP" }; }
    BitFieldValue<bool, unsigned __int32> bUseAttachmentReplication()
    { return { (void*)this, "bUseAttachmentReplication" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPAllowActorSpawn()
    { return { (void*)this, "bUseBPAllowActorSpawn" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseBPGetHUDDrawLocationOffset()
    { return { (void*)this, "bUseBPGetHUDDrawLocationOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterText()
    { return { (void*)this, "bUseBPGetMultiUseCenterText" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetMultiUseCenterTextWithName()
    { return { (void*)this, "bUseBPGetMultiUseCenterTextWithName" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetOrbitCamTargetLocation()
    { return { (void*)this, "bUseBPGetOrbitCamTargetLocation" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetShowDebugAnimationComponents()
    { return { (void*)this, "bUseBPGetShowDebugAnimationComponents" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemDropped()
    { return { (void*)this, "bUseBPInventoryItemDropped" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPInventoryItemUsed()
    { return { (void*)this, "bUseBPInventoryItemUsed" }; }
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
    BitFieldValue<bool, unsigned __int32> bUseCanMoveThroughActor()
    { return { (void*)this, "bUseCanMoveThroughActor" }; }
    BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent()
    { return { (void*)this, "bUseHarvestingComponent" }; }
    BitFieldValue<bool, unsigned __int32> bUseNetworkSpatialization()
    { return { (void*)this, "bUseNetworkSpatialization" }; }
    BitFieldValue<bool, unsigned __int32> bUseOnlyPointForLevelBounds()
    { return { (void*)this, "bUseOnlyPointForLevelBounds" }; }
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
    BitFieldValue<bool, unsigned __int32> bAllowPlacingTemplateWithoutSnapping()
    { return { (void*)this, "bAllowPlacingTemplateWithoutSnapping" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTemplateRotation()
    { return { (void*)this, "bAllowTemplateRotation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowTemplateRotationWhenSnapped()
    { return { (void*)this, "bAllowTemplateRotationWhenSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bAreAssetsLoaded()
    { return { (void*)this, "bAreAssetsLoaded" }; }
    BitFieldValue<bool, unsigned __int32> bBuilderBuffRequested()
    { return { (void*)this, "bBuilderBuffRequested" }; }
    BitFieldValue<bool, unsigned __int32> bHasUnresolvedItemAssets()
    { return { (void*)this, "bHasUnresolvedItemAssets" }; }
    BitFieldValue<bool, unsigned __int32> bIsAutoBuilding()
    { return { (void*)this, "bIsAutoBuilding" }; }
    BitFieldValue<bool, unsigned __int32> bIsAutoSkinning()
    { return { (void*)this, "bIsAutoSkinning" }; }
    BitFieldValue<bool, unsigned __int32> bIsInterimTemplate()
    { return { (void*)this, "bIsInterimTemplate" }; }
    BitFieldValue<bool, unsigned __int32> bIsLoadingAssets()
    { return { (void*)this, "bIsLoadingAssets" }; }
    BitFieldValue<bool, unsigned __int32> bPlacementRequested()
    { return { (void*)this, "bPlacementRequested" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_AutoBuildAll()
    { return { (void*)this, "bSetting_AutoBuildAll" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_AutoBuildApplyVariant()
    { return { (void*)this, "bSetting_AutoBuildApplyVariant" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_AutoBuildUsePaint()
    { return { (void*)this, "bSetting_AutoBuildUsePaint" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_DisableBuildEntry()
    { return { (void*)this, "bSetting_DisableBuildEntry" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_IncludeFurniture()
    { return { (void*)this, "bSetting_IncludeFurniture" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_ModifyAdd()
    { return { (void*)this, "bSetting_ModifyAdd" }; }
    BitFieldValue<bool, unsigned __int32> bSetting_SelectAll()
    { return { (void*)this, "bSetting_SelectAll" }; }
    BitFieldValue<bool, unsigned __int32> bShouldResolveSkins()
    { return { (void*)this, "bShouldResolveSkins" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETEMPLATE_H
