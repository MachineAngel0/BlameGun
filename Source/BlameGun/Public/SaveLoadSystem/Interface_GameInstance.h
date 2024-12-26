// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interface_GameInstance.generated.h"

class UMyGameInstance;
class UMySaveGame;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_GameInstance : public UInterface
{
	GENERATED_BODY()
};

/**
 * this is to be used by anything that wishes to access the game instance.
 * Also used by the game mode to load the game from disk
 */
class BLAMEGUN_API IInterface_GameInstance
{
	GENERATED_BODY()


public:

	// returns the game instance, since GetGameInstance() only returns the default one
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
	UMyGameInstance* RequestMyGameInstance();
	// loads the game from disk
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
	void RequestGameDataToLoad(bool Async);
	// this is unnecessary, should never really be called
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
	void RequestGameToSaveToDisk(bool Async);
	
	// will return the save game, but should only be called after request game data to load has been called
	// otherwise it returns null
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
    UMySaveGame* RequestSaveGameReference();


	// will save everything
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
	void RequestSaveAll(bool Async);

	// function parameters can always be changed to a uobject type
	// then I would need to refactor the game instance and save data classes and have them cast to uobject
	
	// each actor must call this on begin play should they want their load info,
	// game instance informs save data, then save data gives the actor a ref of itself
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemRequest")
	void RequestLoad(AActor* Requester);


	// everything here is for specific saves types, there is no need to request a load for each specific instance
	// that is handled by request load, as its the actors responsibility to request their load data
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, BlueprintCallable, Category="SaveSystemRequest")
	void RequestSavePlayerData(bool Async);
	
	

	

	
};
