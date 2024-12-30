// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

#include "DamageInfoComponent.h"
#include "Character/HealthComponent.h"


// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	DamageInfoComponent = CreateDefaultSubobject<UDamageInfoComponent>(TEXT("DamageComponent"));
	
	
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
		
	GetMesh()->GetAnimInstance()->Montage_Play(AnimMontage);
}

USkeletalMeshComponent* ACharacterBase::GetCharacterMesh() const
{
	//return FindComponentByClass<USkeletalMeshComponent>();
	return GetMesh();

	
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

UHealthComponent* ACharacterBase::RequestHealthComponent_Implementation()
{
	return HealthComponent;
}

UDamageInfoComponent* ACharacterBase::RequestDamageComponent_Implementation()
{
	return DamageInfoComponent;
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


void ACharacterBase::ProcessDamage_Implementation(float DamageAmount)
{
	HealthComponent->ProcessHealthChange(DamageAmount);
}

void ACharacterBase::DeathLogic_Implementation()
{
}

