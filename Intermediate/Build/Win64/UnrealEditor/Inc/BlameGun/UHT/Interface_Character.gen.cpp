// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Character/Interface_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_Character() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Character();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Character_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Interface UInterface_Character Function RequestCharacter
struct Interface_Character_eventRequestCharacter_Parms
{
	ACharacterBase* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Character_eventRequestCharacter_Parms()
		: ReturnValue(NULL)
	{
	}
};
ACharacterBase* IInterface_Character::RequestCharacter()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestCharacter instead.");
	Interface_Character_eventRequestCharacter_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Character_RequestCharacter = FName(TEXT("RequestCharacter"));
ACharacterBase* IInterface_Character::Execute_RequestCharacter(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventRequestCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_RequestCharacter);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		Parms.ReturnValue = I->RequestCharacter_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventRequestCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "RequestCharacter", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers), sizeof(Interface_Character_eventRequestCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventRequestCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_RequestCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execRequestCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacterBase**)Z_Param__Result=P_THIS->RequestCharacter_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Character Function RequestCharacter

// Begin Interface UInterface_Character Function SetAnimState
void IInterface_Character::SetAnimState()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAnimState instead.");
}
static FName NAME_UInterface_Character_SetAnimState = FName(TEXT("SetAnimState"));
void IInterface_Character::Execute_SetAnimState(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_SetAnimState);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		I->SetAnimState_Implementation();
	}
}
struct Z_Construct_UFunction_UInterface_Character_SetAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_SetAnimState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "SetAnimState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_SetAnimState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_SetAnimState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterface_Character_SetAnimState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_SetAnimState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execSetAnimState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimState_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Character Function SetAnimState

// Begin Interface UInterface_Character
void UInterface_Character::StaticRegisterNativesUInterface_Character()
{
	UClass* Class = UInterface_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestCharacter", &IInterface_Character::execRequestCharacter },
		{ "SetAnimState", &IInterface_Character::execSetAnimState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_Character);
UClass* Z_Construct_UClass_UInterface_Character_NoRegister()
{
	return UInterface_Character::StaticClass();
}
struct Z_Construct_UClass_UInterface_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterface_Character_RequestCharacter, "RequestCharacter" }, // 2422463470
		{ &Z_Construct_UFunction_UInterface_Character_SetAnimState, "SetAnimState" }, // 3206141252
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_Character_Statics::ClassParams = {
	&UInterface_Character::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_Character()
{
	if (!Z_Registration_Info_UClass_UInterface_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_Character.OuterSingleton, Z_Construct_UClass_UInterface_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_Character.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UInterface_Character>()
{
	return UInterface_Character::StaticClass();
}
UInterface_Character::UInterface_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_Character);
UInterface_Character::~UInterface_Character() {}
// End Interface UInterface_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_Interface_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_Character, UInterface_Character::StaticClass, TEXT("UInterface_Character"), &Z_Registration_Info_UClass_UInterface_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_Character), 3649985584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_Interface_Character_h_468042045(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_Interface_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_Interface_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
