// ==========================================================================
//  UGameplayDebuggerConfig — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERCONFIG_H
#define BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERCONFIG_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayDebuggerConfig
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayDebuggerConfig"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.RemoveUnknownConfigs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveUnknownConfigs() const
    {
        return NativeCall<void*>(this, "UGameplayDebuggerConfig.RemoveUnknownConfigs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.Serialize(FArchive&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Serialize(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UGameplayDebuggerConfig.Serialize(FArchive&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.UpdateCategoryConfig(FName,int&,unsignedchar&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCategoryConfig(unsigned long long a0, void* a1, void* a2) const
    {
        return NativeCall<void*, unsigned long long, void*, void*>(this, "UGameplayDebuggerConfig.UpdateCategoryConfig(FName,int&,unsignedchar&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.UpdateCategoryInputConfig(FName,FName,FName&,FGameplayDebuggerInputModif
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateCategoryInputConfig(unsigned long long a0, unsigned long long a1, const FName& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*, void*>(this, "UGameplayDebuggerConfig.UpdateCategoryInputConfig(FName,FName,FName&,FGameplayDebuggerInputModifier&)", a0, a1, const_cast<FName*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UpdateCategoryInputConfig(unsigned long long a0, unsigned long long a1, FName* a2, void* a3) const
    { return UpdateCategoryInputConfig(a0, a1, *a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.UpdateExtensionConfig(FName,unsignedchar&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateExtensionConfig(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UGameplayDebuggerConfig.UpdateExtensionConfig(FName,unsignedchar&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayDebuggerConfig.UpdateExtensionInputConfig(FName,FName,FName&,FGameplayDebuggerInputModi
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateExtensionInputConfig(unsigned long long a0, unsigned long long a1, const FName& a2, void* a3) const
    {
        return NativeCall<void*, unsigned long long, unsigned long long, void*, void*>(this, "UGameplayDebuggerConfig.UpdateExtensionInputConfig(FName,FName,FName&,FGameplayDebuggerInputModifier&)", a0, a1, const_cast<FName*>(&a2), a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro UpdateExtensionInputConfig(unsigned long long a0, unsigned long long a1, FName* a2, void* a3) const
    { return UpdateExtensionInputConfig(a0, a1, *a2, a3); }

    BrzCampoPonteiro ActivationKeyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.ActivationKey")); }
    BitFieldValue<bool, unsigned __int32> Categories()
    { return { (void*)this, "Categories" }; }
    BrzCampoPonteiro CategoryRowNextKeyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategoryRowNextKey")); }
    BrzCampoPonteiro CategoryRowPrevKeyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategoryRowPrevKey")); }
    BrzCampoPonteiro CategorySlot0Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot0")); }
    BrzCampoPonteiro CategorySlot1Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot1")); }
    BrzCampoPonteiro CategorySlot2Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot2")); }
    BrzCampoPonteiro CategorySlot3Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot3")); }
    BrzCampoPonteiro CategorySlot4Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot4")); }
    BrzCampoPonteiro CategorySlot5Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot5")); }
    BrzCampoPonteiro CategorySlot6Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot6")); }
    BrzCampoPonteiro CategorySlot7Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot7")); }
    BrzCampoPonteiro CategorySlot8Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot8")); }
    BrzCampoPonteiro CategorySlot9Field() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.CategorySlot9")); }
    float& DebugCanvasPaddingBottomField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerConfig.DebugCanvasPaddingBottom"); }
    float& DebugCanvasPaddingLeftField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerConfig.DebugCanvasPaddingLeft"); }
    float& DebugCanvasPaddingRightField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerConfig.DebugCanvasPaddingRight"); }
    float& DebugCanvasPaddingTopField() const
    { return *GetNativePointerField<float*>(this, "UGameplayDebuggerConfig.DebugCanvasPaddingTop"); }
    BrzCampoPonteiro ExtensionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayDebuggerConfig.Extensions")); }
    BitFieldValue<bool, unsigned __int32> bDebugCanvasEnableTextShadow()
    { return { (void*)this, "bDebugCanvasEnableTextShadow" }; }

};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYDEBUGGERCONFIG_H
