// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolationUE4/Boton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoton() {}
// Cross Module References
	ISOLATIONUE4_API UClass* Z_Construct_UClass_ABoton_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_ABoton();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_AInteractuable();
	UPackage* Z_Construct_UPackage__Script_IsolationUE4();
// End Cross Module References
	void ABoton::StaticRegisterNativesABoton()
	{
	}
	UClass* Z_Construct_UClass_ABoton_NoRegister()
	{
		return ABoton::StaticClass();
	}
	struct Z_Construct_UClass_ABoton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractuable,
		(UObject* (*)())Z_Construct_UPackage__Script_IsolationUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Boton.h" },
		{ "ModuleRelativePath", "Boton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoton_Statics::ClassParams = {
		&ABoton::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABoton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoton, 863276651);
	template<> ISOLATIONUE4_API UClass* StaticClass<ABoton>()
	{
		return ABoton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoton(Z_Construct_UClass_ABoton, &ABoton::StaticClass, TEXT("/Script/IsolationUE4"), TEXT("ABoton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
