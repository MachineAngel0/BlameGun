// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface_SaveLoadData.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "MySaveGame.generated.h"


class AAbilityBase;
class AUnitBase;
/**
 *	The place where all save info variables are to be placed and accessed
 *	
 *  Note: you cant save actor references, only their class references, aka use TSubclassOf<AActor*>
 *  Note: make sure you are using this.getclass() if you are wanting to access a specific class in a map
 *  Note: Everything must have the Uproperty specifier if it is to be saved to file
 */
UCLASS()
class BLAMEGUN_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
	
public:
	
	
	
	void SaveAllData(TArray<AActor*> SavableObject);
	void LoadDataForRequester(AActor* Requester);
	void SavePlayerData(TArray<AActor*> SavableObject);

	UPROPERTY()
	int CoinsAccumulatedByMainCharacter;

	UPROPERTY()
	float CharacterHealth;
	
};
