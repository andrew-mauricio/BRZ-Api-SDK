// ==========================================================================
//  FLevelUtils — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELUTILS_H
#define BRZ_SDK_JOGO_FLEVELUTILS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelUtils
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelUtils"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.ApplyLevelTransform(FLevelUtils::FApplyLevelTransformParams&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyLevelTransform(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelUtils.ApplyLevelTransform(FLevelUtils::FApplyLevelTransformParams&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.FindStreamingLevel(ULevel*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro FindStreamingLevel(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelUtils.FindStreamingLevel(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.FindStreamingLevel(UWorld*,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindStreamingLevel(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "FLevelUtils.FindStreamingLevel(UWorld*,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.GetServerVisibleStreamingLevel(UWorld*,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetServerVisibleStreamingLevel(void* a0, const FName& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FLevelUtils.GetServerVisibleStreamingLevel(UWorld*,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetServerVisibleStreamingLevel(void* a0, FName* a1) const
    { return GetServerVisibleStreamingLevel(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.IsValidStreamingLevel(UWorld*,wchar_t*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsValidStreamingLevel(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FLevelUtils.IsValidStreamingLevel(UWorld*,wchar_t*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelUtils.SupportsMakingVisibleTransactionRequests(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SupportsMakingVisibleTransactionRequests(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FLevelUtils.SupportsMakingVisibleTransactionRequests(UWorld*)", a0);
    }

    BrzCampoPonteiro ActorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelUtils.Actor")); }
    BrzCampoPonteiro LevelField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelUtils.Level")); }
    BrzCampoPonteiro LevelTransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelUtils.LevelTransform")); }
};

#endif  // BRZ_SDK_JOGO_FLEVELUTILS_H
