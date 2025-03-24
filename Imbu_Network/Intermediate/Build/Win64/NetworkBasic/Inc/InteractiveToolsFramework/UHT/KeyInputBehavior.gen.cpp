// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/KeyInputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyInputBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UKeyInputBehavior
void UKeyInputBehavior::StaticRegisterNativesUKeyInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyInputBehavior);
UClass* Z_Construct_UClass_UKeyInputBehavior_NoRegister()
{
	return UKeyInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UKeyInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UKeyInputBehavior provides a keyboard capturing behavior that works with single or multiple keys. Provided with a single key, the behavior triggers\n * OnKeyPressed and OnKeyReleased events upon seeing the target key pressed down and released for the first time, ignoring any other key presses.\n * When provided with multiple keys, the Behavior has variable behavior depending on whether bRequireAllKeys is set.\n * \n * If true, the behavior sequence is as follows:\n * \n *   1. Initiate capture when any of the target keys are pressed.\n *   2. Continue capture until all target keys are pressed simultaneously\n *   3. Upon seeing the last key to complete the full set of target keys, issue an OnKeyPressed for whichever key completed the requirement.\n *\x09\x09""3b. If any of the target keys are released after the full set was pressed, issue an OnKeyReleased for whichever key was released, then end Capture.\n *   4. If at any point all target keys are released after capture begins, end capture. \n * \n * If false, the behavior sequence is as follows:\n * \n *   1. Initiate capture when any of the target keys are pressed.\n *   2. Continue capture while any of the target keys are still pressed.\n *   3. Issue an OnKeyPressed for any target key pressed during the capture period.\n *   4. Issue an OnKeyReleased for any target key released during the capture period.\n *   5. If at any point all target keys are released, end capture.\n * \n */" },
		{ "IncludePath", "BaseBehaviors/KeyInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/KeyInputBehavior.h" },
		{ "ToolTip", "UKeyInputBehavior provides a keyboard capturing behavior that works with single or multiple keys. Provided with a single key, the behavior triggers\nOnKeyPressed and OnKeyReleased events upon seeing the target key pressed down and released for the first time, ignoring any other key presses.\nWhen provided with multiple keys, the Behavior has variable behavior depending on whether bRequireAllKeys is set.\n\nIf true, the behavior sequence is as follows:\n\n  1. Initiate capture when any of the target keys are pressed.\n  2. Continue capture until all target keys are pressed simultaneously\n  3. Upon seeing the last key to complete the full set of target keys, issue an OnKeyPressed for whichever key completed the requirement.\n            3b. If any of the target keys are released after the full set was pressed, issue an OnKeyReleased for whichever key was released, then end Capture.\n  4. If at any point all target keys are released after capture begins, end capture.\n\nIf false, the behavior sequence is as follows:\n\n  1. Initiate capture when any of the target keys are pressed.\n  2. Continue capture while any of the target keys are still pressed.\n  3. Issue an OnKeyPressed for any target key pressed during the capture period.\n  4. Issue an OnKeyReleased for any target key released during the capture period.\n  5. If at any point all target keys are released, end capture." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKeyInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyInputBehavior_Statics::ClassParams = {
	&UKeyInputBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyInputBehavior()
{
	if (!Z_Registration_Info_UClass_UKeyInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyInputBehavior.OuterSingleton, Z_Construct_UClass_UKeyInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UKeyInputBehavior>()
{
	return UKeyInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyInputBehavior);
UKeyInputBehavior::~UKeyInputBehavior() {}
// End Class UKeyInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyInputBehavior, UKeyInputBehavior::StaticClass, TEXT("UKeyInputBehavior"), &Z_Registration_Info_UClass_UKeyInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyInputBehavior), 708936865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_2463909665(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyInputBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
