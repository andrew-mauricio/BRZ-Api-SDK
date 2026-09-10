// ==========================================================================
//  ASkeletalMeshActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASKELETALMESHACTOR_H
#define BRZ_SDK_JOGO_ASKELETALMESHACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInterface;
struct USkeletalMesh;
struct USkeletalMeshComponent;

#include "AActor.h"

struct ASkeletalMeshActor : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ASkeletalMeshActor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.GetSkeletalMeshComponent()
    // endereco: cache_pdb_25090264
    USkeletalMeshComponent* GetSkeletalMeshComponent() const
    {
        return NativeCall<USkeletalMeshComponent*>(this, "ASkeletalMeshActor.GetSkeletalMeshComponent()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.OnRep_ReplicatedMaterial0()
    // endereco: cache_pdb_25090264
    void OnRep_ReplicatedMaterial0() const
    {
        NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial0()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.OnRep_ReplicatedMaterial1()
    // endereco: cache_pdb_25090264
    void OnRep_ReplicatedMaterial1() const
    {
        NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMaterial1()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.OnRep_ReplicatedMesh()
    // endereco: cache_pdb_25090264
    void OnRep_ReplicatedMesh() const
    {
        NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedMesh()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.OnRep_ReplicatedPhysAsset()
    // endereco: cache_pdb_25090264
    void OnRep_ReplicatedPhysAsset() const
    {
        NativeCall<void>(this, "ASkeletalMeshActor.OnRep_ReplicatedPhysAsset()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.PostInitializeComponents()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=35]]
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "ASkeletalMeshActor.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.PreviewSetAnimPosition(FName,int,UAnimSequence*,float,bool,bool,float)
    // endereco: casamento de bytes com a build de referencia
    void PreviewSetAnimPosition(unsigned long long a0, int a1, void* a2, float a3, bool a4, bool a5, float a6) const
    {
        NativeCall<void, unsigned long long, int, void*, float, bool, bool, float>(this, "ASkeletalMeshActor.PreviewSetAnimPosition(FName,int,UAnimSequence*,float,bool,bool,float)", a0, a1, a2, a3, a4, a5, a6);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ASkeletalMeshActor.SetAnimPosition(FName,int,UAnimSequence*,float,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetAnimPosition(unsigned long long a0, int a1, void* a2, float a3, bool a4, bool a5) const
    {
        NativeCall<void, unsigned long long, int, void*, float, bool, bool>(this, "ASkeletalMeshActor.SetAnimPosition(FName,int,UAnimSequence*,float,bool,bool)", a0, a1, a2, a3, a4, a5);
    }

    TObjectPtr<UMaterialInterface>& ReplicatedMaterial0Field() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "ASkeletalMeshActor.ReplicatedMaterial0"); }
    TObjectPtr<UMaterialInterface>& ReplicatedMaterial1Field() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "ASkeletalMeshActor.ReplicatedMaterial1"); }
    TObjectPtr<USkeletalMesh>& ReplicatedMeshField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMesh>*>(this, "ASkeletalMeshActor.ReplicatedMesh"); }
    BrzCampoPonteiro ReplicatedPhysAssetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ASkeletalMeshActor.ReplicatedPhysAsset")); }
    TObjectPtr<USkeletalMeshComponent>& SkeletalMeshComponentField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "ASkeletalMeshActor.SkeletalMeshComponent"); }
    BitFieldValue<bool, unsigned __int32> bShouldDoAnimNotifies()
    { return { (void*)this, "bShouldDoAnimNotifies" }; }

};

#endif  // BRZ_SDK_JOGO_ASKELETALMESHACTOR_H
