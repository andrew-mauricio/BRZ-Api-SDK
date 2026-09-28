// ==========================================================================
//  FLevelGrid_Struct — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELGRID_STRUCT_H
#define BRZ_SDK_JOGO_FLEVELGRID_STRUCT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelGrid_Struct
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelGrid_Struct"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro Letter_9_866DD5B04B935362C3B5B49E72EC2D61Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelGrid_Struct.Letter_9_866DD5B04B935362C3B5B49E72EC2D61")); }
    BrzCampoPonteiro Location_2_58B338E8426115C3CE0634A32ADA250FField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelGrid_Struct.Location_2_58B338E8426115C3CE0634A32ADA250F")); }
    BrzCampoPonteiro Number_8_A11AF1634DB5B12D216F169265EC4424Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelGrid_Struct.Number_8_A11AF1634DB5B12D216F169265EC4424")); }
};

#endif  // BRZ_SDK_JOGO_FLEVELGRID_STRUCT_H
