// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosDebugDrawSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDebugDrawSubsystem() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawSubsystem();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosDebugDrawSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin Class UChaosDebugDrawSubsystem
void UChaosDebugDrawSubsystem::StaticRegisterNativesUChaosDebugDrawSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosDebugDrawSubsystem);
UClass* Z_Construct_UClass_UChaosDebugDrawSubsystem_NoRegister()
{
	return UChaosDebugDrawSubsystem::StaticClass();
}
struct Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosDebugDrawSubsystem.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosDebugDrawSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDebugDrawSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::ClassParams = {
	&UChaosDebugDrawSubsystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosDebugDrawSubsystem()
{
	if (!Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.OuterSingleton, Z_Construct_UClass_UChaosDebugDrawSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosDebugDrawSubsystem.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosDebugDrawSubsystem>()
{
	return UChaosDebugDrawSubsystem::StaticClass();
}
UChaosDebugDrawSubsystem::UChaosDebugDrawSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDebugDrawSubsystem);
UChaosDebugDrawSubsystem::~UChaosDebugDrawSubsystem() {}
// End Class UChaosDebugDrawSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosDebugDrawSubsystem, UChaosDebugDrawSubsystem::StaticClass, TEXT("UChaosDebugDrawSubsystem"), &Z_Registration_Info_UClass_UChaosDebugDrawSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosDebugDrawSubsystem), 1816111359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_1493353720(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosDebugDrawSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
