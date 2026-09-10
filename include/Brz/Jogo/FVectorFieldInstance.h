// ==========================================================================
//  FVectorFieldInstance — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORFIELDINSTANCE_H
#define BRZ_SDK_JOGO_FVECTORFIELDINSTANCE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorFieldInstance
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorFieldInstance"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FVectorFieldInstance.UpdateTransforms(UE::Math::TMatrix<double>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateTransforms(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FVectorFieldInstance.UpdateTransforms(UE::Math::TMatrix<double>&)", a0);
    }

    BitFieldValue<bool, unsigned __int32> Index()
    { return { (void*)this, "Index" }; }
    BrzCampoPonteiro IntensityField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorFieldInstance.Intensity")); }
    BrzCampoPonteiro ResourceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorFieldInstance.Resource")); }
    BrzCampoPonteiro TightnessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorFieldInstance.Tightness")); }
    BrzCampoPonteiro WorldBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorFieldInstance.WorldBounds")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORFIELDINSTANCE_H
