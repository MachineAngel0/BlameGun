// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/FireRate/NormalShotComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalShotComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UNormalShotComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UNormalShotComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UNormalShotComponent Function ClearTimer
struct Z_Construct_UFunction_UNormalShotComponent_ClearTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNormalShotComponent_ClearTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNormalShotComponent, nullptr, "ClearTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNormalShotComponent_ClearTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNormalShotComponent_ClearTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNormalShotComponent_ClearTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNormalShotComponent_ClearTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNormalShotComponent::execClearTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTimer();
	P_NATIVE_END;
}
// End Class UNormalShotComponent Function ClearTimer

// Begin Class UNormalShotComponent Function FireWeapon
struct Z_Construct_UFunction_UNormalShotComponent_FireWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNormalShotComponent_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNormalShotComponent, nullptr, "FireWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNormalShotComponent_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNormalShotComponent_FireWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNormalShotComponent_FireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNormalShotComponent_FireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNormalShotComponent::execFireWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireWeapon();
	P_NATIVE_END;
}
// End Class UNormalShotComponent Function FireWeapon

// Begin Class UNormalShotComponent Function SetCanFireToTrue
struct Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNormalShotComponent, nullptr, "SetCanFireToTrue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNormalShotComponent::execSetCanFireToTrue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanFireToTrue();
	P_NATIVE_END;
}
// End Class UNormalShotComponent Function SetCanFireToTrue

// Begin Class UNormalShotComponent
void UNormalShotComponent::StaticRegisterNativesUNormalShotComponent()
{
	UClass* Class = UNormalShotComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTimer", &UNormalShotComponent::execClearTimer },
		{ "FireWeapon", &UNormalShotComponent::execFireWeapon },
		{ "SetCanFireToTrue", &UNormalShotComponent::execSetCanFireToTrue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNormalShotComponent);
UClass* Z_Construct_UClass_UNormalShotComponent_NoRegister()
{
	return UNormalShotComponent::StaticClass();
}
struct Z_Construct_UClass_UNormalShotComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/FireRate/NormalShotComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRateInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanFire_MetaData[] = {
		{ "Category", "NormalShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinousFire_MetaData[] = {
		{ "Category", "NormalShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleFire_MetaData[] = {
		{ "Category", "NormalShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "NormalShotComponent" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/NormalShotComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateInterval;
	static void NewProp_CanFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanFire;
	static void NewProp_ContinousFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContinousFire;
	static void NewProp_SingleFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SingleFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNormalShotComponent_ClearTimer, "ClearTimer" }, // 885192851
		{ &Z_Construct_UFunction_UNormalShotComponent_FireWeapon, "FireWeapon" }, // 89484102
		{ &Z_Construct_UFunction_UNormalShotComponent_SetCanFireToTrue, "SetCanFireToTrue" }, // 1488275948
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNormalShotComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_FireRateInterval = { "FireRateInterval", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNormalShotComponent, FireRateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRateInterval_MetaData), NewProp_FireRateInterval_MetaData) };
void Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_CanFire_SetBit(void* Obj)
{
	((UNormalShotComponent*)Obj)->CanFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_CanFire = { "CanFire", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNormalShotComponent), &Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_CanFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanFire_MetaData), NewProp_CanFire_MetaData) };
void Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_ContinousFire_SetBit(void* Obj)
{
	((UNormalShotComponent*)Obj)->ContinousFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_ContinousFire = { "ContinousFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNormalShotComponent), &Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_ContinousFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinousFire_MetaData), NewProp_ContinousFire_MetaData) };
void Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_SingleFire_SetBit(void* Obj)
{
	((UNormalShotComponent*)Obj)->SingleFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_SingleFire = { "SingleFire", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNormalShotComponent), &Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_SingleFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleFire_MetaData), NewProp_SingleFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNormalShotComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNormalShotComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNormalShotComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_FireRateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_CanFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_ContinousFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_SingleFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalShotComponent_Statics::NewProp_FireSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalShotComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNormalShotComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFireRateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalShotComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNormalShotComponent_Statics::ClassParams = {
	&UNormalShotComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNormalShotComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNormalShotComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalShotComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNormalShotComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNormalShotComponent()
{
	if (!Z_Registration_Info_UClass_UNormalShotComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNormalShotComponent.OuterSingleton, Z_Construct_UClass_UNormalShotComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNormalShotComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UNormalShotComponent>()
{
	return UNormalShotComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNormalShotComponent);
UNormalShotComponent::~UNormalShotComponent() {}
// End Class UNormalShotComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_NormalShotComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNormalShotComponent, UNormalShotComponent::StaticClass, TEXT("UNormalShotComponent"), &Z_Registration_Info_UClass_UNormalShotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNormalShotComponent), 681704146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_NormalShotComponent_h_1737152472(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_NormalShotComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_NormalShotComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
