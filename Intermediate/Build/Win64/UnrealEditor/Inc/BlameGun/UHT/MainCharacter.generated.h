// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define BLAMEGUN_MainCharacter_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_12_DELEGATE \
BLAMEGUN_API void FOnCoinPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnCoinPickUp, int32 Coins);


#define FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMainCharacter*>(this); }


#define FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&); \
	AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_20_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
