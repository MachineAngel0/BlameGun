// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/Shared/ProjectileSpawnerComponent.h"
#include "BlameGun/Public/Weapon/Shared/ProjectileActor.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSpawnerComponent() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UProjectileSpawnerComponent();
BLAMEGUN_API UClass* Z_Construct_UClass_UProjectileSpawnerComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UWeaponBaseComponent();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EAttackSocketType();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EProjectilePattern();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EProjectileTransformType();
BLAMEGUN_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo();
BLAMEGUN_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTypeParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Enum EProjectilePattern
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectilePattern;
static UEnum* EProjectilePattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectilePattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectilePattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlameGun_EProjectilePattern, (UObject*)Z_Construct_UPackage__Script_BlameGun(), TEXT("EProjectilePattern"));
	}
	return Z_Registration_Info_UEnum_EProjectilePattern.OuterSingleton;
}
template<> BLAMEGUN_API UEnum* StaticEnum<EProjectilePattern>()
{
	return EProjectilePattern_StaticEnum();
}
struct Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Circle.Name", "EProjectilePattern::ECS_Circle" },
		{ "ECS_CircleFacingTarget.Name", "EProjectilePattern::ECS_CircleFacingTarget" },
		{ "ECS_Default.Name", "EProjectilePattern::ECS_Default" },
		{ "ECS_Triangle.Name", "EProjectilePattern::ECS_Triangle" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectilePattern::ECS_Default", (int64)EProjectilePattern::ECS_Default },
		{ "EProjectilePattern::ECS_Triangle", (int64)EProjectilePattern::ECS_Triangle },
		{ "EProjectilePattern::ECS_Circle", (int64)EProjectilePattern::ECS_Circle },
		{ "EProjectilePattern::ECS_CircleFacingTarget", (int64)EProjectilePattern::ECS_CircleFacingTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlameGun,
	nullptr,
	"EProjectilePattern",
	"EProjectilePattern",
	Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlameGun_EProjectilePattern()
{
	if (!Z_Registration_Info_UEnum_EProjectilePattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectilePattern.InnerSingleton, Z_Construct_UEnum_BlameGun_EProjectilePattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectilePattern.InnerSingleton;
}
// End Enum EProjectilePattern

// Begin Enum EProjectileTransformType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileTransformType;
static UEnum* EProjectileTransformType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileTransformType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlameGun_EProjectileTransformType, (UObject*)Z_Construct_UPackage__Script_BlameGun(), TEXT("EProjectileTransformType"));
	}
	return Z_Registration_Info_UEnum_EProjectileTransformType.OuterSingleton;
}
template<> BLAMEGUN_API UEnum* StaticEnum<EProjectileTransformType>()
{
	return EProjectileTransformType_StaticEnum();
}
struct Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Actor.Name", "EProjectileTransformType::ECS_Actor" },
		{ "ECS_AttackEnemySocket.Name", "EProjectileTransformType::ECS_AttackEnemySocket" },
		{ "ECS_Default.Name", "EProjectileTransformType::ECS_Default" },
		{ "ECS_SpecialAttackEnemySocket.Name", "EProjectileTransformType::ECS_SpecialAttackEnemySocket" },
		{ "ECS_Weapon.Name", "EProjectileTransformType::ECS_Weapon" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileTransformType::ECS_Default", (int64)EProjectileTransformType::ECS_Default },
		{ "EProjectileTransformType::ECS_Weapon", (int64)EProjectileTransformType::ECS_Weapon },
		{ "EProjectileTransformType::ECS_Actor", (int64)EProjectileTransformType::ECS_Actor },
		{ "EProjectileTransformType::ECS_AttackEnemySocket", (int64)EProjectileTransformType::ECS_AttackEnemySocket },
		{ "EProjectileTransformType::ECS_SpecialAttackEnemySocket", (int64)EProjectileTransformType::ECS_SpecialAttackEnemySocket },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlameGun,
	nullptr,
	"EProjectileTransformType",
	"EProjectileTransformType",
	Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlameGun_EProjectileTransformType()
{
	if (!Z_Registration_Info_UEnum_EProjectileTransformType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileTransformType.InnerSingleton, Z_Construct_UEnum_BlameGun_EProjectileTransformType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileTransformType.InnerSingleton;
}
// End Enum EProjectileTransformType

// Begin ScriptStruct FProjectileTypeParams
static_assert(std::is_polymorphic<FProjectileTypeParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileTypeParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileTypeParams;
class UScriptStruct* FProjectileTypeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileTypeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileTypeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileTypeParams, (UObject*)Z_Construct_UPackage__Script_BlameGun(), TEXT("ProjectileTypeParams"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileTypeParams.OuterSingleton;
}
template<> BLAMEGUN_API UScriptStruct* StaticStruct<FProjectileTypeParams>()
{
	return FProjectileTypeParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProjectileTypeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileReference_MetaData[] = {
		{ "Category", "ProjectileTypeParams" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePattern_MetaData[] = {
		{ "Category", "ProjectileTypeParams" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "ProjectileTypeParams" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileReference;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectilePattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectilePattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileTypeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectileReference = { "ProjectileReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTypeParams, ProjectileReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileReference_MetaData), NewProp_ProjectileReference_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectilePattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectilePattern = { "ProjectilePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTypeParams, ProjectilePattern), Z_Construct_UEnum_BlameGun_EProjectilePattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectilePattern_MetaData), NewProp_ProjectilePattern_MetaData) }; // 3302727723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTypeParams, TransformType), Z_Construct_UEnum_BlameGun_EProjectileTransformType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 746800445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectileReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectilePattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_ProjectilePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_TransformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewProp_TransformType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ProjectileTypeParams",
	Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::PropPointers),
	sizeof(FProjectileTypeParams),
	alignof(FProjectileTypeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileTypeParams()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileTypeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileTypeParams.InnerSingleton, Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProjectileTypeParams.InnerSingleton;
}
// End ScriptStruct FProjectileTypeParams

// Begin Class UProjectileSpawnerComponent Function ActorLineTrace
struct ProjectileSpawnerComponent_eventActorLineTrace_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_ActorLineTrace = FName(TEXT("ActorLineTrace"));
FTransform UProjectileSpawnerComponent::ActorLineTrace()
{
	ProjectileSpawnerComponent_eventActorLineTrace_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_ActorLineTrace);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventActorLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "ActorLineTrace", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventActorLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventActorLineTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function ActorLineTrace

// Begin Class UProjectileSpawnerComponent Function CircleFacingTargetPattern
struct ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms
{
	int32 Quantity;
	float Radius;
	TArray<FTransform> ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_CircleFacingTargetPattern = FName(TEXT("CircleFacingTargetPattern"));
TArray<FTransform> UProjectileSpawnerComponent::CircleFacingTargetPattern(int32 Quantity, float Radius)
{
	ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms Parms;
	Parms.Quantity=Quantity;
	Parms.Radius=Radius;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_CircleFacingTargetPattern);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CPP_Default_Quantity", "4" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "CircleFacingTargetPattern", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventCircleFacingTargetPattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function CircleFacingTargetPattern

// Begin Class UProjectileSpawnerComponent Function CirclePatternSpawner
struct ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms
{
	int32 Quantity;
	float Radius;
	TArray<FTransform> ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_CirclePatternSpawner = FName(TEXT("CirclePatternSpawner"));
TArray<FTransform> UProjectileSpawnerComponent::CirclePatternSpawner(int32 Quantity, float Radius)
{
	ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms Parms;
	Parms.Quantity=Quantity;
	Parms.Radius=Radius;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_CirclePatternSpawner);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bullet Patterns, might move to a function library\n" },
#endif
		{ "CPP_Default_Quantity", "8" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bullet Patterns, might move to a function library" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "CirclePatternSpawner", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventCirclePatternSpawner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function CirclePatternSpawner

// Begin Class UProjectileSpawnerComponent Function ReadProjectileInfoDataTable
struct Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "ReadProjectileInfoDataTable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectileSpawnerComponent::execReadProjectileInfoDataTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadProjectileInfoDataTable();
	P_NATIVE_END;
}
// End Class UProjectileSpawnerComponent Function ReadProjectileInfoDataTable

// Begin Class UProjectileSpawnerComponent Function ReadProjectileTypeDataTable
struct Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "ReadProjectileTypeDataTable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectileSpawnerComponent::execReadProjectileTypeDataTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadProjectileTypeDataTable();
	P_NATIVE_END;
}
// End Class UProjectileSpawnerComponent Function ReadProjectileTypeDataTable

// Begin Class UProjectileSpawnerComponent Function SpawnAtEnemySocketLocation
struct ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms
{
	EAttackSocketType AttackSocketToUse;
	FTransform ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation = FName(TEXT("SpawnAtEnemySocketLocation"));
FTransform UProjectileSpawnerComponent::SpawnAtEnemySocketLocation(EAttackSocketType AttackSocketToUse)
{
	ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms Parms;
	Parms.AttackSocketToUse=AttackSocketToUse;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttackSocketToUse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackSocketToUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_AttackSocketToUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_AttackSocketToUse = { "AttackSocketToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms, AttackSocketToUse), Z_Construct_UEnum_BlameGun_EAttackSocketType, METADATA_PARAMS(0, nullptr) }; // 4268659785
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_AttackSocketToUse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_AttackSocketToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "SpawnAtEnemySocketLocation", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventSpawnAtEnemySocketLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function SpawnAtEnemySocketLocation

// Begin Class UProjectileSpawnerComponent Function SpawnProjectileFromPool
struct Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "SpawnProjectileFromPool", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProjectileSpawnerComponent::execSpawnProjectileFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectileFromPool();
	P_NATIVE_END;
}
// End Class UProjectileSpawnerComponent Function SpawnProjectileFromPool

// Begin Class UProjectileSpawnerComponent Function TrianglePattern
struct ProjectileSpawnerComponent_eventTrianglePattern_Parms
{
	float Distance;
	TArray<FTransform> ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_TrianglePattern = FName(TEXT("TrianglePattern"));
TArray<FTransform> UProjectileSpawnerComponent::TrianglePattern(float Distance)
{
	ProjectileSpawnerComponent_eventTrianglePattern_Parms Parms;
	Parms.Distance=Distance;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_TrianglePattern);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CPP_Default_Distance", "100.000000" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventTrianglePattern_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventTrianglePattern_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "TrianglePattern", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventTrianglePattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventTrianglePattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function TrianglePattern

// Begin Class UProjectileSpawnerComponent Function WeaponLineTrace
struct ProjectileSpawnerComponent_eventWeaponLineTrace_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UProjectileSpawnerComponent_WeaponLineTrace = FName(TEXT("WeaponLineTrace"));
FTransform UProjectileSpawnerComponent::WeaponLineTrace()
{
	ProjectileSpawnerComponent_eventWeaponLineTrace_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UProjectileSpawnerComponent_WeaponLineTrace);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileSpawnerComponent_eventWeaponLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileSpawnerComponent, nullptr, "WeaponLineTrace", nullptr, nullptr, Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::PropPointers), sizeof(ProjectileSpawnerComponent_eventWeaponLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(ProjectileSpawnerComponent_eventWeaponLineTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UProjectileSpawnerComponent Function WeaponLineTrace

// Begin Class UProjectileSpawnerComponent
void UProjectileSpawnerComponent::StaticRegisterNativesUProjectileSpawnerComponent()
{
	UClass* Class = UProjectileSpawnerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadProjectileInfoDataTable", &UProjectileSpawnerComponent::execReadProjectileInfoDataTable },
		{ "ReadProjectileTypeDataTable", &UProjectileSpawnerComponent::execReadProjectileTypeDataTable },
		{ "SpawnProjectileFromPool", &UProjectileSpawnerComponent::execSpawnProjectileFromPool },
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
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * This class is responsible for holding onto the type of projectile that we will be spawning in for the gun\n * Can be accessed and changed during runtime or in the editor to determine the type of projectile that will be used\n */" },
#endif
		{ "IncludePath", "Weapon/Shared/ProjectileSpawnerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This class is responsible for holding onto the type of projectile that we will be spawning in for the gun\n* Can be accessed and changed during runtime or in the editor to determine the type of projectile that will be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_DT_MetaData[] = {
		{ "Category", "ProjectileSpawnerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//info about the type of projectile we wish to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
		{ "RowType", "ProjectileTypeParams" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "info about the type of projectile we wish to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileTypeParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInfo_DT_MetaData[] = {
		{ "Category", "ProjectileSpawnerComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//info about the projectiles params\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
		{ "RowType", "ProjectileInfo" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "info about the projectiles params" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set by the data table\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set by the data table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformForSpawning_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//transforms for spawning the projectiles\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "transforms for spawning the projectiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformArrayForSpawning_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileSpawnerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileType_DT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileTypeParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileInfo_DT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformForSpawning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformArrayForSpawning_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformArrayForSpawning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_ActorLineTrace, "ActorLineTrace" }, // 1391124351
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_CircleFacingTargetPattern, "CircleFacingTargetPattern" }, // 3413805086
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_CirclePatternSpawner, "CirclePatternSpawner" }, // 2585897575
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileInfoDataTable, "ReadProjectileInfoDataTable" }, // 1472077261
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_ReadProjectileTypeDataTable, "ReadProjectileTypeDataTable" }, // 1096418318
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnAtEnemySocketLocation, "SpawnAtEnemySocketLocation" }, // 282171136
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_SpawnProjectileFromPool, "SpawnProjectileFromPool" }, // 2351428440
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_TrianglePattern, "TrianglePattern" }, // 1548275090
		{ &Z_Construct_UFunction_UProjectileSpawnerComponent_WeaponLineTrace, "WeaponLineTrace" }, // 1744723146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileSpawnerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileType_DT = { "ProjectileType_DT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileType_DT), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileType_DT_MetaData), NewProp_ProjectileType_DT_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileTypeParams = { "ProjectileTypeParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileTypeParams), Z_Construct_UScriptStruct_FProjectileTypeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileTypeParams_MetaData), NewProp_ProjectileTypeParams_MetaData) }; // 4021652715
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileInfo_DT = { "ProjectileInfo_DT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileInfo_DT), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileInfo_DT_MetaData), NewProp_ProjectileInfo_DT_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileInfo = { "ProjectileInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, ProjectileInfo), Z_Construct_UScriptStruct_FProjectileInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileInfo_MetaData), NewProp_ProjectileInfo_MetaData) }; // 3167401113
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformForSpawning = { "TransformForSpawning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, TransformForSpawning), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformForSpawning_MetaData), NewProp_TransformForSpawning_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformArrayForSpawning_Inner = { "TransformArrayForSpawning", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformArrayForSpawning = { "TransformArrayForSpawning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileSpawnerComponent, TransformArrayForSpawning), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformArrayForSpawning_MetaData), NewProp_TransformArrayForSpawning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileSpawnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileType_DT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileTypeParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileInfo_DT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_ProjectileInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformForSpawning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformArrayForSpawning_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileSpawnerComponent_Statics::NewProp_TransformArrayForSpawning,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectilePattern_StaticEnum, TEXT("EProjectilePattern"), &Z_Registration_Info_UEnum_EProjectilePattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3302727723U) },
		{ EProjectileTransformType_StaticEnum, TEXT("EProjectileTransformType"), &Z_Registration_Info_UEnum_EProjectileTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 746800445U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileTypeParams::StaticStruct, Z_Construct_UScriptStruct_FProjectileTypeParams_Statics::NewStructOps, TEXT("ProjectileTypeParams"), &Z_Registration_Info_UScriptStruct_ProjectileTypeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTypeParams), 4021652715U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileSpawnerComponent, UProjectileSpawnerComponent::StaticClass, TEXT("UProjectileSpawnerComponent"), &Z_Registration_Info_UClass_UProjectileSpawnerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileSpawnerComponent), 148496404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_1323327779(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileSpawnerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
