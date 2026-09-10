// ==========================================================================
//  ULevelCapture — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ULEVELCAPTURE_H
#define BRZ_SDK_JOGO_ULEVELCAPTURE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct ULevelCapture
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ULevelCapture"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelCapture.Initialize(TSharedPtr<FSceneViewport,1>,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro Initialize(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "ULevelCapture.Initialize(TSharedPtr<FSceneViewport,1>,int)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   ULevelCapture.OnTick(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnTick(float a0) const
    {
        return NativeCall<void*, float>(this, "ULevelCapture.OnTick(float)", a0);
    }

    FString& AdditionalCommandLineArgumentsField() const
    { return *GetNativePointerField<FString*>(this, "ULevelCapture.AdditionalCommandLineArguments"); }
    BrzCampoPonteiro AudioCaptureProtocolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.AudioCaptureProtocol")); }
    BrzCampoPonteiro AudioCaptureProtocolTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.AudioCaptureProtocolType")); }
    BrzCampoPonteiro ImageCaptureProtocolField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.ImageCaptureProtocol")); }
    BrzCampoPonteiro ImageCaptureProtocolTypeField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.ImageCaptureProtocolType")); }
    FString& InheritedCommandLineArgumentsField() const
    { return *GetNativePointerField<FString*>(this, "ULevelCapture.InheritedCommandLineArguments"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutoStartCapture` +4, medido na build 25090264
    //  (offset absoluto medido: 0x23C; confianca alta)
    void*& PrerequisiteActorField() const
    { return BrzCampoAncorado<void*>(this, "bAutoStartCapture", 4); }
    BrzCampoPonteiro PrerequisiteActorIdField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.PrerequisiteActorId")); }
    BrzCampoPonteiro SettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "ULevelCapture.Settings")); }
    BitFieldValue<bool, unsigned __int32> bCloseEditorWhenCaptureStarts()
    { return { (void*)this, "bCloseEditorWhenCaptureStarts" }; }
    BitFieldValue<bool, unsigned __int32> bUseSeparateProcess()
    { return { (void*)this, "bUseSeparateProcess" }; }
    BitFieldValue<bool, unsigned __int32> bAutoStartCapture()
    { return { (void*)this, "bAutoStartCapture" }; }

};

#endif  // BRZ_SDK_JOGO_ULEVELCAPTURE_H
