// ==========================================================================
//  FVectorVMExternalFunctionContextExperimental — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMEXTERNALFUNCTIONCONTEXTEXPERIMENTAL_H
#define BRZ_SDK_JOGO_FVECTORVMEXTERNALFUNCTIONCONTEXTEXPERIMENTAL_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMExternalFunctionContextExperimental
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMExternalFunctionContextExperimental"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro DataSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.DataSets")); }
    BrzCampoPonteiro NumInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.NumInstances")); }
    BrzCampoPonteiro NumLoopsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.NumLoops")); }
    BrzCampoPonteiro NumRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.NumRegisters")); }
    BrzCampoPonteiro NumUserPtrsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.NumUserPtrs")); }
    BrzCampoPonteiro PerInstanceFnInstanceIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.PerInstanceFnInstanceIdx")); }
    BrzCampoPonteiro RandCountersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.RandCounters")); }
    BrzCampoPonteiro RandStreamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.RandStream")); }
    BrzCampoPonteiro RegIncField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.RegInc")); }
    BrzCampoPonteiro RegReadCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.RegReadCount")); }
    BrzCampoPonteiro RegisterDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.RegisterData")); }
    BrzCampoPonteiro StartInstanceField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.StartInstance")); }
    BrzCampoPonteiro UserPtrTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExternalFunctionContextExperimental.UserPtrTable")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMEXTERNALFUNCTIONCONTEXTEXPERIMENTAL_H
