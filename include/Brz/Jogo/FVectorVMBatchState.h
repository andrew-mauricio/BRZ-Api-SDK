// ==========================================================================
//  FVectorVMBatchState — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FVECTORVMBATCHSTATE_H
#define BRZ_SDK_JOGO_FVECTORVMBATCHSTATE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FVectorVMBatchState
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FVectorVMBatchState"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ChunkIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.ChunkIdx")); }
    BrzCampoPonteiro ChunkLocalDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.ChunkLocalData")); }
    BrzCampoPonteiro CountersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.Counters")); }
    BrzCampoPonteiro ExtFnDecodedRegField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.ExtFnDecodedReg")); }
    BrzCampoPonteiro NumInstancesThisChunkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.NumInstancesThisChunk")); }
    BrzCampoPonteiro NumOutputPerDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.NumOutputPerDataSet")); }
    BrzCampoPonteiro OutputMaskIdxField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.OutputMaskIdx")); }
    BrzCampoPonteiro RandCountersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RandCounters")); }
    BrzCampoPonteiro RandStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RandState")); }
    BrzCampoPonteiro RandStreamField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RandStream")); }
    BrzCampoPonteiro RegIncTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RegIncTable")); }
    BrzCampoPonteiro RegPtrTableField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RegPtrTable")); }
    BrzCampoPonteiro RegisterDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.RegisterData")); }
    BrzCampoPonteiro StartInstanceThisChunkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.StartInstanceThisChunk")); }
    BrzCampoPonteiro StartingOutputIdxPerDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FVectorVMBatchState.StartingOutputIdxPerDataSet")); }
    int& StateField() const
    { return *GetNativePointerField<int*>(this, "FVectorVMBatchState.State"); }
};

#endif  // BRZ_SDK_JOGO_FVECTORVMBATCHSTATE_H
