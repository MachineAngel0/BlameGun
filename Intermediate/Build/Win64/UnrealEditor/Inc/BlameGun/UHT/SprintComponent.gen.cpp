// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Character/SprintComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprintComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_USprintComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_USprintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class USprintComponent Function EndSprint
struct Z_Construct_UFunction_USprintComponent_EndSprint_Statics
{
	struct SprintComponent_eventEndSprint_Parms
	{
		float WalkSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_WalkSpeed", "600.000000" },
		{ "ModuleRelativePath", "Public/Character/SprintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprintComponent_EndSprint_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SprintComponent_eventEndSprint_Parms, WalkSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprintComponent_EndSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprintComponent_EndSprint_Statics::NewProp_WalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_EndSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprintComponent_EndSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprintComponent, nullptr, "EndSprint", nullptr, nullptr, Z_Construct_UFunction_USprintComponent_EndSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_EndSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USprintComponent_EndSprint_Statics::SprintComponent_eventEndSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_EndSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USprintComponent_EndSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USprintComponent_EndSprint_Statics::SprintComponent_eventEndSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USprintComponent_EndSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprintComponent_EndSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USprintComponent::execEndSprint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WalkSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSprint(Z_Param_WalkSpeed);
	P_NATIVE_END;
}
// End Class USprintComponent Function EndSprint

// Begin Class USprintComponent Function StartSprint
struct Z_Construct_UFunction_USprintComponent_StartSprint_Statics
{
	struct SprintComponent_eventStartSprint_Parms
	{
		float SprintSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_SprintSpeed", "1000.000000" },
		{ "ModuleRelativePath", "Public/Character/SprintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USprintComponent_StartSprint_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SprintComponent_eventStartSprint_Parms, SprintSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USprintComponent_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USprintComponent_StartSprint_Statics::NewProp_SprintSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USprintComponent_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USprintComponent, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_USprintComponent_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USprintComponent_StartSprint_Statics::SprintComponent_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USprintComponent_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USprintComponent_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USprintComponent_StartSprint_Statics::SprintComponent_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USprintComponent_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USprintComponent_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USprintComponent::execStartSprint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SprintSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_SprintSpeed);
	P_NATIVE_END;
}
// End Class USprintComponent Function StartSprint

// Begin Class USprintComponent
void USprintComponent::StaticRegisterNativesUSprintComponent()
{
	UClass* Class = USprintComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndSprint", &USprintComponent::execEndSprint },
		{ "StartSprint", &USprintComponent::execStartSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USprintComponent);
UClass* Z_Construct_UClass_USprintComponent_NoRegister()
{
	return USprintComponent::StaticClass();
}
struct Z_Construct_UClass_USprintComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/SprintComponent.h" },
		{ "ModuleRelativePath", "Public/Character/SprintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "SprintComponent" },
		{ "ModuleRelativePath", "Public/Character/SprintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USprintComponent_EndSprint, "EndSprint" }, // 1190587020
		{ &Z_Construct_UFunction_USprintComponent_StartSprint, "StartSprint" }, // 1304846098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprintComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USprintComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USprintComponent, CharacterOwner), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USprintComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintComponent_Statics::NewProp_CharacterOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USprintComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USprintComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USprintComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USprintComponent_Statics::ClassParams = {
	&USprintComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USprintComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USprintComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USprintComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USprintComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USprintComponent()
{
	if (!Z_Registration_Info_UClass_USprintComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USprintComponent.OuterSingleton, Z_Construct_UClass_USprintComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USprintComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<USprintComponent>()
{
	return USprintComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USprintComponent);
USprintComponent::~USprintComponent() {}
// End Class USprintComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USprintComponent, USprintComponent::StaticClass, TEXT("USprintComponent"), &Z_Registration_Info_UClass_USprintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USprintComponent), 1142534499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_1042148876(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
