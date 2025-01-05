// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/WeaponBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBaseComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UWeaponBaseComponent
void UWeaponBaseComponent::StaticRegisterNativesUWeaponBaseComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponBaseComponent);
UClass* Z_Construct_UClass_UWeaponBaseComponent_NoRegister()
{
	return UWeaponBaseComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * functionality for anything that wishes to access a weapon owner\n */" },
#endif
		{ "IncludePath", "Weapon/WeaponBaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* functionality for anything that wishes to access a weapon owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "Category", "WeaponBaseComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponBaseComponent_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponBaseComponent, WeaponOwner), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBaseComponent_Statics::NewProp_WeaponOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponBaseComponent_Statics::ClassParams = {
	&UWeaponBaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponBaseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBaseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponBaseComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponBaseComponent.OuterSingleton, Z_Construct_UClass_UWeaponBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponBaseComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UWeaponBaseComponent>()
{
	return UWeaponBaseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponBaseComponent);
UWeaponBaseComponent::~UWeaponBaseComponent() {}
// End Class UWeaponBaseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponBaseComponent, UWeaponBaseComponent::StaticClass, TEXT("UWeaponBaseComponent"), &Z_Registration_Info_UClass_UWeaponBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponBaseComponent), 209316851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_3618829837(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBaseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
