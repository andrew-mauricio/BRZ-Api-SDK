// ==========================================================================
//  FActorClassAttachmentInfo — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORCLASSATTACHMENTINFO_H
#define BRZ_SDK_JOGO_FACTORCLASSATTACHMENTINFO_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UTexture2D;


struct FActorClassAttachmentInfo
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorClassAttachmentInfo"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    UTexture2D*& FPVHandsMeshTextureMaskField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMask"); }
    int& FPVHandsMeshTextureMaskMaterialIndexField() const
    { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskMaterialIndex"); }
    int& FPVHandsMeshTextureMaskMaterialIndex2Field() const
    { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskMaterialIndex2"); }
    FName& FPVHandsMeshTextureMaskParamNameField() const
    { return *GetNativePointerField<FName*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskParamName"); }
    BrzCampoPonteiro ItemAttachmentInfosField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorClassAttachmentInfo.ItemAttachmentInfos")); }
    BrzCampoPonteiro OwnerActorClassParentField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorClassAttachmentInfo.OwnerActorClassParent")); }
    UTexture2D*& PlayerMeshNoItemDefaultTextureMaskField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FActorClassAttachmentInfo.PlayerMeshNoItemDefaultTextureMask"); }
    UTexture2D*& PlayerMeshTextureMaskField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMask"); }
    int& PlayerMeshTextureMaskMaterialIndexAltField() const
    { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskMaterialIndexAlt"); }
    int& PlayerMeshTextureMaskMaterialIndexNewField() const
    { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskMaterialIndexNew"); }
    FName& PlayerMeshTextureMaskParamNameField() const
    { return *GetNativePointerField<FName*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskParamName"); }
    BrzCampoPonteiro PreventOnActorsWithTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorClassAttachmentInfo.PreventOnActorsWithTag")); }
};

#endif  // BRZ_SDK_JOGO_FACTORCLASSATTACHMENTINFO_H
