// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tonatiuh : ModuleRules
{
	public Tonatiuh(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
