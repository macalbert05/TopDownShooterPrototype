// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectileClass.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABaseProjectileClass::ABaseProjectileClass()
{
	bulletData = FBulletData();
	SetUpMeshComponent();
	SetUpMovementComponent();
	InitialLifeSpan = 3.0f;
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
}

APawn* ABaseProjectileClass::GetOwner() const{
	return Owner;
}

void ABaseProjectileClass::UpdateBulletData(FBulletData newBulletdata) {
	bulletData = newBulletdata;
	InitBulletMovementComponent();
}

void ABaseProjectileClass::UpdateBulletData(FBulletData newBulletdata, FVector newDirection) {
	bulletData = newBulletdata;
	direction = newDirection;
	InitBulletMovementComponent();
}

void ABaseProjectileClass::InitBulletMovementComponent() {

	// if (GEngine)
		// GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("BULLET SPAWNED!"));

	ProjectileMoveComponent->UpdatedComponent = ProjectileMeshComponent;
	ProjectileMoveComponent->InitialSpeed = bulletData.initialSpeed;
	ProjectileMoveComponent->MaxSpeed = bulletData.maxSpeed;
	ProjectileMoveComponent->Velocity = direction * bulletData.maxSpeed;

	if (!bIsGravityEnabled) {
		ProjectileMoveComponent->ProjectileGravityScale = 0.0f;
		ProjectileMoveComponent->bShouldBounce = false;
	}
	else {
		ProjectileMoveComponent->ProjectileGravityScale = 0.7f;
		ProjectileMoveComponent->bShouldBounce = true;
	}

	
}

void ABaseProjectileClass::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {

	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL) && OtherComponent->IsSimulatingPhysics() && OtherComponent->GetCollisionProfileName() != UCollisionProfile::Pawn_ProfileName)
	{
		OtherComponent->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	else if ((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL) && OtherComponent->IsSimulatingPhysics() && OtherComponent->GetCollisionProfileName() == UCollisionProfile::Pawn_ProfileName) {

	}
	else {
		Destroy();
	}
	

	
}

FBulletData ABaseProjectileClass::GetBulletData() {
	return bulletData;
}







