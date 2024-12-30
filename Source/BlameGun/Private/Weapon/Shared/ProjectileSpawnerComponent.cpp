// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shared/ProjectileSpawnerComponent.h"

#include "DamageInfoComponent.h"
#include "Interface_Damage.h"
#include "Character/Interface_Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Weapon/WeaponBase.h"
#include "Weapon/Shared/ProjectileActor.h"


// Sets default values for this component's properties
UProjectileSpawnerComponent::UProjectileSpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UProjectileSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UProjectileSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UProjectileSpawnerComponent::SpawnProjectile()
{

	UE_LOG(LogTemp, Warning, TEXT("SpawnProjectileCalled"));

	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid World"));
	}
	if (!ProjectileReference)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ProjectileReference"));
	}


	//AProjectileActor* ProjectileActor = GetWorld()->SpawnActor<AProjectileActor>(ProjectileReference, WeaponLineTrace());
	AProjectileActor* ProjectileActor = GetWorld()->SpawnActorDeferred<AProjectileActor>(ProjectileReference, WeaponLineTrace());
	ProjectileActor->WeaponOwner = this->WeaponOwner;
	ProjectileActor->DamageAmount = this->WeaponOwner->DamageInfoComponent->ReturnDamageAmount();
	UGameplayStatics::FinishSpawningActor(ProjectileActor, WeaponLineTrace());
		
	
	

	
}

void UProjectileSpawnerComponent::SpawnProjectileAtActorLocation()
{

	AProjectileActor* ProjectileActor = GetWorld()->SpawnActorDeferred<AProjectileActor>(ProjectileReference, ActorLineTrace());
	const bool HasInterface = GetOwner()->GetClass()->ImplementsInterface(UInterface_Damage::StaticClass());
	if (HasInterface)
	{
		UDamageInfoComponent* DamageInfo= IInterface_Damage::Execute_RequestDamageComponent(GetOwner());
		if (DamageInfo)
		{
			ProjectileActor->DamageAmount = DamageInfo->ReturnDamageAmount();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No DamageComponent"));
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Interface"));
	}
	UGameplayStatics::FinishSpawningActor(ProjectileActor, ActorLineTrace());
	
}

void UProjectileSpawnerComponent::SpawnProjectileAtLocation(FTransform Transform)
{
	AProjectileActor* ProjectileActor = GetWorld()->SpawnActorDeferred<AProjectileActor>(ProjectileReference, Transform);
	const bool HasInterface = GetOwner()->GetClass()->ImplementsInterface(UInterface_Damage::StaticClass());
	if (HasInterface)
	{
		UDamageInfoComponent* DamageInfo= IInterface_Damage::Execute_RequestDamageComponent(GetOwner());
		if (DamageInfo)
		{
			ProjectileActor->DamageAmount = DamageInfo->ReturnDamageAmount();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No DamageComponent"));
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Interface"));
	}
	UGameplayStatics::FinishSpawningActor(ProjectileActor, Transform);
}

