// Fill out your copyright notice in the Description page of Project Settings.

#pragma once




#include "CoreMinimal.h"
#include "Interface_GameInstance.h"
#include "MySaveGame.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.generated.h"
/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(Log_GameInstance, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameSaved, UMySaveGame*, SaveGameRef);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameLoaded, UMySaveGame*, SaveGameRef);

UCLASS()
class BLAMEGUN_API UMyGameInstance : public UGameInstance, public IInterface_GameInstance
{
	GENERATED_BODY()

	
public:
	
	/* delegates */
	UPROPERTY(BlueprintCallable, BlueprintAssignable, BlueprintReadWrite)
	FGameSaved GameSaved;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, BlueprintReadWrite)
	FGameLoaded GameLoaded;
	
	/* interfaces */
	// Game Instance Related
	virtual UMyGameInstance* RequestMyGameInstance_Implementation() override;

	// this must be called by the GameMode's begin play, or else no save file will be loaded
	// also would be ideal to bind to game loaded before this is called, so that we can proceed after the game has properly loaded
	virtual void RequestGameDataToLoad_Implementation(bool Async) override;
	// this ideally never gets manually called
	virtual void RequestGameToSaveToDisk_Implementation(bool Async) override;

	// Save and load Data Related
	virtual UMySaveGame* RequestSaveGameReference_Implementation() override;


	// Actor will request this from the game instance, it will then tell the save game to load their data for them
	virtual void RequestLoad_Implementation(AActor* Requester) override;

	virtual void RequestSaveAll_Implementation(bool Async) override;

	virtual void RequestSavePlayerData_Implementation(bool Async) override;
	
	
	
	/* Save and Load Functionality */
	UFUNCTION(BlueprintCallable)
	void CreateSaveGame();

	//TODO: make the 4 default characters and their abilties
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void CreateNewSaveGameData();
	
	

	// saves game to memory/disc
	UFUNCTION(BlueprintCallable)
	void SaveGame(bool Async);
	// loads from memory/disc, currently I haven't figure out how to async load, might just need to move it to blueprints
	UFUNCTION(BlueprintCallable)
	void LoadGame(bool Async);

	//helper function
	UFUNCTION(BlueprintCallable)
	bool CheckIfSaveGameExists();

	
	/* Variables */
	//TODO: Multiple save slots
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMySaveGame* SaveGameReference;
	
	FString TempSlotName = "SlotOne";
	int32 TempUserIndex = 0;

	//might just want to increment a save number and add it to a map or something each time I save, basically making infinite saves
	UPROPERTY(BlueprintReadWrite, Blueprintable)
	TArray<FString> SaveGameSlots{"Slot1", "Slot2", "Slot3", "Slot4", "Slot5", "Slot6", "Slot7", "Slot8", "Slot9", "Slot10"};
	

	// 
	UFUNCTION(BlueprintImplementableEvent)
	void LoadGameAsync(const FString& SlotName);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	AActor* SpawnActor(TSubclassOf<AActor> ActorToSpawn);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	TArray<AActor*> SpawnMultipleActors(const TArray<TSubclassOf<AActor>>& ActorListToSpawn);

};
