// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/Shared/ProjectileSpawnerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSpawnerComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UProjectileSpawnerComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UProjectileSpawnerComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class UProjectileSpawnerComponent Function SpawnProjectile
struct Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectileSpawnerComponent::execSpawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile();
	P_NATIVE_END;
}
// End Class UProjectileSpawnerComponent Function SpawnProjectile

// Begin Class UProjectileSpawnerComponent
void UProjectileSpawnerComponent::StaticRegisterNativesUProjectileSpawnerComponent()
{
	UClass* Class = UProjectileSpawnerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UProjectileSpawnerComponent::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileSpawnerComponent);
UClass* Z_Construct_UClass_UProjectileSpawnerComponent_NoRegister()
{
	return UProjectileSpawnerComponent::StaticClass();
}
struct Z_Construct_UClass_UProjectileSpawnerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * This class is responsible for holding onto the type of projectile that we will be spawning in for the gun\n * Can be accessed and changed during runtime or in the editor to determine the type of projectile that will be used\n */" },
#endif
		{ "IncludePath", "Weapon/Shared/ProjectileSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This class is responsible for holding onto the type of projectile that we will be spawning in for the gun\n* Can be accessed and changed during runtime or in the editor to determine the type of projectile that will be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileReference_MetaData[] = {
		{ "Category", "ProjectileSpawnerComponent" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileOffset_MetaData[] = {
		{ "Category", "ProjectileSpawnerComponent" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectile, "SpawnProjectile" }, // 2475105405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileSpawnerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileReference = { "ProjectileReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileReference_MetaData), NewProp_ProjectileReference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileOffset = { "ProjectileOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileOffset_MetaData), NewProp_ProjectileOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileSpawnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpawnerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProjectileSpawnerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpawnerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::ClassParams = {
	&UProjectileSpawnerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProjectileSpawnerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpawnerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileSpawnerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileSpawnerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectileSpawnerComponent()
{
	if (!Z_Registration_Info_UClass_UProjectileSpawnerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileSpawnerComponent.OuterSingleton, Z_Construct_UClass_UProjectileSpawnerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileSpawnerComponent.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UProjectileSpawnerComponent>()
{
	return UProjectileSpawnerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileSpawnerComponent);
UProjectileSpawnerComponent::~UProjectileSpawnerComponent() {}
// End Class UProjectileSpawnerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileSpawnerComponent, UProjectileSpawnerComponent::StaticClass, TEXT("UProjectileSpawnerComponent"), &Z_Registration_Info_UClass_UProjectileSpawnerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileSpawnerComponent), 1191052872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_3047952927(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
