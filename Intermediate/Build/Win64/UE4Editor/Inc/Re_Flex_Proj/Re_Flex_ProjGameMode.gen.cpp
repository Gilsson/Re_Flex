// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Re_Flex_Proj/Re_Flex_ProjGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRe_Flex_ProjGameMode() {}
// Cross Module References
	RE_FLEX_PROJ_API UClass* Z_Construct_UClass_ARe_Flex_ProjGameMode_NoRegister();
	RE_FLEX_PROJ_API UClass* Z_Construct_UClass_ARe_Flex_ProjGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Re_Flex_Proj();
// End Cross Module References
	void ARe_Flex_ProjGameMode::StaticRegisterNativesARe_Flex_ProjGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARe_Flex_ProjGameMode_NoRegister()
	{
		return ARe_Flex_ProjGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Re_Flex_Proj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Re_Flex_ProjGameMode.h" },
		{ "ModuleRelativePath", "Re_Flex_ProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARe_Flex_ProjGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::ClassParams = {
		&ARe_Flex_ProjGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARe_Flex_ProjGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARe_Flex_ProjGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARe_Flex_ProjGameMode, 3430474612);
	template<> RE_FLEX_PROJ_API UClass* StaticClass<ARe_Flex_ProjGameMode>()
	{
		return ARe_Flex_ProjGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARe_Flex_ProjGameMode(Z_Construct_UClass_ARe_Flex_ProjGameMode, &ARe_Flex_ProjGameMode::StaticClass, TEXT("/Script/Re_Flex_Proj"), TEXT("ARe_Flex_ProjGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARe_Flex_ProjGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
