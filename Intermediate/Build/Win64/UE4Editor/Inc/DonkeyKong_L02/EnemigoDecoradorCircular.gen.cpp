// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/EnemigoDecoradorCircular.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoDecoradorCircular() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemigoDecoradorCircular_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEnemigoDecoradorCircular();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEnemigoDecorador_NoRegister();
// End Cross Module References
	void AEnemigoDecoradorCircular::StaticRegisterNativesAEnemigoDecoradorCircular()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoDecoradorCircular_NoRegister()
	{
		return AEnemigoDecoradorCircular::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoDecoradorCircular_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoDecoradorCircular.h" },
		{ "ModuleRelativePath", "EnemigoDecoradorCircular.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemigoDecorador_NoRegister, (int32)VTABLE_OFFSET(AEnemigoDecoradorCircular, IEnemigoDecorador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoDecoradorCircular>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::ClassParams = {
		&AEnemigoDecoradorCircular::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoDecoradorCircular()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoDecoradorCircular_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoDecoradorCircular, 3649859008);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AEnemigoDecoradorCircular>()
	{
		return AEnemigoDecoradorCircular::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoDecoradorCircular(Z_Construct_UClass_AEnemigoDecoradorCircular, &AEnemigoDecoradorCircular::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AEnemigoDecoradorCircular"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoDecoradorCircular);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
