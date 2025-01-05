// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolManager/ProjectilePoolSubsystem.h"
#include "Weapon/Shared/ProjectileActor.h"

DEFINE_LOG_CATEGORY(Log_ProjectilePoolSubsystem);

void UProjectilePoolSubsystem::InstantiatePool()
{
	Super::InstantiatePool();


	for (auto& Map : PoolMap)
	{
		InstantiateProjectiles(Map.Key, Map.Value);
		/*
		for (int i = 0; i < Map.Value.CreationAmount; i++)
		{
			AProjectileActor* SpawnedActor = GetWorld()->SpawnActor<AProjectileActor>(Map.Key, FTransform::Identity);
			Map.Value.ProjectileArray.Emplace(SpawnedActor);
		}
		for (const auto& SpawnedProjectile: Map.Value.ProjectileArray)
		{
			IInterface_ObjectPool::Execute_ReleaseInUse(SpawnedProjectile);
		}
		*/
	}
}

void UProjectilePoolSubsystem::InstantiateProjectiles(const TSubclassOf<AProjectileActor>& ProjectileClass,
                                                      FProjectilePoolInfo& ProjectileInfo) const
{
	for (int i = 0; i < ProjectileInfo.CreationAmount; i++)
	{
		AProjectileActor* SpawnedActor = GetWorld()->SpawnActor<AProjectileActor>(ProjectileClass, FTransform::Identity);
		ProjectileInfo.ProjectileArray.Emplace(SpawnedActor);
		IInterface_ObjectPool::Execute_ReleaseInUse(SpawnedActor);
	}
	
}


bool UProjectilePoolSubsystem::DoesProjectileExistInMap(const TSubclassOf<AProjectileActor> ProjectileClass) const
{
	if (PoolMap.Contains(ProjectileClass))
	{
		/* testing to make sure array isn't empty
		if(PoolMap.Find(ProjectileClass)->ProjectileArray.Num() <= 0)
		{
			UE_LOG(Log_ProjectilePoolSubsystem, Warning, TEXT("EmptyArray"));
		}
		for (auto& Item: PoolMap.Find(ProjectileClass)->ProjectileArray)
		{
			UE_LOG(Log_ProjectilePoolSubsystem, Warning, TEXT("In Array %s"), *Item->GetName());
		}
		*/
		return true;
	}
	return false;
}

void UProjectilePoolSubsystem::SpawnFromPool(const TSubclassOf<AProjectileActor> ProjectileClass,
                                             const FProjectileInfo ProjectileInfo, const FTransform SpawnTransform,
                                             const bool InstantiateIfNotFound)
{
	if (!PoolMap.Contains(ProjectileClass))
	{
		UE_LOG(Log_ProjectilePoolSubsystem, Error, TEXT("ProjectileClass Not Found"));
		if (InstantiateIfNotFound)
		{
			UE_LOG(Log_ProjectilePoolSubsystem, Warning, TEXT("Instantiating Projectiles"));
			FProjectilePoolInfo TempProjectilePoolInfo;
			PoolMap.Add(ProjectileClass, TempProjectilePoolInfo);
			InstantiateProjectiles(ProjectileClass, TempProjectilePoolInfo);
		}
		return;
	}

	UE_LOG(Log_ProjectilePoolSubsystem, Warning, TEXT("Class Found"));

	// take from the front of the array and push it to the back
	
	TArray<AProjectileActor*>& ArrayRef = PoolMap.Find(ProjectileClass)->ProjectileArray;
	AProjectileActor* Item = ArrayRef[0];
	ArrayRef.RemoveAt(0);
	ArrayRef.Emplace(Item);

	Item->SetActorTransform(SpawnTransform);
	Item->SetProjectileStruct(ProjectileInfo);
	IInterface_ObjectPool::Execute_SetInUse(Item);
}
