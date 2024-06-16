// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/coleccion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecoleccion() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_Acoleccion_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_Acoleccion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIColeccion_NoRegister();
// End Cross Module References
	void Acoleccion::StaticRegisterNativesAcoleccion()
	{
	}
	UClass* Z_Construct_UClass_Acoleccion_NoRegister()
	{
		return Acoleccion::StaticClass();
	}
	struct Z_Construct_UClass_Acoleccion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acoleccion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acoleccion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "coleccion.h" },
		{ "ModuleRelativePath", "coleccion.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_Acoleccion_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIColeccion_NoRegister, (int32)VTABLE_OFFSET(Acoleccion, IIColeccion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acoleccion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acoleccion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acoleccion_Statics::ClassParams = {
		&Acoleccion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acoleccion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acoleccion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acoleccion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acoleccion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acoleccion, 644856656);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<Acoleccion>()
	{
		return Acoleccion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acoleccion(Z_Construct_UClass_Acoleccion, &Acoleccion::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("Acoleccion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acoleccion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
