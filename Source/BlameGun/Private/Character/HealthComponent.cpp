// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/HealthComponent.h"


DEFINE_LOG_CATEGORY(Log_HealthComponent);

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	OnHealthChanged.Broadcast(GetHealthPercent());
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UHealthComponent::ProcessHealthChange(float HealthChangeAmount)
{
	if (!CanBeDamaged)
	{
		UE_LOG(Log_HealthComponent, Display, TEXT("Target Cannot Be Damaged"), CurrentHealth);
		return;
	}
	UE_LOG(Log_HealthComponent, Display, TEXT("Health Before Damage: %f"), CurrentHealth);
	UE_LOG(Log_HealthComponent, Display, TEXT("DamageAmount: %f"), HealthChangeAmount);
	
	CurrentHealth -= HealthChangeAmount;
	UE_LOG(Log_HealthComponent, Display, TEXT("Health After Damage: %f"), CurrentHealth);

	OnHealthChanged.Broadcast(GetHealthPercent());
	DeathCheck();
}

void UHealthComponent::DeathCheck() const
{
	if (CurrentHealth <= 0)
	{
		OnDeath.Broadcast();
		return;
	}

}



float UHealthComponent::GetHealthPercent()
{
	return CurrentHealth/MaxHealth;
	
}



