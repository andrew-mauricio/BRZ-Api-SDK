// ==========================================================================
//  FPrimalStructureSkinData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURESKINDATA_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURESKINDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct USkeletalMeshComponent;


struct FPrimalStructureSkinData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureSkinData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ColorRegionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.ColorRegions")); }
    BrzCampoPonteiro DestroyedMeshesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.DestroyedMeshes")); }
    BrzCampoPonteiro ExtraComponentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.ExtraComponents")); }
    BrzCampoPonteiro FlipAxesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.FlipAxes")); }
    BrzCampoPonteiro MaterialOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.MaterialOverrides")); }
    TObjectPtr<USkeletalMeshComponent>& MeshField() const
    { return *GetNativePointerField<TObjectPtr<USkeletalMeshComponent>*>(this, "FPrimalStructureSkinData.Mesh"); }
    BrzCampoPonteiro MeshLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.MeshLoc")); }
    BrzCampoPonteiro MeshRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.MeshRot")); }
    BrzCampoPonteiro MeshScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.MeshScale")); }
    BrzCampoPonteiro RootLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.RootLoc")); }
    BrzCampoPonteiro RootRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.RootRot")); }
    BrzCampoPonteiro SoundOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.SoundOverrides")); }
    BrzCampoPonteiro TagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureSkinData.Tag")); }
    TArray<void*>& VariantsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "FPrimalStructureSkinData.Variants"); }
    BitFieldValue<bool, unsigned __int32> bUseMeshForPreviewOnly()
    { return { (void*)this, "bUseMeshForPreviewOnly" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURESKINDATA_H
