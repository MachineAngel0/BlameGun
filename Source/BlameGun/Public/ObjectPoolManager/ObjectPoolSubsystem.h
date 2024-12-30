// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class BLAMEGUN_API UObjectPoolSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	//a struct might be better for this
	TMap<TSubclassOf<AActor>, int> PoolActorToSize;
	
	TArray<AActor*> PoolArray;
	
};
