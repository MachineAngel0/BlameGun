// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolManager/FlyingManagerSubsystem.h"

#include "Enemy/FlyToLocation.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetArrayLibrary.h"

void UFlyingManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UFlyingManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UFlyingManagerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{

	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	return false;
}

void UFlyingManagerSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	
	TArray<AActor*> Locations;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFlyToLocation::StaticClass(), Locations);
	
	
	for (const auto& Bob:Locations)
	{
		UE_LOG(LogTemp, Error, TEXT("The Actor's name is %s"), *Bob->GetName());
		AFlyToLocation* CastedFlyLocationActor = Cast<AFlyToLocation>(Bob);
		if (CastedFlyLocationActor->IsA(AFlyToLocation::StaticClass()))
		{
			UE_LOG(LogTemp, Error, TEXT("SHIT IS VALID"));
			FlyToLocationArray.Emplace(CastedFlyLocationActor);
		}
		
	}
	if (Locations.Num() <= 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Empty BITCH"));
		
	}
	
}

FVector UFlyingManagerSubsystem::ReturnFlyToLocation(UFlyingComponent* FlyingComponentReference)
{
	//get the actor, find the first available one within a certain range from itself and the player, return the location, get the location,
	// if valid location found, then flip off current actor bool, 

	int RandIndex = FMath::RandRange(0, FlyToLocationArray.Num() - 1);


	
	FlyToLocationArray[RandIndex]->GetActorLocation();
	
	return FlyToLocationArray[RandIndex]->GetActorLocation();
}


