// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLoadSystem/MySaveGame.h"
#include "SaveLoadSystem/Interface_SaveLoadData.h"


void UMySaveGame::SaveAllData(TArray<AActor*> SavableObject)
{
	// might be able ot make it a reference
	for(const auto& Object: SavableObject)
	{
		IInterface_SaveLoadData::Execute_SaveData(Object, this);
	}
}

void UMySaveGame::LoadDataForRequester(AActor* Requester)
{
	IInterface_SaveLoadData::Execute_LoadData(Requester, this);
}

void UMySaveGame::SavePlayerData(TArray<AActor*> SavableObject)
{
	for(const auto& Object: SavableObject)
	{
		IInterface_SaveLoadData::Execute_SavePlayerData(Object, this);
	}
}





