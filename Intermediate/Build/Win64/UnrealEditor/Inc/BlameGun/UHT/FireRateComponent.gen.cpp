// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/Gun/FireRate/FireRateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireRateComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UFireRateComponent Function CanFireWeapon
struct Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics
{
	struct FireRateComponent_eventCanFireWeapon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Gun/FireRate/FireRateComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FireRateComponent_eventCanFireWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FireRateComponent_eventCanFireWeapon_Parms), &Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireRateComponent, nullptr, "CanFireWeapon", nullptr, nullptr, Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::FireRateComponent_eventCanFireWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::FireRateComponent_eventCanFireWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFireRateComponent_CanFireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFireRateComponent_CanFireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFireRateComponent::execCanFireWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFireWeapon();
	P_NATIVE_END;
}
// End Class UFireRateComponent Function CanFireWeapon

// Begin Class UFireRateComponent Function ResetFireRate
struct Z_Construct_UFunction_UFireRateComponent_ResetFireRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Gun/FireRate/FireRateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireRateComponent_ResetFireRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireRateComponent, nullptr, "ResetFireRate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFireRateComponent_ResetFireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFireRateComponent_ResetFireRate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFireRateComponent_ResetFireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFireRateComponent_ResetFireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFireRateComponent::execResetFireRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFireRate();
	P_NATIVE_END;
}
// End Class UFireRateComponent Function ResetFireRate

// Begin Class UFireRateComponent
void UFireRateComponent::StaticRegisterNativesUFireRateComponent()
{
	UClass* Class = UFireRateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanFireWeapon", &UFireRateComponent::execCanFireWeapon },
		{ "ResetFireRate", &UFireRateComponent::execResetFireRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireRateComponent);
UClass* Z_Construct_UClass_UFireRateComponent_NoRegister()
{
	return UFireRateComponent::StaticClass();
}
struct Z_Construct_UClass_UFireRateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/Gun/FireRate/FireRateComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Gun/FireRate/FireRateComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireRateComponent_CanFireWeapon, "CanFireWeapon" }, // 4146337033
		{ &Z_Construct_UFunction_UFireRateComponent_ResetFireRate, "ResetFireRate" }, // 945959606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireRateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFireRateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireRateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireRateComponent_Statics::ClassParams = {
	&UFireRateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireRateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireRateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireRateComponent()
{
	if (!Z_Registration_Info_UClass_UFireRateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireRateComponent.OuterSingleton, Z_Construct_UClass_UFireRateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireRateComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UFireRateComponent>()
{
	return UFireRateComponent::StaticClass();
}
UFireRateComponent::UFireRateComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireRateComponent);
UFireRateComponent::~UFireRateComponent() {}
// End Class UFireRateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_FireRateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireRateComponent, UFireRateComponent::StaticClass, TEXT("UFireRateComponent"), &Z_Registration_Info_UClass_UFireRateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireRateComponent), 1298372958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_FireRateComponent_h_1319094159(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_FireRateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Gun_FireRate_FireRateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
