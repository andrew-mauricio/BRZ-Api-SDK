// ==========================================================================
//  APrimalStructureKeypad — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREKEYPAD_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREKEYPAD_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "APrimalStructureItemContainer.h"

struct APrimalStructureKeypad : public APrimalStructureItemContainer
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureKeypad"); }

    // retorno: CPF_ReturnParm — MESMO mecanismo do motor, NAO e' confirmacao
    //   APrimalStructureKeypad.ActivateKeypad(AShooterPlayerController*,int,bool)
    // endereco: casamento de bytes com a build de referencia
    bool ActivateKeypad(void* a0, int a1, bool a2) const
    {
        return NativeCall<bool, void*, int, bool>(this, "APrimalStructureKeypad.ActivateKeypad(AShooterPlayerController*,int,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureKeypad.ApplyPinCode(AShooterPlayerController*,int,bool,int)
    // endereco: casamento de bytes com a build de referencia
    bool ApplyPinCode(void* a0, int a1, bool a2, int a3) const
    {
        return NativeCall<bool, void*, int, bool, int>(this, "APrimalStructureKeypad.ApplyPinCode(AShooterPlayerController*,int,bool,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureKeypad.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureKeypad.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureKeypad.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefault
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureKeypad.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureKeypad.TryMultiUse(APlayerController*,int,int)
    // classe: a funcao mora em APrimalStructureItemContainer, e APrimalStructureKeypad herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureItemContainer.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    float& DoorActivationRangeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureKeypad.DoorActivationRange"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREKEYPAD_H
