// ==========================================================================
//  FItemCount — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FITEMCOUNT_H
#define BRZ_SDK_JOGO_FITEMCOUNT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FItemCount
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FItemCount"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FItemCount.InSlot(int,FString&,int,int,float)
    // endereco: casamento de bytes com a build de referencia
    static void InSlot(void* retorno, int a0, const FString& a1, int a2, int a3, float a4)
    {
        NativeCall<void, void*, int, void*, int, int, float>(nullptr, "FItemCount.InSlot(int,FString&,int,int,float)", retorno, a0, const_cast<FString*>(&a1), a2, a3, a4);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void InSlot(void* retorno, int a0, FString* a1, int a2, int a3, float a4)
    { InSlot(retorno, a0, *a1, a2, a3, a4); }

    int& NumStacksField() const
    { return *GetNativePointerField<int*>(this, "FItemCount.NumStacks"); }
    float& QualityField() const
    { return *GetNativePointerField<float*>(this, "FItemCount.Quality"); }
    int& SlotField() const
    { return *GetNativePointerField<int*>(this, "FItemCount.Slot"); }
    int& StackSizeField() const
    { return *GetNativePointerField<int*>(this, "FItemCount.StackSize"); }
    BitFieldValue<bool, unsigned __int32> bAutoEquip()
    { return { (void*)this, "bAutoEquip" }; }
};

#endif  // BRZ_SDK_JOGO_FITEMCOUNT_H
