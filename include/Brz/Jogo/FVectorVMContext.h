// ==========================================================================
//  FVectorVMContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMCONTEXT_H
#define BRZ_SDK_JOGO_FVECTORVMCONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FVectorVMContext.PrepareForChunk(unsignedchar*,int,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareForChunk(void* a0, int a1, int a2) const
    {
        return NativeCall<void*, void*, int, int>(this, "FVectorVMContext.PrepareForChunk(unsignedchar*,int,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FVectorVMContext.PrepareForExec(int,int,unsignedchar**,int*,TDelegate<void__cdecl(FVectorVMExter
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PrepareForExec(int a0, int a1, void* a2, void* a3, void* a4, void* a5, void* a6, int a7, bool a8) const
    {
        return NativeCall<void*, int, int, void*, void*, void*, void*, void*, int, bool>(this, "FVectorVMContext.PrepareForExec(int,int,unsignedchar**,int*,TDelegate<void__cdecl(FVectorVMExternalFunctionContextProxy&)>**,void**,TArrayView<FDataSetMeta,int>,int,bool)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    BrzCampoPonteiro CodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMContext.Code")); }
    BrzCampoPonteiro NumInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMContext.NumInstances")); }
    BrzCampoPonteiro NumTempRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMContext.NumTempRegisters")); }
    BrzCampoPonteiro RandStreamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMContext.RandStream")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMCONTEXT_H
