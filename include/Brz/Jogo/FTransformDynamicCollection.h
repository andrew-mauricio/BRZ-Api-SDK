// ==========================================================================
//  FTransformDynamicCollection — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FTRANSFORMDYNAMICCOLLECTION_H
#define BRZ_SDK_JOGO_FTRANSFORMDYNAMICCOLLECTION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FTransformDynamicCollection
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FTransformDynamicCollection"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.Construct()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Construct() const
    {
        return NativeCall<void*>(this, "FTransformDynamicCollection.Construct()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.GetHasParent(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetHasParent(int a0) const
    {
        return NativeCall<void*, int>(this, "FTransformDynamicCollection.GetHasParent(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.GetNumTransforms()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNumTransforms() const
    {
        return NativeCall<void*>(this, "FTransformDynamicCollection.GetNumTransforms()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.GetParent(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetParent(int a0) const
    {
        return NativeCall<void*, int>(this, "FTransformDynamicCollection.GetParent(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.GetTransform(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetTransform(int a0) const
    {
        return NativeCall<void*, int>(this, "FTransformDynamicCollection.GetTransform(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.HasChildren(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasChildren(int a0) const
    {
        return NativeCall<void*, int>(this, "FTransformDynamicCollection.HasChildren(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.InitializeTransforms()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitializeTransforms() const
    {
        return NativeCall<void*>(this, "FTransformDynamicCollection.InitializeTransforms()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.SetHasParent(int,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetHasParent(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "FTransformDynamicCollection.SetHasParent(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformDynamicCollection.SetTransform(int,UE::Math::TTransform<float>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetTransform(int a0, void* a1) const
    {
        return NativeCall<void*, int, void*>(this, "FTransformDynamicCollection.SetTransform(int,UE::Math::TTransform<float>&)", a0, a1);
    }
    BrzCampoPonteiro RestCollectionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformDynamicCollection.RestCollection")); }
    BrzCampoPonteiro TransformField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformDynamicCollection.Transform")); }
};

#endif  // BRZ_SDK_JOGO_FTRANSFORMDYNAMICCOLLECTION_H
