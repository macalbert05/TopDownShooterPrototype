// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BULLETENCOREPROJECT_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define BULLETENCOREPROJECT_PlayerPawn_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStats_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BULLETENCOREPROJECT_API UScriptStruct* StaticStruct<struct FPlayerStats>();

#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAimDirection(); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAimDirection(); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_PRIVATE_PROPERTY_OFFSET
#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_55_PROLOG
#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Private_PlayerPawn_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::NormalBullet) 

enum class EAmmoType : uint8;
template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
