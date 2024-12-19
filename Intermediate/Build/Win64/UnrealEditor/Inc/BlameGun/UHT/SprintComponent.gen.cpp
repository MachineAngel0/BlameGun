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
BLAMEGUN_API UClass* Z_Construct_UClass_USprintComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_USprintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class USprintComponent
void USprintComponent::StaticRegisterNativesUSprintComponent()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprintComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_USprintComponent, USprintComponent::StaticClass, TEXT("USprintComponent"), &Z_Registration_Info_UClass_USprintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USprintComponent), 473898331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_2251047256(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_SprintComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
