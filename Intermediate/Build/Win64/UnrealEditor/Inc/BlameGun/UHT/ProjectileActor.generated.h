// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Shared/ProjectileActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLAMEGUN_ProjectileActor_generated_h
#error "ProjectileActor.generated.h already included, missing '#pragma once' in ProjectileActor.h"
#endif
#define BLAMEGUN_ProjectileActor_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileInfo_Statics; \
	BLAMEGUN_API static class UScriptStruct* StaticStruct();


template<> BLAMEGUN_API UScriptStruct* StaticStruct<struct FProjectileInfo>();

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileActor(); \
	friend struct Z_Construct_UClass_AProjectileActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(AProjectileActor) \
	virtual UObject* _getUObject() const override { return const_cast<AProjectileActor*>(this); }


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectileActor(AProjectileActor&&); \
	AProjectileActor(const AProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileActor) \
	NO_API virtual ~AProjectileActor();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_61_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class AProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h


#define FOREACH_ENUM_EBULLETTYPE(op) \
	op(EBulletType::ECS_None) \
	op(EBulletType::ECS_Projectile) \
	op(EBulletType::ECS_HitScan) 

enum class EBulletType : uint8;
template<> struct TIsUEnumClass<EBulletType> { enum { Value = true }; };
template<> BLAMEGUN_API UEnum* StaticEnum<EBulletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
