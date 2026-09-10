// ==========================================================================
//  APrimalStructureTurretPlant — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETPLANT_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETPLANT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct APrimalStructureItemContainer_CropPlot;
struct FName;
struct UAnimMontage;

#include "APrimalStructureTurret.h"

struct APrimalStructureTurretPlant : public APrimalStructureTurret
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureTurretPlant"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.BeginPlay()
    // endereco: casamento de bytes com a build de referencia
    void BeginPlay() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.BeginPlay()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.CanFire()
    // endereco: casamento de bytes com a build de referencia
    bool CanFire() const
    {
        return NativeCall<bool>(this, "APrimalStructureTurretPlant.CanFire()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.Demolish(APlayerController*,AActor*)
    // classe: a funcao mora em APrimalStructure, e APrimalStructureTurretPlant herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    void Demolish(void* a0, void* a1) const
    {
        NativeCall<void, void*, void*>(this, "APrimalStructure.Demolish(APlayerController*,AActor*)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDe
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureTurretPlant.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureTurretPlant.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Ma
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro IsAllowedToBuild(void* a0, void* a1, void* a2, void* a3, bool a4, void* a5, bool a6, bool a7, void* a8) const
    {
        return NativeCall<void*, void*, void*, void*, void*, bool, void*, bool, bool, void*>(this, "APrimalStructureTurretPlant.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.PlayDying(float,FDamageEvent&,APawn*,AActor*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=95]]
    void PlayDying(float a0, void* a1, void* a2, void* a3) const
    {
        NativeCall<void, float, void*, void*, void*>(this, "APrimalStructureTurretPlant.PlayDying(float,FDamageEvent&,APawn*,AActor*)", a0, a1, a2, a3);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.PlayShootAnim()
    // endereco: casamento de bytes com a build de referencia
    void PlayShootAnim() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.PlayShootAnim()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.RecoverHealthTimer()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=162]]
    void RecoverHealthTimer() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.RecoverHealthTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.SelectAttackOrigin(UE::Math::TVector<double>&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=43]]
    void SelectAttackOrigin(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureTurretPlant.SelectAttackOrigin(UE::Math::TVector<double>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.SetHealthRecoveryTimer()
    // endereco: casamento de bytes com a build de referencia
    void SetHealthRecoveryTimer() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.SetHealthRecoveryTimer()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.Stasis()
    // endereco: casamento de bytes com a build de referencia
    void Stasis() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.Stasis()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureTurretPlant.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureTurretPlant.Unstasis()
    // endereco: casamento de bytes com a build de referencia
    void Unstasis() const
    {
        NativeCall<void>(this, "APrimalStructureTurretPlant.Unstasis()");
    }

    float& AmountOfFertilizerToUsePerShotField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.AmountOfFertilizerToUsePerShot"); }
    //  no cache antigo este campo se chamava AttackOriginRotation.
    //  nesta build ele e' `PlantMuzzleSockets` — resolve por NOME.
    BrzCampoPonteiro AttackOriginRotationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureTurretPlant.PlantMuzzleSockets")); }
    float& HealthRecoverPerSecField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.HealthRecoverPerSec"); }
    APrimalStructureItemContainer_CropPlot*& OwnerCropPlotField() const
    { return *GetNativePointerField<APrimalStructureItemContainer_CropPlot**>(this, "APrimalStructureTurretPlant.OwnerCropPlot"); }
    TArray<UAnimMontage*>& PlantAttackAnimsField() const
    { return *GetNativePointerField<TArray<UAnimMontage*>*>(this, "APrimalStructureTurretPlant.PlantAttackAnims"); }
    float& PlantHealthRecoverPerSecField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureTurretPlant.PlantHealthRecoverPerSec"); }
    TArray<void*>& PlantMuzzleSocketsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "APrimalStructureTurretPlant.PlantMuzzleSockets"); }
};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURETURRETPLANT_H
