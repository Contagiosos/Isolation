// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISOLATIONUE4_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define ISOLATIONUE4_MainPlayerController_generated_h

#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveInteractWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisplayInteractWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayInteractWidget(); \
		P_NATIVE_END; \
	}


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveInteractWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisplayInteractWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisplayInteractWidget(); \
		P_NATIVE_END; \
	}


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController)


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_12_PROLOG
#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_RPC_WRAPPERS \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_INCLASS \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISOLATIONUE4_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IsolationUE4_Source_IsolationUE4_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
