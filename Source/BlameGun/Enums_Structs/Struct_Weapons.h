#pragma once

#include "CoreMinimal.h"
#include "Struct_Weapons.generated.h"

// this is here as an example on how to use
USTRUCT(BlueprintType, Blueprintable)
struct FWeaponInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorClassReference;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorReference = nullptr; // don't set this in the data table
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* SKMeshReference = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* SKMeshComponent = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;
	
};