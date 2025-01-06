// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Sniper/SniperTeleportLocation.h"


// Sets default values
ASniperTeleportLocation::ASniperTeleportLocation()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASniperTeleportLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASniperTeleportLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

