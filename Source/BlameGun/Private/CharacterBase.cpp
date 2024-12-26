// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CharacterSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterSkeletalMesh"));
}


ACharacterBase* ACharacterBase::RequestCharacter_Implementation()
{
	return this;
}

void ACharacterBase::PlayCharacterAnimationMontage_Implementation(UAnimMontage* AnimMontage)
{
	if (!AnimMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Anim Montage Played on character"));
		return;
	}
		
	CharacterSkeletalMeshComponent->GetAnimInstance()->Montage_Play(AnimMontage);
}

USkeletalMeshComponent* ACharacterBase::GetCharacterMesh() const
{
	//return FindComponentByClass<USkeletalMeshComponent>();
	return CharacterSkeletalMeshComponent;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

