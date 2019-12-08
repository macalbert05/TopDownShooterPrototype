// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/Public/EnemyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}
// Cross Module References
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_AEnemyBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_AltitudeControl();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_ChangeHealth();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_Chase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_Evade();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_GetCurrentHealth();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_GetMaxHealth();
	BULLETENCOREPROJECT_API UFunction* Z_Construct_UFunction_AEnemyBase_SetMaxHealth();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyBase::StaticRegisterNativesAEnemyBase()
	{
		UClass* Class = AEnemyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AltitudeControl", &AEnemyBase::execAltitudeControl },
			{ "ChangeHealth", &AEnemyBase::execChangeHealth },
			{ "Chase", &AEnemyBase::execChase },
			{ "Evade", &AEnemyBase::execEvade },
			{ "GetCurrentHealth", &AEnemyBase::execGetCurrentHealth },
			{ "GetMaxHealth", &AEnemyBase::execGetMaxHealth },
			{ "SetMaxHealth", &AEnemyBase::execSetMaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "AltitudeControl", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_AltitudeControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_AltitudeControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics
	{
		struct EnemyBase_eventChangeHealth_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::NewProp_value_ = { "value_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventChangeHealth_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "ChangeHealth", sizeof(EnemyBase_eventChangeHealth_Parms), Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_ChangeHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_ChangeHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_Chase_Statics
	{
		struct EnemyBase_eventChase_Parms
		{
			FVector player_;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_player_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_Chase_Statics::NewProp_player_ = { "player_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventChase_Parms, player_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_Chase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_Chase_Statics::NewProp_player_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_Chase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_Chase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "Chase", sizeof(EnemyBase_eventChase_Parms), Z_Construct_UFunction_AEnemyBase_Chase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Chase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_Chase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Chase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_Chase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_Chase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_Evade_Statics
	{
		struct EnemyBase_eventEvade_Parms
		{
			FVector player_;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_player_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_Evade_Statics::NewProp_player_ = { "player_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventEvade_Parms, player_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_Evade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_Evade_Statics::NewProp_player_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_Evade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_Evade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "Evade", sizeof(EnemyBase_eventEvade_Parms), Z_Construct_UFunction_AEnemyBase_Evade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Evade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_Evade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Evade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_Evade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_Evade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics
	{
		struct EnemyBase_eventGetCurrentHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetCurrentHealth", sizeof(EnemyBase_eventGetCurrentHealth_Parms), Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics
	{
		struct EnemyBase_eventGetMaxHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "GetMaxHealth", sizeof(EnemyBase_eventGetMaxHealth_Parms), Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics
	{
		struct EnemyBase_eventSetMaxHealth_Parms
		{
			int32 value_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::NewProp_value_ = { "value_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventSetMaxHealth_Parms, value_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::NewProp_value_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "SetMaxHealth", sizeof(EnemyBase_eventSetMaxHealth_Parms), Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
	{
		return AEnemyBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_AltitudeControl, "AltitudeControl" }, // 1363414067
		{ &Z_Construct_UFunction_AEnemyBase_ChangeHealth, "ChangeHealth" }, // 2780350892
		{ &Z_Construct_UFunction_AEnemyBase_Chase, "Chase" }, // 3004052697
		{ &Z_Construct_UFunction_AEnemyBase_Evade, "Evade" }, // 1127871705
		{ &Z_Construct_UFunction_AEnemyBase_GetCurrentHealth, "GetCurrentHealth" }, // 45534921
		{ &Z_Construct_UFunction_AEnemyBase_GetMaxHealth, "GetMaxHealth" }, // 2729434040
		{ &Z_Construct_UFunction_AEnemyBase_SetMaxHealth, "SetMaxHealth" }, // 1847637930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_initialAltitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_initialAltitude = { "initialAltitude", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, initialAltitude), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_initialAltitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_initialAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, maxHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
		{ "ToolTip", "Variable" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, currentHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_currentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Sphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxAltitude_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxAltitude = { "maxAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, maxAltitude), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxAltitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_minAltitude_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_minAltitude = { "minAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, minAltitude), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_minAltitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_minAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/EnemyBase.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, speed), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_initialAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_currentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_maxAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_minAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
		&AEnemyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyBase, 1481341561);
	template<> BULLETENCOREPROJECT_API UClass* StaticClass<AEnemyBase>()
	{
		return AEnemyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyBase(Z_Construct_UClass_AEnemyBase, &AEnemyBase::StaticClass, TEXT("/Script/BulletEncoreProject"), TEXT("AEnemyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
