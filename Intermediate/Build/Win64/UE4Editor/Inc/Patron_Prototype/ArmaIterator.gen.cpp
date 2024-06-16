// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/ArmaIterator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaIterator() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaIterator_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaIterator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIIterator_NoRegister();
// End Cross Module References
	void AArmaIterator::StaticRegisterNativesAArmaIterator()
	{
	}
	UClass* Z_Construct_UClass_AArmaIterator_NoRegister()
	{
		return AArmaIterator::StaticClass();
	}
	struct Z_Construct_UClass_AArmaIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaIterator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaIterator.h" },
		{ "ModuleRelativePath", "ArmaIterator.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AArmaIterator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIIterator_NoRegister, (int32)VTABLE_OFFSET(AArmaIterator, IIIterator), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaIterator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaIterator_Statics::ClassParams = {
		&AArmaIterator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaIterator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaIterator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaIterator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaIterator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaIterator, 1809846390);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AArmaIterator>()
	{
		return AArmaIterator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaIterator(Z_Construct_UClass_AArmaIterator, &AArmaIterator::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AArmaIterator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaIterator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
