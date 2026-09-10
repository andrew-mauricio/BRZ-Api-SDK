// ==========================================================================
//  FStringTableRegistry — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FSTRINGTABLEREGISTRY_H
#define BRZ_SDK_JOGO_FSTRINGTABLEREGISTRY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;


struct FStringTableRegistry
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FStringTableRegistry"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.EnumerateStringTables(TFunctionRef<bool__cdecl(FName&,TSharedRef<FStringTab
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnumerateStringTables(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTableRegistry.EnumerateStringTables(TFunctionRef<bool__cdecl(FName&,TSharedRef<FStringTable,1>&)>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.FindStringTable(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindStringTable(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "FStringTableRegistry.FindStringTable(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.FindStringTableAsset(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindStringTableAsset(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "FStringTableRegistry.FindStringTableAsset(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.Get()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    UObject* Get() const
    {
        return NativeCall<UObject*>(this, "FStringTableRegistry.Get()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.LogMissingStringTableEntry(FName,FTextKey&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LogMissingStringTableEntry(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "FStringTableRegistry.LogMissingStringTableEntry(FName,FTextKey&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.RegisterStringTable(FName,TSharedRef<FStringTable,1>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterStringTable(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "FStringTableRegistry.RegisterStringTable(FName,TSharedRef<FStringTable,1>)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTableRegistry.UnregisterStringTable(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnregisterStringTable(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "FStringTableRegistry.UnregisterStringTable(FName)", a0);
    }
};

#endif  // BRZ_SDK_JOGO_FSTRINGTABLEREGISTRY_H
