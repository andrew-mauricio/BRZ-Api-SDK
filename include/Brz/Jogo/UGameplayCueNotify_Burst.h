// ==========================================================================
//  UGameplayCueNotify_Burst — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_BURST_H
#define BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_BURST_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UGameplayCueNotify_Burst
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UGameplayCueNotify_Burst"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UGameplayCueNotify_Burst.OnExecute_Implementation(AActor*,FGameplayCueParameters&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro OnExecute_Implementation(void* a0, void* a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UGameplayCueNotify_Burst.OnExecute_Implementation(AActor*,FGameplayCueParameters&)", a0, a1);
    }

    BrzCampoPonteiro BurstEffectsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_Burst.BurstEffects")); }
    BrzCampoPonteiro DefaultPlacementInfoField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_Burst.DefaultPlacementInfo")); }
    BrzCampoPonteiro DefaultSpawnConditionField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_Burst.DefaultSpawnCondition")); }
    FName& GameplayCueNameField() const
    { return *GetNativePointerField<FName*>(this, "UGameplayCueNotify_Burst.GameplayCueName"); }
    BrzCampoPonteiro GameplayCueTagField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UGameplayCueNotify_Burst.GameplayCueTag")); }
    BitFieldValue<bool, unsigned __int32> IsOverride()
    { return { (void*)this, "IsOverride" }; }
};

#endif  // BRZ_SDK_JOGO_UGAMEPLAYCUENOTIFY_BURST_H
