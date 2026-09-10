// ==========================================================================
//  AStructurePreventionZoneVolume — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ASTRUCTUREPREVENTIONZONEVOLUME_H
#define BRZ_SDK_JOGO_ASTRUCTUREPREVENTIONZONEVOLUME_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AActor.h"

struct AStructurePreventionZoneVolume : public AActor
{
    static UClass* StaticClass()
    { return BrzClassePorNome("AStructurePreventionZoneVolume"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AStructurePreventionZoneVolume.BPIsWithinAnyStructurePreventionVolume(UWorld*,UE::Math::TVector<
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro BPIsWithinAnyStructurePreventionVolume(void* a0, void* a1, bool a2, bool a3, bool a4)
    {
        return NativeCall<void*, void*, void*, bool, bool, bool>(nullptr, "AStructurePreventionZoneVolume.BPIsWithinAnyStructurePreventionVolume(UWorld*,UE::Math::TVector<double>&,bool,bool,bool)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AStructurePreventionZoneVolume.EndPlay(EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    void EndPlay(int a0) const
    {
        NativeCall<void, int>(this, "AStructurePreventionZoneVolume.EndPlay(EEndPlayReason::Type)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AStructurePreventionZoneVolume.GetBuildRestrictionAtPointForTeam(UWorld*,UE::Math::TVector<doubl
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetBuildRestrictionAtPointForTeam(void* a0, void* a1, int a2) const
    {
        return NativeCall<void*, void*, void*, int>(this, "AStructurePreventionZoneVolume.GetBuildRestrictionAtPointForTeam(UWorld*,UE::Math::TVector<double>,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AStructurePreventionZoneVolume.InitAddToActorList()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=174+grafo=11/11]]
    BrzPonteiro InitAddToActorList() const
    {
        return NativeCall<void*>(this, "AStructurePreventionZoneVolume.InitAddToActorList()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AStructurePreventionZoneVolume.IsPointAllowed(UWorld*,UE::Math::TVector<double>,bool,APrimalStru
    // endereco: casamento de bytes com a build de referencia
    static bool IsPointAllowed(void* a0, void* a1, bool a2, void* a3)
    {
        return NativeCall<bool, void*, void*, bool, void*>(nullptr, "AStructurePreventionZoneVolume.IsPointAllowed(UWorld*,UE::Math::TVector<double>,bool,APrimalStructure*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AStructurePreventionZoneVolume.IsStructureAllowed(UWorld*,APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStructureAllowed(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "AStructurePreventionZoneVolume.IsStructureAllowed(UWorld*,APrimalStructure*)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   AStructurePreventionZoneVolume.IsStructureAllowedInVolume(APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsStructureAllowedInVolume(void* a0) const
    {
        return NativeCall<void*, void*>(this, "AStructurePreventionZoneVolume.IsStructureAllowedInVolume(APrimalStructure*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   AStructurePreventionZoneVolume.IsWithinAnyVolume(UWorld*,UE::Math::TVector<double>,bool,AStructu
    // endereco: casamento de bytes com a build de referencia
    static bool IsWithinAnyVolume(void* a0, void* a1, bool a2, void* a3, bool a4, bool a5, void* a6)
    {
        return NativeCall<bool, void*, void*, bool, void*, bool, bool, void*>(nullptr, "AStructurePreventionZoneVolume.IsWithinAnyVolume(UWorld*,UE::Math::TVector<double>,bool,AStructurePreventionZoneVolume**,bool,bool,float*)", a0, a1, a2, a3, a4, a5, a6);
    }

    TArray<void*>& ForcePreventStructuresWithTheseTagsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AStructurePreventionZoneVolume.ForcePreventStructuresWithTheseTags"); }
    TArray<void*>& OnlyAllowStructuresOfTypeField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AStructurePreventionZoneVolume.OnlyAllowStructuresOfType"); }
    int& OnlyAllowTeamToBuildField() const
    { return *GetNativePointerField<int*>(this, "AStructurePreventionZoneVolume.OnlyAllowTeamToBuild"); }
    TArray<void*>& PreventUsingWeaponsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "AStructurePreventionZoneVolume.PreventUsingWeapons"); }
    float& StructureDamageMultiplierField() const
    { return *GetNativePointerField<float*>(this, "AStructurePreventionZoneVolume.StructureDamageMultiplier"); }
    BitFieldValue<bool, unsigned __int32> bOnlyPreventInPvE()
    { return { (void*)this, "bOnlyPreventInPvE" }; }
    BitFieldValue<bool, unsigned __int32> bOnlyPreventInDedicated()
    { return { (void*)this, "bOnlyPreventInDedicated" }; }
    BitFieldValue<bool, unsigned __int32> bPreventAllStructures()
    { return { (void*)this, "bPreventAllStructures" }; }
    BitFieldValue<bool, unsigned __int32> bDisabled()
    { return { (void*)this, "bDisabled" }; }
    BitFieldValue<bool, unsigned __int32> bPreventionVolumeForcePreventFlyers()
    { return { (void*)this, "bPreventionVolumeForcePreventFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventionVolumePreventsFlyers()
    { return { (void*)this, "bPreventionVolumePreventsFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventionVolumeForceAllowFlyers()
    { return { (void*)this, "bPreventionVolumeForceAllowFlyers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventStructureDamageIncrease()
    { return { (void*)this, "bPreventStructureDamageIncrease" }; }
    BitFieldValue<bool, unsigned __int32> bStructurePreventionOnly()
    { return { (void*)this, "bStructurePreventionOnly" }; }
    BitFieldValue<bool, unsigned __int32> bOptionallyEnabled()
    { return { (void*)this, "bOptionallyEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bForceEnabledWhenAllowCaveBuildingPVPIsFalse()
    { return { (void*)this, "bForceEnabledWhenAllowCaveBuildingPVPIsFalse" }; }
    BitFieldValue<bool, unsigned __int32> bForceOnGenesis()
    { return { (void*)this, "bForceOnGenesis" }; }
    BitFieldValue<bool, unsigned __int32> bIsMissionZone()
    { return { (void*)this, "bIsMissionZone" }; }
    BitFieldValue<bool, unsigned __int32> bForceAllowUndergroundCheck()
    { return { (void*)this, "bForceAllowUndergroundCheck" }; }
    BitFieldValue<bool, unsigned __int32> bUseAlternativeInsideCheck()
    { return { (void*)this, "bUseAlternativeInsideCheck" }; }

};

#endif  // BRZ_SDK_JOGO_ASTRUCTUREPREVENTIONZONEVOLUME_H
