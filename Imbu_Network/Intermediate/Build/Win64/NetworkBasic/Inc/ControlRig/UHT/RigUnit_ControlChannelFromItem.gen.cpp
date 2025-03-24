// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ControlChannelFromItem() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetAnimationChannelFromItemBase
static_assert(std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetAnimationChannelFromItemBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase;
class UScriptStruct* FRigUnit_GetAnimationChannelFromItemBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetAnimationChannelFromItemBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetAnimationChannelFromItemBase>()
{
	return FRigUnit_GetAnimationChannelFromItemBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Controls" },
		{ "Comment", "/**\n * Get Animation Channel is used to retrieve a control's animation channel value\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Get Animation Channel is used to retrieve a control's animation channel value" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item representing the channel\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The item representing the channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the initial value will be returned\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "If set to true the initial value will be returned" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_bInitial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetAnimationChannelFromItemBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetAnimationChannelFromItemBase, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1315948141
void Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_bInitial_SetBit(void* Obj)
{
	((FRigUnit_GetAnimationChannelFromItemBase*)Obj)->bInitial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetAnimationChannelFromItemBase), &Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitial_MetaData), NewProp_bInitial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewProp_bInitial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetAnimationChannelFromItemBase",
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::PropPointers),
	sizeof(FRigUnit_GetAnimationChannelFromItemBase),
	alignof(FRigUnit_GetAnimationChannelFromItemBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_GetAnimationChannelFromItemBase

// Begin ScriptStruct FRigUnit_GetBoolAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetBoolAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetBoolAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetBoolAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetBoolAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetBoolAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigUnit_GetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetBoolAnimationChannelFromItem::Execute"), &FRigUnit_GetBoolAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetBoolAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetBoolAnimationChannelFromItem>()
{
	return FRigUnit_GetBoolAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Bool Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Bool Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Bool Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetBoolAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FRigUnit_GetBoolAnimationChannelFromItem*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetBoolAnimationChannelFromItem), &Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetBoolAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetBoolAnimationChannelFromItem),
	alignof(FRigUnit_GetBoolAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetBoolAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetBoolAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetBoolAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetFloatAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetFloatAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetFloatAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetFloatAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetFloatAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetFloatAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_GetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetFloatAnimationChannelFromItem::Execute"), &FRigUnit_GetFloatAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetFloatAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetFloatAnimationChannelFromItem>()
{
	return FRigUnit_GetFloatAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Float Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Float Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Float Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetFloatAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetFloatAnimationChannelFromItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetFloatAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetFloatAnimationChannelFromItem),
	alignof(FRigUnit_GetFloatAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetFloatAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetFloatAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetFloatAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetIntAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetIntAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetIntAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetIntAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetIntAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetIntAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetIntAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigUnit_GetIntAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetIntAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetIntAnimationChannelFromItem::Execute"), &FRigUnit_GetIntAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetIntAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetIntAnimationChannelFromItem>()
{
	return FRigUnit_GetIntAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Int Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Int Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Int Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetIntAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetIntAnimationChannelFromItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetIntAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetIntAnimationChannelFromItem),
	alignof(FRigUnit_GetIntAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetIntAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetIntAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetIntAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetVector2DAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetVector2DAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetVector2DAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetVector2DAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetVector2DAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetVector2DAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FVector2D"));
		Arguments_FRigUnit_GetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetVector2DAnimationChannelFromItem::Execute"), &FRigUnit_GetVector2DAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetVector2DAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetVector2DAnimationChannelFromItem>()
{
	return FRigUnit_GetVector2DAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Vector2D Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Vector2D Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Vector2D Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetVector2DAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetVector2DAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetVector2DAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetVector2DAnimationChannelFromItem),
	alignof(FRigUnit_GetVector2DAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetVector2DAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetVector2DAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetVector2DAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetVectorAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetVectorAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetVectorAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetVectorAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetVectorAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetVectorAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_GetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetVectorAnimationChannelFromItem::Execute"), &FRigUnit_GetVectorAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetVectorAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetVectorAnimationChannelFromItem>()
{
	return FRigUnit_GetVectorAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Vector Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Vector Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Vector Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetVectorAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetVectorAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetVectorAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetVectorAnimationChannelFromItem),
	alignof(FRigUnit_GetVectorAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetVectorAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetVectorAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetVectorAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetRotatorAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetRotatorAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetRotatorAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetRotatorAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRotatorAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRotatorAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigUnit_GetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRotatorAnimationChannelFromItem::Execute"), &FRigUnit_GetRotatorAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetRotatorAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRotatorAnimationChannelFromItem>()
{
	return FRigUnit_GetRotatorAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Rotator Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Rotator Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Rotator Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRotatorAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRotatorAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetRotatorAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetRotatorAnimationChannelFromItem),
	alignof(FRigUnit_GetRotatorAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetRotatorAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetRotatorAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetRotatorAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_GetTransformAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_GetTransformAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_GetTransformAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem;
class UScriptStruct* FRigUnit_GetTransformAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetTransformAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTransformAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_GetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_GetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTransformAnimationChannelFromItem::Execute"), &FRigUnit_GetTransformAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_GetTransformAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetTransformAnimationChannelFromItem>()
{
	return FRigUnit_GetTransformAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Transform Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Transform Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "GetAnimationChannelFromItem" },
		{ "ToolTip", "Get Transform Channel is used to retrieve a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTransformAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTransformAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_GetTransformAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_GetTransformAnimationChannelFromItem),
	alignof(FRigUnit_GetTransformAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_GetTransformAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetTransformAnimationChannelFromItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_GetTransformAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetAnimationChannelBaseFromItem
static_assert(std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>() == std::is_polymorphic<FRigUnit_GetAnimationChannelFromItemBase>(), "USTRUCT FRigUnit_SetAnimationChannelBaseFromItem cannot be polymorphic unless super FRigUnit_GetAnimationChannelFromItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem;
class UScriptStruct* FRigUnit_SetAnimationChannelBaseFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetAnimationChannelBaseFromItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetAnimationChannelBaseFromItem>()
{
	return FRigUnit_SetAnimationChannelBaseFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/**\n * Set Animation Channel is used to change a control's animation channel value\n */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "Set Animation Channel is used to change a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetAnimationChannelBaseFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetAnimationChannelBaseFromItem, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecuteContext_MetaData), NewProp_ExecuteContext_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::NewProp_ExecuteContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase,
	&NewStructOps,
	"RigUnit_SetAnimationChannelBaseFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetAnimationChannelBaseFromItem),
	alignof(FRigUnit_SetAnimationChannelBaseFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem.InnerSingleton;
}
// End ScriptStruct FRigUnit_SetAnimationChannelBaseFromItem

// Begin ScriptStruct FRigUnit_SetBoolAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetBoolAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetBoolAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetBoolAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetBoolAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetBoolAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigUnit_SetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetBoolAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetBoolAnimationChannelFromItem::Execute"), &FRigUnit_SetBoolAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetBoolAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetBoolAnimationChannelFromItem>()
{
	return FRigUnit_SetBoolAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Bool Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Bool Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Bool Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetBoolAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FRigUnit_SetBoolAnimationChannelFromItem*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetBoolAnimationChannelFromItem), &Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetBoolAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetBoolAnimationChannelFromItem),
	alignof(FRigUnit_SetBoolAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetBoolAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetBoolAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetBoolAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetFloatAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetFloatAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetFloatAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetFloatAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetFloatAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetFloatAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_SetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetFloatAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetFloatAnimationChannelFromItem::Execute"), &FRigUnit_SetFloatAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetFloatAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetFloatAnimationChannelFromItem>()
{
	return FRigUnit_SetFloatAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Float Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Float Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Float Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetFloatAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetFloatAnimationChannelFromItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetFloatAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetFloatAnimationChannelFromItem),
	alignof(FRigUnit_SetFloatAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetFloatAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetFloatAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetFloatAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetIntAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetIntAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetIntAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetIntAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetIntAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetIntAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetIntAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigUnit_SetIntAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetIntAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetIntAnimationChannelFromItem::Execute"), &FRigUnit_SetIntAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetIntAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetIntAnimationChannelFromItem>()
{
	return FRigUnit_SetIntAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Int Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Int Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Int Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetIntAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetIntAnimationChannelFromItem, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetIntAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetIntAnimationChannelFromItem),
	alignof(FRigUnit_SetIntAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetIntAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetIntAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetIntAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetVector2DAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetVector2DAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetVector2DAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetVector2DAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetVector2DAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetVector2DAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FVector2D"));
		Arguments_FRigUnit_SetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetVector2DAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetVector2DAnimationChannelFromItem::Execute"), &FRigUnit_SetVector2DAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetVector2DAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetVector2DAnimationChannelFromItem>()
{
	return FRigUnit_SetVector2DAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Vector2D Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Vector2D Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Vector2D Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetVector2DAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetVector2DAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetVector2DAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetVector2DAnimationChannelFromItem),
	alignof(FRigUnit_SetVector2DAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetVector2DAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetVector2DAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetVector2DAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetVectorAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetVectorAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetVectorAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetVectorAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetVectorAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetVectorAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_SetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetVectorAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetVectorAnimationChannelFromItem::Execute"), &FRigUnit_SetVectorAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetVectorAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetVectorAnimationChannelFromItem>()
{
	return FRigUnit_SetVectorAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Vector Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Vector Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Vector Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetVectorAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetVectorAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetVectorAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetVectorAnimationChannelFromItem),
	alignof(FRigUnit_SetVectorAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetVectorAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetVectorAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetVectorAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetRotatorAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetRotatorAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetRotatorAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetRotatorAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRotatorAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRotatorAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigUnit_SetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRotatorAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRotatorAnimationChannelFromItem::Execute"), &FRigUnit_SetRotatorAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetRotatorAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRotatorAnimationChannelFromItem>()
{
	return FRigUnit_SetRotatorAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Rotator Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Rotator Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Rotator Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRotatorAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetRotatorAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetRotatorAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetRotatorAnimationChannelFromItem),
	alignof(FRigUnit_SetRotatorAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetRotatorAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetRotatorAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetRotatorAnimationChannelFromItem

// Begin ScriptStruct FRigUnit_SetTransformAnimationChannelFromItem
static_assert(std::is_polymorphic<FRigUnit_SetTransformAnimationChannelFromItem>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBaseFromItem>(), "USTRUCT FRigUnit_SetTransformAnimationChannelFromItem cannot be polymorphic unless super FRigUnit_SetAnimationChannelBaseFromItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem;
class UScriptStruct* FRigUnit_SetTransformAnimationChannelFromItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTransformAnimationChannelFromItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTransformAnimationChannelFromItem_Execute;
		Arguments_FRigUnit_SetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_SetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetTransformAnimationChannelFromItem_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTransformAnimationChannelFromItem::Execute"), &FRigUnit_SetTransformAnimationChannelFromItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.OuterSingleton, Arguments_FRigUnit_SetTransformAnimationChannelFromItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTransformAnimationChannelFromItem>()
{
	return FRigUnit_SetTransformAnimationChannelFromItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Transform Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Transform Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "TemplateName", "SetAnimationChannelFromItem" },
		{ "ToolTip", "Set Transform Channel is used to set a control's animation channel value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_ControlChannelFromItem.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTransformAnimationChannelFromItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetTransformAnimationChannelFromItem, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem,
	&NewStructOps,
	"RigUnit_SetTransformAnimationChannelFromItem",
	Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::PropPointers),
	sizeof(FRigUnit_SetTransformAnimationChannelFromItem),
	alignof(FRigUnit_SetTransformAnimationChannelFromItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem.InnerSingleton;
}
void FRigUnit_SetTransformAnimationChannelFromItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetTransformAnimationChannelFromItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Item,
		bInitial
	);
}
// End ScriptStruct FRigUnit_SetTransformAnimationChannelFromItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetAnimationChannelFromItemBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics::NewStructOps, TEXT("RigUnit_GetAnimationChannelFromItemBase"), &Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelFromItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetAnimationChannelFromItemBase), 1387966518U) },
		{ FRigUnit_GetBoolAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetBoolAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetBoolAnimationChannelFromItem), 451019626U) },
		{ FRigUnit_GetFloatAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetFloatAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetFloatAnimationChannelFromItem), 1216821480U) },
		{ FRigUnit_GetIntAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetIntAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetIntAnimationChannelFromItem), 2714033079U) },
		{ FRigUnit_GetVector2DAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetVector2DAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetVector2DAnimationChannelFromItem), 1126566944U) },
		{ FRigUnit_GetVectorAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetVectorAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetVectorAnimationChannelFromItem), 2175525080U) },
		{ FRigUnit_GetRotatorAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetRotatorAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRotatorAnimationChannelFromItem), 1533614187U) },
		{ FRigUnit_GetTransformAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_GetTransformAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTransformAnimationChannelFromItem), 2629924869U) },
		{ FRigUnit_SetAnimationChannelBaseFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics::NewStructOps, TEXT("RigUnit_SetAnimationChannelBaseFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBaseFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetAnimationChannelBaseFromItem), 3697154856U) },
		{ FRigUnit_SetBoolAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetBoolAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetBoolAnimationChannelFromItem), 1907586970U) },
		{ FRigUnit_SetFloatAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetFloatAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetFloatAnimationChannelFromItem), 1805001665U) },
		{ FRigUnit_SetIntAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetIntAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetIntAnimationChannelFromItem), 2153612166U) },
		{ FRigUnit_SetVector2DAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetVector2DAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetVector2DAnimationChannelFromItem), 2526782229U) },
		{ FRigUnit_SetVectorAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetVectorAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetVectorAnimationChannelFromItem), 3395003908U) },
		{ FRigUnit_SetRotatorAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetRotatorAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRotatorAnimationChannelFromItem), 1706378353U) },
		{ FRigUnit_SetTransformAnimationChannelFromItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics::NewStructOps, TEXT("RigUnit_SetTransformAnimationChannelFromItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannelFromItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTransformAnimationChannelFromItem), 3592761693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_482906579(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
