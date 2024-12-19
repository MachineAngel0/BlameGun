// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SoundComponent.h"
#include "GunSoundComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BLAMEGUN_API UGunSoundComponent : public USoundComponent
{
	GENERATED_BODY()
	
public:


	//might want to make this an interface but idk
	
	UPROPERTY()
	UAudioComponent* FireSoundAudioComponent = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase* FireSound = nullptr;

	void PlayFireSound();
	void StopFireSound();
	
};
