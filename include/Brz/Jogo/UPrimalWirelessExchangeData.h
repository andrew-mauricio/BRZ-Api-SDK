// ==========================================================================
//  UPrimalWirelessExchangeData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWIRELESSEXCHANGEDATA_H
#define BRZ_SDK_JOGO_UPRIMALWIRELESSEXCHANGEDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalWirelessExchangeData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWirelessExchangeData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWirelessExchangeData.GetMatchingExchange(TArray<UPrimalWirelessExchangeData*,TSizedDefaul
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetMatchingExchange(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWirelessExchangeData.GetMatchingExchange(TArray<UPrimalWirelessExchangeData*,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWirelessExchangeData.IsAtMaxNumConnectedConsumers(FPrimalWirelessReferences&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=58]]
    BrzPonteiro IsAtMaxNumConnectedConsumers(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWirelessExchangeData.IsAtMaxNumConnectedConsumers(FPrimalWirelessReferences&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWirelessExchangeData.IsAtMaxNumConnectedSources(FPrimalWirelessReferences&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro IsAtMaxNumConnectedSources(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWirelessExchangeData.IsAtMaxNumConnectedSources(FPrimalWirelessReferences&)", a0);
    }

    float& ConsumeRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.ConsumeRange"); }
    int& MaxConnectedConsumersField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWirelessExchangeData.MaxConnectedConsumers"); }
    int& MaxConnectedSourcesField() const
    { return *GetNativePointerField<int*>(this, "UPrimalWirelessExchangeData.MaxConnectedSources"); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWirelessExchangeData.NativeClass")); }
    float& SupplyLinkRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.SupplyLinkRange"); }
    float& SupplyRangeField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWirelessExchangeData.SupplyRange"); }
    FName& WirelessTagField() const
    { return *GetNativePointerField<FName*>(this, "UPrimalWirelessExchangeData.WirelessTag"); }
    BrzCampoPonteiro WirelessTagOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWirelessExchangeData.WirelessTagOverrides")); }
    BrzCampoPonteiro WirelessTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWirelessExchangeData.WirelessType")); }
    BitFieldValue<bool, unsigned __int32> bIsManualConnection()
    { return { (void*)this, "bIsManualConnection" }; }
    BitFieldValue<bool, unsigned __int32> bShowPlacementPreview()
    { return { (void*)this, "bShowPlacementPreview" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALWIRELESSEXCHANGEDATA_H
