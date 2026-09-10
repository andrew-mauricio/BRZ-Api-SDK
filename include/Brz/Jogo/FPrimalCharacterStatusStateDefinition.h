// ==========================================================================
//  FPrimalCharacterStatusStateDefinition — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSSTATEDEFINITION_H
#define BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSSTATEDEFINITION_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UTexture2D;


struct FPrimalCharacterStatusStateDefinition
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FPrimalCharacterStatusStateDefinition"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    int& BuffTypeField() const
    { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.BuffType"); }
    FString& HUDMessageField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessage"); }
    BrzCampoPonteiro HUDMessageColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterStatusStateDefinition.HUDMessageColor")); }
    FString& StatusStateDescriptionField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateDescription"); }
    UTexture2D*& StatusStateIconField() const
    { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusStateDefinition.StatusStateIcon"); }
    FString& StatusStateNameField() const
    { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateName"); }
    BrzCampoPonteiro StatusStateNameColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FPrimalCharacterStatusStateDefinition.StatusStateNameColor")); }
    int& StatusValueThresholdIndexField() const
    { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueThresholdIndex"); }
    unsigned char& StatusValueTypeField() const
    { return *GetNativePointerField<unsigned char*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueType"); }
    bool& bDisplayHUDMessageField() const
    { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateDefinition.bDisplayHUDMessage"); }
    BitFieldValue<bool, unsigned __int32> bDisplayHUDMessage()
    { return { (void*)this, "bDisplayHUDMessage" }; }
    BitFieldValue<bool, unsigned __int32> bPreventDisplayBuffHUD()
    { return { (void*)this, "bPreventDisplayBuffHUD" }; }
    BitFieldValue<bool, unsigned __int32> bUsed()
    { return { (void*)this, "bUsed" }; }

};

#endif  // BRZ_SDK_JOGO_FPRIMALCHARACTERSTATUSSTATEDEFINITION_H
