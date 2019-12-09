// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WeaponData.h"
#include "BaseEnemyCharacter.generated.h"


UCLASS(BlueprintType)
class BULLETENCOREPROJECT_API ABaseEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseEnemyCharacter();


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = EnemyHealth, BlueprintReadWrite, EditAnywhere)
	FPlayerHealthInfo EnemyHealth;

	UPROPERTY(Category = EnemyGuns, BlueprintReadWrite, EditAnywhere)
	TArray<FGunData> HeldGuns;

	UPROPERTY(Category = EnemyGuns, BlueprintReadOnly)
	bool bCanFire;

	UPROPERTY(Category = EnemyGuns, BlueprintReadOnly)
	bool bIsReloading;


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void EquipEnemyWithGuns(const TArray<FGunData>& GunsToEquip);

	virtual void EquipEnemyWithGuns_Implementation(const TArray<FGunData>& GunsToEquip);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		float OnTakeDamage(float damage);

	virtual float OnTakeDamage_Implementation(float damage);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void FireShotFromCurrentGun(const FVector& bulletSpawnPoint);

	virtual void FireShotFromCurrentGun_Implementation(const FVector& bulletSpawnPoint);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ReloadCurrentGun();

	virtual void ReloadCurrentGun_Implementation();

	UFUNCTION(BlueprintCallable)
		FGunData GetCurrentGunData() const;

	UFUNCTION(BlueprintImplementableEvent)
		void OnDeath();


private:

	bool bIsDead;

	int numberOfHeldGuns;
	int currentGunIndex;

	/* Gun Variables*/
	
	bool bHasToReload;
	
	float fireRateCoolDown;
	FTimerHandle TimerHandle_FireCooldownExpire;
	FTimerHandle TimerHandle_ReloadCooldownExpire;

	void OnFireShotUpdate();
	void FireCooldownExpire();
	void ReloadCoolDownExpire();
	FBulletData GetCurrentGunBulletData() const;

};
