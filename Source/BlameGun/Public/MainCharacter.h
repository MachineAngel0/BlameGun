// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "BlameGun/Enums_Structs/Enum_Character.h"
#include "MainCharacter.generated.h"

enum class ECharacterMovementState : uint8;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class BLAMEGUN_API AMainCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	AMainCharacter();
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWeaponBase* CurrentWeapon = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FPSCamera = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementState CharacterMovementState = ECharacterMovementState::ECS_Idle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainCharacterAnimState CharacterAnimationState = EMainCharacterAnimState::ECS_None;

	virtual void SetMainCharacterAnimState_Implementation(EMainCharacterAnimState AnimationState) override;
	
	
};
