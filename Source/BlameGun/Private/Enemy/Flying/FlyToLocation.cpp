// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/Flying/FlyToLocation.h"


// Sets default values
AFlyToLocation::AFlyToLocation()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFlyToLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyToLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

