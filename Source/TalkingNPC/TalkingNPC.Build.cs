// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TalkingNPC : ModuleRules
{
	public TalkingNPC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "ReadyPlayerMe", "OVRLipSync" });
	}
}
