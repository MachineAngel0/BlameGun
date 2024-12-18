// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/SprintComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLAMEGUN_SprintComponent_generated_h
#error "SprintComponent.generated.h already included, missing '#pragma once' in SprintComponent.h"
#endif
#define BLAMEGUN_SprintComponent_generated_h

#define FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSprintComponent(); \
	friend struct Z_Construct_UClass_USprintComponent_Statics; \
public: \
	DECLARE_CLASS(USprintComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(USprintComponent)


#define FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USprintComponent(USprintComponent&&); \
	USprintComponent(const USprintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USprintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USprintComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USprintComponent) \
	NO_API virtual ~USprintComponent();


#define FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_10_PROLOG
#define FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class USprintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_Source_BlameGun_Public_Character_SprintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
