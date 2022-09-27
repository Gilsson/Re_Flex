// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Re_Flex_Proj : ModuleRules
{
	public Re_Flex_Proj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
