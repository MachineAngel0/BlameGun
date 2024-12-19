// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Gun/FireRate/NormalShotComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_NormalShotComponent_generated_h
#error "NormalShotComponent.generated.h already included, missing '#pragma once' in NormalShotComponent.h"
#endif
#define BLAMEGUN_NormalShotComponent_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearTimer); \
	DECLARE_FUNCTION(execSetCanFireToTrue);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNormalShotComponent(); \
	friend struct Z_Construct_UClass_UNormalShotComponent_Statics; \
public: \
	DECLARE_CLASS(UNormalShotComponent, UFireRateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UNormalShotComponent)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNormalShotComponent(UNormalShotComponent&&); \
	UNormalShotComponent(const UNormalShotComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNormalShotComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNormalShotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNormalShotComponent) \
	NO_API virtual ~UNormalShotComponent();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_11_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UNormalShotComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_NormalShotComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
