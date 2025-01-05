// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Weapon/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase();
BLAMEGUN_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UDamageInfoComponent_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Damage_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Weapon_NoRegister();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EMainCharacterAnimState();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EWeaponBaseType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Class AWeaponBase Function EndWeaponAttack
struct Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "EndWeaponAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_EndWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execEndWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndWeaponAttack();
	P_NATIVE_END;
}
// End Class AWeaponBase Function EndWeaponAttack

// Begin Class AWeaponBase Function GetWeaponSkeletalMesh
struct Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics
{
	struct WeaponBase_eventGetWeaponSkeletalMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::WeaponBase_eventGetWeaponSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::WeaponBase_eventGetWeaponSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetWeaponSkeletalMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetWeaponSkeletalMesh();
	P_NATIVE_END;
}
// End Class AWeaponBase Function GetWeaponSkeletalMesh

// Begin Class AWeaponBase Function SetScaleOnAttach
struct Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetScaleOnAttach", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execSetScaleOnAttach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScaleOnAttach();
	P_NATIVE_END;
}
// End Class AWeaponBase Function SetScaleOnAttach

// Begin Class AWeaponBase Function StartWeaponAttack
struct Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StartWeaponAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_StartWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StartWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execStartWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWeaponAttack();
	P_NATIVE_END;
}
// End Class AWeaponBase Function StartWeaponAttack

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndWeaponAttack", &AWeaponBase::execEndWeaponAttack },
		{ "GetWeaponSkeletalMesh", &AWeaponBase::execGetWeaponSkeletalMesh },
		{ "SetScaleOnAttach", &AWeaponBase::execSetScaleOnAttach },
		{ "StartWeaponAttack", &AWeaponBase::execStartWeaponAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponBase.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInfoComponent_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletalMesh_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocket_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSocket_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBaseType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialScale_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetCharacterAnimationStateTo_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageInfoComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectileSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponBaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponBaseType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SetCharacterAnimationStateTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SetCharacterAnimationStateTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_EndWeaponAttack, "EndWeaponAttack" }, // 3387915383
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponSkeletalMesh, "GetWeaponSkeletalMesh" }, // 1458484567
		{ &Z_Construct_UFunction_AWeaponBase_SetScaleOnAttach, "SetScaleOnAttach" }, // 2171395746
		{ &Z_Construct_UFunction_AWeaponBase_StartWeaponAttack, "StartWeaponAttack" }, // 2149714106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageInfoComponent = { "DamageInfoComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DamageInfoComponent), Z_Construct_UClass_UDamageInfoComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInfoComponent_MetaData), NewProp_DamageInfoComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSkeletalMesh = { "WeaponSkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSkeletalMesh_MetaData), NewProp_WeaponSkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquipSocket = { "EquipSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, EquipSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSocket_MetaData), NewProp_EquipSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentLocationRule = { "AttachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentLocationRule_MetaData), NewProp_AttachmentLocationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentRotationRule = { "AttachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRotationRule_MetaData), NewProp_AttachmentRotationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentScaleRule = { "AttachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentScaleRule_MetaData), NewProp_AttachmentScaleRule_MetaData) }; // 366982490
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileSocket = { "ProjectileSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ProjectileSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSocket_MetaData), NewProp_ProjectileSocket_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponBaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponBaseType = { "WeaponBaseType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponBaseType), Z_Construct_UEnum_BlameGun_EWeaponBaseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBaseType_MetaData), NewProp_WeaponBaseType_MetaData) }; // 3504306766
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_InitialScale = { "InitialScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, InitialScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialScale_MetaData), NewProp_InitialScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_SetCharacterAnimationStateTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_SetCharacterAnimationStateTo = { "SetCharacterAnimationStateTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, SetCharacterAnimationStateTo), Z_Construct_UEnum_BlameGun_EMainCharacterAnimState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetCharacterAnimationStateTo_MetaData), NewProp_SetCharacterAnimationStateTo_MetaData) }; // 3551852300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageInfoComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EquipSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentLocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentLocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttachmentScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponBaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponBaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_InitialScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_SetCharacterAnimationStateTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_SetCharacterAnimationStateTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_Weapon_NoRegister, (int32)VTABLE_OFFSET(AWeaponBase, IInterface_Weapon), false },  // 1314497110
	{ Z_Construct_UClass_UInterface_Damage_NoRegister, (int32)VTABLE_OFFSET(AWeaponBase, IInterface_Damage), false },  // 1067797853
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 3075307396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBase_h_106736433(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Weapon_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
