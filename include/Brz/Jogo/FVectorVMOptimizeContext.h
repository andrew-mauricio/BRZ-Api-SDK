// ==========================================================================
//  FVectorVMOptimizeContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMOPTIMIZECONTEXT_H
#define BRZ_SDK_JOGO_FVECTORVMOPTIMIZECONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMOptimizeContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMOptimizeContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ConstRemapField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.ConstRemap")); }
    BrzCampoPonteiro ExtFnTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.ExtFnTable")); }
    BrzCampoPonteiro FlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.Flags")); }
    BrzCampoPonteiro HashIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.HashId")); }
    BrzCampoPonteiro InputDataSetOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.InputDataSetOffsets")); }
    BrzCampoPonteiro InputRemapTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.InputRemapTable")); }
    BrzCampoPonteiro MaxExtFnRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.MaxExtFnRegisters")); }
    BrzCampoPonteiro MaxExtFnUsedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.MaxExtFnUsed")); }
    BrzCampoPonteiro MaxOutputDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.MaxOutputDataSet")); }
    BrzCampoPonteiro NumBytecodeBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumBytecodeBytes")); }
    BrzCampoPonteiro NumConstsAllocedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumConstsAlloced")); }
    BrzCampoPonteiro NumConstsRemappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumConstsRemapped")); }
    BrzCampoPonteiro NumDummyRegsReqField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumDummyRegsReq")); }
    BrzCampoPonteiro NumExtFnsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumExtFns")); }
    BrzCampoPonteiro NumInputDataSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumInputDataSets")); }
    BrzCampoPonteiro NumInputsRemappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumInputsRemapped")); }
    BrzCampoPonteiro NumNoAdvanceInputsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumNoAdvanceInputs")); }
    BrzCampoPonteiro NumOutputInstructionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumOutputInstructions")); }
    BrzCampoPonteiro NumOutputsRemappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumOutputsRemapped")); }
    BrzCampoPonteiro NumTempRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.NumTempRegisters")); }
    BrzCampoPonteiro OutputBytecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.OutputBytecode")); }
    BrzCampoPonteiro OutputRemapDataSetIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.OutputRemapDataSetIdx")); }
    BrzCampoPonteiro OutputRemapDataTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.OutputRemapDataType")); }
    BrzCampoPonteiro OutputRemapDstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMOptimizeContext.OutputRemapDst")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMOPTIMIZECONTEXT_H
