// ==========================================================================
//  APrimalStructureSkeletalDoor — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESKELETALDOOR_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESKELETALDOOR_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UShapeComponent;
struct USkeletalMeshComponent;

#include "APrimalStructureDoor.h"

struct APrimalStructureSkeletalDoor : public APrimalStructureDoor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSkeletalDoor"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSkeletalDoor.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,in
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=90]]
    void OnBeginOverlap(void* a0, void* a1, void* a2, int a3, bool a4, void* a5) const
    {
        NativeCall<void, void*, void*, void*, int, bool, void*>(this, "APrimalStructureSkeletalDoor.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSkeletalDoor.OnEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=82]]
    void OnEndOverlap(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "APrimalStructureSkeletalDoor.OnEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSkeletalDoor.PostInitializeComponents()
    // endereco: casamento de bytes com a build de referencia
    void PostInitializeComponents() const
    {
        NativeCall<void>(this, "APrimalStructureSkeletalDoor.PostInitializeComponents()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSkeletalDoor.Tick(float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+string_aprovado]
    void Tick(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureSkeletalDoor.Tick(float)", a0);
    }

    BrzCampoPonteiro BuffToApplyWhenInsideStructureField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSkeletalDoor.BuffToApplyWhenInsideStructure")); }
    UShapeComponent*& DoorCollisionComponentField() const
    { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.DoorCollisionComponent"); }
    USkeletalMeshComponent*& SkeletalDoorComponentField() const
    { return *GetNativePointerField<USkeletalMeshComponent**>(this, "APrimalStructureSkeletalDoor.SkeletalDoorComponent"); }
    UShapeComponent*& TriggerComponentField() const
    { return *GetNativePointerField<UShapeComponent**>(this, "APrimalStructureSkeletalDoor.TriggerComponent"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESKELETALDOOR_H
