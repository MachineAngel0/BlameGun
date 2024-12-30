// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface_Damage.h"
#include "Character/Interface_Character.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

class UHealthComponent;
class AWeaponBase;



UCLASS()
class BLAMEGUN_API ACharacterBase : public ACharacter, public IInterface_Character, public IInterface_Damage
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

	
	virtual ACharacterBase* RequestCharacter_Implementation() override;
	virtual void PlayCharacterAnimationMontage_Implementation(UAnimMontage* AnimMontage) override;

	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	USkeletalMeshComponent* GetCharacterMesh() const;

	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UHealthComponent> HealthComponent = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDamageInfoComponent> DamageInfoComponent = nullptr;

	virtual UHealthComponent* RequestHealthComponent_Implementation() override;
	virtual UDamageInfoComponent* RequestDamageComponent_Implementation() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void ProcessDamage_Implementation(float DamageAmount) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeathLogic();
		
};


