// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "SaveLoadSystem/Interface_SaveLoadData.h"
#include "SaveLoadSystem/MySaveGame.h"


AMainCharacter::AMainCharacter()
{
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
	FPSCamera->SetupAttachment(GetRootComponent());
	CharacterSkeletalMeshComponent->AttachToComponent(FPSCamera, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	
}

void AMainCharacter::SaveData_Implementation(UMySaveGame* SaveGame)
{
	SaveGame->CoinsAccumulatedByMainCharacter = CoinsAmount;
}

void AMainCharacter::LoadData_Implementation(UMySaveGame* SaveGame)
{
	CoinsAmount = SaveGame->CoinsAccumulatedByMainCharacter;
}

void AMainCharacter::SetMainCharacterAnimState_Implementation(EMainCharacterAnimState AnimationState)
{
	CharacterAnimationState = AnimationState;
}

AMainCharacter* AMainCharacter::RequestMainCharacter_Implementation()
{
	return this;
}

void AMainCharacter::PickUpCoin_Implementation()
{
	CoinsAmount++;
	OnCoinPickUp.Broadcast(CoinsAmount);
}
