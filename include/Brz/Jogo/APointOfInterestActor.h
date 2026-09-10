// ==========================================================================
//  APointOfInterestActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APOINTOFINTERESTACTOR_H
#define BRZ_SDK_JOGO_APOINTOFINTERESTACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APointOfInterestManagerList;
struct USceneComponent;
struct USphereComponent;

#include "AActor.h"

struct APointOfInterestActor : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APointOfInterestActor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APointOfInterestActor.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.CanBeViewed_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    bool CanBeViewed_Implementation(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APointOfInterestActor.CanBeViewed_Implementation(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APointOfInterestActor.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultA
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APointOfInterestActor.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.GetPointCompanionBehaviorData_Implementation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=33]]
    void GetPointCompanionBehaviorData_Implementation(void* retorno) const
    {
        NativeCall<void, void*>(this, "APointOfInterestActor.GetPointCompanionBehaviorData_Implementation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.GetPointOfInterestData_Implementation()
    // endereco: casamento de bytes com a build de referencia
    void GetPointOfInterestData_Implementation(void* retorno) const
    {
        NativeCall<void, void*>(this, "APointOfInterestActor.GetPointOfInterestData_Implementation()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.IsPointOfInterestValid()
    // endereco: cache_pdb_25090264
    bool IsPointOfInterestValid() const
    {
        return NativeCall<bool>(this, "APointOfInterestActor.IsPointOfInterestValid()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.OnConstruction(UE::Math::TTransform<double>&)
    // endereco: casamento de bytes com a build de referencia
    void OnConstruction(void* a0) const
    {
        NativeCall<void, void*>(this, "APointOfInterestActor.OnConstruction(UE::Math::TTransform<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.RefreshPointData_Implementation()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void RefreshPointData_Implementation() const
    {
        NativeCall<void>(this, "APointOfInterestActor.RefreshPointData_Implementation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.SetPointTagUniqueState_Implementation(bool)
    // endereco: cache_pdb_25090264
    void SetPointTagUniqueState_Implementation(bool a0) const
    {
        NativeCall<void, bool>(this, "APointOfInterestActor.SetPointTagUniqueState_Implementation(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APointOfInterestActor.ViewPoint_Implementation(AActor*)
    // endereco: casamento de bytes com a build de referencia
    void ViewPoint_Implementation(void* a0) const
    {
        NativeCall<void, void*>(this, "APointOfInterestActor.ViewPoint_Implementation(AActor*)", a0);
    }

    APointOfInterestManagerList*& MyPointManagerField() const
    { return *GetNativePointerField<APointOfInterestManagerList**>(this, "APointOfInterestActor.MyPointManager"); }
    BrzCampoPonteiro MyPointOfInterestCompanionBehaviorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APointOfInterestActor.MyPointOfInterestCompanionBehavior")); }
    BrzCampoPonteiro MyPointOfInterestDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APointOfInterestActor.MyPointOfInterestData")); }
    USceneComponent*& PointRootCompField() const
    { return *GetNativePointerField<USceneComponent**>(this, "APointOfInterestActor.PointRootComp"); }
    BrzCampoPonteiro PointTextCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APointOfInterestActor.PointTextComp")); }
    BrzCampoPonteiro PointTitleTextCompField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APointOfInterestActor.PointTitleTextComp")); }
    USphereComponent*& PointUseSphereCompField() const
    { return *GetNativePointerField<USphereComponent**>(this, "APointOfInterestActor.PointUseSphereComp"); }
    float& TitleTextZOffsetField() const
    { return *GetNativePointerField<float*>(this, "APointOfInterestActor.TitleTextZOffset"); }
    BrzCampoPonteiro UseSphereLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APointOfInterestActor.UseSphereLocOffset")); }
    float& UseSphereRadiusField() const
    { return *GetNativePointerField<float*>(this, "APointOfInterestActor.UseSphereRadius"); }
    BitFieldValue<bool, unsigned __int32> bHasBeenViewed()
    { return { (void*)this, "bHasBeenViewed" }; }
    BitFieldValue<bool, unsigned __int32> bSyncWithPointManager()
    { return { (void*)this, "bSyncWithPointManager" }; }
    BitFieldValue<bool, unsigned __int32> bPreventViewMultiUseEntry()
    { return { (void*)this, "bPreventViewMultiUseEntry" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPointActor_Persistent()
    { return { (void*)this, "bDebugPointActor_Persistent" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPointActor_Single()
    { return { (void*)this, "bDebugPointActor_Single" }; }
    BitFieldValue<bool, unsigned __int32> bDebugPointActor_ClearDebugLines()
    { return { (void*)this, "bDebugPointActor_ClearDebugLines" }; }

};

#endif  // BRZ_SDK_JOGO_APOINTOFINTERESTACTOR_H
