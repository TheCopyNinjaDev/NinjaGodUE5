// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NinjaGod : ModuleRules
{
	public NinjaGod(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
