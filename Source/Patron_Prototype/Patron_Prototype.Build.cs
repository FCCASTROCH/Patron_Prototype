// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patron_Prototype : ModuleRules
{
	public Patron_Prototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
