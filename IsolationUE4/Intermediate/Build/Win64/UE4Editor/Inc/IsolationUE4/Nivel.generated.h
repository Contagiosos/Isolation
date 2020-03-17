// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISOLATIONUE4_Nivel_generated_h
#error "Nivel.generated.h already included, missing '#pragma once' in Nivel.h"
#endif
#define ISOLATIONUE4_Nivel_generated_h

#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_RPC_WRAPPERS
#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_EVENT_PARMS \
	struct Nivel_eventSetDirection_Parms \
	{ \
		int32 Direction; \
	}; \
	struct Nivel_eventSetPosition_Parms \
	{ \
		int32 x; \
		int32 y; \
	};


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_CALLBACK_WRAPPERS
#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANivel(); \
	friend struct Z_Construct_UClass_ANivel_Statics; \
public: \
	DECLARE_CLASS(ANivel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(ANivel)


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANivel(); \
	friend struct Z_Construct_UClass_ANivel_Statics; \
public: \
	DECLARE_CLASS(ANivel, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(ANivel)


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANivel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANivel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANivel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANivel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANivel(ANivel&&); \
	NO_API ANivel(const ANivel&); \
public:


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANivel(ANivel&&); \
	NO_API ANivel(const ANivel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANivel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANivel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANivel)


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_PRIVATE_PROPERTY_OFFSET
#define IsolationUE4_Source_IsolationUE4_Nivel_h_9_PROLOG \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_EVENT_PARMS


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_RPC_WRAPPERS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_CALLBACK_WRAPPERS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_INCLASS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IsolationUE4_Source_IsolationUE4_Nivel_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_CALLBACK_WRAPPERS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_INCLASS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_Nivel_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISOLATIONUE4_API UClass* StaticClass<class ANivel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IsolationUE4_Source_IsolationUE4_Nivel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
