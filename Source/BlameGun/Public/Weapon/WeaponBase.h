// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface_Weapon.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UProjectileSpawnerComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartWeaponAttack);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPerformWeaponAttack);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndWeaponAttack);

UCLASS(Abstract)
class BLAMEGUN_API AWeaponBase : public AActor, public IInterface_Weapon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	UPROPERTY(EditAnywhere, BlueprintCallable, BlueprintReadWrite, BlueprintAssignable)
	FOnStartWeaponAttack OnStartWeaponAttack;
	UPROPERTY(EditAnywhere, BlueprintCallable, BlueprintReadWrite, BlueprintAssignable)
	FOnPerformWeaponAttack OnPerformWeaponAttack;
	UPROPERTY(EditAnywhere, BlueprintCallable, BlueprintReadWrite, BlueprintAssignable)
	FOnEndWeaponAttack OnEndWeaponAttack;


	virtual AWeaponBase* RequestWeapon_Implementation() override;
	virtual UProjectileSpawnerComponent* RequestProjectileComponent_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* WeaponSkeletalMesh;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	USkeletalMeshComponent* GetWeaponSkeletalMesh() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipSocket = "GripPoint";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProjectileSocket = "Ammo";
	//TODO: AnimStateToSetTo, when i get the model in the game
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	// we broadcast this event for any components that might want to do something (see ChargedShotComponent) 
	UFUNCTION(BlueprintCallable)
	virtual void StartWeaponAttack();
	// a component will call this after startweapon attack, (see ProjectileSpawnerComponent)
	// which will cause the weapon to fire a bullet or attack based on the type of component binded to this function
	
	
	UFUNCTION(BlueprintCallable)
	virtual void PerformWeaponAttack();
	// this will reset any component related things when either the trigger is let go or perform attack is called, (see ChargedShotComponent) 
	UFUNCTION(BlueprintCallable)
	virtual void EndWeaponAttack();
	
};
