// ==========================================================================
//  APrimalStructureSign — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_APRIMALSTRUCTURESIGN_H
#define BRZ_SDK_JOGO_APRIMALSTRUCTURESIGN_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct UTexture2D;

#include "APrimalStructure.h"

struct APrimalStructureSign : public APrimalStructure
{
    static UClass* StaticClass()
    { return BrzClassePorNome("APrimalStructureSign"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.ClientMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    void ClientMultiUse(void* a0, int a1, int a2) const
    {
        NativeCall<void, void*, int, int>(this, "APrimalStructureSign.ClientMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<
    // endereco: casamento de bytes com a build de referencia
    void GetLifetimeReplicatedProps(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSign.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAl
    // endereco: casamento de bytes com a build de referencia
    void GetMultiUseEntries(void* a0, void* a1, int a2) const
    {
        NativeCall<void, void*, void*, int>(this, "APrimalStructureSign.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", a0, a1, a2);
    }

    // retorno: PROVADO pelo bloco _Parms do jogo (nosso, medido no binario)
    //   APrimalStructureSign.MultiUpdateSignTextScale(float)
    // endereco: casamento de bytes com a build de referencia
    void MultiUpdateSignTextScale(float a0) const
    {
        NativeCall<void, float>(this, "APrimalStructureSign.MultiUpdateSignTextScale(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSign.MultiUpdateSignTextScale_Implementation(float)
    // endereco: cache_pdb_25090264
    BrzPonteiro MultiUpdateSignTextScale_Implementation(float a0) const
    {
        return NativeCall<void*, float>(this, "APrimalStructureSign.MultiUpdateSignTextScale_Implementation(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   APrimalStructureSign.OnRep_SignText(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=77]]
    BrzPonteiro OnRep_SignText(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "APrimalStructureSign.OnRep_SignText(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro OnRep_SignText(FString* a0) const
    { return OnRep_SignText(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.ProcessEditText(AShooterPlayerController*,FString&,bool)
    // endereco: casamento de bytes com a build de referencia
    void ProcessEditText(void* a0, const FString& a1, bool a2) const
    {
        NativeCall<void, void*, void*, bool>(this, "APrimalStructureSign.ProcessEditText(AShooterPlayerController*,FString&,bool)", a0, const_cast<FString*>(&a1), a2);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ProcessEditText(void* a0, FString* a1, bool a2) const
    { ProcessEditText(a0, *a1, a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.RefreshStructureColors(UMeshComponent*)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=315]]
    void RefreshStructureColors(void* a0) const
    {
        NativeCall<void, void*>(this, "APrimalStructureSign.RefreshStructureColors(UMeshComponent*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   APrimalStructureSign.TryMultiUse(APlayerController*,int,int)
    // endereco: casamento de bytes com a build de referencia
    bool TryMultiUse(void* a0, int a1, int a2) const
    {
        return NativeCall<bool, void*, int, int>(this, "APrimalStructureSign.TryMultiUse(APlayerController*,int,int)", a0, a1, a2);
    }

    BrzCampoPonteiro DecreaseSignTextSizeIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSign.DecreaseSignTextSizeIcon")); }
    float& DefaultScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.DefaultScale"); }
    BrzCampoPonteiro IncreaseSignTextSizeIconField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSign.IncreaseSignTextSizeIcon")); }
    int& MaxNumberofCharactersField() const
    { return *GetNativePointerField<int*>(this, "APrimalStructureSign.MaxNumberofCharacters"); }
    float& MaxTextScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MaxTextScale"); }
    float& MinFontSizeField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinFontSize"); }
    float& MinTextScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinTextScale"); }
    TObjectPtr<UTexture2D>& SetSignTextIconField() const
    { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSign.SetSignTextIcon"); }
    float& SignHeightField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignHeight"); }
    FString& SignTextField() const
    { return *GetNativePointerField<FString*>(this, "APrimalStructureSign.SignText"); }
    float& SignTextScaleField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignTextScale"); }
    float& SignWidthField() const
    { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignWidth"); }
    BrzCampoPonteiro TextRenderField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "APrimalStructureSign.TextRender")); }
    BitFieldValue<bool, unsigned __int32> bCanAdjustTextScale()
    { return { (void*)this, "bCanAdjustTextScale" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreMultipleLines()
    { return { (void*)this, "bIgnoreMultipleLines" }; }
    BitFieldValue<bool, unsigned __int32> bUseBPNotifyUpdatedSignText()
    { return { (void*)this, "bUseBPNotifyUpdatedSignText" }; }

};

#endif  // BRZ_SDK_JOGO_APRIMALSTRUCTURESIGN_H
