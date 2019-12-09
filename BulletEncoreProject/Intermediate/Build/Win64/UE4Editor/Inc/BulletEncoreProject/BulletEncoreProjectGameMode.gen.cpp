// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/BulletEncoreProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletEncoreProjectGameMode() {}
// Cross Module References
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ABulletEncoreProjectGameMode_NoRegister();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ABulletEncoreProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
// End Cross Module References
	void ABulletEncoreProjectGameMode::StaticRegisterNativesABulletEncoreProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABulletEncoreProjectGameMode_NoRegister()
	{
		return ABulletEncoreProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BulletEncoreProjectGameMode.h" },
		{ "ModuleRelativePath", "BulletEncoreProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletEncoreProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::ClassParams = {
		&ABulletEncoreProjectGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABulletEncoreProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABulletEncoreProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABulletEncoreProjectGameMode, 827424393);
	template<> BULLETENCOREPROJECT_API UClass* StaticClass<ABulletEncoreProjectGameMode>()
	{
		return ABulletEncoreProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABulletEncoreProjectGameMode(Z_Construct_UClass_ABulletEncoreProjectGameMode, &ABulletEncoreProjectGameMode::StaticClass, TEXT("/Script/BulletEncoreProject"), TEXT("ABulletEncoreProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletEncoreProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
