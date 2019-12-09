// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/Public/PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawn() {}
// Cross Module References
	BULLETENCOREPROJECT_API UEnum* Z_Construct_UEnum_BulletEncoreProject_ERace();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_APlayerPawn_NoRegister();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_APlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_GetCurrentGunData();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGunData();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_OnTakeDamage();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun();
	BULLETENCOREPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHealthInfo();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	static UEnum* ERace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BulletEncoreProject_ERace, Z_Construct_UPackage__Script_BulletEncoreProject(), TEXT("ERace"));
		}
		return Singleton;
	}
	template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<ERace>()
	{
		return ERace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERace(ERace_StaticEnum, TEXT("/Script/BulletEncoreProject"), TEXT("ERace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BulletEncoreProject_ERace_Hash() { return 3085496816U; }
	UEnum* Z_Construct_UEnum_BulletEncoreProject_ERace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BulletEncoreProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERace"), 0, Get_Z_Construct_UEnum_BulletEncoreProject_ERace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERace::Human", (int64)ERace::Human },
				{ "ERace::Alien", (int64)ERace::Alien },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alien.DisplayName", "Alien" },
				{ "BlueprintType", "true" },
				{ "Human.DisplayName", "Human" },
				{ "ModuleRelativePath", "Public/PlayerPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BulletEncoreProject,
				nullptr,
				"ERace",
				"ERace",
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
	static FName NAME_APlayerPawn_FireShotFromCurrentGun = FName(TEXT("FireShotFromCurrentGun"));
	void APlayerPawn::FireShotFromCurrentGun()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_FireShotFromCurrentGun),NULL);
	}
	static FName NAME_APlayerPawn_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	float APlayerPawn::OnTakeDamage(float damage)
	{
		PlayerPawn_eventOnTakeDamage_Parms Parms;
		Parms.damage=damage;
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_OnTakeDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_APlayerPawn_ReloadCurrentGun = FName(TEXT("ReloadCurrentGun"));
	void APlayerPawn::ReloadCurrentGun()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerPawn_ReloadCurrentGun),NULL);
	}
	void APlayerPawn::StaticRegisterNativesAPlayerPawn()
	{
		UClass* Class = APlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireShotFromCurrentGun", &APlayerPawn::execFireShotFromCurrentGun },
			{ "GetCurrentAimDirection", &APlayerPawn::execGetCurrentAimDirection },
			{ "GetCurrentGunData", &APlayerPawn::execGetCurrentGunData },
			{ "GetMovementAxisInput", &APlayerPawn::execGetMovementAxisInput },
			{ "OnTakeDamage", &APlayerPawn::execOnTakeDamage },
			{ "ReloadCurrentGun", &APlayerPawn::execReloadCurrentGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "FireShotFromCurrentGun", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics
	{
		struct PlayerPawn_eventGetCurrentAimDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventGetCurrentAimDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "GetCurrentAimDirection", sizeof(PlayerPawn_eventGetCurrentAimDirection_Parms), Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics
	{
		struct PlayerPawn_eventGetCurrentGunData_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventGetCurrentGunData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGunData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "GetCurrentGunData", sizeof(PlayerPawn_eventGetCurrentGunData_Parms), Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_GetCurrentGunData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_GetCurrentGunData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics
	{
		struct PlayerPawn_eventGetMovementAxisInput_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventGetMovementAxisInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "GetMovementAxisInput", sizeof(PlayerPawn_eventGetMovementAxisInput_Parms), Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventOnTakeDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawn_eventOnTakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "OnTakeDamage", sizeof(PlayerPawn_eventOnTakeDamage_Parms), Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawn, nullptr, "ReloadCurrentGun", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerPawn_NoRegister()
	{
		return APlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldGuns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeldGuns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeldGuns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerWeaponMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerWeaponMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAimCapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAimCapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawn_FireShotFromCurrentGun, "FireShotFromCurrentGun" }, // 2685527718
		{ &Z_Construct_UFunction_APlayerPawn_GetCurrentAimDirection, "GetCurrentAimDirection" }, // 415277727
		{ &Z_Construct_UFunction_APlayerPawn_GetCurrentGunData, "GetCurrentGunData" }, // 2816321921
		{ &Z_Construct_UFunction_APlayerPawn_GetMovementAxisInput, "GetMovementAxisInput" }, // 4248125404
		{ &Z_Construct_UFunction_APlayerPawn_OnTakeDamage, "OnTakeDamage" }, // 2137136892
		{ &Z_Construct_UFunction_APlayerPawn_ReloadCurrentGun, "ReloadCurrentGun" }, // 3796389799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, BulletSpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletSpawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns_MetaData[] = {
		{ "Category", "PlayerGuns" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns = { "HeldGuns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, HeldGuns), METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns_Inner = { "HeldGuns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGunData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerHealth), Z_Construct_UScriptStruct_FPlayerHealthInfo, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "PlayerMovement" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_movementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerWeaponMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerWeaponMeshComponent = { "PlayerWeaponMeshComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerWeaponMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerWeaponMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerWeaponMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerSkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerSkeletalMeshComponent = { "PlayerSkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerSkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerAimCapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerAimCapsuleComponent = { "PlayerAimCapsuleComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerAimCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerAimCapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerAimCapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerCapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerCapsuleComponent = { "PlayerCapsuleComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawn, PlayerCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerCapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerCapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_BulletSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_HeldGuns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_movementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerWeaponMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerSkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerAimCapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawn_Statics::NewProp_PlayerCapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawn_Statics::ClassParams = {
		&APlayerPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawn, 60788024);
	template<> BULLETENCOREPROJECT_API UClass* StaticClass<APlayerPawn>()
	{
		return APlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawn(Z_Construct_UClass_APlayerPawn, &APlayerPawn::StaticClass, TEXT("/Script/BulletEncoreProject"), TEXT("APlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
