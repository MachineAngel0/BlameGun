// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FlyingManagerSubsystem.generated.h"

class UFlyingComponent;
class AFlyToLocation;

/**
 * 
 */
UCLASS(Blueprintable)
class BLAMEGUN_API UFlyingManagerSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()



	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//prevents the c++ version of this class from being created if there is a blueprint version
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	
	TArray<AFlyToLocation*> FlyToLocationArray;

	
	UFUNCTION(BlueprintCallable)
	FVector ReturnFlyToLocation(UFlyingComponent* FlyingComponentReference);
	
};
