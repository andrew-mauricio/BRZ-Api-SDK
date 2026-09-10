// ==========================================================================
//  UPrimalEngramEntry — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALENGRAMENTRY_H
#define BRZ_SDK_JOGO_UPRIMALENGRAMENTRY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UTexture2D;

#include "UObject.h"

struct UPrimalEngramEntry : public UObject
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalEngramEntry"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.ClearHiddenEngramRequirements()
    // endereco: casamento de bytes com a build de referencia
    void ClearHiddenEngramRequirements() const
    {
        NativeCall<void>(this, "UPrimalEngramEntry.ClearHiddenEngramRequirements()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEngramEntry.GetAllChainedPreReqs(AShooterPlayerState*,TArray<TSubclassOf<UPrimalEngramEnt
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetAllChainedPreReqs(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalEngramEntry.GetAllChainedPreReqs(AShooterPlayerState*,TArray<TSubclassOf<UPrimalEngramEntry>,TSizedDefaultAllocator<32>>&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEngramEntry.GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>,TSizedDef
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetChainRequiredEngramPoints(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalEngramEntry.GetChainRequiredEngramPoints(TArray<TSubclassOf<UPrimalEngramEntry>,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEngramEntry.GetEngramDescription(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEngramDescription(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalEngramEntry.GetEngramDescription(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.GetEngramFilterType()
    // endereco: casamento de bytes com a build de referencia
    int GetEngramFilterType() const
    {
        return NativeCall<int>(this, "UPrimalEngramEntry.GetEngramFilterType()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEngramEntry.GetEngramName()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetEngramName() const
    {
        return NativeCall<void*>(this, "UPrimalEngramEntry.GetEngramName()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalEngramEntry.GetEntryIcon(UObject*,bool)
    // endereco: casamento de bytes com a build de referencia
    UTexture2D* GetEntryIcon(void* a0, bool a1) const
    {
        return NativeCall<UTexture2D*, void*, bool>(this, "UPrimalEngramEntry.GetEntryIcon(UObject*,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.GetRequiredEngramPoints()
    // endereco: casamento de bytes com a build de referencia
    int GetRequiredEngramPoints() const
    {
        return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredEngramPoints()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.GetRequiredLevel()
    // endereco: casamento de bytes com a build de referencia
    int GetRequiredLevel() const
    {
        return NativeCall<int>(this, "UPrimalEngramEntry.GetRequiredLevel()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.MeetsEngramChainRequirements(AShooterPlayerState*)
    // endereco: casamento de bytes com a build de referencia
    bool MeetsEngramChainRequirements(void* a0) const
    {
        return NativeCall<bool, void*>(this, "UPrimalEngramEntry.MeetsEngramChainRequirements(AShooterPlayerState*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.MeetsEngramRequirements(AShooterPlayerState*,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    bool MeetsEngramRequirements(void* a0, bool a1, bool a2) const
    {
        return NativeCall<bool, void*, bool, bool>(this, "UPrimalEngramEntry.MeetsEngramRequirements(AShooterPlayerState*,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UPrimalEngramEntry.UseEngramRequirementSets()
    // endereco: casamento de bytes com a build de referencia
    bool UseEngramRequirementSets() const
    {
        return NativeCall<bool>(this, "UPrimalEngramEntry.UseEngramRequirementSets()");
    }

    BrzCampoPonteiro BluePrintEntryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEngramEntry.BluePrintEntry")); }
    unsigned char& EngramCategoryField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEngramEntry.EngramCategory"); }
    unsigned char& EngramGroupField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEngramEntry.EngramGroup"); }
    BrzCampoPonteiro EngramRequirementSetsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalEngramEntry.EngramRequirementSets")); }
    FString& ExtraEngramDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "UPrimalEngramEntry.ExtraEngramDescription"); }
    int& MyEngramIndexField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.MyEngramIndex"); }
    int& RequiredCharacterLevelField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredCharacterLevel"); }
    int& RequiredEngramPointsField() const
    { return *GetNativePointerField<int*>(this, "UPrimalEngramEntry.RequiredEngramPoints"); }
    unsigned char& RequiresDLCField() const
    { return *GetNativePointerField<unsigned char*>(this, "UPrimalEngramEntry.RequiresDLC"); }
    BitFieldValue<bool, unsigned __int32> bGiveBlueprintToPlayerInventory()
    { return { (void*)this, "bGiveBlueprintToPlayerInventory" }; }
    BitFieldValue<bool, unsigned __int32> bCanBeManuallyUnlocked()
    { return { (void*)this, "bCanBeManuallyUnlocked" }; }
    BitFieldValue<bool, unsigned __int32> bForceIsTekEngram()
    { return { (void*)this, "bForceIsTekEngram" }; }
    BitFieldValue<bool, unsigned __int32> AutoUnlockEngram()
    { return { (void*)this, "AutoUnlockEngram" }; }

};

#endif  // BRZ_SDK_JOGO_UPRIMALENGRAMENTRY_H
