// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interface_SaveLoadData.generated.h"

class UMySaveGame;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UInterface_SaveLoadData : public UInterface
{
	GENERATED_BODY()
};

/**
 * this interface is to be used by actors that wish to save and load their data
 * Can be extended to save only certain things like only saving player data
 */
class BLAMEGUN_API IInterface_SaveLoadData
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// the function to be implemented by the actors that want to save the data they're holding
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemData")
	void SaveData(UMySaveGame* SaveGame);

	// the function to be implemented by the actors that want to load data from the save
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemData")
	void LoadData(UMySaveGame* SaveGame);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Blueprintable, Category="SaveSystemData")
	void SavePlayerData(UMySaveGame* SaveGame);
	
	

	
};

