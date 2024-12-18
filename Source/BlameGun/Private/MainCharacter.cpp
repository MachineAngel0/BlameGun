// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "MovieSceneTracksComponentTypes.h"
#include "Camera/CameraComponent.h"


AMainCharacter::AMainCharacter()
{
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
	FPSCamera->SetupAttachment(GetRootComponent());
	CharacterSkeletalMeshComponent->AttachToComponent(FPSCamera, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();


}
