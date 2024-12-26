// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SprintComponent.h"

#include "CharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values for this component's properties
USprintComponent::USprintComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USprintComponent::BeginPlay()
{
	Super::BeginPlay();
	CharacterOwner = IInterface_Character::Execute_RequestCharacter(GetOwner());
	
	
}


// Called every frame
void USprintComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USprintComponent::StartSprint(float SprintSpeed)
{
	CharacterOwner->GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void USprintComponent::EndSprint(float WalkSpeed)
{
	CharacterOwner->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}


