// ==========================================================================
//  UPrimalWordFilter — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWORDFILTER_H
#define BRZ_SDK_JOGO_UPRIMALWORDFILTER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalWordFilter
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWordFilter"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.AddWordTrie(int,int,int,int&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddWordTrie(int a0, int a1, int a2, void* a3) const
    {
        return NativeCall<void*, int, int, int, void*>(this, "UPrimalWordFilter.AddWordTrie(int,int,int,int&)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.BinSearchAtIndex(FString&,int,FLetterNode&,int&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BinSearchAtIndex(const FString& a0, int a1, void* a2, void* a3, int a4) const
    {
        return NativeCall<void*, void*, int, void*, void*, int>(this, "UPrimalWordFilter.BinSearchAtIndex(FString&,int,FLetterNode&,int&,int)", const_cast<FString*>(&a0), a1, a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro BinSearchAtIndex(FString* a0, int a1, void* a2, void* a3, int a4) const
    { return BinSearchAtIndex(*a0, a1, a2, a3, a4); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.GetFirstCensoredIndex(FString&,int,int*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFirstCensoredIndex(const FString& a0, int a1, void* a2) const
    {
        return NativeCall<void*, void*, int, void*>(this, "UPrimalWordFilter.GetFirstCensoredIndex(FString&,int,int*)", const_cast<FString*>(&a0), a1, a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetFirstCensoredIndex(FString* a0, int a1, void* a2) const
    { return GetFirstCensoredIndex(*a0, a1, a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.HasBadParseCharacter(FString&,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro HasBadParseCharacter(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalWordFilter.HasBadParseCharacter(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HasBadParseCharacter(FString* a0, bool a1) const
    { return HasBadParseCharacter(*a0, a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.HasIllegalWord(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasIllegalWord(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWordFilter.HasIllegalWord(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro HasIllegalWord(FString* a0) const
    { return HasIllegalWord(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.Process()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Process() const
    {
        return NativeCall<void*>(this, "UPrimalWordFilter.Process()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWordFilter.SanitizeString(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SanitizeString(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWordFilter.SanitizeString(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SanitizeString(FString* a0) const
    { return SanitizeString(*a0); }

    FString& ActiveWordListRefField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalWordFilter.ActiveWordListRef"); }
    BrzCampoPonteiro CensoredWordsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWordFilter.CensoredWords")); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWordFilter.NativeClass")); }
    BitFieldValue<bool, unsigned __int32> dontCheckLetterRepeats()
    { return { (void*)this, "dontCheckLetterRepeats" }; }
    BitFieldValue<bool, unsigned __int32> wordsNeedSpaces()
    { return { (void*)this, "wordsNeedSpaces" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALWORDFILTER_H
