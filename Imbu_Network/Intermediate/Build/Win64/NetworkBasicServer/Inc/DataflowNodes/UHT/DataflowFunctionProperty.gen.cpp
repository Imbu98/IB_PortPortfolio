// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowFunctionProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowFunctionProperty() {}

// Begin Cross Module References
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFunctionProperty();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FDataflowFunctionProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowFunctionProperty;
class UScriptStruct* FDataflowFunctionProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFunctionProperty, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("DataflowFunctionProperty"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FDataflowFunctionProperty>()
{
	return FDataflowFunctionProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Function property for all Dataflow nodes.\n * The structure is also used in DataFlow::FFunctionPropertyCustomization to appear as text and/or image buttons.\n * This helps with the equivalent UCLASS UFUNCTION CallInEditor functionality that is missing from the USTRUCT implementation.\n *\n * By default the text of the button is the name of the structure property.\n * The tooltip is the property source documentation.\n * Further (but optional) customizations can be achieved by using the following Meta tags where declaring the property:\n *   DisplayName\n *   ButtonImage\n *\n * Specifying an empty DisplayName string will only display the icon and no text.\n *\n * For example:\n *   UPROPERTY(EditAnywhere, Category = \"Functions\")\n *   FDataflowFunctionProperty ReimportAssetTextOnly;\n *\n *   UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (ButtonImage = \"Persona.ReimportAsset\"))\n *   FDataflowFunctionProperty ReimportAssetTextAndIcon;\n * \n *   UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"\", ButtonImage = \"Persona.ReimportAsset\"))\n *   FDataflowFunctionProperty ReimportAssetIconOnly;\n *\n *   UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"Reimport Asset\"))\n *   FDataflowFunctionProperty ReimportAssetOverriddenText;\n *\n *   UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"Reimport Asset\", ButtonImage = \"Persona.ReimportAsset\"))\n *   FDataflowFunctionProperty ReimportAssetOverriddenTextAndIcon;\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowFunctionProperty.h" },
		{ "ToolTip", "Function property for all Dataflow nodes.\nThe structure is also used in DataFlow::FFunctionPropertyCustomization to appear as text and/or image buttons.\nThis helps with the equivalent UCLASS UFUNCTION CallInEditor functionality that is missing from the USTRUCT implementation.\n\nBy default the text of the button is the name of the structure property.\nThe tooltip is the property source documentation.\nFurther (but optional) customizations can be achieved by using the following Meta tags where declaring the property:\n  DisplayName\n  ButtonImage\n\nSpecifying an empty DisplayName string will only display the icon and no text.\n\nFor example:\n  UPROPERTY(EditAnywhere, Category = \"Functions\")\n  FDataflowFunctionProperty ReimportAssetTextOnly;\n\n  UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (ButtonImage = \"Persona.ReimportAsset\"))\n  FDataflowFunctionProperty ReimportAssetTextAndIcon;\n\n  UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"\", ButtonImage = \"Persona.ReimportAsset\"))\n  FDataflowFunctionProperty ReimportAssetIconOnly;\n\n  UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"Reimport Asset\"))\n  FDataflowFunctionProperty ReimportAssetOverriddenText;\n\n  UPROPERTY(EditAnywhere, Category = \"Functions\", Meta = (DisplayName = \"Reimport Asset\", ButtonImage = \"Persona.ReimportAsset\"))\n  FDataflowFunctionProperty ReimportAssetOverriddenTextAndIcon;" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowFunctionProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	nullptr,
	&NewStructOps,
	"DataflowFunctionProperty",
	nullptr,
	0,
	sizeof(FDataflowFunctionProperty),
	alignof(FDataflowFunctionProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowFunctionProperty()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.InnerSingleton, Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowFunctionProperty.InnerSingleton;
}
// End ScriptStruct FDataflowFunctionProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowFunctionProperty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowFunctionProperty::StaticStruct, Z_Construct_UScriptStruct_FDataflowFunctionProperty_Statics::NewStructOps, TEXT("DataflowFunctionProperty"), &Z_Registration_Info_UScriptStruct_DataflowFunctionProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowFunctionProperty), 528484001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowFunctionProperty_h_669122145(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowFunctionProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowFunctionProperty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
