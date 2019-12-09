// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLETENCOREPROJECT_WeaponData_generated_h
#error "WeaponData.generated.h already included, missing '#pragma once' in WeaponData.h"
#endif
#define BULLETENCOREPROJECT_WeaponData_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Public_WeaponData_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<struct FGunData>();

#define BulletEncoreProject_Source_BulletEncoreProject_Public_WeaponData_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBulletData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<struct FBulletData>();

#define BulletEncoreProject_Source_BulletEncoreProject_Public_WeaponData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerHealthInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<struct FPlayerHealthInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Public_WeaponData_h


#define FOREACH_ENUM_EFIRERATE(op) \
	op(EFireRate::AutomaticFire) \
	op(EFireRate::SemiAutoFire) \
	op(EFireRate::ManualFire) \
	op(EFireRate::BurstFire) 

enum class EFireRate : uint8;
template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<EFireRate>();

#define FOREACH_ENUM_EBULLETTYPE(op) \
	op(EBulletType::NormalBullet) \
	op(EBulletType::DamageOverTimeBullet) \
	op(EBulletType::BouncingBullet) 

enum class EBulletType : uint8;
template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<EBulletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
