// ==========================================================================
//  UPrimalGlobalUIData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALGLOBALUIDATA_H
#define BRZ_SDK_JOGO_UPRIMALGLOBALUIDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalGlobalUIData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalGlobalUIData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalGlobalUIData.GetIconForKeyName(FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetIconForKeyName(const FString& a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UPrimalGlobalUIData.GetIconForKeyName(FString&,bool)", const_cast<FString*>(&a0), a1);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetIconForKeyName(FString* a0, bool a1) const
    { return GetIconForKeyName(*a0, a1); }

    BrzCampoPonteiro DPadDownIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DPadDownIcon")); }
    BrzCampoPonteiro DPadGenericIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DPadGenericIcon")); }
    BrzCampoPonteiro DPadLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DPadLeftIcon")); }
    BrzCampoPonteiro DPadRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DPadRightIcon")); }
    BrzCampoPonteiro DPadUpIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DPadUpIcon")); }
    BrzCampoPonteiro DinoDotField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.DinoDot")); }
    BrzCampoPonteiro GamepadFaceButtonBottomField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadFaceButtonBottom")); }
    BrzCampoPonteiro GamepadFaceButtonLeftField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadFaceButtonLeft")); }
    BrzCampoPonteiro GamepadFaceButtonRightField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadFaceButtonRight")); }
    BrzCampoPonteiro GamepadFaceButtonTopField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadFaceButtonTop")); }
    BrzCampoPonteiro GamepadLeftBumperField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadLeftBumper")); }
    BrzCampoPonteiro GamepadRightBumperField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.GamepadRightBumper")); }
    BrzCampoPonteiro LeftMouseButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.LeftMouseButtonIcon")); }
    BrzCampoPonteiro LeftThumbstickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.LeftThumbstickIcon")); }
    BrzCampoPonteiro LeftTriggerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.LeftTriggerIcon")); }
    BrzCampoPonteiro MiddleMouseButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.MiddleMouseButtonIcon")); }
    BrzCampoPonteiro MutagenGoodColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.MutagenGoodColor")); }
    float& MutagenGoodToGreatThresholdField() const
    { return *GetNativePointerField<float*>(this, "UPrimalGlobalUIData.MutagenGoodToGreatThreshold"); }
    BrzCampoPonteiro MutagenGreatColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.MutagenGreatColor")); }
    BrzCampoPonteiro MutagenIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.MutagenIcon")); }
    BrzCampoPonteiro RightMouseButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.RightMouseButtonIcon")); }
    BrzCampoPonteiro RightThumbstickIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.RightThumbstickIcon")); }
    BrzCampoPonteiro RightTriggerIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.RightTriggerIcon")); }
    BrzCampoPonteiro SpacebarButtonIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.SpacebarButtonIcon")); }
    BrzCampoPonteiro SpecialLeftIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.SpecialLeftIcon")); }
    BrzCampoPonteiro SpecialRightIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.SpecialRightIcon")); }
    BrzCampoPonteiro StatusColorBadField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.StatusColorBad")); }
    BrzCampoPonteiro StatusColorGoodField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.StatusColorGood")); }
    BrzCampoPonteiro StatusColorWarningField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalGlobalUIData.StatusColorWarning")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALGLOBALUIDATA_H
