// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolationUE4/IsolationUE4PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsolationUE4PlayerController() {}
// Cross Module References
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4PlayerController_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_IsolationUE4();
// End Cross Module References
	void AIsolationUE4PlayerController::StaticRegisterNativesAIsolationUE4PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AIsolationUE4PlayerController_NoRegister()
	{
		return AIsolationUE4PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIsolationUE4PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIsolationUE4PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_IsolationUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IsolationUE4PlayerController.h" },
		{ "ModuleRelativePath", "IsolationUE4PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIsolationUE4PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsolationUE4PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIsolationUE4PlayerController_Statics::ClassParams = {
		&AIsolationUE4PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIsolationUE4PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIsolationUE4PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIsolationUE4PlayerController, 1353968189);
	template<> ISOLATIONUE4_API UClass* StaticClass<AIsolationUE4PlayerController>()
	{
		return AIsolationUE4PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIsolationUE4PlayerController(Z_Construct_UClass_AIsolationUE4PlayerController, &AIsolationUE4PlayerController::StaticClass, TEXT("/Script/IsolationUE4"), TEXT("AIsolationUE4PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIsolationUE4PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
