// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Interface_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
class AMainCharacter;
class UAnimMontage;
class UCameraComponent;
class UHealthComponent;
enum class EMainCharacterAnimState : uint8;
#ifdef BLAMEGUN_Interface_Character_generated_h
#error "Interface_Character.generated.h already included, missing '#pragma once' in Interface_Character.h"
#endif
#define BLAMEGUN_Interface_Character_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UHealthComponent* RequestHealthComponent_Implementation() { return NULL; }; \
	virtual void PickUpCoin_Implementation() {}; \
	virtual void PlayCharacterAnimationMontage_Implementation(UAnimMontage* AnimMontage) {}; \
	virtual void SetMainCharacterAnimState_Implementation(EMainCharacterAnimState AnimationState) {}; \
	virtual AMainCharacter* RequestMainCharacter_Implementation() { return NULL; }; \
	virtual ACharacterBase* RequestCharacter_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execRequestHealthComponent); \
	DECLARE_FUNCTION(execPickUpCoin); \
	DECLARE_FUNCTION(execPlayCharacterAnimationMontage); \
	DECLARE_FUNCTION(execSetMainCharacterAnimState); \
	DECLARE_FUNCTION(execRequestMainCharacter); \
	DECLARE_FUNCTION(execRequestCharacter);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_CALLBACK_WRAPPERS
#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLAMEGUN_API UInterface_Character(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterface_Character(UInterface_Character&&); \
	UInterface_Character(const UInterface_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLAMEGUN_API, UInterface_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_Character); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_Character) \
	BLAMEGUN_API virtual ~UInterface_Character();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_Character(); \
	friend struct Z_Construct_UClass_UInterface_Character_Statics; \
public: \
	DECLARE_CLASS(UInterface_Character, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlameGun"), BLAMEGUN_API) \
	DECLARE_SERIALIZER(UInterface_Character)


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_GENERATED_UINTERFACE_BODY() \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_Character() {} \
public: \
	typedef UInterface_Character UClassType; \
	typedef IInterface_Character ThisClass; \
	static void Execute_PickUpCoin(UObject* O); \
	static void Execute_PlayCharacterAnimationMontage(UObject* O, UAnimMontage* AnimMontage); \
	static UCameraComponent* Execute_RequestCamera(UObject* O); \
	static ACharacterBase* Execute_RequestCharacter(UObject* O); \
	static UHealthComponent* Execute_RequestHealthComponent(UObject* O); \
	static AMainCharacter* Execute_RequestMainCharacter(UObject* O); \
	static void Execute_SetMainCharacterAnimState(UObject* O, EMainCharacterAnimState AnimationState); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_16_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_CALLBACK_WRAPPERS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UInterface_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
