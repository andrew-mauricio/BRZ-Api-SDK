// ==========================================================================
//  UGameplayTask_TimeLimitedExecution — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTASK_TIMELIMITEDEXECUTION_H
#define BRZ_SDK_JOGO_UGAMEPLAYTASK_TIMELIMITEDEXECUTION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayTask_TimeLimitedExecution
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTask_TimeLimitedExecution"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_TimeLimitedExecution.Activate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Activate() const
    {
        return NativeCall<void*>(this, "UGameplayTask_TimeLimitedExecution.Activate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_TimeLimitedExecution.GetDebugString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDebugString() const
    {
        return NativeCall<void*>(this, "UGameplayTask_TimeLimitedExecution.GetDebugString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_TimeLimitedExecution.OnGameplayTaskActivated(UGameplayTask&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro OnGameplayTaskActivated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask_TimeLimitedExecution.OnGameplayTaskActivated(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_TimeLimitedExecution.OnGameplayTaskDeactivated(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayTaskDeactivated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask_TimeLimitedExecution.OnGameplayTaskDeactivated(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_TimeLimitedExecution.OnTimer()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTimer() const
    {
        return NativeCall<void*>(this, "UGameplayTask_TimeLimitedExecution.OnTimer()");
    }

    BrzCampoPonteiro ChildTaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_TimeLimitedExecution.ChildTask")); }
    FName& InstanceNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayTask_TimeLimitedExecution.InstanceName"); }
    BrzCampoPonteiro OnFinishedField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_TimeLimitedExecution.OnFinished")); }
    BrzCampoPonteiro OnTimeExpiredField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_TimeLimitedExecution.OnTimeExpired")); }
    BrzCampoPonteiro ResourceOverlapPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_TimeLimitedExecution.ResourceOverlapPolicy")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTASK_TIMELIMITEDEXECUTION_H
