// ==========================================================================
//  FStringOutputDevice — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FSTRINGOUTPUTDEVICE_H
#define BRZ_SDK_JOGO_FSTRINGOUTPUTDEVICE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FStringOutputDevice
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FStringOutputDevice"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringOutputDevice.Serialize(wchar_t*,ELogVerbosity::Type,FName&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro Serialize(void* a0, int a1, const FName& a2)
    {
        return NativeCall<void*, void*, int, void*>(nullptr, "FStringOutputDevice.Serialize(wchar_t*,ELogVerbosity::Type,FName&)", a0, a1, const_cast<FName*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro Serialize(void* a0, int a1, FName* a2)
    { return Serialize(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringOutputDevice.operator+=(FString&)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro operator__(const FString& a0)
    {
        return NativeCall<void*, void*>(nullptr, "FStringOutputDevice.operator+=(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static BrzPonteiro operator__(FString* a0)
    { return operator__(*a0); }

};

#endif  // BRZ_SDK_JOGO_FSTRINGOUTPUTDEVICE_H
