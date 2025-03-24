// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Directors/StateTreeCameraDirector.h"
#include "StateTreeModule/Public/StateTreeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirector() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyTable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UStateTreeCameraDirector();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UStateTreeCameraDirector_NoRegister();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UStateTreeCameraDirector
void UStateTreeCameraDirector::StaticRegisterNativesUStateTreeCameraDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeCameraDirector);
UClass* Z_Construct_UClass_UStateTreeCameraDirector_NoRegister()
{
	return UStateTreeCameraDirector::StaticClass();
}
struct Z_Construct_UClass_UStateTreeCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera director that runs a StateTree to specify which camera rigs should be active\n * any given frame.\n */" },
		{ "IncludePath", "Directors/StateTreeCameraDirector.h" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera director that runs a StateTree to specify which camera rigs should be active\nany given frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeReference_MetaData[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** The StateTree to execute. Must have been created with the CameraDirectorStateTreeSchema. */" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirector.h" },
		{ "Schema", "/Script/GameplayCameras.CameraDirectorStateTreeSchema" },
		{ "ToolTip", "The StateTree to execute. Must have been created with the CameraDirectorStateTreeSchema." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRigProxyTable_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/** \n\x09 * The table that maps camera rig proxies (used in the evaluator State Tree's tasks)\n\x09 * to actual camera rigs.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Directors/StateTreeCameraDirector.h" },
		{ "ToolTip", "The table that maps camera rig proxies (used in the evaluator State Tree's tasks)\nto actual camera rigs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRigProxyTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeCameraDirector_Statics::NewProp_StateTreeReference = { "StateTreeReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeCameraDirector, StateTreeReference), Z_Construct_UScriptStruct_FStateTreeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTreeReference_MetaData), NewProp_StateTreeReference_MetaData) }; // 1033739970
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateTreeCameraDirector_Statics::NewProp_CameraRigProxyTable = { "CameraRigProxyTable", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeCameraDirector, CameraRigProxyTable), Z_Construct_UClass_UCameraRigProxyTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRigProxyTable_MetaData), NewProp_CameraRigProxyTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeCameraDirector_Statics::NewProp_StateTreeReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeCameraDirector_Statics::NewProp_CameraRigProxyTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeCameraDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateTreeCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraDirector,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeCameraDirector_Statics::ClassParams = {
	&UStateTreeCameraDirector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStateTreeCameraDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeCameraDirector_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateTreeCameraDirector()
{
	if (!Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton, Z_Construct_UClass_UStateTreeCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UStateTreeCameraDirector>()
{
	return UStateTreeCameraDirector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeCameraDirector);
UStateTreeCameraDirector::~UStateTreeCameraDirector() {}
// End Class UStateTreeCameraDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeCameraDirector, UStateTreeCameraDirector::StaticClass, TEXT("UStateTreeCameraDirector"), &Z_Registration_Info_UClass_UStateTreeCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeCameraDirector), 391533110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_2187351797(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
