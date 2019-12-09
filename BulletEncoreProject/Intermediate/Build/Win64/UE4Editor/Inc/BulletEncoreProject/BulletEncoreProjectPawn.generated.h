// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLETENCOREPROJECT_BulletEncoreProjectPawn_generated_h
#error "BulletEncoreProjectPawn.generated.h already included, missing '#pragma once' in BulletEncoreProjectPawn.h"
#endif
#define BULLETENCOREPROJECT_BulletEncoreProjectPawn_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_RPC_WRAPPERS
#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletEncoreProjectPawn(); \
	friend struct Z_Construct_UClass_ABulletEncoreProjectPawn_Statics; \
public: \
	DECLARE_CLASS(ABulletEncoreProjectPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABulletEncoreProjectPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABulletEncoreProjectPawn(); \
	friend struct Z_Construct_UClass_ABulletEncoreProjectPawn_Statics; \
public: \
	DECLARE_CLASS(ABulletEncoreProjectPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABulletEncoreProjectPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletEncoreProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletEncoreProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletEncoreProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletEncoreProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletEncoreProjectPawn(ABulletEncoreProjectPawn&&); \
	NO_API ABulletEncoreProjectPawn(const ABulletEncoreProjectPawn&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletEncoreProjectPawn(ABulletEncoreProjectPawn&&); \
	NO_API ABulletEncoreProjectPawn(const ABulletEncoreProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletEncoreProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletEncoreProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletEncoreProjectPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ABulletEncoreProjectPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ABulletEncoreProjectPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABulletEncoreProjectPawn, CameraBoom); }


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_9_PROLOG
#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class ABulletEncoreProjectPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_BulletEncoreProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
