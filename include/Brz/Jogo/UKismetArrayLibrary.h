// ==========================================================================
//  UKismetArrayLibrary — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UKISMETARRAYLIBRARY_H
#define BRZ_SDK_JOGO_UKISMETARRAYLIBRARY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UKismetArrayLibrary
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UKismetArrayLibrary"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Add(void*,FArrayProperty*,void*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Add(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Add(void*,FArrayProperty*,void*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_AddUnique(void*,FArrayProperty*,void*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_AddUnique(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_AddUnique(void*,FArrayProperty*,void*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Append(void*,FArrayProperty*,void*,FArrayProperty*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Append(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Append(void*,FArrayProperty*,void*,FArrayProperty*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Find(void*,FArrayProperty*,void*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Find(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Find(void*,FArrayProperty*,void*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Identical(void*,FArrayProperty*,void*,FArrayProperty*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Identical(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Identical(void*,FArrayProperty*,void*,FArrayProperty*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Insert(void*,FArrayProperty*,void*,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Insert(void* a0, void* a1, void* a2, int a3)
    {
        return NativeCall<void*, void*, void*, void*, int>(nullptr, "UKismetArrayLibrary.GenericArray_Insert(void*,FArrayProperty*,void*,int)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Random(void*,FArrayProperty*,void*,int*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Random(void* a0, void* a1, void* a2, void* a3)
    {
        return NativeCall<void*, void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Random(void*,FArrayProperty*,void*,int*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_RandomFromStream(void*,FArrayProperty*,FRandomStream*,void*,int
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_RandomFromStream(void* a0, void* a1, void* a2, void* a3, void* a4)
    {
        return NativeCall<void*, void*, void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_RandomFromStream(void*,FArrayProperty*,FRandomStream*,void*,int*)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Remove(void*,FArrayProperty*,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Remove(void* a0, void* a1, int a2)
    {
        return NativeCall<void*, void*, void*, int>(nullptr, "UKismetArrayLibrary.GenericArray_Remove(void*,FArrayProperty*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Resize(void*,FArrayProperty*,int)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Resize(void* a0, void* a1, int a2)
    {
        return NativeCall<void*, void*, void*, int>(nullptr, "UKismetArrayLibrary.GenericArray_Resize(void*,FArrayProperty*,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Set(void*,FArrayProperty*,int,void*,bool)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Set(void* a0, void* a1, int a2, void* a3, bool a4)
    {
        return NativeCall<void*, void*, void*, int, void*, bool>(nullptr, "UKismetArrayLibrary.GenericArray_Set(void*,FArrayProperty*,int,void*,bool)", a0, a1, a2, a3, a4);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_Shuffle(void*,FArrayProperty*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_Shuffle(void* a0, void* a1)
    {
        return NativeCall<void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_Shuffle(void*,FArrayProperty*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UKismetArrayLibrary.GenericArray_ShuffleFromStream(void*,FArrayProperty*,FRandomStream*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GenericArray_ShuffleFromStream(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UKismetArrayLibrary.GenericArray_ShuffleFromStream(void*,FArrayProperty*,FRandomStream*)", a0, a1, a2);
    }

};

#endif  // BRZ_SDK_JOGO_UKISMETARRAYLIBRARY_H
