// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponData.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EBulletType : uint8 {
	NormalBullet UMETA(DisplayName = "NormalBullet"),
	DamageOverTimeBullet UMETA(DisplayName = "DamageOverTimeBullet"),
	BouncingBullet UMETA(DisplayName = "BouncingBullet")
};

UENUM(BlueprintType)
enum class EFireRate : uint8 {
	AutomaticFire UMETA(DisplayName = "Automatic"),
	SemiAutoFire UMETA(DisplayName = "SemiAuto"),
	ManualFire UMETA(DisplayName = "Manual"),
	BurstFire UMETA(DisplayName = "Burst")
};

USTRUCT(BlueprintType)
struct BULLETENCOREPROJECT_API FBulletData {
	GENERATED_USTRUCT_BODY()

	FBulletData() {
		bulletType = EBulletType::NormalBullet;
		damage = 1;
		damageOverTime = 0;
		initialSpeed = 1000.0f;
		maxSpeed = 2500.0f;
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EBulletType bulletType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int damageOverTime;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	float initialSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float maxSpeed;
};


USTRUCT(BlueprintType)
struct BULLETENCOREPROJECT_API FGunData {
	GENERATED_USTRUCT_BODY()

	FGunData() {
		rateOfFire = EFireRate::AutomaticFire;
		bIsSpreadFire = false;
		maxClipCount = 12;
		currentClipCount = maxClipCount;
		maxAmmoCount = 48;
		currentAmmoCount = 48;
		burstFireRoundCount = 1;
		timeBetweenShots = 0.7f;
		reloadTime = 1.5f;
		bullets = FBulletData();
	}

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EFireRate rateOfFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSpreadFire;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	int currentClipCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int maxClipCount;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	int currentAmmoCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int maxAmmoCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int burstFireRoundCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float timeBetweenShots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float reloadTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FBulletData bullets;
};


