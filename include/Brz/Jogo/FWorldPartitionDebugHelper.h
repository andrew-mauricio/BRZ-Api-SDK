// ==========================================================================
//  FWorldPartitionDebugHelper — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDPARTITIONDEBUGHELPER_H
#define BRZ_SDK_JOGO_FWORLDPARTITIONDEBUGHELPER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldPartitionDebugHelper
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldPartitionDebugHelper"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.AreDebugDataLayersShown(TArray<FName,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro AreDebugDataLayersShown(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FWorldPartitionDebugHelper.AreDebugDataLayersShown(TArray<FName,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.DrawLegendItem(UCanvas*,FString&,UFont*,FColor&,FColor&,UE::Math::TVe
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro DrawLegendItem(void* a0, const FString& a1, void* a2, void* a3, void* a4, void* a5, void* a6)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "FWorldPartitionDebugHelper.DrawLegendItem(UCanvas*,FString&,UFont*,FColor&,FColor&,UE::Math::TVector2<double>&,float*)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro DrawLegendItem(void* a0, FString* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
    { return DrawLegendItem(a0, *a1, a2, a3, a4, a5, a6); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.DrawText(UCanvas*,FString&,UFont*,FColor&,UE::Math::TVector2<double>&
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro DrawText(void* a0, const FString& a1, void* a2, void* a3, void* a4, void* a5)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*, void*>(nullptr, "FWorldPartitionDebugHelper.DrawText(UCanvas*,FString&,UFont*,FColor&,UE::Math::TVector2<double>&,float*)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro DrawText(void* a0, FString* a1, void* a2, void* a3, void* a4, void* a5)
    { return DrawText(a0, *a1, a2, a3, a4, a5); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.IsDebugCellNameShown(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsDebugCellNameShown(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "FWorldPartitionDebugHelper.IsDebugCellNameShown(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro IsDebugCellNameShown(FString* a0)
    { return IsDebugCellNameShown(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.IsDebugRuntimeHashGridShown(FName)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsDebugRuntimeHashGridShown(unsigned long long a0)
    {
        return NativeCall<void*, unsigned long long>(nullptr, "FWorldPartitionDebugHelper.IsDebugRuntimeHashGridShown(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionDebugHelper.IsDebugStreamingStatusShown(EStreamingStatus)
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsDebugStreamingStatusShown(int a0)
    {
        return NativeCall<void*, int>(nullptr, "FWorldPartitionDebugHelper.IsDebugStreamingStatusShown(EStreamingStatus)", a0);
    }

};

#endif  // BRZ_SDK_JOGO_FWORLDPARTITIONDEBUGHELPER_H
