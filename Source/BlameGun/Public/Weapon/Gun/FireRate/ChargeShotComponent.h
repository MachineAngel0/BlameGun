// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FireRateComponent.h"
#include "Components/ActorComponent.h"
#include "ChargeShotComponent.generated.h"



class AWeaponBase;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLAMEGUN_API UChargeShotComponent : public UFireRateComponent

{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UChargeShotComponent();

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//when we are allowed to fire our weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChargeUpDuration = 3.0f;

	// how fast current charge up time, charges
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChargeRate = 1.0f;

	// our timer which gets added to and reset
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentChargeUpTime = 0.0f;

	
	bool ChargeShot = false;
	
	void SetChargeShot(const bool ChargeShotOrNah);


	virtual bool CanFireWeapon() override;
	virtual void ResetFireRate() override;

	
	UFUNCTION()
	void StartCharge();
	
	UFUNCTION()
	void EndCharge();


	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;
	
	
	void StopAudioComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* ChargeUpSound = nullptr;
	void PlayChargeUpSound();
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* CanceledChargeSound = nullptr;
	void PlayCanceledChargeSound();
	

	
	
};


