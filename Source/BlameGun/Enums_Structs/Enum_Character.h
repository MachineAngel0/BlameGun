#pragma once

UENUM(Blueprintable, BlueprintType)
enum class ECharacterMovementState: uint8
{
	ECS_None,
	ECS_Idle,
	ECS_Sliding,
	ECS_Grappling,
	ECS_Sprinting,
};

UENUM(Blueprintable, BlueprintType)
enum class EMainCharacterAnimState: uint8
{
	ECS_None,
	ECS_BlameGun,
	ECS_Freedom,
};