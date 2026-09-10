// ==========================================================================
//  UMeshComponent — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UMESHCOMPONENT_H
#define BRZ_SDK_JOGO_UMESHCOMPONENT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UMaterialInterface;

#include "UPrimitiveComponent.h"

struct UMeshComponent : public UPrimitiveComponent
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UMeshComponent"); }

    // dump_sobre_sdk_287a0
    //   UMeshComponent.CacheMaterialParameterNameIndices()
    // endereco: casamento de bytes com a build de referencia
    void CacheMaterialParameterNameIndices() const
    {
        NativeCall<void>(this, "UMeshComponent.CacheMaterialParameterNameIndices()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.EmptyOverrideMaterials()
    // endereco: casamento de bytes com a build de referencia
    void EmptyOverrideMaterials() const
    {
        NativeCall<void>(this, "UMeshComponent.EmptyOverrideMaterials()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.GetMaterial(int)
    // endereco: casamento de bytes com a build de referencia
    UMaterialInterface* GetMaterial(int a0) const
    {
        return NativeCall<UMaterialInterface*, int>(this, "UMeshComponent.GetMaterial(int)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.GetMaterials()
    // endereco: casamento de bytes com a build de referencia
    void GetMaterials(void* retorno) const
    {
        NativeCall<void, void*>(this, "UMeshComponent.GetMaterials()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)
    // endereco: casamento de bytes com a build de referencia
    void GetUsedMaterials(void* a0, long long a1) const
    {
        NativeCall<void, void*, long long>(this, "UMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.MulticastHideInstance(int,UE::Math::TVector<double>,float,float,bool)
    // endereco: casamento de bytes com a build de referencia
    void MulticastHideInstance(int a0, void* a1, float a2, float a3, bool a4) const
    {
        NativeCall<void, int, void*, float, float, bool>(this, "UMeshComponent.MulticastHideInstance(int,UE::Math::TVector<double>,float,float,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.PrestreamTextures(float,bool,int)
    // endereco: casamento de bytes com a build de referencia
    void PrestreamTextures(float a0, bool a1, int a2) const
    {
        NativeCall<void, float, bool, int>(this, "UMeshComponent.PrestreamTextures(float,bool,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.SetMaterial(int,UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    void SetMaterial(int a0, void* a1) const
    {
        NativeCall<void, int, void*>(this, "UMeshComponent.SetMaterial(int,UMaterialInterface*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.SetMaterialByName(FName,UMaterialInterface*)
    // endereco: casamento de bytes com a build de referencia
    void SetMaterialByName(unsigned long long a0, void* a1) const
    {
        NativeCall<void, unsigned long long, void*>(this, "UMeshComponent.SetMaterialByName(FName,UMaterialInterface*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.SetScalarParameterValueOnMaterials(FName,float)
    // endereco: casamento de bytes com a build de referencia
    void SetScalarParameterValueOnMaterials(unsigned long long a0, float a1) const
    {
        NativeCall<void, unsigned long long, float>(this, "UMeshComponent.SetScalarParameterValueOnMaterials(FName,float)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UMeshComponent.SetTextureForceResidentFlag(bool)
    // endereco: casamento de bytes com a build de referencia
    void SetTextureForceResidentFlag(bool a0) const
    {
        NativeCall<void, bool>(this, "UMeshComponent.SetTextureForceResidentFlag(bool)", a0);
    }

    BrzCampoPonteiro DamageFXActorToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UMeshComponent.DamageFXActorToSpawn")); }
    TObjectPtr<UMaterialInterface>& OverlayMaterialField() const
    { return *GetNativePointerField<TObjectPtr<UMaterialInterface>*>(this, "UMeshComponent.OverlayMaterial"); }
    float& OverlayMaterialMaxDrawDistanceField() const
    { return *GetNativePointerField<float*>(this, "UMeshComponent.OverlayMaterialMaxDrawDistance"); }
    TArray<void*>& OverrideMaterialsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UMeshComponent.OverrideMaterials"); }
    BitFieldValue<bool, unsigned __int32> bEnableMaterialParameterCaching()
    { return { (void*)this, "bEnableMaterialParameterCaching" }; }
    BitFieldValue<bool, unsigned __int32> bCachedMaterialParameterIndicesAreDirty()
    { return { (void*)this, "bCachedMaterialParameterIndicesAreDirty" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePerPixelPainting()
    { return { (void*)this, "bDisablePerPixelPainting" }; }

};

#endif  // BRZ_SDK_JOGO_UMESHCOMPONENT_H
