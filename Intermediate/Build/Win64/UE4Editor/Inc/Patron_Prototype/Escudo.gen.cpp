// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/Escudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudo() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AEscudo_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AEscudo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
// End Cross Module References
	void AEscudo::StaticRegisterNativesAEscudo()
	{
	}
	UClass* Z_Construct_UClass_AEscudo_NoRegister()
	{
		return AEscudo::StaticClass();
	}
	struct Z_Construct_UClass_AEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscudoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscudoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escudo.h" },
		{ "ModuleRelativePath", "Escudo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Statics::NewProp_EscudoMesh_MetaData[] = {
		{ "Category", "Escudo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escudo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudo_Statics::NewProp_EscudoMesh = { "EscudoMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudo, EscudoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudo_Statics::NewProp_EscudoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Statics::NewProp_EscudoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudo_Statics::NewProp_EscudoMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEscudo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(AEscudo, IIPrototype), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudo_Statics::ClassParams = {
		&AEscudo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudo, 3496853685);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AEscudo>()
	{
		return AEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudo(Z_Construct_UClass_AEscudo, &AEscudo::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
