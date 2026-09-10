// ==========================================================================
//  FLevelSimplificationDetails — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FLEVELSIMPLIFICATIONDETAILS_H
#define BRZ_SDK_JOGO_FLEVELSIMPLIFICATIONDETAILS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct FLevelSimplificationDetails
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FLevelSimplificationDetails"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro DetailsPercentageField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSimplificationDetails.DetailsPercentage")); }
    BrzCampoPonteiro LandscapeExportLODField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSimplificationDetails.LandscapeExportLOD")); }
    BrzCampoPonteiro LandscapeMaterialSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSimplificationDetails.LandscapeMaterialSettings")); }
    BrzCampoPonteiro StaticMeshMaterialSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FLevelSimplificationDetails.StaticMeshMaterialSettings")); }
    BitFieldValue<bool, unsigned __int32> bBakeFoliageToLandscape()
    { return { (void*)this, "bBakeFoliageToLandscape" }; }
    BitFieldValue<bool, unsigned __int32> bBakeGrassToLandscape()
    { return { (void*)this, "bBakeGrassToLandscape" }; }
    BitFieldValue<bool, unsigned __int32> bCreatePackagePerAsset()
    { return { (void*)this, "bCreatePackagePerAsset" }; }
    BitFieldValue<bool, unsigned __int32> bOverrideLandscapeExportLOD()
    { return { (void*)this, "bOverrideLandscapeExportLOD" }; }

};

#endif  // BRZ_SDK_JOGO_FLEVELSIMPLIFICATIONDETAILS_H
