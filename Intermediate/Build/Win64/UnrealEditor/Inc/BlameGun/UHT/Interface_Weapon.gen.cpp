// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/Interface_Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_Weapon() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Weapon();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Weapon_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UProjectileSpawnerComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Interface UInterface_Weapon Function RequestProjectileComponent
struct Interface_Weapon_eventRequestProjectileComponent_Parms
{
	UProjectileSpawnerComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Weapon_eventRequestProjectileComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UProjectileSpawnerComponent* IInterface_Weapon::RequestProjectileComponent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestProjectileComponent instead.");
	Interface_Weapon_eventRequestProjectileComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Weapon_RequestProjectileComponent = FName(TEXT("RequestProjectileComponent"));
UProjectileSpawnerComponent* IInterface_Weapon::Execute_RequestProjectileComponent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Weapon::StaticClass()));
	Interface_Weapon_eventRequestProjectileComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Weapon_RequestProjectileComponent);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Weapon*)(O->GetNativeInterfaceAddress(UInterface_Weapon::StaticClass())))
	{
		Parms.ReturnValue = I->RequestProjectileComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Interface_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Weapon_eventRequestProjectileComponent_Parms, ReturnValue), Z_Construct_UClass_UProjectileSpawnerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Weapon, nullptr, "RequestProjectileComponent", nullptr, nullptr, Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::PropPointers), sizeof(Interface_Weapon_eventRequestProjectileComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Weapon_eventRequestProjectileComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Weapon::execRequestProjectileComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UProjectileSpawnerComponent**)Z_Param__Result=P_THIS->RequestProjectileComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Weapon Function RequestProjectileComponent

// Begin Interface UInterface_Weapon Function RequestWeapon
struct Interface_Weapon_eventRequestWeapon_Parms
{
	AWeaponBase* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Weapon_eventRequestWeapon_Parms()
		: ReturnValue(NULL)
	{
	}
};
AWeaponBase* IInterface_Weapon::RequestWeapon()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestWeapon instead.");
	Interface_Weapon_eventRequestWeapon_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Weapon_RequestWeapon = FName(TEXT("RequestWeapon"));
AWeaponBase* IInterface_Weapon::Execute_RequestWeapon(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Weapon::StaticClass()));
	Interface_Weapon_eventRequestWeapon_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Weapon_RequestWeapon);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Weapon*)(O->GetNativeInterfaceAddress(UInterface_Weapon::StaticClass())))
	{
		Parms.ReturnValue = I->RequestWeapon_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Interface_Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Weapon_eventRequestWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Weapon, nullptr, "RequestWeapon", nullptr, nullptr, Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::PropPointers), sizeof(Interface_Weapon_eventRequestWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Weapon_eventRequestWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Weapon_RequestWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Weapon_RequestWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Weapon::execRequestWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponBase**)Z_Param__Result=P_THIS->RequestWeapon_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Weapon Function RequestWeapon

// Begin Interface UInterface_Weapon
void UInterface_Weapon::StaticRegisterNativesUInterface_Weapon()
{
	UClass* Class = UInterface_Weapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestProjectileComponent", &IInterface_Weapon::execRequestProjectileComponent },
		{ "RequestWeapon", &IInterface_Weapon::execRequestWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_Weapon);
UClass* Z_Construct_UClass_UInterface_Weapon_NoRegister()
{
	return UInterface_Weapon::StaticClass();
}
struct Z_Construct_UClass_UInterface_Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Interface_Weapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterface_Weapon_RequestProjectileComponent, "RequestProjectileComponent" }, // 938252550
		{ &Z_Construct_UFunction_UInterface_Weapon_RequestWeapon, "RequestWeapon" }, // 2616662349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_Weapon_Statics::ClassParams = {
	&UInterface_Weapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_Weapon()
{
	if (!Z_Registration_Info_UClass_UInterface_Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_Weapon.OuterSingleton, Z_Construct_UClass_UInterface_Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_Weapon.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UInterface_Weapon>()
{
	return UInterface_Weapon::StaticClass();
}
UInterface_Weapon::UInterface_Weapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_Weapon);
UInterface_Weapon::~UInterface_Weapon() {}
// End Interface UInterface_Weapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_Interface_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_Weapon, UInterface_Weapon::StaticClass, TEXT("UInterface_Weapon"), &Z_Registration_Info_UClass_UInterface_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_Weapon), 1980144198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_Interface_Weapon_h_3812664095(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_Interface_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_Interface_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
