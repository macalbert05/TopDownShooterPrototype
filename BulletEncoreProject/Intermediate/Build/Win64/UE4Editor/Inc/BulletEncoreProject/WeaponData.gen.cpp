// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/Private/WeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponData() {}
// Cross Module References
	BULLETENCOREPROJECT_API UEnum* Z_Construct_UEnum_BulletEncoreProject_EFireRate();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
	BULLETENCOREPROJECT_API UEnum* Z_Construct_UEnum_BulletEncoreProject_EBulletType();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGunData();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBulletData();
// End Cross Module References
	static UEnum* EFireRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BulletEncoreProject_EFireRate, Z_Construct_UPackage__Script_BulletEncoreProject(), TEXT("EFireRate"));
		}
		return Singleton;
	}
	template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<EFireRate>()
	{
		return EFireRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireRate(EFireRate_StaticEnum, TEXT("/Script/BulletEncoreProject"), TEXT("EFireRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BulletEncoreProject_EFireRate_Hash() { return 1445275681U; }
	UEnum* Z_Construct_UEnum_BulletEncoreProject_EFireRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BulletEncoreProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireRate"), 0, Get_Z_Construct_UEnum_BulletEncoreProject_EFireRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireRate::AutomaticFire", (int64)EFireRate::AutomaticFire },
				{ "EFireRate::SemiAutoFire", (int64)EFireRate::SemiAutoFire },
				{ "EFireRate::ManualFire", (int64)EFireRate::ManualFire },
				{ "EFireRate::BurstFire", (int64)EFireRate::BurstFire },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutomaticFire.DisplayName", "Automatic" },
				{ "BlueprintType", "true" },
				{ "BurstFire.DisplayName", "Burst" },
				{ "ManualFire.DisplayName", "Manual" },
				{ "ModuleRelativePath", "Private/WeaponData.h" },
				{ "SemiAutoFire.DisplayName", "SemiAuto" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BulletEncoreProject,
				nullptr,
				"EFireRate",
				"EFireRate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBulletType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BulletEncoreProject_EBulletType, Z_Construct_UPackage__Script_BulletEncoreProject(), TEXT("EBulletType"));
		}
		return Singleton;
	}
	template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<EBulletType>()
	{
		return EBulletType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBulletType(EBulletType_StaticEnum, TEXT("/Script/BulletEncoreProject"), TEXT("EBulletType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BulletEncoreProject_EBulletType_Hash() { return 1467289403U; }
	UEnum* Z_Construct_UEnum_BulletEncoreProject_EBulletType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BulletEncoreProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBulletType"), 0, Get_Z_Construct_UEnum_BulletEncoreProject_EBulletType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBulletType::NormalBullet", (int64)EBulletType::NormalBullet },
				{ "EBulletType::DamageOverTimeBullet", (int64)EBulletType::DamageOverTimeBullet },
				{ "EBulletType::BouncingBullet", (int64)EBulletType::BouncingBullet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BouncingBullet.DisplayName", "BouncingBullet" },
				{ "DamageOverTimeBullet.DisplayName", "DamageOverTimeBullet" },
				{ "ModuleRelativePath", "Private/WeaponData.h" },
				{ "NormalBullet.DisplayName", "NormalBullet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BulletEncoreProject,
				nullptr,
				"EBulletType",
				"EBulletType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGunData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BULLETENCOREPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FGunData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunData, Z_Construct_UPackage__Script_BulletEncoreProject(), TEXT("GunData"), sizeof(FGunData), Get_Z_Construct_UScriptStruct_FGunData_Hash());
	}
	return Singleton;
}
template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<FGunData>()
{
	return FGunData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGunData(FGunData::StaticStruct, TEXT("/Script/BulletEncoreProject"), TEXT("GunData"), false, nullptr, nullptr);
static struct FScriptStruct_BulletEncoreProject_StaticRegisterNativesFGunData
{
	FScriptStruct_BulletEncoreProject_StaticRegisterNativesFGunData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GunData")),new UScriptStruct::TCppStructOps<FGunData>);
	}
} ScriptStruct_BulletEncoreProject_StaticRegisterNativesFGunData;
	struct Z_Construct_UScriptStruct_FGunData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_burstFireRoundCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_burstFireRoundCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClipCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClipCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentClipCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentClipCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpreadFire_MetaData[];
#endif
		static void NewProp_bIsSpreadFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpreadFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rateOfFire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rateOfFire_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGunData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bullets_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bullets = { "bullets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, bullets), Z_Construct_UScriptStruct_FBulletData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bullets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, reloadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_reloadTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_reloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_timeBetweenShots_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_timeBetweenShots = { "timeBetweenShots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, timeBetweenShots), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_timeBetweenShots_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_timeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_burstFireRoundCount_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_burstFireRoundCount = { "burstFireRoundCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, burstFireRoundCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_burstFireRoundCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_burstFireRoundCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxAmmoCount_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxAmmoCount = { "maxAmmoCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, maxAmmoCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxAmmoCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentAmmoCount_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentAmmoCount = { "currentAmmoCount", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, currentAmmoCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentAmmoCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxClipCount_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxClipCount = { "maxClipCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, maxClipCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxClipCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxClipCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentClipCount_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentClipCount = { "currentClipCount", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, currentClipCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentClipCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentClipCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire_SetBit(void* Obj)
	{
		((FGunData*)Obj)->bIsSpreadFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire = { "bIsSpreadFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGunData), &Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire_MetaData[] = {
		{ "Category", "GunData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire = { "rateOfFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunData, rateOfFire), Z_Construct_UEnum_BulletEncoreProject_EFireRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_reloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_timeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_burstFireRoundCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_maxClipCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_currentClipCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_bIsSpreadFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunData_Statics::NewProp_rateOfFire_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
		nullptr,
		&NewStructOps,
		"GunData",
		sizeof(FGunData),
		alignof(FGunData),
		Z_Construct_UScriptStruct_FGunData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGunData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGunData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGunData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGunData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BulletEncoreProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GunData"), sizeof(FGunData), Get_Z_Construct_UScriptStruct_FGunData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGunData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGunData_Hash() { return 4113244624U; }
class UScriptStruct* FBulletData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BULLETENCOREPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FBulletData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulletData, Z_Construct_UPackage__Script_BulletEncoreProject(), TEXT("BulletData"), sizeof(FBulletData), Get_Z_Construct_UScriptStruct_FBulletData_Hash());
	}
	return Singleton;
}
template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<FBulletData>()
{
	return FBulletData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBulletData(FBulletData::StaticStruct, TEXT("/Script/BulletEncoreProject"), TEXT("BulletData"), false, nullptr, nullptr);
static struct FScriptStruct_BulletEncoreProject_StaticRegisterNativesFBulletData
{
	FScriptStruct_BulletEncoreProject_StaticRegisterNativesFBulletData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BulletData")),new UScriptStruct::TCppStructOps<FBulletData>);
	}
} ScriptStruct_BulletEncoreProject_StaticRegisterNativesFBulletData;
	struct Z_Construct_UScriptStruct_FBulletData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageOverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damageOverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bulletType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bulletType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBulletData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulletData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "BulletData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulletData, maxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_maxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_initialSpeed_MetaData[] = {
		{ "Category", "BulletData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_initialSpeed = { "initialSpeed", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulletData, initialSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_initialSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_initialSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damageOverTime_MetaData[] = {
		{ "Category", "BulletData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damageOverTime = { "damageOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulletData, damageOverTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damageOverTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damageOverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "BulletData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulletData, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType_MetaData[] = {
		{ "Category", "BulletData" },
		{ "ModuleRelativePath", "Private/WeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType = { "bulletType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulletData, bulletType), Z_Construct_UEnum_BulletEncoreProject_EBulletType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBulletData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_maxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_initialSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damageOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulletData_Statics::NewProp_bulletType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBulletData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
		nullptr,
		&NewStructOps,
		"BulletData",
		sizeof(FBulletData),
		alignof(FBulletData),
		Z_Construct_UScriptStruct_FBulletData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBulletData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBulletData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBulletData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBulletData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BulletEncoreProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BulletData"), sizeof(FBulletData), Get_Z_Construct_UScriptStruct_FBulletData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBulletData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBulletData_Hash() { return 939204268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
