// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/FireRate/FireRateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireRateComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UFireRateComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UFireRateComponent
void UFireRateComponent::StaticRegisterNativesUFireRateComponent()
{
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
		{ "IncludePath", "Weapon/FireRate/FireRateComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/FireRate/FireRateComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireRateComponent, UFireRateComponent::StaticClass, TEXT("UFireRateComponent"), &Z_Registration_Info_UClass_UFireRateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireRateComponent), 1490166967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_1435454060(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_Source_BlameGun_Public_Weapon_FireRate_FireRateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
