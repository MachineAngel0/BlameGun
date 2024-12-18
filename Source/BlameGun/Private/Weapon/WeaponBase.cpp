// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"

#include "Weapon/ProjectileSpawnerComponent.h"
#include "Weapon/FireRate/FireRateComponent.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	WeaponSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	//TArray<UFireRateComponent> FireRateComponents = GetComponents<UFireRateComponent>();
	TArray<UFireRateComponent*> FireRateComponents;
	GetComponents(FireRateComponents);
	for (const auto& FireRate : FireRateComponents)
	{
		UE_LOG(LogTemp, Warning, TEXT("FireRateComponent: %s"), *FireRate->GetName());
	}
	
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AWeaponBase* AWeaponBase::RequestWeapon_Implementation()
{
	return this;
}

UProjectileSpawnerComponent* AWeaponBase::RequestProjectileComponent_Implementation()
{
	return FindComponentByClass<UProjectileSpawnerComponent>();
}

USkeletalMeshComponent* AWeaponBase::GetWeaponSkeletalMesh() const
{
	return WeaponSkeletalMesh;
}



void AWeaponBase::StartWeaponAttack()
{
	OnStartWeaponAttack.Broadcast();
}



void AWeaponBase::PerformWeaponAttack()
{
	OnPerformWeaponAttack.Broadcast();
	EndWeaponAttack();
}

void AWeaponBase::EndWeaponAttack()
{
	OnEndWeaponAttack.Broadcast();
}

