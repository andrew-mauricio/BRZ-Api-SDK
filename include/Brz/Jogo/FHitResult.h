// ==========================================================================
//  FHitResult — GERADO por ferramentas/gerar-headers-sdk.py. Nao edite.
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
#ifndef BRZ_SDK_JOGO_FHITRESULT_H
#define BRZ_SDK_JOGO_FHITRESULT_H

#include "../Base.h"
#include "../Campos.h"
#include "../Colecao.h"
#include "../Texto.h"
#include "../Classe.h"

struct FName;
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;


struct FHitResult
{
    static UClass* StaticClass()
    { return BrzClassePorNome("FHitResult"); }

    bool IsA(UClass* classe) const
    { return BrzEhDaClasse(this, classe); }

    // retorno: AsaApi da comunidade — segunda fonte independente
    //   FHitResult.NetSerialize(FArchive&,UPackageMap*,bool&)
    // endereco: casamento de bytes com a build de referencia
    bool NetSerialize(void* a0, void* a1, void* a2) const
    {
        return NativeCall<bool, void*, void*, void*>(this, "FHitResult.NetSerialize(FArchive&,UPackageMap*,bool&)", a0, a1, a2);
    }

    FName& BoneNameField() const
    { return *GetNativePointerField<FName*>(this, "FHitResult.BoneName"); }
    TWeakObjectPtr<void>& ComponentField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "FHitResult.Component"); }
    float& DistanceField() const
    { return *GetNativePointerField<float*>(this, "FHitResult.Distance"); }
    BrzCampoPonteiro ElementIndexField() const
    { return BrzCampoPonteiro(GetNativePointerField<void**>(this, "FHitResult.ElementIndex")); }
    int& FaceIndexField() const
    { return *GetNativePointerField<int*>(this, "FHitResult.FaceIndex"); }
    FActorInstanceHandle& HitObjectHandleField() const
    { return *GetNativePointerField<FActorInstanceHandle*>(this, "FHitResult.HitObjectHandle"); }
    FVector_NetQuantizeNormal& ImpactNormalField() const
    { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.ImpactNormal"); }
    FVector_NetQuantize& ImpactPointField() const
    { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.ImpactPoint"); }
    int& ItemField() const
    { return *GetNativePointerField<int*>(this, "FHitResult.Item"); }
    FVector_NetQuantize& LocationField() const
    { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.Location"); }
    FName& MyBoneNameField() const
    { return *GetNativePointerField<FName*>(this, "FHitResult.MyBoneName"); }
    int& MyItemField() const
    { return *GetNativePointerField<int*>(this, "FHitResult.MyItem"); }
    FVector_NetQuantizeNormal& NormalField() const
    { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.Normal"); }
    float& PenetrationDepthField() const
    { return *GetNativePointerField<float*>(this, "FHitResult.PenetrationDepth"); }
    TWeakObjectPtr<void>& PhysMaterialField() const
    { return *GetNativePointerField<TWeakObjectPtr<void>*>(this, "FHitResult.PhysMaterial"); }
    float& TimeField() const
    { return *GetNativePointerField<float*>(this, "FHitResult.Time"); }
    FVector_NetQuantize& TraceEndField() const
    { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceEnd"); }
    FVector_NetQuantize& TraceStartField() const
    { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceStart"); }
    BitFieldValue<bool, unsigned __int32> bBlockingHit()
    { return { (void*)this, "bBlockingHit" }; }
    BitFieldValue<bool, unsigned __int32> bStartPenetrating()
    { return { (void*)this, "bStartPenetrating" }; }
    BitFieldValue<bool, unsigned __int32> bVolatileCollision()
    { return { (void*)this, "bVolatileCollision" }; }

};

#endif  // BRZ_SDK_JOGO_FHITRESULT_H
