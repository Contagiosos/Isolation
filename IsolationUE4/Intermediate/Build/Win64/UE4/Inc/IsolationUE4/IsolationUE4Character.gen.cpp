// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolationUE4/IsolationUE4Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsolationUE4Character() {}
// Cross Module References
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4Character_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AIsolationUE4Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_IsolationUE4();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AInteractuable_NoRegister();
// End Cross Module References
	void AIsolationUE4Character::StaticRegisterNativesAIsolationUE4Character()
	{
	}
	UClass* Z_Construct_UClass_AIsolationUE4Character_NoRegister()
	{
		return AIsolationUE4Character::StaticClass();
	}
	struct Z_Construct_UClass_AIsolationUE4Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnAnimation_MetaData[];
#endif
		static void NewProp_bOnAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractuableActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractuableActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIsolationUE4Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IsolationUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4Character_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IsolationUE4Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IsolationUE4Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IsolationUE4Character.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIsolationUE4Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IsolationUE4Character.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIsolationUE4Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation_MetaData[] = {
		{ "Category", "bool" },
		{ "ModuleRelativePath", "IsolationUE4Character.h" },
	};
#endif
	void Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation_SetBit(void* Obj)
	{
		((AIsolationUE4Character*)Obj)->bOnAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation = { "bOnAnimation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIsolationUE4Character), &Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_InteractuableActual_MetaData[] = {
		{ "Category", "Interactuable" },
		{ "ModuleRelativePath", "IsolationUE4Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_InteractuableActual = { "InteractuableActual", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIsolationUE4Character, InteractuableActual), Z_Construct_UClass_AInteractuable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_InteractuableActual_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_InteractuableActual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsolationUE4Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_bOnAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsolationUE4Character_Statics::NewProp_InteractuableActual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIsolationUE4Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsolationUE4Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIsolationUE4Character_Statics::ClassParams = {
		&AIsolationUE4Character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIsolationUE4Character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AIsolationUE4Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIsolationUE4Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIsolationUE4Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIsolationUE4Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIsolationUE4Character, 827158635);
	template<> ISOLATIONUE4_API UClass* StaticClass<AIsolationUE4Character>()
	{
		return AIsolationUE4Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIsolationUE4Character(Z_Construct_UClass_AIsolationUE4Character, &AIsolationUE4Character::StaticClass, TEXT("/Script/IsolationUE4"), TEXT("AIsolationUE4Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIsolationUE4Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
