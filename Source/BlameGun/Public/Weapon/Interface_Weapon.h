// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Interface_Weapon.generated.h"

class UProjectileSpawnerComponent;
class AWeaponBase;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_Weapon : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLAMEGUN_API IInterface_Weapon
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AWeaponBase* RequestWeapon();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	UProjectileSpawnerComponent* RequestProjectileComponent();
};
