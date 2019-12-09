// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "BaseProjectileClass.h"

// Sets default values
ABaseEnemyCharacter::ABaseEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	numberOfHeldGuns = 2;
	HeldGuns.AddDefaulted(numberOfHeldGuns);
	currentGunIndex = 0;
	bIsDead = false;

	fireRateCoolDown = 1.0f;
	bCanFire = true;
	bHasToReload = false;
	bIsReloading = false;
}

void ABaseEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseEnemyCharacter::EquipEnemyWithGuns_Implementation(const TArray<FGunData>& GunsToEquip) {
	HeldGuns.Empty();
	for (int i = 0; i < GunsToEquip.Num(); i++) {
		HeldGuns.Add(GunsToEquip[i]);
	}
}



float ABaseEnemyCharacter::OnTakeDamage_Implementation(float damage) {
	EnemyHealth.currentHealth -= damage;
	if (EnemyHealth.currentHealth <= 0.0f) {
		bIsDead = true;
		EnemyHealth.numberOfLives--;
		OnDeath();
	}

	return damage;

}


void ABaseEnemyCharacter::FireShotFromCurrentGun_Implementation(const FVector& bulletSpawnPoint) {

	 // if (GEngine)
		// GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Fired Shot Update!"));

	if (bHasToReload) {

		if (!bIsReloading)
			ReloadCurrentGun();

	}
	else {

		if (bCanFire) {
			FRotator fireRotation = this->GetCapsuleComponent()->GetRelativeTransform().GetRotation().Rotator();

			UWorld* const World = GetWorld();

			ABaseProjectileClass* currentBullet;

			if (World != NULL) {


				currentBullet = World->SpawnActor<ABaseProjectileClass>(bulletSpawnPoint, fireRotation);
				FVector offset = FVector(90.0f, 0.0f, 0.0f);
				FVector aimDirection = fireRotation.RotateVector(offset);
				aimDirection.Normalize();
				currentBullet->UpdateBulletData(GetCurrentGunBulletData(), aimDirection);

			}

			OnFireShotUpdate();

			bCanFire = false;

			World->GetTimerManager().SetTimer(TimerHandle_FireCooldownExpire, this, &ABaseEnemyCharacter::FireCooldownExpire, GetCurrentGunData().timeBetweenShots);

			bCanFire = false;
		}

	}

}

//**** Make an event that can have functionality added to it in blueprints this is where you can spawn muzzle flares etc.
void ABaseEnemyCharacter::OnFireShotUpdate() {

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

		// if (GEngine)
			// GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Current Clip Amount: " + FString::FromInt(HeldGuns[currentGunIndex].currentClipCount)));

	}
}

void ABaseEnemyCharacter::ReloadCurrentGun_Implementation() {
	if (HeldGuns.Num() > 0) {

		bIsReloading = true;

		UWorld* const World = GetWorld();
		World->GetTimerManager().SetTimer(TimerHandle_ReloadCooldownExpire, this, &ABaseEnemyCharacter::ReloadCoolDownExpire, GetCurrentGunData().reloadTime);

	}
}

void ABaseEnemyCharacter::FireCooldownExpire() {

	bCanFire = true;

}

void ABaseEnemyCharacter::ReloadCoolDownExpire() {

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

FBulletData ABaseEnemyCharacter::GetCurrentGunBulletData() const {

	if (HeldGuns.Num() > 0) {
		return HeldGuns[currentGunIndex].bullets;
	}

	return FBulletData();
}

FGunData ABaseEnemyCharacter::GetCurrentGunData() const {
	if (HeldGuns.Num() > 0) {
		return HeldGuns[currentGunIndex];
	}

	return FGunData();
}
