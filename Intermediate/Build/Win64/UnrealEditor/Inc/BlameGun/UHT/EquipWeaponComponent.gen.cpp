// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Character/EquipWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipWeaponComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UEquipWeaponComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UEquipWeaponComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UEquipWeaponComponent Function SwitchToNextWeaponDecrement
struct Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipWeaponComponent, nullptr, "SwitchToNextWeaponDecrement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipWeaponComponent::execSwitchToNextWeaponDecrement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNextWeaponDecrement();
	P_NATIVE_END;
}
// End Class UEquipWeaponComponent Function SwitchToNextWeaponDecrement

// Begin Class UEquipWeaponComponent Function SwitchToNextWeaponIncrement
struct Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipWeaponComponent, nullptr, "SwitchToNextWeaponIncrement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipWeaponComponent::execSwitchToNextWeaponIncrement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToNextWeaponIncrement();
	P_NATIVE_END;
}
// End Class UEquipWeaponComponent Function SwitchToNextWeaponIncrement

// Begin Class UEquipWeaponComponent Function SwitchToWeaponNumber
struct Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics
{
	struct EquipWeaponComponent_eventSwitchToWeaponNumber_Parms
	{
		int32 WeaponNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::NewProp_WeaponNumber = { "WeaponNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipWeaponComponent_eventSwitchToWeaponNumber_Parms, WeaponNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::NewProp_WeaponNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipWeaponComponent, nullptr, "SwitchToWeaponNumber", nullptr, nullptr, Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::EquipWeaponComponent_eventSwitchToWeaponNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::EquipWeaponComponent_eventSwitchToWeaponNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipWeaponComponent::execSwitchToWeaponNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToWeaponNumber(Z_Param_WeaponNumber);
	P_NATIVE_END;
}
// End Class UEquipWeaponComponent Function SwitchToWeaponNumber

// Begin Class UEquipWeaponComponent
void UEquipWeaponComponent::StaticRegisterNativesUEquipWeaponComponent()
{
	UClass* Class = UEquipWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwitchToNextWeaponDecrement", &UEquipWeaponComponent::execSwitchToNextWeaponDecrement },
		{ "SwitchToNextWeaponIncrement", &UEquipWeaponComponent::execSwitchToNextWeaponIncrement },
		{ "SwitchToWeaponNumber", &UEquipWeaponComponent::execSwitchToWeaponNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipWeaponComponent);
UClass* Z_Construct_UClass_UEquipWeaponComponent_NoRegister()
{
	return UEquipWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UEquipWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/EquipWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "EquipWeaponComponent" },
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWheel_MetaData[] = {
		{ "Category", "EquipWeaponComponent" },
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWheelSpawner_MetaData[] = {
		{ "Category", "EquipWeaponComponent" },
		{ "ModuleRelativePath", "Public/Character/EquipWeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponWheel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponWheel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponWheelSpawner_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponWheelSpawner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponDecrement, "SwitchToNextWeaponDecrement" }, // 2309562414
		{ &Z_Construct_UFunction_UEquipWeaponComponent_SwitchToNextWeaponIncrement, "SwitchToNextWeaponIncrement" }, // 2349042327
		{ &Z_Construct_UFunction_UEquipWeaponComponent_SwitchToWeaponNumber, "SwitchToWeaponNumber" }, // 173987139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipWeaponComponent, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheel_Inner = { "WeaponWheel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheel = { "WeaponWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipWeaponComponent, WeaponWheel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWheel_MetaData), NewProp_WeaponWheel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheelSpawner_Inner = { "WeaponWheelSpawner", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheelSpawner = { "WeaponWheelSpawner", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipWeaponComponent, WeaponWheelSpawner), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWheelSpawner_MetaData), NewProp_WeaponWheelSpawner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheelSpawner_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipWeaponComponent_Statics::NewProp_WeaponWheelSpawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipWeaponComponent_Statics::ClassParams = {
	&UEquipWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UEquipWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipWeaponComponent.OuterSingleton, Z_Construct_UClass_UEquipWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipWeaponComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UEquipWeaponComponent>()
{
	return UEquipWeaponComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipWeaponComponent);
UEquipWeaponComponent::~UEquipWeaponComponent() {}
// End Class UEquipWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_EquipWeaponComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipWeaponComponent, UEquipWeaponComponent::StaticClass, TEXT("UEquipWeaponComponent"), &Z_Registration_Info_UClass_UEquipWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipWeaponComponent), 3601483080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_EquipWeaponComponent_h_522585366(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_EquipWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Character_EquipWeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
