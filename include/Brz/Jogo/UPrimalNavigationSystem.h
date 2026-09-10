// ==========================================================================
//  UPrimalNavigationSystem — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEM_H
#define BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEM_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalNavigationSystem
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalNavigationSystem"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationSystem.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro GetNavAreaAtLocation(void* a0, void* a1, void* a2)
    {
        return NativeCall<void*, void*, void*, void*>(nullptr, "UPrimalNavigationSystem.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&,AActor*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationSystem.UpdateInvokers()
    // endereco: casamento de bytes com a build de referencia
    static BrzPonteiro UpdateInvokers()
    {
        return NativeCall<void*>(nullptr, "UPrimalNavigationSystem.UpdateInvokers()");
    }

    BrzCampoPonteiro AbstractNavDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.AbstractNavData")); }
    float& ActiveTilesUpdateIntervalField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationSystem.ActiveTilesUpdateInterval"); }
    BrzCampoPonteiro BuildBoundsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.BuildBounds")); }
    BrzCampoPonteiro CrowdManagerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.CrowdManagerClass")); }
    BrzCampoPonteiro DataGatheringModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.DataGatheringMode")); }
    FName& DefaultAgentNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalNavigationSystem.DefaultAgentName"); }
    float& DirtyAreaWarningSizeThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationSystem.DirtyAreaWarningSizeThreshold"); }
    float& GatheringNavModifiersWarningLimitTimeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalNavigationSystem.GatheringNavModifiersWarningLimitTime"); }
    int& GeometryExportTriangleCountWarningThresholdField() const
    { return *GetNativePointerField<int*>(this, "UPrimalNavigationSystem.GeometryExportTriangleCountWarningThreshold"); }
    double& InvokersMaximumDistanceFromSeedField() const
    { return *GetNativePointerField<double*>(this, "UPrimalNavigationSystem.InvokersMaximumDistanceFromSeed"); }
    BrzCampoPonteiro MainNavDataField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.MainNavData")); }
    BrzCampoPonteiro NavDataRegistrationQueueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.NavDataRegistrationQueue")); }
    BrzCampoPonteiro NavDataSetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.NavDataSet")); }
    BrzCampoPonteiro OnNavDataRegisteredEventField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.OnNavDataRegisteredEvent")); }
    BrzCampoPonteiro OnNavigationGenerationFinishedDelegateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.OnNavigationGenerationFinishedDelegate")); }
    BrzCampoPonteiro OperationModeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.OperationMode")); }
    BrzCampoPonteiro RepositoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.Repository")); }
    BrzCampoPonteiro SupportedAgentsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.SupportedAgents")); }
    BrzCampoPonteiro SupportedAgentsMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystem.SupportedAgentsMask")); }
    BitFieldValue<bool, unsigned __int32> bAllowClientSideNavigation()
    { return { (void*)this, "bAllowClientSideNavigation" }; }
    BitFieldValue<bool, unsigned __int32> bAutoCreateNavigationData()
    { return { (void*)this, "bAutoCreateNavigationData" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateNavigationOnlyAroundNavigationInvokers()
    { return { (void*)this, "bGenerateNavigationOnlyAroundNavigationInvokers" }; }
    BitFieldValue<bool, unsigned __int32> bInitialBuildingLocked()
    { return { (void*)this, "bInitialBuildingLocked" }; }
    BitFieldValue<bool, unsigned __int32> bShouldDiscardSubLevelNavData()
    { return { (void*)this, "bShouldDiscardSubLevelNavData" }; }
    BitFieldValue<bool, unsigned __int32> bSkipAgentHeightCheckWhenPickingNavData()
    { return { (void*)this, "bSkipAgentHeightCheckWhenPickingNavData" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnNavDataInNavBoundsLevel()
    { return { (void*)this, "bSpawnNavDataInNavBoundsLevel" }; }
    BitFieldValue<bool, unsigned __int32> bSupportRebuilding()
    { return { (void*)this, "bSupportRebuilding" }; }
    BitFieldValue<bool, unsigned __int32> bTickWhilePaused()
    { return { (void*)this, "bTickWhilePaused" }; }
};

#endif  // BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEM_H
