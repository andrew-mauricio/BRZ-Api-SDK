// ==========================================================================
//  UShooterGameUserSettings — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_USHOOTERGAMEUSERSETTINGS_H
#define BRZ_SDK_JOGO_USHOOTERGAMEUSERSETTINGS_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UShooterGameUserSettings
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UShooterGameUserSettings"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.AddPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&)
    // endereco: NAO RESOLVE nesta build — a chamada devolve o zero do tipo e escreve a chave no log
    BrzPonteiro AddPMXM(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.AddPMXM(TArray<__int64,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.AddPMXMFromContainer(TArray<FCFCoreMod,TSizedDefaultAllocator<32>>&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddPMXMFromContainer(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.AddPMXMFromContainer(TArray<FCFCoreMod,TSizedDefaultAllocator<32>>&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.AddToAgreedToTerms()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddToAgreedToTerms() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.AddToAgreedToTerms()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplyCurrentOCIOSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyCurrentOCIOSettings() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ApplyCurrentOCIOSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplyGammaWithCurrentSetting()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyGammaWithCurrentSetting() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ApplyGammaWithCurrentSetting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplyGammaWithNormalizedValue(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyGammaWithNormalizedValue(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameUserSettings.ApplyGammaWithNormalizedValue(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplySFXVolumes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplySFXVolumes() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ApplySFXVolumes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplySettings(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplySettings(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.ApplySettings(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ApplyVolumeSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyVolumeSettings() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ApplyVolumeSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.AssociateIDWithOverwolf()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AssociateIDWithOverwolf() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.AssociateIDWithOverwolf()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.EnableHDRDisplayOutputInternal(bool,int,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro EnableHDRDisplayOutputInternal(bool a0, int a1, bool a2) const
    {
        return NativeCall<void*, bool, int, bool>(this, "UShooterGameUserSettings.EnableHDRDisplayOutputInternal(bool,int,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetAmbientSoundVolume()
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro GetAmbientSoundVolume() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetAmbientSoundVolume()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetCurrentFullscreenMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetCurrentFullscreenMode() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetCurrentFullscreenMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetDLFGSupported()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=120]]
    BrzPonteiro GetDLFGSupported() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetDLFGSupported()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetDLSSMode()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDLSSMode() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetDLSSMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetDLSSModeIndex(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetDLSSModeIndex(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.GetDLSSModeIndex(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetDLSSModeIndex(FString* a0) const
    { return GetDLSSModeIndex(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetEnableDLFG()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    BrzPonteiro GetEnableDLFG() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetEnableDLFG()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetEnableFSRFG()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=129]]
    BrzPonteiro GetEnableFSRFG() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetEnableFSRFG()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetFSRQualityMode()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=118]]
    BrzPonteiro GetFSRQualityMode() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetFSRQualityMode()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetFSRQualityModeIndex(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFSRQualityModeIndex(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.GetFSRQualityModeIndex(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetFSRQualityModeIndex(FString* a0) const
    { return GetFSRQualityModeIndex(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetFSRQualityModeName(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetFSRQualityModeName(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.GetFSRQualityModeName(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetGPUMemoryGB()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetGPUMemoryGB() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetGPUMemoryGB()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetMotionState(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetMotionState(void* a0, void* a1, void* a2, void* a3) const
    {
        return NativeCall<void*, void*, void*, void*, void*>(this, "UShooterGameUserSettings.GetMotionState(UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*,UE::Math::TVector<double>*)", a0, a1, a2, a3);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetShouldResetCinematicForNote(int)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro GetShouldResetCinematicForNote(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.GetShouldResetCinematicForNote(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetSuperResolutionQualityLevel()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado+metodo_grafo]
    BrzPonteiro GetSuperResolutionQualityLevel() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.GetSuperResolutionQualityLevel()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.GetSuperResolutionQualityLevelName(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetSuperResolutionQualityLevelName(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.GetSuperResolutionQualityLevelName(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.HasAgreedToTerms()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro HasAgreedToTerms() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.HasAgreedToTerms()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.InitGraphicsQuality()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitGraphicsQuality() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.InitGraphicsQuality()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.LoadSettings(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro LoadSettings(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.LoadSettings(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ManageShadowSetting()
    // endereco: cache_pdb_25090264
    BrzPonteiro ManageShadowSetting() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ManageShadowSetting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.MarkDLCBrowsed(int)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro MarkDLCBrowsed(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.MarkDLCBrowsed(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.RateGPUMemory()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RateGPUMemory() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.RateGPUMemory()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.RateGPUPerf()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=395+grafo=8/8]]
    BrzPonteiro RateGPUPerf() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.RateGPUPerf()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ResetAllCinematicForNotes()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResetAllCinematicForNotes() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ResetAllCinematicForNotes()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ResetDefaultAudioSetting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ResetDefaultAudioSetting() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ResetDefaultAudioSetting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ResetDefaultGraphicsSetting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ResetDefaultGraphicsSetting() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ResetDefaultGraphicsSetting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ResetDefaultOptionsSetting()
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [bytes96]]
    BrzPonteiro ResetDefaultOptionsSetting() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ResetDefaultOptionsSetting()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ResolveDLCModInstallActions(TArray<__int64,TSizedDefaultAllocator<32>>&
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ResolveDLCModInstallActions(void* a0, void* a1, void* a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UShooterGameUserSettings.ResolveDLCModInstallActions(TArray<__int64,TSizedDefaultAllocator<32>>&,TArray<__int64,TSizedDefaultAllocator<32>>&,TArray<__int64,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SaveSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SaveSettings() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.SaveSettings()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetDLSSQualityMode(FString&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetDLSSQualityMode(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.SetDLSSQualityMode(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetDLSSQualityMode(FString* a0) const
    { return SetDLSSQualityMode(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetEnableDLFG(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetEnableDLFG(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.SetEnableDLFG(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetEnableDLSS(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=122]]
    BrzPonteiro SetEnableDLSS(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.SetEnableDLSS(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetEnableFSRFG(bool)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetEnableFSRFG(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.SetEnableFSRFG(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetEnableReflex(bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=115]]
    BrzPonteiro SetEnableReflex(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.SetEnableReflex(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetFSRQualityMode(int,bool)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=136]]
    BrzPonteiro SetFSRQualityMode(int a0, bool a1) const
    {
        return NativeCall<void*, int, bool>(this, "UShooterGameUserSettings.SetFSRQualityMode(int,bool)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetFrameGenMultiplier(int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetFrameGenMultiplier(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.SetFrameGenMultiplier(int)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetFrameGenSystem(EFrameGenSystem)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=124]]
    BrzPonteiro SetFrameGenSystem(int a0) const
    {
        return NativeCall<void*, int>(this, "UShooterGameUserSettings.SetFrameGenSystem(EFrameGenSystem)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetMasterAudioVolume(float)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro SetMasterAudioVolume(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameUserSettings.SetMasterAudioVolume(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetScreenPercentageClamped(float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetScreenPercentageClamped(float a0) const
    {
        return NativeCall<void*, float>(this, "UShooterGameUserSettings.SetScreenPercentageClamped(float)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetSuperResolutionMethod(FString&)
    // endereco: INFERIDO, com segunda evidencia [cerco_aprovado [tam=147]]
    BrzPonteiro SetSuperResolutionMethod(const FString& a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.SetSuperResolutionMethod(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro SetSuperResolutionMethod(FString* a0) const
    { return SetSuperResolutionMethod(*a0); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetToDefaults()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetToDefaults() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.SetToDefaults()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.SetWorldSettingsOverrides(FWorldSettingsScalabilityOverrides&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SetWorldSettingsOverrides(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.SetWorldSettingsOverrides(FWorldSettingsScalabilityOverrides&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.UpdateCustomCosmeticUserSetting(__int64,bool,bool)
    // endereco: cache_pdb_25090264
    BrzPonteiro UpdateCustomCosmeticUserSetting(long long a0, bool a1, bool a2) const
    {
        return NativeCall<void*, long long, bool, bool>(this, "UShooterGameUserSettings.UpdateCustomCosmeticUserSetting(__int64,bool,bool)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.UpdateCustomCosmeticUserSettingName(FCFCoreMod&)
    // endereco: resolve por ORDEM — inferido pela posicao entre duas ancoras, SEM prova de bytes
    BrzPonteiro UpdateCustomCosmeticUserSettingName(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UShooterGameUserSettings.UpdateCustomCosmeticUserSettingName(FCFCoreMod&)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.UpdateResolutionQuality()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateResolutionQuality() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.UpdateResolutionQuality()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.UpdateScreenPercentage(bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateScreenPercentage(bool a0) const
    {
        return NativeCall<void*, bool>(this, "UShooterGameUserSettings.UpdateScreenPercentage(bool)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.UseFirstPersonRiding()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UseFirstPersonRiding() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.UseFirstPersonRiding()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UShooterGameUserSettings.ValidateSettings()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ValidateSettings() const
    {
        return NativeCall<void*>(this, "UShooterGameUserSettings.ValidateSettings()");
    }

    int& ActiveLingeringWorldTilesField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ActiveLingeringWorldTiles"); }
    int& AdvancedGraphicsQualityField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.AdvancedGraphicsQuality"); }
    float& AimAssistStrengthMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.AimAssistStrengthMultiplier"); }
    float& AmbientSoundVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.AmbientSoundVolume"); }
    int& AudioQualityLevelField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.AudioQualityLevel"); }
    float& BubbleParticlesMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.BubbleParticlesMultiplier"); }
    BrzCampoPonteiro CameraHeightPerDinoNameTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CameraHeightPerDinoNameTag")); }
    float& CameraShakeScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CameraShakeScale"); }
    BrzCampoPonteiro CameraZoomPerDinoNameTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CameraZoomPerDinoNameTag")); }
    float& CharacterAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CharacterAudioVolume"); }
    BrzCampoPonteiro CinematicForNoteShouldResetField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CinematicForNoteShouldReset")); }
    int& ClientNetQualityField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.ClientNetQuality"); }
    int& CompanionReactionVerbosityField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionReactionVerbosity"); }
    int& CompanionSubtitleVerbosityLevelField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CompanionSubtitleVerbosityLevel"); }
    BrzCampoPonteiro CrosshairColorField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColor")); }
    BrzCampoPonteiro CrosshairColorHitmarkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorHitmark")); }
    BrzCampoPonteiro CrosshairColorOverAllyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorOverAlly")); }
    BrzCampoPonteiro CrosshairColorOverEnemyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorOverEnemy")); }
    BrzCampoPonteiro CrosshairColorPickerValueField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorPickerValue")); }
    BrzCampoPonteiro CrosshairColorPickerValueHitmarkField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorPickerValueHitmark")); }
    BrzCampoPonteiro CrosshairColorPickerValueOverAllyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorPickerValueOverAlly")); }
    BrzCampoPonteiro CrosshairColorPickerValueOverEnemyField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CrosshairColorPickerValueOverEnemy")); }
    float& CrosshairOpacityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CrosshairOpacity"); }
    float& CrosshairScaleField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.CrosshairScale"); }
    BrzCampoPonteiro CurrenOCIODisplayConfigurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CurrenOCIODisplayConfiguration")); }
    int& CurrentCameraModeIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CurrentCameraModeIndex"); }
    int& CurrentDinoCameraModeIndexField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.CurrentDinoCameraModeIndex"); }
    BrzCampoPonteiro CurrentOCIOConfigurationField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CurrentOCIOConfiguration")); }
    BrzCampoPonteiro CurrentWorldSettingsOverridesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CurrentWorldSettingsOverrides")); }
    BrzCampoPonteiro CustomCosmeticSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.CustomCosmeticSettings")); }
    BrzCampoPonteiro DLCModIDsLastSessionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.DLCModIDsLastSession")); }
    float& DOFSettingInterpTimeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.DOFSettingInterpTime"); }
    BrzCampoPonteiro DOFSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.DOFSettings")); }
    int& DesiredScreenHeightField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.DesiredScreenHeight"); }
    int& DesiredScreenWidthField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.DesiredScreenWidth"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bDisableVirtualCursor` +1, medido na build 25090264
    //  (offset absoluto medido: 0x6C1; confianca alta)
    void*& DetailGraphicsField() const
    { return BrzCampoAncorado<void*>(this, "bDisableVirtualCursor", 1); }
    int& DynamicDownloadSpeedField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.DynamicDownloadSpeed"); }
    int& EmoteKeyBind1Field() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind1"); }
    int& EmoteKeyBind2Field() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EmoteKeyBind2"); }
    int& EnableDLSSField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.EnableDLSS"); }
    float& FOVMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FOVMultiplier"); }
    int& FilterTypeCustomCosmeticItemsField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeCustomCosmeticItems"); }
    int& FilterTypeCustomCosmeticSkinsField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeCustomCosmeticSkins"); }
    int& FilterTypeInventoryLocalField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeInventoryLocal"); }
    int& FilterTypeInventoryRemoteField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FilterTypeInventoryRemote"); }
    unsigned char& FloatingTooltipDinoModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.FloatingTooltipDinoMode"); }
    unsigned char& FloatingTooltipDroppedItemsModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.FloatingTooltipDroppedItemsMode"); }
    unsigned char& FloatingTooltipPlayerModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.FloatingTooltipPlayerMode"); }
    unsigned char& FloatingTooltipStructureModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.FloatingTooltipStructureMode"); }
    float& FoliageInteractionDistanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionDistance"); }
    float& FoliageInteractionDistanceLimitField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionDistanceLimit"); }
    float& FoliageInteractionQuantityLimitField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FoliageInteractionQuantityLimit"); }
    int& FrameMultiplierField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FrameMultiplier"); }
    float& FrameRateLimitField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.FrameRateLimit"); }
    int& FullscreenModeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.FullscreenMode"); }
    float& GUI3DWidgetQualityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.GUI3DWidgetQuality"); }
    float& Gamma1Field() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma1"); }
    float& Gamma2Field() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Gamma2"); }
    int& GraphicsQualityField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.GraphicsQuality"); }
    float& GroundClutterDensityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.GroundClutterDensity"); }
    int& GroundClutterRadiusField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.GroundClutterRadius"); }
    float& HDRDisplayMaxLuminanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminance"); }
    float& HDRDisplayMaxLuminanceMaxValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminanceMaxValue"); }
    float& HDRDisplayMaxLuminanceMinValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMaxLuminanceMinValue"); }
    float& HDRDisplayMidLuminanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminance"); }
    float& HDRDisplayMidLuminanceMaxValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminanceMaxValue"); }
    float& HDRDisplayMidLuminanceMinValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMidLuminanceMinValue"); }
    float& HDRDisplayMinLuminanceField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminance"); }
    float& HDRDisplayMinLuminanceMaxValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminanceMaxValue"); }
    float& HDRDisplayMinLuminanceMinValueField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.HDRDisplayMinLuminanceMinValue"); }
    int& HDRDisplayOutputNitsField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.HDRDisplayOutputNits"); }
    int& HFSQualityField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.HFSQuality"); }
    unsigned char& HideEnemyStructureCosmeticsModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.HideEnemyStructureCosmeticsMode"); }
    unsigned char& ItemNotificationModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.ItemNotificationMode"); }
    float& LODScalarField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LODScalar"); }
    int& LastBrowsedDLCVersionField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastBrowsedDLCVersion"); }
    float& LastCPUBenchmarkResultField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LastCPUBenchmarkResult"); }
    BrzCampoPonteiro LastCPUBenchmarkStepsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.LastCPUBenchmarkSteps")); }
    int& LastConfirmedAudioQualityLevelField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastConfirmedAudioQualityLevel"); }
    int& LastConfirmedFullscreenModeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastConfirmedFullscreenMode"); }
    FString& LastDLCTypeSearchStringField() const
    { return *GetNativePointerField<FString*>(this, "UShooterGameUserSettings.LastDLCTypeSearchString"); }
    int& LastDLCTypeSearchTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastDLCTypeSearchType"); }
    float& LastGPUBenchmarkMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LastGPUBenchmarkMultiplier"); }
    float& LastGPUBenchmarkResultField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LastGPUBenchmarkResult"); }
    BrzCampoPonteiro LastGPUBenchmarkStepsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.LastGPUBenchmarkSteps")); }
    BrzCampoPonteiro LastJoinedSessionPerCategoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.LastJoinedSessionPerCategory")); }
    int& LastPVESearchTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastPVESearchType"); }
    float& LastRecommendedScreenHeightField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LastRecommendedScreenHeight"); }
    float& LastRecommendedScreenWidthField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LastRecommendedScreenWidth"); }
    int& LastServerSearchTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSearchType"); }
    int& LastServerSortField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastServerSort"); }
    int& LastSessionCategoryJoinedField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastSessionCategoryJoined"); }
    int& LastUserConfirmedDesiredScreenHeightField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastUserConfirmedDesiredScreenHeight"); }
    int& LastUserConfirmedDesiredScreenWidthField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LastUserConfirmedDesiredScreenWidth"); }
    unsigned int& LastUserConfirmedResolutionSizeXField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterGameUserSettings.LastUserConfirmedResolutionSizeX"); }
    unsigned int& LastUserConfirmedResolutionSizeYField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterGameUserSettings.LastUserConfirmedResolutionSizeY"); }
    int& LocalCraftingSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalCraftingSortType"); }
    int& LocalItemSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalItemSortType"); }
    int& LocalMarketSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalMarketSortType"); }
    int& LocalMarketSortType_AllyField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.LocalMarketSortType_Ally"); }
    float& LookLeftRightSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookLeftRightSensitivity"); }
    float& LookUpDownSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.LookUpDownSensitivity"); }
    int& MarketFilterTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MarketFilterType"); }
    float& MasterAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MasterAudioVolume"); }
    int& MaxAscensionLevelField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MaxAscensionLevel"); }
    int& MaxLastDeathMarkField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.MaxLastDeathMark"); }
    float& MusicAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.MusicAudioVolume"); }
    FString& OCIOAssetField() const
    { return *GetNativePointerField<FString*>(this, "UShooterGameUserSettings.OCIOAsset"); }
    int& OCIOColorSpaceField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.OCIOColorSpace"); }
    int& OCIODisplayViewField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.OCIODisplayView"); }
    BrzCampoPonteiro OnGameUserSettingsUINeedsUpdateField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.OnGameUserSettingsUINeedsUpdate")); }
    int& PendingLastSessionCategoryJoinedField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.PendingLastSessionCategoryJoined"); }
    BrzCampoPonteiro PhotomodeLastUsedSettingsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodeLastUsedSettings")); }
    BrzCampoPonteiro PhotomodePresets_CameraField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodePresets_Camera")); }
    BrzCampoPonteiro PhotomodePresets_MovementField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodePresets_Movement")); }
    BrzCampoPonteiro PhotomodePresets_PPsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodePresets_PPs")); }
    BrzCampoPonteiro PhotomodePresets_SplinesField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodePresets_Splines")); }
    BrzCampoPonteiro PhotomodePresets_TargetingField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.PhotomodePresets_Targeting")); }
    int& PreferredFullscreenModeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.PreferredFullscreenMode"); }
    int& PrevVSMEnableValueField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.PrevVSMEnableValue"); }
    int& RemoteCraftingSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteCraftingSortType"); }
    int& RemoteItemSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.RemoteItemSortType"); }
    unsigned int& ResolutionSizeXField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterGameUserSettings.ResolutionSizeX"); }
    unsigned int& ResolutionSizeYField() const
    { return *GetNativePointerField<unsigned int*>(this, "UShooterGameUserSettings.ResolutionSizeY"); }
    float& SFXAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SFXAudioVolume"); }
    float& SavedMainMapZoomField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SavedMainMapZoom"); }
    BrzCampoPonteiro SavedMinimapMarksField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.SavedMinimapMarks")); }
    float& SavedOverlayMapZoomField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SavedOverlayMapZoom"); }
    float& ScreenPercentageField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.ScreenPercentage"); }
    unsigned char& SelectedMainMenuIntroField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.SelectedMainMenuIntro"); }
    float& SoundUIAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.SoundUIAudioVolume"); }
    float& StructureTooltipMaxSpeedMultiplyField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.StructureTooltipMaxSpeedMultiply"); }
    int& SuperResolutionQualityLevelField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.SuperResolutionQualityLevel"); }
    float& TPVCameraHorizontalOffsetFactorField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TPVCameraHorizontalOffsetFactor"); }
    float& TemporaryMusicStingerReductionMultiplierField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TemporaryMusicStingerReductionMultiplier"); }
    int& TextChatFilterTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.TextChatFilterType"); }
    float& TheGammaCorrectionField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TheGammaCorrection"); }
    unsigned char& TopNotificationModeField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.TopNotificationMode"); }
    float& TrueSkyQualityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.TrueSkyQuality"); }
    float& UIQuickbarScalingField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIQuickbarScaling"); }
    float& UIScalingField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.UIScaling"); }
    int& VSyncModeTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VSyncModeType"); }
    float& VersionField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.Version"); }
    int& VersionMetaTagField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VersionMetaTag"); }
    float& VoiceAudioVolumeField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.VoiceAudioVolume"); }
    int& VoiceChatFilterTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.VoiceChatFilterType"); }
    int& WindowPosXField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WindowPosX"); }
    int& WindowPosYField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WindowPosY"); }
    int& WorldMarketSortTypeField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WorldMarketSortType"); }
    int& WorldMarketSortType_AllyField() const
    { return *GetNativePointerField<int*>(this, "UShooterGameUserSettings.WorldMarketSortType_Ally"); }
    BrzCampoPonteiro agreedToTermsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.agreedToTerms")); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectedMainMenuIntro` +1, medido na build 25090264
    //  (offset absoluto medido: 0x355; confianca alta)
    void*& bAssociateIDWithOverwolfRunningField() const
    { return BrzCampoAncorado<void*>(this, "SelectedMainMenuIntro", 1); }
    bool& bDisableBloomField() const
    { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableBloom"); }
    bool& bDisableLightShaftsField() const
    { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bDisableLightShafts"); }
    bool& bForceTPVCameraOffsetField() const
    { return *GetNativePointerField<bool*>(this, "UShooterGameUserSettings.bForceTPVCameraOffset"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `bAutomaticallyCreatePOIOnDeath` +1, medido na build 25090264
    //  (offset absoluto medido: 0x77E; confianca alta)
    void*& bHasCFAuthCFForClientSessionField() const
    { return BrzCampoAncorado<void*>(this, "bAutomaticallyCreatePOIOnDeath", 1); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SelectedMainMenuIntro` +2, medido na build 25090264
    //  (offset absoluto medido: 0x356; confianca alta)
    void*& bHasEmptyStoreField() const
    { return BrzCampoAncorado<void*>(this, "SelectedMainMenuIntro", 2); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `SuperResolutionQualityLevel` +4, medido na build 25090264
    //  (offset absoluto medido: 0x7E8; confianca alta)
    void*& bIsInUISpawnField() const
    { return BrzCampoAncorado<void*>(this, "SuperResolutionQualityLevel", 4); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `MarketFilterType` +4, medido na build 25090264
    //  (offset absoluto medido: 0x284; confianca alta)
    void*& bPreventDinoNameTagsField() const
    { return BrzCampoAncorado<void*>(this, "MarketFilterType", 4); }
    BitFieldValue<bool, unsigned __int32> bUseDesiredScreenHeight()
    { return { (void*)this, "bUseDesiredScreenHeight" }; }
    BitFieldValue<bool, unsigned __int32> bUseDynamicResolution()
    { return { (void*)this, "bUseDynamicResolution" }; }
    unsigned char& bUseGamepadAimAssistField() const
    { return *GetNativePointerField<unsigned char*>(this, "UShooterGameUserSettings.bUseGamepadAimAssist"); }
    BitFieldValue<bool, unsigned __int32> bUseHDRDisplayOutput()
    { return { (void*)this, "bUseHDRDisplayOutput" }; }
    BitFieldValue<bool, unsigned __int32> bUseVSync()
    { return { (void*)this, "bUseVSync" }; }
    BrzCampoPonteiro consoleCommandHistoryField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UShooterGameUserSettings.consoleCommandHistory")); }
    float& gyroSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.gyroSensitivity"); }
    float& radialSelectionSpeedField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.radialSelectionSpeed"); }
    //  sem UPROPERTY: a reflexao NAO alcanca este campo por nome.
    //  ancorado em `radialSelectionSpeed` +4, medido na build 25090264
    //  (offset absoluto medido: 0x6BC; confianca alta)
    void*& radialSelectionSpeedConstantField() const
    { return BrzCampoAncorado<void*>(this, "radialSelectionSpeed", 4); }
    float& virtualCursorSensitivityField() const
    { return *GetNativePointerField<float*>(this, "UShooterGameUserSettings.virtualCursorSensitivity"); }
    BitFieldValue<bool, unsigned __int32> CompanionIsHiddenState()
    { return { (void*)this, "CompanionIsHiddenState" }; }
    BitFieldValue<bool, unsigned __int32> ConsoleAccess()
    { return { (void*)this, "ConsoleAccess" }; }
    BitFieldValue<bool, unsigned __int32> DisableCosmeticsDynamicDownloading()
    { return { (void*)this, "DisableCosmeticsDynamicDownloading" }; }
    BitFieldValue<bool, unsigned __int32> DisableDefaultCharacterItems()
    { return { (void*)this, "DisableDefaultCharacterItems" }; }
    BitFieldValue<bool, unsigned __int32> DisableLoadScreenMusic()
    { return { (void*)this, "DisableLoadScreenMusic" }; }
    BitFieldValue<bool, unsigned __int32> DisableMenuMusic()
    { return { (void*)this, "DisableMenuMusic" }; }
    BitFieldValue<bool, unsigned __int32> DisableSubtitles()
    { return { (void*)this, "DisableSubtitles" }; }
    BitFieldValue<bool, unsigned __int32> EnableDeathReactions()
    { return { (void*)this, "EnableDeathReactions" }; }
    BitFieldValue<bool, unsigned __int32> EnableEmoteReactions()
    { return { (void*)this, "EnableEmoteReactions" }; }
    BitFieldValue<bool, unsigned __int32> EnableEnvironmentalReactions()
    { return { (void*)this, "EnableEnvironmentalReactions" }; }
    BitFieldValue<bool, unsigned __int32> EnableMovementSounds()
    { return { (void*)this, "EnableMovementSounds" }; }
    BitFieldValue<bool, unsigned __int32> EnableRespawnReactions()
    { return { (void*)this, "EnableRespawnReactions" }; }
    BitFieldValue<bool, unsigned __int32> EnableSayHelloReactions()
    { return { (void*)this, "EnableSayHelloReactions" }; }
    BitFieldValue<bool, unsigned __int32> HideItemTextOverlay()
    { return { (void*)this, "HideItemTextOverlay" }; }
    BitFieldValue<bool, unsigned __int32> HighQualityMaterials()
    { return { (void*)this, "HighQualityMaterials" }; }
    BitFieldValue<bool, unsigned __int32> HighQualitySurfaces()
    { return { (void*)this, "HighQualitySurfaces" }; }
    BitFieldValue<bool, unsigned __int32> LastAutoFavorite()
    { return { (void*)this, "LastAutoFavorite" }; }
    BitFieldValue<bool, unsigned __int32> LastPlatformSpecificServerSearch()
    { return { (void*)this, "LastPlatformSpecificServerSearch" }; }
    BitFieldValue<bool, unsigned __int32> LastServerSearchHideFull()
    { return { (void*)this, "LastServerSearchHideFull" }; }
    BitFieldValue<bool, unsigned __int32> LastServerSearchProtected()
    { return { (void*)this, "LastServerSearchProtected" }; }
    BitFieldValue<bool, unsigned __int32> LastServerSortAsc()
    { return { (void*)this, "LastServerSortAsc" }; }
    BitFieldValue<bool, unsigned __int32> MinimalFloatingNameSetting()
    { return { (void*)this, "MinimalFloatingNameSetting" }; }
    BitFieldValue<bool, unsigned __int32> PlayActionWheelClickSound()
    { return { (void*)this, "PlayActionWheelClickSound" }; }
    BitFieldValue<bool, unsigned __int32> PlayHUDRolloverSound()
    { return { (void*)this, "PlayHUDRolloverSound" }; }
    BitFieldValue<bool, unsigned __int32> PreventDetailGraphics()
    { return { (void*)this, "PreventDetailGraphics" }; }
    BitFieldValue<bool, unsigned __int32> ShowExplorerNoteSubtitles()
    { return { (void*)this, "ShowExplorerNoteSubtitles" }; }
    BitFieldValue<bool, unsigned __int32> ShowPlayerServers()
    { return { (void*)this, "ShowPlayerServers" }; }
    BitFieldValue<bool, unsigned __int32> StopExplorerNoteAudioOnClose()
    { return { (void*)this, "StopExplorerNoteAudioOnClose" }; }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyCreatePOIOnDeath()
    { return { (void*)this, "bAutomaticallyCreatePOIOnDeath" }; }
    BitFieldValue<bool, unsigned __int32> bAutomaticallyCreateWaypointOnTamingCreatures()
    { return { (void*)this, "bAutomaticallyCreateWaypointOnTamingCreatures" }; }
    BitFieldValue<bool, unsigned __int32> bCameraViewBob()
    { return { (void*)this, "bCameraViewBob" }; }
    BitFieldValue<bool, unsigned __int32> bChatBubbles()
    { return { (void*)this, "bChatBubbles" }; }
    BitFieldValue<bool, unsigned __int32> bChatShowSteamName()
    { return { (void*)this, "bChatShowSteamName" }; }
    BitFieldValue<bool, unsigned __int32> bChatShowTribeName()
    { return { (void*)this, "bChatShowTribeName" }; }
    BitFieldValue<bool, unsigned __int32> bCinematicLightingMode()
    { return { (void*)this, "bCinematicLightingMode" }; }
    BitFieldValue<bool, unsigned __int32> bCraftablesShowAllItems()
    { return { (void*)this, "bCraftablesShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bCustomCosmeticDefaultItemsTab()
    { return { (void*)this, "bCustomCosmeticDefaultItemsTab" }; }
    BitFieldValue<bool, unsigned __int32> bCustomCosmeticLocalTabExpanded()
    { return { (void*)this, "bCustomCosmeticLocalTabExpanded" }; }
    BitFieldValue<bool, unsigned __int32> bCustomCosmeticsDefaultSupressed()
    { return { (void*)this, "bCustomCosmeticsDefaultSupressed" }; }
    BitFieldValue<bool, unsigned __int32> bCustomCosmeticsShowAllItems()
    { return { (void*)this, "bCustomCosmeticsShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bDisableBloom()
    { return { (void*)this, "bDisableBloom" }; }
    BitFieldValue<bool, unsigned __int32> bDisableHLOD()
    { return { (void*)this, "bDisableHLOD" }; }
    BitFieldValue<bool, unsigned __int32> bDisableLightShafts()
    { return { (void*)this, "bDisableLightShafts" }; }
    BitFieldValue<bool, unsigned __int32> bDisableMeleeCameraSwingAnims()
    { return { (void*)this, "bDisableMeleeCameraSwingAnims" }; }
    BitFieldValue<bool, unsigned __int32> bDisableMenuTransitions()
    { return { (void*)this, "bDisableMenuTransitions" }; }
    BitFieldValue<bool, unsigned __int32> bDisableNameYourTamePopup()
    { return { (void*)this, "bDisableNameYourTamePopup" }; }
    BitFieldValue<bool, unsigned __int32> bDisablePaintings()
    { return { (void*)this, "bDisablePaintings" }; }
    BitFieldValue<bool, unsigned __int32> bDisableShadows()
    { return { (void*)this, "bDisableShadows" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTPVCameraInterpolation()
    { return { (void*)this, "bDisableTPVCameraInterpolation" }; }
    BitFieldValue<bool, unsigned __int32> bDisableTorporEffect()
    { return { (void*)this, "bDisableTorporEffect" }; }
    BitFieldValue<bool, unsigned __int32> bDisableVirtualCursor()
    { return { (void*)this, "bDisableVirtualCursor" }; }
    BitFieldValue<bool, unsigned __int32> bDisableVirtualKeyboard()
    { return { (void*)this, "bDisableVirtualKeyboard" }; }
    BitFieldValue<bool, unsigned __int32> bDistanceFieldShadowing()
    { return { (void*)this, "bDistanceFieldShadowing" }; }
    BitFieldValue<bool, unsigned __int32> bDontReduceGameResolutionInInventory()
    { return { (void*)this, "bDontReduceGameResolutionInInventory" }; }
    BitFieldValue<bool, unsigned __int32> bEnableASACamera()
    { return { (void*)this, "bEnableASACamera" }; }
    BitFieldValue<bool, unsigned __int32> bEnableColorGrading()
    { return { (void*)this, "bEnableColorGrading" }; }
    BitFieldValue<bool, unsigned __int32> bEnableDLFG()
    { return { (void*)this, "bEnableDLFG" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFluidInteraction()
    { return { (void*)this, "bEnableFluidInteraction" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFootstepDecals()
    { return { (void*)this, "bEnableFootstepDecals" }; }
    BitFieldValue<bool, unsigned __int32> bEnableFootstepParticles()
    { return { (void*)this, "bEnableFootstepParticles" }; }
    BitFieldValue<bool, unsigned __int32> bEnableHDROutput()
    { return { (void*)this, "bEnableHDROutput" }; }
    BitFieldValue<bool, unsigned __int32> bEnableInventoryItemTooltips()
    { return { (void*)this, "bEnableInventoryItemTooltips" }; }
    BitFieldValue<bool, unsigned __int32> bEnableLowLightEnhancement()
    { return { (void*)this, "bEnableLowLightEnhancement" }; }
    BitFieldValue<bool, unsigned __int32> bEnableReflex()
    { return { (void*)this, "bEnableReflex" }; }
    BitFieldValue<bool, unsigned __int32> bExtraLevelStreamingDistance()
    { return { (void*)this, "bExtraLevelStreamingDistance" }; }
    BitFieldValue<bool, unsigned __int32> bFPVClimbingGear()
    { return { (void*)this, "bFPVClimbingGear" }; }
    BitFieldValue<bool, unsigned __int32> bFPVGlidingGear()
    { return { (void*)this, "bFPVGlidingGear" }; }
    BitFieldValue<bool, unsigned __int32> bFilmGrain()
    { return { (void*)this, "bFilmGrain" }; }
    BitFieldValue<bool, unsigned __int32> bFirstPersonRiding()
    { return { (void*)this, "bFirstPersonRiding" }; }
    BitFieldValue<bool, unsigned __int32> bFirstPersonShipDriving()
    { return { (void*)this, "bFirstPersonShipDriving" }; }
    BitFieldValue<bool, unsigned __int32> bFloatingNames()
    { return { (void*)this, "bFloatingNames" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowItemNames()
    { return { (void*)this, "bForceShowItemNames" }; }
    BitFieldValue<bool, unsigned __int32> bForceShowRadialWheelTexts()
    { return { (void*)this, "bForceShowRadialWheelTexts" }; }
    BitFieldValue<bool, unsigned __int32> bForceTPVCameraOffset()
    { return { (void*)this, "bForceTPVCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bHasCompletedGen2()
    { return { (void*)this, "bHasCompletedGen2" }; }
    BitFieldValue<bool, unsigned __int32> bHasInitializedScreenPercentage()
    { return { (void*)this, "bHasInitializedScreenPercentage" }; }
    BitFieldValue<bool, unsigned __int32> bHasLoadedLostColonyMainMenuOnce()
    { return { (void*)this, "bHasLoadedLostColonyMainMenuOnce" }; }
    BitFieldValue<bool, unsigned __int32> bHasRunAutoSettings()
    { return { (void*)this, "bHasRunAutoSettings" }; }
    BitFieldValue<bool, unsigned __int32> bHasSavedGame()
    { return { (void*)this, "bHasSavedGame" }; }
    BitFieldValue<bool, unsigned __int32> bHasSeenGen2Intro()
    { return { (void*)this, "bHasSeenGen2Intro" }; }
    BitFieldValue<bool, unsigned __int32> bHasSetupDifficultySP()
    { return { (void*)this, "bHasSetupDifficultySP" }; }
    BitFieldValue<bool, unsigned __int32> bHasSetupVisualSettings()
    { return { (void*)this, "bHasSetupVisualSettings" }; }
    BitFieldValue<bool, unsigned __int32> bHasStartedTheGameOnce()
    { return { (void*)this, "bHasStartedTheGameOnce" }; }
    BitFieldValue<bool, unsigned __int32> bHideFloatingPlayerNames()
    { return { (void*)this, "bHideFloatingPlayerNames" }; }
    BitFieldValue<bool, unsigned __int32> bHideGamepadItemSelectionModifier()
    { return { (void*)this, "bHideGamepadItemSelectionModifier" }; }
    BitFieldValue<bool, unsigned __int32> bHideServerInfo()
    { return { (void*)this, "bHideServerInfo" }; }
    BitFieldValue<bool, unsigned __int32> bHideStructurePlacementCrosshair()
    { return { (void*)this, "bHideStructurePlacementCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bHighQualityAnisotropicFiltering()
    { return { (void*)this, "bHighQualityAnisotropicFiltering" }; }
    BitFieldValue<bool, unsigned __int32> bHighQualityLODs()
    { return { (void*)this, "bHighQualityLODs" }; }
    BitFieldValue<bool, unsigned __int32> bHostSessionHasBeenOpened()
    { return { (void*)this, "bHostSessionHasBeenOpened" }; }
    BitFieldValue<bool, unsigned __int32> bInvertLookY()
    { return { (void*)this, "bInvertLookY" }; }
    BitFieldValue<bool, unsigned __int32> bJoinNotifications()
    { return { (void*)this, "bJoinNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bLocalInventoryCraftingShowAllItems()
    { return { (void*)this, "bLocalInventoryCraftingShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bLocalInventoryItemsShowAllItems()
    { return { (void*)this, "bLocalInventoryItemsShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bLowQualityVFX()
    { return { (void*)this, "bLowQualityVFX" }; }
    BitFieldValue<bool, unsigned __int32> bMenuGyro()
    { return { (void*)this, "bMenuGyro" }; }
    BitFieldValue<bool, unsigned __int32> bMinimalUI()
    { return { (void*)this, "bMinimalUI" }; }
    BitFieldValue<bool, unsigned __int32> bMinimapOverlayUseLowOpacity()
    { return { (void*)this, "bMinimapOverlayUseLowOpacity" }; }
    BitFieldValue<bool, unsigned __int32> bNoBloodEffects()
    { return { (void*)this, "bNoBloodEffects" }; }
    BitFieldValue<bool, unsigned __int32> bNoTooltipDelay()
    { return { (void*)this, "bNoTooltipDelay" }; }
    BitFieldValue<bool, unsigned __int32> bOCIOIsEnabled()
    { return { (void*)this, "bOCIOIsEnabled" }; }
    BitFieldValue<bool, unsigned __int32> bPreventBiomeWalls()
    { return { (void*)this, "bPreventBiomeWalls" }; }
    BitFieldValue<bool, unsigned __int32> bPreventColorizedItemNames()
    { return { (void*)this, "bPreventColorizedItemNames" }; }
    BitFieldValue<bool, unsigned __int32> bPreventCrosshair()
    { return { (void*)this, "bPreventCrosshair" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHitMarkers()
    { return { (void*)this, "bPreventHitMarkers" }; }
    BitFieldValue<bool, unsigned __int32> bPreventInventoryOpeningSounds()
    { return { (void*)this, "bPreventInventoryOpeningSounds" }; }
    BitFieldValue<bool, unsigned __int32> bPreventItemCraftingSounds()
    { return { (void*)this, "bPreventItemCraftingSounds" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveDiscordFriendRequests()
    { return { (void*)this, "bReceiveDiscordFriendRequests" }; }
    BitFieldValue<bool, unsigned __int32> bReceiveDiscordNotifications()
    { return { (void*)this, "bReceiveDiscordNotifications" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryCraftingShowAllItems()
    { return { (void*)this, "bRemoteInventoryCraftingShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryItemsShowAllItems()
    { return { (void*)this, "bRemoteInventoryItemsShowAllItems" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryShowCraftables()
    { return { (void*)this, "bRemoteInventoryShowCraftables" }; }
    BitFieldValue<bool, unsigned __int32> bRemoteInventoryShowEngrams()
    { return { (void*)this, "bRemoteInventoryShowEngrams" }; }
    BitFieldValue<bool, unsigned __int32> bRequestDefaultCharacterItemsOnce()
    { return { (void*)this, "bRequestDefaultCharacterItemsOnce" }; }
    BitFieldValue<bool, unsigned __int32> bRequiresRestart()
    { return { (void*)this, "bRequiresRestart" }; }
    BitFieldValue<bool, unsigned __int32> bReverseTribeLogOrder()
    { return { (void*)this, "bReverseTribeLogOrder" }; }
    BitFieldValue<bool, unsigned __int32> bSaveLastDeathMark()
    { return { (void*)this, "bSaveLastDeathMark" }; }
    BitFieldValue<bool, unsigned __int32> bShowAmbientInsectsVFX()
    { return { (void*)this, "bShowAmbientInsectsVFX" }; }
    BitFieldValue<bool, unsigned __int32> bShowBedsOnMap()
    { return { (void*)this, "bShowBedsOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowChatBox()
    { return { (void*)this, "bShowChatBox" }; }
    BitFieldValue<bool, unsigned __int32> bShowDinosOnMap()
    { return { (void*)this, "bShowDinosOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowInfoButtons()
    { return { (void*)this, "bShowInfoButtons" }; }
    BitFieldValue<bool, unsigned __int32> bShowMissionsOnMap()
    { return { (void*)this, "bShowMissionsOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowPingsOnMap()
    { return { (void*)this, "bShowPingsOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowPlayersOnMap()
    { return { (void*)this, "bShowPlayersOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowRTSKeyBinds()
    { return { (void*)this, "bShowRTSKeyBinds" }; }
    BitFieldValue<bool, unsigned __int32> bShowStatusNotificationMessages()
    { return { (void*)this, "bShowStatusNotificationMessages" }; }
    BitFieldValue<bool, unsigned __int32> bShowWaypointsOnMap()
    { return { (void*)this, "bShowWaypointsOnMap" }; }
    BitFieldValue<bool, unsigned __int32> bShowedGenesis2DLCBackground()
    { return { (void*)this, "bShowedGenesis2DLCBackground" }; }
    BitFieldValue<bool, unsigned __int32> bShowedGenesisDLCBackground()
    { return { (void*)this, "bShowedGenesisDLCBackground" }; }
    BitFieldValue<bool, unsigned __int32> bSpectatorManualFloatingNames()
    { return { (void*)this, "bSpectatorManualFloatingNames" }; }
    BitFieldValue<bool, unsigned __int32> bSuppressAdminIcon()
    { return { (void*)this, "bSuppressAdminIcon" }; }
    BitFieldValue<bool, unsigned __int32> bTemperatureF()
    { return { (void*)this, "bTemperatureF" }; }
    BitFieldValue<bool, unsigned __int32> bTextChatBubbles()
    { return { (void*)this, "bTextChatBubbles" }; }
    BitFieldValue<bool, unsigned __int32> bThirdPersonPlayer()
    { return { (void*)this, "bThirdPersonPlayer" }; }
    BitFieldValue<bool, unsigned __int32> bToggleExtendedHUDInfo()
    { return { (void*)this, "bToggleExtendedHUDInfo" }; }
    BitFieldValue<bool, unsigned __int32> bToggleToTalk()
    { return { (void*)this, "bToggleToTalk" }; }
    BitFieldValue<bool, unsigned __int32> bUIVibration()
    { return { (void*)this, "bUIVibration" }; }
    BitFieldValue<bool, unsigned __int32> bUseDFAO()
    { return { (void*)this, "bUseDFAO" }; }
    BitFieldValue<bool, unsigned __int32> bUseDistanceFieldAmbientOcclusion()
    { return { (void*)this, "bUseDistanceFieldAmbientOcclusion" }; }
    BitFieldValue<bool, unsigned __int32> bUseGamepadSpeaker()
    { return { (void*)this, "bUseGamepadSpeaker" }; }
    BitFieldValue<bool, unsigned __int32> bUseLowQualityLevelStreaming()
    { return { (void*)this, "bUseLowQualityLevelStreaming" }; }
    BitFieldValue<bool, unsigned __int32> bUseOldThirdPersonCameraOffset()
    { return { (void*)this, "bUseOldThirdPersonCameraOffset" }; }
    BitFieldValue<bool, unsigned __int32> bUseOldThirdPersonCameraTrace()
    { return { (void*)this, "bUseOldThirdPersonCameraTrace" }; }
    BitFieldValue<bool, unsigned __int32> bUseSSAO()
    { return { (void*)this, "bUseSSAO" }; }
    BitFieldValue<bool, unsigned __int32> bUseSimpleDistanceMovement()
    { return { (void*)this, "bUseSimpleDistanceMovement" }; }
    BitFieldValue<bool, unsigned __int32> bUserMotionBlur()
    { return { (void*)this, "bUserMotionBlur" }; }
    BitFieldValue<bool, unsigned __int32> bVibration()
    { return { (void*)this, "bVibration" }; }
    BitFieldValue<bool, unsigned __int32> bViewedARK2Trailer()
    { return { (void*)this, "bViewedARK2Trailer" }; }
    BitFieldValue<bool, unsigned __int32> bViewedAnimatedSeriesTrailer()
    { return { (void*)this, "bViewedAnimatedSeriesTrailer" }; }

};

#endif  // BRZ_SDK_JOGO_USHOOTERGAMEUSERSETTINGS_H
