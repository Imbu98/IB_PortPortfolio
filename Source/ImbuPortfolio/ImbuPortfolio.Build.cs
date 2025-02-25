// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ImbuPortfolio : ModuleRules
{
	public ImbuPortfolio(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "AnimGraphRuntime"});

		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","UMG","GameplayTags" ,"AIModule","Niagara","TargetSystem"});
	}
}
