#pragma once

UENUM(Blueprintable, BlueprintType)
enum class EEnemyState: uint8
{
	ECS_None,
	ECS_Idle,
	ECS_Pursuit,
	ECS_Attack,
	ECS_Attack_Chase,
	ECS_SpecialAttack,
	ECS_DeadRevivable,
	ECS_Dead,
};


UENUM(Blueprintable, BlueprintType)
enum class EAIGoals: uint8
{
	ECS_None,
	ECS_DefendSelf,
	ECS_DefendArea,
	ECS_NormalAttack,
	ECS_MoveTowardsPlayer,
	ECS_MoveTowardsPlayerAndAttack,
	ECS_SpecialAttack,
	ECS_Strafe,
};

UENUM(Blueprintable, BlueprintType)
enum class EAttackSocketType: uint8
{
	ECS_None,
	ECS_NormalAttack,
	ECS_SpecialAttack,
	
};
