// Fill out your copyright notice in the Description page of Project Settings.



#include "Weapon/Gun/FireRate/NormalShotComponent.h"


// Sets default values for this component's properties
UNormalShotComponent::UNormalShotComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNormalShotComponent::BeginPlay()
{
	Super::BeginPlay();
	
	
}


// Called every frame
void UNormalShotComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UNormalShotComponent::SetCanFireToTrue()
{
	CanFire = true;
}



bool UNormalShotComponent::CanFireWeapon()
{
	if (CanFire)
	{
		
		CanFire = false;
		return true;
	}
	
	if (!GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UNormalShotComponent::SetCanFireToTrue, FireRateInterval);
	}
	return false;
	
}

void UNormalShotComponent::ResetFireRate()
{
	ClearTimer();
}

void UNormalShotComponent::ClearTimer()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SetCanFireToTrue();
}






