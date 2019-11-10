// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectileClass.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABaseProjectileClass::ABaseProjectileClass()
{
	SetSpeed(1000.0f);
	SetGravityEnabled(false);
	SetProjectileLifeSpan(3.0f);

	SetUpMeshComponent();
	SetUpMovementComponent();
	

}

void ABaseProjectileClass::SetUpMeshComponent() {

	// First find the static mesh, in this case we find the sphere mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMesh(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMeshComponent->SetupAttachment(RootComponent);
	ProjectileMeshComponent->SetStaticMesh(ProjectileMesh.Object);
	ProjectileMeshComponent->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMeshComponent->OnComponentHit.AddDynamic(this, &ABaseProjectileClass::OnHit);		// The settup for the OnHit Callback during collisions
	RootComponent = ProjectileMeshComponent;

}

void ABaseProjectileClass::SetUpMovementComponent() {

	ProjectileMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("PorjectileMovement0"));
	ProjectileMoveComponent->UpdatedComponent = ProjectileMeshComponent;
	ProjectileMoveComponent->InitialSpeed = speed;
	ProjectileMoveComponent->MaxSpeed = speed;
	ProjectileMoveComponent->bRotationFollowsVelocity = true;
	
	if (!bIsGravityEnabled) { 
		ProjectileMoveComponent->ProjectileGravityScale = 0.0f;
		ProjectileMoveComponent->bShouldBounce = false;
	}
	else {
		ProjectileMoveComponent->ProjectileGravityScale = 0.7f;
		ProjectileMoveComponent->bShouldBounce = true;
	}

	InitialLifeSpan = lifeSpan;

}

void ABaseProjectileClass::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL) && OtherComponent->IsSimulatingPhysics() && OtherComponent->GetCollisionProfileName() != UCollisionProfile::Pawn_ProfileName)
	{
		OtherComponent->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

void ABaseProjectileClass::SetDirection(FVector direc) {

}

void ABaseProjectileClass::SetGravityEnabled(bool IsGravityEnabled) {
	bIsGravityEnabled = IsGravityEnabled;
}

void ABaseProjectileClass::SetSpeed(float newSpeed) {
	speed = newSpeed;
}

void ABaseProjectileClass::SetProjectileLifeSpan(float timeInSeconds) {
	lifeSpan = timeInSeconds;
}





