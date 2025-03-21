// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/EquipWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_EquipWeaponComponent_generated_h
#error "EquipWeaponComponent.generated.h already included, missing '#pragma once' in EquipWeaponComponent.h"
#endif
#define BLAMEGUN_EquipWeaponComponent_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchToWeaponNumber); \
	DECLARE_FUNCTION(execSwitchToNextWeaponDecrement); \
	DECLARE_FUNCTION(execSwitchToNextWeaponIncrement);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipWeaponComponent(); \
	friend struct Z_Construct_UClass_UEquipWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UEquipWeaponComponent)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipWeaponComponent(UEquipWeaponComponent&&); \
	UEquipWeaponComponent(const UEquipWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipWeaponComponent) \
	NO_API virtual ~UEquipWeaponComponent();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_13_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UEquipWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Character_EquipWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
