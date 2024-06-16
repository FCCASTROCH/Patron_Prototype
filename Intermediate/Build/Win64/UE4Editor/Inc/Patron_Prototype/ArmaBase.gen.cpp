// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/ArmaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaBase() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaBase_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AArmaBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
// End Cross Module References
	void AArmaBase::StaticRegisterNativesAArmaBase()
	{
	}
	UClass* Z_Construct_UClass_AArmaBase_NoRegister()
	{
		return AArmaBase::StaticClass();
	}
	struct Z_Construct_UClass_AArmaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemigoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveEnemigoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmaBase.h" },
		{ "ModuleRelativePath", "ArmaBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaBase_Statics::NewProp_NaveEnemigoMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ArmaBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmaBase_Statics::NewProp_NaveEnemigoMesh = { "NaveEnemigoMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmaBase, NaveEnemigoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmaBase_Statics::NewProp_NaveEnemigoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaBase_Statics::NewProp_NaveEnemigoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmaBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmaBase_Statics::NewProp_NaveEnemigoMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AArmaBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(AArmaBase, IIPrototype), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaBase_Statics::ClassParams = {
		&AArmaBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmaBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmaBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmaBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaBase, 1183478940);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AArmaBase>()
	{
		return AArmaBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaBase(Z_Construct_UClass_AArmaBase, &AArmaBase::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AArmaBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
