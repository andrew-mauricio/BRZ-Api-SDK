// ==========================================================================
//  UPrimalAssets — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALASSETS_H
#define BRZ_SDK_JOGO_UPRIMALASSETS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UClass;
struct UObject;

#include "UPrimalAssetsBase.h"

struct UPrimalAssets : public UPrimalAssetsBase
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalAssets"); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.AsyncRequestReference(FSoftObjectPath&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AsyncRequestReference(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UPrimalAssets.AsyncRequestReference(FSoftObjectPath&,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalAssets.ClassAssetResolve(TSoftClassPtr<UObject>)
    // endereco: casamento de bytes com a build de referencia
    static UClass* ClassAssetResolve(void* a0)
    {
        return NativeCall<UClass*, void**>(nullptr, "UPrimalAssets.ClassAssetResolve(TSoftClassPtr<UObject>)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<ADroppedItem>(TSoftClassPtr<ADroppedItem>&,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=73+bytes40+chamadores=2]]
    BrzPonteiro Request_ADroppedItem_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<ADroppedItem>(TSoftClassPtr<ADroppedItem>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<APrimalBuff>(TSoftClassPtr<APrimalBuff>&,int)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=73+bytes40+chamadores=2]]
    BrzPonteiro Request_APrimalBuff_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<APrimalBuff>(TSoftClassPtr<APrimalBuff>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<APrimalDinoCharacter>(TSoftClassPtr<APrimalDinoCharacter>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_APrimalDinoCharacter_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<APrimalDinoCharacter>(TSoftClassPtr<APrimalDinoCharacter>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<APrimalEmitterSpawnable>(TSoftClassPtr<APrimalEmitterSpawnable>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_APrimalEmitterSpawnable_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<APrimalEmitterSpawnable>(TSoftClassPtr<APrimalEmitterSpawnable>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<APrimalStructure>(TSoftClassPtr<APrimalStructure>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_APrimalStructure_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<APrimalStructure>(TSoftClassPtr<APrimalStructure>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<APrimalStructureItemContainer_SupplyCrate>(TSoftClassPtr<APrimalStructureI
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Request_APrimalStructureItemContainer_SupplyCrate_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<APrimalStructureItemContainer_SupplyCrate>(TSoftClassPtr<APrimalStructureItemContainer_SupplyCrate>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<AShooterWeapon>(TSoftClassPtr<AShooterWeapon>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_AShooterWeapon_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<AShooterWeapon>(TSoftClassPtr<AShooterWeapon>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<UMaterialInterface>(TSoftObjectPtr<UMaterialInterface>&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Request_UMaterialInterface_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<UMaterialInterface>(TSoftObjectPtr<UMaterialInterface>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<UPrimalInventoryComponent>(TSoftClassPtr<UPrimalInventoryComponent>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_UPrimalInventoryComponent_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<UPrimalInventoryComponent>(TSoftClassPtr<UPrimalInventoryComponent>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<UPrimalItem>(TSoftClassPtr<UPrimalItem>&,int)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=73]]
    BrzPonteiro Request_UPrimalItem_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<UPrimalItem>(TSoftClassPtr<UPrimalItem>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Request<UStaticMesh>(TSoftObjectPtr<UStaticMesh>&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Request_UStaticMesh_(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.Request<UStaticMesh>(TSoftObjectPtr<UStaticMesh>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.RequestLoaded(FSoftObjectPath)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestLoaded(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAssets.RequestLoaded(FSoftObjectPath)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.RequestObject(TSoftObjectPtr<UObject>&,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RequestObject(void* a0, int a1) const
    {
        return NativeCall<void*, void**, int>(this, "UPrimalAssets.RequestObject(TSoftObjectPtr<UObject>&,int)", &a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<AActor>(TSoftClassPtr<AActor>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro Resolve_AActor_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<AActor>(TSoftClassPtr<AActor>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<ADroppedItem>(TSoftClassPtr<ADroppedItem>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_ADroppedItem_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<ADroppedItem>(TSoftClassPtr<ADroppedItem>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<AMissionType>(TSoftClassPtr<AMissionType>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_AMissionType_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<AMissionType>(TSoftClassPtr<AMissionType>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalBuff>(TSoftClassPtr<APrimalBuff>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=18]]
    BrzPonteiro Resolve_APrimalBuff_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalBuff>(TSoftClassPtr<APrimalBuff>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalDinoCharacter>(TSoftClassPtr<APrimalDinoCharacter>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=9]]
    BrzPonteiro Resolve_APrimalDinoCharacter_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalDinoCharacter>(TSoftClassPtr<APrimalDinoCharacter>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalEmitterSpawnable>(TSoftClassPtr<APrimalEmitterSpawnable>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=2]]
    BrzPonteiro Resolve_APrimalEmitterSpawnable_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalEmitterSpawnable>(TSoftClassPtr<APrimalEmitterSpawnable>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalPreviewSceneSetup>(TSoftClassPtr<APrimalPreviewSceneSetup>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=2]]
    BrzPonteiro Resolve_APrimalPreviewSceneSetup_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalPreviewSceneSetup>(TSoftClassPtr<APrimalPreviewSceneSetup>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalStructure>(TSoftClassPtr<APrimalStructure>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=12]]
    BrzPonteiro Resolve_APrimalStructure_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalStructure>(TSoftClassPtr<APrimalStructure>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<APrimalStructureItemContainer_SupplyCrate>(TSoftClassPtr<APrimalStructureI
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_APrimalStructureItemContainer_SupplyCrate_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<APrimalStructureItemContainer_SupplyCrate>(TSoftClassPtr<APrimalStructureItemContainer_SupplyCrate>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<AShooterWeapon>(TSoftClassPtr<AShooterWeapon>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=3]]
    BrzPonteiro Resolve_AShooterWeapon_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<AShooterWeapon>(TSoftClassPtr<AShooterWeapon>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UAnimInstance>(TSoftClassPtr<UAnimInstance>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=4]]
    BrzPonteiro Resolve_UAnimInstance_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UAnimInstance>(TSoftClassPtr<UAnimInstance>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UAnimMontage>(TSoftObjectPtr<UAnimMontage>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro Resolve_UAnimMontage_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UAnimMontage>(TSoftObjectPtr<UAnimMontage>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UAnimSequence>(TSoftObjectPtr<UAnimSequence>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=124]]
    BrzPonteiro Resolve_UAnimSequence_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UAnimSequence>(TSoftObjectPtr<UAnimSequence>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UAnimationAsset>(TSoftObjectPtr<UAnimationAsset>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=124+chamadores=9]]
    BrzPonteiro Resolve_UAnimationAsset_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UAnimationAsset>(TSoftObjectPtr<UAnimationAsset>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UBinkMediaPlayer>(TSoftObjectPtr<UBinkMediaPlayer>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_UBinkMediaPlayer_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UBinkMediaPlayer>(TSoftObjectPtr<UBinkMediaPlayer>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UDamageType>(TSoftClassPtr<UDamageType>&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=64]]
    BrzPonteiro Resolve_UDamageType_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UDamageType>(TSoftClassPtr<UDamageType>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UNPCSpawnEntriesContainer>(TSoftClassPtr<UNPCSpawnEntriesContainer>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro Resolve_UNPCSpawnEntriesContainer_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UNPCSpawnEntriesContainer>(TSoftClassPtr<UNPCSpawnEntriesContainer>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UObject>(TSoftClassPtr<UObject>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=12]]
    BrzPonteiro Resolve_UObject_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UObject>(TSoftClassPtr<UObject>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UPrimalInventoryComponent>(TSoftClassPtr<UPrimalInventoryComponent>&)
    // endereco: INFERIDO, com segunda evidencia [metodo_grafo [tam=64]]
    BrzPonteiro Resolve_UPrimalInventoryComponent_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UPrimalInventoryComponent>(TSoftClassPtr<UPrimalInventoryComponent>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UPrimalItem>(TSoftClassPtr<UPrimalItem>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=64+chamadores=5]]
    BrzPonteiro Resolve_UPrimalItem_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UPrimalItem>(TSoftClassPtr<UPrimalItem>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UPrimalUserWidget>(TSoftClassPtr<UPrimalUserWidget>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_UPrimalUserWidget_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UPrimalUserWidget>(TSoftClassPtr<UPrimalUserWidget>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<USkeletalMesh>(TSoftObjectPtr<USkeletalMesh>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro Resolve_USkeletalMesh_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<USkeletalMesh>(TSoftObjectPtr<USkeletalMesh>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UStaticMesh>(TSoftObjectPtr<UStaticMesh>&)
    // endereco: inferido pela POSICAO e depois PROVADO [posicao-PROVADA [tam=124+chamadores=2]]
    BrzPonteiro Resolve_UStaticMesh_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UStaticMesh>(TSoftObjectPtr<UStaticMesh>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Resolve<UUI_Notification>(TSoftClassPtr<UUI_Notification>&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro Resolve_UUI_Notification_(void* a0) const
    {
        return NativeCall<void*, void**>(this, "UPrimalAssets.Resolve<UUI_Notification>(TSoftClassPtr<UUI_Notification>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.ResolveObject(TSoftObjectPtr<UObject>&)
    // endereco: casamento de bytes com a build de referencia
    UObject* ResolveObject(void* a0) const
    {
        return NativeCall<UObject*, void**>(this, "UPrimalAssets.ResolveObject(TSoftObjectPtr<UObject>&)", &a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.RetainObject(UObject*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RetainObject(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAssets.RetainObject(UObject*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.Static_SyncResolveReference(FSoftObjectPath&)
    // endereco: cache_pdb_25090264
    BrzPonteiro Static_SyncResolveReference(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAssets.Static_SyncResolveReference(FSoftObjectPath&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalAssets.SyncResolveReference(FSoftObjectPath&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SyncResolveReference(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalAssets.SyncResolveReference(FSoftObjectPath&)", a0);
    }

    BrzCampoPonteiro RetainedObjectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalAssets.RetainedObjects")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALASSETS_H
