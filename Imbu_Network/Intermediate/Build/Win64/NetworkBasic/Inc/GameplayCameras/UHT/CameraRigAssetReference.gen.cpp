// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraRigAssetReference.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRigAssetReference() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigAsset_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAssetReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRigParameterOverrides();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FCameraRigParameterOverrideBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase;
class UScriptStruct* FCameraRigParameterOverrideBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigParameterOverrideBase"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigParameterOverrideBase>()
{
	return FCameraRigParameterOverrideBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for camera rig parameter overrides. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "Base struct for camera rig parameter overrides." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceParameterGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Guid of the overriden interface parameter in the inner camera rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "The Guid of the overriden interface parameter in the inner camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateVariableGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Guid of the overriden interface parameter's private variable in the\n\x09 * inner camera rig.\n\x09 *\n\x09 * This can be derived from InterfaceParameterGuid, but we cache this during\n\x09 * the build process to avoid searching for interface parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "The Guid of the overriden interface parameter's private variable in the\ninner camera rig.\n\nThis can be derived from InterfaceParameterGuid, but we cache this during\nthe build process to avoid searching for interface parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceParameterName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the overriden interface parameter in the inner camera rig.\n\x09 *\n\x09 * This can be derived from InterfaceParameterGuid, but we cache this during\n\x09 * the build process to avoid searching for interface parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "The name of the overriden interface parameter in the inner camera rig.\n\nThis can be derived from InterfaceParameterGuid, but we cache this during\nthe build process to avoid searching for interface parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvalid_MetaData[] = {
		{ "Comment", "/**\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterfaceParameterGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateVariableGuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceParameterName;
	static void NewProp_bInvalid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvalid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigParameterOverrideBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_InterfaceParameterGuid = { "InterfaceParameterGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrideBase, InterfaceParameterGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceParameterGuid_MetaData), NewProp_InterfaceParameterGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_PrivateVariableGuid = { "PrivateVariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrideBase, PrivateVariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateVariableGuid_MetaData), NewProp_PrivateVariableGuid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_InterfaceParameterName = { "InterfaceParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrideBase, InterfaceParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceParameterName_MetaData), NewProp_InterfaceParameterName_MetaData) };
void Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_bInvalid_SetBit(void* Obj)
{
	((FCameraRigParameterOverrideBase*)Obj)->bInvalid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_bInvalid = { "bInvalid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraRigParameterOverrideBase), &Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_bInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvalid_MetaData), NewProp_bInvalid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_InterfaceParameterGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_PrivateVariableGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_InterfaceParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_bInvalid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigParameterOverrideBase",
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::PropPointers),
	sizeof(FCameraRigParameterOverrideBase),
	alignof(FCameraRigParameterOverrideBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase.InnerSingleton;
}
// End ScriptStruct FCameraRigParameterOverrideBase

// Begin ScriptStruct FBooleanCameraRigParameterOverride
static_assert(std::is_polymorphic<FBooleanCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FBooleanCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride;
class UScriptStruct* FBooleanCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BooleanCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBooleanCameraRigParameterOverride>()
{
	return FBooleanCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBooleanCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBooleanCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FBooleanCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2798599862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"BooleanCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FBooleanCameraRigParameterOverride),
	alignof(FBooleanCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FBooleanCameraRigParameterOverride

// Begin ScriptStruct FInteger32CameraRigParameterOverride
static_assert(std::is_polymorphic<FInteger32CameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FInteger32CameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride;
class UScriptStruct* FInteger32CameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Integer32CameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FInteger32CameraRigParameterOverride>()
{
	return FInteger32CameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteger32CameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteger32CameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FInteger32CameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3350893433
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Integer32CameraRigParameterOverride",
	Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::PropPointers),
	sizeof(FInteger32CameraRigParameterOverride),
	alignof(FInteger32CameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FInteger32CameraRigParameterOverride

// Begin ScriptStruct FFloatCameraRigParameterOverride
static_assert(std::is_polymorphic<FFloatCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FFloatCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride;
class UScriptStruct* FFloatCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("FloatCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FFloatCameraRigParameterOverride>()
{
	return FFloatCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FFloatCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 834407157
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"FloatCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FFloatCameraRigParameterOverride),
	alignof(FFloatCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FFloatCameraRigParameterOverride

// Begin ScriptStruct FDoubleCameraRigParameterOverride
static_assert(std::is_polymorphic<FDoubleCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FDoubleCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride;
class UScriptStruct* FDoubleCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("DoubleCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FDoubleCameraRigParameterOverride>()
{
	return FDoubleCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FDoubleCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 60259665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"DoubleCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FDoubleCameraRigParameterOverride),
	alignof(FDoubleCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FDoubleCameraRigParameterOverride

// Begin ScriptStruct FVector2fCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector2fCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector2fCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride;
class UScriptStruct* FVector2fCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2fCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2fCameraRigParameterOverride>()
{
	return FVector2fCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2fCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2fCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector2fCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2361009214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector2fCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector2fCameraRigParameterOverride),
	alignof(FVector2fCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector2fCameraRigParameterOverride

// Begin ScriptStruct FVector2dCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector2dCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector2dCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride;
class UScriptStruct* FVector2dCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2dCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2dCameraRigParameterOverride>()
{
	return FVector2dCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2dCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2dCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector2dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1195649529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector2dCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector2dCameraRigParameterOverride),
	alignof(FVector2dCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector2dCameraRigParameterOverride

// Begin ScriptStruct FVector3fCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector3fCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector3fCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride;
class UScriptStruct* FVector3fCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3fCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3fCameraRigParameterOverride>()
{
	return FVector3fCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3fCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3fCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector3fCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2906443670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector3fCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector3fCameraRigParameterOverride),
	alignof(FVector3fCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector3fCameraRigParameterOverride

// Begin ScriptStruct FVector3dCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector3dCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector3dCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride;
class UScriptStruct* FVector3dCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3dCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3dCameraRigParameterOverride>()
{
	return FVector3dCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3dCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3dCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2998266714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector3dCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector3dCameraRigParameterOverride),
	alignof(FVector3dCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector3dCameraRigParameterOverride

// Begin ScriptStruct FVector4fCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector4fCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector4fCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride;
class UScriptStruct* FVector4fCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4fCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4fCameraRigParameterOverride>()
{
	return FVector4fCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4fCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4fCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector4fCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2936717831
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector4fCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector4fCameraRigParameterOverride),
	alignof(FVector4fCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector4fCameraRigParameterOverride

// Begin ScriptStruct FVector4dCameraRigParameterOverride
static_assert(std::is_polymorphic<FVector4dCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FVector4dCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride;
class UScriptStruct* FVector4dCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4dCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4dCameraRigParameterOverride>()
{
	return FVector4dCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4dCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4dCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FVector4dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3755583652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Vector4dCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FVector4dCameraRigParameterOverride),
	alignof(FVector4dCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FVector4dCameraRigParameterOverride

// Begin ScriptStruct FRotator3fCameraRigParameterOverride
static_assert(std::is_polymorphic<FRotator3fCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FRotator3fCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride;
class UScriptStruct* FRotator3fCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3fCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3fCameraRigParameterOverride>()
{
	return FRotator3fCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3fCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3fCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FRotator3fCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3231316489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Rotator3fCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FRotator3fCameraRigParameterOverride),
	alignof(FRotator3fCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FRotator3fCameraRigParameterOverride

// Begin ScriptStruct FRotator3dCameraRigParameterOverride
static_assert(std::is_polymorphic<FRotator3dCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FRotator3dCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride;
class UScriptStruct* FRotator3dCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3dCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3dCameraRigParameterOverride>()
{
	return FRotator3dCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3dCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3dCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FRotator3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3457852835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Rotator3dCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FRotator3dCameraRigParameterOverride),
	alignof(FRotator3dCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FRotator3dCameraRigParameterOverride

// Begin ScriptStruct FTransform3fCameraRigParameterOverride
static_assert(std::is_polymorphic<FTransform3fCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FTransform3fCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride;
class UScriptStruct* FTransform3fCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3fCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3fCameraRigParameterOverride>()
{
	return FTransform3fCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3fCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3fCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FTransform3fCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2717589259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Transform3fCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FTransform3fCameraRigParameterOverride),
	alignof(FTransform3fCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FTransform3fCameraRigParameterOverride

// Begin ScriptStruct FTransform3dCameraRigParameterOverride
static_assert(std::is_polymorphic<FTransform3dCameraRigParameterOverride>() == std::is_polymorphic<FCameraRigParameterOverrideBase>(), "USTRUCT FTransform3dCameraRigParameterOverride cannot be polymorphic unless super FCameraRigParameterOverrideBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride;
class UScriptStruct* FTransform3dCameraRigParameterOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3dCameraRigParameterOverride"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3dCameraRigParameterOverride>()
{
	return FTransform3dCameraRigParameterOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3dCameraRigParameterOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3dCameraRigParameterOverride, Value), Z_Construct_UScriptStruct_FTransform3dCameraParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4165315591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase,
	&NewStructOps,
	"Transform3dCameraRigParameterOverride",
	Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::PropPointers),
	sizeof(FTransform3dCameraRigParameterOverride),
	alignof(FTransform3dCameraRigParameterOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.InnerSingleton, Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride.InnerSingleton;
}
// End ScriptStruct FTransform3dCameraRigParameterOverride

// Begin ScriptStruct FCameraRigParameterOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides;
class UScriptStruct* FCameraRigParameterOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigParameterOverrides, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigParameterOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigParameterOverrides>()
{
	return FCameraRigParameterOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure that holds lists of camera rig interface parameter overrides, one list\n * per parameter type.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "A structure that holds lists of camera rig interface parameter overrides, one list\nper parameter type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanOverrides_MetaData[] = {
		{ "Comment", "// Interface parameter overrides\n" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "Interface parameter overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer32Overrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform3fOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform3dOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Integer32Overrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Integer32Overrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector3dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector4fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector4dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotator3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotator3dOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform3fOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform3fOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform3dOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform3dOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigParameterOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_BooleanOverrides_Inner = { "BooleanOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1421122142
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_BooleanOverrides = { "BooleanOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, BooleanOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanOverrides_MetaData), NewProp_BooleanOverrides_MetaData) }; // 1421122142
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Integer32Overrides_Inner = { "Integer32Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4052694847
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Integer32Overrides = { "Integer32Overrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Integer32Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer32Overrides_MetaData), NewProp_Integer32Overrides_MetaData) }; // 4052694847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_FloatOverrides_Inner = { "FloatOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2405677883
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_FloatOverrides = { "FloatOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, FloatOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatOverrides_MetaData), NewProp_FloatOverrides_MetaData) }; // 2405677883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_DoubleOverrides_Inner = { "DoubleOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1815048600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_DoubleOverrides = { "DoubleOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, DoubleOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleOverrides_MetaData), NewProp_DoubleOverrides_MetaData) }; // 1815048600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2fOverrides_Inner = { "Vector2fOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1044709128
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2fOverrides = { "Vector2fOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector2fOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2fOverrides_MetaData), NewProp_Vector2fOverrides_MetaData) }; // 1044709128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2dOverrides_Inner = { "Vector2dOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 794216237
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2dOverrides = { "Vector2dOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector2dOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2dOverrides_MetaData), NewProp_Vector2dOverrides_MetaData) }; // 794216237
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3fOverrides_Inner = { "Vector3fOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4349358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3fOverrides = { "Vector3fOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector3fOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3fOverrides_MetaData), NewProp_Vector3fOverrides_MetaData) }; // 4349358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3dOverrides_Inner = { "Vector3dOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2580943505
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3dOverrides = { "Vector3dOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector3dOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3dOverrides_MetaData), NewProp_Vector3dOverrides_MetaData) }; // 2580943505
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4fOverrides_Inner = { "Vector4fOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 2657815540
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4fOverrides = { "Vector4fOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector4fOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4fOverrides_MetaData), NewProp_Vector4fOverrides_MetaData) }; // 2657815540
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4dOverrides_Inner = { "Vector4dOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 4135969363
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4dOverrides = { "Vector4dOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Vector4dOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4dOverrides_MetaData), NewProp_Vector4dOverrides_MetaData) }; // 4135969363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3fOverrides_Inner = { "Rotator3fOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 401730230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3fOverrides = { "Rotator3fOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Rotator3fOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator3fOverrides_MetaData), NewProp_Rotator3fOverrides_MetaData) }; // 401730230
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3dOverrides_Inner = { "Rotator3dOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 1578366775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3dOverrides = { "Rotator3dOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Rotator3dOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator3dOverrides_MetaData), NewProp_Rotator3dOverrides_MetaData) }; // 1578366775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3fOverrides_Inner = { "Transform3fOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 105074159
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3fOverrides = { "Transform3fOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Transform3fOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform3fOverrides_MetaData), NewProp_Transform3fOverrides_MetaData) }; // 105074159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3dOverrides_Inner = { "Transform3dOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride, METADATA_PARAMS(0, nullptr) }; // 3076768964
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3dOverrides = { "Transform3dOverrides", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigParameterOverrides, Transform3dOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform3dOverrides_MetaData), NewProp_Transform3dOverrides_MetaData) }; // 3076768964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_BooleanOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_BooleanOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Integer32Overrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Integer32Overrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_FloatOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_FloatOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_DoubleOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_DoubleOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector2dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector3dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Vector4dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Rotator3dOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3fOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3fOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3dOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewProp_Transform3dOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigParameterOverrides",
	Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::PropPointers),
	sizeof(FCameraRigParameterOverrides),
	alignof(FCameraRigParameterOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigParameterOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides.InnerSingleton;
}
// End ScriptStruct FCameraRigParameterOverrides

// Begin ScriptStruct FCameraRigAssetReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraRigAssetReference;
class UScriptStruct* FCameraRigAssetReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigAssetReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraRigAssetReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRigAssetReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraRigAssetReference"));
	}
	return Z_Registration_Info_UScriptStruct_CameraRigAssetReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraRigAssetReference>()
{
	return FCameraRigAssetReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A structure holding a reference to a camera rig asset, along with the interface parameter\n * override values.\n */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "A structure holding a reference to a camera rig asset, along with the interface parameter\noverride values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRig_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** The referenced camera rig. */" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "The referenced camera rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** The parameter overrides. */" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/Core/CameraRigAssetReference.h" },
		{ "ToolTip", "The parameter overrides." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRigAssetReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewProp_CameraRig = { "CameraRig", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigAssetReference, CameraRig), Z_Construct_UClass_UCameraRigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRig_MetaData), NewProp_CameraRig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRigAssetReference, ParameterOverrides), Z_Construct_UScriptStruct_FCameraRigParameterOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) }; // 2428510816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewProp_CameraRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewProp_ParameterOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"CameraRigAssetReference",
	Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::PropPointers),
	sizeof(FCameraRigAssetReference),
	alignof(FCameraRigAssetReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRigAssetReference()
{
	if (!Z_Registration_Info_UScriptStruct_CameraRigAssetReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraRigAssetReference.InnerSingleton, Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraRigAssetReference.InnerSingleton;
}
// End ScriptStruct FCameraRigAssetReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraRigParameterOverrideBase::StaticStruct, Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewStructOps, TEXT("CameraRigParameterOverrideBase"), &Z_Registration_Info_UScriptStruct_CameraRigParameterOverrideBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigParameterOverrideBase), 1449245134U) },
		{ FBooleanCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::NewStructOps, TEXT("BooleanCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_BooleanCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBooleanCameraRigParameterOverride), 1421122142U) },
		{ FInteger32CameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::NewStructOps, TEXT("Integer32CameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Integer32CameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteger32CameraRigParameterOverride), 4052694847U) },
		{ FFloatCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::NewStructOps, TEXT("FloatCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_FloatCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatCameraRigParameterOverride), 2405677883U) },
		{ FDoubleCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::NewStructOps, TEXT("DoubleCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_DoubleCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleCameraRigParameterOverride), 1815048600U) },
		{ FVector2fCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector2fCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector2fCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2fCameraRigParameterOverride), 1044709128U) },
		{ FVector2dCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector2dCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector2dCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2dCameraRigParameterOverride), 794216237U) },
		{ FVector3fCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector3fCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector3fCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3fCameraRigParameterOverride), 4349358U) },
		{ FVector3dCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector3dCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector3dCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3dCameraRigParameterOverride), 2580943505U) },
		{ FVector4fCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector4fCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector4fCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4fCameraRigParameterOverride), 2657815540U) },
		{ FVector4dCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::NewStructOps, TEXT("Vector4dCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Vector4dCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4dCameraRigParameterOverride), 4135969363U) },
		{ FRotator3fCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::NewStructOps, TEXT("Rotator3fCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Rotator3fCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3fCameraRigParameterOverride), 401730230U) },
		{ FRotator3dCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::NewStructOps, TEXT("Rotator3dCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Rotator3dCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3dCameraRigParameterOverride), 1578366775U) },
		{ FTransform3fCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::NewStructOps, TEXT("Transform3fCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Transform3fCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3fCameraRigParameterOverride), 105074159U) },
		{ FTransform3dCameraRigParameterOverride::StaticStruct, Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::NewStructOps, TEXT("Transform3dCameraRigParameterOverride"), &Z_Registration_Info_UScriptStruct_Transform3dCameraRigParameterOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3dCameraRigParameterOverride), 3076768964U) },
		{ FCameraRigParameterOverrides::StaticStruct, Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewStructOps, TEXT("CameraRigParameterOverrides"), &Z_Registration_Info_UScriptStruct_CameraRigParameterOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigParameterOverrides), 2428510816U) },
		{ FCameraRigAssetReference::StaticStruct, Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewStructOps, TEXT("CameraRigAssetReference"), &Z_Registration_Info_UScriptStruct_CameraRigAssetReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRigAssetReference), 1437874377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h_2324398817(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
