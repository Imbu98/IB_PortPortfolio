// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavMesh/LinkGenerationConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkGenerationConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkId();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Enum ENavLinkBuilderFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavLinkBuilderFlags;
static UEnum* ENavLinkBuilderFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavLinkBuilderFlags"));
	}
	return Z_Registration_Info_UEnum_ENavLinkBuilderFlags.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavLinkBuilderFlags>()
{
	return ENavLinkBuilderFlags_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "CreateCenterPointLink.Name", "ENavLinkBuilderFlags::CreateCenterPointLink" },
		{ "CreateExtremityLink.Name", "ENavLinkBuilderFlags::CreateExtremityLink" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavLinkBuilderFlags::CreateCenterPointLink", (int64)ENavLinkBuilderFlags::CreateCenterPointLink },
		{ "ENavLinkBuilderFlags::CreateExtremityLink", (int64)ENavLinkBuilderFlags::CreateExtremityLink },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ENavLinkBuilderFlags",
	"ENavLinkBuilderFlags",
	Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags()
{
	if (!Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavLinkBuilderFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavLinkBuilderFlags.InnerSingleton;
}
// End Enum ENavLinkBuilderFlags

// Begin ScriptStruct FNavLinkGenerationJumpDownConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig;
class UScriptStruct* FNavLinkGenerationJumpDownConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavLinkGenerationJumpDownConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavLinkGenerationJumpDownConfig>()
{
	return FNavLinkGenerationJumpDownConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Experimental configuration to generate vertical links. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Experimental configuration to generate vertical links." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Should this config be used to generate links. */// @todo Hidden for now. Since there is currently only one config, it has no real usage.\n" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Should this config be used to generate links. // @todo Hidden for now. Since there is currently only one config, it has no real usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Horizontal length of the jump.\n\x09 * How far from the starting point we will look for ground. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Horizontal length of the jump.\nHow far from the starting point we will look for ground." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpDistanceFromEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far from the navmesh edge is the jump started. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "How far from the navmesh edge is the jump started." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMaxDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far below the starting height we want to look for landing ground. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "How far below the starting height we want to look for landing ground." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Peak height relative to the height of the starting point. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Peak height relative to the height of the starting point." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpEndsHeightTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance at both ends of the jump to find ground. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Tolerance at both ends of the jump to find ground." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingSeparationFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Value multiplied by CellSize to find the distance between sampling trajectories. Default is 1.\n     *  Larger values improve generation speed but might introduce sampling errors.  */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Value multiplied by CellSize to find the distance between sampling trajectories. Default is 1.\nLarger values improve generation speed but might introduce sampling errors." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterDistanceThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When filtering similar links, it's the distance used to compare between segment endpoints to match similar links.\n\x09 * Use greater distance for more filtering (0 to deactivate filtering). */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "When filtering similar links, it's the distance used to compare between segment endpoints to match similar links.\nUse greater distance for more filtering (0 to deactivate filtering)." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkBuilderFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/NavigationSystem.ENavLinkBuilderFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Flags used to indicate how links will be added. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Flags used to indicate how links will be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Area class for links generated by this configuration. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Area class for links generated by this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkProxyClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Class used to handle links made with this configuration.\n\x09 * Using this allows to implement custom behaviors when using navlinks, for example during the pathfollow.\n\x09 * Note that having a proxy is not required for successful navlink pathfinding,\n\x09 * but it does allow for custom behavior at the start and the end of a given navlink.\n\x09 * This implies that using LinkProxyClass is optional, and it can remain empty (the default value).\n\x09 * @see INavLinkCustomInterface \n\x09 * @see UGeneratedNavLinksProxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Class used to handle links made with this configuration.\nUsing this allows to implement custom behaviors when using navlinks, for example during the pathfollow.\nNote that having a proxy is not required for successful navlink pathfinding,\nbut it does allow for custom behavior at the start and the end of a given navlink.\nThis implies that using LinkProxyClass is optional, and it can remain empty (the default value).\n@see INavLinkCustomInterface\n@see UGeneratedNavLinksProxy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkProxyId_MetaData[] = {
		{ "Comment", "/** Identifier used identify the current proxy handler. All links generated through this config will use the same handler. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Identifier used identify the current proxy handler. All links generated through this config will use the same handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkProxy_MetaData[] = {
		{ "Comment", "/** Current proxy. The proxy instance is build from the LinkProxyClass (provided it's not null).\n\x09 * A proxy will be created if a @see LinkProxyClass is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Current proxy. The proxy instance is build from the LinkProxyClass (provided it's not null).\nA proxy will be created if a @see LinkProxyClass is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinkProxyRegistered_MetaData[] = {
		{ "Comment", "/** Is the link proxy registered to the navigation system CustomNavLinksMap.\n\x09 * Registration occurs on PostRegisterAllComponents or on PostLoadPreRebuild if a new proxy was created. */" },
		{ "ModuleRelativePath", "Public/NavMesh/LinkGenerationConfig.h" },
		{ "ToolTip", "Is the link proxy registered to the navigation system CustomNavLinksMap.\nRegistration occurs on PostRegisterAllComponents or on PostLoadPreRebuild if a new proxy was created." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpDistanceFromEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMaxDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpEndsHeightTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingSeparationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterDistanceThreshold;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_LinkBuilderFlags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LinkProxyClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkProxyId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkProxy;
	static void NewProp_bLinkProxyRegistered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkProxyRegistered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinkGenerationJumpDownConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FNavLinkGenerationJumpDownConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNavLinkGenerationJumpDownConfig), &Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpLength = { "JumpLength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, JumpLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpLength_MetaData), NewProp_JumpLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpDistanceFromEdge = { "JumpDistanceFromEdge", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, JumpDistanceFromEdge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpDistanceFromEdge_MetaData), NewProp_JumpDistanceFromEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpMaxDepth = { "JumpMaxDepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, JumpMaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMaxDepth_MetaData), NewProp_JumpMaxDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpEndsHeightTolerance = { "JumpEndsHeightTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, JumpEndsHeightTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpEndsHeightTolerance_MetaData), NewProp_JumpEndsHeightTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_SamplingSeparationFactor = { "SamplingSeparationFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, SamplingSeparationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingSeparationFactor_MetaData), NewProp_SamplingSeparationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_FilterDistanceThreshold = { "FilterDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, FilterDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterDistanceThreshold_MetaData), NewProp_FilterDistanceThreshold_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkBuilderFlags = { "LinkBuilderFlags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, LinkBuilderFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkBuilderFlags_MetaData), NewProp_LinkBuilderFlags_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxyClass = { "LinkProxyClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, LinkProxyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkProxyClass_MetaData), NewProp_LinkProxyClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxyId = { "LinkProxyId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, LinkProxyId), Z_Construct_UScriptStruct_FNavLinkId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkProxyId_MetaData), NewProp_LinkProxyId_MetaData) }; // 828782268
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxy = { "LinkProxy", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkGenerationJumpDownConfig, LinkProxy), Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkProxy_MetaData), NewProp_LinkProxy_MetaData) };
void Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bLinkProxyRegistered_SetBit(void* Obj)
{
	((FNavLinkGenerationJumpDownConfig*)Obj)->bLinkProxyRegistered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bLinkProxyRegistered = { "bLinkProxyRegistered", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNavLinkGenerationJumpDownConfig), &Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bLinkProxyRegistered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinkProxyRegistered_MetaData), NewProp_bLinkProxyRegistered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpDistanceFromEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpMaxDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_JumpEndsHeightTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_SamplingSeparationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_FilterDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkBuilderFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_AreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_LinkProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewProp_bLinkProxyRegistered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavLinkGenerationJumpDownConfig",
	Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::PropPointers),
	sizeof(FNavLinkGenerationJumpDownConfig),
	alignof(FNavLinkGenerationJumpDownConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.InnerSingleton, Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig.InnerSingleton;
}
// End ScriptStruct FNavLinkGenerationJumpDownConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavLinkBuilderFlags_StaticEnum, TEXT("ENavLinkBuilderFlags"), &Z_Registration_Info_UEnum_ENavLinkBuilderFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1095581163U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavLinkGenerationJumpDownConfig::StaticStruct, Z_Construct_UScriptStruct_FNavLinkGenerationJumpDownConfig_Statics::NewStructOps, TEXT("NavLinkGenerationJumpDownConfig"), &Z_Registration_Info_UScriptStruct_NavLinkGenerationJumpDownConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinkGenerationJumpDownConfig), 2656023227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_3943473796(TEXT("/Script/NavigationSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_LinkGenerationConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
