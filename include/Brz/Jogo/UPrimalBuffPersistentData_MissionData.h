// ==========================================================================
//  UPrimalBuffPersistentData_MissionData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_MISSIONDATA_H
#define BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_MISSIONDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AMissionType;


struct UPrimalBuffPersistentData_MissionData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalBuffPersistentData_MissionData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalBuffPersistentData_MissionData.GetObjectsToSkipDuringSeralization_Implementation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetObjectsToSkipDuringSeralization_Implementation() const
    {
        return NativeCall<void*>(this, "UPrimalBuffPersistentData_MissionData.GetObjectsToSkipDuringSeralization_Implementation()");
    }

    AMissionType*& ActiveMissionField() const
    { return *GetNativePointerField<AMissionType**>(this, "UPrimalBuffPersistentData_MissionData.ActiveMission"); }
    int& ActiveMissionIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_MissionData.ActiveMissionIndex"); }
    BrzCampoPonteiro ForPrimalBuffClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalBuffPersistentData_MissionData.ForPrimalBuffClass")); }
    FString& ForPrimalBuffClassStringField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData_MissionData.ForPrimalBuffClassString"); }
    BrzCampoPonteiro MissionDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalBuffPersistentData_MissionData.MissionData")); }
    BitFieldValue<bool, unsigned __int32> bPermanentlyPersist()
    { return { (void*)this, "bPermanentlyPersist" }; }
    BitFieldValue<bool, unsigned __int32> bSaveAndStopRefreshingOnDisconnect()
    { return { (void*)this, "bSaveAndStopRefreshingOnDisconnect" }; }
    BitFieldValue<bool, unsigned __int32> bSerializeAndStopRefreshingIfDead()
    { return { (void*)this, "bSerializeAndStopRefreshingIfDead" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALBUFFPERSISTENTDATA_MISSIONDATA_H
