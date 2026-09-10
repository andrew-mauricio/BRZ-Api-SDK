// ==========================================================================
//  UPrimalItemTrait — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALITEMTRAIT_H
#define BRZ_SDK_JOGO_UPRIMALITEMTRAIT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct UTexture2D;


struct UPrimalItemTrait
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalItemTrait"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.BPGetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BPGetTraitModifier(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalItemTrait.BPGetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.GetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)
    // endereco: cache_pdb_25090264
    BrzPonteiro GetTraitModifier(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "UPrimalItemTrait.GetTraitModifier(UPrimalItem*,FItemTraitModifier&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.OnTraitEffectActivated(UPrimalItem*,float,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTraitEffectActivated(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalItemTrait.OnTraitEffectActivated(UPrimalItem*,float,FBPNetExecParams&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.OnTraitEffectActivated_Implementation(UPrimalItem*,float,FBPNetExecParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTraitEffectActivated_Implementation(void* a0, float a1, void* a2) const
    {
        return NativeCall<void*, void*, float, void*>(this, "UPrimalItemTrait.OnTraitEffectActivated_Implementation(UPrimalItem*,float,FBPNetExecParams&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.OnTraitInitialized(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=128]]
    BrzPonteiro OnTraitInitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemTrait.OnTraitInitialized(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.OnTraitRemoved(UPrimalItem*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro OnTraitRemoved(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemTrait.OnTraitRemoved(UPrimalItem*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalItemTrait.OnTraitRemoved_Implementation(UPrimalItem*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTraitRemoved_Implementation(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalItemTrait.OnTraitRemoved_Implementation(UPrimalItem*)", a0);
    }

    BrzCampoPonteiro AllowedEquipmentTypesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemTrait.AllowedEquipmentTypes")); }
    BrzCampoPonteiro BuffsToAddWhenEquippedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemTrait.BuffsToAddWhenEquipped")); }
    FString& DescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.Description"); }
    FString& DisplayNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.DisplayName"); }
    FString& EffectDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.EffectDescription"); }
    BrzCampoPonteiro EffectDescriptionColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemTrait.EffectDescriptionColor")); }
    FString& EffectDescriptionTemplateField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.EffectDescriptionTemplate"); }
    TObjectPtr<UTexture2D>& IconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UPrimalItemTrait.Icon"); }
    BrzCampoPonteiro ModifiersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemTrait.Modifiers")); }
    FString& NameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.Name"); }
    FString& PrefixField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalItemTrait.Prefix"); }
    BrzCampoPonteiro PreventedItemsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalItemTrait.PreventedItems")); }
    FName& TypeField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalItemTrait.Type"); }
    BitFieldValue<bool, unsigned __int32> bReplicateOnItemTraitEffectActivated()
    { return { (void*)this, "bReplicateOnItemTraitEffectActivated" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPGetTraitModifier()
    { return { (void*)this, "bUseBPGetTraitModifier" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALITEMTRAIT_H
