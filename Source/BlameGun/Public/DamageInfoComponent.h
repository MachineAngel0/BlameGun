// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageInfoComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable )
class BLAMEGUN_API UDamageInfoComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageInfoComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseDamage = 100.0f;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float ReturnDamageAmount();

	UFUNCTION(BlueprintCallable)
	void ReadDataTable();
	
	//uncomment when I add a damage struct
	UPROPERTY(EditAnywhere, BlueprintReadWrite/*, meta=(RowType="DamageComponentInfo")*/)
	FDataTableRowHandle DataTable;
};
