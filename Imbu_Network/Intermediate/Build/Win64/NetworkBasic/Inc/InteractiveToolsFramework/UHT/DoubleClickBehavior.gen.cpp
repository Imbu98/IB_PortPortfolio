// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/DoubleClickBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoubleClickBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UDoubleClickInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UDoubleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalDoubleClickInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalDoubleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UDoubleClickInputBehavior
void UDoubleClickInputBehavior::StaticRegisterNativesUDoubleClickInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoubleClickInputBehavior);
UClass* Z_Construct_UClass_UDoubleClickInputBehavior_NoRegister()
{
	return UDoubleClickInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UDoubleClickInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDoubleClickInputBehavior implements a standard \"button-click\"-style input behavior.\n * The state machine works as follows:\n *    1) on input-device-button-double-click, hit-test the target. If hit, begin capture\n *    2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n *    \n * The second hit-test is required to allow the click to be \"cancelled\" by moving away\n * from the target. This is standard GUI behavior. You can disable this second hit test\n * using the .HitTestOnRelease property. This is strongly discouraged.\n *    \n * The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.\n *\n * The expected sequence of mouse events for a double click is:\n *    a. MouseDown\n *    b. MouseUp\n *    c. MouseDoubleClick   <-- State machine starts here.\n *    d. MouseUp\n */" },
		{ "IncludePath", "BaseBehaviors/DoubleClickBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/DoubleClickBehavior.h" },
		{ "ToolTip", "UDoubleClickInputBehavior implements a standard \"button-click\"-style input behavior.\nThe state machine works as follows:\n   1) on input-device-button-double-click, hit-test the target. If hit, begin capture\n   2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n\nThe second hit-test is required to allow the click to be \"cancelled\" by moving away\nfrom the target. This is standard GUI behavior. You can disable this second hit test\nusing the .HitTestOnRelease property. This is strongly discouraged.\n\nThe hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.\n\nThe expected sequence of mouse events for a double click is:\n   a. MouseDown\n   b. MouseUp\n   c. MouseDoubleClick   <-- State machine starts here.\n   d. MouseUp" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoubleClickInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDoubleClickInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleClickInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoubleClickInputBehavior_Statics::ClassParams = {
	&UDoubleClickInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleClickInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoubleClickInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoubleClickInputBehavior()
{
	if (!Z_Registration_Info_UClass_UDoubleClickInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoubleClickInputBehavior.OuterSingleton, Z_Construct_UClass_UDoubleClickInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoubleClickInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UDoubleClickInputBehavior>()
{
	return UDoubleClickInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoubleClickInputBehavior);
UDoubleClickInputBehavior::~UDoubleClickInputBehavior() {}
// End Class UDoubleClickInputBehavior

// Begin Class ULocalDoubleClickInputBehavior
void ULocalDoubleClickInputBehavior::StaticRegisterNativesULocalDoubleClickInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalDoubleClickInputBehavior);
UClass* Z_Construct_UClass_ULocalDoubleClickInputBehavior_NoRegister()
{
	return ULocalDoubleClickInputBehavior::StaticClass();
}
struct Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An implementation of UDoubleClickInputBehavior that also implements IClickBehaviorTarget directly, via a set \n * of local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\n * This avoids having to create a separate IClickBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/DoubleClickBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/DoubleClickBehavior.h" },
		{ "ToolTip", "An implementation of UDoubleClickInputBehavior that also implements IClickBehaviorTarget directly, via a set\nof local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\nThis avoids having to create a separate IClickBehaviorTarget implementation for trivial use-cases." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalDoubleClickInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDoubleClickInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::ClassParams = {
	&ULocalDoubleClickInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalDoubleClickInputBehavior()
{
	if (!Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.OuterSingleton, Z_Construct_UClass_ULocalDoubleClickInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalDoubleClickInputBehavior>()
{
	return ULocalDoubleClickInputBehavior::StaticClass();
}
ULocalDoubleClickInputBehavior::ULocalDoubleClickInputBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalDoubleClickInputBehavior);
ULocalDoubleClickInputBehavior::~ULocalDoubleClickInputBehavior() {}
// End Class ULocalDoubleClickInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_DoubleClickBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoubleClickInputBehavior, UDoubleClickInputBehavior::StaticClass, TEXT("UDoubleClickInputBehavior"), &Z_Registration_Info_UClass_UDoubleClickInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoubleClickInputBehavior), 2518209346U) },
		{ Z_Construct_UClass_ULocalDoubleClickInputBehavior, ULocalDoubleClickInputBehavior::StaticClass, TEXT("ULocalDoubleClickInputBehavior"), &Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalDoubleClickInputBehavior), 2572123933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_DoubleClickBehavior_h_376652462(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_DoubleClickBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_DoubleClickBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
