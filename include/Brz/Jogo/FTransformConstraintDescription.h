// ==========================================================================
//  FTransformConstraintDescription — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTDESCRIPTION_H
#define BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTDESCRIPTION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FTransformConstraintDescription
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FTransformConstraintDescription"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.AccumulateConstraintTransform(UE::Math::TTransform<double>&,UE::
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AccumulateConstraintTransform(void* a0, void* a1, void* a2, float a3, void* a4) const
    {
        return NativeCall<void*, void*, void*, void*, float, void*>(this, "FTransformConstraintDescription.AccumulateConstraintTransform(UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,UE::Math::TTransform<double>&,float,FMultiTransformBlendHelper&)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.DoesAffectRotation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro DoesAffectRotation() const
    {
        return NativeCall<void*>(this, "FTransformConstraintDescription.DoesAffectRotation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.DoesAffectScale()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro DoesAffectScale() const
    {
        return NativeCall<void*>(this, "FTransformConstraintDescription.DoesAffectScale()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.DoesAffectTransform()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DoesAffectTransform() const
    {
        return NativeCall<void*>(this, "FTransformConstraintDescription.DoesAffectTransform()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.DoesAffectTranslation()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro DoesAffectTranslation() const
    {
        return NativeCall<void*>(this, "FTransformConstraintDescription.DoesAffectTranslation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.GetDisplayString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDisplayString() const
    {
        return NativeCall<void*>(this, "FTransformConstraintDescription.GetDisplayString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FTransformConstraintDescription.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FTransformConstraintDescription.Serialize(FArchive&)", a0);
    }

    BrzCampoPonteiro TransformTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FTransformConstraintDescription.TransformType")); }
};

#endif  // BRZ_SDK_JOGO_FTRANSFORMCONSTRAINTDESCRIPTION_H
