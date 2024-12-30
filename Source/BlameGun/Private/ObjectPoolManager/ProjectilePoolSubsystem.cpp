// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolManager/ProjectilePoolSubsystem.h"

#include "Weapon/Shared/ProjectileActor.h"

void UProjectilePoolSubsystem::InstantiatePool()
{
	Super::InstantiatePool();

	

	for (auto& Map: PoolMap)
	{
		for (int i = 0; i < Map.Value.CreationAmount; i++)
		{
			AProjectileActor* SpawnedActor = GetWorld()->SpawnActor<AProjectileActor>(Map.Key, FTransform::Identity);
			Map.Value.ProjectileArray.Emplace(SpawnedActor);
		}
		for (const auto& SpawnedProjectile: Map.Value.ProjectileArray)
		{
			IInterface_ObjectPool::Execute_ReleaseInUse(SpawnedProjectile);
		}
		
	}

	
}


bool UProjectilePoolSubsystem::DoesProjectileExistInMap(TSubclassOf<AProjectileActor> ProjectileClass)
{
	if (PoolMap.Contains(ProjectileClass))
	{
		return true;
	}
	return false;
}

void UProjectilePoolSubsystem::SpawnFromPool(TSubclassOf<AProjectileActor> ProjectileClass, FProjectileInfo ProjectileInfo, FTransform SpawnTransform)
{


	if (!PoolMap.Contains(ProjectileClass))
	{
		UE_LOG(LogTemp, Warning, TEXT("ProjectileClass Not Found"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Class Found"));
		
	// take from the front of the array and push it to the back
	TArray<AProjectileActor*>& ArrayRef = PoolMap.Find(ProjectileClass)->ProjectileArray;
	const auto Item = ArrayRef[0];
	ArrayRef.RemoveAt(0);
	ArrayRef.Emplace(Item);

	Item->SetActorTransform(SpawnTransform);
	Item->ProjectileInfo = ProjectileInfo;
	IInterface_ObjectPool::Execute_SetInUse(Item);
	
	


}