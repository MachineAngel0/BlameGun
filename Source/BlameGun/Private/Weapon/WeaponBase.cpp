// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"

#include "DamageInfoComponent.h"
// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WeaponSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	AttachRules = {AttachmentLocationRule, AttachmentRotationRule, AttachmentScaleRule, ShouldWeldBodies};

	WeaponSkeletalMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;

	
	DamageInfoComponent = CreateDefaultSubobject<UDamageInfoComponent>(TEXT("DamageInfo"));		

	
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

void AWeaponBase::SetScaleOnAttach()
{
	this->SetActorRelativeScale3D(InitialScale);
	this->SetActorScale3D(InitialScale);
}

AWeaponBase* AWeaponBase::RequestWeapon_Implementation()
{
	return this;
}

USkeletalMeshComponent* AWeaponBase::GetWeaponSkeletalMesh() const
{
	return WeaponSkeletalMesh;
}

