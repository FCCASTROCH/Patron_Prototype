// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PATRON_PROTOTYPE_Patron_PrototypeProjectile_generated_h
#error "Patron_PrototypeProjectile.generated.h already included, missing '#pragma once' in Patron_PrototypeProjectile.h"
#endif
#define PATRON_PROTOTYPE_Patron_PrototypeProjectile_generated_h

#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_SPARSE_DATA
#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatron_PrototypeProjectile(); \
	friend struct Z_Construct_UClass_APatron_PrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_PrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(APatron_PrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPatron_PrototypeProjectile(); \
	friend struct Z_Construct_UClass_APatron_PrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_PrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Prototype"), NO_API) \
	DECLARE_SERIALIZER(APatron_PrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatron_PrototypeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatron_PrototypeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_PrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_PrototypeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_PrototypeProjectile(APatron_PrototypeProjectile&&); \
	NO_API APatron_PrototypeProjectile(const APatron_PrototypeProjectile&); \
public:


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_PrototypeProjectile(APatron_PrototypeProjectile&&); \
	NO_API APatron_PrototypeProjectile(const APatron_PrototypeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_PrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_PrototypeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatron_PrototypeProjectile)


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APatron_PrototypeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APatron_PrototypeProjectile, ProjectileMovement); }


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_12_PROLOG
#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_RPC_WRAPPERS \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_INCLASS \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_SPARSE_DATA \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_PROTOTYPE_API UClass* StaticClass<class APatron_PrototypeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Prototype_Source_Patron_Prototype_Patron_PrototypeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
