// ==========================================================================
//  UGameplayTagReponseTable — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTAGREPONSETABLE_H
#define BRZ_SDK_JOGO_UGAMEPLAYTAGREPONSETABLE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayTagReponseTable
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTagReponseTable"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagReponseTable.AddOrUpdate(UAbilitySystemComponent*,TArray<TSubclassOf<UGameplayEffect
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddOrUpdate(void* a0, void* a1, int a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, int, void*>(this, "UGameplayTagReponseTable.AddOrUpdate(UAbilitySystemComponent*,TArray<TSubclassOf<UGameplayEffect>,TSizedDefaultAllocator<32>>&,int,TArray<FActiveGameplayEffectHandle,TSizedDefaultAllocator<32>>&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagReponseTable.GetCount(FGameplayTagReponsePair&,UAbilitySystemComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCount(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTagReponseTable.GetCount(FGameplayTagReponsePair&,UAbilitySystemComponent*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagReponseTable.PostLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostLoad() const
    {
        return NativeCall<void*>(this, "UGameplayTagReponseTable.PostLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagReponseTable.RegisterResponseForEvents(UAbilitySystemComponent*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterResponseForEvents(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTagReponseTable.RegisterResponseForEvents(UAbilitySystemComponent*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTagReponseTable.Remove(UAbilitySystemComponent*,TArray<FActiveGameplayEffectHandle,TSiz
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Remove(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTagReponseTable.Remove(UAbilitySystemComponent*,TArray<FActiveGameplayEffectHandle,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    TArray<void*>& EntriesField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UGameplayTagReponseTable.Entries"); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagReponseTable.NativeClass")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTAGREPONSETABLE_H
