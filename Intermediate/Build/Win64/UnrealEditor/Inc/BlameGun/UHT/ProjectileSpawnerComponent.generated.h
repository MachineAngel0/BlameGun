// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Shared/ProjectileSpawnerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_ProjectileSpawnerComponent_generated_h
#error "ProjectileSpawnerComponent.generated.h already included, missing '#pragma once' in ProjectileSpawnerComponent.h"
#endif
#define BLAMEGUN_ProjectileSpawnerComponent_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileTypeParams_Statics; \
	BLAMEGUN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BLAMEGUN_API UScriptStruct* StaticStruct<struct FProjectileTypeParams>();

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnProjectileFromPool); \
	DECLARE_FUNCTION(execReadProjectileInfoDataTable); \
	DECLARE_FUNCTION(execReadProjectileTypeDataTable);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_CALLBACK_WRAPPERS
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileSpawnerComponent(); \
	friend struct Z_Construct_UClass_UProjectileSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectileSpawnerComponent, UWeaponBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UProjectileSpawnerComponent)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectileSpawnerComponent(UProjectileSpawnerComponent&&); \
	UProjectileSpawnerComponent(const UProjectileSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileSpawnerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectileSpawnerComponent) \
	NO_API virtual ~UProjectileSpawnerComponent();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_54_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_CALLBACK_WRAPPERS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UProjectileSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h


#define FOREACH_ENUM_EPROJECTILEPATTERN(op) \
	op(EProjectilePattern::ECS_Default) \
	op(EProjectilePattern::ECS_Triangle) \
	op(EProjectilePattern::ECS_Circle) \
	op(EProjectilePattern::ECS_CircleFacingTarget) 

enum class EProjectilePattern : uint8;
template<> struct TIsUEnumClass<EProjectilePattern> { enum { Value = true }; };
template<> BLAMEGUN_API UEnum* StaticEnum<EProjectilePattern>();

#define FOREACH_ENUM_EPROJECTILETRANSFORMTYPE(op) \
	op(EProjectileTransformType::ECS_Default) \
	op(EProjectileTransformType::ECS_Weapon) \
	op(EProjectileTransformType::ECS_Actor) 

enum class EProjectileTransformType : uint8;
template<> struct TIsUEnumClass<EProjectileTransformType> { enum { Value = true }; };
template<> BLAMEGUN_API UEnum* StaticEnum<EProjectileTransformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
