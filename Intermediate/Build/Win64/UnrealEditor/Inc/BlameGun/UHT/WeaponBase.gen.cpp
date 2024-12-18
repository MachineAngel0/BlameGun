// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase();
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Weapon_NoRegister();
BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature();
BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature();
BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Delegate FOnStartWeaponAttack
struct Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlameGun, nullptr, "OnStartWeaponAttack__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartWeaponAttack_DelegateWrapper(const FMulticastScriptDelegate& OnStartWeaponAttack)
{
	OnStartWeaponAttack.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStartWeaponAttack

// Begin Delegate FOnPerformWeaponAttack
struct Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlameGun, nullptr, "OnPerformWeaponAttack__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPerformWeaponAttack_DelegateWrapper(const FMulticastScriptDelegate& OnPerformWeaponAttack)
{
	OnPerformWeaponAttack.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPerformWeaponAttack

// Begin Delegate FOnEndWeaponAttack
struct Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlameGun, nullptr, "OnEndWeaponAttack__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndWeaponAttack_DelegateWrapper(const FMulticastScriptDelegate& OnEndWeaponAttack)
{
	OnEndWeaponAttack.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEndWeaponAttack

// Begin Class AWeaponBase Function EndWeaponAttack
struct Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this will reset any component related things when either the trigger is let go or perform attack is called, (see ChargedShotComponent) \n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this will reset any component related things when either the trigger is let go or perform attack is called, (see ChargedShotComponent)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "EndWeaponAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_EndWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execEndWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndWeaponAttack();
	P_NATIVE_END;
}
// End Class AWeaponBase Function EndWeaponAttack

// Begin Class AWeaponBase Function GetWeaponSkeletalMesh
struct Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics
{
	struct WeaponBase_eventGetWeaponSkeletalMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::WeaponBase_eventGetWeaponSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::WeaponBase_eventGetWeaponSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetWeaponSkeletalMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetWeaponSkeletalMesh();
	P_NATIVE_END;
}
// End Class AWeaponBase Function GetWeaponSkeletalMesh

// Begin Class AWeaponBase Function PerformWeaponAttack
struct Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// a component will call this after startweapon attack, (see ProjectileSpawnerComponent)\n// which will cause the weapon to fire a bullet or attack based on the type of component binded to this function\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a component will call this after startweapon attack, (see ProjectileSpawnerComponent)\nwhich will cause the weapon to fire a bullet or attack based on the type of component binded to this function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "PerformWeaponAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execPerformWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformWeaponAttack();
	P_NATIVE_END;
}
// End Class AWeaponBase Function PerformWeaponAttack

// Begin Class AWeaponBase Function StartWeaponAttack
struct Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// we broadcast this event for any components that might want to do something (see ChargedShotComponent) \n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "we broadcast this event for any components that might want to do something (see ChargedShotComponent)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StartWeaponAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_StartWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execStartWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWeaponAttack();
	P_NATIVE_END;
}
// End Class AWeaponBase Function StartWeaponAttack

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndWeaponAttack", &AWeaponBase::execEndWeaponAttack },
		{ "GetWeaponSkeletalMesh", &AWeaponBase::execGetWeaponSkeletalMesh },
		{ "PerformWeaponAttack", &AWeaponBase::execPerformWeaponAttack },
		{ "StartWeaponAttack", &AWeaponBase::execStartWeaponAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponBase.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartWeaponAttack_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformWeaponAttack_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndWeaponAttack_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMesh_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocket_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocket_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartWeaponAttack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformWeaponAttack;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndWeaponAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_EndWeaponAttack, "EndWeaponAttack" }, // 2299578529
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh, "GetWeaponSkeletalMesh" }, // 1458484567
		{ &Z_Construct_UFunction_AWeaponBase_PerformWeaponAttack, "PerformWeaponAttack" }, // 3422535611
		{ &Z_Construct_UFunction_AWeaponBase_StartWeaponAttack, "StartWeaponAttack" }, // 1571896718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnStartWeaponAttack = { "OnStartWeaponAttack", nullptr, (EPropertyFlags)0x0010100010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnStartWeaponAttack), Z_Construct_UDelegateFunction_BlameGun_OnStartWeaponAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartWeaponAttack_MetaData), NewProp_OnStartWeaponAttack_MetaData) }; // 3282714148
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnPerformWeaponAttack = { "OnPerformWeaponAttack", nullptr, (EPropertyFlags)0x0010100010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnPerformWeaponAttack), Z_Construct_UDelegateFunction_BlameGun_OnPerformWeaponAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerformWeaponAttack_MetaData), NewProp_OnPerformWeaponAttack_MetaData) }; // 2323834596
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnEndWeaponAttack = { "OnEndWeaponAttack", nullptr, (EPropertyFlags)0x0010100010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnEndWeaponAttack), Z_Construct_UDelegateFunction_BlameGun_OnEndWeaponAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndWeaponAttack_MetaData), NewProp_OnEndWeaponAttack_MetaData) }; // 4117129018
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSkeletalMesh = { "WeaponSkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSkeletalMesh_MetaData), NewProp_WeaponSkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquipSocket = { "EquipSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, EquipSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSocket_MetaData), NewProp_EquipSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileSocket = { "ProjectileSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ProjectileSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocket_MetaData), NewProp_ProjectileSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnStartWeaponAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnPerformWeaponAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnEndWeaponAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquipSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_Weapon_NoRegister, (int32)VTABLE_OFFSET(AWeaponBase, IInterface_Weapon), false },  // 1980144198
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 3744020087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBase_h_2767795703(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
