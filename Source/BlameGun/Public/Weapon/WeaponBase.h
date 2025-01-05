// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface_Damage.h"
#include "BlameGun/Enums_Structs/Enum_Weapons.h"
#include "GameFramework/Actor.h"
#include "Interface_Weapon.h"
#include "BlameGun/Enums_Structs/Enum_Character.h"
#include "WeaponBase.generated.h"

class UDamageInfoComponent;
enum class EWeaponBaseType : uint8;
class UFireRateComponent;
class UProjectileSpawnerComponent;


UCLASS(Abstract)
class BLAMEGUN_API AWeaponBase : public AActor, public IInterface_Weapon, public IInterface_Damage
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();
	

	virtual AWeaponBase* RequestWeapon_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDamageInfoComponent* DamageInfoComponent = nullptr;
	virtual UDamageInfoComponent* RequestDamageComponent_Implementation() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* WeaponSkeletalMesh;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	USkeletalMeshComponent* GetWeaponSkeletalMesh() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipSocket = "GripPoint";

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentLocationRule = EAttachmentRule::SnapToTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentRotationRule = EAttachmentRule::SnapToTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentScaleRule = EAttachmentRule::KeepWorld;
	bool ShouldWeldBodies = false;
	FAttachmentTransformRules AttachRules = {AttachmentLocationRule, AttachmentRotationRule, AttachmentScaleRule, ShouldWeldBodies}; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProjectileSocket = "Ammo";
	//TODO: AnimStateToSetTo, when i get the model in the game
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	EWeaponBaseType WeaponBaseType = EWeaponBaseType::ECS_None; 	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	UFUNCTION(BlueprintCallable)
	virtual void StartWeaponAttack();
	UFUNCTION(BlueprintCallable)
	virtual void EndWeaponAttack();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InitialScale = {1,1,1};
	UFUNCTION()
	void SetScaleOnAttach();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMainCharacterAnimState SetCharacterAnimationStateTo = EMainCharacterAnimState::ECS_None;
	
};
