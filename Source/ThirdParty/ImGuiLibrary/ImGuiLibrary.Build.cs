using UnrealBuildTool;

public class ImGuiLibrary : ModuleRules
{
	public ImGuiLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
		Type = ModuleType.External;

		PublicDependencyModuleNames.Add("Core"); // Assertion macros, FVector
	}
}
