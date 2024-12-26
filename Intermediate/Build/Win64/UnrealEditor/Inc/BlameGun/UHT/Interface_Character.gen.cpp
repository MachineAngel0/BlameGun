// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlameGun/Public/Character/Interface_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_Character() {}

// Begin Cross Module References
BLAMEGUN_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Character();
BLAMEGUN_API UClass* Z_Construct_UClass_UInterface_Character_NoRegister();
BLAMEGUN_API UEnum* Z_Construct_UEnum_BlameGun_EMainCharacterAnimState();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlameGun();
// End Cross Module References

// Begin Interface UInterface_Character Function PickUpCoin
void IInterface_Character::PickUpCoin()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickUpCoin instead.");
}
static FName NAME_UInterface_Character_PickUpCoin = FName(TEXT("PickUpCoin"));
void IInterface_Character::Execute_PickUpCoin(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_PickUpCoin);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		I->PickUpCoin_Implementation();
	}
}
struct Z_Construct_UFunction_UInterface_Character_PickUpCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_PickUpCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "PickUpCoin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_PickUpCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_PickUpCoin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterface_Character_PickUpCoin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_PickUpCoin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execPickUpCoin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUpCoin_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Character Function PickUpCoin

// Begin Interface UInterface_Character Function PlayCharacterAnimationMontage
struct Interface_Character_eventPlayCharacterAnimationMontage_Parms
{
	UAnimMontage* AnimMontage;
};
void IInterface_Character::PlayCharacterAnimationMontage(UAnimMontage* AnimMontage)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayCharacterAnimationMontage instead.");
}
static FName NAME_UInterface_Character_PlayCharacterAnimationMontage = FName(TEXT("PlayCharacterAnimationMontage"));
void IInterface_Character::Execute_PlayCharacterAnimationMontage(UObject* O, UAnimMontage* AnimMontage)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventPlayCharacterAnimationMontage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_PlayCharacterAnimationMontage);
	if (Func)
	{
		Parms.AnimMontage=AnimMontage;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		I->PlayCharacterAnimationMontage_Implementation(AnimMontage);
	}
}
struct Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventPlayCharacterAnimationMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::NewProp_AnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "PlayCharacterAnimationMontage", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::PropPointers), sizeof(Interface_Character_eventPlayCharacterAnimationMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventPlayCharacterAnimationMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execPlayCharacterAnimationMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayCharacterAnimationMontage_Implementation(Z_Param_AnimMontage);
	P_NATIVE_END;
}
// End Interface UInterface_Character Function PlayCharacterAnimationMontage

// Begin Interface UInterface_Character Function RequestCamera
struct Interface_Character_eventRequestCamera_Parms
{
	UCameraComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Character_eventRequestCamera_Parms()
		: ReturnValue(NULL)
	{
	}
};
UCameraComponent* IInterface_Character::RequestCamera()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestCamera instead.");
	Interface_Character_eventRequestCamera_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Character_RequestCamera = FName(TEXT("RequestCamera"));
UCameraComponent* IInterface_Character::Execute_RequestCamera(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventRequestCamera_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_RequestCamera);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventRequestCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "RequestCamera", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::PropPointers), sizeof(Interface_Character_eventRequestCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventRequestCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_RequestCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_RequestCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UInterface_Character Function RequestCamera

// Begin Interface UInterface_Character Function RequestCharacter
struct Interface_Character_eventRequestCharacter_Parms
{
	ACharacterBase* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Character_eventRequestCharacter_Parms()
		: ReturnValue(NULL)
	{
	}
};
ACharacterBase* IInterface_Character::RequestCharacter()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestCharacter instead.");
	Interface_Character_eventRequestCharacter_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Character_RequestCharacter = FName(TEXT("RequestCharacter"));
ACharacterBase* IInterface_Character::Execute_RequestCharacter(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventRequestCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_RequestCharacter);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		Parms.ReturnValue = I->RequestCharacter_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventRequestCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "RequestCharacter", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::PropPointers), sizeof(Interface_Character_eventRequestCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventRequestCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_RequestCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_RequestCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execRequestCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacterBase**)Z_Param__Result=P_THIS->RequestCharacter_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Character Function RequestCharacter

// Begin Interface UInterface_Character Function RequestMainCharacter
struct Interface_Character_eventRequestMainCharacter_Parms
{
	AMainCharacter* ReturnValue;

	/** Constructor, initializes return property only **/
	Interface_Character_eventRequestMainCharacter_Parms()
		: ReturnValue(NULL)
	{
	}
};
AMainCharacter* IInterface_Character::RequestMainCharacter()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestMainCharacter instead.");
	Interface_Character_eventRequestMainCharacter_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInterface_Character_RequestMainCharacter = FName(TEXT("RequestMainCharacter"));
AMainCharacter* IInterface_Character::Execute_RequestMainCharacter(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventRequestMainCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_RequestMainCharacter);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		Parms.ReturnValue = I->RequestMainCharacter_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventRequestMainCharacter_Parms, ReturnValue), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "RequestMainCharacter", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::PropPointers), sizeof(Interface_Character_eventRequestMainCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventRequestMainCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_RequestMainCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_RequestMainCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execRequestMainCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMainCharacter**)Z_Param__Result=P_THIS->RequestMainCharacter_Implementation();
	P_NATIVE_END;
}
// End Interface UInterface_Character Function RequestMainCharacter

// Begin Interface UInterface_Character Function SetMainCharacterAnimState
struct Interface_Character_eventSetMainCharacterAnimState_Parms
{
	EMainCharacterAnimState AnimationState;
};
void IInterface_Character::SetMainCharacterAnimState(EMainCharacterAnimState AnimationState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMainCharacterAnimState instead.");
}
static FName NAME_UInterface_Character_SetMainCharacterAnimState = FName(TEXT("SetMainCharacterAnimState"));
void IInterface_Character::Execute_SetMainCharacterAnimState(UObject* O, EMainCharacterAnimState AnimationState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInterface_Character::StaticClass()));
	Interface_Character_eventSetMainCharacterAnimState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInterface_Character_SetMainCharacterAnimState);
	if (Func)
	{
		Parms.AnimationState=AnimationState;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInterface_Character*)(O->GetNativeInterfaceAddress(UInterface_Character::StaticClass())))
	{
		I->SetMainCharacterAnimState_Implementation(AnimationState);
	}
}
struct Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::NewProp_AnimationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_Character_eventSetMainCharacterAnimState_Parms, AnimationState), Z_Construct_UEnum_BlameGun_EMainCharacterAnimState, METADATA_PARAMS(0, nullptr) }; // 3551852300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::NewProp_AnimationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::NewProp_AnimationState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_Character, nullptr, "SetMainCharacterAnimState", nullptr, nullptr, Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::PropPointers), sizeof(Interface_Character_eventSetMainCharacterAnimState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interface_Character_eventSetMainCharacterAnimState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_Character::execSetMainCharacterAnimState)
{
	P_GET_ENUM(EMainCharacterAnimState,Z_Param_AnimationState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainCharacterAnimState_Implementation(EMainCharacterAnimState(Z_Param_AnimationState));
	P_NATIVE_END;
}
// End Interface UInterface_Character Function SetMainCharacterAnimState

// Begin Interface UInterface_Character
void UInterface_Character::StaticRegisterNativesUInterface_Character()
{
	UClass* Class = UInterface_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PickUpCoin", &IInterface_Character::execPickUpCoin },
		{ "PlayCharacterAnimationMontage", &IInterface_Character::execPlayCharacterAnimationMontage },
		{ "RequestCharacter", &IInterface_Character::execRequestCharacter },
		{ "RequestMainCharacter", &IInterface_Character::execRequestMainCharacter },
		{ "SetMainCharacterAnimState", &IInterface_Character::execSetMainCharacterAnimState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_Character);
UClass* Z_Construct_UClass_UInterface_Character_NoRegister()
{
	return UInterface_Character::StaticClass();
}
struct Z_Construct_UClass_UInterface_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Interface_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterface_Character_PickUpCoin, "PickUpCoin" }, // 1303859244
		{ &Z_Construct_UFunction_UInterface_Character_PlayCharacterAnimationMontage, "PlayCharacterAnimationMontage" }, // 2327028697
		{ &Z_Construct_UFunction_UInterface_Character_RequestCamera, "RequestCamera" }, // 3720369110
		{ &Z_Construct_UFunction_UInterface_Character_RequestCharacter, "RequestCharacter" }, // 2422463470
		{ &Z_Construct_UFunction_UInterface_Character_RequestMainCharacter, "RequestMainCharacter" }, // 1139198535
		{ &Z_Construct_UFunction_UInterface_Character_SetMainCharacterAnimState, "SetMainCharacterAnimState" }, // 907505221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BlameGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_Character_Statics::ClassParams = {
	&UInterface_Character::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_Character()
{
	if (!Z_Registration_Info_UClass_UInterface_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_Character.OuterSingleton, Z_Construct_UClass_UInterface_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_Character.OuterSingleton;
}
template<> BLAMEGUN_API UClass* StaticClass<UInterface_Character>()
{
	return UInterface_Character::StaticClass();
}
UInterface_Character::UInterface_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_Character);
UInterface_Character::~UInterface_Character() {}
// End Interface UInterface_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_Character, UInterface_Character::StaticClass, TEXT("UInterface_Character"), &Z_Registration_Info_UClass_UInterface_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_Character), 3310042614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_2950536037(TEXT("/Script/BlameGun"),
	Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BlameGun_5_5_Source_BlameGun_Public_Character_Interface_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
