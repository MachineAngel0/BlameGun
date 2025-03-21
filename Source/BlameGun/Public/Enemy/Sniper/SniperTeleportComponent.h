﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SniperTeleportComponent.generated.h"


class ASniperTeleportLocation;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class BLAMEGUN_API USniperTeleportComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USniperTeleportComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AActor* Owner = nullptr;

	

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ASniperTeleportLocation* CurrentOccupiedLocation = nullptr;
};
