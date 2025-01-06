// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EnemyMoveToManagerSubsystem.generated.h"

class USniperTeleportComponent;
class ASniperTeleportLocation;
class UFlyingComponent;
class AFlyToLocation;

/**
 * 
 */
UCLASS(Blueprintable)
class BLAMEGUN_API UEnemyMoveToManagerSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()



	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//prevents the c++ version of this class from being created if there is a blueprint version
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	
	TArray<AFlyToLocation*> FlyToLocationArray;
	TArray<ASniperTeleportLocation*> SniperTeleportLocationArray;

	
	UFUNCTION(BlueprintCallable)
	FVector ReturnFlyToLocation(UFlyingComponent* FlyComponentReference);
	
	UFUNCTION(BlueprintCallable)
	FVector ReturnSniperTeleportToLocation(USniperTeleportComponent* SniperTeleportComponent);
	
};
