// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Gun/FireRate/FireRateComponent.h"


void UFireRateComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UFireRateComponent::CanFireWeapon()
{
	return false;
}

void UFireRateComponent::ResetFireRate()
{
}
