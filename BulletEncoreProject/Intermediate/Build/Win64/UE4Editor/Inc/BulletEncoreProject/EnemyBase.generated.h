// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BULLETENCOREPROJECT_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define BULLETENCOREPROJECT_EnemyBase_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAltitudeControl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AltitudeControl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvade) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_player_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Evade(Z_Param_player_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_player_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Chase(Z_Param_player_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeHealth(Z_Param_value_); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAltitudeControl) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AltitudeControl(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvade) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_player_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Evade(Z_Param_player_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_player_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Chase(Z_Param_player_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxHealth(Z_Param_value_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_value_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeHealth(Z_Param_value_); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currentHealth() { return STRUCT_OFFSET(AEnemyBase, currentHealth); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(AEnemyBase, maxHealth); } \
	FORCEINLINE static uint32 __PPO__initialAltitude() { return STRUCT_OFFSET(AEnemyBase, initialAltitude); }


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_9_PROLOG
#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Public_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
