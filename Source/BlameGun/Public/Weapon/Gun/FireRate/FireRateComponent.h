// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBaseComponent.h"
#include "FireRateComponent.generated.h"

/**
 * 
 */
UCLASS()
class BLAMEGUN_API UFireRateComponent : public UWeaponBaseComponent
{
	GENERATED_BODY()
	
	
public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	virtual  bool CanFireWeapon();
    UFUNCTION(BlueprintCallable)
    virtual void ResetFireRate();
	
	
};
