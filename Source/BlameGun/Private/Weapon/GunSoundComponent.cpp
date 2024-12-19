// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/GunSoundComponent.h"


void UGunSoundComponent::PlayFireSound()
{
	FireSoundAudioComponent = PlaySound(FireSound);
}

void UGunSoundComponent::StopFireSound()
{
	StopSound(FireSoundAudioComponent);
}
