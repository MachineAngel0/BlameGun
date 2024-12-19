// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "GunBase.generated.h"

class UGunSoundComponent;

UCLASS()
class BLAMEGUN_API AGunBase : public AWeaponBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGunBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UFireRateComponent* FireRateComponent = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UProjectileSpawnerComponent* ProjectileSpawnerComponent = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UGunSoundComponent* GunSoundComponent = nullptr;	
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void StartWeaponAttack() override;
	virtual void EndWeaponAttack() override;

	
	
};
