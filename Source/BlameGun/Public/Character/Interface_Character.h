// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Interface_Character.generated.h"

enum class EMainCharacterAnimState : uint8;
class UCameraComponent;
class ACharacterBase;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_Character : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLAMEGUN_API IInterface_Character
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	ACharacterBase* RequestCharacter();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UCameraComponent* RequestCamera();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMainCharacterAnimState(EMainCharacterAnimState AnimationState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayCharacterAnimationMontage(UAnimMontage* AnimMontage);
};
