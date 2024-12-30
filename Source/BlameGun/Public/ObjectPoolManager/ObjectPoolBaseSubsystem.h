// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectPoolBaseSubsystem.generated.h"



class AProjectileActor;
/**
 * Parent Class for all the object pools
 */
UCLASS(Blueprintable)
class BLAMEGUN_API UObjectPoolBaseSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()


private:
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//prevents the c++ version of this class from being created if there is a blueprint version
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	
public:


	UFUNCTION(BlueprintCallable)
	virtual void InstantiatePool();


	


	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	/*
	virtual void PostInitialize() override;
	*/
};
