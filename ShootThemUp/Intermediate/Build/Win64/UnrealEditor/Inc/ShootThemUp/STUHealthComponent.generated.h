// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTTHEMUP_STUHealthComponent_generated_h
#error "STUHealthComponent.generated.h already included, missing '#pragma once' in STUHealthComponent.h"
#endif
#define SHOOTTHEMUP_STUHealthComponent_generated_h

#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_SPARSE_DATA
#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage);


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage);


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUHealthComponent(); \
	friend struct Z_Construct_UClass_USTUHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USTUHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthComponent)


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSTUHealthComponent(); \
	friend struct Z_Construct_UClass_USTUHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USTUHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthComponent)


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthComponent(USTUHealthComponent&&); \
	NO_API USTUHealthComponent(const USTUHealthComponent&); \
public:


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthComponent(USTUHealthComponent&&); \
	NO_API USTUHealthComponent(const USTUHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USTUHealthComponent)


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(USTUHealthComponent, MaxHealth); }


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_9_PROLOG
#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_SPARSE_DATA \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_RPC_WRAPPERS \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_INCLASS \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_SPARSE_DATA \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_INCLASS_NO_PURE_DECLS \
	ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class USTUHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootThemUp_Source_ShootThemUp_Public_Components_STUHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
