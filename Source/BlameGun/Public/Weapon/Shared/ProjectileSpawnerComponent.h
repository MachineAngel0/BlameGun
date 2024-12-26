// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/ActorComponent.h"
#include "Weapon/WeaponBaseComponent.h"
#include "ProjectileSpawnerComponent.generated.h"


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


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AProjectileActor> ProjectileReference = nullptr;

	UFUNCTION(BlueprintCallable)
	virtual void SpawnProjectile();

	UFUNCTION(Blueprintable, BlueprintImplementableEvent)
	FTransform DoLineTrace();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProjectileOffset = FVector(100, 0, -10);

	
	
};
