// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageInfoComponent.h"


// Sets default values for this component's properties
UDamageInfoComponent::UDamageInfoComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDamageInfoComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDamageInfoComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UDamageInfoComponent::ReturnDamageAmount()
{
	return BaseDamage;
}

void UDamageInfoComponent::ReadDataTable()
{
	/*
	if (!DataTable.IsNull())
	{
		
		
		if (const auto DataTableInfo =DataTable.GetRow<FDamageComponentInfo>(""))
		{
			UE_LOG(LogTemp, Display, TEXT("Found Data Row %s"), *this->GetName());
			//set the damage values
			for (const auto& DamageInfo: DataTableInfo->DamageAmount)
			{
				DamageTypeToDamage.Emplace(DamageInfo.Key, DamageInfo.Value);
			}
			DamageStatusType = DataTableInfo->DamageStatusTypeInfo;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Invalid Row, For Damage Component, Ability Owner: %s"), *GetOwner()->GetName());
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid Data Table For Damage Component, Ability Owner: %s"), *GetOwner()->GetName());
	}
	*/
}