// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/ArmaRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaRifle() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaRifle_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaRifle();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaBase();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void AArmaRifle::StaticRegisterNativesAArmaRifle()
	{
	}
	UClass* Z_Construct_UClass_AArmaRifle_NoRegister()
	{
		return AArmaRifle::StaticClass();
	}
	struct Z_Construct_UClass_AArmaRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaRifle.h" },
		{ "ModuleRelativePath", "ArmaRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaRifle_Statics::ClassParams = {
		&AArmaRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaRifle, 1134406794);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AArmaRifle>()
	{
		return AArmaRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaRifle(Z_Construct_UClass_AArmaRifle, &AArmaRifle::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AArmaRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
