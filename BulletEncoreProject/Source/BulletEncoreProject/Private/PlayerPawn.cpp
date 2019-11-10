// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "UObject/ConstructorHelpers.h" // Library needed to find and instantiate the player's static mesh
#include "Components/SkeletalMeshComponent.h"	// Library needed in order to recognize the static mesh commponent as viable root component
#include "Engine/CollisionProfile.h"	// Used to settup default collision profile for this object
#include "Components/InputComponent.h"	
#include "Components/CapsuleComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "BaseProjectileClass.h"

const FName APlayerPawn::MoveForwardBinding("MoveForward");
const FName APlayerPawn::MoveRightBinding("MoveRight");
const FName APlayerPawn::LookUpBinding("LookUp");
const FName APlayerPawn::LookRightBinding("LookRight");
const FName APlayerPawn::FireBinding("Fire");

APlayerPawn::APlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create Player Mesh Component
	SetUpPlayerMeshComponent();

	// Create camera component
	SetUpCameraComponent();

	movementSpeed = 500.0f;
	currentSpeed = 0.0f;
	rotationSpeed = 30.0f;
	fireCooldown = 1.0f;
	bCanFire = true;
}

void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	currentSpeed = movementSpeed;
	
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotatePlayer(DeltaTime);
	MovePlayer(DeltaTime);
}

void APlayerPawn::SetUpPlayerMeshComponent() {
	
	// Creating the capsule component
	PlayerCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	RootComponent = PlayerCapsuleComponent;
	PlayerCapsuleComponent->SetCapsuleHalfHeight(100.0f);
	PlayerCapsuleComponent->SetCapsuleRadius(34.0f);
	PlayerCapsuleComponent->SetSimulatePhysics(true);
	PlayerCapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	PlayerCapsuleComponent->SetEnableGravity(false);
	PlayerCapsuleComponent->BodyInstance.bLockYRotation = true;
	PlayerCapsuleComponent->BodyInstance.bLockYRotation = true;

	// Find the mesh needed for the player in its heiearchy
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMesh(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));
	PlayerSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	PlayerSkeletalMeshComponent->SetupAttachment(RootComponent);
	PlayerSkeletalMeshComponent->SetSkeletalMesh(SkeletalMesh.Object);
	PlayerSkeletalMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -95.0f));

	
}

void APlayerPawn::SetUpCameraComponent() {
	// In creating the camera component, we will use the engine to our advantage
	// We are using the spring arm component to keep a consistent distance from the playerPawn
	// The Camera will be a child of the spring arm component, this is the way Unreal require the spring arm settup to be done

	// Creating the SpringArmComponent/ 'CameraBoom'
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true;	// When the pawn rotates the camera will not
	CameraBoom->TargetArmLength = 650.0f;	// How far is the camera from the pawn
	CameraBoom->RelativeRotation = FRotator(-60.0f, 0.0f, 0.0f);
	CameraBoom->bDoCollisionTest = false;	// We will not be using collision test, so the camera will not be pulled in when it collides

	// Now.. onto creating the camera component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false; // The pawn will not control the camera's rotation
}

void APlayerPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);	// Asserting the player input component

	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(LookUpBinding);
	PlayerInputComponent->BindAxis(LookRightBinding);
	PlayerInputComponent->BindAction(FireBinding, EInputEvent::IE_Pressed, this, &APlayerPawn::FireShot);

}

void APlayerPawn::MovePlayer(float deltaTime) {
	// Get the axis values from the input
	float forwardAxisValue = GetInputAxisValue(MoveForwardBinding);
	float rightAxisValue = GetInputAxisValue(MoveRightBinding);
	
	// Create and normalize a direction vector
	FVector movementDirection = FVector(forwardAxisValue, rightAxisValue, 0.0f);
	movementDirection.Normalize();
	
	// Create the velocity of the player using all the info
	FVector velocity = movementDirection * currentSpeed * deltaTime;

	// Instead getting the rotation of the vector we will be aiming the player
	if (velocity.Size() > 0.0f) {
		FHitResult hit(1.0f);
		FRotator rotation = velocity.Rotation();
		FVector newPosition = RootComponent->GetRelativeTransform().GetTranslation() + velocity;
		RootComponent->SetRelativeLocation(newPosition, true, &hit);
	}
	
}

void APlayerPawn::RotatePlayer(float deltaTime) {
	// Getting the input axis values
	float upAxisValue = GetInputAxisValue(LookUpBinding);
	float rightAxisValue = GetInputAxisValue(LookRightBinding);

	FVector inputVector = FVector(rightAxisValue, upAxisValue, 0.0f);

	// Calculate the direction Vector Based on the change in mouse position
	FVector EndPoint = (inputVector * 25.0f) + RootComponent->GetRelativeTransform().GetTranslation();
	// DrawDebugLine(GetWorld(), RootComponent->GetRelativeTransform().GetTranslation(), EndPoint, FColor::Red, false, -1.0f, 1, 5.0f);

	// Getting the direction from the endpoint and current location
	LookAtDirection = EndPoint - RootComponent->GetRelativeTransform().GetTranslation();
	LookAtDirection.Normalize();
	LookAtDirection = LookAtDirection * rotationSpeed * deltaTime;

	FHitResult hit(1.0f);
	FRotator rotation = LookAtDirection.Rotation();
	
	// Finally, smoothing the rotation of the player
	if (inputVector.Size() > 0.0f) {
		RootComponent->SetRelativeRotation(FMath::Lerp(RootComponent->GetRelativeTransform().GetRotation(), rotation.Quaternion(), 0.1f), true, &hit);
	}
}

FVector APlayerPawn::GetAimDirection() {
	const FRotator fireRotation = RootComponent->GetRelativeTransform().GetRotation().Rotator();
	FVector offset = FVector(90.0f, 0.0f, 0.0f);
	FVector aimDirection = fireRotation.RotateVector(offset);
	aimDirection.Normalize();
	return aimDirection;
}

void APlayerPawn::FireShot() {

	if (bCanFire) {
		// Get the rotation of the player
		const FRotator fireRotation = RootComponent->GetRelativeTransform().GetRotation().Rotator();
		
		// Create the offset of where the bullet will spawn
		FVector offset = FVector(90.0f, 0.0f, 0.0f);
		const FVector spawnLocation = GetActorLocation() + fireRotation.RotateVector(offset);

		/*
		if (GEngine) {
			FString mssg = TEXT("Current Location: ") + RootComponent->GetRelativeTransform().GetLocation().ToString();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, mssg);
			mssg = TEXT("Fired Weapon at location: ") + spawnLocation.ToString() + TEXT(" in the direction: ") + fireRotation.ToString();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, mssg);
		}
		*/

		UWorld* const World = GetWorld();
		if (World != NULL) {
			// Spawn the bullet
			World->SpawnActor<ABaseProjectileClass>(spawnLocation, fireRotation);
		}

		bCanFire = false;
		// Built in timer handler to implement cooldown on fire
		World->GetTimerManager().SetTimer(TimerHandle_FireCooldownExpire, this, &APlayerPawn::FireCooldownExpire, fireCooldown);

		bCanFire = false;
	}
}

void APlayerPawn::FireCooldownExpire() {

	bCanFire = true;

}
