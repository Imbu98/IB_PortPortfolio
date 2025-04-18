// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2DArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2DArray() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArray();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureRenderTarget2DArray
void UTextureRenderTarget2DArray::StaticRegisterNativesUTextureRenderTarget2DArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget2DArray);
UClass* Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister()
{
	return UTextureRenderTarget2DArray::StaticClass();
}
struct Z_Construct_UClass_UTextureRenderTarget2DArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTarget2DArray\n *\n * 2D Array render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular 2DArray texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTarget2DArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "TextureRenderTarget2DArray\n\n2D Array render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular 2DArray texture resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The width of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The height of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The height of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slices_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The slices of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The slices of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsUAV_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** Whether this render target can be used as an unordered access view */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "Whether this render target can be used as an unordered access view" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
	static void NewProp_bHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
	static void NewProp_bSupportsUAV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsUAV;
	static void NewProp_bForceLinearGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2DArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2DArray, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2DArray, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices = { "Slices", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2DArray, Slices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slices_MetaData), NewProp_Slices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2DArray, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2DArray, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFormat_MetaData), NewProp_OverrideFormat_MetaData) }; // 2051073252
void Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_SetBit(void* Obj)
{
	((UTextureRenderTarget2DArray*)Obj)->bHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2DArray), &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHDR_MetaData), NewProp_bHDR_MetaData) };
void Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bSupportsUAV_SetBit(void* Obj)
{
	((UTextureRenderTarget2DArray*)Obj)->bSupportsUAV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bSupportsUAV = { "bSupportsUAV", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2DArray), &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bSupportsUAV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsUAV_MetaData), NewProp_bSupportsUAV_MetaData) };
void Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
{
	((UTextureRenderTarget2DArray*)Obj)->bForceLinearGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2DArray), &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceLinearGamma_MetaData), NewProp_bForceLinearGamma_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bSupportsUAV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::ClassParams = {
	&UTextureRenderTarget2DArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureRenderTarget2DArray()
{
	if (!Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget2DArray>()
{
	return UTextureRenderTarget2DArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2DArray);
UTextureRenderTarget2DArray::~UTextureRenderTarget2DArray() {}
// End Class UTextureRenderTarget2DArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget2DArray, UTextureRenderTarget2DArray::StaticClass, TEXT("UTextureRenderTarget2DArray"), &Z_Registration_Info_UClass_UTextureRenderTarget2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget2DArray), 3845211214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_1704444180(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
