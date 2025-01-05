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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FireRateInterval = 0.3f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool CanFire = true;
	UFUNCTION()
	void SetCanFireToTrue();

	
	virtual bool CanFireWeapon() override;
	virtual void ResetFireRate() override;
	
	//lesson learned, dont ever set the timermanager to anything unless i want to crash the engine
	FTimerHandle TimerHandle;
	FTimerDelegate TimerDelegate;

	UFUNCTION()
	void ClearTimer();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ContinousFire = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SingleFire = false;



	
};
