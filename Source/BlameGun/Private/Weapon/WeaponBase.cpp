// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"
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
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::StartWeaponAttack()
{

}

void AWeaponBase::EndWeaponAttack()
{
	
}

AWeaponBase* AWeaponBase::RequestWeapon_Implementation()
{
	return this;
}

USkeletalMeshComponent* AWeaponBase::GetWeaponSkeletalMesh() const
{
	return WeaponSkeletalMesh;
}

