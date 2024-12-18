// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/FireRate/ChargeShotComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargeShotComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_UChargeShotComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UChargeShotComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UChargeShotComponent Function EndCharge
struct Z_Construct_UFunction_UChargeShotComponent_EndCharge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargeShotComponent_EndCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargeShotComponent, nullptr, "EndCharge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeShotComponent_EndCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChargeShotComponent_EndCharge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UChargeShotComponent_EndCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChargeShotComponent_EndCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChargeShotComponent::execEndCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCharge();
	P_NATIVE_END;
}
// End Class UChargeShotComponent Function EndCharge

// Begin Class UChargeShotComponent Function StartCharge
struct Z_Construct_UFunction_UChargeShotComponent_StartCharge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargeShotComponent_StartCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargeShotComponent, nullptr, "StartCharge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeShotComponent_StartCharge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChargeShotComponent_StartCharge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UChargeShotComponent_StartCharge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChargeShotComponent_StartCharge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChargeShotComponent::execStartCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCharge();
	P_NATIVE_END;
}
// End Class UChargeShotComponent Function StartCharge

// Begin Class UChargeShotComponent
void UChargeShotComponent::StaticRegisterNativesUChargeShotComponent()
{
	UClass* Class = UChargeShotComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCharge", &UChargeShotComponent::execEndCharge },
		{ "StartCharge", &UChargeShotComponent::execStartCharge },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChargeShotComponent);
UClass* Z_Construct_UClass_UChargeShotComponent_NoRegister()
{
	return UChargeShotComponent::StaticClass();
}
struct Z_Construct_UClass_UChargeShotComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/FireRate/ChargeShotComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpDuration_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//when we are allowed to fire our weapon\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "when we are allowed to fire our weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeRate_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// how fast current charge up time, charges\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how fast current charge up time, charges" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentChargeUpTime_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// our timer which gets added to and reset\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "our timer which gets added to and reset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeUpSound_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanceledChargeSound_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "ChargeShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/ChargeShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeUpDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentChargeUpTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeUpSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanceledChargeSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChargeShotComponent_EndCharge, "EndCharge" }, // 1737288313
		{ &Z_Construct_UFunction_UChargeShotComponent_StartCharge, "StartCharge" }, // 2411870143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargeShotComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeUpDuration = { "ChargeUpDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, ChargeUpDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpDuration_MetaData), NewProp_ChargeUpDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeRate = { "ChargeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, ChargeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeRate_MetaData), NewProp_ChargeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_CurrentChargeUpTime = { "CurrentChargeUpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, CurrentChargeUpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentChargeUpTime_MetaData), NewProp_CurrentChargeUpTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_FireAudioComponent = { "FireAudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, FireAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAudioComponent_MetaData), NewProp_FireAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeUpSound = { "ChargeUpSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, ChargeUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeUpSound_MetaData), NewProp_ChargeUpSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_CanceledChargeSound = { "CanceledChargeSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, CanceledChargeSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanceledChargeSound_MetaData), NewProp_CanceledChargeSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChargeShotComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChargeShotComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeUpDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_CurrentChargeUpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_FireAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_ChargeUpSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_CanceledChargeSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeShotComponent_Statics::NewProp_FireSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChargeShotComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChargeShotComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFireRateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChargeShotComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChargeShotComponent_Statics::ClassParams = {
	&UChargeShotComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChargeShotComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChargeShotComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChargeShotComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChargeShotComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChargeShotComponent()
{
	if (!Z_Registration_Info_UClass_UChargeShotComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChargeShotComponent.OuterSingleton, Z_Construct_UClass_UChargeShotComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChargeShotComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UChargeShotComponent>()
{
	return UChargeShotComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChargeShotComponent);
UChargeShotComponent::~UChargeShotComponent() {}
// End Class UChargeShotComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChargeShotComponent, UChargeShotComponent::StaticClass, TEXT("UChargeShotComponent"), &Z_Registration_Info_UClass_UChargeShotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChargeShotComponent), 3454543119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_2008756491(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_ChargeShotComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
