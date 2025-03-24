// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldOfViewNetObjectPrioritizer() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer();
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig();
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UFieldOfViewNetObjectPrioritizerConfig
void UFieldOfViewNetObjectPrioritizerConfig::StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldOfViewNetObjectPrioritizerConfig);
UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister()
{
	return UFieldOfViewNetObjectPrioritizerConfig::StaticClass();
}
struct Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSphereRadius_MetaData[] = {
		{ "Comment", "/* Inner sphere radius that will set InnerSpherePriority on objects in it. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Inner sphere radius that will set InnerSpherePriority on objects in it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerSpherePriority_MetaData[] = {
		{ "Comment", "/** Priority for objects inside the inner sphere */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority for objects inside the inner sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterSphereRadius_MetaData[] = {
		{ "Comment", "/* Outer sphere radius that will set OuterSpherePriority on objects in it. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Outer sphere radius that will set OuterSpherePriority on objects in it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterSpherePriority_MetaData[] = {
		{ "Comment", "/** Priority for objects inside the outer sphere */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority for objects inside the outer sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeFieldOfViewDegrees_MetaData[] = {
		{ "Comment", "/* The field of view used to form the cone. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "The field of view used to form the cone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeLength_MetaData[] = {
		{ "Comment", "/** Give max cone priority up to this length of the cone. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Give max cone priority up to this length of the cone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeLength_MetaData[] = {
		{ "Comment", "/** Total cone length. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Total cone length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinConePriority_MetaData[] = {
		{ "Comment", "/** The minimum priority to set for objects within the cone. The priority falls off linearly from InnerConeLength to ConeLength. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "The minimum priority to set for objects within the cone. The priority falls off linearly from InnerConeLength to ConeLength." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConePriority_MetaData[] = {
		{ "Comment", "/** The maximum priority to set for objects within the cone, up to InnerConeLength. The priority falls off linearly from InnerConeLength to ConeLength. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "The maximum priority to set for objects within the cone, up to InnerConeLength. The priority falls off linearly from InnerConeLength to ConeLength." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightWidth_MetaData[] = {
		{ "Comment", "/** Line of sight length is same as cone length but the width needs to be specified. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Line of sight length is same as cone length but the width needs to be specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightPriority_MetaData[] = {
		{ "Comment", "/** Priority for objects in line of sight. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority for objects in line of sight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutsidePriority_MetaData[] = {
		{ "Comment", "/** Priority outside the field of view cone, spheres and line of sight */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority outside the field of view cone, spheres and line of sight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerSphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerSpherePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterSphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterSpherePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeFieldOfViewDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinConePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxConePriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutsidePriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldOfViewNetObjectPrioritizerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerSphereRadius = { "InnerSphereRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, InnerSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSphereRadius_MetaData), NewProp_InnerSphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerSpherePriority = { "InnerSpherePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, InnerSpherePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerSpherePriority_MetaData), NewProp_InnerSpherePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OuterSphereRadius = { "OuterSphereRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, OuterSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterSphereRadius_MetaData), NewProp_OuterSphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OuterSpherePriority = { "OuterSpherePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, OuterSpherePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterSpherePriority_MetaData), NewProp_OuterSpherePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_ConeFieldOfViewDegrees = { "ConeFieldOfViewDegrees", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, ConeFieldOfViewDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeFieldOfViewDegrees_MetaData), NewProp_ConeFieldOfViewDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerConeLength = { "InnerConeLength", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, InnerConeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerConeLength_MetaData), NewProp_InnerConeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_ConeLength = { "ConeLength", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, ConeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeLength_MetaData), NewProp_ConeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_MinConePriority = { "MinConePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, MinConePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinConePriority_MetaData), NewProp_MinConePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_MaxConePriority = { "MaxConePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, MaxConePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConePriority_MetaData), NewProp_MaxConePriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_LineOfSightWidth = { "LineOfSightWidth", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, LineOfSightWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightWidth_MetaData), NewProp_LineOfSightWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_LineOfSightPriority = { "LineOfSightPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, LineOfSightPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightPriority_MetaData), NewProp_LineOfSightPriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority = { "OutsidePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewNetObjectPrioritizerConfig, OutsidePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutsidePriority_MetaData), NewProp_OutsidePriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerSpherePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OuterSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OuterSpherePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_ConeFieldOfViewDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_InnerConeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_ConeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_MinConePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_MaxConePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_LineOfSightWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_LineOfSightPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizerConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::ClassParams = {
	&UFieldOfViewNetObjectPrioritizerConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig()
{
	if (!Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton, Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UFieldOfViewNetObjectPrioritizerConfig>()
{
	return UFieldOfViewNetObjectPrioritizerConfig::StaticClass();
}
UFieldOfViewNetObjectPrioritizerConfig::UFieldOfViewNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldOfViewNetObjectPrioritizerConfig);
UFieldOfViewNetObjectPrioritizerConfig::~UFieldOfViewNetObjectPrioritizerConfig() {}
// End Class UFieldOfViewNetObjectPrioritizerConfig

// Begin Class UFieldOfViewNetObjectPrioritizer
void UFieldOfViewNetObjectPrioritizer::StaticRegisterNativesUFieldOfViewNetObjectPrioritizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldOfViewNetObjectPrioritizer);
UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister()
{
	return UFieldOfViewNetObjectPrioritizer::StaticClass();
}
struct Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The FieldOfViewNetObjectPrioritizer prioritizes objects based on a cone, derived from a configured field of view and length. The priorities withing the cone are calculated\n * according to configured cone priorities falling off linearly based on distance to the view location. Additionally there's a inner sphere with a most likely high priority and and larger circle with most likely less priority than the inner circle. \n * The circle priorities aren't scaled based on distance to view location, they're fixed. Finally there's a line of sight capsule with a configured width with a fixed priority\n * for objects within it. The final result is the maximum priority based on these four geometric shapes. An image visualization is generated by code in TestFieldOfViewNetObjectPrioritizer.cpp.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h" },
		{ "ToolTip", "The FieldOfViewNetObjectPrioritizer prioritizes objects based on a cone, derived from a configured field of view and length. The priorities withing the cone are calculated\naccording to configured cone priorities falling off linearly based on distance to the view location. Additionally there's a inner sphere with a most likely high priority and and larger circle with most likely less priority than the inner circle.\nThe circle priorities aren't scaled based on distance to view location, they're fixed. Finally there's a line of sight capsule with a configured width with a fixed priority\nfor objects within it. The final result is the maximum priority based on these four geometric shapes. An image visualization is generated by code in TestFieldOfViewNetObjectPrioritizer.cpp." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldOfViewNetObjectPrioritizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocationBasedNetObjectPrioritizer,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::ClassParams = {
	&UFieldOfViewNetObjectPrioritizer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer()
{
	if (!Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UFieldOfViewNetObjectPrioritizer>()
{
	return UFieldOfViewNetObjectPrioritizer::StaticClass();
}
UFieldOfViewNetObjectPrioritizer::UFieldOfViewNetObjectPrioritizer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldOfViewNetObjectPrioritizer);
UFieldOfViewNetObjectPrioritizer::~UFieldOfViewNetObjectPrioritizer() {}
// End Class UFieldOfViewNetObjectPrioritizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig, UFieldOfViewNetObjectPrioritizerConfig::StaticClass, TEXT("UFieldOfViewNetObjectPrioritizerConfig"), &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldOfViewNetObjectPrioritizerConfig), 3146860655U) },
		{ Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer, UFieldOfViewNetObjectPrioritizer::StaticClass, TEXT("UFieldOfViewNetObjectPrioritizer"), &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldOfViewNetObjectPrioritizer), 3395874103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_2875967047(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
