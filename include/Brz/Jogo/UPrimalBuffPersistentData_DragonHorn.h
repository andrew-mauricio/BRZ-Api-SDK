// ==========================================================================
//  UPrimalBuffPersistentData_DragonHorn — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_DRAGONHORN_H
#define BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_DRAGONHORN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UClass;


struct UPrimalBuffPersistentData_DragonHorn
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalBuffPersistentData_DragonHorn"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_DragonHorn.ClearLink()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearLink() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_DragonHorn.ClearLink()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_DragonHorn.ClearStoredPayload()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ClearStoredPayload() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_DragonHorn.ClearStoredPayload()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_DragonHorn.HasCompleteStoredDragon()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasCompleteStoredDragon() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_DragonHorn.HasCompleteStoredDragon()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_DragonHorn.HasLinkedDinoID()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro HasLinkedDinoID() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_DragonHorn.HasLinkedDinoID()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_DragonHorn.HasStoredDinoData()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasStoredDinoData() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_DragonHorn.HasStoredDinoData()");
    }

    UClass*& DinoClassField() const
    { return *GetNativePointerField<UClass**>(this, "UPrimalBuffPersistentData_DragonHorn.DinoClass"); }
    unsigned int& DinoID1Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoID1"); }
    unsigned int& DinoID2Field() const
    { return *GetNativePointerField<unsigned int*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoID2"); }
    FString& DinoNameField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoName"); }
    FString& DinoNameInMapField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.DinoNameInMap"); }
    BrzCampoPonteiro ForPrimalBuffClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalBuffPersistentData_DragonHorn.ForPrimalBuffClass")); }
    FString& ForPrimalBuffClassStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.ForPrimalBuffClassString"); }
    BrzCampoPonteiro LinkStateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalBuffPersistentData_DragonHorn.LinkState")); }
    double& NextComeHereTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextComeHereTime"); }
    double& NextFlyAwayTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextFlyAwayTime"); }
    double& NextGetMeTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextGetMeTime"); }
    double& NextLinkDragonTimeField() const
    { return *GetNativePointerField<double*>(this, "UPrimalBuffPersistentData_DragonHorn.NextLinkDragonTime"); }
    unsigned long long& OwningPlayerDataIDField() const
    { return *GetNativePointerField<unsigned long long*>(this, "UPrimalBuffPersistentData_DragonHorn.OwningPlayerDataID"); }
    FString& OwningPlayerUniqueNetIdField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_DragonHorn.OwningPlayerUniqueNetId"); }
    int& QuickActionUseIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_DragonHorn.QuickActionUseIndex"); }
    BrzCampoPonteiro StoredDinoCustomDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalBuffPersistentData_DragonHorn.StoredDinoCustomData")); }
    int& TargetingTeamField() const
    { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_DragonHorn.TargetingTeam"); }
    BitFieldValue<bool, unsigned __int32> bPermanentlyPersist()
    { return { (void*)this, "bPermanentlyPersist" }; }
    BitFieldValue<bool, unsigned __int32> bSaveAndStopRefreshingOnDisconnect()
    { return { (void*)this, "bSaveAndStopRefreshingOnDisconnect" }; }
    BitFieldValue<bool, unsigned __int32> bSerializeAndStopRefreshingIfDead()
    { return { (void*)this, "bSerializeAndStopRefreshingIfDead" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_DRAGONHORN_H
