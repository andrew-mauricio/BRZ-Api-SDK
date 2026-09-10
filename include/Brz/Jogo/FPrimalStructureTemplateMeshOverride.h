// ==========================================================================
//  FPrimalStructureTemplateMeshOverride — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEMESHOVERRIDE_H
#define BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEMESHOVERRIDE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UStaticMesh;


struct FPrimalStructureTemplateMeshOverride
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalStructureTemplateMeshOverride"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro MeshLocField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateMeshOverride.MeshLoc")); }
    BrzCampoPonteiro MeshRotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateMeshOverride.MeshRot")); }
    BrzCampoPonteiro MeshScaleField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateMeshOverride.MeshScale")); }
    BrzCampoPonteiro SkelMeshField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalStructureTemplateMeshOverride.SkelMesh")); }
    TObjectPtr<UStaticMesh>& StaticMeshField() const
    { return *GetNativePointerField<TObjectPtr<UStaticMesh>*>(this, "FPrimalStructureTemplateMeshOverride.StaticMesh"); }
};

#endif  // BRZ_SDK_JOGO_FPRIMALSTRUCTURETEMPLATEMESHOVERRIDE_H
