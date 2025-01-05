// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectPoolBaseSubsystem.h"
#include "ProjectilePoolSubsystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(Log_ProjectilePoolSubsystem, Log, All);

struct FProjectileInfo;

USTRUCT(BlueprintType)
struct FProjectilePoolInfo
{
	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AProjectileActor*> ProjectileArray;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int CreationAmount = 10;
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

	void InstantiateProjectiles(const TSubclassOf<AProjectileActor>& ProjectileClass,
	                            FProjectilePoolInfo& ProjectileInfo) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<AProjectileActor>, FProjectilePoolInfo> PoolMap;

	UFUNCTION(BlueprintCallable)
	bool DoesProjectileExistInMap(const TSubclassOf<AProjectileActor> ProjectileClass) const;

	UFUNCTION(BlueprintCallable)
	void SpawnFromPool(TSubclassOf<AProjectileActor> ProjectileClass, FProjectileInfo ProjectileInfo,
	                   FTransform SpawnTransform, bool InstantiateIfNotFound = false);
};
