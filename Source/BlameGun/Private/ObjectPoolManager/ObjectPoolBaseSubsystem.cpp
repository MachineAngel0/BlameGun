// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolManager/ObjectPoolBaseSubsystem.h"

#include "ObjectPoolManager/Interface_ObjectPool.h"
#include "Weapon/Shared/ProjectileActor.h"


void UObjectPoolBaseSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

}

void UObjectPoolBaseSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool UObjectPoolBaseSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	
	if (this->GetClass()->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer))
	{
		return true;
	}
	return false;
	
}

void UObjectPoolBaseSubsystem::InstantiatePool()
{
}



void UObjectPoolBaseSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	InstantiatePool();
}






