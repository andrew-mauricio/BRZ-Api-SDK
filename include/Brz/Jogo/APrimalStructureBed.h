// ==========================================================================
//  APrimalStructureBed — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTUREBED_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTUREBED_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UTexture2D;

#include "APrimalStructureSeating.h"

struct APrimalStructureBed : public APrimalStructureSeating
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureBed"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.AllowPickupForItem(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowPickupForItem(void* a0) const
    {
        return NativeCall<bool, void*>(this, "APrimalStructureBed.AllowPickupForItem(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.AllowSpawnForDownloadedPlayer(unsigned__int64,unsigned__int64,bool)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSpawnForDownloadedPlayer(unsigned long long a0, unsigned long long a1, bool a2) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer(unsigned__int64,unsigned__int64,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)
    // endereco: casamento de bytes com a build de referencia
    bool AllowSpawnForPlayer(void* a0, bool a1, void* a2) const
    {
        return NativeCall<bool, void*, bool, void*>(this, "APrimalStructureBed.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.CheckStructureActivateTribeGroupPermission(unsigned__int64,unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    bool CheckStructureActivateTribeGroupPermission(unsigned long long a0, unsigned long long a1) const
    {
        return NativeCall<bool, unsigned long long, unsigned long long>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission(unsigned__int64,unsigned__int64)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureBed.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.FindBedWithID(UWorld*,int)
    // endereco: casamento de bytes com a build de referencia
    static AActor* FindBedWithID(void* a0, int a1)
    {
        return NativeCall<AActor*, void*, int>(nullptr, "APrimalStructureBed.FindBedWithID(UWorld*,int)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.GetDescriptiveName()
    // endereco: casamento de bytes com a build de referencia
    void GetDescriptiveName(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureBed.GetDescriptiveName()", retorno);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAll
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureBed.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureBed.GetPlayerSpawnLocation()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPlayerSpawnLocation() const
    {
        return NativeCall<void*>(this, "APrimalStructureBed.GetPlayerSpawnLocation()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.GetSpawnPointInfo()
    // endereco: casamento de bytes com a build de referencia
    void GetSpawnPointInfo(void* retorno) const
    {
        NativeCall<void, void*>(this, "APrimalStructureBed.GetSpawnPointInfo()", retorno);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureBed.GetTooltipStructureInfo(AShooterPlayerController*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetTooltipStructureInfo(void* a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureBed.GetTooltipStructureInfo(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.PlacedStructure(AShooterPlayerController*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=264+grafo=5/5]]
    void PlacedStructure(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureBed.PlacedStructure(AShooterPlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructureBed.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureBed.SpawnedPlayerFor(AShooterPlayerController*,APawn*)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void SpawnedPlayerFor(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureBed.SpawnedPlayerFor(AShooterPlayerController*,APawn*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureBed.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)
    // endereco: casamento de bytes com a build de referencia
    void SpawnedPlayerFor_Implementation(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructureBed.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)", a0, a1);
    }

    float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
    FString& BedNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
    TObjectPtr<UTexture2D>& FastTravelIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureBed.FastTravelIcon"); }
    //  no cache antigo este campo se chamava LastSignNamingTime.
    //  nesta build ele e' `PlayerSpawnRotOffset` — resolve por NOME.
    double& LastSignNamingTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
    unsigned int& LinkedPlayerIDField() const
    { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
    FString& LinkedPlayerNameField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
    double& NextAllowedUseTimeField() const
    { return *GetNativePointerField<double*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
    BrzCampoPonteiro PlayerSpawnLocOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureBed.PlayerSpawnLocOffset")); }
    BrzCampoPonteiro PlayerSpawnRotOffsetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureBed.PlayerSpawnRotOffset")); }
    float& UseCooldownRadiusField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
    float& UseCooldownTimeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownTime"); }
    BitFieldValue<bool, unsigned __int32> bDestroyAfterRespawnUse()
    { return { (void*)this, "bDestroyAfterRespawnUse" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTUREBED_H
