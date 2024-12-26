// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shared/ProjectileSpawnerComponent.h"

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
	
	GetWorld()->SpawnActor<AProjectileActor>(ProjectileReference, DoLineTrace());
	
	


	/*
	UE_LOG(LogTemp, Warning, TEXT("SpawnProjectileCalled"));

	WeaponOwner->ProjectileSocket;
	FVector SocketLocation = WeaponOwner->WeaponSkeletalMesh->GetSocketLocation(WeaponOwner->ProjectileSocket);
	UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	FRotator CameraRot =  UGameplayStatics::GetPlayerCameraManager(GetWorld(),0)->GetCameraRotation();

	FVector thing = CameraRot.RotateVector(ProjectileOffset);
	FVector otherthing = SocketLocation + thing;
	
	FVector Scale = FVector(1, 1, 1);
	FTransform SpawnTransform = FTransform(CameraRot, otherthing, Scale);

	
	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid World"));
	}
	if (!ProjectileReference)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid ProjectileReference"));
	}
	
	GetWorld()->SpawnActor<AProjectileActor>(ProjectileReference, SpawnTransform);
	
	*/
}

