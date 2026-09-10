// ==========================================================================
//  ABaseBoxTrigger — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ABASEBOXTRIGGER_H
#define BRZ_SDK_JOGO_ABASEBOXTRIGGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UBoxComponent;
struct USceneComponent;

#include "AActor.h"

struct ABaseBoxTrigger : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ABaseBoxTrigger"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABaseBoxTrigger.BeginPlay()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=546+grafo=6/6]]
    void BeginPlay() const
    {
        NativeCall<void>(this, "ABaseBoxTrigger.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABaseBoxTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool
    // endereco: casamento de bytes com a build de referencia
    void OnTriggerBeginOverlap(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, int, bool, void*>(this, "ABaseBoxTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ABaseBoxTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)
    // endereco: cache_pdb_25090264
    void OnTriggerEndOverlap(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "ABaseBoxTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", a0, a1, a2, a3);
    }

    USceneComponent*& SceneCompField() const
    { return *GetNativePointerField<USceneComponent**>(this, "ABaseBoxTrigger.SceneComp"); }
    UBoxComponent*& TriggerBoxField() const
    { return *GetNativePointerField<UBoxComponent**>(this, "ABaseBoxTrigger.TriggerBox"); }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTriggerBeginOverlap()
    { return { (void*)this, "bUseBPOnTriggerBeginOverlap" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPOnTriggerEndOverlap()
    { return { (void*)this, "bUseBPOnTriggerEndOverlap" }; }

};

#endif  // BRZ_SDK_JOGO_ABASEBOXTRIGGER_H
