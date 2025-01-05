// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIFunctionLibrary.generated.h"

class UAISense;
class UAISenseConfig;
class AAIController;
/**
 * 
 */
UCLASS()
class BLAMEGUN_API UAIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	static UAISenseConfig* GetPerceptionSenseConfig(AAIController *AIController, TSubclassOf<UAISense> SenseClass);

	UFUNCTION(BlueprintCallable)
	static bool SetSightRange(AAIController* Controller, float SightRange);
};
