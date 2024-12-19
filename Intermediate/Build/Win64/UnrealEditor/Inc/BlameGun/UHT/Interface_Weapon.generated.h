// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Interface_Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
#ifdef BLAMEGUN_Interface_Weapon_generated_h
#error "Interface_Weapon.generated.h already included, missing '#pragma once' in Interface_Weapon.h"
#endif
#define BLAMEGUN_Interface_Weapon_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AWeaponBase* RequestWeapon_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execRequestWeapon);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_CALLBACK_WRAPPERS
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLAMEGUN_API UInterface_Weapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterface_Weapon(UInterface_Weapon&&); \
	UInterface_Weapon(const UInterface_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLAMEGUN_API, UInterface_Weapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_Weapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_Weapon) \
	BLAMEGUN_API virtual ~UInterface_Weapon();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_Weapon(); \
	friend struct Z_Construct_UClass_UInterface_Weapon_Statics; \
public: \
	DECLARE_CLASS(UInterface_Weapon, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlameGun"), BLAMEGUN_API) \
	DECLARE_SERIALIZER(UInterface_Weapon)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_GENERATED_UINTERFACE_BODY() \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_Weapon() {} \
public: \
	typedef UInterface_Weapon UClassType; \
	typedef IInterface_Weapon ThisClass; \
	static AWeaponBase* Execute_RequestWeapon(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_13_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_CALLBACK_WRAPPERS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UInterface_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Interface_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
