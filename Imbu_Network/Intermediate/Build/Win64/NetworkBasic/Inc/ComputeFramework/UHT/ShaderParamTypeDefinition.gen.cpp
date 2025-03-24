// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/Public/ComputeFramework/ShaderParamTypeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderParamTypeDefinition() {}

// Begin Cross Module References
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType();
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType();
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType();
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EShaderParamModifier();
COMPUTEFRAMEWORK_API UEnum* Z_Construct_UEnum_ComputeFramework_EShaderResourceType();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FArrayShaderValue();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderFunctionDefinition();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderParamTypeDefinition();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueContainer();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueType();
COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References

// Begin Enum EShaderFundamentalType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderFundamentalType;
static UEnum* EShaderFundamentalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EShaderFundamentalType"));
	}
	return Z_Registration_Info_UEnum_EShaderFundamentalType.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderFundamentalType>()
{
	return EShaderFundamentalType_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EShaderFundamentalType::Bool" },
		{ "Comment", "/* The base types of data that shaders can consume/expose */" },
		{ "Float.Name", "EShaderFundamentalType::Float" },
		{ "Int.Name", "EShaderFundamentalType::Int" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "None.Name", "EShaderFundamentalType::None" },
		{ "Struct.Name", "EShaderFundamentalType::Struct" },
		{ "ToolTip", "The base types of data that shaders can consume/expose" },
		{ "Uint.Name", "EShaderFundamentalType::Uint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderFundamentalType::Bool", (int64)EShaderFundamentalType::Bool },
		{ "EShaderFundamentalType::Int", (int64)EShaderFundamentalType::Int },
		{ "EShaderFundamentalType::Uint", (int64)EShaderFundamentalType::Uint },
		{ "EShaderFundamentalType::Float", (int64)EShaderFundamentalType::Float },
		{ "EShaderFundamentalType::Struct", (int64)EShaderFundamentalType::Struct },
		{ "EShaderFundamentalType::None", (int64)EShaderFundamentalType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EShaderFundamentalType",
	"EShaderFundamentalType",
	Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType()
{
	if (!Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderFundamentalType.InnerSingleton;
}
// End Enum EShaderFundamentalType

// Begin Enum EShaderFundamentalDimensionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderFundamentalDimensionType;
static UEnum* EShaderFundamentalDimensionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EShaderFundamentalDimensionType"));
	}
	return Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderFundamentalDimensionType>()
{
	return EShaderFundamentalDimensionType_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/*\n * Shader types can then be in the form of a scalar, vector, matrix.\n * e.g Scalar: float a; \x09Vector: float3 n; \x09\x09Matrix: float3x4 WVP;\n * Note: float b[5]; is still considered scalar. It is an array of scalars.\n */" },
		{ "Matrix.Name", "EShaderFundamentalDimensionType::Matrix" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "Scalar.Name", "EShaderFundamentalDimensionType::Scalar" },
		{ "ToolTip", "* Shader types can then be in the form of a scalar, vector, matrix.\n* e.g Scalar: float a;        Vector: float3 n;               Matrix: float3x4 WVP;\n* Note: float b[5]; is still considered scalar. It is an array of scalars." },
		{ "Vector.Name", "EShaderFundamentalDimensionType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderFundamentalDimensionType::Scalar", (int64)EShaderFundamentalDimensionType::Scalar },
		{ "EShaderFundamentalDimensionType::Vector", (int64)EShaderFundamentalDimensionType::Vector },
		{ "EShaderFundamentalDimensionType::Matrix", (int64)EShaderFundamentalDimensionType::Matrix },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EShaderFundamentalDimensionType",
	"EShaderFundamentalDimensionType",
	Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType()
{
	if (!Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderFundamentalDimensionType.InnerSingleton;
}
// End Enum EShaderFundamentalDimensionType

// Begin Enum EShaderParamBindingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderParamBindingType;
static UEnum* EShaderParamBindingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EShaderParamBindingType"));
	}
	return Z_Registration_Info_UEnum_EShaderParamBindingType.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderParamBindingType>()
{
	return EShaderParamBindingType_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/* Describes how the shader parameters are bound. */" },
		{ "ConstantParameter.Name", "EShaderParamBindingType::ConstantParameter" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "None.Name", "EShaderParamBindingType::None" },
		{ "ReadOnlyResource.Name", "EShaderParamBindingType::ReadOnlyResource" },
		{ "ReadWriteResource.Comment", "// SRV, treated as Inputs\n" },
		{ "ReadWriteResource.Name", "EShaderParamBindingType::ReadWriteResource" },
		{ "ReadWriteResource.ToolTip", "SRV, treated as Inputs" },
		{ "ToolTip", "Describes how the shader parameters are bound." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderParamBindingType::None", (int64)EShaderParamBindingType::None },
		{ "EShaderParamBindingType::ConstantParameter", (int64)EShaderParamBindingType::ConstantParameter },
		{ "EShaderParamBindingType::ReadOnlyResource", (int64)EShaderParamBindingType::ReadOnlyResource },
		{ "EShaderParamBindingType::ReadWriteResource", (int64)EShaderParamBindingType::ReadWriteResource },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EShaderParamBindingType",
	"EShaderParamBindingType",
	Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType()
{
	if (!Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderParamBindingType.InnerSingleton;
}
// End Enum EShaderParamBindingType

// Begin Enum EShaderResourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderResourceType;
static UEnum* EShaderResourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderResourceType, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EShaderResourceType"));
	}
	return Z_Registration_Info_UEnum_EShaderResourceType.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderResourceType>()
{
	return EShaderResourceType_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Buffer.Comment", "/*  */" },
		{ "Buffer.Name", "EShaderResourceType::Buffer" },
		{ "ByteAddressBuffer.Comment", "/*  */" },
		{ "ByteAddressBuffer.Name", "EShaderResourceType::ByteAddressBuffer" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "None.Comment", "/*  */" },
		{ "None.Name", "EShaderResourceType::None" },
		{ "StructuredBuffer.Comment", "/*  */" },
		{ "StructuredBuffer.Name", "EShaderResourceType::StructuredBuffer" },
		{ "Texture1D.Comment", "/*  */" },
		{ "Texture1D.Name", "EShaderResourceType::Texture1D" },
		{ "Texture2D.Comment", "/*  */" },
		{ "Texture2D.Name", "EShaderResourceType::Texture2D" },
		{ "Texture3D.Comment", "/*  */" },
		{ "Texture3D.Name", "EShaderResourceType::Texture3D" },
		{ "TextureCube.Comment", "/*  */" },
		{ "TextureCube.Name", "EShaderResourceType::TextureCube" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderResourceType::None", (int64)EShaderResourceType::None },
		{ "EShaderResourceType::Texture1D", (int64)EShaderResourceType::Texture1D },
		{ "EShaderResourceType::Texture2D", (int64)EShaderResourceType::Texture2D },
		{ "EShaderResourceType::Texture3D", (int64)EShaderResourceType::Texture3D },
		{ "EShaderResourceType::TextureCube", (int64)EShaderResourceType::TextureCube },
		{ "EShaderResourceType::Buffer", (int64)EShaderResourceType::Buffer },
		{ "EShaderResourceType::StructuredBuffer", (int64)EShaderResourceType::StructuredBuffer },
		{ "EShaderResourceType::ByteAddressBuffer", (int64)EShaderResourceType::ByteAddressBuffer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EShaderResourceType",
	"EShaderResourceType",
	Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EShaderResourceType()
{
	if (!Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EShaderResourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderResourceType.InnerSingleton;
}
// End Enum EShaderResourceType

// Begin Enum EShaderParamModifier
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderParamModifier;
static UEnum* EShaderParamModifier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComputeFramework_EShaderParamModifier, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("EShaderParamModifier"));
	}
	return Z_Registration_Info_UEnum_EShaderParamModifier.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UEnum* StaticEnum<EShaderParamModifier>()
{
	return EShaderParamModifier_StaticEnum();
}
struct Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "In.Name", "EShaderParamModifier::In" },
		{ "InOut.Name", "EShaderParamModifier::InOut" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "None.Name", "EShaderParamModifier::None" },
		{ "Out.Name", "EShaderParamModifier::Out" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderParamModifier::None", (int64)EShaderParamModifier::None },
		{ "EShaderParamModifier::In", (int64)EShaderParamModifier::In },
		{ "EShaderParamModifier::Out", (int64)EShaderParamModifier::Out },
		{ "EShaderParamModifier::InOut", (int64)EShaderParamModifier::InOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	"EShaderParamModifier",
	"EShaderParamModifier",
	Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ComputeFramework_EShaderParamModifier()
{
	if (!Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton, Z_Construct_UEnum_ComputeFramework_EShaderParamModifier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderParamModifier.InnerSingleton;
}
// End Enum EShaderParamModifier

// Begin ScriptStruct FShaderValueTypeHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle;
class UScriptStruct* FShaderValueTypeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueTypeHandle, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ShaderValueTypeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FShaderValueTypeHandle>()
{
	return FShaderValueTypeHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderValueTypeHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ShaderValueTypeHandle",
	nullptr,
	0,
	sizeof(FShaderValueTypeHandle),
	alignof(FShaderValueTypeHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.InnerSingleton, Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle.InnerSingleton;
}
// End ScriptStruct FShaderValueTypeHandle

// Begin ScriptStruct FArrayShaderValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayShaderValue;
class UScriptStruct* FArrayShaderValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayShaderValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayShaderValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayShaderValue, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ArrayShaderValue"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayShaderValue.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FArrayShaderValue>()
{
	return FArrayShaderValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayShaderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArrayOfValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayShaderValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewProp_ArrayOfValues_Inner = { "ArrayOfValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewProp_ArrayOfValues = { "ArrayOfValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayShaderValue, ArrayOfValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayOfValues_MetaData), NewProp_ArrayOfValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayShaderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewProp_ArrayOfValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewProp_ArrayOfValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayShaderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayShaderValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ArrayShaderValue",
	Z_Construct_UScriptStruct_FArrayShaderValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayShaderValue_Statics::PropPointers),
	sizeof(FArrayShaderValue),
	alignof(FArrayShaderValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayShaderValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayShaderValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayShaderValue()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayShaderValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayShaderValue.InnerSingleton, Z_Construct_UScriptStruct_FArrayShaderValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayShaderValue.InnerSingleton;
}
// End ScriptStruct FArrayShaderValue

// Begin ScriptStruct FShaderValueContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderValueContainer;
class UScriptStruct* FShaderValueContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderValueContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueContainer, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ShaderValueContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueContainer.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FShaderValueContainer>()
{
	return FShaderValueContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderValueContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShaderValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShaderValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderValueContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ShaderValue_Inner = { "ShaderValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ShaderValue = { "ShaderValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderValueContainer, ShaderValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderValue_MetaData), NewProp_ShaderValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ArrayList_Inner = { "ArrayList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArrayShaderValue, METADATA_PARAMS(0, nullptr) }; // 4185581419
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ArrayList = { "ArrayList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderValueContainer, ArrayList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayList_MetaData), NewProp_ArrayList_MetaData) }; // 4185581419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderValueContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ShaderValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ShaderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ArrayList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewProp_ArrayList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderValueContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ShaderValueContainer",
	Z_Construct_UScriptStruct_FShaderValueContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueContainer_Statics::PropPointers),
	sizeof(FShaderValueContainer),
	alignof(FShaderValueContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderValueContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderValueContainer()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderValueContainer.InnerSingleton, Z_Construct_UScriptStruct_FShaderValueContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueContainer.InnerSingleton;
}
// End ScriptStruct FShaderValueContainer

// Begin ScriptStruct FShaderValueType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderValueType;
class UScriptStruct* FShaderValueType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderValueType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderValueType, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ShaderValueType"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueType.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FShaderValueType>()
{
	return FShaderValueType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DimensionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DimensionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DimensionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bIsDynamicArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderValueType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderValueType, Type), Z_Construct_UEnum_ComputeFramework_EShaderFundamentalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3586419516
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_DimensionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_DimensionType = { "DimensionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderValueType, DimensionType), Z_Construct_UEnum_ComputeFramework_EShaderFundamentalDimensionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DimensionType_MetaData), NewProp_DimensionType_MetaData) }; // 1765211476
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderValueType, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_bIsDynamicArray_SetBit(void* Obj)
{
	((FShaderValueType*)Obj)->bIsDynamicArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_bIsDynamicArray = { "bIsDynamicArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FShaderValueType), &Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_bIsDynamicArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDynamicArray_MetaData), NewProp_bIsDynamicArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderValueType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_DimensionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_DimensionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderValueType_Statics::NewProp_bIsDynamicArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderValueType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ShaderValueType",
	Z_Construct_UScriptStruct_FShaderValueType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueType_Statics::PropPointers),
	sizeof(FShaderValueType),
	alignof(FShaderValueType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderValueType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderValueType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderValueType()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderValueType.InnerSingleton, Z_Construct_UScriptStruct_FShaderValueType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderValueType.InnerSingleton;
}
// End ScriptStruct FShaderValueType

// Begin ScriptStruct FShaderParamTypeDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition;
class UScriptStruct* FShaderParamTypeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderParamTypeDefinition, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ShaderParamTypeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FShaderParamTypeDefinition>()
{
	return FShaderParamTypeDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* Fully describes the name and type of a parameter a shader exposes. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "Fully describes the name and type of a parameter a shader exposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDeclaration_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Comment", "// The value type for this definition.\n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "The value type for this definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayElementCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[] = {
		{ "Comment", "// 0 indicates not an array. >= 1 indicates an array\n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "0 indicates not an array. >= 1 indicates an array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeDeclaration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ArrayElementCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Modifier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderParamTypeDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_TypeDeclaration = { "TypeDeclaration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, TypeDeclaration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDeclaration_MetaData), NewProp_TypeDeclaration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, ValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3692120632
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ArrayElementCount = { "ArrayElementCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, ArrayElementCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayElementCount_MetaData), NewProp_ArrayElementCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, BindingType), Z_Construct_UEnum_ComputeFramework_EShaderParamBindingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingType_MetaData), NewProp_BindingType_MetaData) }; // 2027957073
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, ResourceType), Z_Construct_UEnum_ComputeFramework_EShaderResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceType_MetaData), NewProp_ResourceType_MetaData) }; // 1584626228
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Modifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderParamTypeDefinition, Modifier), Z_Construct_UEnum_ComputeFramework_EShaderParamModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifier_MetaData), NewProp_Modifier_MetaData) }; // 1898638296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_TypeDeclaration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ArrayElementCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_BindingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_BindingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ResourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_ResourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Modifier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ShaderParamTypeDefinition",
	Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::PropPointers),
	sizeof(FShaderParamTypeDefinition),
	alignof(FShaderParamTypeDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderParamTypeDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition.InnerSingleton;
}
// End ScriptStruct FShaderParamTypeDefinition

// Begin ScriptStruct FShaderFunctionDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition;
class UScriptStruct* FShaderFunctionDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderFunctionDefinition, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ShaderFunctionDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FShaderFunctionDefinition>()
{
	return FShaderFunctionDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* Describes a shader function signature. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "Describes a shader function signature." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Function name. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "Function name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamTypes_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Function parameter types. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "Function parameter types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReturnType_MetaData[] = {
		{ "Comment", "/** If set to true then the first element of ParamTypes is the return type. Otherwise return type is void. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ShaderParamTypeDefinition.h" },
		{ "ToolTip", "If set to true then the first element of ParamTypes is the return type. Otherwise return type is void." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParamTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamTypes;
	static void NewProp_bHasReturnType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReturnType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderFunctionDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderFunctionDefinition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_ParamTypes_Inner = { "ParamTypes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShaderParamTypeDefinition, METADATA_PARAMS(0, nullptr) }; // 2530162435
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_ParamTypes = { "ParamTypes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderFunctionDefinition, ParamTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamTypes_MetaData), NewProp_ParamTypes_MetaData) }; // 2530162435
void Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_bHasReturnType_SetBit(void* Obj)
{
	((FShaderFunctionDefinition*)Obj)->bHasReturnType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_bHasReturnType = { "bHasReturnType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FShaderFunctionDefinition), &Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_bHasReturnType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReturnType_MetaData), NewProp_bHasReturnType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_ParamTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_ParamTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewProp_bHasReturnType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	nullptr,
	&NewStructOps,
	"ShaderFunctionDefinition",
	Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::PropPointers),
	sizeof(FShaderFunctionDefinition),
	alignof(FShaderFunctionDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderFunctionDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.InnerSingleton, Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition.InnerSingleton;
}
// End ScriptStruct FShaderFunctionDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShaderFundamentalType_StaticEnum, TEXT("EShaderFundamentalType"), &Z_Registration_Info_UEnum_EShaderFundamentalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3586419516U) },
		{ EShaderFundamentalDimensionType_StaticEnum, TEXT("EShaderFundamentalDimensionType"), &Z_Registration_Info_UEnum_EShaderFundamentalDimensionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765211476U) },
		{ EShaderParamBindingType_StaticEnum, TEXT("EShaderParamBindingType"), &Z_Registration_Info_UEnum_EShaderParamBindingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2027957073U) },
		{ EShaderResourceType_StaticEnum, TEXT("EShaderResourceType"), &Z_Registration_Info_UEnum_EShaderResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1584626228U) },
		{ EShaderParamModifier_StaticEnum, TEXT("EShaderParamModifier"), &Z_Registration_Info_UEnum_EShaderParamModifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1898638296U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FShaderValueTypeHandle::StaticStruct, Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics::NewStructOps, TEXT("ShaderValueTypeHandle"), &Z_Registration_Info_UScriptStruct_ShaderValueTypeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderValueTypeHandle), 3692120632U) },
		{ FArrayShaderValue::StaticStruct, Z_Construct_UScriptStruct_FArrayShaderValue_Statics::NewStructOps, TEXT("ArrayShaderValue"), &Z_Registration_Info_UScriptStruct_ArrayShaderValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayShaderValue), 4185581419U) },
		{ FShaderValueContainer::StaticStruct, Z_Construct_UScriptStruct_FShaderValueContainer_Statics::NewStructOps, TEXT("ShaderValueContainer"), &Z_Registration_Info_UScriptStruct_ShaderValueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderValueContainer), 1837131788U) },
		{ FShaderValueType::StaticStruct, Z_Construct_UScriptStruct_FShaderValueType_Statics::NewStructOps, TEXT("ShaderValueType"), &Z_Registration_Info_UScriptStruct_ShaderValueType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderValueType), 3796833595U) },
		{ FShaderParamTypeDefinition::StaticStruct, Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics::NewStructOps, TEXT("ShaderParamTypeDefinition"), &Z_Registration_Info_UScriptStruct_ShaderParamTypeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderParamTypeDefinition), 2530162435U) },
		{ FShaderFunctionDefinition::StaticStruct, Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics::NewStructOps, TEXT("ShaderFunctionDefinition"), &Z_Registration_Info_UScriptStruct_ShaderFunctionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderFunctionDefinition), 608247268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_2984216420(TEXT("/Script/ComputeFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
