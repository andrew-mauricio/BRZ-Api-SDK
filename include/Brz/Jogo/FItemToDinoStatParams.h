// ==========================================================================
//  FItemToDinoStatParams — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FITEMTODINOSTATPARAMS_H
#define BRZ_SDK_JOGO_FITEMTODINOSTATPARAMS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FItemToDinoStatParams
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FItemToDinoStatParams"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro ConversionCurveField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemToDinoStatParams.ConversionCurve")); }
    BrzCampoPonteiro DinoStatField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FItemToDinoStatParams.DinoStat")); }
    unsigned char& ItemStatField() const
    { return *GetNativePointerField<unsigned char*>(this, "FItemToDinoStatParams.ItemStat"); }
    int& MaxDinoStatValueField() const
    { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxDinoStatValue"); }
    int& MaxItemStatValueField() const
    { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxItemStatValue"); }
    int& MinDinoStatValueField() const
    { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinDinoStatValue"); }
    int& MinItemStatValueField() const
    { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinItemStatValue"); }
};

#endif  // BRZ_SDK_JOGO_FITEMTODINOSTATPARAMS_H
