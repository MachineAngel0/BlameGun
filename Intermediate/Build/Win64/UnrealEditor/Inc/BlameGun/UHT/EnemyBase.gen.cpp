// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Enemy/EnemyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_ACharacterBase();
BLAMEGUN_API UClass* Z_Construct_UClass_AEnemyBase();
BLAMEGUN_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_EnemyAI_NoRegister();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EEnemyState();
BLAMEGUN_API UFunction* Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Delegate FOnEnemyStateChange
struct Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics
{
	struct _Script_BlameGun_eventOnEnemyStateChange_Parms
	{
		EEnemyState EnemyState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::NewProp_EnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::NewProp_EnemyState = { "EnemyState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlameGun_eventOnEnemyStateChange_Parms, EnemyState), Z_Construct_UEnum_BlameGun_EEnemyState, METADATA_PARAMS(0, nullptr) }; // 1584016551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::NewProp_EnemyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::NewProp_EnemyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlameGun, nullptr, "OnEnemyStateChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::_Script_BlameGun_eventOnEnemyStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::_Script_BlameGun_eventOnEnemyStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnemyStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyStateChange, EEnemyState EnemyState)
{
	struct _Script_BlameGun_eventOnEnemyStateChange_Parms
	{
		EEnemyState EnemyState;
	};
	_Script_BlameGun_eventOnEnemyStateChange_Parms Parms;
	Parms.EnemyState=EnemyState;
	OnEnemyStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEnemyStateChange

// Begin Class AEnemyBase Function GetEnemyState
struct Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics
{
	struct EnemyBase_eventGetEnemyState_Parms
	{
		EEnemyState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventGetEnemyState_Parms, ReturnValue), Z_Construct_UEnum_BlameGun_EEnemyState, METADATA_PARAMS(0, nullptr) }; // 1584016551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetEnemyState", nullptr, nullptr, Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::EnemyBase_eventGetEnemyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::EnemyBase_eventGetEnemyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyBase_GetEnemyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetEnemyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyBase::execGetEnemyState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EEnemyState*)Z_Param__Result=P_THIS->GetEnemyState();
	P_NATIVE_END;
}
// End Class AEnemyBase Function GetEnemyState

// Begin Class AEnemyBase Function SetEnemyState
struct Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics
{
	struct EnemyBase_eventSetEnemyState_Parms
	{
		EEnemyState NewEnemyState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewEnemyState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewEnemyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewEnemyState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::NewProp_NewEnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::NewProp_NewEnemyState = { "NewEnemyState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventSetEnemyState_Parms, NewEnemyState), Z_Construct_UEnum_BlameGun_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewEnemyState_MetaData), NewProp_NewEnemyState_MetaData) }; // 1584016551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::NewProp_NewEnemyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::NewProp_NewEnemyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "SetEnemyState", nullptr, nullptr, Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::EnemyBase_eventSetEnemyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::EnemyBase_eventSetEnemyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyBase_SetEnemyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_SetEnemyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyBase::execSetEnemyState)
{
	P_GET_ENUM(EEnemyState,Z_Param_NewEnemyState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnemyState(EEnemyState(Z_Param_NewEnemyState));
	P_NATIVE_END;
}
// End Class AEnemyBase Function SetEnemyState

// Begin Class AEnemyBase
void AEnemyBase::StaticRegisterNativesAEnemyBase()
{
	UClass* Class = AEnemyBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnemyState", &AEnemyBase::execGetEnemyState },
		{ "SetEnemyState", &AEnemyBase::execSetEnemyState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBase);
UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
{
	return AEnemyBase::StaticClass();
}
struct Z_Construct_UClass_AEnemyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Use if the enemy needs to have movement or character like movement\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyBase.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use if the enemy needs to have movement or character like movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemyStateChange_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyState_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyStateChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_GetEnemyState, "GetEnemyState" }, // 3231100427
		{ &Z_Construct_UFunction_AEnemyBase_SetEnemyState, "SetEnemyState" }, // 1201081428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_OnEnemyStateChange = { "OnEnemyStateChange", nullptr, (EPropertyFlags)0x0010100010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, OnEnemyStateChange), Z_Construct_UDelegateFunction_BlameGun_OnEnemyStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnemyStateChange_MetaData), NewProp_OnEnemyStateChange_MetaData) }; // 1018628130
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyState = { "EnemyState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, EnemyState), Z_Construct_UEnum_BlameGun_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyState_MetaData), NewProp_EnemyState_MetaData) }; // 1584016551
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_OnEnemyStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_EnemyAI_NoRegister, (int32)VTABLE_OFFSET(AEnemyBase, IInterface_EnemyAI), false },  // 1772928803
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
	&AEnemyBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyBase()
{
	if (!Z_Registration_Info_UClass_AEnemyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBase.OuterSingleton, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyBase.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<AEnemyBase>()
{
	return AEnemyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
AEnemyBase::~AEnemyBase() {}
// End Class AEnemyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 552402490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_3146559661(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Enemy_EnemyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
