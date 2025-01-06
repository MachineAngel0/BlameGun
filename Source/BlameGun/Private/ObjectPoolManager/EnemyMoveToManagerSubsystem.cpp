// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolManager/EnemyMoveToManagerSubsystem.h"


#include "Enemy/Flying/FlyingComponent.h"
#include "Enemy/Flying/FlyToLocation.h"
#include "Enemy/Sniper/SniperTeleportComponent.h"
#include "Enemy/Sniper/SniperTeleportLocation.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UEnemyMoveToManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UEnemyMoveToManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UEnemyMoveToManagerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{

	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	return false;
}

void UEnemyMoveToManagerSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	
	TArray<AActor*> FlyToLocationsGatherer;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFlyToLocation::StaticClass(), FlyToLocationsGatherer);


	TArray<AActor*> SniperTeleportLocationsGatherer;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASniperTeleportLocation::StaticClass(), SniperTeleportLocationsGatherer);
	
	
	for (const auto& FlyToLocationActor:FlyToLocationsGatherer)
	{
		UE_LOG(LogTemp, Error, TEXT("The Actor's name is %s"), *FlyToLocationActor->GetName());
		AFlyToLocation* CastedFlyLocationActor = Cast<AFlyToLocation>(FlyToLocationActor);
		if (CastedFlyLocationActor->IsA(AFlyToLocation::StaticClass()))
		{
			UE_LOG(LogTemp, Error, TEXT("FlyTo Location: SHIT IS VALID"));
			FlyToLocationArray.Emplace(CastedFlyLocationActor);
		}
		
	}
	for (const auto& SniperTeleportLocationActor:SniperTeleportLocationsGatherer)
	{
		UE_LOG(LogTemp, Error, TEXT("The Sniper Location Actor's name is %s"), *SniperTeleportLocationActor->GetName());
		ASniperTeleportLocation* CastedSniperTeleportLocationActor = Cast<ASniperTeleportLocation>(SniperTeleportLocationActor);
		if (CastedSniperTeleportLocationActor->IsA(ASniperTeleportLocation::StaticClass()))
		{
			UE_LOG(LogTemp, Error, TEXT("Sniper Location: SHIT IS VALID"));
			SniperTeleportLocationArray.Emplace(CastedSniperTeleportLocationActor);
		}
		
	}

	
	
	
	if (FlyToLocationsGatherer.Num() <= 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Empty FlyToLocationsGatherer"));
		
	}
	
	if (SniperTeleportLocationsGatherer.Num() <= 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Empty SniperTeleportLocationsGathere"));
		
	}
	
}

FVector UEnemyMoveToManagerSubsystem::ReturnFlyToLocation(UFlyingComponent* FlyComponentReference)
{
	//get the actor, find the first available one within a certain range from itself and the player, return the location, get the location,
	//store the location of the last occupied one
	// if valid location found, then flip on current actor bool, 

	const int IndexCheck = UKismetMathLibrary::RandomIntegerInRange(0, FlyToLocationArray.Num()-1);

	AFlyToLocation* FlyToLocationToReturn = nullptr;


	//TODO: Find a location that is within range of the player
	
	

	if (!FlyToLocationArray[IndexCheck]->IsLocationOccupied)
	{
		FlyToLocationToReturn = FlyToLocationArray[IndexCheck];
	}
	else
	{
		ReturnFlyToLocation(FlyComponentReference);
	}
	
	/* finds first available
	for (const auto& FlyLocation:FlyToLocationArray)
	{
		if (!FlyLocation->IsLocationOccupied)
		{
			FlyToLocationToReturn = FlyLocation;
			break;
		}
		
	}
	*/
	
	
	// if we found one 
	if (FlyToLocationToReturn)
	{
		if (FlyComponentReference->CurrentOccupiedLocation)
		{
			FlyComponentReference->CurrentOccupiedLocation->IsLocationOccupied = false;
		}

		FlyToLocationToReturn->IsLocationOccupied = true;
		FlyComponentReference->CurrentOccupiedLocation = FlyToLocationToReturn;
			
		return FlyToLocationToReturn->GetActorLocation();
	}

	// if we don't find one, wheck if the current location is valid
	if (FlyComponentReference->CurrentOccupiedLocation)
	{
		return FlyComponentReference->CurrentOccupiedLocation->GetActorLocation();
	}
	//otherwise set to world origin
	return FVector::ZeroVector;

	
	

}

FVector UEnemyMoveToManagerSubsystem::ReturnSniperTeleportToLocation(USniperTeleportComponent* SniperTeleportComponent)
{
	//get the actor, find the first available one within a certain range from itself and the player, return the location, get the location,
	//store the location of the last occupied one
	// if valid location found, then flip on current actor bool, 

	const int IndexCheck = UKismetMathLibrary::RandomIntegerInRange(0, SniperTeleportLocationArray.Num()-1);

	ASniperTeleportLocation* SniperTeleportLocationToReturn = nullptr;


	//TODO: Find a location that is within range of the player
	
	

	if (!SniperTeleportLocationArray[IndexCheck]->IsLocationOccupied)
	{
		SniperTeleportLocationToReturn = SniperTeleportLocationArray[IndexCheck];
	}
	else
	{
		ReturnSniperTeleportToLocation(SniperTeleportComponent);
	}

	
	
	// if we found one 
	if (SniperTeleportLocationToReturn)
	{
		if (SniperTeleportComponent->CurrentOccupiedLocation)
		{
			SniperTeleportComponent->CurrentOccupiedLocation->IsLocationOccupied = false;
		}

		SniperTeleportLocationToReturn->IsLocationOccupied = true;
		SniperTeleportComponent->CurrentOccupiedLocation = SniperTeleportLocationToReturn;
			
		return SniperTeleportLocationToReturn->GetActorLocation();
	}

	// if we don't find one, wheck if the current location is valid
	if (SniperTeleportComponent->CurrentOccupiedLocation)
	{
		return SniperTeleportComponent->CurrentOccupiedLocation->GetActorLocation();
	}
	//otherwise set to world origin
	return FVector::ZeroVector;
}


