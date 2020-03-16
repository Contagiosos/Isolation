// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolationUE4/IsolationUE4GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsolationUE4GameMode() {}
// Cross Module References
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4GameMode_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IsolationUE4();
// End Cross Module References
	void AIsolationUE4GameMode::StaticRegisterNativesAIsolationUE4GameMode()
	{
	}
	UClass* Z_Construct_UClass_AIsolationUE4GameMode_NoRegister()
	{
		return AIsolationUE4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIsolationUE4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIsolationUE4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IsolationUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IsolationUE4GameMode.h" },
		{ "ModuleRelativePath", "IsolationUE4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIsolationUE4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsolationUE4GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIsolationUE4GameMode_Statics::ClassParams = {
		&AIsolationUE4GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIsolationUE4GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIsolationUE4GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIsolationUE4GameMode, 2811106553);
	template<> ISOLATIONUE4_API UClass* StaticClass<AIsolationUE4GameMode>()
	{
		return AIsolationUE4GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIsolationUE4GameMode(Z_Construct_UClass_AIsolationUE4GameMode, &AIsolationUE4GameMode::StaticClass, TEXT("/Script/IsolationUE4"), TEXT("AIsolationUE4GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIsolationUE4GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
