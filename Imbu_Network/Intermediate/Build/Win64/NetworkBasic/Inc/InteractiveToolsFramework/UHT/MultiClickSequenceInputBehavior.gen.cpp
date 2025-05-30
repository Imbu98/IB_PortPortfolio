// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/MultiClickSequenceInputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiClickSequenceInputBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UMultiClickSequenceInputBehavior
void UMultiClickSequenceInputBehavior::StaticRegisterNativesUMultiClickSequenceInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiClickSequenceInputBehavior);
UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior_NoRegister()
{
	return UMultiClickSequenceInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiClickSequenceInputBehavior implements a generic multi-click-sequence input behavior.\n * For example this behavior could be used to implement a multi-click polygon-drawing interaction.\n *\n * The internal state machine works as follows:\n *   1) on input-device-button-press, check if target wants to begin sequence. If so, begin capture.\n *   2) on button *release*, check if target wants to continue or terminate sequence\n *       a) if terminate, release capture\n *       b) if continue, do nothing (capture continues between presses)\n *\n * The target will receive \"preview\" notifications (basically hover) during updates where there is\n * not a release. This can be used to (eg) update a rubber-band selection end point\n * \n * @todo it may be better to implement this as multiple captures, and use hover callbacks to \n * do the between-capture previews. holding capture across mouse release is not ideal.\n */" },
		{ "IncludePath", "BaseBehaviors/MultiClickSequenceInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MultiClickSequenceInputBehavior.h" },
		{ "ToolTip", "UMultiClickSequenceInputBehavior implements a generic multi-click-sequence input behavior.\nFor example this behavior could be used to implement a multi-click polygon-drawing interaction.\n\nThe internal state machine works as follows:\n  1) on input-device-button-press, check if target wants to begin sequence. If so, begin capture.\n  2) on button *release*, check if target wants to continue or terminate sequence\n      a) if terminate, release capture\n      b) if continue, do nothing (capture continues between presses)\n\nThe target will receive \"preview\" notifications (basically hover) during updates where there is\nnot a release. This can be used to (eg) update a rubber-band selection end point\n\n@todo it may be better to implement this as multiple captures, and use hover callbacks to\ndo the between-capture previews. holding capture across mouse release is not ideal." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiClickSequenceInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::ClassParams = {
	&UMultiClickSequenceInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiClickSequenceInputBehavior()
{
	if (!Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.OuterSingleton, Z_Construct_UClass_UMultiClickSequenceInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMultiClickSequenceInputBehavior>()
{
	return UMultiClickSequenceInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiClickSequenceInputBehavior);
UMultiClickSequenceInputBehavior::~UMultiClickSequenceInputBehavior() {}
// End Class UMultiClickSequenceInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MultiClickSequenceInputBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiClickSequenceInputBehavior, UMultiClickSequenceInputBehavior::StaticClass, TEXT("UMultiClickSequenceInputBehavior"), &Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiClickSequenceInputBehavior), 238675405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MultiClickSequenceInputBehavior_h_1468927630(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MultiClickSequenceInputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MultiClickSequenceInputBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
