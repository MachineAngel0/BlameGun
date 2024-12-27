// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"




class USphereComponent;

DECLARE_LOG_CATEGORY_EXTERN(ItemBase, Log, All);

UCLASS(Abstract, BlueprintType)
class BLAMEGUN_API AItemBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	
	UFUNCTION(BlueprintCallable)
	virtual void ItemOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
								  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
								  const FHitResult& SweepResult);


	UPROPERTY(EditAnywhere, blueprintReadWrite)
	USoundBase* PickUpSound = nullptr;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName = "";
	

	//note you dont need to return tobjectptr (only use tobjectptr for members), you can just use uspherecomponent* as a return type
	//TODO: set mesh to have its physics enabled, and to generate on hit events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USphereComponent> CollisionSphere = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Blueprintable, BlueprintType)
	TObjectPtr<UStaticMeshComponent> ItemMesh = nullptr;

	
};
