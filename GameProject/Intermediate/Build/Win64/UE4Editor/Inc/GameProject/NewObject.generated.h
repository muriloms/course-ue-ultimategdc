// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPROJECT_NewObject_generated_h
#error "NewObject.generated.h already included, missing '#pragma once' in NewObject.h"
#endif
#define GAMEPROJECT_NewObject_generated_h

#define GameProject_Source_GameProject_NewObject_h_15_SPARSE_DATA
#define GameProject_Source_GameProject_NewObject_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define GameProject_Source_GameProject_NewObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define GameProject_Source_GameProject_NewObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewObject(); \
	friend struct Z_Construct_UClass_UNewObject_Statics; \
public: \
	DECLARE_CLASS(UNewObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameProject"), NO_API) \
	DECLARE_SERIALIZER(UNewObject)


#define GameProject_Source_GameProject_NewObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNewObject(); \
	friend struct Z_Construct_UClass_UNewObject_Statics; \
public: \
	DECLARE_CLASS(UNewObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameProject"), NO_API) \
	DECLARE_SERIALIZER(UNewObject)


#define GameProject_Source_GameProject_NewObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewObject(UNewObject&&); \
	NO_API UNewObject(const UNewObject&); \
public:


#define GameProject_Source_GameProject_NewObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewObject(UNewObject&&); \
	NO_API UNewObject(const UNewObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewObject)


#define GameProject_Source_GameProject_NewObject_h_15_PRIVATE_PROPERTY_OFFSET
#define GameProject_Source_GameProject_NewObject_h_12_PROLOG
#define GameProject_Source_GameProject_NewObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameProject_Source_GameProject_NewObject_h_15_PRIVATE_PROPERTY_OFFSET \
	GameProject_Source_GameProject_NewObject_h_15_SPARSE_DATA \
	GameProject_Source_GameProject_NewObject_h_15_RPC_WRAPPERS \
	GameProject_Source_GameProject_NewObject_h_15_INCLASS \
	GameProject_Source_GameProject_NewObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameProject_Source_GameProject_NewObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameProject_Source_GameProject_NewObject_h_15_PRIVATE_PROPERTY_OFFSET \
	GameProject_Source_GameProject_NewObject_h_15_SPARSE_DATA \
	GameProject_Source_GameProject_NewObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameProject_Source_GameProject_NewObject_h_15_INCLASS_NO_PURE_DECLS \
	GameProject_Source_GameProject_NewObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPROJECT_API UClass* StaticClass<class UNewObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameProject_Source_GameProject_NewObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
