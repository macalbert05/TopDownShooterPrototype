// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BULLETENCOREPROJECT_BulletEncoreProjectProjectile_generated_h
#error "BulletEncoreProjectProjectile.generated.h already included, missing '#pragma once' in BulletEncoreProjectProjectile.h"
#endif
#define BULLETENCOREPROJECT_BulletEncoreProjectProjectile_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletEncoreProjectProjectile(); \
	friend struct Z_Construct_UClass_ABulletEncoreProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ABulletEncoreProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABulletEncoreProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABulletEncoreProjectProjectile(); \
	friend struct Z_Construct_UClass_ABulletEncoreProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ABulletEncoreProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABulletEncoreProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletEncoreProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletEncoreProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletEncoreProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletEncoreProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletEncoreProjectProjectile(ABulletEncoreProjectProjectile&&); \
	NO_API ABulletEncoreProjectProjectile(const ABulletEncoreProjectProjectile&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletEncoreProjectProjectile(ABulletEncoreProjectProjectile&&); \
	NO_API ABulletEncoreProjectProjectile(const ABulletEncoreProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletEncoreProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletEncoreProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletEncoreProjectProjectile)


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ABulletEncoreProjectProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABulletEncoreProjectProjectile, ProjectileMovement); }


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_12_PROLOG
#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class ABulletEncoreProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
