// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Gun/GunBase.h"

#include "CharacterBase.h"
#include "Character/Interface_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Weapon/GunSoundComponent.h"
#include "Weapon/Gun/FireRate/FireRateComponent.h"
#include "Weapon/Shared/ProjectileSpawnerComponent.h"


// Sets default values
AGunBase::AGunBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponBaseType = EWeaponBaseType::ECS_Gun;
}

// Called when the game starts or when spawned
void AGunBase::BeginPlay()
{
	Super::BeginPlay();
	//TArray<UFireRateComponent> FireRateComponents = GetComponents<UFireRateComponent>();

	FireRateComponent = GetComponentByClass<UFireRateComponent>();
	if (FireRateComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("FireRateComponent: %s"), *FireRateComponent->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid FireRateComponent"));
	}
	
	ProjectileSpawnerComponent = GetComponentByClass<UProjectileSpawnerComponent>();
	if (ProjectileSpawnerComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("ProjectileComponent: %s"), *ProjectileSpawnerComponent->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ProjectileSpawner Component"));
	}

	GunSoundComponent  = GetComponentByClass<UGunSoundComponent>();
	if (ProjectileSpawnerComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("GunSoundComponent Is Valid: %s"), *GunSoundComponent->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid GunSoundComponent"));
	}
}

// Called every frame
void AGunBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGunBase::StartWeaponAttack()
{
	//call fire rate component
	//if true

	/*
	if (!FireRateComponent) return;
	if (!ProjectileSpawnerComponent) return;
	if (!GunSoundComponent) return;
	*/
	
	if (FireRateComponent->CanFireWeapon())
	{
		//play Firing Sound Audio and spawn projectile
		GunSoundComponent->StopFireSound();
		GunSoundComponent->PlayFireSound();
		ACharacterBase* PlayerCharacter = IInterface_Character::Execute_RequestCharacter(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		UE_LOG(LogTemp, Warning, TEXT("Hello %s"), *PlayerCharacter->GetName());
		PlayerCharacter->PlayCharacterAnimationMontage_Implementation(AttackMontage);
		
		ProjectileSpawnerComponent->SpawnProjectile();
	}
	
	
}

void AGunBase::EndWeaponAttack()
{
	FireRateComponent->ResetFireRate();
}

