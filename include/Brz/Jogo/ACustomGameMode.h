// ==========================================================================
//  ACustomGameMode — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_ACUSTOMGAMEMODE_H
#define BRZ_SDK_JOGO_ACUSTOMGAMEMODE_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

#include "AShooterGameMode.h"

struct ACustomGameMode : public AShooterGameMode
{
    static UClass* StaticClass()
    { return BrzClassePorNome("ACustomGameMode"); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)
    // endereco: casamento de bytes com a build de referencia
    static void AdjustDamage(void* a0, void* a1, void* a2, void* a3, void* a4)
    {
        NativeCall<void, void*, void*, void*, void*, void*>(nullptr, "ACustomGameMode.AdjustDamage(AActor*,float&,FDamageEvent&,AController*,AActor*)", a0, a1, a2, a3, a4);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.AllowAddToTribe(AShooterPlayerState*,FTribeData&)
    // endereco: cache_pdb_25090264
    static bool AllowAddToTribe(void* a0, void* a1)
    {
        return NativeCall<bool, void*, void*>(nullptr, "ACustomGameMode.AllowAddToTribe(AShooterPlayerState*,FTribeData&)", a0, a1);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.AllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusVa
    // endereco: cache_pdb_25090264
    static bool AllowModifyStatusValue(void* a0, int a1, float a2)
    {
        return NativeCall<bool, void*, int, float>(nullptr, "ACustomGameMode.AllowModifyStatusValue(UPrimalCharacterStatusComponent*,EPrimalCharacterStatusValue::Type,float)", a0, a1, a2);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocat
    // endereco: casamento de bytes com a build de referencia
    static void BreakTribeData(void* a0, const FString& a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "ACustomGameMode.BreakTribeData(FTribeData,FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", a0, const_cast<FString*>(&a1), a2, a3, a4, a5, a6, a7, a8, a9);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void BreakTribeData(void* a0, FString* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
    { BreakTribeData(a0, *a1, a2, a3, a4, a5, a6, a7, a8, a9); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.InitGame(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static void InitGame(const FString& a0, const FString& a1, const FString& a2)
    {
        NativeCall<void, void*, void*, void*>(nullptr, "ACustomGameMode.InitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void InitGame(FString* a0, FString* a1, FString* a2)
    { InitGame(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.InitOptions(FString)
    // endereco: casamento de bytes com a build de referencia
    static void InitOptions(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "ACustomGameMode.InitOptions(FString)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void InitOptions(FString* a0)
    { InitOptions(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.KickPlayer(APlayerController*)
    // endereco: casamento de bytes com a build de referencia
    static void KickPlayer(void* a0)
    {
        NativeCall<void, void*>(nullptr, "ACustomGameMode.KickPlayer(APlayerController*)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.KickPlayersWithoutCharacter(FString&)
    // endereco: casamento de bytes com a build de referencia
    static void KickPlayersWithoutCharacter(const FString& a0)
    {
        NativeCall<void, void*>(nullptr, "ACustomGameMode.KickPlayersWithoutCharacter(FString&)", const_cast<FString*>(&a0));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void KickPlayersWithoutCharacter(FString* a0)
    { KickPlayersWithoutCharacter(*a0); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.MakeTribeData(FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TAr
    // endereco: casamento de bytes com a build de referencia
    static void MakeTribeData(void* retorno, const FString& a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8)
    {
        NativeCall<void, void*, void*, void*, void*, void*, void*, void*, void*, void*, void*>(nullptr, "ACustomGameMode.MakeTribeData(FString&,int&,int&,TArray<FString,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,TArray<int,TSizedDefaultAllocator<32>>&,bool&,FTribeGovernment&,TArray<FPrimalPlayerCharacterConfigStructReplicated,TSizedDefaultAllocator<32>>&)", retorno, const_cast<FString*>(&a0), a1, a2, a3, a4, a5, a6, a7, a8);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static void MakeTribeData(void* retorno, FString* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8)
    { MakeTribeData(retorno, *a0, a1, a2, a3, a4, a5, a6, a7, a8); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.OnInitGame(FString&,FString&,FString&)
    // endereco: casamento de bytes com a build de referencia
    static bool OnInitGame(const FString& a0, const FString& a1, const FString& a2)
    {
        return NativeCall<bool, void*, void*, void*>(nullptr, "ACustomGameMode.OnInitGame(FString&,FString&,FString&)", const_cast<FString*>(&a0), const_cast<FString*>(&a1), const_cast<FString*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    static bool OnInitGame(FString* a0, FString* a1, FString* a2)
    { return OnInitGame(*a0, *a1, *a2); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.RemoveTribe(unsigned__int64)
    // endereco: casamento de bytes com a build de referencia
    static void RemoveTribe(unsigned long long a0)
    {
        NativeCall<void, unsigned long long>(nullptr, "ACustomGameMode.RemoveTribe(unsigned__int64)", a0);
    }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   ACustomGameMode.UpdateTribeData(FTribeData)
    // endereco: casamento de bytes com a build de referencia
    static void UpdateTribeData(void* a0)
    {
        NativeCall<void, void*>(nullptr, "ACustomGameMode.UpdateTribeData(FTribeData)", a0);
    }

    FString& BadWordListURLField() const
    { return *GetNativePointerField<FString*>(this, "ACustomGameMode.BadWordListURL"); }
    FString& BadWordWhiteListURLField() const
    { return *GetNativePointerField<FString*>(this, "ACustomGameMode.BadWordWhiteListURL"); }
};

#endif  // BRZ_SDK_JOGO_ACUSTOMGAMEMODE_H
