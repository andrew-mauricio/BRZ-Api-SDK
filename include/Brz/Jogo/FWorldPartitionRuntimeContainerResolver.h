// ==========================================================================
//  FWorldPartitionRuntimeContainerResolver — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FWORLDPARTITIONRUNTIMECONTAINERRESOLVER_H
#define BRZ_SDK_JOGO_FWORLDPARTITIONRUNTIMECONTAINERRESOLVER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FWorldPartitionRuntimeContainerResolver
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FWorldPartitionRuntimeContainerResolver"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionRuntimeContainerResolver.GetAllocatedSize()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllocatedSize() const
    {
        return NativeCall<void*>(this, "FWorldPartitionRuntimeContainerResolver.GetAllocatedSize()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FWorldPartitionRuntimeContainerResolver.ResolveContainerPath(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveContainerPath(const FString& a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FWorldPartitionRuntimeContainerResolver.ResolveContainerPath(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ResolveContainerPath(FString* a0, FString* a1) const
    { return ResolveContainerPath(*a0, *a1); }

    BrzCampoPonteiro ContainersField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionRuntimeContainerResolver.Containers")); }
    BrzCampoPonteiro MainContainerPackageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FWorldPartitionRuntimeContainerResolver.MainContainerPackage")); }
};

#endif  // BRZ_SDK_JOGO_FWORLDPARTITIONRUNTIMECONTAINERRESOLVER_H
