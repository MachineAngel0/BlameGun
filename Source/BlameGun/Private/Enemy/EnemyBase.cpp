// Fill out your copyright notice in the Description page of Project Settings.



#include "Enemy/EnemyBase.h"


AEnemyBase::AEnemyBase()
{
	
	
}

AEnemyBase* AEnemyBase::RequestEnemyBase_Implementation()
{
	return this;
}

UBehaviorTree* AEnemyBase::RequestBehaviorTree_Implementation()
{
	return BehaviorTree;
}

FVector AEnemyBase::RequestAttackSocketLocation_Implementation(EAttackSocketType AttackSocketType)
{

	if (AttackSocketType == EAttackSocketType::ECS_None)
	{
		UE_LOG(LogTemp, Warning, TEXT("INCORRECT: None Socket Type Chosen"));
		return FVector::ZeroVector;
	}
	if (AttackSocketType == EAttackSocketType::ECS_NormalAttack)
	{
		if (GetMesh()->DoesSocketExist(NormalAttackSocket))
		{
			UE_LOG(LogTemp, Warning, TEXT("Normal Attack Socket Found"));
			return GetMesh()->GetSocketLocation(NormalAttackSocket);
		}
	}
	if (AttackSocketType == EAttackSocketType::ECS_SpecialAttack)
	{
		if (GetMesh()->DoesSocketExist(SpecialAttackSocket))
		{
			UE_LOG(LogTemp, Warning, TEXT("Special Attack Socket Found"));
			return GetMesh()->GetSocketLocation(SpecialAttackSocket);
		}
	}

	
	UE_LOG(LogTemp, Warning, TEXT("No Socket Found For Enemy: %s"), *this->GetName());
	return FVector::ZeroVector;
}



void AEnemyBase::SetEnemyState(const EEnemyState NewEnemyState)
{
	// if already dead do nothing, if you want to revive use other enum DeadRevivable
	if (EnemyState == EEnemyState::ECS_Dead)
	{
		OnEnemyStateChange.Broadcast(EnemyState);
		return;
	}
	EnemyState = NewEnemyState;
	OnEnemyStateChange.Broadcast(EnemyState);
}

void AEnemyBase::SetEnemyStateInterface_Implementation(const EEnemyState EnemyStateToForward)
{
	SetEnemyState(EnemyStateToForward);
}

EEnemyState AEnemyBase::GetEnemyState() const
{
	return EnemyState;
}


