// ==========================================================================
//  FPrimalDinoDBEntry — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALDINODBENTRY_H
#define BRZ_SDK_JOGO_FPRIMALDINODBENTRY_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;


struct FPrimalDinoDBEntry
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalDinoDBEntry"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro CapsuleHalfHeightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoDBEntry.CapsuleHalfHeight")); }
    BrzCampoPonteiro CapsuleRadiusField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoDBEntry.CapsuleRadius")); }
    BrzCampoPonteiro CapsuleWaterDepthMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoDBEntry.CapsuleWaterDepthMultiplier")); }
    FName& DinoNameTagField() const
    { return *GetNativePointerField<FName*>(this, "FPrimalDinoDBEntry.DinoNameTag"); }
    int& MeleeDamageAmountField() const
    { return *GetNativePointerField<int*>(this, "FPrimalDinoDBEntry.MeleeDamageAmount"); }
    float& NPCZoneVolumeCountWeightField() const
    { return *GetNativePointerField<float*>(this, "FPrimalDinoDBEntry.NPCZoneVolumeCountWeight"); }
    BrzCampoPonteiro ParentClassTreeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoDBEntry.ParentClassTree")); }
    BrzCampoPonteiro UnnetworkedStasisMultiplierField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalDinoDBEntry.UnnetworkedStasisMultiplier")); }
    BitFieldValue<bool, unsigned __int32> bCanBeTorpid()
    { return { (void*)this, "bCanBeTorpid" }; }
    BitFieldValue<bool, unsigned __int32> bIfAmphibiousCountAsLandDinoForNPCVolumes()
    { return { (void*)this, "bIfAmphibiousCountAsLandDinoForNPCVolumes" }; }
    BitFieldValue<bool, unsigned __int32> bIsAmphibious()
    { return { (void*)this, "bIsAmphibious" }; }
    BitFieldValue<bool, unsigned __int32> bIsWaterDino()
    { return { (void*)this, "bIsWaterDino" }; }
    BitFieldValue<bool, unsigned __int32> bUsesGender()
    { return { (void*)this, "bUsesGender" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALDINODBENTRY_H
