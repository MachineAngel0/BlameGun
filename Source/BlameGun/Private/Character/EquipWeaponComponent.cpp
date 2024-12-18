// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EquipWeaponComponent.h"

#include "CharacterBase.h"
#include "Character/Interface_Character.h"
#include "Weapon/WeaponBase.h"


// Sets default values for this component's properties
UEquipWeaponComponent::UEquipWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEquipWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	CharacterOwner = IInterface_Character::Execute_RequestCharacter(GetOwner());
	if (!CharacterOwner)
		return;
	
	for (auto& Weapon: WeaponWheelSpawner)
	{
		AWeaponBase* SpawnedWeapon = GetWorld()->SpawnActor<AWeaponBase>(Weapon);
		WeaponWheel.Emplace(SpawnedWeapon);
		SpawnedWeapon->SetActorHiddenInGame(true);
	}
	
	if (WeaponWheel.IsValidIndex(0))
	{
		CurrentWeapon = WeaponWheel[0];
		CurrentWeapon->SetActorHiddenInGame(false);
		CurrentWeapon->AttachToComponent(CharacterOwner->GetCharacterMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->EquipSocket);
		IInterface_Character::Execute_SetAnimState(GetOwner());
		
	}
	
	
	
}


// Called every frame
void UEquipWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEquipWeaponComponent::SwitchToNextWeaponIncrement()
{
	WeaponSlotIndex++;
	UE_LOG(LogTemp, Warning, TEXT("Switching to next weapon new index: %d"), WeaponSlotIndex);
	if (WeaponSlotIndex >= WeaponWheel.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("WeaponSlot Index Overflow %d, Weapon wheel count: %d"), WeaponSlotIndex, WeaponWheel.Num());
		WeaponSlotIndex = 0;
	}
	SwitchToWeaponNumber(WeaponSlotIndex);
}

void UEquipWeaponComponent::SwitchToNextWeaponDecrement()
{
	WeaponSlotIndex--;
	UE_LOG(LogTemp, Warning, TEXT("Decrement Switching to next weapon new index: %d"), WeaponSlotIndex);
	if (WeaponSlotIndex < 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("WeaponSlot Index below zero %d, Weapon wheel count: %d"), WeaponSlotIndex, WeaponWheel.Num());
		WeaponSlotIndex = WeaponWheel.Num()-1;
	}
	SwitchToWeaponNumber(WeaponSlotIndex);
}

void UEquipWeaponComponent::SwitchToWeaponNumber(const int WeaponNumber)
{
	if (WeaponWheel.IsValidIndex(WeaponNumber))
	{
		//hide and remove the old weapon
		CurrentWeapon->SetActorHiddenInGame(true);
		CurrentWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		//set the new weapon
		CurrentWeapon = WeaponWheel[WeaponNumber];
		CurrentWeapon->SetActorHiddenInGame(false);
		CurrentWeapon->AttachToComponent(CharacterOwner->GetCharacterMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, CurrentWeapon->EquipSocket);
		IInterface_Character::Execute_SetAnimState(GetOwner());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Weapon Number"));
	}
}

