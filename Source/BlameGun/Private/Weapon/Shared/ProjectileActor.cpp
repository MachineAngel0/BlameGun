// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shared/ProjectileActor.h"

#include "Interface_Damage.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"

DEFINE_LOG_CATEGORY(Log_ProjectileActor);

// Sets default values
AProjectileActor::AProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollisionComponent);
	
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(SphereCollisionComponent);

	SphereCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectileActor::OnProjectileBeginOverlap);

	NiagaraProjectile = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraProjectile"));
	NiagaraProjectile->SetupAttachment(SphereCollisionComponent);
	NiagaraProjectile->Deactivate();
}

// Called when the game starts or when spawned
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




void AProjectileActor::OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                                UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(Log_ProjectileActor, Display, TEXT("ProjectileActor Hit: %s"), *OtherActor->GetName());
	
	const bool HasInterface = OtherActor->GetClass()->ImplementsInterface(UInterface_Damage::StaticClass());
	if (HasInterface && DealDamage)
	{
		UE_LOG(Log_ProjectileActor, Display, TEXT("ProjectileActor Damage: %f"), DamageAmount);
		IInterface_Damage::Execute_ProcessDamage(OtherActor, DamageAmount);
		UE_LOG(Log_ProjectileActor, Display, TEXT("Damage Applied"));
	}
	
	if (DestroyOnOverlap)
	{
		Destroy();
	}
}
