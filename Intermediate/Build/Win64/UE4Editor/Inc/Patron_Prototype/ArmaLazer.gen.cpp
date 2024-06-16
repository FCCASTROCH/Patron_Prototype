// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/ArmaLazer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaLazer() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaLazer_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaLazer();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaBase();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void AArmaLazer::StaticRegisterNativesAArmaLazer()
	{
	}
	UClass* Z_Construct_UClass_AArmaLazer_NoRegister()
	{
		return AArmaLazer::StaticClass();
	}
	struct Z_Construct_UClass_AArmaLazer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaLazer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaLazer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaLazer.h" },
		{ "ModuleRelativePath", "ArmaLazer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaLazer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaLazer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaLazer_Statics::ClassParams = {
		&AArmaLazer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaLazer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaLazer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaLazer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaLazer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaLazer, 1992324799);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AArmaLazer>()
	{
		return AArmaLazer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaLazer(Z_Construct_UClass_AArmaLazer, &AArmaLazer::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AArmaLazer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaLazer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
