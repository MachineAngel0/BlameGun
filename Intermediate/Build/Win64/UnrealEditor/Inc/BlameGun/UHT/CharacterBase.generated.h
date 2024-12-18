// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef BLAMEGUN_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define BLAMEGUN_CharacterBase_generated_h

#define FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCharacterMesh);


#define FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacterBase(ACharacterBase&&); \
	ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_12_PROLOG
#define FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_CharacterBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_Source_BlameGun_Public_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
