// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/Shared/ProjectileActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AProjectileActor();
BLAMEGUN_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_ObjectPool_NoRegister();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EBulletType();
BLAMEGUN_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Enum EBulletType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBulletType;
static UEnum* EBulletType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBulletType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBulletType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlameGun_EBulletType, (UObject*)Z_Construct_UPackage__Script_BlameGun(), TEXT("EBulletType"));
	}
	return Z_Registration_Info_UEnum_EBulletType.OuterSingleton;
}
template<> BLAMEGUN_API UEnum* StaticEnum<EBulletType>()
{
	return EBulletType_StaticEnum();
}
struct Z_Construct_UEnum_BlameGun_EBulletType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_HitScan.Name", "EBulletType::ECS_HitScan" },
		{ "ECS_None.Name", "EBulletType::ECS_None" },
		{ "ECS_Projectile.Name", "EBulletType::ECS_Projectile" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBulletType::ECS_None", (int64)EBulletType::ECS_None },
		{ "EBulletType::ECS_Projectile", (int64)EBulletType::ECS_Projectile },
		{ "EBulletType::ECS_HitScan", (int64)EBulletType::ECS_HitScan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlameGun_EBulletType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlameGun,
	nullptr,
	"EBulletType",
	"EBulletType",
	Z_Construct_UEnum_BlameGun_EBulletType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EBulletType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlameGun_EBulletType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlameGun_EBulletType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlameGun_EBulletType()
{
	if (!Z_Registration_Info_UEnum_EBulletType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBulletType.InnerSingleton, Z_Construct_UEnum_BlameGun_EBulletType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBulletType.InnerSingleton;
}
// End Enum EBulletType

// Begin ScriptStruct FProjectileInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileInfo;
class UScriptStruct* FProjectileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileInfo, (UObject*)Z_Construct_UPackage__Script_BlameGun(), TEXT("ProjectileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileInfo.OuterSingleton;
}
template<> BLAMEGUN_API UScriptStruct* StaticStruct<FProjectileInfo>()
{
	return FProjectileInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProjectileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceDistance_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifeTime_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOnOverlap_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealDamage_MetaData[] = {
		{ "Category", "ProjectileInfo" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifeTime;
	static void NewProp_DestroyOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOnOverlap;
	static void NewProp_DealDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DealDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, WeaponOwner), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_LineTraceDistance = { "LineTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, LineTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceDistance_MetaData), NewProp_LineTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime = { "ProjectileLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, ProjectileLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLifeTime_MetaData), NewProp_ProjectileLifeTime_MetaData) };
void Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DestroyOnOverlap_SetBit(void* Obj)
{
	((FProjectileInfo*)Obj)->DestroyOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DestroyOnOverlap = { "DestroyOnOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileInfo), &Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DestroyOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOnOverlap_MetaData), NewProp_DestroyOnOverlap_MetaData) };
void Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DealDamage_SetBit(void* Obj)
{
	((FProjectileInfo*)Obj)->DealDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DealDamage = { "DealDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileInfo), &Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DealDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealDamage_MetaData), NewProp_DealDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileInfo, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_LineTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_ProjectileLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DestroyOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_DealDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewProp_NiagaraSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
	nullptr,
	&NewStructOps,
	"ProjectileInfo",
	Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::PropPointers),
	sizeof(FProjectileInfo),
	alignof(FProjectileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileInfo.InnerSingleton, Z_Construct_UScriptStruct_FProjectileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProjectileInfo.InnerSingleton;
}
// End ScriptStruct FProjectileInfo

// Begin Class AProjectileActor Function OnProjectileBeginOverlap
struct Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics
{
	struct ProjectileActor_eventOnProjectileBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventOnProjectileBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventOnProjectileBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventOnProjectileBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventOnProjectileBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ProjectileActor_eventOnProjectileBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProjectileActor_eventOnProjectileBeginOverlap_Parms), &Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileActor_eventOnProjectileBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileActor, nullptr, "OnProjectileBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::ProjectileActor_eventOnProjectileBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::ProjectileActor_eventOnProjectileBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileActor::execOnProjectileBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AProjectileActor Function OnProjectileBeginOverlap

// Begin Class AProjectileActor
void AProjectileActor::StaticRegisterNativesAProjectileActor()
{
	UClass* Class = AProjectileActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnProjectileBeginOverlap", &AProjectileActor::execOnProjectileBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileActor);
UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
{
	return AProjectileActor::StaticClass();
}
struct Z_Construct_UClass_AProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Shared/ProjectileActor.h" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionComponent_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraProjectile_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInfo_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponOwner_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceDistance_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifeTime_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOnOverlap_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealDamage_MetaData[] = {
		{ "Category", "ProjectileActor" },
		{ "ModuleRelativePath", "Public/Weapon/Shared/ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraProjectile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifeTime;
	static void NewProp_DestroyOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOnOverlap;
	static void NewProp_DealDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DealDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileActor_OnProjectileBeginOverlap, "OnProjectileBeginOverlap" }, // 2864317778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_SphereCollisionComponent = { "SphereCollisionComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, SphereCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollisionComponent_MetaData), NewProp_SphereCollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_NiagaraProjectile = { "NiagaraProjectile", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, NiagaraProjectile), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraProjectile_MetaData), NewProp_NiagaraProjectile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileInfo = { "ProjectileInfo", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileInfo), Z_Construct_UScriptStruct_FProjectileInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileInfo_MetaData), NewProp_ProjectileInfo_MetaData) }; // 72554804
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_WeaponOwner = { "WeaponOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, WeaponOwner), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponOwner_MetaData), NewProp_WeaponOwner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_LineTraceDistance = { "LineTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, LineTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceDistance_MetaData), NewProp_LineTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileLifeTime = { "ProjectileLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileActor, ProjectileLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLifeTime_MetaData), NewProp_ProjectileLifeTime_MetaData) };
void Z_Construct_UClass_AProjectileActor_Statics::NewProp_DestroyOnOverlap_SetBit(void* Obj)
{
	((AProjectileActor*)Obj)->DestroyOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_DestroyOnOverlap = { "DestroyOnOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectileActor), &Z_Construct_UClass_AProjectileActor_Statics::NewProp_DestroyOnOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOnOverlap_MetaData), NewProp_DestroyOnOverlap_MetaData) };
void Z_Construct_UClass_AProjectileActor_Statics::NewProp_DealDamage_SetBit(void* Obj)
{
	((AProjectileActor*)Obj)->DealDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileActor_Statics::NewProp_DealDamage = { "DealDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AProjectileActor), &Z_Construct_UClass_AProjectileActor_Statics::NewProp_DealDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealDamage_MetaData), NewProp_DealDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_SphereCollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_NiagaraProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_WeaponOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_LineTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_ProjectileLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_DestroyOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileActor_Statics::NewProp_DealDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProjectileActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_ObjectPool_NoRegister, (int32)VTABLE_OFFSET(AProjectileActor, IInterface_ObjectPool), false },  // 331411894
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
	&AProjectileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectileActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileActor()
{
	if (!Z_Registration_Info_UClass_AProjectileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileActor.OuterSingleton, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileActor.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<AProjectileActor>()
{
	return AProjectileActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
AProjectileActor::~AProjectileActor() {}
// End Class AProjectileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBulletType_StaticEnum, TEXT("EBulletType"), &Z_Registration_Info_UEnum_EBulletType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3671096832U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileInfo::StaticStruct, Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewStructOps, TEXT("ProjectileInfo"), &Z_Registration_Info_UScriptStruct_ProjectileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileInfo), 72554804U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileActor, AProjectileActor::StaticClass, TEXT("AProjectileActor"), &Z_Registration_Info_UClass_AProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileActor), 1339577413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_1392092840(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_Shared_ProjectileActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
