// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Shared/ProjectileActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_ProjectileActor_generated_h
#error "ProjectileActor.generated.h already included, missing '#pragma once' in ProjectileActor.h"
#endif
#define BLAMEGUN_ProjectileActor_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileActor(); \
	friend struct Z_Construct_UClass_AProjectileActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(AProjectileActor)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectileActor(AProjectileActor&&); \
	AProjectileActor(const AProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileActor) \
	NO_API virtual ~AProjectileActor();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_9_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class AProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
