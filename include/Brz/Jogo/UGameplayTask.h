// ==========================================================================
//  UGameplayTask — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTASK_H
#define BRZ_SDK_JOGO_UGAMEPLAYTASK_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UGameplayTasksComponent;
struct UWorld;


struct UGameplayTask
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTask"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.AddClaimedResource(TSubclassOf<UGameplayTaskResource>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddClaimedResource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask.AddClaimedResource(TSubclassOf<UGameplayTaskResource>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.AddRequiredResource(TSubclassOf<UGameplayTaskResource>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddRequiredResource(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask.AddRequiredResource(TSubclassOf<UGameplayTaskResource>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.ExternalCancel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ExternalCancel() const
    {
        return NativeCall<void*>(this, "UGameplayTask.ExternalCancel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.ExternalConfirm(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ExternalConfirm(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayTask.ExternalConfirm(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.GetAvatarActor()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAvatarActor() const
    {
        return NativeCall<void*>(this, "UGameplayTask.GetAvatarActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.GetDebugString()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDebugString() const
    {
        return NativeCall<void*>(this, "UGameplayTask.GetDebugString()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.GetGameplayTasksComponent(UGameplayTask&)
    // endereco: cache_pdb_25090264
    UGameplayTasksComponent* GetGameplayTasksComponent(void* a0) const
    {
        return NativeCall<UGameplayTasksComponent*, void*>(this, "UGameplayTask.GetGameplayTasksComponent(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.GetOwnerActor()
    // endereco: casamento de bytes com a build de referencia
    AActor* GetOwnerActor() const
    {
        return NativeCall<AActor*>(this, "UGameplayTask.GetOwnerActor()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.GetWorld()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=47]]
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "UGameplayTask.GetWorld()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.InitSimulatedTask(UGameplayTasksComponent&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitSimulatedTask(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask.InitSimulatedTask(UGameplayTasksComponent&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.InitTask(IGameplayTaskOwnerInterface&,unsignedchar)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitTask(void* a0, unsigned char a1) const
    {
        return NativeCall<void*, void*, unsigned char>(this, "UGameplayTask.InitTask(IGameplayTaskOwnerInterface&,unsignedchar)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.NewTask<UGameplayTask_SpawnActor>(IGameplayTaskOwnerInterface&,FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro NewTask_UGameplayTask_SpawnActor_(void* a0, unsigned long long a1) const
    {
        return NativeCall<void*, void*, unsigned long long>(this, "UGameplayTask.NewTask<UGameplayTask_SpawnActor>(IGameplayTaskOwnerInterface&,FName)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.OnDestroy(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnDestroy(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UGameplayTask.OnDestroy(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.OnGameplayTaskDeactivated(UGameplayTask&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro OnGameplayTaskDeactivated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask.OnGameplayTaskDeactivated(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.OnGameplayTaskInitialized(UGameplayTask&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnGameplayTaskInitialized(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayTask.OnGameplayTaskInitialized(UGameplayTask&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.Pause()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Pause() const
    {
        return NativeCall<void*>(this, "UGameplayTask.Pause()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.ReadyForActivation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReadyForActivation() const
    {
        return NativeCall<void*>(this, "UGameplayTask.ReadyForActivation()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.Resume()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Resume() const
    {
        return NativeCall<void*>(this, "UGameplayTask.Resume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask.TaskOwnerEnded()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    BrzPonteiro TaskOwnerEnded() const
    {
        return NativeCall<void*>(this, "UGameplayTask.TaskOwnerEnded()");
    }

    BrzCampoPonteiro ChildTaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask.ChildTask")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ResourceOverlapPolicy` +8, medido na build 25090264
    //  (offset absoluto medido: 0x42; confianca alta)
    void*& ClaimedResourcesField() const
    { return BrzCampoAncorado<void*>(this, "ResourceOverlapPolicy", 8); }
    FName& InstanceNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayTask.InstanceName"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceName` +8, medido na build 25090264
    //  (offset absoluto medido: 0x38; confianca alta)
    int& PriorityField() const
    { return BrzCampoAncorado<int>(this, "InstanceName", 8); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ResourceOverlapPolicy` +6, medido na build 25090264
    //  (offset absoluto medido: 0x40; confianca alta)
    void*& RequiredResourcesField() const
    { return BrzCampoAncorado<void*>(this, "ResourceOverlapPolicy", 6); }
    BrzCampoPonteiro ResourceOverlapPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask.ResourceOverlapPolicy")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ResourceOverlapPolicy` +14, medido na build 25090264
    //  (offset absoluto medido: 0x48; confianca alta)
    void*& TaskOwnerField() const
    { return BrzCampoAncorado<void*>(this, "ResourceOverlapPolicy", 14); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `InstanceName` +9, medido na build 25090264
    //  (offset absoluto medido: 0x39; confianca alta)
    void*& TaskStateField() const
    { return BrzCampoAncorado<void*>(this, "InstanceName", 9); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `ResourceOverlapPolicy` +30, medido na build 25090264
    //  (offset absoluto medido: 0x58; confianca alta)
    void*& TasksComponentField() const
    { return BrzCampoAncorado<void*>(this, "ResourceOverlapPolicy", 30); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTASK_H
