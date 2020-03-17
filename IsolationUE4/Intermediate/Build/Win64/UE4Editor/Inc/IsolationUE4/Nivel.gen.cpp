// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolationUE4/Nivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivel() {}
// Cross Module References
	ISOLATIONUE4_API UClass* Z_Construct_UClass_ANivel_NoRegister();
	ISOLATIONUE4_API UClass* Z_Construct_UClass_ANivel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_IsolationUE4();
	ISOLATIONUE4_API UFunction* Z_Construct_UFunction_ANivel_SetDirection();
	ISOLATIONUE4_API UFunction* Z_Construct_UFunction_ANivel_SetPosition();
	ISOLATIONUE4_API UFunction* Z_Construct_UFunction_ANivel_UpdateDoors();
// End Cross Module References
	static FName NAME_ANivel_SetDirection = FName(TEXT("SetDirection"));
	void ANivel::SetDirection(int32 Direction)
	{
		Nivel_eventSetDirection_Parms Parms;
		Parms.Direction=Direction;
		ProcessEvent(FindFunctionChecked(NAME_ANivel_SetDirection),&Parms);
	}
	static FName NAME_ANivel_SetPosition = FName(TEXT("SetPosition"));
	void ANivel::SetPosition(int32 x, int32 y)
	{
		Nivel_eventSetPosition_Parms Parms;
		Parms.x=x;
		Parms.y=y;
		ProcessEvent(FindFunctionChecked(NAME_ANivel_SetPosition),&Parms);
	}
	static FName NAME_ANivel_UpdateDoors = FName(TEXT("UpdateDoors"));
	void ANivel::UpdateDoors()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANivel_UpdateDoors),NULL);
	}
	void ANivel::StaticRegisterNativesANivel()
	{
	}
	struct Z_Construct_UFunction_ANivel_SetDirection_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANivel_SetDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nivel_eventSetDirection_Parms, Direction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANivel_SetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANivel_SetDirection_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANivel_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANivel_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANivel, nullptr, "SetDirection", nullptr, nullptr, sizeof(Nivel_eventSetDirection_Parms), Z_Construct_UFunction_ANivel_SetDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANivel_SetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANivel_SetDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANivel_SetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANivel_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANivel_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANivel_SetPosition_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANivel_SetPosition_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nivel_eventSetPosition_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANivel_SetPosition_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Nivel_eventSetPosition_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANivel_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANivel_SetPosition_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANivel_SetPosition_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANivel_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANivel_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANivel, nullptr, "SetPosition", nullptr, nullptr, sizeof(Nivel_eventSetPosition_Parms), Z_Construct_UFunction_ANivel_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANivel_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANivel_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANivel_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANivel_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANivel_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANivel_UpdateDoors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANivel_UpdateDoors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANivel_UpdateDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANivel, nullptr, "UpdateDoors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANivel_UpdateDoors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANivel_UpdateDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANivel_UpdateDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANivel_UpdateDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANivel_NoRegister()
	{
		return ANivel::StaticClass();
	}
	struct Z_Construct_UClass_ANivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IsolationUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANivel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANivel_SetDirection, "SetDirection" }, // 3763795647
		{ &Z_Construct_UFunction_ANivel_SetPosition, "SetPosition" }, // 2052983241
		{ &Z_Construct_UFunction_ANivel_UpdateDoors, "UpdateDoors" }, // 2797449899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nivel.h" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANivel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivel, Y), METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANivel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivel, X), METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANivel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivel_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivel_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivel_Statics::ClassParams = {
		&ANivel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANivel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivel, 3298191900);
	template<> ISOLATIONUE4_API UClass* StaticClass<ANivel>()
	{
		return ANivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivel(Z_Construct_UClass_ANivel, &ANivel::StaticClass, TEXT("/Script/IsolationUE4"), TEXT("ANivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
