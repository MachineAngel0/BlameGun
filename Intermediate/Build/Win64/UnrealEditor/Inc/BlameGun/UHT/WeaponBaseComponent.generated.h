// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/WeaponBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_WeaponBaseComponent_generated_h
#error "WeaponBaseComponent.generated.h already included, missing '#pragma once' in WeaponBaseComponent.h"
#endif
#define BLAMEGUN_WeaponBaseComponent_generated_h

#define FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponBaseComponent(); \
	friend struct Z_Construct_UClass_UWeaponBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UWeaponBaseComponent)


#define FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponBaseComponent(UWeaponBaseComponent&&); \
	UWeaponBaseComponent(const UWeaponBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponBaseComponent) \
	NO_API virtual ~UWeaponBaseComponent();


#define FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_16_PROLOG
#define FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UWeaponBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
