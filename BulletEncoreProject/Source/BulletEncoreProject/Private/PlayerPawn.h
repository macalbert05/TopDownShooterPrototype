// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerPawn.generated.h"


UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	NormalBullet UMETA(DisplayName = "NormalBullet")
};

USTRUCT(BlueprintType)
struct BULLETENCOREPROJECT_API FPlayerStats {

	GENERATED_USTRUCT_BODY()

	FPlayerStats() {
		numberOfLives = 3;
		maxHealth = 99.0f;
		currentHealth = maxHealth;
		currentAmmoType = EAmmoType::NormalBullet;
		maxAmmoCount = 8;
		currentAmmoCount = maxAmmoCount;
	}

	UPROPERTY(BlueprintreadWrite, EditAnywhere)
		int numberOfLives;

	UPROPERTY()
		float currentHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float maxHealth;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EAmmoType currentAmmoType;

	UPROPERTY(VisibleAnywhere)
		int currentAmmoCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int maxAmmoCount;

};




UCLASS(Blueprintable)
class APlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* PlayerCapsuleComponent;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PlayerSkeletalMeshComponent;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PlayerWeaponMeshComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* CameraComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;

	/*Movement Variables*/
	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1.0"))
		float movementSpeed;

	UPROPERTY(Category = PlayerStatistics, BlueprintReadWrite, EditAnywhere)
		FPlayerStats playerStats;

	APlayerPawn();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		FVector GetAimDirection();

	UFUNCTION(BlueprintCallable)
		float GetCurrentSpeed() const { return currentSpeed; }

private:

	float currentSpeed;
	float rotationSpeed;

	FVector LookAtDirection;

	/* Gun Variables*/
	bool bCanFire;
	float fireCooldown;
	FTimerHandle TimerHandle_FireCooldownExpire;
	

	/*Player Input Bindings*/
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName LookUpBinding;
	static const FName LookRightBinding;
	static const FName FireBinding;

	void SetUpPlayerMeshComponent();
	void SetUpCameraComponent();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MovePlayer(float deltaTime);
	void RotatePlayer(float deltaTime);

	void FireShot();
	void FireCooldownExpire();

	void PrintPlayerStatsToScreen();

};
