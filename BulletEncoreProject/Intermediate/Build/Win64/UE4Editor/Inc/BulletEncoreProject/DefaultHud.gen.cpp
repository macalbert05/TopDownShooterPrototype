// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletEncoreProject/Public/DefaultHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultHud() {}
// Cross Module References
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ADefaultHud_NoRegister();
	BULLETENCOREPROJECT_API UClass* Z_Construct_UClass_ADefaultHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BulletEncoreProject();
// End Cross Module References
	void ADefaultHud::StaticRegisterNativesADefaultHud()
	{
	}
	UClass* Z_Construct_UClass_ADefaultHud_NoRegister()
	{
		return ADefaultHud::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletEncoreProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DefaultHud.h" },
		{ "ModuleRelativePath", "Public/DefaultHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultHud_Statics::ClassParams = {
		&ADefaultHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultHud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefaultHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultHud, 1690342227);
	template<> BULLETENCOREPROJECT_API UClass* StaticClass<ADefaultHud>()
	{
		return ADefaultHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultHud(Z_Construct_UClass_ADefaultHud, &ADefaultHud::StaticClass, TEXT("/Script/BulletEncoreProject"), TEXT("ADefaultHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
