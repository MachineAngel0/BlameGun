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


