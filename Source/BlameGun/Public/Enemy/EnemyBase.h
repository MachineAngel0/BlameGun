// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "Interface_EnemyAI.h"
#include "BlameGun/Enums_Structs/Enum_Enemy.h"
#include "EnemyBase.generated.h"

//TODO: Update this
USTRUCT(BlueprintType)
struct FEnemyStruct: public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UBehaviorTree> BehaviorTree = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName NormalAttackSocket = "";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName SpecialAttackSocket = "";
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float AISightRange = 100.0f;

};

enum class EEnemyState : uint8;
class UBehaviorTree;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyStateChange, EEnemyState, EnemyState);

/**
 * Use if the enemy needs to have movement or character like movement
 */
UCLASS()
class BLAMEGUN_API AEnemyBase : public ACharacterBase, public IInterface_EnemyAI
{
	GENERATED_BODY()

	AEnemyBase();

	
public:

	virtual AEnemyBase* RequestEnemyBase_Implementation() override;
	virtual UBehaviorTree* RequestBehaviorTree_Implementation() override;
	virtual FVector RequestAttackSocketLocation_Implementation(EAttackSocketType AttackSocketType) override;
	

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable)
	FOnEnemyStateChange OnEnemyStateChange;

	UFUNCTION(BlueprintCallable)
	void SetEnemyState(const EEnemyState NewEnemyState);

	//interface for trigger volumes to decouple logic a bit
	virtual void SetEnemyStateInterface_Implementation(const EEnemyState EnemyStateToForward) override;
	
	UFUNCTION(BlueprintCallable)
	EEnemyState GetEnemyState() const;
	
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EEnemyState EnemyState = EEnemyState::ECS_Idle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBehaviorTree* BehaviorTree = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName NormalAttackSocket = "";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName SpecialAttackSocket = "";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float AISightRange = 100.0f;
};

