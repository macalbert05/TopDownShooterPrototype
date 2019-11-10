// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerPawn.generated.h"

UCLASS(Blueprintable)
class APlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(Category = Collider, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* PlayerCapsuleComponent;

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* PlayerSkeletalMeshComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* CameraComponent;

	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;

	/*Movement Variables*/
	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1.0"))
		float movementSpeed;


	APlayerPawn();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		FVector GetAimDirection();

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

};
