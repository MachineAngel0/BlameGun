// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncRootMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncRootMovement;
class UCharacterMovementComponent;
class UCurveFloat;
class UObject;
enum class ERootMotionFinishVelocityMode : uint8;
#ifdef BLAMEGUN_AsyncRootMovement_generated_h
#error "AsyncRootMovement.generated.h already included, missing '#pragma once' in AsyncRootMovement.h"
#endif
#define BLAMEGUN_AsyncRootMovement_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_13_DELEGATE \
BLAMEGUN_API void FMovementEvent_DelegateWrapper(const FMulticastScriptDelegate& MovementEvent);


#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncRootMovement);


#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncRootMovement(); \
	friend struct Z_Construct_UClass_UAsyncRootMovement_Statics; \
public: \
	DECLARE_CLASS(UAsyncRootMovement, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(UAsyncRootMovement)


#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncRootMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncRootMovement(UAsyncRootMovement&&); \
	UAsyncRootMovement(const UAsyncRootMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncRootMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncRootMovement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncRootMovement) \
	NO_API virtual ~UAsyncRootMovement();


#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_18_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class UAsyncRootMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_AsyncRootMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
