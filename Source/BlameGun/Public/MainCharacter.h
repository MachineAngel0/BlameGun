// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "MainCharacter.generated.h"

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
	
	
};
