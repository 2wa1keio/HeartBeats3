// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HeartBeats3 : ModuleRules
{
	public HeartBeats3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
