// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRON_PROTOTYPE_ArmaBase_generated_h
#error "ArmaBase.generated.h already included, missing '#pragma once' in ArmaBase.h"
#endif
#define PATRON_PROTOTYPE_ArmaBase_generated_h

#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_SPARSE_DATA
#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_RPC_WRAPPERS
#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmaBase(); \
	friend struct Z_Construct_UClass_AArmaBase_Statics; \
public: \
	DECLARE_CLASS(AArmaBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(AArmaBase) \
	virtual UObject* _getUObject() const override { return const_cast<AArmaBase*>(this); }


#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAArmaBase(); \
	friend struct Z_Construct_UClass_AArmaBase_Statics; \
public: \
	DECLARE_CLASS(AArmaBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(AArmaBase) \
	virtual UObject* _getUObject() const override { return const_cast<AArmaBase*>(this); }


#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmaBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmaBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmaBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmaBase(AArmaBase&&); \
	NO_API AArmaBase(const AArmaBase&); \
public:


#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmaBase(AArmaBase&&); \
	NO_API AArmaBase(const AArmaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmaBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmaBase)


#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_PRIVATE_PROPERTY_OFFSET
#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_11_PROLOG
#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_RPC_WRAPPERS \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_INCLASS \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_INCLASS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_ArmaBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_PROTOTYPE_API UClass* StaticClass<class AArmaBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Prototype_Source_Patron_Prototype_ArmaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
