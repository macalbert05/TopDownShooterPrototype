// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "UObject/ConstructorHelpers.h" // Library needed to find and instantiate the player's static mesh
#include "Components/StaticMeshComponent.h"	// Library needed in order to recognize the static mesh commponent as viable root component
#include "Engine/CollisionProfile.h"	// Used to settup default collision profile for this object
#include "Components/InputComponent.h"	
#include "GameFramework/PlayerController.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"

const FName APlayerPawn::MoveForwardBinding("MoveForward");
const FName APlayerPawn::MoveRightBinding("MoveRight");
const FName APlayerPawn::LookUpBinding("LookUp");
const FName APlayerPawn::LookRightBinding("LookRight");

APlayerPawn::APlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create Player Mesh Component
	SetUpPlayerMeshComponent();

	// Create camera component
	SetUpCameraComponent();

	movementSpeed = 500.0f;
	currentSpeed = movementSpeed;
	rotationSpeed = 45.0f;
}

void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotatePlayer(DeltaTime);
	MovePlayer(DeltaTime);

}

void APlayerPawn::SetUpPlayerMeshComponent() {
	// Find the mesh needed for the player in its heiearchy
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlayerMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));

	// Creating the mesh component
	PlayerMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	RootComponent = PlayerMeshComponent; // Player Mesh Component will show up as root component in editor
	PlayerMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	PlayerMeshComponent->SetStaticMesh(PlayerMesh.Object);
}

void APlayerPawn::SetUpCameraComponent() {
	// In creating the camera component, we will use the engine to our advantage
	// We are using the spring arm component to keep a consistent distance from the playerPawn
	// The Camera will be a child of the spring arm component, this is the way Unreal require the spring arm settup to be done

	// Creating the SpringArmComponent/ 'CameraBoom'
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true;	// When the pawn rotates the camera will not
	CameraBoom->TargetArmLength = 1200.0f;	// How far is the camera from the pawn
	CameraBoom->RelativeRotation = FRotator(-80.0f, 0.0f, 0.0f);
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

	// Calculate the direction Vector Based on the change in mouse position
	FVector EndPoint = ( FVector(rightAxisValue, upAxisValue, 0.0f) * 25.0f ) + RootComponent->GetRelativeTransform().GetTranslation();
	DrawDebugLine(GetWorld(), RootComponent->GetRelativeTransform().GetTranslation(), EndPoint, FColor::Red, false, -1.0f, 1, 5.0f);

	LookAtDirection = EndPoint - RootComponent->GetRelativeTransform().GetTranslation();
	LookAtDirection.Normalize();
	LookAtDirection = LookAtDirection * rotationSpeed * deltaTime;

	FHitResult hit(1.0f);
	FRotator rotation = LookAtDirection.Rotation();
	
	RootComponent->SetRelativeRotation(FMath::Lerp(RootComponent->GetRelativeTransform().GetRotation(), rotation.Quaternion(), 0.3f), true, &hit);
}

void APlayerPawn::RotateDirection() {
	// Get the input axis values
	float rightAxisValue = GetInputAxisValue(LookRightBinding);
	float upAxisValue = GetInputAxisValue(LookUpBinding);

	LookAtDirection = FVector(rightAxisValue, upAxisValue, 0.0f);
	LookAtDirection.Normalize();

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, LookAtDirection.ToString());
}

