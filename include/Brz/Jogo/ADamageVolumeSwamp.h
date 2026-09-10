// ==========================================================================
//  ADamageVolumeSwamp — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ADAMAGEVOLUMESWAMP_H
#define BRZ_SDK_JOGO_ADAMAGEVOLUMESWAMP_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "ADamageVolumeBase.h"

struct ADamageVolumeSwamp : public ADamageVolumeBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ADamageVolumeSwamp"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADamageVolumeSwamp.GetDamageNegationModifier(AActor*)
    // endereco: casamento de bytes com a build de referencia
    float GetDamageNegationModifier(void* a0) const
    {
        return NativeCall<float, void*>(this, "ADamageVolumeSwamp.GetDamageNegationModifier(AActor*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADamageVolumeSwamp.OnBeginOverlap(AActor*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=80]]
    void OnBeginOverlap(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ADamageVolumeSwamp.OnBeginOverlap(AActor*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADamageVolumeSwamp.OnEndOverlap(AActor*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=75]]
    void OnEndOverlap(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "ADamageVolumeSwamp.OnEndOverlap(AActor*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ADamageVolumeSwamp.Tick(float)
    // endereco: casamento de bytes com a build de referencia
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "ADamageVolumeSwamp.Tick(float)", a0);
    }

};

#endif  // BRZ_SDK_JOGO_ADAMAGEVOLUMESWAMP_H
