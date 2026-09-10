// ==========================================================================
//  FActorInstanceGuid — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FACTORINSTANCEGUID_H
#define BRZ_SDK_JOGO_FACTORINSTANCEGUID_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FActorInstanceGuid
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FActorInstanceGuid"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.GetActorGuids(AActor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorGuids(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorInstanceGuid.GetActorGuids(AActor&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.GetActorInstanceGuid(AActor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetActorInstanceGuid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorInstanceGuid.GetActorInstanceGuid(AActor&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.GetLevelInstanceGuid(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetLevelInstanceGuid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorInstanceGuid.GetLevelInstanceGuid(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.ReleaseActorInstanceGuid(AActor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReleaseActorInstanceGuid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorInstanceGuid.ReleaseActorInstanceGuid(AActor&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.ReleaseLevelInstanceGuid(ULevel*)
    // endereco: cache_pdb_25090264
    BrzPonteiro ReleaseLevelInstanceGuid(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FActorInstanceGuid.ReleaseLevelInstanceGuid(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.Serialize(FArchive&,AActor&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FActorInstanceGuid.Serialize(FArchive&,AActor&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FActorInstanceGuid.SetLevelInstanceGuid(ULevel*,ULevel*,FGuid&,FGuid&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetLevelInstanceGuid(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "FActorInstanceGuid.SetLevelInstanceGuid(ULevel*,ULevel*,FGuid&,FGuid&)", a0, a1, a2, a3);
    }

    BrzCampoPonteiro ActorGuidField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FActorInstanceGuid.ActorGuid")); }
};

#endif  // BRZ_SDK_JOGO_FACTORINSTANCEGUID_H
