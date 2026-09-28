// ==========================================================================
//  FVectorVMState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMSTATE_H
#define BRZ_SDK_JOGO_FVECTORVMSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro BatchOverheadSizeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.BatchOverheadSize")); }
    BrzCampoPonteiro BytecodeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.Bytecode")); }
    BrzCampoPonteiro ChunkLocalDataOutputIdxNumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ChunkLocalDataOutputIdxNumBytes")); }
    BrzCampoPonteiro ChunkLocalNumOutputNumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ChunkLocalNumOutputNumBytes")); }
    BrzCampoPonteiro ChunkLocalOutputMaskIdxNumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ChunkLocalOutputMaskIdxNumBytes")); }
    BrzCampoPonteiro ConstMapCacheIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ConstMapCacheIdx")); }
    BrzCampoPonteiro ConstMapCacheSrcField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ConstMapCacheSrc")); }
    BrzCampoPonteiro ConstRemapTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ConstRemapTable")); }
    BrzCampoPonteiro ConstantBuffersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ConstantBuffers")); }
    BrzCampoPonteiro ExecCtxCacheField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ExecCtxCache")); }
    BrzCampoPonteiro ExtFunctionTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.ExtFunctionTable")); }
    BrzCampoPonteiro FlagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.Flags")); }
    BrzCampoPonteiro InputDataSetOffsetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.InputDataSetOffsets")); }
    BrzCampoPonteiro InputMapCacheIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.InputMapCacheIdx")); }
    BrzCampoPonteiro InputMapCacheSrcField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.InputMapCacheSrc")); }
    BrzCampoPonteiro InputRemapTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.InputRemapTable")); }
    BrzCampoPonteiro MaxChunksPerBatchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.MaxChunksPerBatch")); }
    BrzCampoPonteiro MaxExtFnRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.MaxExtFnRegisters")); }
    BrzCampoPonteiro MaxInstancesPerChunkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.MaxInstancesPerChunk")); }
    BrzCampoPonteiro MaxOutputDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.MaxOutputDataSet")); }
    BrzCampoPonteiro NumBytecodeBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumBytecodeBytes")); }
    BrzCampoPonteiro NumBytesRequiredPerBatchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumBytesRequiredPerBatch")); }
    BrzCampoPonteiro NumConstBuffersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumConstBuffers")); }
    BrzCampoPonteiro NumDummyRegsRequiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumDummyRegsRequired")); }
    BrzCampoPonteiro NumExtFunctionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumExtFunctions")); }
    BrzCampoPonteiro NumInputBuffersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumInputBuffers")); }
    BrzCampoPonteiro NumInputDataSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumInputDataSets")); }
    BrzCampoPonteiro NumInstancesExecCachedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumInstancesExecCached")); }
    BrzCampoPonteiro NumOutputBuffersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumOutputBuffers")); }
    BrzCampoPonteiro NumOutputPerDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumOutputPerDataSet")); }
    BrzCampoPonteiro NumOutputsRemappedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumOutputsRemapped")); }
    BrzCampoPonteiro NumTempRegistersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.NumTempRegisters")); }
    BrzCampoPonteiro OptimizerHashIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.OptimizerHashId")); }
    BrzCampoPonteiro OutputRemapDataSetIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.OutputRemapDataSetIdx")); }
    BrzCampoPonteiro OutputRemapDataTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.OutputRemapDataType")); }
    BrzCampoPonteiro OutputRemapDstField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.OutputRemapDst")); }
    BrzCampoPonteiro PerBatchRegisterDataBytesRequiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.PerBatchRegisterDataBytesRequired")); }
    BrzCampoPonteiro TotalNumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMState.TotalNumBytes")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMSTATE_H
