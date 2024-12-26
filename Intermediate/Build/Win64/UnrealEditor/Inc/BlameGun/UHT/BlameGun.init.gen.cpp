// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlameGun_init() {}
	BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_GameLoaded__DelegateSignature();
	BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_GameSaved__DelegateSignature();
	BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_MovementEvent__DelegateSignature();
	BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_OnCoinPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlameGun;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlameGun()
	{
		if (!Z_Registration_Info_UPackage__Script_BlameGun.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlameGun_GameLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlameGun_GameSaved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlameGun_MovementEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlameGun_OnCoinPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlameGun",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8222E700,
				0x8963D241,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlameGun.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlameGun.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlameGun(Z_Construct_UPackage__Script_BlameGun, TEXT("/Script/BlameGun"), Z_Registration_Info_UPackage__Script_BlameGun, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8222E700, 0x8963D241));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
