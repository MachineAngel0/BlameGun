// Fill out your copyright notice in the Description page of Project Settings.



#include "Weapon/FireRate/NormalShotComponent.h"

#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Weapon/WeaponBase.h"


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
	
	WeaponOwner->OnStartWeaponAttack.AddUniqueDynamic(this, &ThisClass::FireWeapon);
	WeaponOwner->OnEndWeaponAttack.AddUniqueDynamic(this, &ThisClass::ClearTimer);
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

void UNormalShotComponent::FireWeapon()
{
	if (CanFire)
	{
		PlayFireSound();
		WeaponOwner->PerformWeaponAttack();
		CanFire = false;
	}
	else
	{
		if (!GetWorld()->GetTimerManager().IsTimerActive(TimerHandle))
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UNormalShotComponent::SetCanFireToTrue, FireRateInterval);
		}
		
	}
}

void UNormalShotComponent::ClearTimer()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SetCanFireToTrue();
}

void UNormalShotComponent::PlayFireSound()
{
	if (!FireSound) return;
	AudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), FireSound);
}

void UNormalShotComponent::StopSound()
{
	if (AudioComponent && AudioComponent->IsPlaying())
	{
		AudioComponent->Stop();
	}
}






