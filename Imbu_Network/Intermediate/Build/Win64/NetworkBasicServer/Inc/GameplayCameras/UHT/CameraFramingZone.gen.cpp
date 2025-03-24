// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Nodes/Framing/CameraFramingZone.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraFramingZone() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFramingZone();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraFramingZone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFramingZone;
class UScriptStruct* FCameraFramingZone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFramingZone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFramingZone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFramingZone, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraFramingZone"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFramingZone.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraFramingZone>()
{
	return FCameraFramingZone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraFramingZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure that defines a zone for use in framing subjects in screen-space.\n *\n * All margins are defined in percentages of the screen's horizontal size. They are also \n * all defined relative to their respective edges.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/CameraFramingZone.h" },
		{ "ToolTip", "A structure that defines a zone for use in framing subjects in screen-space.\n\nAll margins are defined in percentages of the screen's horizontal size. They are also\nall defined relative to their respective edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMargin_MetaData[] = {
		{ "Category", "Framing" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/CameraFramingZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopMargin_MetaData[] = {
		{ "Category", "Framing" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/CameraFramingZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMargin_MetaData[] = {
		{ "Category", "Framing" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/CameraFramingZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomMargin_MetaData[] = {
		{ "Category", "Framing" },
		{ "ModuleRelativePath", "Public/Nodes/Framing/CameraFramingZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomMargin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFramingZone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_LeftMargin = { "LeftMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFramingZone, LeftMargin), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMargin_MetaData), NewProp_LeftMargin_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_TopMargin = { "TopMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFramingZone, TopMargin), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopMargin_MetaData), NewProp_TopMargin_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_RightMargin = { "RightMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFramingZone, RightMargin), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMargin_MetaData), NewProp_RightMargin_MetaData) }; // 60259665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_BottomMargin = { "BottomMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFramingZone, BottomMargin), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomMargin_MetaData), NewProp_BottomMargin_MetaData) }; // 60259665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFramingZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_LeftMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_TopMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_RightMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewProp_BottomMargin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFramingZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFramingZone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraFramingZone",
	Z_Construct_UScriptStruct_FCameraFramingZone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFramingZone_Statics::PropPointers),
	sizeof(FCameraFramingZone),
	alignof(FCameraFramingZone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFramingZone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraFramingZone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraFramingZone()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFramingZone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFramingZone.InnerSingleton, Z_Construct_UScriptStruct_FCameraFramingZone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraFramingZone.InnerSingleton;
}
// End ScriptStruct FCameraFramingZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraFramingZone::StaticStruct, Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewStructOps, TEXT("CameraFramingZone"), &Z_Registration_Info_UScriptStruct_CameraFramingZone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFramingZone), 1126394329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h_1951562561(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
