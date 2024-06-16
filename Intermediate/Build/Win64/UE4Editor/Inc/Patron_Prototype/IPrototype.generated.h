// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRON_PROTOTYPE_IPrototype_generated_h
#error "IPrototype.generated.h already included, missing '#pragma once' in IPrototype.h"
#endif
#define PATRON_PROTOTYPE_IPrototype_generated_h

#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_SPARSE_DATA
#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_RPC_WRAPPERS
#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_PROTOTYPE_API UIPrototype(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPrototype) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_PROTOTYPE_API, UIPrototype); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPrototype); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_PROTOTYPE_API UIPrototype(UIPrototype&&); \
	PATRON_PROTOTYPE_API UIPrototype(const UIPrototype&); \
public:


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_PROTOTYPE_API UIPrototype(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_PROTOTYPE_API UIPrototype(UIPrototype&&); \
	PATRON_PROTOTYPE_API UIPrototype(const UIPrototype&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_PROTOTYPE_API, UIPrototype); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPrototype); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPrototype)


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIPrototype(); \
	friend struct Z_Construct_UClass_UIPrototype_Statics; \
public: \
	DECLARE_CLASS(UIPrototype, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), PATRON_PROTOTYPE_API) \
	DECLARE_SERIALIZER(UIPrototype)


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIPrototype() {} \
public: \
	typedef UIPrototype UClassType; \
	typedef IIPrototype ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIPrototype() {} \
public: \
	typedef UIPrototype UClassType; \
	typedef IIPrototype ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_10_PROLOG
#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_RPC_WRAPPERS \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_IPrototype_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_IPrototype_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_PROTOTYPE_API UClass* StaticClass<class UIPrototype>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Prototype_Source_Patron_Prototype_IPrototype_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
