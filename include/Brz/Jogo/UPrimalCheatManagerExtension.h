// ==========================================================================
//  UPrimalCheatManagerExtension — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALCHEATMANAGEREXTENSION_H
#define BRZ_SDK_JOGO_UPRIMALCHEATMANAGEREXTENSION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalDinoCharacter;
struct AShooterCharacter;


struct UPrimalCheatManagerExtension
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalCheatManagerExtension"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCheatManagerExtension.GetAllActorsInRadius(ECheatActorType::Type,float)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetAllActorsInRadius(int a0, float a1)
    {
        return NativeCall<void*, int, float>(nullptr, "UPrimalCheatManagerExtension.GetAllActorsInRadius(ECheatActorType::Type,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCheatManagerExtension.GetAllExplorerNoteActors()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetAllExplorerNoteActors()
    {
        return NativeCall<void*>(nullptr, "UPrimalCheatManagerExtension.GetAllExplorerNoteActors()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCheatManagerExtension.GetPlayerCharacter()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    static AShooterCharacter* GetPlayerCharacter()
    {
        return NativeCall<AShooterCharacter*>(nullptr, "UPrimalCheatManagerExtension.GetPlayerCharacter()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCheatManagerExtension.GetRidingDino()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=102]]
    static APrimalDinoCharacter* GetRidingDino()
    {
        return NativeCall<APrimalDinoCharacter*>(nullptr, "UPrimalCheatManagerExtension.GetRidingDino()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalCheatManagerExtension.GetTargetActor()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=191]]
    static BrzPonteiro GetTargetActor()
    {
        return NativeCall<void*>(nullptr, "UPrimalCheatManagerExtension.GetTargetActor()");
    }

};

#endif  // BRZ_SDK_JOGO_UPRIMALCHEATMANAGEREXTENSION_H
