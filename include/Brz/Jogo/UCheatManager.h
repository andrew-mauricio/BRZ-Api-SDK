// ==========================================================================
//  UCheatManager — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UCHEATMANAGER_H
#define BRZ_SDK_JOGO_UCHEATMANAGER_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct AActor;
struct UWorld;

#include "AShooterPlayerController.h"

struct UCheatManager : public AShooterPlayerController
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UCheatManager"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.AddCheatManagerExtension(UCheatManagerExtension*)
    // endereco: casamento de bytes com a build de referencia
    void AddCheatManagerExtension(void* a0) const
    {
        NativeCall<void, void*>(this, "UCheatManager.AddCheatManagerExtension(UCheatManagerExtension*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.BugIt(FString&)
    // endereco: casamento de bytes com a build de referencia
    void BugIt(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UCheatManager.BugIt(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BugIt(FString* a0) const
    { BugIt(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.BugItGo(float,float,float,float,float,float)
    // endereco: casamento de bytes com a build de referencia
    void BugItGo(float a0, float a1, float a2, float a3, float a4, float a5) const
    {
        NativeCall<void, float, float, float, float, float, float>(this, "UCheatManager.BugItGo(float,float,float,float,float,float)", a0, a1, a2, a3, a4, a5);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.BugItGoString(FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    void BugItGoString(const FString& a0, const FString& a1) const
    {
        NativeCall<void, void*, void*>(this, "UCheatManager.BugItGoString(FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void BugItGoString(FString* a0, FString* a1) const
    { BugItGoString(*a0, *a1); }

    // jogo_confirmou_dump
    //   UCheatManager.BugItStringCreator(UE::Math::TVector<double>,UE::Math::TRotator<double>,FString&,F
    // endereco: casamento de bytes com a build de referencia
    static void BugItStringCreator(void* a0, void* a1, const FString& a2, const FString& a3)
    {
        NativeCall<void, void*, void*, void*, void*>(nullptr, "UCheatManager.BugItStringCreator(UE::Math::TVector<double>,UE::Math::TRotator<double>,FString&,FString&)", a0, a1, const_cast<FString*>(&a2), const_cast<FString*>(&a3));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BugItStringCreator(void* a0, void* a1, FString* a2, FString* a3)
    { BugItStringCreator(a0, a1, *a2, *a3); }

    // dump_sobre_sdk_287a0
    //   UCheatManager.BugItWorker(UE::Math::TVector<double>,UE::Math::TRotator<double>)
    // endereco: casamento de bytes com a build de referencia
    static void BugItWorker(void* a0, void* a1)
    {
        NativeCall<void, void*, void*>(nullptr, "UCheatManager.BugItWorker(UE::Math::TVector<double>,UE::Math::TRotator<double>)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ChangeSize(float)
    // endereco: casamento de bytes com a build de referencia
    void ChangeSize(float a0) const
    {
        NativeCall<void, float>(this, "UCheatManager.ChangeSize(float)", a0);
    }

    // jogo_confirmou_dump
    //   UCheatManager.CheatScript(FString)
    // endereco: casamento de bytes com a build de referencia
    static void CheatScript(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "UCheatManager.CheatScript(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void CheatScript(FString* a0)
    { CheatScript(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DamageTarget(float)
    // endereco: casamento de bytes com a build de referencia
    void DamageTarget(float a0) const
    {
        NativeCall<void, float>(this, "UCheatManager.DamageTarget(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweep()
    // endereco: casamento de bytes com a build de referencia
    void DebugCapsuleSweep() const
    {
        NativeCall<void>(this, "UCheatManager.DebugCapsuleSweep()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweepCapture()
    // endereco: cache_pdb_25090264
    void DebugCapsuleSweepCapture() const
    {
        NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepCapture()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.DebugCapsuleSweepChannel(ECollisionChannel)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro DebugCapsuleSweepChannel(int a0) const
    {
        return NativeCall<void*, int>(this, "UCheatManager.DebugCapsuleSweepChannel(ECollisionChannel)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweepClear()
    // endereco: casamento de bytes com a build de referencia
    void DebugCapsuleSweepClear() const
    {
        NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepClear()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweepComplex(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DebugCapsuleSweepComplex(bool a0) const
    {
        NativeCall<void, bool>(this, "UCheatManager.DebugCapsuleSweepComplex(bool)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweepPawn()
    // endereco: cache_pdb_25090264
    void DebugCapsuleSweepPawn() const
    {
        NativeCall<void>(this, "UCheatManager.DebugCapsuleSweepPawn()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DebugCapsuleSweepSize(float,float)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    void DebugCapsuleSweepSize(float a0, float a1) const
    {
        NativeCall<void, float, float>(this, "UCheatManager.DebugCapsuleSweepSize(float,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.DestroyAll(TSubclassOf<AActor>,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DestroyAll(void* a0, bool a1) const
    {
        return NativeCall<void*, void*, bool>(this, "UCheatManager.DestroyAll(TSubclassOf<AActor>,bool)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DestroyServerStatReplicator()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DestroyServerStatReplicator() const
    {
        NativeCall<void>(this, "UCheatManager.DestroyServerStatReplicator()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.DisableDebugCamera()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void DisableDebugCamera() const
    {
        NativeCall<void>(this, "UCheatManager.DisableDebugCamera()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.DoGameSpecificBugItLog(FOutputDevice&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro DoGameSpecificBugItLog(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UCheatManager.DoGameSpecificBugItLog(FOutputDevice&)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.EnableDebugCamera()
    // endereco: casamento de bytes com a build de referencia
    void EnableDebugCamera() const
    {
        NativeCall<void>(this, "UCheatManager.EnableDebugCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.FlushLog()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=36]]
    void FlushLog() const
    {
        NativeCall<void>(this, "UCheatManager.FlushLog()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.FreezeFrame(float)
    // endereco: casamento de bytes com a build de referencia
    void FreezeFrame(float a0) const
    {
        NativeCall<void, float>(this, "UCheatManager.FreezeFrame(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.GetTarget(APlayerController*,FHitResult&)
    // endereco: casamento de bytes com a build de referencia
    AActor* GetTarget(void* a0, void* a1) const
    {
        return NativeCall<AActor*, void*, void*>(this, "UCheatManager.GetTarget(APlayerController*,FHitResult&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.GetWorld()
    // classe: a funcao mora em AActor, e UCheatManager herda dela: o `this` e' compativel por construcao
    // endereco: casamento de bytes com a build de referencia
    UWorld* GetWorld() const
    {
        return NativeCall<UWorld*>(this, "AActor.GetWorld()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.God()
    // endereco: casamento de bytes com a build de referencia
    void God() const
    {
        NativeCall<void>(this, "UCheatManager.God()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.InitCheatManager()
    // endereco: casamento de bytes com a build de referencia
    void InitCheatManager() const
    {
        NativeCall<void>(this, "UCheatManager.InitCheatManager()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.InvertMouse()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=94]]
    void InvertMouse() const
    {
        NativeCall<void>(this, "UCheatManager.InvertMouse()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.LogLoc()
    // endereco: casamento de bytes com a build de referencia
    void LogLoc() const
    {
        NativeCall<void>(this, "UCheatManager.LogLoc()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.OnPlayerEndPlayed(AActor*,EEndPlayReason::Type)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnPlayerEndPlayed(void* a0, int a1) const
    {
        return NativeCall<void*, void*, int>(this, "UCheatManager.OnPlayerEndPlayed(AActor*,EEndPlayReason::Type)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.OnlyLoadLevel(FName)
    // endereco: cache_pdb_25090264
    void OnlyLoadLevel(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UCheatManager.OnlyLoadLevel(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.PlayersOnly()
    // endereco: casamento de bytes com a build de referencia
    void PlayersOnly() const
    {
        NativeCall<void>(this, "UCheatManager.PlayersOnly()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)
    // endereco: casamento de bytes com a build de referencia
    bool ProcessConsoleExec(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "UCheatManager.ProcessConsoleExec(wchar_t*,FOutputDevice&,UObject*)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.ReceiveEndPlay()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ReceiveEndPlay() const
    {
        return NativeCall<void*>(this, "UCheatManager.ReceiveEndPlay()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.RegisterForOnCheatManagerCreated(TDelegate<void__cdecl(UCheatManager*)>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RegisterForOnCheatManagerCreated(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UCheatManager.RegisterForOnCheatManagerCreated(TDelegate<void__cdecl(UCheatManager*)>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.RemoveCheatManagerExtension(UCheatManagerExtension*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveCheatManagerExtension(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UCheatManager.RemoveCheatManagerExtension(UCheatManagerExtension*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.SetLevelStreamingStatus(FName,bool,bool)
    // endereco: casamento de bytes com a build de referencia
    void SetLevelStreamingStatus(unsigned long long a0, bool a1, bool a2) const
    {
        NativeCall<void, unsigned long long, bool, bool>(this, "UCheatManager.SetLevelStreamingStatus(FName,bool,bool)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.SetMouseSensitivityToDefault()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=40]]
    void SetMouseSensitivityToDefault() const
    {
        NativeCall<void>(this, "UCheatManager.SetMouseSensitivityToDefault()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.Slomo(float)
    // endereco: casamento de bytes com a build de referencia
    void Slomo(float a0) const
    {
        NativeCall<void, float>(this, "UCheatManager.Slomo(float)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.StreamLevelIn(FName)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [corpo-folha=64]]
    void StreamLevelIn(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UCheatManager.StreamLevelIn(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.StreamLevelOut(FName)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    void StreamLevelOut(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UCheatManager.StreamLevelOut(FName)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.Summon(FString&)
    // endereco: casamento de bytes com a build de referencia
    void Summon(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UCheatManager.Summon(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void Summon(FString* a0) const
    { Summon(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.Teleport()
    // endereco: casamento de bytes com a build de referencia
    void Teleport() const
    {
        NativeCall<void>(this, "UCheatManager.Teleport()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ToggleDebugCamera()
    // endereco: casamento de bytes com a build de referencia
    void ToggleDebugCamera() const
    {
        NativeCall<void>(this, "UCheatManager.ToggleDebugCamera()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ViewActor(FName)
    // endereco: casamento de bytes com a build de referencia
    void ViewActor(unsigned long long a0) const
    {
        NativeCall<void, unsigned long long>(this, "UCheatManager.ViewActor(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UCheatManager.ViewClass(TSubclassOf<AActor>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ViewClass(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UCheatManager.ViewClass(TSubclassOf<AActor>)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ViewPlayer(FString&)
    // endereco: casamento de bytes com a build de referencia
    void ViewPlayer(const FString& a0) const
    {
        NativeCall<void, void*>(this, "UCheatManager.ViewPlayer(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    void ViewPlayer(FString* a0) const
    { ViewPlayer(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.ViewSelf()
    // endereco: casamento de bytes com a build de referencia
    void ViewSelf() const
    {
        NativeCall<void>(this, "UCheatManager.ViewSelf()");
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   UCheatManager.Walk()
    // endereco: casamento de bytes com a build de referencia
    void Walk() const
    {
        NativeCall<void>(this, "UCheatManager.Walk()");
    }

    TArray<void*>& CheatManagerExtensionsField() const
    { return *GetNativePointerField<TArray<void*>*>(this, "UCheatManager.CheatManagerExtensions"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +64, medido na build 25090264
    //  (offset absoluto medido: 0x70; confianca media)
    int& CurrentTraceIndexField() const
    { return BrzCampoAncorado<int>(this, "DebugCameraControllerClass", 64); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +68, medido na build 25090264
    //  (offset absoluto medido: 0x74; confianca media)
    int& CurrentTracePawnIndexField() const
    { return BrzCampoAncorado<int>(this, "DebugCameraControllerClass", 68); }
    BrzCampoPonteiro DebugCameraControllerClassField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatManager.DebugCameraControllerClass")); }
    BrzCampoPonteiro DebugCameraControllerRefField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UCheatManager.DebugCameraControllerRef")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +16, medido na build 25090264
    //  (offset absoluto medido: 0x40; confianca alta)
    float& DebugCapsuleHalfHeightField() const
    { return BrzCampoAncorado<float>(this, "DebugCameraControllerClass", 16); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +20, medido na build 25090264
    //  (offset absoluto medido: 0x44; confianca alta)
    float& DebugCapsuleRadiusField() const
    { return BrzCampoAncorado<float>(this, "DebugCameraControllerClass", 20); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +28, medido na build 25090264
    //  (offset absoluto medido: 0x4C; confianca alta)
    void*& DebugTraceChannelField() const
    { return BrzCampoAncorado<void*>(this, "DebugCameraControllerClass", 28); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +12, medido na build 25090264
    //  (offset absoluto medido: 0x3C; confianca alta)
    float& DebugTraceDistanceField() const
    { return BrzCampoAncorado<float>(this, "DebugCameraControllerClass", 12); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +24, medido na build 25090264
    //  (offset absoluto medido: 0x48; confianca alta)
    float& DebugTraceDrawNormalLengthField() const
    { return BrzCampoAncorado<float>(this, "DebugCameraControllerClass", 24); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +32, medido na build 25090264
    //  (offset absoluto medido: 0x50; confianca alta)
    void*& DebugTraceInfoListField() const
    { return BrzCampoAncorado<void*>(this, "DebugCameraControllerClass", 32); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `DebugCameraControllerClass` +48, medido na build 25090264
    //  (offset absoluto medido: 0x60; confianca media)
    void*& DebugTracePawnInfoListField() const
    { return BrzCampoAncorado<void*>(this, "DebugCameraControllerClass", 48); }
    BitFieldValue<bool, unsigned __int32> bDebugCapsuleSweep()
    { return { (void*)this, "bDebugCapsuleSweep" }; }
    BitFieldValue<bool, unsigned __int32> bDebugCapsuleTraceComplex()
    { return { (void*)this, "bDebugCapsuleTraceComplex" }; }
    BitFieldValue<bool, unsigned __int32> bToggleAILogging()
    { return { (void*)this, "bToggleAILogging" }; }

};

#endif  // BRZ_SDK_JOGO_UCHEATMANAGER_H
