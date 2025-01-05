// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shared/ProjectileSpawnerComponent.h"

#include "DamageInfoComponent.h"
#include "Interface_Damage.h"
#include "ObjectPoolManager/ProjectilePoolSubsystem.h"
#include "Weapon/Shared/ProjectileActor.h"


// Sets default values for this component's properties
UProjectileSpawnerComponent::UProjectileSpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void UProjectileSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// Called when the game starts
void UProjectileSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();

	ReadProjectileTypeDataTable();
	ReadProjectileInfoDataTable();

}



void UProjectileSpawnerComponent::ReadProjectileTypeDataTable()
{
	if (ProjectileType_DT.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Data Table For ProjectileSpawner Component, Ability Owner: %s"), *GetOwner()->GetName());
	}
	if (const auto& DataTableInfo = ProjectileType_DT.GetRow<FProjectileTypeParams>(""))
	{
		UE_LOG(LogTemp, Display, TEXT("Found Data Row %s"), *this->GetName());
		ProjectileTypeParams = *DataTableInfo;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Row, For ProjectileTypeParams, Ability Owner: %s"), *GetOwner()->GetName());
	}
	
}


void UProjectileSpawnerComponent::ReadProjectileInfoDataTable()
{
	if (ProjectileInfo_DT.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Data Table For ProjectileSpawner Component, Ability Owner: %s"), *GetOwner()->GetName());
	}


	if (const auto& DataTableInfo = ProjectileInfo_DT.GetRow<FProjectileInfo>(""))
	{
		UE_LOG(LogTemp, Display, TEXT("Found Data Row %s"), *this->GetName());
		ProjectileInfo = *DataTableInfo;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Row, For Damage Component, Ability Owner: %s"), *GetOwner()->GetName());
	}


	//set damage amount, as we are to obtain it from the weapon/actor
	const bool HasInterface = GetOwner()->GetClass()->ImplementsInterface(UInterface_Damage::StaticClass());
	if (HasInterface)
	{
		UDamageInfoComponent* DamageInfo = IInterface_Damage::Execute_RequestDamageComponent(GetOwner());
		if (DamageInfo)
		{
			ProjectileInfo.DamageAmount = DamageInfo->ReturnDamageAmount();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No DamageComponent"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Interface"));
	}
}

void UProjectileSpawnerComponent::SpawnProjectileFromPool()
{
	UE_LOG(LogTemp, Warning, TEXT("SpawnProjectileCalled"));

	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid World"));
		return;
	}
	if (!ProjectileTypeParams.ProjectileReference)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ProjectileReference"));
		return;
	}

	//might just want to set this once, if we ever need to switch this at runtime, we can make a custom function
	TransformArrayForSpawning.Empty();
	switch (ProjectileTypeParams.TransformType)
	{
	case EProjectileTransformType::ECS_Default:
		TransformForSpawning = ActorLineTrace();
		break;
	case EProjectileTransformType::ECS_Weapon:
		TransformForSpawning = WeaponLineTrace();
		break;
	case EProjectileTransformType::ECS_Actor:
		TransformForSpawning = ActorLineTrace();
		break;
	}

	switch (ProjectileTypeParams.ProjectilePattern)
	{
		case EProjectilePattern::ECS_Default:
			TransformArrayForSpawning.Add(TransformForSpawning);
			break;
		case EProjectilePattern::ECS_Triangle:
			TransformArrayForSpawning.Append(TrianglePattern(100));
			break;
		case EProjectilePattern::ECS_Circle:
			TransformArrayForSpawning.Append(CirclePatternSpawner(8, 100));
			break;
		case EProjectilePattern::ECS_CircleFacingTarget:
			TransformArrayForSpawning.Append(CircleFacingTargetPattern(8, 100));
			break;
	}
	
	
	UProjectilePoolSubsystem* ProjectilePoolSubsystem = GetWorld()->GetSubsystem<UProjectilePoolSubsystem>();
	for (const auto& Transform: TransformArrayForSpawning)
	{
		ProjectilePoolSubsystem->SpawnFromPool(ProjectileTypeParams.ProjectileReference, ProjectileInfo, Transform, false);
	}
	
	
}
