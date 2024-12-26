// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/ItemBase.h"

#include "MainCharacter.h"
#include "Character/Interface_Character.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"


DEFINE_LOG_CATEGORY(ItemBase);

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("USphereComponent"));
	RootComponent = CollisionSphere;

	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	ItemMesh->SetupAttachment(ItemMesh);

	ItemName = "Coins";	

}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	// Create Delegate and reference the function we created earlier, to call when overlapped
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::ItemOverlapEvent);
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}





void AItemBase::ItemOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMainCharacter* GiveToMainCharacter = IInterface_Character::Execute_RequestMainCharacter(OtherActor);

	if (!GiveToMainCharacter)
	{
		UE_LOG(ItemBase, Error, TEXT("Inventory Component not found"));
		return;
	}

	IInterface_Character::Execute_PickUpCoin(GiveToMainCharacter);
	
	
	if (PickUpSound)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), PickUpSound);
	}
	else
	{
		UE_LOG(ItemBase, Error, TEXT("Invalid Pickup sound for itembase "));
	}

	Destroy();
	
}




