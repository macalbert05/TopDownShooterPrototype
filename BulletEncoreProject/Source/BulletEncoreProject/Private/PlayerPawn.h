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

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* PlayerMeshComponent;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/*Movement Variables*/
	UPROPERTY(Category = Movement, EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1.0"))
	float movementSpeed;


	APlayerPawn();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	FVector GetAimDirection() { return LookAtDirection; }
	
private:

	float currentSpeed;
	float rotationSpeed;

	FVector LookAtDirection;

	/*Player Input Bindings*/
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName LookUpBinding;
	static const FName LookRightBinding;

	void SetUpPlayerMeshComponent();
	void SetUpCameraComponent();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MovePlayer(float deltaTime);
	void RotatePlayer(float deltaTime);
	void RotateDirection();

};
