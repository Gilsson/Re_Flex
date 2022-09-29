// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Re_Flex_Proj/Public/ReCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReCoreTypes() {}
// Cross Module References
	RE_FLEX_PROJ_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
	UPackage* Z_Construct_UPackage__Script_Re_Flex_Proj();
// End Cross Module References
class UScriptStruct* FGameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RE_FLEX_PROJ_API uint32 Get_Z_Construct_UScriptStruct_FGameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameData, Z_Construct_UPackage__Script_Re_Flex_Proj(), TEXT("GameData"), sizeof(FGameData), Get_Z_Construct_UScriptStruct_FGameData_Hash());
	}
	return Singleton;
}
template<> RE_FLEX_PROJ_API UScriptStruct* StaticStruct<FGameData>()
{
	return FGameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameData(FGameData::StaticStruct, TEXT("/Script/Re_Flex_Proj"), TEXT("GameData"), false, nullptr, nullptr);
static struct FScriptStruct_Re_Flex_Proj_StaticRegisterNativesFGameData
{
	FScriptStruct_Re_Flex_Proj_StaticRegisterNativesFGameData()
	{
		UScriptStruct::DeferCppStructOps<FGameData>(FName(TEXT("GameData")));
	}
} ScriptStruct_Re_Flex_Proj_StaticRegisterNativesFGameData;
	struct Z_Construct_UScriptStruct_FGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ReCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, Player), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Player,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Re_Flex_Proj,
		nullptr,
		&NewStructOps,
		"GameData",
		sizeof(FGameData),
		alignof(FGameData),
		Z_Construct_UScriptStruct_FGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Re_Flex_Proj();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameData"), sizeof(FGameData), Get_Z_Construct_UScriptStruct_FGameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameData_Hash() { return 916391995U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
