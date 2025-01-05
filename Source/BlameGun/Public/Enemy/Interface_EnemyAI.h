// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Interface_EnemyAI.generated.h"

enum class EEnemyState : uint8;
class UBehaviorTree;
class AAIController;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterface_EnemyAI : public UInterface
{
	GENERATED_BODY()
};

/**
 * every enemy will have a max of two attacks
 * a normal attack
 * and a special attack, which will be optional
 */
class BLAMEGUN_API IInterface_EnemyAI
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Attack();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SpecialAttack();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AAIController* ReturnAIController();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UBehaviorTree* RequestBehaviorTree();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEnemyStateInterface(const EEnemyState EnemyStateToForward);
	
};
