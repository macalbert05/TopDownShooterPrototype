// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "WeaponData.h"
#include "PlayerPawn.generated.h"





UENUM(BlueprintType)
enum class ERace : uint8 {
	Human UMETA(DisplayName = "Human"),
	Alien UMETA(DisplayName = "Alien")
};


class UCapsuleComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class APlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* PlayerCapsuleComponent;
	
	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* PlayerAimCapsuleComponent;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PlayerSkeletalMeshComponent;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PlayerWeaponMeshComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* CameraComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;




	UPROPERTY(Category = PlayerMovement, EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1.0"))
		float movementSpeed;
	
	UPROPERTY(Category = PlayerStats, BlueprintReadWrite, EditAnywhere)
		FPlayerHealthInfo PlayerHealth;
	
	UPROPERTY(Category = PlayerGuns, BlueprintReadWrite, EditAnywhere)
		TArray<FGunData> HeldGuns;

	UPROPERTY(BlueprintReadWrite)
		FVector BulletSpawnPoint;



	APlayerPawn();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif



	UFUNCTION(BlueprintCallable)
		FVector GetCurrentAimDirection() const;

	UFUNCTION(BlueprintCallable)
		FGunData GetCurrentGunData() const;

	UFUNCTION(BlueprintCallable)
		FVector GetMovementAxisInput() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		float OnTakeDamage(float damage);

	virtual float OnTakeDamage_Implementation(float damage);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void FireShotFromCurrentGun();
		
	virtual void FireShotFromCurrentGun_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ReloadCurrentGun();

	virtual void ReloadCurrentGun_Implementation();

private:

	float currentSpeed;
	float rotationSpeed;

	/* Gun Variables*/
	bool bCanFire;
	bool bHasToReload;
	bool bIsReloading;
	float fireRateCoolDown;
	FTimerHandle TimerHandle_FireCooldownExpire;
	FTimerHandle TimerHandle_ReloadCooldownExpire;
	int currentGunIndex;
	int numberOfGunSlots;

	
	/*Player Input Bindings*/
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName LookUpBinding;
	static const FName LookRightBinding;
	static const FName FireMouseBinding;
	static const FName FireTriggerBinding;

	bool bIsDead;


	void InitPlayerMeshComponents();
	void InitCameraComponent();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	
	FVector GetAimingAxisInput() const;


	void MovePlayer(float deltaTime);
	void RotatePlayer(float deltaTime);

	
	void OnFireShotUpdate();
	void FireCooldownExpire();
	void ReloadCoolDownExpire();
	FBulletData GetCurrentGunBulletData() const;

	// ****Blueprint imprentable event for reload so we can play animations though the blueprint

	void PrintPlayerStatsToScreen();

};
