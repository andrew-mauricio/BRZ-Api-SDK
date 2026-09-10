// ==========================================================================
//  UPrimalNavigationSystemConfig — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEMCONFIG_H
#define BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEMCONFIG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalNavigationSystemConfig
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalNavigationSystemConfig"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationSystemConfig.CreateAndConfigureNavigationSystem(UWorld&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CreateAndConfigureNavigationSystem(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalNavigationSystemConfig.CreateAndConfigureNavigationSystem(UWorld&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalNavigationSystemConfig.PostInitProperties()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostInitProperties() const
    {
        return NativeCall<void*>(this, "UPrimalNavigationSystemConfig.PostInitProperties()");
    }

    FName& DefaultAgentNameField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalNavigationSystemConfig.DefaultAgentName"); }
    BrzCampoPonteiro NavigationSystemClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystemConfig.NavigationSystemClass")); }
    BrzCampoPonteiro SupportedAgentsMaskField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalNavigationSystemConfig.SupportedAgentsMask")); }
    BitFieldValue<bool, unsigned __int32> bAutoSpawnMissingNavData()
    { return { (void*)this, "bAutoSpawnMissingNavData" }; }
    BitFieldValue<bool, unsigned __int32> bCreateOnClient()
    { return { (void*)this, "bCreateOnClient" }; }
    BitFieldValue<bool, unsigned __int32> bIsOverriden()
    { return { (void*)this, "bIsOverriden" }; }
    BitFieldValue<bool, unsigned __int32> bSpawnNavDataInNavBoundsLevel()
    { return { (void*)this, "bSpawnNavDataInNavBoundsLevel" }; }
    BitFieldValue<bool, unsigned __int32> bStrictlyStatic()
    { return { (void*)this, "bStrictlyStatic" }; }
    BitFieldValue<bool, unsigned __int32> bEnableGenerateNavigationOnlyAroundNavigationInvokersOverride()
    { return { (void*)this, "bEnableGenerateNavigationOnlyAroundNavigationInvokersOverride" }; }
    BitFieldValue<bool, unsigned __int32> bEnableShouldDiscardSubLevelNavDataOverride()
    { return { (void*)this, "bEnableShouldDiscardSubLevelNavDataOverride" }; }
    BitFieldValue<bool, unsigned __int32> bGenerateNavigationOnlyAroundNavigationInvokersOverride()
    { return { (void*)this, "bGenerateNavigationOnlyAroundNavigationInvokersOverride" }; }
    BitFieldValue<bool, unsigned __int32> bShouldDiscardSubLevelNavDataOverride()
    { return { (void*)this, "bShouldDiscardSubLevelNavDataOverride" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALNAVIGATIONSYSTEMCONFIG_H
