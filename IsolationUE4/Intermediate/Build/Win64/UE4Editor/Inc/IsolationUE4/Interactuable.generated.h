// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ISOLATIONUE4_Interactuable_generated_h
#error "Interactuable.generated.h already included, missing '#pragma once' in Interactuable.h"
#endif
#define ISOLATIONUE4_Interactuable_generated_h

#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBoxTriggerEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoxTriggerEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoxTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraccion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaccion(); \
		P_NATIVE_END; \
	}


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBoxTriggerEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoxTriggerEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoxTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BoxTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraccion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaccion(); \
		P_NATIVE_END; \
	}


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractuable(); \
	friend struct Z_Construct_UClass_AInteractuable_Statics; \
public: \
	DECLARE_CLASS(AInteractuable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(AInteractuable)


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractuable(); \
	friend struct Z_Construct_UClass_AInteractuable_Statics; \
public: \
	DECLARE_CLASS(AInteractuable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IsolationUE4"), NO_API) \
	DECLARE_SERIALIZER(AInteractuable)


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractuable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractuable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractuable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractuable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractuable(AInteractuable&&); \
	NO_API AInteractuable(const AInteractuable&); \
public:


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractuable(AInteractuable&&); \
	NO_API AInteractuable(const AInteractuable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractuable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractuable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractuable)


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_PRIVATE_PROPERTY_OFFSET
#define IsolationUE4_Source_IsolationUE4_Interactuable_h_9_PROLOG
#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_RPC_WRAPPERS \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_INCLASS \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IsolationUE4_Source_IsolationUE4_Interactuable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_PRIVATE_PROPERTY_OFFSET \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_INCLASS_NO_PURE_DECLS \
	IsolationUE4_Source_IsolationUE4_Interactuable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISOLATIONUE4_API UClass* StaticClass<class AInteractuable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IsolationUE4_Source_IsolationUE4_Interactuable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
