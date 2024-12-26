#pragma once

UENUM(Blueprintable)
enum class ECharacterMovementState: uint8
{
	ECS_None,
	ECS_Idle,
	ECS_Sliding,
	ECS_Grappling,
	ECS_Sprinting,
};

UENUM(Blueprintable)
enum class EMainCharacterAnimState: uint8
{
	ECS_None,
	ECS_BlameGun,
	ECS_Freedom,
};