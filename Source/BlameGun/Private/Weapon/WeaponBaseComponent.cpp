// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBaseComponent.h"

#include "Weapon/Interface_Weapon.h"


// Sets default values for this component's properties
UWeaponBaseComponent::UWeaponBaseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponBaseComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeWeaponOwner();
	
}


// Called every frame
void UWeaponBaseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponBaseComponent::InitializeWeaponOwner()
{
	WeaponOwner = IInterface_Weapon::Execute_RequestWeapon(GetOwner());
	/* TODO: log this later
	if (WeaponOwner)
	{
		
	}
	*/	
	//maybe this would flip something off on the weapon like a bool that says, perform weapon attack on weapon start?
}



