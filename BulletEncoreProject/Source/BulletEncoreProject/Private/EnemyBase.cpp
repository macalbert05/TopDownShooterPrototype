// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	
	SetRootComponent(Body);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere"));
	UStaticMesh* Asset = MeshAsset.Object;

	Body->SetStaticMesh(Asset);

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereTrigger"));
	Sphere->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	Sphere->SetSphereRadius(500.0f, true);
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	Body->SetSimulatePhysics(true);
	Body->SetEnableGravity(false);

	initialAltitude = Body->GetComponentTransform().GetTranslation().Z;

	if (maxHealth <= 0) maxHealth = 2;
	currentHealth = maxHealth;

	if (speed <= 0) speed = 200.0f;
	if (minAltitude <= 0) minAltitude = 50.0f;
	if (maxAltitude <= 0) maxAltitude = 50.0f;

}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AEnemyBase::ChangeHealth(int value_)
{
	currentHealth += value_;
}

void AEnemyBase::SetMaxHealth(int value_)
{
	maxHealth = value_;
}

int AEnemyBase::GetCurrentHealth()
{
	return currentHealth;
}

int AEnemyBase::GetMaxHealth()
{
	return maxHealth;
}

void AEnemyBase::Chase(FVector player_)
{
	FVector currentPosition = Body->GetComponentTransform().GetTranslation();
	FVector targetDirection = player_ - currentPosition;

	targetDirection.Normalize();

	FVector chaseVelocity = targetDirection * speed;

	Body->SetPhysicsLinearVelocity(chaseVelocity);
}

void AEnemyBase::Evade(FVector player_)
{
	FVector currentPosition = Body->GetComponentTransform().GetTranslation();
	FVector targetDirection = player_ - currentPosition;

	targetDirection.Normalize();

	FVector evadeVelocity = targetDirection * speed * -1.0f;

	Body->SetPhysicsLinearVelocity(evadeVelocity);
}

void AEnemyBase::AltitudeControl()
{
	float currentAltitude;
	FVector currentVelocity;

	currentAltitude = Body->GetComponentTransform().GetTranslation().Z;
	currentVelocity = Body->GetPhysicsLinearVelocity();

	currentAltitude = currentAltitude - initialAltitude;

	

	if (currentAltitude > maxAltitude) {
		
		currentVelocity.Z = -1.0f;

		Body->SetPhysicsLinearVelocity(currentVelocity, false);

	}

	if (currentAltitude < minAltitude) {
		
		currentVelocity.Z = 1.0f;

		Body->SetPhysicsLinearVelocity(currentVelocity, false);

	}

}

