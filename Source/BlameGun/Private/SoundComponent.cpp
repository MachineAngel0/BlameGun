// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
USoundComponent::USoundComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USoundComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USoundComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UAudioComponent* USoundComponent::PlaySound(USoundBase* SoundToPlay)
{
	if (!SoundToPlay) return nullptr;
	return UGameplayStatics::SpawnSound2D(GetWorld(), SoundToPlay);
}

void USoundComponent::StopSound(UAudioComponent* AudioComponentSoundToStop)
{
	if (AudioComponentSoundToStop && AudioComponentSoundToStop->IsPlaying())
	{
		AudioComponentSoundToStop->Stop();
	}
}

