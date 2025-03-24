// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsCore/Public/GroomCreateStrandsTexturesOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCreateStrandsTexturesOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_NoRegister();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType();
HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType();
UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

// Begin Enum EStrandsTexturesTraceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStrandsTexturesTraceType;
static UEnum* EStrandsTexturesTraceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EStrandsTexturesTraceType"));
	}
	return Z_Registration_Info_UEnum_EStrandsTexturesTraceType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesTraceType>()
{
	return EStrandsTexturesTraceType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ToolTip", "Size of each strands" },
		{ "TraceBidirectional.DisplatName", "Trace both sides" },
		{ "TraceBidirectional.Name", "EStrandsTexturesTraceType::TraceBidirectional" },
		{ "TraceInside.DisplatName", "Trace inside" },
		{ "TraceInside.Name", "EStrandsTexturesTraceType::TraceInside" },
		{ "TraceOuside.DisplatName", "Trace outside" },
		{ "TraceOuside.Name", "EStrandsTexturesTraceType::TraceOuside" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStrandsTexturesTraceType::TraceInside", (int64)EStrandsTexturesTraceType::TraceInside },
		{ "EStrandsTexturesTraceType::TraceOuside", (int64)EStrandsTexturesTraceType::TraceOuside },
		{ "EStrandsTexturesTraceType::TraceBidirectional", (int64)EStrandsTexturesTraceType::TraceBidirectional },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EStrandsTexturesTraceType",
	"EStrandsTexturesTraceType",
	Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType()
{
	if (!Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStrandsTexturesTraceType.InnerSingleton;
}
// End Enum EStrandsTexturesTraceType

// Begin Enum EStrandsTexturesMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStrandsTexturesMeshType;
static UEnum* EStrandsTexturesMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EStrandsTexturesMeshType"));
	}
	return Z_Registration_Info_UEnum_EStrandsTexturesMeshType.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EStrandsTexturesMeshType>()
{
	return EStrandsTexturesMeshType_StaticEnum();
}
struct Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "Skeletal.DisplatName", "Use skeletal mesh" },
		{ "Skeletal.Name", "EStrandsTexturesMeshType::Skeletal" },
		{ "Static.DisplatName", "Use static mesh" },
		{ "Static.Name", "EStrandsTexturesMeshType::Static" },
		{ "ToolTip", "Size of each strands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStrandsTexturesMeshType::Static", (int64)EStrandsTexturesMeshType::Static },
		{ "EStrandsTexturesMeshType::Skeletal", (int64)EStrandsTexturesMeshType::Skeletal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
	nullptr,
	"EStrandsTexturesMeshType",
	"EStrandsTexturesMeshType",
	Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType()
{
	if (!Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStrandsTexturesMeshType.InnerSingleton;
}
// End Enum EStrandsTexturesMeshType

// Begin Class UGroomCreateStrandsTexturesOptions
void UGroomCreateStrandsTexturesOptions::StaticRegisterNativesUGroomCreateStrandsTexturesOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomCreateStrandsTexturesOptions);
UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_NoRegister()
{
	return UGroomCreateStrandsTexturesOptions::StaticClass();
}
struct Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomCreateStrandsTexturesOptions.h" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Resolution of the output texture maps (tangent, coverage, ...) */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Resolution of the output texture maps (tangent, coverage, ...)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Resolution of the output texture maps (tangent, coverage, ...) */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Resolution of the output texture maps (tangent, coverage, ...)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Direction in which the tracing will be done: either from the mesh's surface to the outside, or from the mesh's surface to the inside. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction in which the tracing will be done: either from the mesh's surface to the outside, or from the mesh's surface to the inside." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Distance from the mesh surface until hair are projected onto the mesh. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Distance from the mesh surface until hair are projected onto the mesh." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Select which mesh should be used for tracing */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Select which mesh should be used for tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mesh on which the groom strands will be projected on. If non empty and if the skeletal mesh entry is empty, the static mesh will be used for generating the textures. */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh on which the groom strands will be projected on. If non empty and if the skeletal mesh entry is empty, the static mesh will be used for generating the textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mesh on which the groom strands will be projected on. If non empty, the skeletal mesh will be used for generating the textures.*/" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh on which the groom strands will be projected on. If non empty, the skeletal mesh will be used for generating the textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** LOD of the mesh, on which the texture projection is done */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "LOD of the mesh, on which the texture projection is done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Section of the mesh, on which the texture projection is done */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Section of the mesh, on which the texture projection is done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** UV channel to use */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "UV channel to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Groom index which should be baked into the textures. When the array is empty, all groups will be included (Default). */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Groom index which should be baked into the textures. When the array is empty, all groups will be included (Default)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dilation_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "32" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number pixels expanded by the post-process dilation (0..64). */" },
		{ "ModuleRelativePath", "Public/GroomCreateStrandsTexturesOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Number pixels expanded by the post-process dilation (0..64)." },
		{ "UIMax", "32" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomCreateStrandsTexturesOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, Layout), Z_Construct_UEnum_HairStrandsCore_EHairTextureLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 3355031587
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType = { "TraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, TraceType), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceType_MetaData), NewProp_TraceType_MetaData) }; // 3862183965
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, MeshType), Z_Construct_UEnum_HairStrandsCore_EStrandsTexturesMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 1279712958
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIndex_MetaData), NewProp_SectionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, UVChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelIndex_MetaData), NewProp_UVChannelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_Inner = { "GroupIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, GroupIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIndex_MetaData), NewProp_GroupIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Dilation = { "Dilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomCreateStrandsTexturesOptions, Dilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dilation_MetaData), NewProp_Dilation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Layout_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_UVChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::NewProp_Dilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::ClassParams = {
	&UGroomCreateStrandsTexturesOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroomCreateStrandsTexturesOptions()
{
	if (!Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton, Z_Construct_UClass_UGroomCreateStrandsTexturesOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomCreateStrandsTexturesOptions>()
{
	return UGroomCreateStrandsTexturesOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomCreateStrandsTexturesOptions);
UGroomCreateStrandsTexturesOptions::~UGroomCreateStrandsTexturesOptions() {}
// End Class UGroomCreateStrandsTexturesOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStrandsTexturesTraceType_StaticEnum, TEXT("EStrandsTexturesTraceType"), &Z_Registration_Info_UEnum_EStrandsTexturesTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3862183965U) },
		{ EStrandsTexturesMeshType_StaticEnum, TEXT("EStrandsTexturesMeshType"), &Z_Registration_Info_UEnum_EStrandsTexturesMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1279712958U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroomCreateStrandsTexturesOptions, UGroomCreateStrandsTexturesOptions::StaticClass, TEXT("UGroomCreateStrandsTexturesOptions"), &Z_Registration_Info_UClass_UGroomCreateStrandsTexturesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomCreateStrandsTexturesOptions), 166026837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_2074744157(TEXT("/Script/HairStrandsCore"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCreateStrandsTexturesOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
