// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FGunData;
#ifdef BULLETENCOREPROJECT_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define BULLETENCOREPROJECT_PlayerPawn_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_RPC_WRAPPERS \
	virtual void ReloadCurrentGun_Implementation(); \
	virtual void FireShotFromCurrentGun_Implementation(); \
	virtual float OnTakeDamage_Implementation(float damage); \
 \
	DECLARE_FUNCTION(execReloadCurrentGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadCurrentGun_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireShotFromCurrentGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShotFromCurrentGun_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OnTakeDamage_Implementation(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementAxisInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMovementAxisInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGunData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGunData*)Z_Param__Result=P_THIS->GetCurrentGunData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAimDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentAimDirection(); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadCurrentGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadCurrentGun_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireShotFromCurrentGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShotFromCurrentGun_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OnTakeDamage_Implementation(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementAxisInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMovementAxisInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGunData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGunData*)Z_Param__Result=P_THIS->GetCurrentGunData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAimDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentAimDirection(); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_EVENT_PARMS \
	struct PlayerPawn_eventOnTakeDamage_Parms \
	{ \
		float damage; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlayerPawn_eventOnTakeDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_CALLBACK_WRAPPERS
#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_STANDARD_CONSTRUCTORS \
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


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_PRIVATE_PROPERTY_OFFSET
#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_27_PROLOG \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_EVENT_PARMS


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_CALLBACK_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_CALLBACK_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Public_PlayerPawn_h


#define FOREACH_ENUM_ERACE(op) \
	op(ERace::Human) \
	op(ERace::Alien) 

enum class ERace : uint8;
template<> BULLETENCOREPROJECT_API UEnum* StaticEnum<ERace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
