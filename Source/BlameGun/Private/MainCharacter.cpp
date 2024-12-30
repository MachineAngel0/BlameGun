// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "Character/HealthComponent.h"
#include "SaveLoadSystem/Interface_SaveLoadData.h"
#include "SaveLoadSystem/MySaveGame.h"


AMainCharacter::AMainCharacter()
{
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
	FPSCamera->SetupAttachment(GetRootComponent());

	GetMesh()->SetupAttachment(FPSCamera);
	
	
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();


}

void AMainCharacter::SaveData_Implementation(UMySaveGame* SaveGame)
{
	SaveGame->CoinsAccumulatedByMainCharacter = CoinsAmount;
	SaveGame->CharacterHealth = HealthComponent->CurrentHealth;
}

void AMainCharacter::LoadData_Implementation(UMySaveGame* SaveGame)
{
	CoinsAmount = SaveGame->CoinsAccumulatedByMainCharacter;
	HealthComponent->CurrentHealth = SaveGame->CharacterHealth;
}

void AMainCharacter::SetMainCharacterAnimState_Implementation(EMainCharacterAnimState AnimationState)
{
	CharacterAnimationState = AnimationState;
}

AMainCharacter* AMainCharacter::RequestMainCharacter_Implementation()
{
	return this;
}


void AMainCharacter::ProcessDamage_Implementation(float DamageAmount)
{
	HealthComponent->ProcessHealthChange(DamageAmount);
}

void AMainCharacter::PickUpCoin_Implementation()
{
	CoinsAmount++;
	OnCoinPickUp.Broadcast(CoinsAmount);
}
