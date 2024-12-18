// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquipWeaponComponent.generated.h"


class ACharacterBase;
class AWeaponBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLAMEGUN_API UEquipWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEquipWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	ACharacterBase* CharacterOwner = nullptr; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWeaponBase* CurrentWeapon = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AWeaponBase*> WeaponWheel;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AWeaponBase>> WeaponWheelSpawner;

	
	int WeaponSlotIndex = 0;

	UFUNCTION(BlueprintCallable)
	void SwitchToNextWeaponIncrement();
	UFUNCTION(BlueprintCallable)
	void SwitchToNextWeaponDecrement();
	UFUNCTION(BlueprintCallable)
	void SwitchToWeaponNumber(int WeaponNumber);
};
