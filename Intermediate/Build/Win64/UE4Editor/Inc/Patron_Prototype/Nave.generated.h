// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRON_PROTOTYPE_Nave_generated_h
#error "Nave.generated.h already included, missing '#pragma once' in Nave.h"
#endif
#define PATRON_PROTOTYPE_Nave_generated_h

#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_SPARSE_DATA
#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_RPC_WRAPPERS
#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ANave) \
	virtual UObject* _getUObject() const override { return const_cast<ANave*>(this); }


#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(ANave) \
	virtual UObject* _getUObject() const override { return const_cast<ANave*>(this); }


#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public:


#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANave)


#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_PRIVATE_PROPERTY_OFFSET
#define Patron_Prototype_Source_Patron_Prototype_Nave_h_10_PROLOG
#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_RPC_WRAPPERS \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_INCLASS \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_Nave_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_INCLASS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_Nave_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_PROTOTYPE_API UClass* StaticClass<class ANave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Prototype_Source_Patron_Prototype_Nave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
