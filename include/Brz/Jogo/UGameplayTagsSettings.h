// ==========================================================================
//  UGameplayTagsSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYTAGSSETTINGS_H
#define BRZ_SDK_JOGO_UGAMEPLAYTAGSSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayTagsSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayTagsSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    BrzCampoPonteiro CategoryRemappingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.CategoryRemapping")); }
    BrzCampoPonteiro CommonlyReplicatedTagsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.CommonlyReplicatedTags")); }
    FString& ConfigFileNameField() const
    { return *GetNativePointerField<FString*>(this, "UGameplayTagsSettings.ConfigFileName"); }
    BrzCampoPonteiro GameplayTagListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.GameplayTagList")); }
    BrzCampoPonteiro GameplayTagRedirectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.GameplayTagRedirects")); }
    BrzCampoPonteiro GameplayTagTableListField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.GameplayTagTableList")); }
    FString& InvalidTagCharactersField() const
    { return *GetNativePointerField<FString*>(this, "UGameplayTagsSettings.InvalidTagCharacters"); }
    int& NetIndexFirstBitSegmentField() const
    { return *GetNativePointerField<int*>(this, "UGameplayTagsSettings.NetIndexFirstBitSegment"); }
    int& NumBitsForContainerSizeField() const
    { return *GetNativePointerField<int*>(this, "UGameplayTagsSettings.NumBitsForContainerSize"); }
    BrzCampoPonteiro RestrictedConfigFilesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayTagsSettings.RestrictedConfigFiles")); }
    BitFieldValue<bool, unsigned __int32> AllowEditorTagUnloading()
    { return { (void*)this, "AllowEditorTagUnloading" }; }
    BitFieldValue<bool, unsigned __int32> AllowGameTagUnloading()
    { return { (void*)this, "AllowGameTagUnloading" }; }
    BitFieldValue<bool, unsigned __int32> ClearInvalidTags()
    { return { (void*)this, "ClearInvalidTags" }; }
    BitFieldValue<bool, unsigned __int32> FastReplication()
    { return { (void*)this, "FastReplication" }; }
    BitFieldValue<bool, unsigned __int32> ImportTagsFromConfig()
    { return { (void*)this, "ImportTagsFromConfig" }; }
    BitFieldValue<bool, unsigned __int32> WarnOnInvalidTags()
    { return { (void*)this, "WarnOnInvalidTags" }; }
    BitFieldValue<bool, unsigned __int32> bDynamicReplication()
    { return { (void*)this, "bDynamicReplication" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYTAGSSETTINGS_H
