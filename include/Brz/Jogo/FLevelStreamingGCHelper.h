// ==========================================================================
//  FLevelStreamingGCHelper — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELSTREAMINGGCHELPER_H
#define BRZ_SDK_JOGO_FLEVELSTREAMINGGCHELPER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelStreamingGCHelper
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelStreamingGCHelper"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.AddGarbageCollectorCallback()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=17]]
    static BrzPonteiro AddGarbageCollectorCallback()
    {
        return NativeCall<void*>(nullptr, "FLevelStreamingGCHelper.AddGarbageCollectorCallback()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.GetNumLevelsPendingPurge()
    // endereco: cache_pdb_25090264
    static BrzPonteiro GetNumLevelsPendingPurge()
    {
        return NativeCall<void*>(nullptr, "FLevelStreamingGCHelper.GetNumLevelsPendingPurge()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.OnPreGarbageCollect()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro OnPreGarbageCollect()
    {
        return NativeCall<void*>(nullptr, "FLevelStreamingGCHelper.OnPreGarbageCollect()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.OnWorldTickEnd(UWorld*,ELevelTick,float)
    // endereco: cache_pdb_25090264
    static BrzPonteiro OnWorldTickEnd(void* a0, int a1, float a2)
    {
        return NativeCall<void*, void*, int, float>(nullptr, "FLevelStreamingGCHelper.OnWorldTickEnd(UWorld*,ELevelTick,float)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.PrepareStreamedOutLevelForGC(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro PrepareStreamedOutLevelForGC(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FLevelStreamingGCHelper.PrepareStreamedOutLevelForGC(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.PrepareStreamedOutLevelsForGC()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102]]
    static BrzPonteiro PrepareStreamedOutLevelsForGC()
    {
        return NativeCall<void*>(nullptr, "FLevelStreamingGCHelper.PrepareStreamedOutLevelsForGC()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.RequestUnload(ULevel*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro RequestUnload(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FLevelStreamingGCHelper.RequestUnload(ULevel*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.TrashPackage(UPackage*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro TrashPackage(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "FLevelStreamingGCHelper.TrashPackage(UPackage*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FLevelStreamingGCHelper.VerifyLevelsGotRemovedByGC()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=29]]
    static BrzPonteiro VerifyLevelsGotRemovedByGC()
    {
        return NativeCall<void*>(nullptr, "FLevelStreamingGCHelper.VerifyLevelsGotRemovedByGC()");
    }

};

#endif  // BRZ_SDK_JOGO_FLEVELSTREAMINGGCHELPER_H
