// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/FireRate/FireRateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_FireRateComponent_generated_h
#error "FireRateComponent.generated.h already included, missing '#pragma once' in FireRateComponent.h"
#endif
#define BLAMEGUN_FireRateComponent_generated_h

#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFireRateComponent(); \
	friend struct Z_Construct_UClass_UFireRateComponent_Statics; \
public: \
	DECLARE_CLASS(UFireRateComponent, UWeaponBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UFireRateComponent)


#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireRateComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFireRateComponent(UFireRateComponent&&); \
	UFireRateComponent(const UFireRateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireRateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireRateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFireRateComponent) \
	NO_API virtual ~UFireRateComponent();


#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_12_PROLOG
#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UFireRateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
