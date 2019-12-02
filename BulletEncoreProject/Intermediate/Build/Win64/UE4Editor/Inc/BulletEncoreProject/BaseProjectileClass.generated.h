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
#ifdef BULLETENCOREPROJECT_BaseProjectileClass_generated_h
#error "BaseProjectileClass.generated.h already included, missing '#pragma once' in BaseProjectileClass.h"
#endif
#define BULLETENCOREPROJECT_BaseProjectileClass_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseProjectileClass(); \
	friend struct Z_Construct_UClass_ABaseProjectileClass_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectileClass, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectileClass)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseProjectileClass(); \
	friend struct Z_Construct_UClass_ABaseProjectileClass_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectileClass, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectileClass)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseProjectileClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseProjectileClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectileClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectileClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectileClass(ABaseProjectileClass&&); \
	NO_API ABaseProjectileClass(const ABaseProjectileClass&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectileClass(ABaseProjectileClass&&); \
	NO_API ABaseProjectileClass(const ABaseProjectileClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectileClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectileClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseProjectileClass)


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_PRIVATE_PROPERTY_OFFSET
#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_11_PROLOG
#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class ABaseProjectileClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Private_BaseProjectileClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
