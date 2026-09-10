// ==========================================================================
//  UPrimalWheeledVehicleDustType — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWHEELEDVEHICLEDUSTTYPE_H
#define BRZ_SDK_JOGO_UPRIMALWHEELEDVEHICLEDUSTTYPE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalWheeledVehicleDustType
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWheeledVehicleDustType"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWheeledVehicleDustType.GetDustFX(UPhysicalMaterial*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDustFX(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalWheeledVehicleDustType.GetDustFX(UPhysicalMaterial*,float)", a0, a1);
    }

    BrzCampoPonteiro ConcreteFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.ConcreteFX")); }
    float& ConcreteMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.ConcreteMinSpeed"); }
    BrzCampoPonteiro DefaultFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.DefaultFX")); }
    float& DefaultMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DefaultMinSpeed"); }
    BrzCampoPonteiro DirtFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.DirtFX")); }
    float& DirtMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DirtMinSpeed"); }
    BrzCampoPonteiro FleshFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.FleshFX")); }
    float& FleshMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.FleshMinSpeed"); }
    BrzCampoPonteiro GrassFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.GrassFX")); }
    float& GrassMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.GrassMinSpeed"); }
    BrzCampoPonteiro LeavesFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.LeavesFX")); }
    float& LeavesMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.LeavesMinSpeed"); }
    BrzCampoPonteiro MetalFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.MetalFX")); }
    float& MetalMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.MetalMinSpeed"); }
    BrzCampoPonteiro NativeClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.NativeClass")); }
    BrzCampoPonteiro RockFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.RockFX")); }
    float& RockMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.RockMinSpeed"); }
    BrzCampoPonteiro SandFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.SandFX")); }
    float& SandMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SandMinSpeed"); }
    BrzCampoPonteiro SnowFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.SnowFX")); }
    float& SnowMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SnowMinSpeed"); }
    BrzCampoPonteiro WaterFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.WaterFX")); }
    float& WaterMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WaterMinSpeed"); }
    BrzCampoPonteiro WoodFXField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWheeledVehicleDustType.WoodFX")); }
    float& WoodMinSpeedField() const
    { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WoodMinSpeed"); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALWHEELEDVEHICLEDUSTTYPE_H
