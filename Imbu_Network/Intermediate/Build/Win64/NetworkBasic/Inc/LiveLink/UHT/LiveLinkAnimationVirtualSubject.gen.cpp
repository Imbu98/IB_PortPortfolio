// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkAnimationVirtualSubject.h"
#include "LiveLink/Public/LiveLinkVirtualSubjectBoneAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationVirtualSubject() {}

// Begin Cross Module References
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject();
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister();
LIVELINK_API UEnum* Z_Construct_UEnum_LiveLink_EBoneTransformResolution();
LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References

// Begin Enum EBoneTransformResolution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneTransformResolution;
static UEnum* EBoneTransformResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLink_EBoneTransformResolution, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("EBoneTransformResolution"));
	}
	return Z_Registration_Info_UEnum_EBoneTransformResolution.OuterSingleton;
}
template<> LIVELINK_API UEnum* StaticEnum<EBoneTransformResolution>()
{
	return EBoneTransformResolution_StaticEnum();
}
struct Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Combine.Comment", "/** Combine the child and parent's bone transforms. */" },
		{ "Combine.Name", "EBoneTransformResolution::Combine" },
		{ "Combine.ToolTip", "Combine the child and parent's bone transforms." },
		{ "Comment", "/** What action should be taken when a bone name conflict happens between a parent and a child subject. */" },
		{ "KeepChild.Comment", "/** Keep child bone transform. */" },
		{ "KeepChild.Name", "EBoneTransformResolution::KeepChild" },
		{ "KeepChild.ToolTip", "Keep child bone transform." },
		{ "KeepParent.Comment", "/** Keep parent bone transform. */" },
		{ "KeepParent.Name", "EBoneTransformResolution::KeepParent" },
		{ "KeepParent.ToolTip", "Keep parent bone transform." },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "What action should be taken when a bone name conflict happens between a parent and a child subject." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoneTransformResolution::KeepParent", (int64)EBoneTransformResolution::KeepParent },
		{ "EBoneTransformResolution::KeepChild", (int64)EBoneTransformResolution::KeepChild },
		{ "EBoneTransformResolution::Combine", (int64)EBoneTransformResolution::Combine },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLink,
	nullptr,
	"EBoneTransformResolution",
	"EBoneTransformResolution",
	Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLink_EBoneTransformResolution()
{
	if (!Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton, Z_Construct_UEnum_LiveLink_EBoneTransformResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneTransformResolution.InnerSingleton;
}
// End Enum EBoneTransformResolution

// Begin Class ULiveLinkAnimationVirtualSubject
void ULiveLinkAnimationVirtualSubject::StaticRegisterNativesULiveLinkAnimationVirtualSubject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationVirtualSubject);
UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister()
{
	return ULiveLinkAnimationVirtualSubject::StaticClass();
}
struct Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A Skeleton virtual subject is an assembly of different subjects supporting the animation or basic role */" },
		{ "DisplayName", "Animation Virtual Subject" },
		{ "IncludePath", "LiveLinkAnimationVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "A Skeleton virtual subject is an assembly of different subjects supporting the animation or basic role" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of bone attachments between subjects. */" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "List of bone attachments between subjects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationBehavior_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** What should happen to the location of a bone when there's a conflict between the child and parent subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "What should happen to the location of a bone when there's a conflict between the child and parent subject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationBehavior_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** What should happen to the rotation of a bone when there's a conflict between the child and parent subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "What should happen to the rotation of a bone when there's a conflict between the child and parent subject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAppendSubjectNameToBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to append SubjectName to each bones part of the virtual hierarchy */" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "Whether to append SubjectName to each bones part of the virtual hierarchy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationBehavior;
	static void NewProp_bAppendSubjectNameToBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendSubjectNameToBones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationVirtualSubject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLiveLinkVirtualSubjectBoneAttachment, METADATA_PARAMS(0, nullptr) }; // 4045455323
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkAnimationVirtualSubject, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachments_MetaData), NewProp_Attachments_MetaData) }; // 4045455323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_LocationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_LocationBehavior = { "LocationBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkAnimationVirtualSubject, LocationBehavior), Z_Construct_UEnum_LiveLink_EBoneTransformResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationBehavior_MetaData), NewProp_LocationBehavior_MetaData) }; // 514487895
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_RotationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_RotationBehavior = { "RotationBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkAnimationVirtualSubject, RotationBehavior), Z_Construct_UEnum_LiveLink_EBoneTransformResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationBehavior_MetaData), NewProp_RotationBehavior_MetaData) }; // 514487895
void Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_SetBit(void* Obj)
{
	((ULiveLinkAnimationVirtualSubject*)Obj)->bAppendSubjectNameToBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones = { "bAppendSubjectNameToBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkAnimationVirtualSubject), &Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAppendSubjectNameToBones_MetaData), NewProp_bAppendSubjectNameToBones_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_Attachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_Attachments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_LocationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_LocationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_RotationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_RotationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::NewProp_bAppendSubjectNameToBones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams = {
	&ULiveLinkAnimationVirtualSubject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject()
{
	if (!Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject.OuterSingleton;
}
template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationVirtualSubject>()
{
	return ULiveLinkAnimationVirtualSubject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationVirtualSubject);
ULiveLinkAnimationVirtualSubject::~ULiveLinkAnimationVirtualSubject() {}
// End Class ULiveLinkAnimationVirtualSubject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoneTransformResolution_StaticEnum, TEXT("EBoneTransformResolution"), &Z_Registration_Info_UEnum_EBoneTransformResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 514487895U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationVirtualSubject, ULiveLinkAnimationVirtualSubject::StaticClass, TEXT("ULiveLinkAnimationVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkAnimationVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationVirtualSubject), 2833534872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_476648252(TEXT("/Script/LiveLink"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkAnimationVirtualSubject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
