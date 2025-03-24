// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMVariant() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTag();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMVariant();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMVariantRef();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTag;
class UScriptStruct* FRigVMTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTag, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMTag"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTag.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMTag>()
{
	return FRigVMTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// User applied tag\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "User applied tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInUserInterface_MetaData[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Enabling this will show tags in the user interface within\n// the variant widgets and other places.\n// Disabling this will interpret this tag as automation / scripting only.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "Enabling this will show tags in the user interface within\nthe variant widgets and other places.\nDisabling this will interpret this tag as automation / scripting only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarksSubjectAsInvalid_MetaData[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Enabling this will mark the subject (asset, function etc) as (soft) deprecated.\n// The content referring to variants with this tag will continue to work, but the\n// user interface will suggest the user to upgrade to a later variant.\n" },
		{ "DisplayName", "Mark Subject Deprecated" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "Enabling this will mark the subject (asset, function etc) as (soft) deprecated.\nThe content referring to variants with this tag will continue to work, but the\nuser interface will suggest the user to upgrade to a later variant." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bShowInUserInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInUserInterface;
	static void NewProp_bMarksSubjectAsInvalid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarksSubjectAsInvalid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTag, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTag, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTag, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTag, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bShowInUserInterface_SetBit(void* Obj)
{
	((FRigVMTag*)Obj)->bShowInUserInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bShowInUserInterface = { "bShowInUserInterface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMTag), &Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bShowInUserInterface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInUserInterface_MetaData), NewProp_bShowInUserInterface_MetaData) };
void Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bMarksSubjectAsInvalid_SetBit(void* Obj)
{
	((FRigVMTag*)Obj)->bMarksSubjectAsInvalid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bMarksSubjectAsInvalid = { "bMarksSubjectAsInvalid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMTag), &Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bMarksSubjectAsInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarksSubjectAsInvalid_MetaData), NewProp_bMarksSubjectAsInvalid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bShowInUserInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTag_Statics::NewProp_bMarksSubjectAsInvalid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMTag",
	Z_Construct_UScriptStruct_FRigVMTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTag_Statics::PropPointers),
	sizeof(FRigVMTag),
	alignof(FRigVMTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMTag()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTag.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMTag.InnerSingleton;
}
// End ScriptStruct FRigVMTag

// Begin ScriptStruct FRigVMVariant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMVariant;
class UScriptStruct* FRigVMVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMVariant, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMVariant"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMVariant.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMVariant>()
{
	return FRigVMVariant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Guid which is shared by all variants of the same element\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "Guid which is shared by all variants of the same element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Tags applied to this variant\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "Tags applied to this variant" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMVariant, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMTag, METADATA_PARAMS(0, nullptr) }; // 604098037
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMVariant, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 604098037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMVariant",
	Z_Construct_UScriptStruct_FRigVMVariant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariant_Statics::PropPointers),
	sizeof(FRigVMVariant),
	alignof(FRigVMVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMVariant()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMVariant.InnerSingleton, Z_Construct_UScriptStruct_FRigVMVariant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMVariant.InnerSingleton;
}
// End ScriptStruct FRigVMVariant

// Begin ScriptStruct FRigVMVariantRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMVariantRef;
class UScriptStruct* FRigVMVariantRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMVariantRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMVariantRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMVariantRef, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMVariantRef"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMVariantRef.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMVariantRef>()
{
	return FRigVMVariantRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMVariantRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This struct should not be serialized.\n// It is generated on demand.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
		{ "ToolTip", "This struct should not be serialized.\nIt is generated on demand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
		{ "Category", "RigVMVariantRef" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "Category", "RigVMVariantRef" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMVariant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMVariantRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMVariantRef, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPath_MetaData), NewProp_ObjectPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMVariantRef, Variant), Z_Construct_UScriptStruct_FRigVMVariant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) }; // 3184438172
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::NewProp_ObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::NewProp_Variant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMVariantRef",
	Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::PropPointers),
	sizeof(FRigVMVariantRef),
	alignof(FRigVMVariantRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMVariantRef()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMVariantRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMVariantRef.InnerSingleton, Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMVariantRef.InnerSingleton;
}
// End ScriptStruct FRigVMVariantRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMVariant_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMTag::StaticStruct, Z_Construct_UScriptStruct_FRigVMTag_Statics::NewStructOps, TEXT("RigVMTag"), &Z_Registration_Info_UScriptStruct_RigVMTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTag), 604098037U) },
		{ FRigVMVariant::StaticStruct, Z_Construct_UScriptStruct_FRigVMVariant_Statics::NewStructOps, TEXT("RigVMVariant"), &Z_Registration_Info_UScriptStruct_RigVMVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMVariant), 3184438172U) },
		{ FRigVMVariantRef::StaticStruct, Z_Construct_UScriptStruct_FRigVMVariantRef_Statics::NewStructOps, TEXT("RigVMVariantRef"), &Z_Registration_Info_UScriptStruct_RigVMVariantRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMVariantRef), 1405875069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMVariant_h_2089318170(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMVariant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMVariant_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
