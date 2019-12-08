// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

UCLASS()
class BULLETENCOREPROJECT_API AEnemyBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
public:
	//Variables


	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		float speed;

	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		float minAltitude;

	UPROPERTY(EditAnywhere, Category = "Stats", BlueprintReadWrite)
		float maxAltitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* Sphere;

	//Functions
	UFUNCTION(BlueprintCallable)
		void ChangeHealth(int value_);

	UFUNCTION(BlueprintCallable)
		void SetMaxHealth(int value_);

	UFUNCTION(BlueprintCallable)
		int GetCurrentHealth();

	UFUNCTION(BlueprintCallable)
		int GetMaxHealth();

	UFUNCTION(BlueprintCallable)
		void Chase(FVector player_);

	UFUNCTION(BlueprintCallable)
		void Evade(FVector player_);

private:
	
	//Variable
	UPROPERTY(EditAnywhere, Category = "Stats")
		int currentHealth;

	UPROPERTY(EditAnywhere, Category = "Stats")
		int maxHealth;

	UPROPERTY()
		float initialAltitude;

	//Functions
	UFUNCTION(BlueprintCallable)
		void AltitudeControl();

};
