// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Gun/FireRate/ChargeShotComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"







// Sets default values for this component's properties
UChargeShotComponent::UChargeShotComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UChargeShotComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (!WeaponOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid weapon owner"));
	}
	
	
}


// Called every frame
void UChargeShotComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// if we are holding down the button we will increase a timer until we exceed the duration, in which we signal that we are to shoot


	
	if (ChargeShot == true)
	{
		CurrentChargeUpTime += ChargeRate * DeltaTime;
		UE_LOG(LogTemp, Warning, TEXT("ChargeComponent Time : %f"), CurrentChargeUpTime);
		
	}


}

void UChargeShotComponent::SetChargeShot(const bool ChargeShotOrNah)
{
	
	ChargeShot = ChargeShotOrNah;
	
	
}

void UChargeShotComponent::StartCharge()
{
	UE_LOG(LogTemp, Warning, TEXT("Start Charge Called"));
	if (ChargeShot == false)
	{
		ChargeShot = true;
		PlayChargeUpSound();
	}
	
	
}

bool UChargeShotComponent::CanFireWeapon()
{
	StartCharge();
	if (CurrentChargeUpTime > ChargeUpDuration)
	{
		EndCharge();
		return true;
	}
	return false;
}

void UChargeShotComponent::ResetFireRate()
{
	EndCharge();
}

void UChargeShotComponent::EndCharge()
{
	// check if we are canceling the attack
	//TODO: maybe a small delay after the gun had just fired
	if(CurrentChargeUpTime < ChargeUpDuration)
	{
		StopAudioComponent();
		PlayCanceledChargeSound();
	}
	ChargeShot = false;
	CurrentChargeUpTime = 0.0f;
	
}

void UChargeShotComponent::PlayChargeUpSound()
{
	if (!ChargeShot) return;
	StopAudioComponent();
	AudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), ChargeUpSound);
	
}

void UChargeShotComponent::StopAudioComponent()
{
	if (AudioComponent && AudioComponent->IsPlaying())
	{
		AudioComponent->Stop();
	}
}

void UChargeShotComponent::PlayCanceledChargeSound()
{
	if (!ChargeUpSound) return;
	StopAudioComponent();
	AudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), CanceledChargeSound);
}





