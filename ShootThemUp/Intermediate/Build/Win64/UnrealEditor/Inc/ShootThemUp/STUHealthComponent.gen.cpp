// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Components/STUHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUHealthComponent() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUHealthComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUHealthComponent::execOnTakeAnyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUHealthComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void USTUHealthComponent::StaticRegisterNativesUSTUHealthComponent()
	{
		UClass* Class = USTUHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDead", &USTUHealthComponent::execIsDead },
			{ "OnTakeAnyDamage", &USTUHealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics
	{
		struct STUHealthComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUHealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUHealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/STUHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUHealthComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(STUHealthComponent_eventIsDead_Parms), Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUHealthComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUHealthComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics
	{
		struct STUHealthComponent_eventOnTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUHealthComponent_eventOnTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUHealthComponent_eventOnTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUHealthComponent_eventOnTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUHealthComponent_eventOnTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUHealthComponent_eventOnTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/STUHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUHealthComponent, nullptr, "OnTakeAnyDamage", nullptr, nullptr, sizeof(STUHealthComponent_eventOnTakeAnyDamage_Parms), Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUHealthComponent_NoRegister()
	{
		return USTUHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUHealthComponent_IsDead, "IsDead" }, // 2969195315
		{ &Z_Construct_UFunction_USTUHealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 3192997583
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/STUHealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STUHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "STUHealthComponent" },
		{ "ModuleRelativePath", "Public/Components/STUHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_USTUHealthComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthComponent_Statics::NewProp_MaxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthComponent_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTUHealthComponent_Statics::ClassParams = {
		&USTUHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTUHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUHealthComponent, 773106642);
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUHealthComponent>()
	{
		return USTUHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUHealthComponent(Z_Construct_UClass_USTUHealthComponent, &USTUHealthComponent::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("USTUHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
