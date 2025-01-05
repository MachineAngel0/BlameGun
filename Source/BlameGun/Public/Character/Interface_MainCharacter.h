// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Interface_MainCharacter.generated.h"

class AMainCharacter;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_MainCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLAMEGUN_API IInterface_MainCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AMainCharacter* RequestMainCharacterNew();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AMainCharacter* LaunchCharacter();
};
