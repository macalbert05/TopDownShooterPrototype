// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponData.h"
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

	APawn* GetOwner() const;

	void UpdateBulletData(FBulletData newBulletData);
	void UpdateBulletData(FBulletData newBulletData, FVector newDirection);

	void InitBulletMovementComponent();

private:

	APawn* Owner;

	float speed;
	FVector direction;
	float damage;
	bool bIsDamageOverTimeBullet;
	float damageOverTime;

	bool bIsGravityEnabled;
	float lifeSpan;

	FBulletData bulletData;

	// Callback/ delegate function for OnCollison Result
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);


};
