// ==========================================================================
//  UObjectBaseUtility — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UOBJECTBASEUTILITY_H
#define BRZ_SDK_JOGO_UOBJECTBASEUTILITY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UObject;
struct UPackage;

#include "UObjectBase.h"

struct UObjectBaseUtility : public UObjectBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UObjectBaseUtility"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.AddToCluster(UObjectBaseUtility*,bool)
    // endereco: casamento de bytes com a build de referencia
    static void AddToCluster(void* a0, bool a1)
    {
        NativeCall<void, void*, bool>(nullptr, "UObjectBaseUtility.AddToCluster(UObjectBaseUtility*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.CanBeInCluster()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static bool CanBeInCluster()
    {
        return NativeCall<bool>(nullptr, "UObjectBaseUtility.CanBeInCluster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.CreateCluster()
    // endereco: casamento de bytes com a build de referencia
    static void CreateCluster()
    {
        NativeCall<void>(nullptr, "UObjectBaseUtility.CreateCluster()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetFullGroupName(bool)
    // endereco: casamento de bytes com a build de referencia
    static void GetFullGroupName(void* retorno, bool a0)
    {
        NativeCall<void, void*, bool>(nullptr, "UObjectBaseUtility.GetFullGroupName(bool)", retorno, a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.GetFullName(TStringBuilderBase<wchar_t>&,UObject*,EObjectFullNameFlags)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetFullName(void* a0, void* a1, int a2)
    {
        return NativeCall<void*, void*, void*, int>(nullptr, "UObjectBaseUtility.GetFullName(TStringBuilderBase<wchar_t>&,UObject*,EObjectFullNameFlags)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.GetFullName(UObject*,EObjectFullNameFlags)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetFullName(void* a0, int a1)
    {
        return NativeCall<void*, void*, int>(nullptr, "UObjectBaseUtility.GetFullName(UObject*,EObjectFullNameFlags)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.GetImplementingOuterObject(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetImplementingOuterObject(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UObjectBaseUtility.GetImplementingOuterObject(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetInterfaceAddress(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetInterfaceAddress(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UObjectBaseUtility.GetInterfaceAddress(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetLinker()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetLinker()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.GetLinker()");
    }

    // dump_sobre_sdk_287a0
    //   UObjectBaseUtility.GetLinkerCustomVersion(FGuid)
    // endereco: casamento de bytes com a build de referencia
    static long long GetLinkerCustomVersion(void* a0)
    {
        return NativeCall<long long, void*>(nullptr, "UObjectBaseUtility.GetLinkerCustomVersion(FGuid)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetLinkerIndex()
    // endereco: casamento de bytes com a build de referencia
    static int GetLinkerIndex()
    {
        return NativeCall<int>(nullptr, "UObjectBaseUtility.GetLinkerIndex()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetLinkerUEVersion()
    // endereco: casamento de bytes com a build de referencia
    static void GetLinkerUEVersion(void* retorno)
    {
        NativeCall<void, void*>(nullptr, "UObjectBaseUtility.GetLinkerUEVersion()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.GetNativeInterfaceAddress(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetNativeInterfaceAddress(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UObjectBaseUtility.GetNativeInterfaceAddress(UClass*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetOutermostObject()
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetOutermostObject()
    {
        return NativeCall<UObject*>(nullptr, "UObjectBaseUtility.GetOutermostObject()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetPackage()
    // endereco: casamento de bytes com a build de referencia
    static UPackage* GetPackage()
    {
        return NativeCall<UPackage*>(nullptr, "UObjectBaseUtility.GetPackage()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetPathName(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static void GetPathName(void* retorno, void* a0)
    {
        NativeCall<void, void*, void*>(nullptr, "UObjectBaseUtility.GetPathName(UObject*)", retorno, a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.GetTypedOuter(UClass*)
    // endereco: casamento de bytes com a build de referencia
    static UObject* GetTypedOuter(void* a0)
    {
        return NativeCall<UObject*, void*>(nullptr, "UObjectBaseUtility.GetTypedOuter(UClass*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.GetVersePath()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetVersePath()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.GetVersePath()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AActor>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_AActor_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AActor>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ACharacter>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_ACharacter_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ACharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AController>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_AController_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AController>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ADroppedItem>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_ADroppedItem_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ADroppedItem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ALandscapeProxy>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_ALandscapeProxy_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ALandscapeProxy>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AMissionDispatcher>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_AMissionDispatcher_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AMissionDispatcher>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AMissionType>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_AMissionType_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AMissionType>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ANPCZoneManager>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_ANPCZoneManager_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ANPCZoneManager>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APawn>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=4]]
    static BrzPonteiro IsA_APawn_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APawn>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APhysicsVolume>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APhysicsVolume_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APhysicsVolume>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalBuff>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_APrimalBuff_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalBuff>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalCharacter>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalCharacter_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalCharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalController>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_APrimalController_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalController>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalDinoAIController>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_APrimalDinoAIController_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalDinoAIController>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalDinoCharacter>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_APrimalDinoCharacter_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalDinoCharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalProjectileGrapplingHook>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalProjectileGrapplingHook_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalProjectileGrapplingHook>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalRaft>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_APrimalRaft_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalRaft>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalShip>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_APrimalShip_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalShip>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructure>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalStructure_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructure>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureDoor>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalStructureDoor_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureDoor>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureExplosive>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_APrimalStructureExplosive_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureExplosive>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureGhost>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_APrimalStructureGhost_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureGhost>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureItemContainer>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=10]]
    static BrzPonteiro IsA_APrimalStructureItemContainer_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureItemContainer>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureItemContainer_SupplyCrate>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_APrimalStructureItemContainer_SupplyCrate_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureItemContainer_SupplyCrate>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureSeating>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_APrimalStructureSeating_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureSeating>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureSeating_DriverSeat>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_APrimalStructureSeating_DriverSeat_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureSeating_DriverSeat>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalStructureTemplate>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalStructureTemplate_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalStructureTemplate>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalTargetableActor>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalTargetableActor_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalTargetableActor>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalWheeledVehicleCharacter>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_APrimalWheeledVehicleCharacter_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalWheeledVehicleCharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<APrimalWorldSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_APrimalWorldSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<APrimalWorldSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterCharacter>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_AShooterCharacter_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterCharacter>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterGameMode>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_AShooterGameMode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterGameMode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterGameState>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_AShooterGameState_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterGameState>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterHUD>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_AShooterHUD_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterHUD>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterPlayerController>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_AShooterPlayerController_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterPlayerController>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterPlayerState>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_AShooterPlayerState_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterPlayerState>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterSpectatorPawn>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_AShooterSpectatorPawn_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterSpectatorPawn>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AShooterWeapon>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_AShooterWeapon_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AShooterWeapon>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AVolume>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_AVolume_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AVolume>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<AWorldSettings>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_AWorldSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<AWorldSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UActorChannel>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UActorChannel_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UActorChannel>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UActorComponent>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=2]]
    static BrzPonteiro IsA_UActorComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UActorComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UAnimBlueprint>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UAnimBlueprint_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UAnimBlueprint>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UAnimSequence>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UAnimSequence_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UAnimSequence>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UBlueprint>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UBlueprint_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UBlueprint>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UBlueprintGeneratedClass>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UBlueprintGeneratedClass_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UBlueprintGeneratedClass>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UBorder>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UBorder_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UBorder>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UBoxComponent>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UBoxComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UBoxComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UButton>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UButton_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UButton>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UCapsuleComponent>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UCapsuleComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UCapsuleComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UChaosClothAsset>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UChaosClothAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UChaosClothAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UCheckBox>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UCheckBox_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UCheckBox>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UClass>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UClass_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UClass>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UComboBoxString>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UComboBoxString_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UComboBoxString>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UControlRig>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UControlRig_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UControlRig>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UCustomButtonWidget>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=13]]
    static BrzPonteiro IsA_UCustomButtonWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UCustomButtonWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDLC>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UDLC_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDLC>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataLayerAsset>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UDataLayerAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataLayerAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataListEntryButton_MarketItemDisplay>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UDataListEntryButton_MarketItemDisplay_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataListEntryButton_MarketItemDisplay>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataListEntryButton_MarketItemIcon>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UDataListEntryButton_MarketItemIcon_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataListEntryButton_MarketItemIcon>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataListEntryWidget>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UDataListEntryWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataListEntryWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataListPanel>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UDataListPanel_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataListPanel>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDataListValueGeneric>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UDataListValueGeneric_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDataListValueGeneric>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UDoubleCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UDoubleCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UDoubleCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UEditableTextBox>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UEditableTextBox_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UEditableTextBox>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UEnum>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UEnum_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UEnum>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UFKControlRig>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UFKControlRig_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UFKControlRig>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGameEngine>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UGameEngine_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGameEngine>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGeometryCache>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UGeometryCache_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGeometryCache>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGeometryCacheComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UGeometryCacheComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGeometryCacheComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGeometryCacheTrack>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UGeometryCacheTrack_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGeometryCacheTrack>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGroomAsset>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UGroomAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGroomAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGroomBindingAsset>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UGroomBindingAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGroomBindingAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UGroomCache>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UGroomCache_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UGroomCache>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UHUDActiveMissionWidget>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UHUDActiveMissionWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UHUDActiveMissionWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UHUDPointsOfInterestContainer>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UHUDPointsOfInterestContainer_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UHUDPointsOfInterestContainer>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UHoudiniInputSplineMeshComponent>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UHoudiniInputSplineMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UHoudiniInputSplineMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UImage>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UImage_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UImage>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInstancedStaticMeshComponent>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=5]]
    static BrzPonteiro IsA_UInstancedStaticMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInstancedStaticMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeDecalActorFactoryNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeDecalActorFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeDecalActorFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeDecalNode>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangeDecalNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeDecalNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeDirectionalLightNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeDirectionalLightNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeDirectionalLightNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangePhysicalCameraFactoryNode>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UInterchangePhysicalCameraFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangePhysicalCameraFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangePipelineBase>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangePipelineBase_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangePipelineBase>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangePointLightFactoryNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangePointLightFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangePointLightFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangePointLightNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangePointLightNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangePointLightNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangePythonPipelineAsset>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangePythonPipelineAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangePythonPipelineAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeRectLightFactoryNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeRectLightFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeRectLightFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeRectLightNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeRectLightNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeRectLightNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeSceneImportAsset>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangeSceneImportAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeSceneImportAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeSceneNode>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangeSceneNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeSceneNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeSourceData>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UInterchangeSourceData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeSourceData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeSpotLightFactoryNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeSpotLightFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeSpotLightFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeSpotLightNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeSpotLightNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeSpotLightNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeStandardCameraFactoryNode>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UInterchangeStandardCameraFactoryNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeStandardCameraFactoryNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeStandardCameraNode>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UInterchangeStandardCameraNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeStandardCameraNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInterchangeTexture2DNode>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UInterchangeTexture2DNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInterchangeTexture2DNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UInventoryQuickSlotsPanel>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UInventoryQuickSlotsPanel_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UInventoryQuickSlotsPanel>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UItemFilterWidget>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UItemFilterWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UItemFilterWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ULevel>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_ULevel_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ULevel>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ULevelStreamingDynamic>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_ULevelStreamingDynamic_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ULevelStreamingDynamic>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ULevelStreamingPersistent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_ULevelStreamingPersistent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ULevelStreamingPersistent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<ULinkerPlaceholderFunction>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_ULinkerPlaceholderFunction_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<ULinkerPlaceholderFunction>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMaterialInstance>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UMaterialInstance_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMaterialInstance>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMaterialInstanceDynamic>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UMaterialInstanceDynamic_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMaterialInstanceDynamic>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMaterialInterface>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UMaterialInterface_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMaterialInterface>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMaterialParameterCollectionInstance>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UMaterialParameterCollectionInstance_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMaterialParameterCollectionInstance>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMenuAnchor>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UMenuAnchor_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMenuAnchor>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMeshComponent>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMissionRequirementEntryWidget>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UMissionRequirementEntryWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMissionRequirementEntryWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMissionTimerWidget>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UMissionTimerWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMissionTimerWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieGraphCameraSettingNode>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UMovieGraphCameraSettingNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieGraphCameraSettingNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieGraphSettingNode>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UMovieGraphSettingNode_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieGraphSettingNode>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMoviePipelineDebugSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UMoviePipelineDebugSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMoviePipelineDebugSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMoviePipelineOutputSetting>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UMoviePipelineOutputSetting_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMoviePipelineOutputSetting>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieSceneCameraCutSection>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UMovieSceneCameraCutSection_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieSceneCameraCutSection>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieSceneCameraCutTrack>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UMovieSceneCameraCutTrack_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieSceneCameraCutTrack>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieSceneControlRigParameterSection>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UMovieSceneControlRigParameterSection_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieSceneControlRigParameterSection>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMovieSceneTrack>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UMovieSceneTrack_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMovieSceneTrack>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UMultiUseActionWidget>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UMultiUseActionWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UMultiUseActionWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UNavigationSystemV1>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UNavigationSystemV1_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UNavigationSystemV1>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UNetReplicationGraphConnection>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UNetReplicationGraphConnection_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UNetReplicationGraphConnection>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UNiagaraDataInterface>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UNiagaraDataInterface_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UNiagaraDataInterface>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusComputeDataInterface>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusComputeDataInterface_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusComputeDataInterface>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusDeformer>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusDeformer_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusDeformer>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusFunctionNodeGraph>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusFunctionNodeGraph_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusFunctionNodeGraph>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusGraphDataInterface>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusGraphDataInterface_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusGraphDataInterface>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusNodeGraph>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusNodeGraph_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusNodeGraph>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusNode_FunctionReference>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UOptimusNode_FunctionReference_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusNode_FunctionReference>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOptimusNode_SubGraphReference>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UOptimusNode_SubGraphReference_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOptimusNode_SubGraphReference>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UOverlay>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UOverlay_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UOverlay>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGCombinePointsSettings>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPCGCombinePointsSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGCombinePointsSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGCreatePointsSphereSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPCGCreatePointsSphereSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGCreatePointsSphereSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGFilterElementsByIndexSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPCGFilterElementsByIndexSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGFilterElementsByIndexSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGGraphInputOutputSettings>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPCGGraphInputOutputSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGGraphInputOutputSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGMergeDynamicMeshesSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UPCGMergeDynamicMeshesSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGMergeDynamicMeshesSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGParamData>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPCGParamData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGParamData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGPointData>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPCGPointData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGPointData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGPrimitiveCrossSectionSettings>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPCGPrimitiveCrossSectionSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGPrimitiveCrossSectionSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGSpatialData>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UPCGSpatialData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGSpatialData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPCGSplineData>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPCGSplineData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPCGSplineData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPDA_MainMenuIntro>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPDA_MainMenuIntro_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPDA_MainMenuIntro>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPackage>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPackage_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPackage>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPanelWidget>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPanelWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPanelWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UParticleSystem>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_UParticleSystem_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UParticleSystem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPhysicsAsset>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPhysicsAsset_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPhysicsAsset>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalBotRidingComponent>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UPrimalBotRidingComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalBotRidingComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalHarvestingComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPrimalHarvestingComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalHarvestingComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalInventoryComponent_StorageInterface>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UPrimalInventoryComponent_StorageInterface_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalInventoryComponent_StorageInterface>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalItem>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UPrimalItem_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalItem>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalItemInventoryToolTipWidget>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UPrimalItemInventoryToolTipWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalItemInventoryToolTipWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalRichTextBlock>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPrimalRichTextBlock_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalRichTextBlock>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalStaticData_MissionCompanionData>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UPrimalStaticData_MissionCompanionData_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalStaticData_MissionCompanionData>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalUserWidget>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UPrimalUserWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalUserWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimalWindSourceComponent>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UPrimalWindSourceComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimalWindSourceComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UPrimitiveComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UPrimitiveComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UPrimitiveComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UProgressionTreeGraph_Milestones>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UProgressionTreeGraph_Milestones_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UProgressionTreeGraph_Milestones>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<URotator3dCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_URotator3dCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<URotator3dCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<URotator3fCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_URotator3fCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<URotator3fCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USceneComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USceneComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USceneComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UScriptStruct>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UScriptStruct_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UScriptStruct>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UScrollBox>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UScrollBox_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UScrollBox>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UShooterDamageType>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UShooterDamageType_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UShooterDamageType>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UShooterEngine>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UShooterEngine_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UShooterEngine>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UShooterGameInstance>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UShooterGameInstance_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UShooterGameInstance>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UShooterGameUserSettings>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UShooterGameUserSettings_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UShooterGameUserSettings>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USizeBox>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USizeBox_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USizeBox>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USkeletalMesh>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_USkeletalMesh_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USkeletalMesh>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USkeletalMeshComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USkeletalMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USkeletalMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USkeletalMeshComponentWithSoftRef>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_USkeletalMeshComponentWithSoftRef_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USkeletalMeshComponentWithSoftRef>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USkeleton>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_USkeleton_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USkeleton>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USkinnedMeshComponent>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_USkinnedMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USkinnedMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USlider>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_USlider_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USlider>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USoundBase>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_USoundBase_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USoundBase>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USoundCue>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USoundCue_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USoundCue>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USparseVolumeTexture>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USparseVolumeTexture_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USparseVolumeTexture>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USpawnMapWidget>()
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsA_USpawnMapWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USpawnMapWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<USplineComponent>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_USplineComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<USplineComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UStaticMesh>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UStaticMesh_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UStaticMesh>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UStaticMeshComponent>()
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=65]]
    static BrzPonteiro IsA_UStaticMeshComponent_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UStaticMeshComponent>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UStaticMeshComponentWithSoftRef>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UStaticMeshComponentWithSoftRef_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UStaticMeshComponentWithSoftRef>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UStruct>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UStruct_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UStruct>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTextBlock>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UTextBlock_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTextBlock>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTexture2D>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=6]]
    static BrzPonteiro IsA_UTexture2D_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTexture2D>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTexture>()
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=65+chamadores=2]]
    static BrzPonteiro IsA_UTexture_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTexture>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTextureRenderTarget2D>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UTextureRenderTarget2D_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTextureRenderTarget2D>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTextureRenderTarget2DArray>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UTextureRenderTarget2DArray_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTextureRenderTarget2DArray>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTrackedDinoListEntryWidget>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UTrackedDinoListEntryWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTrackedDinoListEntryWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTradeItemButtonWidget>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UTradeItemButtonWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTradeItemButtonWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UTransform3fCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UTransform3fCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UTransform3fCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UUI_GarageInteraction>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UUI_GarageInteraction_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UUI_GarageInteraction>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UUI_MenuCarousel>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UUI_MenuCarousel_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UUI_MenuCarousel>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UUI_Spawn>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UUI_Spawn_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UUI_Spawn>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UUI_SurvivorProfile>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UUI_SurvivorProfile_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UUI_SurvivorProfile>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UUserDefinedStruct>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UUserDefinedStruct_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UUserDefinedStruct>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector2dCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UVector2dCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector2dCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector2fCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UVector2fCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector2fCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector3dCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UVector3dCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector3dCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector3fCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UVector3fCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector3fCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector4dCameraVariable>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    static BrzPonteiro IsA_UVector4dCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector4dCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVector4fCameraVariable>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UVector4fCameraVariable_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVector4fCameraVariable>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UVerticalBox>()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsA_UVerticalBox_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UVerticalBox>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UWidget>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UWidget_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UWidget>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UWidgetBlueprintGeneratedClass>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UWidgetBlueprintGeneratedClass_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UWidgetBlueprintGeneratedClass>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UWidgetSwitcher>()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=65]]
    static BrzPonteiro IsA_UWidgetSwitcher_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UWidgetSwitcher>()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsA<UWorld>()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro IsA_UWorld_()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsA<UWorld>()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.IsDefaultSubobject()
    // endereco: casamento de bytes com a build de referencia
    static bool IsDefaultSubobject()
    {
        return NativeCall<bool>(nullptr, "UObjectBaseUtility.IsDefaultSubobject()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UObjectBaseUtility.IsIn(UObject*)
    // endereco: casamento de bytes com a build de referencia
    static bool IsIn(void* a0)
    {
        return NativeCall<bool, void*>(nullptr, "UObjectBaseUtility.IsIn(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsInOuter(UObject*)
    // endereco: cache_pdb_25090264
    static BrzPonteiro IsInOuter(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UObjectBaseUtility.IsInOuter(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsPackageExternal()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsPackageExternal()
    {
        return NativeCall<void*>(nullptr, "UObjectBaseUtility.IsPackageExternal()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.IsTemplate(EObjectFlags)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    static BrzPonteiro IsTemplate(int a0)
    {
        return NativeCall<void*, int>(nullptr, "UObjectBaseUtility.IsTemplate(EObjectFlags)", a0);
    }

    // dump_sobre_sdk_287a0
    //   UObjectBaseUtility.MarkPackageDirty(bool)
    // endereco: casamento de bytes com a build de referencia
    static bool MarkPackageDirty(bool a0)
    {
        return NativeCall<bool, bool>(nullptr, "UObjectBaseUtility.MarkPackageDirty(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UObjectBaseUtility.ReloadObjectsFromModifiedConfigSections(FConfigModificationTracker*)
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro ReloadObjectsFromModifiedConfigSections(void* a0)
    {
        return NativeCall<void*, void*>(nullptr, "UObjectBaseUtility.ReloadObjectsFromModifiedConfigSections(FConfigModificationTracker*)", a0);
    }

    // ── SOBRECARGAS QUE NAO CABEM EM C++ ─────────────────────────────
    //
    //  Estas existem no jogo, e a chave delas resolve normalmente por
    //  `GetAddress` / `NativeCall`. O que nao cabe e' a DECLARACAO: em C
    //  os parametros viram os mesmos da que ficou, ou a diferenca esta'
    //  so' no retorno — e C++ nao sobrecarrega por retorno.
    //
    //  Para chamar uma destas, use `NativeCall` direto com a chave:
    //    UObjectBaseUtility.GetFullName(UObject*,FString&,EObjectFullNameFlags)
    //      (colide com UObjectBaseUtility.GetFullName(TStringBuilderBase<wchar_t>&,UObject*,EObjectFullNameFlags))
    //    UObjectBaseUtility.GetPathName(UObject*,FString&)
    //      (colide com UObjectBaseUtility.GetPathName(UObject*))
    //    UObjectBaseUtility.GetPathName(UObject*,TStringBuilderBase<wchar_t>&)
    //      (colide com UObjectBaseUtility.GetPathName(UObject*))
    //    UObjectBaseUtility.IsIn(UPackage*)
    //      (colide com UObjectBaseUtility.IsIn(UObject*))

};

#endif  // BRZ_SDK_JOGO_UOBJECTBASEUTILITY_H
