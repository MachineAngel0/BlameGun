// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/FireRate/ChargeShotComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Weapon/WeaponBase.h"






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
	WeaponOwner->OnStartWeaponAttack.AddDynamic(this, &ThisClass::StartCharge);
	WeaponOwner->OnEndWeaponAttack.AddDynamic(this, &ThisClass::EndCharge);
	
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
	
	if (CurrentChargeUpTime > ChargeUpDuration)
	{
		EndCharge();
		PlayFireSound();
		if (WeaponOwner)
		{
			WeaponOwner->PerformWeaponAttack();
		}
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

void UChargeShotComponent::EndCharge()
{
	// check if we are canceling the attack
	if(CurrentChargeUpTime < ChargeUpDuration)
	{
		//PlayCanceledChargeSound();
		StopAudioComponent();
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



void UChargeShotComponent::PlayFireSound()
{
	if (!FireSound) return;
	FireAudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), FireSound);
	//UGameplayStatics::PlaySound2D(GetWorld(), FireSound);
	UE_LOG(LogTemp, Warning, TEXT("Fire Sound Called"));
}




