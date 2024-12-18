// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FireRateComponent.h"
#include "Components/ActorComponent.h"
#include "NormalShotComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLAMEGUN_API UNormalShotComponent : public UFireRateComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNormalShotComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	float FireRateInterval = 0.3f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool CanFire = true;
	UFUNCTION()
	void SetCanFireToTrue();
	
	UFUNCTION()
	void FireWeapon();
	
	//lesson learned, dont ever set the timermanager to anything unless i want to crash the engine
	FTimerHandle TimerHandle;
	FTimerDelegate TimerDelegate;

	UFUNCTION()
	void ClearTimer();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ContinousFire = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SingleFire = false;



	UPROPERTY()
	UAudioComponent* AudioComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* FireSound = nullptr;
	void PlayFireSound();
	void StopSound();
	
};
