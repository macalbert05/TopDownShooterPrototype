// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGunData;
struct FVector;
#ifdef BULLETENCOREPROJECT_BaseEnemyCharacter_generated_h
#error "BaseEnemyCharacter.generated.h already included, missing '#pragma once' in BaseEnemyCharacter.h"
#endif
#define BULLETENCOREPROJECT_BaseEnemyCharacter_generated_h

#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_RPC_WRAPPERS \
	virtual void ReloadCurrentGun_Implementation(); \
	virtual void FireShotFromCurrentGun_Implementation(FVector const& bulletSpawnPoint); \
	virtual float OnTakeDamage_Implementation(float damage); \
	virtual void EquipEnemyWithGuns_Implementation(TArray<FGunData> const& GunsToEquip); \
 \
	DECLARE_FUNCTION(execGetCurrentGunData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGunData*)Z_Param__Result=P_THIS->GetCurrentGunData(); \
		P_NATIVE_END; \
	} \
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
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bulletSpawnPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShotFromCurrentGun_Implementation(Z_Param_Out_bulletSpawnPoint); \
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
	DECLARE_FUNCTION(execEquipEnemyWithGuns) \
	{ \
		P_GET_TARRAY_REF(FGunData,Z_Param_Out_GunsToEquip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipEnemyWithGuns_Implementation(Z_Param_Out_GunsToEquip); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGunData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGunData*)Z_Param__Result=P_THIS->GetCurrentGunData(); \
		P_NATIVE_END; \
	} \
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
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bulletSpawnPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShotFromCurrentGun_Implementation(Z_Param_Out_bulletSpawnPoint); \
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
	DECLARE_FUNCTION(execEquipEnemyWithGuns) \
	{ \
		P_GET_TARRAY_REF(FGunData,Z_Param_Out_GunsToEquip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipEnemyWithGuns_Implementation(Z_Param_Out_GunsToEquip); \
		P_NATIVE_END; \
	}


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_EVENT_PARMS \
	struct BaseEnemyCharacter_eventEquipEnemyWithGuns_Parms \
	{ \
		TArray<FGunData> GunsToEquip; \
	}; \
	struct BaseEnemyCharacter_eventFireShotFromCurrentGun_Parms \
	{ \
		FVector bulletSpawnPoint; \
	}; \
	struct BaseEnemyCharacter_eventOnTakeDamage_Parms \
	{ \
		float damage; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseEnemyCharacter_eventOnTakeDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_CALLBACK_WRAPPERS
#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemyCharacter(); \
	friend struct Z_Construct_UClass_ABaseEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyCharacter)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemyCharacter(); \
	friend struct Z_Construct_UClass_ABaseEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BulletEncoreProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyCharacter)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemyCharacter(ABaseEnemyCharacter&&); \
	NO_API ABaseEnemyCharacter(const ABaseEnemyCharacter&); \
public:


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemyCharacter(ABaseEnemyCharacter&&); \
	NO_API ABaseEnemyCharacter(const ABaseEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemyCharacter)


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_11_PROLOG \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_EVENT_PARMS


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_RPC_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_CALLBACK_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_INCLASS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_CALLBACK_WRAPPERS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETENCOREPROJECT_API UClass* StaticClass<class ABaseEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletEncoreProject_Source_BulletEncoreProject_Public_BaseEnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
