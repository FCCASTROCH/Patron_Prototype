// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/IPrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPrototype() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIPrototype();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void UIPrototype::StaticRegisterNativesUIPrototype()
	{
	}
	UClass* Z_Construct_UClass_UIPrototype_NoRegister()
	{
		return UIPrototype::StaticClass();
	}
	struct Z_Construct_UClass_UIPrototype_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIPrototype_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPrototype_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IPrototype.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIPrototype_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPrototype>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIPrototype_Statics::ClassParams = {
		&UIPrototype::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIPrototype_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIPrototype_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIPrototype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIPrototype_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIPrototype, 1178010031);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<UIPrototype>()
	{
		return UIPrototype::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIPrototype(Z_Construct_UClass_UIPrototype, &UIPrototype::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("UIPrototype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIPrototype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif