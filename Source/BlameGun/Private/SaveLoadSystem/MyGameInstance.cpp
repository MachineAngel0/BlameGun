// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLoadSystem/MyGameInstance.h"

DEFINE_LOG_CATEGORY(Log_GameInstance);

UMyGameInstance* UMyGameInstance::RequestMyGameInstance_Implementation()
{
	return this;
}

void UMyGameInstance::RequestGameDataToLoad_Implementation(bool Async)
{
	LoadGame(Async);
}

void UMyGameInstance::RequestGameToSaveToDisk_Implementation(bool Async)
{
	SaveGame(Async);
}

UMySaveGame* UMyGameInstance::RequestSaveGameReference_Implementation()
{
	return SaveGameReference;
}



void UMyGameInstance::RequestSaveAll_Implementation(bool Async)
{
	
	TArray<AActor*> ActorsWithInterface;
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UInterface_SaveLoadData::StaticClass(), ActorsWithInterface);
	// will tell all classes with the interface to give their info to the save game
	SaveGameReference->SaveAllData(ActorsWithInterface);
	// save to disk
	SaveGame(Async);
}

void UMyGameInstance::RequestSavePlayerData_Implementation(bool Async)
{
	TArray<AActor*> ActorsWithInterface;
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UInterface_SaveLoadData::StaticClass(), ActorsWithInterface);
	// will tell all classes with the interface to give their info to the save game
	SaveGameReference->SavePlayerData(ActorsWithInterface);
	// save to disk
	SaveGame(Async);
}

void UMyGameInstance::RequestLoad_Implementation(AActor* Requester)
{
	
	// will forward the request to the save game
	SaveGameReference->LoadDataForRequester(Requester);
}

void UMyGameInstance::CreateSaveGame()
{
	UE_LOG(Log_GameInstance, Display, TEXT("Creating SaveGame!"));
	SaveGameReference = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass()));
	//might want to do other things like open a map or I might leave that to the ui to do
	// and possible create data like the units the character will start with
	CreateNewSaveGameData();
	
	UGameplayStatics::SaveGameToSlot(SaveGameReference, TempSlotName, TempUserIndex);
}



bool UMyGameInstance::CheckIfSaveGameExists()
{
	if(UGameplayStatics::DoesSaveGameExist(TempSlotName, TempUserIndex))
	{
		UE_LOG(Log_GameInstance, Display, TEXT("Save Exists!"));
		return true;
	}
	
	UE_LOG(Log_GameInstance, Error, TEXT("Save Doesn't Exists!!!!!"));
	return false;
	
}




void UMyGameInstance::SaveGame(bool Async)
{
	if(CheckIfSaveGameExists())
	{
		if(Async)
        {
        	UGameplayStatics::AsyncSaveGameToSlot(SaveGameReference, TempSlotName, TempUserIndex);
        	UE_LOG(Log_GameInstance, Display, TEXT("Game Saved, Async true"));
        }
        else
        {
        	UGameplayStatics::SaveGameToSlot(SaveGameReference, TempSlotName, TempUserIndex);
        	UE_LOG(Log_GameInstance, Display, TEXT("Game Saved, Async false"));
        }
		GameSaved.Broadcast(SaveGameReference);
	}
	else
	{
		UE_LOG(Log_GameInstance, Error, TEXT("Failed To Save, creating a new save"));
		CreateSaveGame();
	}
	
}

void UMyGameInstance::LoadGame(bool Async)
{
	if(CheckIfSaveGameExists())
	{
		
		if(Async)
		{
			//Todo: blueprint async load function
			// save game ref is set by the function
			LoadGameAsync(TempSlotName);
			UE_LOG(Log_GameInstance, Display, TEXT("Game Loaded, Async True"));
			// the game load call is done within the load game async function, cause otherwise it returns a null save game
		}
		else
		{
			SaveGameReference = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot(TempSlotName, TempUserIndex));
			UE_LOG(Log_GameInstance, Display, TEXT("Game Loaded, Async false"));
			GameLoaded.Broadcast(SaveGameReference);
		}
	}
	else
	{
		UE_LOG(Log_GameInstance, Display, TEXT("Failed To Load Game, Save Doesn't Exist"));
		CreateSaveGame();
		GameLoaded.Broadcast(SaveGameReference);
	}
}


