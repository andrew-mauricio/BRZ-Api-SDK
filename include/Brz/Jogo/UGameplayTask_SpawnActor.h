// ==========================================================================
//  UGameplayTask_SpawnActor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTASK_SPAWNACTOR_H
#define BRZ_SDK_JOGO_UGAMEPLAYTASK_SPAWNACTOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;


struct UGameplayTask_SpawnActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTask_SpawnActor"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_SpawnActor.BeginSpawningActor(UObject*,AActor*&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro BeginSpawningActor(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayTask_SpawnActor.BeginSpawningActor(UObject*,AActor*&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayTask_SpawnActor.FinishSpawningActor(UObject*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    AActor* FinishSpawningActor(void* a0, void* a1) const
    {
        return NativeCall<AActor*, void*, void*>(this, "UGameplayTask_SpawnActor.FinishSpawningActor(UObject*,AActor*)", a0, a1);
    }

    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DidNotSpawn` +16 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0x88; confianca alta)
    void*& CachedSpawnLocationField() const
    { return BrzCampoAncorado<void*>(this, "DidNotSpawn", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DidNotSpawn` +40 (distancia do porte de 06/09/2026, 24159508 -> 25090264;
    //  a ancora resolve por NOME a cada boot; offset absoluto na 25090264: 0xA0; confianca media)
    void*& CachedSpawnRotationField() const
    { return BrzCampoAncorado<void*>(this, "DidNotSpawn", 40); }
    BrzCampoPonteiro ChildTaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.ChildTask")); }
    BrzCampoPonteiro ClassToSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.ClassToSpawn")); }
    BrzCampoPonteiro DidNotSpawnField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.DidNotSpawn")); }
    FName& InstanceNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayTask_SpawnActor.InstanceName"); }
    BrzCampoPonteiro ResourceOverlapPolicyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.ResourceOverlapPolicy")); }
    BrzCampoPonteiro SuccessField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.success")); }
    BrzCampoPonteiro successField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTask_SpawnActor.success")); }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTASK_SPAWNACTOR_H
