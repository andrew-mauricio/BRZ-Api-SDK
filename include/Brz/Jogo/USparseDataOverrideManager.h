// ==========================================================================
//  USparseDataOverrideManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USPARSEDATAOVERRIDEMANAGER_H
#define BRZ_SDK_JOGO_USPARSEDATAOVERRIDEMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;

#include "UObject.h"

struct USparseDataOverrideManager : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("USparseDataOverrideManager"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.GetSparseDataOverrideManager(FName,bool&,USparseDataOverrideManager*&
    // endereco: casamento de bytes com a build de referencia
    static void GetSparseDataOverrideManager(unsigned long long a0, void* a1, void* a2)
    {
        NativeCall<void, unsigned long long, void*, void*>(nullptr, "USparseDataOverrideManager.GetSparseDataOverrideManager(FName,bool&,USparseDataOverrideManager*&)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Init()
    // endereco: casamento de bytes com a build de referencia
    void Init() const
    {
        NativeCall<void>(this, "USparseDataOverrideManager.Init()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideCraftingGivesItemQuantityOverride(int,UObject*)
    // endereco: cache_pdb_25090264
    static int Internal_OverrideCraftingGivesItemQuantityOverride(int a0, void* a1)
    {
        return NativeCall<int, int, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideCraftingGivesItemQuantityOverride(int,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideFemaleMatingTime(float,UObject*)
    // endereco: cache_pdb_25090264
    static float Internal_OverrideFemaleMatingTime(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideFemaleMatingTime(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideMateBoostDamageGiveMultiplier(float,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    static float Internal_OverrideMateBoostDamageGiveMultiplier(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostDamageGiveMultiplier(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideMateBoostDamageReceiveMultiplier(float,UObject*)
    // endereco: cache_pdb_25090264
    static float Internal_OverrideMateBoostDamageReceiveMultiplier(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostDamageReceiveMultiplier(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideMateBoostRange(float,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    static float Internal_OverrideMateBoostRange(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideMateBoostRange(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideRandomMutationChance(float,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    static float Internal_OverrideRandomMutationChance(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationChance(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideRandomMutationGivePoints(float,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    static float Internal_OverrideRandomMutationGivePoints(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationGivePoints(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideRandomMutationRolls(int,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=78]]
    static int Internal_OverrideRandomMutationRolls(int a0, void* a1)
    {
        return NativeCall<int, int, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRandomMutationRolls(int,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverrideRiderFlyingRotationRateModifier(float,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=76]]
    static float Internal_OverrideRiderFlyingRotationRateModifier(float a0, void* a1)
    {
        return NativeCall<float, float, void*>(nullptr, "USparseDataOverrideManager.Internal_OverrideRiderFlyingRotationRateModifier(float,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverridebIsAlphaEliteMegaDino(bool,UObject*)
    // endereco: cache_pdb_25090264
    static bool Internal_OverridebIsAlphaEliteMegaDino(bool a0, void* a1)
    {
        return NativeCall<bool, bool, void*>(nullptr, "USparseDataOverrideManager.Internal_OverridebIsAlphaEliteMegaDino(bool,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.Internal_OverridebUseBabyGestation(bool,UObject*)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=83]]
    static bool Internal_OverridebUseBabyGestation(bool a0, void* a1)
    {
        return NativeCall<bool, bool, void*>(nullptr, "USparseDataOverrideManager.Internal_OverridebUseBabyGestation(bool,UObject*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   USparseDataOverrideManager.StaticRegisterNativesUSparseDataOverrideManager()
    // endereco: cache_pdb_25090264
    static void StaticRegisterNativesUSparseDataOverrideManager()
    {
        NativeCall<void>(nullptr, "USparseDataOverrideManager.StaticRegisterNativesUSparseDataOverrideManager()");
    }

    FName& ManagerIDField() const
    { return *GetNativePointerField<FName*>(this, "USparseDataOverrideManager.ManagerID"); }
};

#endif  // BRZ_SDK_JOGO_USPARSEDATAOVERRIDEMANAGER_H
