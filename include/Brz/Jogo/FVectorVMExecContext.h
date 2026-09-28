// ==========================================================================
//  FVectorVMExecContext — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMEXECCONTEXT_H
#define BRZ_SDK_JOGO_FVECTORVMEXECCONTEXT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMExecContext
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMExecContext"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ConstantTableCountField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.ConstantTableCount")); }
    BrzCampoPonteiro ConstantTableDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.ConstantTableData")); }
    BrzCampoPonteiro ConstantTableNumBytesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.ConstantTableNumBytes")); }
    BrzCampoPonteiro DataSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.DataSets")); }
    BrzCampoPonteiro ExtFunctionTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.ExtFunctionTable")); }
    BrzCampoPonteiro InternalField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.Internal")); }
    BrzCampoPonteiro MaxChunksPerBatchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.MaxChunksPerBatch")); }
    BrzCampoPonteiro MaxInstancesPerChunkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.MaxInstancesPerChunk")); }
    BrzCampoPonteiro NumBytesRequiredPerBatchField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.NumBytesRequiredPerBatch")); }
    BrzCampoPonteiro NumInstancesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.NumInstances")); }
    BrzCampoPonteiro PerBatchRegisterDataBytesRequiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.PerBatchRegisterDataBytesRequired")); }
    BrzCampoPonteiro UserPtrTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.UserPtrTable")); }
    BrzCampoPonteiro VVMStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMExecContext.VVMState")); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMEXECCONTEXT_H
