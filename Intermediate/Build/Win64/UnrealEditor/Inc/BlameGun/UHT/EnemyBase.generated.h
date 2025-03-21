// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyState : uint8;
#ifdef BLAMEGUN_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define BLAMEGUN_EnemyBase_generated_h

#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyStruct_Statics; \
	BLAMEGUN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BLAMEGUN_API UScriptStruct* StaticStruct<struct FEnemyStruct>();

#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_31_DELEGATE \
BLAMEGUN_API void FOnEnemyStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyStateChange, EEnemyState EnemyState);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnemyState); \
	DECLARE_FUNCTION(execSetEnemyState);


#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlameGun"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyBase*>(this); }


#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyBase(AEnemyBase&&); \
	AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase) \
	NO_API virtual ~AEnemyBase();


#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_36_PROLOG
#define FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_INCLASS_NO_PURE_DECLS \
	FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLAMEGUN_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
