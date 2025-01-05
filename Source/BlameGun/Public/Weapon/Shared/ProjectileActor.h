// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectPoolManager/Interface_ObjectPool.h"
#include "ProjectileActor.generated.h"


class UNiagaraComponent;
class UNiagaraSystem;
class USphereComponent;
class AWeaponBase;
class UDamageInfoComponent;



UENUM(Blueprintable)
enum class EBulletType: uint8
{
	ECS_None,
	ECS_Projectile,
	ECS_HitScan,
	
};



USTRUCT(BlueprintType)
struct FProjectileInfo: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* StaticMesh = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UNiagaraSystem> NiagaraSystem = nullptr;
		
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float DamageAmount = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineTraceDistance = 1000.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileLifeTime = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForAlly = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DestroyOnOverlap = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DealDamage = true;

};



DECLARE_LOG_CATEGORY_EXTERN(Log_ProjectileActor, Log, All);

UCLASS()
class BLAMEGUN_API AProjectileActor : public AActor, public IInterface_ObjectPool
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* SphereCollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraComponent* NiagaraProjectile;
	
	UFUNCTION()
	void OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FProjectileInfo ProjectileInfo;
	
	UFUNCTION(BlueprintCallable)
	void SetProjectileStruct(const FProjectileInfo NewProjectileInfo);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float DamageAmount = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineTraceDistance = 1000.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileLifeTime = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DestroyOnOverlap = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DealDamage = true;
	
};

