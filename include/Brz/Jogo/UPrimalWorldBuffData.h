// ==========================================================================
//  UPrimalWorldBuffData — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_UPRIMALWORLDBUFFDATA_H
#define BRZ_SDK_JOGO_UPRIMALWORLDBUFFDATA_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"


struct UPrimalWorldBuffData
{
    static UClass* StaticClass()
    { return BrzClassePorNome("UPrimalWorldBuffData"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.AddWorldBuff(UObject*,FName,int)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AddWorldBuff(void* a0, unsigned long long a1, int a2) const
    {
        return NativeCall<void*, void*, unsigned long long, int>(this, "UPrimalWorldBuffData.AddWorldBuff(UObject*,FName,int)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.ApplyPropertyToObject(UObject*,FName&,float&,bool)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyPropertyToObject(void* a0, const FName& a1, void* a2, bool a3) const
    {
        return NativeCall<void*, void*, void*, void*, bool>(this, "UPrimalWorldBuffData.ApplyPropertyToObject(UObject*,FName&,float&,bool)", a0, const_cast<FName*>(&a1), a2, a3);
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro ApplyPropertyToObject(void* a0, FName* a1, void* a2, bool a3) const
    { return ApplyPropertyToObject(a0, *a1, a2, a3); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.ApplyWorldBuffSettings(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro ApplyWorldBuffSettings(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorldBuffData.ApplyWorldBuffSettings(UWorld*)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.AuthorityTick(UWorld*,float)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro AuthorityTick(void* a0, float a1) const
    {
        return NativeCall<void*, void*, float>(this, "UPrimalWorldBuffData.AuthorityTick(UWorld*,float)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.CanActivateWorldBuff(UObject*,FName,TArray<FName,TSizedDefaultAllocator<32>
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CanActivateWorldBuff(void* a0, unsigned long long a1, void* a2) const
    {
        return NativeCall<void*, void*, unsigned long long, void*>(this, "UPrimalWorldBuffData.CanActivateWorldBuff(UObject*,FName,TArray<FName,TSizedDefaultAllocator<32>>&)", a0, a1, a2);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.CheckWorldBuffsToClear()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro CheckWorldBuffsToClear() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.CheckWorldBuffsToClear()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.GetPropertyFromObject(UWorld*,UObject*,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetPropertyFromObject(void* a0, void* a1, const FName& a2) const
    {
        return NativeCall<void*, void*, void*, void*>(this, "UPrimalWorldBuffData.GetPropertyFromObject(UWorld*,UObject*,FName&)", a0, a1, const_cast<FName*>(&a2));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro GetPropertyFromObject(void* a0, void* a1, FName* a2) const
    { return GetPropertyFromObject(a0, a1, *a2); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.GetWorldBuffData()
    // endereco: cache_pdb_25090264
    BrzPonteiro GetWorldBuffData() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.GetWorldBuffData()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.GetWorldBuffDefinitionByName(FName,FWorldBuffDefinition&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldBuffDefinitionByName(unsigned long long a0, void* a1) const
    {
        return NativeCall<void*, unsigned long long, void*>(this, "UPrimalWorldBuffData.GetWorldBuffDefinitionByName(FName,FWorldBuffDefinition&)", a0, a1);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.GetWorldBuffSet(FName)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro GetWorldBuffSet(unsigned long long a0) const
    {
        return NativeCall<void*, unsigned long long>(this, "UPrimalWorldBuffData.GetWorldBuffSet(FName)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.InitFromLoad()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro InitFromLoad() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.InitFromLoad()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.MergeWorldBuffData(TSubclassOf<UPrimalWorldBuffData>)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro MergeWorldBuffData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorldBuffData.MergeWorldBuffData(TSubclassOf<UPrimalWorldBuffData>)", a0);
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.PostDynamicConfigUpdate()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro PostDynamicConfigUpdate() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.PostDynamicConfigUpdate()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.RemoveWorldBuff(UObject*,FName&)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro RemoveWorldBuff(void* a0, const FName& a1) const
    {
        return NativeCall<void*, void*, void*>(this, "UPrimalWorldBuffData.RemoveWorldBuff(UObject*,FName&)", a0, const_cast<FName*>(&a1));
    }

    //  a mesma, para quem ja' tem o ponteiro na mao
    BrzPonteiro RemoveWorldBuff(void* a0, FName* a1) const
    { return RemoveWorldBuff(a0, *a1); }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.SuspendWorldBuffs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro SuspendWorldBuffs() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.SuspendWorldBuffs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.UnsuspendWorldBuffs()
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UnsuspendWorldBuffs() const
    {
        return NativeCall<void*>(this, "UPrimalWorldBuffData.UnsuspendWorldBuffs()");
    }

    // PARAMETROS do binario, com a indirecao certa. O RETORNO NAO tem segunda fonte: sai como void*, que le' certo ponteiro/int/bool (RAX) e NAO le' float/double nem struct grande. Confira antes de usar o retorno desta.
    //   UPrimalWorldBuffData.UpdateWorldBuffPeristantData(UWorld*)
    // endereco: casamento de bytes com a build de referencia
    BrzPonteiro UpdateWorldBuffPeristantData(void* a0) const
    {
        return NativeCall<void*, void*>(this, "UPrimalWorldBuffData.UpdateWorldBuffPeristantData(UWorld*)", a0);
    }

    BrzCampoPonteiro ConstructedWorldBuffImplementsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWorldBuffData.ConstructedWorldBuffImplements")); }
    BrzCampoPonteiro WorldBuffDefinitionsField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "UPrimalWorldBuffData.WorldBuffDefinitions")); }
};

#endif  // BRZ_SDK_JOGO_UPRIMALWORLDBUFFDATA_H
