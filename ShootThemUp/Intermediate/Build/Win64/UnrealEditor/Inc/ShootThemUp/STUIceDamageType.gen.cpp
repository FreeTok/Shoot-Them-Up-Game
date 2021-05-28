// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Dev/STUIceDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUIceDamageType() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUIceDamageType_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUIceDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void USTUIceDamageType::StaticRegisterNativesUSTUIceDamageType()
	{
	}
	UClass* Z_Construct_UClass_USTUIceDamageType_NoRegister()
	{
		return USTUIceDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USTUIceDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUIceDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUIceDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/STUIceDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/STUIceDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUIceDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUIceDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTUIceDamageType_Statics::ClassParams = {
		&USTUIceDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUIceDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUIceDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUIceDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUIceDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUIceDamageType, 2502454696);
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUIceDamageType>()
	{
		return USTUIceDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUIceDamageType(Z_Construct_UClass_USTUIceDamageType, &USTUIceDamageType::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("USTUIceDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUIceDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
