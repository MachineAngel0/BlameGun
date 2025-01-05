#pragma once

UENUM(Blueprintable, BlueprintType)
enum class EEnemyState: uint8
{
	ECS_None,
	ECS_Idle,
	ECS_Pursuit,
	ECS_Attack,

	ECS_DeadRevivable,
	ECS_Dead,
};


UENUM(Blueprintable, BlueprintType)
enum class EAIGoals: uint8
{
	ECS_None,
	ECS_AttackPlayer,
	ECS_DefendSelf,
	ECS_DefendArea,
	ECS_UseSpecialAbility,
};

