// ==========================================================================
//  FDinoContentData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FDINOCONTENTDATA_H
#define BRZ_SDK_JOGO_FDINOCONTENTDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FDinoContentData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FDinoContentData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro Body_Impact_Size_Mult_9_197D28CA425237844607078D92E6711AField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoContentData.Body_Impact_Size_Mult_9_197D28CA425237844607078D92E6711A")); }
    BrzCampoPonteiro FootImpact_Size_Mult_6_7B9BB9844DA6FCCB2734298B8D14F388Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoContentData.FootImpact_Size_Mult_6_7B9BB9844DA6FCCB2734298B8D14F388")); }
    BrzCampoPonteiro Foot_Impact_Amount_Mult_4_68F8F48342BA13C8D5B263A2298DE525Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoContentData.Foot_Impact_Amount_Mult_4_68F8F48342BA13C8D5B263A2298DE525")); }
    BrzCampoPonteiro Foot_Impact_Velocity_Mult_2_7C765A16485FE747675120B0DA29D905Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FDinoContentData.Foot_Impact_Velocity_Mult_2_7C765A16485FE747675120B0DA29D905")); }
};

#endif  // BRZ_SDK_JOGO_FDINOCONTENTDATA_H
