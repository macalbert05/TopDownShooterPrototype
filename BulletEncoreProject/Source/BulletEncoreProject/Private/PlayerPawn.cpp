// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "UObject/ConstructorHelpers.h" // Library needed to find and instantiate the player's static mesh
#include "Components/SkeletalMeshComponent.h"	// Library needed in order to recognize the static mesh commponent as viable root component
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"	// Used to settup default collision profile for this object
#include "Components/InputComponent.h"	
#include "Components/CapsuleComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine.h"
#include "DrawDebugHelpers.h"
#include "BaseProjectileClass.h"
#include "Animation/AnimBlueprint.h"

const FName APlayerPawn::MoveForwardBinding("MoveForward");
const FName APlayerPawn::MoveRightBinding("MoveRight");
const FName APlayerPawn::LookUpBinding("LookUp");
const FName APlayerPawn::LookRightBinding("LookRight");
const FName APlayerPawn::FireBinding("Fire");

APlayerPawn::APlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	InitPlayerMeshComponents();
	InitCameraComponent();


	movementSpeed = 500.0f;
	currentSpeed = movementSpeed;
	rotationSpeed = 30.0f;
	

	numberOfGunSlots = 3;
	currentGunIndex = 0;
	HeldGuns.Empty();
	HeldGuns.AddDefaulted(numberOfGunSlots);
	fireRateCoolDown = 1.0f;
	bCanFire = true;
	bHasToReload = false;
	bIsReloading = false;
}

void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	currentSpeed = movementSpeed;
	// PrintPlayerStatsToScreen();
}

void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotatePlayer(DeltaTime);
	MovePlayer(DeltaTime);
}

#if WITH_EDITOR
void APlayerPawn::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void APlayerPawn::InitPlayerMeshComponents() {
	
	// Init Physics/ Collision Capsule
	PlayerCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	RootComponent = PlayerCapsuleComponent;
	PlayerCapsuleComponent->SetCapsuleHalfHeight(100.0f);
	PlayerCapsuleComponent->SetCapsuleRadius(34.0f);
	PlayerCapsuleComponent->SetSimulatePhysics(true);
	PlayerCapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	PlayerCapsuleComponent->SetEnableGravity(true);
	PlayerCapsuleComponent->BodyInstance.bLockXRotation = true;
	PlayerCapsuleComponent->BodyInstance.bLockYRotation = true;
	PlayerCapsuleComponent->BodyInstance.bLockZRotation = true;

	// Init Aiming Component
	PlayerAimCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AimCapsuleComp"));
	PlayerAimCapsuleComponent->SetupAttachment(RootComponent);
	PlayerAimCapsuleComponent->SetCapsuleHalfHeight(50.0f);
	PlayerAimCapsuleComponent->SetCapsuleRadius(17.0f);
	PlayerAimCapsuleComponent->SetSimulatePhysics(false);
	PlayerAimCapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	PlayerAimCapsuleComponent->SetEnableGravity(false);
	PlayerAimCapsuleComponent->BodyInstance.bLockXRotation = true;
	PlayerAimCapsuleComponent->BodyInstance.bLockYRotation = true;
	PlayerAimCapsuleComponent->BodyInstance.bLockZRotation = false;
	
	// Init Skeletal Mesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalMesh(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));
	PlayerSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	PlayerSkeletalMeshComponent->SetupAttachment(PlayerAimCapsuleComponent);
	PlayerSkeletalMeshComponent->SetSkeletalMesh(SkeletalMesh.Object);
	PlayerSkeletalMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -95.0f));
	PlayerSkeletalMeshComponent->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	PlayerSkeletalMeshComponent->BodyInstance.bLockXRotation = true;
	PlayerSkeletalMeshComponent->BodyInstance.bLockYRotation = true;
	PlayerSkeletalMeshComponent->BodyInstance.bLockZRotation = false;

	// Attach Default Weapon Mesh to Skeletal
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> WeaponMesh(TEXT("/Game/PrototypeWeap/Prototype_AssaultRifle.Prototype_AssaultRifle"));
	PlayerWeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	PlayerWeaponMeshComponent->SetupAttachment(PlayerSkeletalMeshComponent, TEXT("RightHandSocket"));
	PlayerWeaponMeshComponent->SetSkeletalMesh(WeaponMesh.Object);
	PlayerWeaponMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	PlayerWeaponMeshComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

	// Setting up Animation Blueprint On Character
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> BlueprintAnim(TEXT("/Game/AnimationBlueprints/Run_Shoot_Idle_AnimBP.Run_Shoot_Idle_AnimBP"));
	PlayerSkeletalMeshComponent->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	PlayerSkeletalMeshComponent->SetAnimInstanceClass(BlueprintAnim.Object->GetAnimBlueprintGeneratedClass());
	
}

void APlayerPawn::InitCameraComponent() {
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
	PlayerInputComponent->BindAction(FireBinding, EInputEvent::IE_Pressed, this, &APlayerPawn::FireShotFromCurrentGun);

}

FVector APlayerPawn::GetMovementAxisInput() const {
	// Create Movement Vector from Input Vector
	float forwardAxisValue = GetInputAxisValue(MoveForwardBinding);
	float rightAxisValue = GetInputAxisValue(MoveRightBinding);
	FVector movementDirection = FVector(forwardAxisValue, rightAxisValue, 0.0f);
	movementDirection.Normalize();
	return movementDirection;
}

FVector APlayerPawn::GetAimingAxisInput() const {
	// Create Direction Vector from Input Vector
	float upAxisValue = GetInputAxisValue(LookUpBinding);
	float rightAxisValue = GetInputAxisValue(LookRightBinding);
	FVector lookAtDirection = FVector(rightAxisValue, upAxisValue, 0.0f);
	lookAtDirection.Normalize();
	return lookAtDirection;
}

void APlayerPawn::MovePlayer(float deltaTime) {

	FVector MovementDirection = GetMovementAxisInput();
	
	FVector velocity = MovementDirection * currentSpeed;

	PlayerCapsuleComponent->SetPhysicsLinearVelocity(velocity);

}

void APlayerPawn::RotatePlayer(float deltaTime) {

	FVector inputDirection = GetAimingAxisInput();

	if (inputDirection.Size() > 0.1f) {
		// Calculate the direction Vector Based on the change in mouse position
		FVector EndPoint = (inputDirection * 25.0f) + PlayerAimCapsuleComponent->GetRelativeTransform().GetTranslation();

		// Get the direction from the endpoint and current location
		FVector newDirection = EndPoint - PlayerAimCapsuleComponent->GetRelativeTransform().GetTranslation();
		newDirection.Normalize();
		newDirection = newDirection * rotationSpeed * deltaTime;

		FHitResult hit(1.0f);
		FRotator newRotation = newDirection.Rotation();

		// Smooth the rotation of the player using an interpolation
		PlayerAimCapsuleComponent->SetRelativeRotation(FMath::Lerp(PlayerAimCapsuleComponent->GetRelativeTransform().GetRotation(), newRotation.Quaternion(), 0.1f), true, &hit);
	}
}

FVector APlayerPawn::GetCurrentAimDirection() const{
	const FRotator fireRotation = PlayerAimCapsuleComponent->GetRelativeTransform().GetRotation().Rotator();
	FVector offset = FVector(90.0f, 0.0f, 0.0f);
	FVector aimDirection = fireRotation.RotateVector(offset);
	aimDirection.Normalize();
	return aimDirection;
}

void APlayerPawn::FireShotFromCurrentGun() {

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Fired Shot Update!"));

	if (bHasToReload) {

		if(!bIsReloading)
			ReloadCurrentGun();

	}
	else {

		if (bCanFire) {

			FVector bulletSpawnPoint = PlayerWeaponMeshComponent->GetSocketLocation(TEXT("BulletSpawnPoint"));
			FRotator fireRotation = PlayerAimCapsuleComponent->GetRelativeTransform().GetRotation().Rotator();

			UWorld* const World = GetWorld();

			ABaseProjectileClass* currentBullet;

			if (World != NULL) {


				currentBullet = World->SpawnActor<ABaseProjectileClass>(bulletSpawnPoint, fireRotation);
				currentBullet->UpdateBulletData(GetCurrentGunBulletData(), GetCurrentAimDirection());

			}

			OnFireShotUpdate();

			bCanFire = false;

			World->GetTimerManager().SetTimer(TimerHandle_FireCooldownExpire, this, &APlayerPawn::FireCooldownExpire, GetCurrentGunData().timeBetweenShots);

			bCanFire = false;
		}

	}
	
}

//**** Make an event that can have functionality added to it in blueprints this is where you can spawn muzzle flares etc.
void APlayerPawn::OnFireShotUpdate() {
	
	if (HeldGuns.Num() > 0) {

		bIsReloading = false;

		if (HeldGuns[currentGunIndex].rateOfFire == EFireRate::BurstFire) {	// **Spread fire will always result in a burst fire rate
			HeldGuns[currentGunIndex].currentClipCount = HeldGuns[currentGunIndex].currentClipCount - (HeldGuns[currentGunIndex].burstFireRoundCount);
		}
		else {
			HeldGuns[currentGunIndex].currentClipCount--;
		}

		if (HeldGuns[currentGunIndex].currentClipCount < 0)
			HeldGuns[currentGunIndex].currentClipCount = 0;

		if (HeldGuns[currentGunIndex].currentClipCount == 0) {
			bHasToReload = true;
		}

		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Current Clip Amount: " + FString::FromInt(HeldGuns[currentGunIndex].currentClipCount)));

	}
}

void APlayerPawn::ReloadCurrentGun() {
	if (HeldGuns.Num() > 0) {
		
		bIsReloading = true;

		UWorld* const World = GetWorld();
		World->GetTimerManager().SetTimer(TimerHandle_ReloadCooldownExpire, this, &APlayerPawn::ReloadCoolDownExpire, GetCurrentGunData().reloadTime);
		
	}
}

void APlayerPawn::FireCooldownExpire() {

	bCanFire = true;

}

void APlayerPawn::ReloadCoolDownExpire() {

	if (HeldGuns.Num() > 0) {
		int desiredAmmount = HeldGuns[currentGunIndex].maxClipCount - HeldGuns[currentGunIndex].currentClipCount;
		int tempAmmoCount = HeldGuns[currentGunIndex].currentAmmoCount;
		int actualAquiredAmmount = 0;

		for (int i = 0; i < desiredAmmount; i++) {
			if ((tempAmmoCount - i) <= 0)
				break;

			// Put a timer in hear if you want it to update with time so that the player can stop at any moment
			actualAquiredAmmount++;
		}

		HeldGuns[currentGunIndex].currentClipCount = actualAquiredAmmount;
		HeldGuns[currentGunIndex].currentAmmoCount = HeldGuns[currentGunIndex].currentAmmoCount - actualAquiredAmmount;

	}

	bHasToReload = false;
	bIsReloading = false;
}

FBulletData APlayerPawn::GetCurrentGunBulletData() const{

	if (HeldGuns.Num() > 0) {
		return HeldGuns[currentGunIndex].bullets;
	}

	return FBulletData();
}

FGunData APlayerPawn::GetCurrentGunData() const {
	if (HeldGuns.Num() > 0) {
		return HeldGuns[currentGunIndex];
	}

	return FGunData();
}

void APlayerPawn::PrintPlayerStatsToScreen() {
	if (GEngine) {
		FString msg = TEXT("Number of lives: ") + FString::FromInt(PlayerHealth.numberOfLives);
		GEngine->AddOnScreenDebugMessage(-1, 60.0f, FColor::Green, msg);

		msg = TEXT("Current Health: ") + FString::SanitizeFloat(PlayerHealth.currentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 60.0f, FColor::Green, msg);

		msg = TEXT("Max Health: ") + FString::SanitizeFloat(PlayerHealth.maxHealth);
		GEngine->AddOnScreenDebugMessage(-1, 60.0f, FColor::Green, msg);

	}
}

