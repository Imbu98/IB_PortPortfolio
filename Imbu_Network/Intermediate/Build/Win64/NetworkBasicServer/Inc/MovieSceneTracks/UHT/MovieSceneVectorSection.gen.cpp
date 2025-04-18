// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneDoubleChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneFloatVectorKeyStructBase
static_assert(std::is_polymorphic<FMovieSceneFloatVectorKeyStructBase>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieSceneFloatVectorKeyStructBase cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase;
class UScriptStruct* FMovieSceneFloatVectorKeyStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneFloatVectorKeyStructBase"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneFloatVectorKeyStructBase>()
{
	return FMovieSceneFloatVectorKeyStructBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Base Proxy structure for float vector section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Base Proxy structure for float vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatVectorKeyStructBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatVectorKeyStructBase, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
	&NewStructOps,
	"MovieSceneFloatVectorKeyStructBase",
	Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::PropPointers),
	sizeof(FMovieSceneFloatVectorKeyStructBase),
	alignof(FMovieSceneFloatVectorKeyStructBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase.InnerSingleton;
}
// End ScriptStruct FMovieSceneFloatVectorKeyStructBase

// Begin ScriptStruct FMovieSceneVector2fKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector2fKeyStruct>() == std::is_polymorphic<FMovieSceneFloatVectorKeyStructBase>(), "USTRUCT FMovieSceneVector2fKeyStruct cannot be polymorphic unless super FMovieSceneFloatVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct;
class UScriptStruct* FMovieSceneVector2fKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector2fKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector2fKeyStruct>()
{
	return FMovieSceneVector2fKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for 2f vector section key data.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for 2f vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector2fKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector2fKeyStruct, Vector), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector2fKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector2fKeyStruct),
	alignof(FMovieSceneVector2fKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector2fKeyStruct

// Begin ScriptStruct FMovieSceneVector3fKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector3fKeyStruct>() == std::is_polymorphic<FMovieSceneFloatVectorKeyStructBase>(), "USTRUCT FMovieSceneVector3fKeyStruct cannot be polymorphic unless super FMovieSceneFloatVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct;
class UScriptStruct* FMovieSceneVector3fKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector3fKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector3fKeyStruct>()
{
	return FMovieSceneVector3fKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Proxy structure for float vector section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for float vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector3fKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector3fKeyStruct, Vector), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector3fKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector3fKeyStruct),
	alignof(FMovieSceneVector3fKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector3fKeyStruct

// Begin ScriptStruct FMovieSceneVector4fKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector4fKeyStruct>() == std::is_polymorphic<FMovieSceneFloatVectorKeyStructBase>(), "USTRUCT FMovieSceneVector4fKeyStruct cannot be polymorphic unless super FMovieSceneFloatVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct;
class UScriptStruct* FMovieSceneVector4fKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector4fKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector4fKeyStruct>()
{
	return FMovieSceneVector4fKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Proxy structure for vector4f section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for vector4f section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector4fKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector4fKeyStruct, Vector), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector4fKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector4fKeyStruct),
	alignof(FMovieSceneVector4fKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector4fKeyStruct

// Begin ScriptStruct FMovieSceneDoubleVectorKeyStructBase
static_assert(std::is_polymorphic<FMovieSceneDoubleVectorKeyStructBase>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieSceneDoubleVectorKeyStructBase cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase;
class UScriptStruct* FMovieSceneDoubleVectorKeyStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDoubleVectorKeyStructBase"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDoubleVectorKeyStructBase>()
{
	return FMovieSceneDoubleVectorKeyStructBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Base Proxy structure for double vector section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Base Proxy structure for double vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDoubleVectorKeyStructBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoubleVectorKeyStructBase, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
	&NewStructOps,
	"MovieSceneDoubleVectorKeyStructBase",
	Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::PropPointers),
	sizeof(FMovieSceneDoubleVectorKeyStructBase),
	alignof(FMovieSceneDoubleVectorKeyStructBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase.InnerSingleton;
}
// End ScriptStruct FMovieSceneDoubleVectorKeyStructBase

// Begin ScriptStruct FMovieSceneVector2DKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector2DKeyStruct>() == std::is_polymorphic<FMovieSceneDoubleVectorKeyStructBase>(), "USTRUCT FMovieSceneVector2DKeyStruct cannot be polymorphic unless super FMovieSceneDoubleVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct;
class UScriptStruct* FMovieSceneVector2DKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector2DKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector2DKeyStruct>()
{
	return FMovieSceneVector2DKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for 2D vector section key data.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for 2D vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector2DKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector2DKeyStruct, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector2DKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector2DKeyStruct),
	alignof(FMovieSceneVector2DKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector2DKeyStruct

// Begin ScriptStruct FMovieSceneVector3dKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector3dKeyStruct>() == std::is_polymorphic<FMovieSceneDoubleVectorKeyStructBase>(), "USTRUCT FMovieSceneVector3dKeyStruct cannot be polymorphic unless super FMovieSceneDoubleVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct;
class UScriptStruct* FMovieSceneVector3dKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector3dKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector3dKeyStruct>()
{
	return FMovieSceneVector3dKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Proxy structure for double vector section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for double vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector3dKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector3dKeyStruct, Vector), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector3dKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector3dKeyStruct),
	alignof(FMovieSceneVector3dKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector3dKeyStruct

// Begin ScriptStruct FMovieSceneVector4dKeyStruct
static_assert(std::is_polymorphic<FMovieSceneVector4dKeyStruct>() == std::is_polymorphic<FMovieSceneDoubleVectorKeyStructBase>(), "USTRUCT FMovieSceneVector4dKeyStruct cannot be polymorphic unless super FMovieSceneDoubleVectorKeyStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct;
class UScriptStruct* FMovieSceneVector4dKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector4dKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVector4dKeyStruct>()
{
	return FMovieSceneVector4dKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Proxy structure for double vector section key data.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Proxy structure for double vector section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** They key's vector value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "They key's vector value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector4dKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneVector4dKeyStruct, Vector), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::NewProp_Vector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase,
	&NewStructOps,
	"MovieSceneVector4dKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneVector4dKeyStruct),
	alignof(FMovieSceneVector4dKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneVector4dKeyStruct

// Begin Class UMovieSceneFloatVectorSection
void UMovieSceneFloatVectorSection::StaticRegisterNativesUMovieSceneFloatVectorSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatVectorSection);
UClass* Z_Construct_UClass_UMovieSceneFloatVectorSection_NoRegister()
{
	return UMovieSceneFloatVectorSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A float vector section.\n */" },
		{ "IncludePath", "Sections/MovieSceneVectorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "A float vector section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Comment", "/** Float functions for the X,Y,Z,W components of the vector */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Float functions for the X,Y,Z,W components of the vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[] = {
		{ "Comment", "/** How many curves are actually used */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "How many curves are actually used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatVectorSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Curves, UMovieSceneFloatVectorSection), STRUCT_OFFSET(UMovieSceneFloatVectorSection, Curves), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) }; // 139010471
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneFloatVectorSection, ChannelsUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsUsed_MetaData), NewProp_ChannelsUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::NewProp_ChannelsUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneFloatVectorSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::ClassParams = {
	&UMovieSceneFloatVectorSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneFloatVectorSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatVectorSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatVectorSection>()
{
	return UMovieSceneFloatVectorSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatVectorSection);
UMovieSceneFloatVectorSection::~UMovieSceneFloatVectorSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFloatVectorSection)
// End Class UMovieSceneFloatVectorSection

// Begin Class UMovieSceneDoubleVectorSection
void UMovieSceneDoubleVectorSection::StaticRegisterNativesUMovieSceneDoubleVectorSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleVectorSection);
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister()
{
	return UMovieSceneDoubleVectorSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A double vector section.\n */" },
		{ "IncludePath", "Sections/MovieSceneVectorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "A double vector section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Comment", "/** Double functions for the X,Y,Z,W components of the vector */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "Double functions for the X,Y,Z,W components of the vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[] = {
		{ "Comment", "/** How many curves are actually used */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
		{ "ToolTip", "How many curves are actually used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleVectorSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Curves, UMovieSceneDoubleVectorSection), STRUCT_OFFSET(UMovieSceneDoubleVectorSection, Curves), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) }; // 3417982846
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDoubleVectorSection, ChannelsUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsUsed_MetaData), NewProp_ChannelsUsed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::NewProp_ChannelsUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDoubleVectorSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::ClassParams = {
	&UMovieSceneDoubleVectorSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDoubleVectorSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleVectorSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleVectorSection>()
{
	return UMovieSceneDoubleVectorSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleVectorSection);
UMovieSceneDoubleVectorSection::~UMovieSceneDoubleVectorSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDoubleVectorSection)
// End Class UMovieSceneDoubleVectorSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneFloatVectorKeyStructBase::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase_Statics::NewStructOps, TEXT("MovieSceneFloatVectorKeyStructBase"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatVectorKeyStructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatVectorKeyStructBase), 732840631U) },
		{ FMovieSceneVector2fKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector2fKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector2fKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector2fKeyStruct), 3272740792U) },
		{ FMovieSceneVector3fKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector3fKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector3fKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector3fKeyStruct), 787641839U) },
		{ FMovieSceneVector4fKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector4fKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector4fKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector4fKeyStruct), 2730090000U) },
		{ FMovieSceneDoubleVectorKeyStructBase::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase_Statics::NewStructOps, TEXT("MovieSceneDoubleVectorKeyStructBase"), &Z_Registration_Info_UScriptStruct_MovieSceneDoubleVectorKeyStructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDoubleVectorKeyStructBase), 1979506621U) },
		{ FMovieSceneVector2DKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector2DKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector2DKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector2DKeyStruct), 600613905U) },
		{ FMovieSceneVector3dKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector3dKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector3dKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector3dKeyStruct), 1179703968U) },
		{ FMovieSceneVector4dKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct_Statics::NewStructOps, TEXT("MovieSceneVector4dKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneVector4dKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVector4dKeyStruct), 2777612137U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatVectorSection, UMovieSceneFloatVectorSection::StaticClass, TEXT("UMovieSceneFloatVectorSection"), &Z_Registration_Info_UClass_UMovieSceneFloatVectorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatVectorSection), 3993027229U) },
		{ Z_Construct_UClass_UMovieSceneDoubleVectorSection, UMovieSceneDoubleVectorSection::StaticClass, TEXT("UMovieSceneDoubleVectorSection"), &Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleVectorSection), 2658545880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_4248533054(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
