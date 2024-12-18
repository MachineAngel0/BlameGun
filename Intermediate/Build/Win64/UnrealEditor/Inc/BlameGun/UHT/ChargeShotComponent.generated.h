// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/FireRate/ChargeShotComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_ChargeShotComponent_generated_h
#error "ChargeShotComponent.generated.h already included, missing '#pragma once' in ChargeShotComponent.h"
#endif
#define BLAMEGUN_ChargeShotComponent_generated_h

#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndCharge); \
	DECLARE_FUNCTION(execStartCharge);


#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargeShotComponent(); \
	friend struct Z_Construct_UClass_UChargeShotComponent_Statics; \
public: \
	DECLARE_CLASS(UChargeShotComponent, UFireRateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UChargeShotComponent)


#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChargeShotComponent(UChargeShotComponent&&); \
	UChargeShotComponent(const UChargeShotComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeShotComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeShotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChargeShotComponent) \
	NO_API virtual ~UChargeShotComponent();


#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_14_PROLOG
#define FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UChargeShotComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
