// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileActor.h"

#include "Components/ActorComponent.h"
#include "Weapon/WeaponBaseComponent.h"
#include "ProjectileSpawnerComponent.generated.h"

struct FProjectileInfo;

UENUM(Blueprintable, BlueprintType)
enum class EProjectilePattern: uint8
{
	ECS_Default,
	ECS_Triangle,
	ECS_Circle,
	ECS_CircleFacingTarget,
};

UENUM(Blueprintable, BlueprintType)
enum class EProjectileTransformType: uint8
{
	ECS_Default,
	ECS_Weapon,
	ECS_Actor,
};

USTRUCT(BlueprintType)
struct FProjectileTypeParams: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AProjectileActor> ProjectileReference = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectilePattern ProjectilePattern = EProjectilePattern::ECS_Default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileTransformType TransformType = EProjectileTransformType::ECS_Default;


};


class AProjectileActor;

/*
 * This class is responsible for holding onto the type of projectile that we will be spawning in for the gun
 * Can be accessed and changed during runtime or in the editor to determine the type of projectile that will be used
 */

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class BLAMEGUN_API UProjectileSpawnerComponent : public UWeaponBaseComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UProjectileSpawnerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	

	//info about the type of projectile we wish to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(RowType = "ProjectileTypeParams"))
	FDataTableRowHandle ProjectileType_DT;
	UPROPERTY()
	FProjectileTypeParams ProjectileTypeParams;
	UFUNCTION()
	void ReadProjectileTypeDataTable();
	
	
	//info about the projectiles params
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(RowType = "ProjectileInfo"))
	FDataTableRowHandle ProjectileInfo_DT;
	//set by the data table
	UPROPERTY()
	FProjectileInfo ProjectileInfo;
	UFUNCTION()
	void ReadProjectileInfoDataTable();

	
	UFUNCTION(BlueprintCallable)
	void SpawnProjectileFromPool();

	//transforms for spawning the projectiles
	UPROPERTY()
	FTransform TransformForSpawning;
	UPROPERTY()
	TArray<FTransform> TransformArrayForSpawning;
	
	UFUNCTION(Blueprintable, BlueprintImplementableEvent)
	FTransform WeaponLineTrace();

	UFUNCTION(Blueprintable, BlueprintImplementableEvent)
	FTransform ActorLineTrace();
	


	
	//Bullet Patterns, might move to a function library
	UFUNCTION(Blueprintable, BlueprintImplementableEvent, BlueprintCallable)
	TArray<FTransform> CirclePatternSpawner(int Quantity = 8, float Radius = 100.0f);

	UFUNCTION(Blueprintable, BlueprintImplementableEvent, BlueprintCallable)
	TArray<FTransform> CircleFacingTargetPattern(int Quantity = 4, float Radius = 100.0f);
	
	UFUNCTION(Blueprintable, BlueprintImplementableEvent, BlueprintCallable)
	TArray<FTransform> TrianglePattern(float Distance = 100.0f);

};
