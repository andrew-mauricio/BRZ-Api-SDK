// ==========================================================================
//  UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_HELPERADDDYNAMICCRAFTREQUIREMENTITEMS_H
#define BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_HELPERADDDYNAMICCRAFTREQUIREMENTITEMS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.AddBlockWithMaterial(FSt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddBlockWithMaterial(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.AddBlockWithMaterial(FString&,UMaterialInterface*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddBlockWithMaterial(FString* a0, void* a1) const
    { return AddBlockWithMaterial(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.AddBlockWithTex2D(FStrin
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddBlockWithTex2D(const FString& a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.AddBlockWithTex2D(FString&,UTexture2D*)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro AddBlockWithTex2D(FString* a0, void* a1) const
    { return AddBlockWithTex2D(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.Finish()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Finish() const
    {
        return NativeCall<void*>(this, "UPrimalItemInventoryToolTipWidget_HelperAddDynamicCraftRequirementItems.Finish()");
    }
};

#endif  // BRZ_SDK_JOGO_UPRIMALITEMINVENTORYTOOLTIPWIDGET_HELPERADDDYNAMICCRAFTREQUIREMENTITEMS_H
