// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectileClass.generated.h"


UCLASS()
class ABaseProjectileClass : public AActor
{
	GENERATED_BODY()
	
public:	

	// Prjectile Sphere Mesh
	UPROPERTY(Category = Projectile, BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* ProjectileMeshComponent;

	UPROPERTY(Category = Movement, BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* ProjectileMoveComponent;


	ABaseProjectileClass();

	void SetUpMeshComponent();
	void SetUpMovementComponent();

	void SetDirection(FVector direc);
	void SetGravityEnabled(bool IsGravityEabled);
	void SetSpeed(float newSpeed);
	void SetProjectileLifeSpan(float timeInSeconds);

private:

	FVector direction;
	float speed;
	bool bIsGravityEnabled;
	float lifeSpan;

	// Callback/ delegate function for OnCollison Result
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);


};
