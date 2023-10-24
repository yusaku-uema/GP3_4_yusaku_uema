// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GP3_4_yusaku_uema : ModuleRules
{
	public GP3_4_yusaku_uema(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
