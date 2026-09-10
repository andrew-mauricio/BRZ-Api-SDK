// ==========================================================================
//  APrimalController — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALCONTROLLER_H
#define BRZ_SDK_JOGO_APRIMALCONTROLLER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;

#include "AController.h"

struct APrimalController : public AController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalController"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalController.GetAimedUseActor(UActorComponent**,int*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetAimedUseActor(void* a0, void* a1, bool a2, bool a3) const
    {
        return NativeCall<AActor*, void*, void*, bool, bool>(this, "APrimalController.GetAimedUseActor(UActorComponent**,int*,bool,bool)", a0, a1, a2, a3);
    }

    int& LastValidUnstasisCasterFrameField() const
    { return *GetNativePointerField<int*>(this, "APrimalController.LastValidUnstasisCasterFrame"); }
    BitFieldValue<bool, unsigned __int32> bDebugPathing()
    { return { (void*)this, "bDebugPathing" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALCONTROLLER_H
