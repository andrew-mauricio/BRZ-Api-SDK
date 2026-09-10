// ==========================================================================
//  FStringTable — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FSTRINGTABLE_H
#define BRZ_SDK_JOGO_FSTRINGTABLE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FStringTable
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FStringTable"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.ClearSourceStrings(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearSourceStrings(int a0) const
    {
        return NativeCall<void*, int>(this, "FStringTable.ClearSourceStrings(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.EnumerateKeysAndSourceStrings(TFunctionRef<bool__cdecl(FTextKey&,FString&)>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnumerateKeysAndSourceStrings(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTable.EnumerateKeysAndSourceStrings(TFunctionRef<bool__cdecl(FTextKey&,FString&)>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.EnumerateMetaData(FTextKey&,TFunctionRef<bool__cdecl(FName,FString&)>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnumerateMetaData(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FStringTable.EnumerateMetaData(FTextKey&,TFunctionRef<bool__cdecl(FName,FString&)>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.EnumerateSourceStrings(TFunctionRef<bool__cdecl(FString&,FString&)>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro EnumerateSourceStrings(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTable.EnumerateSourceStrings(TFunctionRef<bool__cdecl(FString&,FString&)>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.FindEntry(FTextKey&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro FindEntry(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTable.FindEntry(FTextKey&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.GetMetaData(FTextKey&,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMetaData(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "FStringTable.GetMetaData(FTextKey&,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.GetNamespace()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetNamespace() const
    {
        return NativeCall<void*>(this, "FStringTable.GetNamespace()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.GetSourceString(FTextKey&,FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSourceString(void* a0, const FString& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "FStringTable.GetSourceString(FTextKey&,FString&)", a0, const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetSourceString(void* a0, FString* a1) const
    { return GetSourceString(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTable.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   FStringTable.SetNamespace(FTextKey&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetNamespace(void* a0) const
    {
        return NativeCall<void*, void*>(this, "FStringTable.SetNamespace(FTextKey&)", a0);
    }
    BitFieldValue<bool, unsigned __int32> bIsInternal()
    { return { (void*)this, "bIsInternal" }; }
    BitFieldValue<bool, unsigned __int32> bIsLoaded()
    { return { (void*)this, "bIsLoaded" }; }
};

#endif  // BRZ_SDK_JOGO_FSTRINGTABLE_H
