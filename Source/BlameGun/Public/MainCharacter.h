// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "BlameGun/Enums_Structs/Enum_Character.h"
#include "SaveLoadSystem/Interface_SaveLoadData.h"
#include "MainCharacter.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinPickUp, int, Coins);


enum class ECharacterMovementState : uint8;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class BLAMEGUN_API AMainCharacter : public ACharacterBase, public IInterface_SaveLoadData
{
	GENERATED_BODY()

public:
	AMainCharacter();
	virtual void BeginPlay() override;

	//save and load
	virtual void SaveData_Implementation(UMySaveGame* SaveGame) override;
	virtual void LoadData_Implementation(UMySaveGame* SaveGame) override;
	
	
	//scene components
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UCameraComponent> FPSCamera = nullptr;

	

	//Actor Components
	


	//interfaces
	virtual void SetMainCharacterAnimState_Implementation(EMainCharacterAnimState AnimationState) override;

	virtual AMainCharacter* RequestMainCharacter_Implementation() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementState CharacterMovementState = ECharacterMovementState::ECS_Idle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainCharacterAnimState CharacterAnimationState = EMainCharacterAnimState::ECS_None;

	virtual void ProcessDamage_Implementation(float DamageAmount) override;
	
	
	// bad practice but I don't have an involved inventory system so it's fine
	virtual void PickUpCoin_Implementation() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CoinsAmount = 0;
	UPROPERTY(Blueprintable, BlueprintAssignable)
	FOnCoinPickUp OnCoinPickUp;
	
	
};
