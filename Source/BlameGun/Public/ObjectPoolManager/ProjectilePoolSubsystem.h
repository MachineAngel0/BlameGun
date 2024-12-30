// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectPoolBaseSubsystem.h"
#include "ProjectilePoolSubsystem.generated.h"

struct FProjectileInfo;

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AProjectileActor*> ProjectileArray;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int CreationAmount;

};


/**
 * 
 */
UCLASS(Blueprintable)
class BLAMEGUN_API UProjectilePoolSubsystem : public UObjectPoolBaseSubsystem
{
	GENERATED_BODY()


public:

	virtual void InstantiatePool() override;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<AProjectileActor>, FMyStruct> PoolMap;

	UFUNCTION(BlueprintCallable)
	bool DoesProjectileExistInMap(TSubclassOf<AProjectileActor> ProjectileClass);

	UFUNCTION(BlueprintCallable)
	void SpawnFromPool(TSubclassOf<AProjectileActor> ProjectileClass, FProjectileInfo ProjectileInfo, FTransform SpawnTransform);
	
	
};

