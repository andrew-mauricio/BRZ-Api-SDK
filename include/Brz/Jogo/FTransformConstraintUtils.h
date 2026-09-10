// ==========================================================================
//  FTransformConstraintUtils — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTUTILS_H
#define BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTUTILS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FTransformConstraintUtils
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FTransformConstraintUtils"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintUtils.BuildAttachmentsDependencies(UWorld*,UTickableTransformConstraint*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BuildAttachmentsDependencies(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "FTransformConstraintUtils.BuildAttachmentsDependencies(UWorld*,UTickableTransformConstraint*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintUtils.BuildDependencies(UWorld*,UTickableTransformConstraint*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BuildDependencies(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "FTransformConstraintUtils.BuildDependencies(UWorld*,UTickableTransformConstraint*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintUtils.CreateFromType(UWorld*,ETransformConstraintType,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateFromType(void* a0, int a1, bool a2)
    {
        return NativeCall<void*, void*, int, bool>(nullptr, "FTransformConstraintUtils.CreateFromType(UWorld*,ETransformConstraintType,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintUtils.CreateHandleForSceneComponent(USceneComponent*,FName&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro CreateHandleForSceneComponent(void* a0, const FName& a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "FTransformConstraintUtils.CreateHandleForSceneComponent(USceneComponent*,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro CreateHandleForSceneComponent(void* a0, FName* a1)
    { return CreateHandleForSceneComponent(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintUtils.GetParentConstraints(UWorld*,AActor*,TArray<TWeakObjectPtr<UTickableCo
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetParentConstraints(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "FTransformConstraintUtils.GetParentConstraints(UWorld*,AActor*,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

};

#endif  // BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTUTILS_H
