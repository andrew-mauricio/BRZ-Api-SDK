// ==========================================================================
//  AHordeCrateManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_AHORDECRATEMANAGER_H
#define BRZ_SDK_JOGO_AHORDECRATEMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;

#include "AActor.h"

struct AHordeCrateManager : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AHordeCrateManager"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHordeCrateManager.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "AHordeCrateManager.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AHordeCrateManager.ForceStartHorde(AActor*,AShooterPlayerController*,TSubclassOf<AActor>,int)
    // endereco: casamento de bytes com a build de referencia
    void ForceStartHorde(void* a0, void* a1, void* a2, int a3) const
    {
        NativeCall<void, void*, void*, void*, int>(this, "AHordeCrateManager.ForceStartHorde(AActor*,AShooterPlayerController*,TSubclassOf<AActor>,int)", a0, a1, a2, a3);
    }

    TArray<void*>& ActiveEventsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHordeCrateManager.ActiveEvents"); }
    TArray<AActor*>& ActiveSpawnZonesField() const
    { return *GetNativePointerField<TArray<AActor*>*>(this, "AHordeCrateManager.ActiveSpawnZones"); }
    TArray<void*>& CrateDifficultyLevelsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHordeCrateManager.CrateDifficultyLevels"); }
    TArray<void*>& ElementNodeDifficultyLevelsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AHordeCrateManager.ElementNodeDifficultyLevels"); }
    float& MaxDelayBeforeInitialEventField() const
    { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxDelayBeforeInitialEvent"); }
    float& MaxEventCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MaxEventCheckInterval"); }
    float& MinDelayBeforeInitialEventField() const
    { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDelayBeforeInitialEvent"); }
    float& MinDistanceFromOtherEventField() const
    { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinDistanceFromOtherEvent"); }
    float& MinEventCheckIntervalField() const
    { return *GetNativePointerField<float*>(this, "AHordeCrateManager.MinEventCheckInterval"); }
    bool& bUseBPForceStartHordeField() const
    { return *GetNativePointerField<bool*>(this, "AHordeCrateManager.bUseBPForceStartHorde"); }
    BitFieldValue<bool, unsigned __int32> bIsEnabled()
    { return { (void*)this, "bIsEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPForceStartHorde()
    { return { (void*)this, "bUseBPForceStartHorde" }; }

};

#endif  // BRZ_SDK_JOGO_AHORDECRATEMANAGER_H
