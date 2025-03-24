// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowAnyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowAnyType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowAllTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowAnyType();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNumericTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowStringTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorTypes();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowAnyType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowAnyType;
class UScriptStruct* FDataflowAnyType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowAnyType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowAnyType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowAnyType, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowAnyType"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowAnyType.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowAnyType>()
{
	return FDataflowAnyType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowAnyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Any supported type */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "Any supported type" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowAnyType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowAnyType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	nullptr,
	&NewStructOps,
	"DataflowAnyType",
	nullptr,
	0,
	sizeof(FDataflowAnyType),
	alignof(FDataflowAnyType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowAnyType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowAnyType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowAnyType()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowAnyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowAnyType.InnerSingleton, Z_Construct_UScriptStruct_FDataflowAnyType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowAnyType.InnerSingleton;
}
// End ScriptStruct FDataflowAnyType

// Begin ScriptStruct FDataflowAllTypes
static_assert(std::is_polymorphic<FDataflowAllTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowAllTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowAllTypes;
class UScriptStruct* FDataflowAllTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowAllTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowAllTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowAllTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowAllTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowAllTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowAllTypes>()
{
	return FDataflowAllTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowAllTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Any supported type */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "Any supported type" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowAllTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowAllTypes",
	nullptr,
	0,
	sizeof(FDataflowAllTypes),
	alignof(FDataflowAllTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowAllTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowAllTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowAllTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowAllTypes.InnerSingleton;
}
// End ScriptStruct FDataflowAllTypes

// Begin ScriptStruct FDataflowNumericTypes
static_assert(std::is_polymorphic<FDataflowNumericTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowNumericTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowNumericTypes;
class UScriptStruct* FDataflowNumericTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowNumericTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowNumericTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowNumericTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowNumericTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowNumericTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowNumericTypes>()
{
	return FDataflowNumericTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Numeric types\n* (double, float, int64, uint64, int32, uint32, int16, uint16, int8, uint8)\"\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "Numeric types\n(double, float, int64, uint64, int32, uint32, int16, uint16, int8, uint8)\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowNumericTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowNumericTypes, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowNumericTypes",
	Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::PropPointers),
	sizeof(FDataflowNumericTypes),
	alignof(FDataflowNumericTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowNumericTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowNumericTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowNumericTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowNumericTypes.InnerSingleton;
}
// End ScriptStruct FDataflowNumericTypes

// Begin ScriptStruct FDataflowVectorTypes
static_assert(std::is_polymorphic<FDataflowVectorTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowVectorTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVectorTypes;
class UScriptStruct* FDataflowVectorTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVectorTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVectorTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVectorTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVectorTypes>()
{
	return FDataflowVectorTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Vector types\n* (2D, 3D and 4D vector, single and double precision)\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "Vector types\n(2D, 3D and 4D vector, single and double precision)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVectorTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowVectorTypes, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowVectorTypes",
	Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::PropPointers),
	sizeof(FDataflowVectorTypes),
	alignof(FDataflowVectorTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowVectorTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVectorTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVectorTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowVectorTypes.InnerSingleton;
}
// End ScriptStruct FDataflowVectorTypes

// Begin ScriptStruct FDataflowStringTypes
static_assert(std::is_polymorphic<FDataflowStringTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowStringTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowStringTypes;
class UScriptStruct* FDataflowStringTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowStringTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowStringTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowStringTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowStringTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowStringTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowStringTypes>()
{
	return FDataflowStringTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowStringTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** String types (FString or FName) */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "String types (FString or FName)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowStringTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowStringTypes, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowStringTypes",
	Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::PropPointers),
	sizeof(FDataflowStringTypes),
	alignof(FDataflowStringTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowStringTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowStringTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowStringTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowStringTypes.InnerSingleton;
}
// End ScriptStruct FDataflowStringTypes

// Begin ScriptStruct FDataflowStringConvertibleTypes
static_assert(std::is_polymorphic<FDataflowStringConvertibleTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowStringConvertibleTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes;
class UScriptStruct* FDataflowStringConvertibleTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowStringConvertibleTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowStringConvertibleTypes>()
{
	return FDataflowStringConvertibleTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* String convertible types\n* (String types, Numeric types, Vector types and Booleans)\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "String convertible types\n(String types, Numeric types, Vector types and Booleans)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowStringConvertibleTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowStringConvertibleTypes, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowStringConvertibleTypes",
	Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::PropPointers),
	sizeof(FDataflowStringConvertibleTypes),
	alignof(FDataflowStringConvertibleTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes.InnerSingleton;
}
// End ScriptStruct FDataflowStringConvertibleTypes

// Begin ScriptStruct FDataflowUObjectConvertibleTypes
static_assert(std::is_polymorphic<FDataflowUObjectConvertibleTypes>() == std::is_polymorphic<FDataflowAnyType>(), "USTRUCT FDataflowUObjectConvertibleTypes cannot be polymorphic unless super FDataflowAnyType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes;
class UScriptStruct* FDataflowUObjectConvertibleTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowUObjectConvertibleTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowUObjectConvertibleTypes>()
{
	return FDataflowUObjectConvertibleTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** UObject types */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
		{ "ToolTip", "UObject types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAnyType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowUObjectConvertibleTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowUObjectConvertibleTypes, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowAnyType,
	&NewStructOps,
	"DataflowUObjectConvertibleTypes",
	Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::PropPointers),
	sizeof(FDataflowUObjectConvertibleTypes),
	alignof(FDataflowUObjectConvertibleTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.InnerSingleton, Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes.InnerSingleton;
}
// End ScriptStruct FDataflowUObjectConvertibleTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowAnyType::StaticStruct, Z_Construct_UScriptStruct_FDataflowAnyType_Statics::NewStructOps, TEXT("DataflowAnyType"), &Z_Registration_Info_UScriptStruct_DataflowAnyType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowAnyType), 1980332606U) },
		{ FDataflowAllTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowAllTypes_Statics::NewStructOps, TEXT("DataflowAllTypes"), &Z_Registration_Info_UScriptStruct_DataflowAllTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowAllTypes), 1923813530U) },
		{ FDataflowNumericTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowNumericTypes_Statics::NewStructOps, TEXT("DataflowNumericTypes"), &Z_Registration_Info_UScriptStruct_DataflowNumericTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowNumericTypes), 1453963107U) },
		{ FDataflowVectorTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowVectorTypes_Statics::NewStructOps, TEXT("DataflowVectorTypes"), &Z_Registration_Info_UScriptStruct_DataflowVectorTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVectorTypes), 3064604349U) },
		{ FDataflowStringTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowStringTypes_Statics::NewStructOps, TEXT("DataflowStringTypes"), &Z_Registration_Info_UScriptStruct_DataflowStringTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowStringTypes), 1059420758U) },
		{ FDataflowStringConvertibleTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowStringConvertibleTypes_Statics::NewStructOps, TEXT("DataflowStringConvertibleTypes"), &Z_Registration_Info_UScriptStruct_DataflowStringConvertibleTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowStringConvertibleTypes), 1301212012U) },
		{ FDataflowUObjectConvertibleTypes::StaticStruct, Z_Construct_UScriptStruct_FDataflowUObjectConvertibleTypes_Statics::NewStructOps, TEXT("DataflowUObjectConvertibleTypes"), &Z_Registration_Info_UScriptStruct_DataflowUObjectConvertibleTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowUObjectConvertibleTypes), 3359534705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h_1555255725(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowAnyType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
