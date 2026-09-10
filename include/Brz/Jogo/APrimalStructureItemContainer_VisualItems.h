// ==========================================================================
//  APrimalStructureItemContainer_VisualItems — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_VISUALITEMS_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_VISUALITEMS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UStaticMesh;
struct UStaticMeshComponent;

#include "APrimalStructureItemContainer.h"

struct APrimalStructureItemContainer_VisualItems : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureItemContainer_VisualItems"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals()
    // endereco: cache_pdb_25090264
    void BPUpdateItemVisuals() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_VisualItems.BeginPlay()
    // classe: a funcao mora em APrimalStructureItemContainer, e APrimalStructureItemContainer_VisualItems herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureItemContainer_VisualItems.UpdateVisuals()
    // endereco: cache_pdb_25090264
    void UpdateVisuals() const
    {
        NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.UpdateVisuals()");
    }

    UStaticMesh*& ExtraStaticMesh_HasItemsField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_HasItems"); }
    UStaticMesh*& ExtraStaticMesh_NoItemsField() const
    { return *GetNativePointerField<UStaticMesh**>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_NoItems"); }
    TArray<void*>& ItemClassesToCheckField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureItemContainer_VisualItems.ItemClassesToCheck"); }
    UStaticMeshComponent*& MyExtraStaticMeshField() const
    { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureItemContainer_VisualItems.MyExtraStaticMesh"); }
    bool& bIgnoreEngramsField() const
    { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreEngrams"); }
    BitFieldValue<bool, unsigned __int32> bHasItems()
    { return { (void*)this, "bHasItems" }; }
    BitFieldValue<bool, unsigned __int32> bDoItemVisuals()
    { return { (void*)this, "bDoItemVisuals" }; }
    BitFieldValue<bool, unsigned __int32> bPreviousHasItems()
    { return { (void*)this, "bPreviousHasItems" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreBlueprints()
    { return { (void*)this, "bIgnoreBlueprints" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreEngrams()
    { return { (void*)this, "bIgnoreEngrams" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREITEMCONTAINER_VISUALITEMS_H
