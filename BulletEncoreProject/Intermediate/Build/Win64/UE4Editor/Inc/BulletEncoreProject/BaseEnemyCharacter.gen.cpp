// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/Public/BaseEnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyCharacter() {}
// Cross Module References
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGunData();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHealthInfo();
// End Cross Module References
	static FName NAME_ABaseEnemyCharacter_EquipEnemyWithGuns = FName(TEXT("EquipEnemyWithGuns"));
	void ABaseEnemyCharacter::EquipEnemyWithGuns(TArray<FGunData> const& GunsToEquip)
	{
		BaseEnemyCharacter_eventEquipEnemyWithGuns_Parms Parms;
		Parms.GunsToEquip=GunsToEquip;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyCharacter_EquipEnemyWithGuns),&Parms);
	}
	static FName NAME_ABaseEnemyCharacter_FireShotFromCurrentGun = FName(TEXT("FireShotFromCurrentGun"));
	void ABaseEnemyCharacter::FireShotFromCurrentGun(FVector const& bulletSpawnPoint)
	{
		BaseEnemyCharacter_eventFireShotFromCurrentGun_Parms Parms;
		Parms.bulletSpawnPoint=bulletSpawnPoint;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyCharacter_FireShotFromCurrentGun),&Parms);
	}
	static FName NAME_ABaseEnemyCharacter_OnDeath = FName(TEXT("OnDeath"));
	void ABaseEnemyCharacter::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyCharacter_OnDeath),NULL);
	}
	static FName NAME_ABaseEnemyCharacter_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	float ABaseEnemyCharacter::OnTakeDamage(float damage)
	{
		BaseEnemyCharacter_eventOnTakeDamage_Parms Parms;
		Parms.damage=damage;
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyCharacter_OnTakeDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseEnemyCharacter_ReloadCurrentGun = FName(TEXT("ReloadCurrentGun"));
	void ABaseEnemyCharacter::ReloadCurrentGun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseEnemyCharacter_ReloadCurrentGun),NULL);
	}
	void ABaseEnemyCharacter::StaticRegisterNativesABaseEnemyCharacter()
	{
		UClass* Class = ABaseEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipEnemyWithGuns", &ABaseEnemyCharacter::execEquipEnemyWithGuns },
			{ "FireShotFromCurrentGun", &ABaseEnemyCharacter::execFireShotFromCurrentGun },
			{ "GetCurrentGunData", &ABaseEnemyCharacter::execGetCurrentGunData },
			{ "OnTakeDamage", &ABaseEnemyCharacter::execOnTakeDamage },
			{ "ReloadCurrentGun", &ABaseEnemyCharacter::execReloadCurrentGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunsToEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GunsToEquip;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunsToEquip_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip = { "GunsToEquip", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyCharacter_eventEquipEnemyWithGuns_Parms, GunsToEquip), METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip_Inner = { "GunsToEquip", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGunData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::NewProp_GunsToEquip_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "EquipEnemyWithGuns", sizeof(BaseEnemyCharacter_eventEquipEnemyWithGuns_Parms), Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bulletSpawnPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::NewProp_bulletSpawnPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::NewProp_bulletSpawnPoint = { "bulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyCharacter_eventFireShotFromCurrentGun_Parms, bulletSpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::NewProp_bulletSpawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::NewProp_bulletSpawnPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::NewProp_bulletSpawnPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "FireShotFromCurrentGun", sizeof(BaseEnemyCharacter_eventFireShotFromCurrentGun_Parms), Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics
	{
		struct BaseEnemyCharacter_eventGetCurrentGunData_Parms
		{
			FGunData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyCharacter_eventGetCurrentGunData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGunData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "GetCurrentGunData", sizeof(BaseEnemyCharacter_eventGetCurrentGunData_Parms), Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "OnDeath", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyCharacter_eventOnTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemyCharacter_eventOnTakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "OnTakeDamage", sizeof(BaseEnemyCharacter_eventOnTakeDamage_Parms), Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemyCharacter, nullptr, "ReloadCurrentGun", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister()
	{
		return ABaseEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldGuns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeldGuns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeldGuns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_EquipEnemyWithGuns, "EquipEnemyWithGuns" }, // 3683492576
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_FireShotFromCurrentGun, "FireShotFromCurrentGun" }, // 746493972
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_GetCurrentGunData, "GetCurrentGunData" }, // 2774025873
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_OnDeath, "OnDeath" }, // 176342207
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_OnTakeDamage, "OnTakeDamage" }, // 1285687827
		{ &Z_Construct_UFunction_ABaseEnemyCharacter_ReloadCurrentGun, "ReloadCurrentGun" }, // 2946901203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "EnemyGuns" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((ABaseEnemyCharacter*)Obj)->bIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemyCharacter), &Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "EnemyGuns" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((ABaseEnemyCharacter*)Obj)->bCanFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire = { "bCanFire", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemyCharacter), &Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns_MetaData[] = {
		{ "Category", "EnemyGuns" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns = { "HeldGuns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemyCharacter, HeldGuns), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns_Inner = { "HeldGuns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGunData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_EnemyHealth_MetaData[] = {
		{ "Category", "EnemyHealth" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_EnemyHealth = { "EnemyHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemyCharacter, EnemyHealth), Z_Construct_UScriptStruct_FPlayerHealthInfo, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_EnemyHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_EnemyHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_bCanFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_HeldGuns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_EnemyHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams = {
		&ABaseEnemyCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemyCharacter, 1277597266);
	template<> BULLETENCOREPROJECT_API UClass* StaticClass<ABaseEnemyCharacter>()
	{
		return ABaseEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemyCharacter(Z_Construct_UClass_ABaseEnemyCharacter, &ABaseEnemyCharacter::StaticClass, TEXT("/Script/BulletEncoreProject"), TEXT("ABaseEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
