// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetMathLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FColor;
struct FDateTime;
struct FFloatSpringState;
struct FFrameNumber;
struct FFrameRate;
struct FLinearColor;
struct FQualifiedFrameTime;
struct FQuaternionSpringState;
struct FRandomStream;
struct FRuntimeFloatCurve;
struct FTimespan;
struct FVector_NetQuantize100;
struct FVector_NetQuantize10;
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;
struct FVectorSpringState;
#ifdef ENGINE_KismetMathLibrary_generated_h
#error "KismetMathLibrary.generated.h already included, missing '#pragma once' in KismetMathLibrary.h"
#endif
#define ENGINE_KismetMathLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatSpringState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFloatSpringState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorSpringState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorSpringState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuaternionSpringState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuaternionSpringState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBreakVector_NetQuantizeNormal); \
	DECLARE_FUNCTION(execBreakVector_NetQuantize100); \
	DECLARE_FUNCTION(execBreakVector_NetQuantize10); \
	DECLARE_FUNCTION(execBreakVector_NetQuantize); \
	DECLARE_FUNCTION(execMakeVector_NetQuantizeNormal); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize100); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize10); \
	DECLARE_FUNCTION(execMakeVector_NetQuantize); \
	DECLARE_FUNCTION(execConvert3DTo1D); \
	DECLARE_FUNCTION(execConvert2DTo1D); \
	DECLARE_FUNCTION(execConvert1DTo3D); \
	DECLARE_FUNCTION(execConvert1DTo2D); \
	DECLARE_FUNCTION(execDynamicWeightedMovingAverage_FRotator); \
	DECLARE_FUNCTION(execDynamicWeightedMovingAverage_FVector); \
	DECLARE_FUNCTION(execDynamicWeightedMovingAverage_Float); \
	DECLARE_FUNCTION(execWeightedMovingAverage_FRotator); \
	DECLARE_FUNCTION(execWeightedMovingAverage_FVector); \
	DECLARE_FUNCTION(execWeightedMovingAverage_Float); \
	DECLARE_FUNCTION(execLinePlaneIntersection_OriginNormal); \
	DECLARE_FUNCTION(execLinePlaneIntersection); \
	DECLARE_FUNCTION(execGetSlopeDegreeAngles); \
	DECLARE_FUNCTION(execIsPointInBoxWithTransform_Box); \
	DECLARE_FUNCTION(execIsPointInBoxWithTransform); \
	DECLARE_FUNCTION(execGetBoxCenter); \
	DECLARE_FUNCTION(execGetBoxSize); \
	DECLARE_FUNCTION(execGetBoxVolume); \
	DECLARE_FUNCTION(execIsPointInBox_Box); \
	DECLARE_FUNCTION(execIsPointInBox); \
	DECLARE_FUNCTION(execPointsAreCoplanar); \
	DECLARE_FUNCTION(execMinAreaRectangle); \
	DECLARE_FUNCTION(execPerlinNoise1D); \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegreesFromStream); \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadiansFromStream); \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegreesFromStream); \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadiansFromStream); \
	DECLARE_FUNCTION(execSetRandomStreamSeed); \
	DECLARE_FUNCTION(execSeedRandomStream); \
	DECLARE_FUNCTION(execResetRandomStream); \
	DECLARE_FUNCTION(execRandomRotatorFromStream); \
	DECLARE_FUNCTION(execRandomPointInBoundingBoxFromStream_Box); \
	DECLARE_FUNCTION(execRandomPointInBoundingBoxFromStream); \
	DECLARE_FUNCTION(execRandomUnitVectorFromStream); \
	DECLARE_FUNCTION(execRandomFloatInRangeFromStream); \
	DECLARE_FUNCTION(execRandomFloatFromStream); \
	DECLARE_FUNCTION(execRandomBoolFromStream); \
	DECLARE_FUNCTION(execRandomIntegerInRangeFromStream); \
	DECLARE_FUNCTION(execRandomIntegerFromStream); \
	DECLARE_FUNCTION(execSetQuaternionSpringStateAngularVelocity); \
	DECLARE_FUNCTION(execSetVectorSpringStateVelocity); \
	DECLARE_FUNCTION(execSetFloatSpringStateVelocity); \
	DECLARE_FUNCTION(execResetQuaternionSpringState); \
	DECLARE_FUNCTION(execResetVectorSpringState); \
	DECLARE_FUNCTION(execResetFloatSpringState); \
	DECLARE_FUNCTION(execFloatSpringInterp); \
	DECLARE_FUNCTION(execRInterpTo_Constant); \
	DECLARE_FUNCTION(execRInterpTo); \
	DECLARE_FUNCTION(execFInterpTo_Constant); \
	DECLARE_FUNCTION(execFInterpTo); \
	DECLARE_FUNCTION(execConv_TransformToMatrix); \
	DECLARE_FUNCTION(execTransform_Determinant); \
	DECLARE_FUNCTION(execTInterpTo); \
	DECLARE_FUNCTION(execTEase); \
	DECLARE_FUNCTION(execTLerp); \
	DECLARE_FUNCTION(execInvertTransform); \
	DECLARE_FUNCTION(execMakeRelativeTransform); \
	DECLARE_FUNCTION(execInverseTransformRotation); \
	DECLARE_FUNCTION(execInverseTransformDirection); \
	DECLARE_FUNCTION(execInverseTransformLocation); \
	DECLARE_FUNCTION(execTransformRotation); \
	DECLARE_FUNCTION(execTransformDirection); \
	DECLARE_FUNCTION(execTransformLocation); \
	DECLARE_FUNCTION(execComposeTransforms); \
	DECLARE_FUNCTION(execNearlyEqual_TransformTransform); \
	DECLARE_FUNCTION(execEqualEqual_TransformTransform); \
	DECLARE_FUNCTION(execBreakTransform); \
	DECLARE_FUNCTION(execMakeTransform); \
	DECLARE_FUNCTION(execNotEqual_NameName); \
	DECLARE_FUNCTION(execEqualEqual_NameName); \
	DECLARE_FUNCTION(execClassIsChildOf); \
	DECLARE_FUNCTION(execNotEqual_ClassClass); \
	DECLARE_FUNCTION(execEqualEqual_ClassClass); \
	DECLARE_FUNCTION(execNotEqual_ObjectObject); \
	DECLARE_FUNCTION(execEqualEqual_ObjectObject); \
	DECLARE_FUNCTION(execSelectClass); \
	DECLARE_FUNCTION(execSelectObject); \
	DECLARE_FUNCTION(execSelectTransform); \
	DECLARE_FUNCTION(execSelectColor); \
	DECLARE_FUNCTION(execSelectRotator); \
	DECLARE_FUNCTION(execSelectVector); \
	DECLARE_FUNCTION(execSelectFloat); \
	DECLARE_FUNCTION(execSelectInt); \
	DECLARE_FUNCTION(execSelectName); \
	DECLARE_FUNCTION(execSelectText); \
	DECLARE_FUNCTION(execSelectString); \
	DECLARE_FUNCTION(execBreakRandomStream); \
	DECLARE_FUNCTION(execMakeRandomStream); \
	DECLARE_FUNCTION(execBreakBoxSphereBounds); \
	DECLARE_FUNCTION(execMakeBoxSphereBounds); \
	DECLARE_FUNCTION(execMakeBox2D); \
	DECLARE_FUNCTION(execBox_GetClosestPointTo); \
	DECLARE_FUNCTION(execBox_Overlap); \
	DECLARE_FUNCTION(execBox_ExpandBy); \
	DECLARE_FUNCTION(execBox_Intersects); \
	DECLARE_FUNCTION(execBox_IsPointInside); \
	DECLARE_FUNCTION(execBox_IsInsideOrOn); \
	DECLARE_FUNCTION(execBox_IsInside); \
	DECLARE_FUNCTION(execMakeBoxWithOrigin); \
	DECLARE_FUNCTION(execMakeBox); \
	DECLARE_FUNCTION(execConv_DoubleToVector2D); \
	DECLARE_FUNCTION(execConv_DoubleToVector); \
	DECLARE_FUNCTION(execConv_IntVectorToVector); \
	DECLARE_FUNCTION(execConv_ColorToLinearColor); \
	DECLARE_FUNCTION(execConv_ByteToInt64); \
	DECLARE_FUNCTION(execConv_ByteToInt); \
	DECLARE_FUNCTION(execConv_BoolToByte); \
	DECLARE_FUNCTION(execConv_BoolToDouble); \
	DECLARE_FUNCTION(execConv_BoolToInt); \
	DECLARE_FUNCTION(execConv_IntToBool); \
	DECLARE_FUNCTION(execConv_IntToVector); \
	DECLARE_FUNCTION(execConv_IntToIntVector); \
	DECLARE_FUNCTION(execConv_Int64ToDouble); \
	DECLARE_FUNCTION(execConv_DoubleToInt64); \
	DECLARE_FUNCTION(execConv_Int64ToByte); \
	DECLARE_FUNCTION(execConv_FloatToDouble); \
	DECLARE_FUNCTION(execConv_DoubleToFloat); \
	DECLARE_FUNCTION(execConv_Int64ToInt); \
	DECLARE_FUNCTION(execConv_IntToByte); \
	DECLARE_FUNCTION(execConv_IntToInt64); \
	DECLARE_FUNCTION(execConv_IntToDouble); \
	DECLARE_FUNCTION(execConv_ByteToDouble); \
	DECLARE_FUNCTION(execBreakFrameRate); \
	DECLARE_FUNCTION(execMakeFrameRate); \
	DECLARE_FUNCTION(execBreakQualifiedFrameTime); \
	DECLARE_FUNCTION(execMakeQualifiedFrameTime); \
	DECLARE_FUNCTION(execTimespanFromString); \
	DECLARE_FUNCTION(execTimespanRatio); \
	DECLARE_FUNCTION(execFromSeconds); \
	DECLARE_FUNCTION(execFromMinutes); \
	DECLARE_FUNCTION(execFromMilliseconds); \
	DECLARE_FUNCTION(execFromHours); \
	DECLARE_FUNCTION(execFromDays); \
	DECLARE_FUNCTION(execGetTotalSeconds); \
	DECLARE_FUNCTION(execGetTotalMinutes); \
	DECLARE_FUNCTION(execGetTotalMilliseconds); \
	DECLARE_FUNCTION(execGetTotalHours); \
	DECLARE_FUNCTION(execGetTotalDays); \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execGetMinutes); \
	DECLARE_FUNCTION(execGetMilliseconds); \
	DECLARE_FUNCTION(execGetHours); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetDays); \
	DECLARE_FUNCTION(execLessEqual_TimespanTimespan); \
	DECLARE_FUNCTION(execLess_TimespanTimespan); \
	DECLARE_FUNCTION(execGreaterEqual_TimespanTimespan); \
	DECLARE_FUNCTION(execGreater_TimespanTimespan); \
	DECLARE_FUNCTION(execNotEqual_TimespanTimespan); \
	DECLARE_FUNCTION(execEqualEqual_TimespanTimespan); \
	DECLARE_FUNCTION(execDivide_TimespanFloat); \
	DECLARE_FUNCTION(execMultiply_TimespanFloat); \
	DECLARE_FUNCTION(execSubtract_TimespanTimespan); \
	DECLARE_FUNCTION(execAdd_TimespanTimespan); \
	DECLARE_FUNCTION(execBreakTimespan2); \
	DECLARE_FUNCTION(execBreakTimespan); \
	DECLARE_FUNCTION(execMakeTimespan2); \
	DECLARE_FUNCTION(execMakeTimespan); \
	DECLARE_FUNCTION(execTimespanZeroValue); \
	DECLARE_FUNCTION(execTimespanMinValue); \
	DECLARE_FUNCTION(execTimespanMaxValue); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execToUnixTimestampDouble); \
	DECLARE_FUNCTION(execToUnixTimestamp); \
	DECLARE_FUNCTION(execDateTimeFromString); \
	DECLARE_FUNCTION(execDateTimeFromIsoString); \
	DECLARE_FUNCTION(execUtcNow); \
	DECLARE_FUNCTION(execToday); \
	DECLARE_FUNCTION(execNow); \
	DECLARE_FUNCTION(execDateTimeMinValue); \
	DECLARE_FUNCTION(execDateTimeMaxValue); \
	DECLARE_FUNCTION(execIsLeapYear); \
	DECLARE_FUNCTION(execDaysInYear); \
	DECLARE_FUNCTION(execDaysInMonth); \
	DECLARE_FUNCTION(execIsMorning); \
	DECLARE_FUNCTION(execIsAfternoon); \
	DECLARE_FUNCTION(execGetYear); \
	DECLARE_FUNCTION(execGetTimeOfDay); \
	DECLARE_FUNCTION(execGetSecond); \
	DECLARE_FUNCTION(execGetMonth); \
	DECLARE_FUNCTION(execGetMinute); \
	DECLARE_FUNCTION(execGetMillisecond); \
	DECLARE_FUNCTION(execGetHour12); \
	DECLARE_FUNCTION(execGetHour); \
	DECLARE_FUNCTION(execGetDayOfYear); \
	DECLARE_FUNCTION(execGetDay); \
	DECLARE_FUNCTION(execGetDate); \
	DECLARE_FUNCTION(execLessEqual_DateTimeDateTime); \
	DECLARE_FUNCTION(execLess_DateTimeDateTime); \
	DECLARE_FUNCTION(execGreaterEqual_DateTimeDateTime); \
	DECLARE_FUNCTION(execGreater_DateTimeDateTime); \
	DECLARE_FUNCTION(execNotEqual_DateTimeDateTime); \
	DECLARE_FUNCTION(execEqualEqual_DateTimeDateTime); \
	DECLARE_FUNCTION(execSubtract_DateTimeDateTime); \
	DECLARE_FUNCTION(execAdd_DateTimeDateTime); \
	DECLARE_FUNCTION(execSubtract_DateTimeTimespan); \
	DECLARE_FUNCTION(execAdd_DateTimeTimespan); \
	DECLARE_FUNCTION(execBreakDateTime); \
	DECLARE_FUNCTION(execMakeDateTime); \
	DECLARE_FUNCTION(execMakePlaneFromPointAndNormal); \
	DECLARE_FUNCTION(execToHex_LinearColor); \
	DECLARE_FUNCTION(execDivide_LinearColorLinearColor); \
	DECLARE_FUNCTION(execMultiply_LinearColorFloat); \
	DECLARE_FUNCTION(execMultiply_LinearColorLinearColor); \
	DECLARE_FUNCTION(execSubtract_LinearColorLinearColor); \
	DECLARE_FUNCTION(execAdd_LinearColorLinearColor); \
	DECLARE_FUNCTION(execNotEqual_LinearColorLinearColor); \
	DECLARE_FUNCTION(execEqualEqual_LinearColorLinearColor); \
	DECLARE_FUNCTION(execLinearColor_IsNearEqual); \
	DECLARE_FUNCTION(execLinearColorLerpUsingHSV); \
	DECLARE_FUNCTION(execLinearColorLerp); \
	DECLARE_FUNCTION(execCInterpTo); \
	DECLARE_FUNCTION(execLinearColor_GetMin); \
	DECLARE_FUNCTION(execLinearColor_GetMax); \
	DECLARE_FUNCTION(execLinearColor_GetLuminance); \
	DECLARE_FUNCTION(execLinearColor_ToNewOpacity); \
	DECLARE_FUNCTION(execLinearColor_Distance); \
	DECLARE_FUNCTION(execLinearColor_Desaturated); \
	DECLARE_FUNCTION(execLinearColor_QuantizeRound); \
	DECLARE_FUNCTION(execLinearColor_Quantize); \
	DECLARE_FUNCTION(execConv_LinearColorToColor); \
	DECLARE_FUNCTION(execLinearColor_ToRGBE); \
	DECLARE_FUNCTION(execConv_LinearColorToVector); \
	DECLARE_FUNCTION(execRGBLinearToHSV); \
	DECLARE_FUNCTION(execRGBToHSV_Vector); \
	DECLARE_FUNCTION(execRGBToHSV); \
	DECLARE_FUNCTION(execHSVToRGBLinear); \
	DECLARE_FUNCTION(execHSVToRGB_Vector); \
	DECLARE_FUNCTION(execHSVToRGB); \
	DECLARE_FUNCTION(execConv_DoubleToLinearColor); \
	DECLARE_FUNCTION(execLinearColor_SetRandomHue); \
	DECLARE_FUNCTION(execLinearColor_SetTemperature); \
	DECLARE_FUNCTION(execLinearColor_SetFromPow22); \
	DECLARE_FUNCTION(execLinearColor_SetFromSRGB); \
	DECLARE_FUNCTION(execLinearColor_SetFromHSV); \
	DECLARE_FUNCTION(execLinearColor_SetRGBA); \
	DECLARE_FUNCTION(execLinearColor_Set); \
	DECLARE_FUNCTION(execBreakColor); \
	DECLARE_FUNCTION(execMakeColor); \
	DECLARE_FUNCTION(execLinearColor_Transparent); \
	DECLARE_FUNCTION(execLinearColor_Yellow); \
	DECLARE_FUNCTION(execLinearColor_Blue); \
	DECLARE_FUNCTION(execLinearColor_Green); \
	DECLARE_FUNCTION(execLinearColor_Red); \
	DECLARE_FUNCTION(execLinearColor_Black); \
	DECLARE_FUNCTION(execLinearColor_Gray); \
	DECLARE_FUNCTION(execLinearColor_White); \
	DECLARE_FUNCTION(execQuat_FindBetweenNormals); \
	DECLARE_FUNCTION(execQuat_FindBetweenVectors); \
	DECLARE_FUNCTION(execQuat_Slerp); \
	DECLARE_FUNCTION(execQuat_UnrotateVector); \
	DECLARE_FUNCTION(execQuat_RotateVector); \
	DECLARE_FUNCTION(execQuat_SizeSquared); \
	DECLARE_FUNCTION(execQuat_Size); \
	DECLARE_FUNCTION(execConv_RotatorToQuaternion); \
	DECLARE_FUNCTION(execQuat_Rotator); \
	DECLARE_FUNCTION(execQuat_MakeFromEuler); \
	DECLARE_FUNCTION(execQuat_SetFromEuler); \
	DECLARE_FUNCTION(execQuat_SetComponents); \
	DECLARE_FUNCTION(execQuat_Log); \
	DECLARE_FUNCTION(execQuat_Inversed); \
	DECLARE_FUNCTION(execQuat_GetRotationAxis); \
	DECLARE_FUNCTION(execQuat_Normalized); \
	DECLARE_FUNCTION(execQuat_Normalize); \
	DECLARE_FUNCTION(execQuat_VectorUp); \
	DECLARE_FUNCTION(execQuat_VectorRight); \
	DECLARE_FUNCTION(execQuat_VectorForward); \
	DECLARE_FUNCTION(execQuat_GetAxisZ); \
	DECLARE_FUNCTION(execQuat_GetAxisY); \
	DECLARE_FUNCTION(execQuat_GetAxisX); \
	DECLARE_FUNCTION(execQuat_GetAngle); \
	DECLARE_FUNCTION(execQuat_Exp); \
	DECLARE_FUNCTION(execQuat_Euler); \
	DECLARE_FUNCTION(execQuat_EnforceShortestArcWith); \
	DECLARE_FUNCTION(execQuat_AngularDistance); \
	DECLARE_FUNCTION(execQuat_IsNonFinite); \
	DECLARE_FUNCTION(execQuat_IsFinite); \
	DECLARE_FUNCTION(execQuat_IsNormalized); \
	DECLARE_FUNCTION(execQuat_IsIdentity); \
	DECLARE_FUNCTION(execMultiply_QuatQuat); \
	DECLARE_FUNCTION(execBreakQuat); \
	DECLARE_FUNCTION(execMakeQuat); \
	DECLARE_FUNCTION(execSubtract_QuatQuat); \
	DECLARE_FUNCTION(execAdd_QuatQuat); \
	DECLARE_FUNCTION(execNotEqual_QuatQuat); \
	DECLARE_FUNCTION(execEqualEqual_QuatQuat); \
	DECLARE_FUNCTION(execQuat_Identity); \
	DECLARE_FUNCTION(execMatrix_Mirror); \
	DECLARE_FUNCTION(execMatrix_GetFrustumBottomPlane); \
	DECLARE_FUNCTION(execMatrix_GetFrustumTopPlane); \
	DECLARE_FUNCTION(execMatrix_GetFrustumRightPlane); \
	DECLARE_FUNCTION(execMatrix_GetFrustumLeftPlane); \
	DECLARE_FUNCTION(execMatrix_GetFrustumFarPlane); \
	DECLARE_FUNCTION(execMatrix_GetFrustumNearPlane); \
	DECLARE_FUNCTION(execMatrix_ToQuat); \
	DECLARE_FUNCTION(execMatrix_GetRotator); \
	DECLARE_FUNCTION(execMatrix_SetColumn); \
	DECLARE_FUNCTION(execMatrix_GetColumn); \
	DECLARE_FUNCTION(execMatrix_SetOrigin); \
	DECLARE_FUNCTION(execMatrix_SetAxis); \
	DECLARE_FUNCTION(execMatrix_GetUnitAxes); \
	DECLARE_FUNCTION(execMatrix_GetUnitAxis); \
	DECLARE_FUNCTION(execMatrix_GetScaledAxes); \
	DECLARE_FUNCTION(execMatrix_GetScaledAxis); \
	DECLARE_FUNCTION(execMatrix_ApplyScale); \
	DECLARE_FUNCTION(execMatrix_GetMaximumAxisScale); \
	DECLARE_FUNCTION(execMatrix_ScaleTranslation); \
	DECLARE_FUNCTION(execMatrix_ContainsNaN); \
	DECLARE_FUNCTION(execMatrix_ConcatenateTranslation); \
	DECLARE_FUNCTION(execMatrix_RemoveTranslation); \
	DECLARE_FUNCTION(execMatrix_GetScaleVector); \
	DECLARE_FUNCTION(execMatrix_GetMatrixWithoutScale); \
	DECLARE_FUNCTION(execMatrix_RemoveScaling); \
	DECLARE_FUNCTION(execMatrix_GetTransposeAdjoint); \
	DECLARE_FUNCTION(execMatrix_GetInverse); \
	DECLARE_FUNCTION(execMatrix_GetRotDeterminant); \
	DECLARE_FUNCTION(execMatrix_GetDeterminant); \
	DECLARE_FUNCTION(execMatrix_GetTransposed); \
	DECLARE_FUNCTION(execMatrix_InverseTransformVector); \
	DECLARE_FUNCTION(execMatrix_TransformVector); \
	DECLARE_FUNCTION(execMatrix_InverseTransformPosition); \
	DECLARE_FUNCTION(execMatrix_TransformPosition); \
	DECLARE_FUNCTION(execMatrix_TransformVector4); \
	DECLARE_FUNCTION(execNotEqual_MatrixMatrix); \
	DECLARE_FUNCTION(execEqualEqual_MatrixMatrix); \
	DECLARE_FUNCTION(execMultiply_MatrixFloat); \
	DECLARE_FUNCTION(execAdd_MatrixMatrix); \
	DECLARE_FUNCTION(execMultiply_MatrixMatrix); \
	DECLARE_FUNCTION(execMatrix_Identity); \
	DECLARE_FUNCTION(execMatrix_GetOrigin); \
	DECLARE_FUNCTION(execConv_MatrixToRotator); \
	DECLARE_FUNCTION(execConv_MatrixToTransform); \
	DECLARE_FUNCTION(execNormalizeAxis); \
	DECLARE_FUNCTION(execClampAxis); \
	DECLARE_FUNCTION(execNormalizedDeltaRotator); \
	DECLARE_FUNCTION(execREase); \
	DECLARE_FUNCTION(execRLerp); \
	DECLARE_FUNCTION(execRandomRotator); \
	DECLARE_FUNCTION(execGetAxes); \
	DECLARE_FUNCTION(execConv_RotatorToTransform); \
	DECLARE_FUNCTION(execConv_RotatorToVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execNegateRotator); \
	DECLARE_FUNCTION(execComposeRotators); \
	DECLARE_FUNCTION(execMultiply_RotatorInt); \
	DECLARE_FUNCTION(execMultiply_RotatorFloat); \
	DECLARE_FUNCTION(execNotEqual_RotatorRotator); \
	DECLARE_FUNCTION(execEqualEqual_RotatorRotator); \
	DECLARE_FUNCTION(execBreakRotIntoAxes); \
	DECLARE_FUNCTION(execBreakRotator); \
	DECLARE_FUNCTION(execFindRelativeLookAtRotation); \
	DECLARE_FUNCTION(execFindLookAtRotation); \
	DECLARE_FUNCTION(execMakeRotationFromAxes); \
	DECLARE_FUNCTION(execMakeRotFromZY); \
	DECLARE_FUNCTION(execMakeRotFromZX); \
	DECLARE_FUNCTION(execMakeRotFromYZ); \
	DECLARE_FUNCTION(execMakeRotFromYX); \
	DECLARE_FUNCTION(execMakeRotFromXZ); \
	DECLARE_FUNCTION(execMakeRotFromXY); \
	DECLARE_FUNCTION(execMakeRotFromZ); \
	DECLARE_FUNCTION(execMakeRotFromY); \
	DECLARE_FUNCTION(execMakeRotFromX); \
	DECLARE_FUNCTION(execMakeRotator); \
	DECLARE_FUNCTION(execTransformVector4); \
	DECLARE_FUNCTION(execVector4_MirrorByVector3); \
	DECLARE_FUNCTION(execVector4_Normalize3); \
	DECLARE_FUNCTION(execVector4_NormalUnsafe3); \
	DECLARE_FUNCTION(execVector4_Normal3); \
	DECLARE_FUNCTION(execVector4_IsNormal3); \
	DECLARE_FUNCTION(execVector4_IsUnit3); \
	DECLARE_FUNCTION(execVector4_SizeSquared3); \
	DECLARE_FUNCTION(execVector4_Size3); \
	DECLARE_FUNCTION(execVector4_SizeSquared); \
	DECLARE_FUNCTION(execVector4_Size); \
	DECLARE_FUNCTION(execVector4_IsZero); \
	DECLARE_FUNCTION(execVector4_IsNearlyZero3); \
	DECLARE_FUNCTION(execVector4_IsNAN); \
	DECLARE_FUNCTION(execVector4_DotProduct3); \
	DECLARE_FUNCTION(execVector4_DotProduct); \
	DECLARE_FUNCTION(execVector4_CrossProduct3); \
	DECLARE_FUNCTION(execVector4_Set); \
	DECLARE_FUNCTION(execVector4_Assign); \
	DECLARE_FUNCTION(execVector4_Negated); \
	DECLARE_FUNCTION(execNotEqual_Vector4Vector4); \
	DECLARE_FUNCTION(execNotEqualExactly_Vector4Vector4); \
	DECLARE_FUNCTION(execEqualEqual_Vector4Vector4); \
	DECLARE_FUNCTION(execEqualExactly_Vector4Vector4); \
	DECLARE_FUNCTION(execDivide_Vector4Vector4); \
	DECLARE_FUNCTION(execMultiply_Vector4Vector4); \
	DECLARE_FUNCTION(execSubtract_Vector4Vector4); \
	DECLARE_FUNCTION(execAdd_Vector4Vector4); \
	DECLARE_FUNCTION(execConv_Vector4ToQuaternion); \
	DECLARE_FUNCTION(execConv_Vector4ToRotator); \
	DECLARE_FUNCTION(execConv_Vector4ToVector); \
	DECLARE_FUNCTION(execBreakVector4); \
	DECLARE_FUNCTION(execMakeVector4); \
	DECLARE_FUNCTION(execVector4_Zero); \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInDegrees); \
	DECLARE_FUNCTION(execRandomUnitVectorInEllipticalConeInRadians); \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInDegrees); \
	DECLARE_FUNCTION(execRandomUnitVectorInConeInRadians); \
	DECLARE_FUNCTION(execRandomPointInBoundingBox_Box); \
	DECLARE_FUNCTION(execRandomPointInBoundingBox); \
	DECLARE_FUNCTION(execRandomUnitVector); \
	DECLARE_FUNCTION(execGetPointDistanceToLine); \
	DECLARE_FUNCTION(execGetPointDistanceToSegment); \
	DECLARE_FUNCTION(execFindClosestPointOnLine); \
	DECLARE_FUNCTION(execFindClosestPointOnSegment); \
	DECLARE_FUNCTION(execFindNearestPointsOnLineSegments); \
	DECLARE_FUNCTION(execProjectVectorOnToPlane); \
	DECLARE_FUNCTION(execProjectPointOnToPlane); \
	DECLARE_FUNCTION(execProjectVectorOnToVector); \
	DECLARE_FUNCTION(execVector_ProjectOnToNormal); \
	DECLARE_FUNCTION(execVector_BoundedToBox); \
	DECLARE_FUNCTION(execVector_AddBounded); \
	DECLARE_FUNCTION(execVector_BoundedToCube); \
	DECLARE_FUNCTION(execVector_SnappedToGrid); \
	DECLARE_FUNCTION(execVector_MirrorByPlane); \
	DECLARE_FUNCTION(execMirrorVectorByNormal); \
	DECLARE_FUNCTION(execGetReflectionVector); \
	DECLARE_FUNCTION(execVector_Reciprocal); \
	DECLARE_FUNCTION(execQuaternionSpringInterp); \
	DECLARE_FUNCTION(execVectorSpringInterp); \
	DECLARE_FUNCTION(execVInterpTo_Constant); \
	DECLARE_FUNCTION(execVInterpTo); \
	DECLARE_FUNCTION(execVEase); \
	DECLARE_FUNCTION(execVLerp); \
	DECLARE_FUNCTION(execVector_Normalize); \
	DECLARE_FUNCTION(execVector_NormalUnsafe); \
	DECLARE_FUNCTION(execVector_Normal2D); \
	DECLARE_FUNCTION(execNormal); \
	DECLARE_FUNCTION(execVector_IsNormal); \
	DECLARE_FUNCTION(execVector_IsUnit); \
	DECLARE_FUNCTION(execVector_IsUniform); \
	DECLARE_FUNCTION(execVector_IsNAN); \
	DECLARE_FUNCTION(execVector_IsZero); \
	DECLARE_FUNCTION(execVector_IsNearlyZero); \
	DECLARE_FUNCTION(execVSizeXYSquared); \
	DECLARE_FUNCTION(execVSizeXY); \
	DECLARE_FUNCTION(execVSizeSquared); \
	DECLARE_FUNCTION(execVSize); \
	DECLARE_FUNCTION(execVector_Distance2DSquared); \
	DECLARE_FUNCTION(execVector_Distance2D); \
	DECLARE_FUNCTION(execVector_DistanceSquared); \
	DECLARE_FUNCTION(execVector_Distance); \
	DECLARE_FUNCTION(execFTruncVector); \
	DECLARE_FUNCTION(execGetVectorArrayAverage); \
	DECLARE_FUNCTION(execGetAzimuthAndElevation); \
	DECLARE_FUNCTION(execGetYawPitchFromVector); \
	DECLARE_FUNCTION(execGetDirectionUnitVector); \
	DECLARE_FUNCTION(execVector_UnitCartesianToSpherical); \
	DECLARE_FUNCTION(execVector_ToDegrees); \
	DECLARE_FUNCTION(execVector_ToRadians); \
	DECLARE_FUNCTION(execVector_CosineAngle2D); \
	DECLARE_FUNCTION(execVector_HeadingAngle); \
	DECLARE_FUNCTION(execVector_GetProjection); \
	DECLARE_FUNCTION(execVector_GetSignVector); \
	DECLARE_FUNCTION(execVector_ComponentMax); \
	DECLARE_FUNCTION(execVector_ComponentMin); \
	DECLARE_FUNCTION(execVector_GetAbs); \
	DECLARE_FUNCTION(execVector_GetAbsMin); \
	DECLARE_FUNCTION(execVector_GetAbsMax); \
	DECLARE_FUNCTION(execGetMaxElement); \
	DECLARE_FUNCTION(execGetMinElement); \
	DECLARE_FUNCTION(execVector_ClampSizeMax2D); \
	DECLARE_FUNCTION(execVector_ClampSizeMax); \
	DECLARE_FUNCTION(execVector_ClampSize2D); \
	DECLARE_FUNCTION(execClampVectorSize); \
	DECLARE_FUNCTION(execVector_UnwindEuler); \
	DECLARE_FUNCTION(execLessLess_VectorRotator); \
	DECLARE_FUNCTION(execRotateAngleAxis); \
	DECLARE_FUNCTION(execGreaterGreater_VectorRotator); \
	DECLARE_FUNCTION(execCross_VectorVector); \
	DECLARE_FUNCTION(execDot_VectorVector); \
	DECLARE_FUNCTION(execNotEqual_VectorVector); \
	DECLARE_FUNCTION(execNotEqualExactly_VectorVector); \
	DECLARE_FUNCTION(execEqualEqual_VectorVector); \
	DECLARE_FUNCTION(execEqualExactly_VectorVector); \
	DECLARE_FUNCTION(execNegateVector); \
	DECLARE_FUNCTION(execDivide_VectorInt); \
	DECLARE_FUNCTION(execDivide_VectorFloat); \
	DECLARE_FUNCTION(execDivide_VectorVector); \
	DECLARE_FUNCTION(execMultiply_VectorInt); \
	DECLARE_FUNCTION(execMultiply_VectorFloat); \
	DECLARE_FUNCTION(execMultiply_VectorVector); \
	DECLARE_FUNCTION(execSubtract_VectorInt); \
	DECLARE_FUNCTION(execSubtract_VectorFloat); \
	DECLARE_FUNCTION(execSubtract_VectorVector); \
	DECLARE_FUNCTION(execAdd_VectorInt); \
	DECLARE_FUNCTION(execAdd_VectorFloat); \
	DECLARE_FUNCTION(execAdd_VectorVector); \
	DECLARE_FUNCTION(execVector_SlerpNormals); \
	DECLARE_FUNCTION(execVector_SlerpVectorToDirection); \
	DECLARE_FUNCTION(execConv_VectorToQuaternion); \
	DECLARE_FUNCTION(execRotatorFromAxisAndAngle); \
	DECLARE_FUNCTION(execConv_VectorToRotator); \
	DECLARE_FUNCTION(execConv_VectorToVector2D); \
	DECLARE_FUNCTION(execConv_VectorToTransform); \
	DECLARE_FUNCTION(execConv_VectorToLinearColor); \
	DECLARE_FUNCTION(execBreakVector); \
	DECLARE_FUNCTION(execVector_Set); \
	DECLARE_FUNCTION(execVector_Assign); \
	DECLARE_FUNCTION(execCreateVectorFromYawPitch); \
	DECLARE_FUNCTION(execMakeVector); \
	DECLARE_FUNCTION(execVector_Left); \
	DECLARE_FUNCTION(execVector_Right); \
	DECLARE_FUNCTION(execVector_Down); \
	DECLARE_FUNCTION(execVector_Up); \
	DECLARE_FUNCTION(execVector_Backward); \
	DECLARE_FUNCTION(execVector_Forward); \
	DECLARE_FUNCTION(execVector_One); \
	DECLARE_FUNCTION(execVector_Zero); \
	DECLARE_FUNCTION(execVSize2DSquared); \
	DECLARE_FUNCTION(execVSize2D); \
	DECLARE_FUNCTION(execToSign2D); \
	DECLARE_FUNCTION(execToRounded2D); \
	DECLARE_FUNCTION(execToDirectionAndLength2D); \
	DECLARE_FUNCTION(execSpherical2DToUnitCartesian); \
	DECLARE_FUNCTION(execNormalize2D); \
	DECLARE_FUNCTION(execNormal2D); \
	DECLARE_FUNCTION(execNormalSafe2D); \
	DECLARE_FUNCTION(execVector2DInterpTo_Constant); \
	DECLARE_FUNCTION(execVector2DInterpTo); \
	DECLARE_FUNCTION(execIsZero2D); \
	DECLARE_FUNCTION(execIsNearlyZero2D); \
	DECLARE_FUNCTION(execGetRotated2D); \
	DECLARE_FUNCTION(execGetMin2D); \
	DECLARE_FUNCTION(execGetMax2D); \
	DECLARE_FUNCTION(execGetAbsMax2D); \
	DECLARE_FUNCTION(execGetAbs2D); \
	DECLARE_FUNCTION(execDotProduct2D); \
	DECLARE_FUNCTION(execDistanceSquared2D); \
	DECLARE_FUNCTION(execDistance2D); \
	DECLARE_FUNCTION(execCrossProduct2D); \
	DECLARE_FUNCTION(execClampAxes2D); \
	DECLARE_FUNCTION(execSet2D); \
	DECLARE_FUNCTION(execNegated2D); \
	DECLARE_FUNCTION(execNotEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execNotEqualExactly_Vector2DVector2D); \
	DECLARE_FUNCTION(execEqualEqual_Vector2DVector2D); \
	DECLARE_FUNCTION(execEqualExactly_Vector2DVector2D); \
	DECLARE_FUNCTION(execDivide_Vector2DFloat); \
	DECLARE_FUNCTION(execDivide_Vector2DVector2D); \
	DECLARE_FUNCTION(execMultiply_Vector2DFloat); \
	DECLARE_FUNCTION(execMultiply_Vector2DVector2D); \
	DECLARE_FUNCTION(execSubtract_Vector2DFloat); \
	DECLARE_FUNCTION(execSubtract_Vector2DVector2D); \
	DECLARE_FUNCTION(execAdd_Vector2DFloat); \
	DECLARE_FUNCTION(execAdd_Vector2DVector2D); \
	DECLARE_FUNCTION(execConv_Vector2DToIntPoint); \
	DECLARE_FUNCTION(execConv_Vector2DToVector); \
	DECLARE_FUNCTION(execBreakVector2D); \
	DECLARE_FUNCTION(execMakeVector2D); \
	DECLARE_FUNCTION(execVector2D_Zero); \
	DECLARE_FUNCTION(execVector2D_Unit45Deg); \
	DECLARE_FUNCTION(execVector2D_One); \
	DECLARE_FUNCTION(execNotEqual_IntPointIntPoint); \
	DECLARE_FUNCTION(execEqual_IntPointIntPoint); \
	DECLARE_FUNCTION(execDivide_IntPointInt); \
	DECLARE_FUNCTION(execDivide_IntPointIntPoint); \
	DECLARE_FUNCTION(execMultiply_IntPointInt); \
	DECLARE_FUNCTION(execMultiply_IntPointIntPoint); \
	DECLARE_FUNCTION(execSubtract_IntPointInt); \
	DECLARE_FUNCTION(execSubtract_IntPointIntPoint); \
	DECLARE_FUNCTION(execAdd_IntPointInt); \
	DECLARE_FUNCTION(execAdd_IntPointIntPoint); \
	DECLARE_FUNCTION(execConv_IntPointToVector2D); \
	DECLARE_FUNCTION(execIntPoint_Down); \
	DECLARE_FUNCTION(execIntPoint_Right); \
	DECLARE_FUNCTION(execIntPoint_Left); \
	DECLARE_FUNCTION(execIntPoint_Up); \
	DECLARE_FUNCTION(execIntPoint_One); \
	DECLARE_FUNCTION(execIntPoint_Zero); \
	DECLARE_FUNCTION(execFixedTurn); \
	DECLARE_FUNCTION(execMakePulsatingValue); \
	DECLARE_FUNCTION(execGetRuntimeFloatCurveValue); \
	DECLARE_FUNCTION(execFInterpEaseInOut); \
	DECLARE_FUNCTION(execMultiplyByPi); \
	DECLARE_FUNCTION(execMapRangeClamped); \
	DECLARE_FUNCTION(execMapRangeUnclamped); \
	DECLARE_FUNCTION(execNormalizeToRange); \
	DECLARE_FUNCTION(execSignOfFloat); \
	DECLARE_FUNCTION(execFMod64); \
	DECLARE_FUNCTION(execFMod); \
	DECLARE_FUNCTION(execFCeil64); \
	DECLARE_FUNCTION(execFTrunc64); \
	DECLARE_FUNCTION(execFFloor64); \
	DECLARE_FUNCTION(execRound64); \
	DECLARE_FUNCTION(execFCeil); \
	DECLARE_FUNCTION(execFTrunc); \
	DECLARE_FUNCTION(execFFloor); \
	DECLARE_FUNCTION(execRound); \
	DECLARE_FUNCTION(execEase); \
	DECLARE_FUNCTION(execLerp); \
	DECLARE_FUNCTION(execMinOfByteArray); \
	DECLARE_FUNCTION(execMaxOfByteArray); \
	DECLARE_FUNCTION(execMinOfFloatArray); \
	DECLARE_FUNCTION(execMaxOfFloatArray); \
	DECLARE_FUNCTION(execAverageOfIntArray); \
	DECLARE_FUNCTION(execMedianOfIntArray); \
	DECLARE_FUNCTION(execMinOfIntArray); \
	DECLARE_FUNCTION(execMaxOfIntArray); \
	DECLARE_FUNCTION(execSafeDivide); \
	DECLARE_FUNCTION(execFWrap); \
	DECLARE_FUNCTION(execFClamp); \
	DECLARE_FUNCTION(execFMax); \
	DECLARE_FUNCTION(execFMin); \
	DECLARE_FUNCTION(execClampAngle); \
	DECLARE_FUNCTION(execDegAtan2); \
	DECLARE_FUNCTION(execDegAtan); \
	DECLARE_FUNCTION(execDegTan); \
	DECLARE_FUNCTION(execDegAcos); \
	DECLARE_FUNCTION(execDegCos); \
	DECLARE_FUNCTION(execDegAsin); \
	DECLARE_FUNCTION(execDegSin); \
	DECLARE_FUNCTION(execRadiansToDegrees); \
	DECLARE_FUNCTION(execDegreesToRadians); \
	DECLARE_FUNCTION(execGetTAU); \
	DECLARE_FUNCTION(execGetPI); \
	DECLARE_FUNCTION(execRandomFloatInRange); \
	DECLARE_FUNCTION(execRandomFloat); \
	DECLARE_FUNCTION(execSquare); \
	DECLARE_FUNCTION(execSqrt); \
	DECLARE_FUNCTION(execLoge); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execExp); \
	DECLARE_FUNCTION(execAtan2); \
	DECLARE_FUNCTION(execAtan); \
	DECLARE_FUNCTION(execTan); \
	DECLARE_FUNCTION(execAcos); \
	DECLARE_FUNCTION(execCos); \
	DECLARE_FUNCTION(execAsin); \
	DECLARE_FUNCTION(execSin); \
	DECLARE_FUNCTION(execAbs); \
	DECLARE_FUNCTION(execGridSnap_Float); \
	DECLARE_FUNCTION(execHypotenuse); \
	DECLARE_FUNCTION(execInRange_FloatFloat); \
	DECLARE_FUNCTION(execNotEqual_DoubleDouble); \
	DECLARE_FUNCTION(execNearlyEqual_FloatFloat); \
	DECLARE_FUNCTION(execEqualEqual_DoubleDouble); \
	DECLARE_FUNCTION(execGreaterEqual_DoubleDouble); \
	DECLARE_FUNCTION(execLessEqual_DoubleDouble); \
	DECLARE_FUNCTION(execGreater_DoubleDouble); \
	DECLARE_FUNCTION(execLess_DoubleDouble); \
	DECLARE_FUNCTION(execDivide_DoubleDouble); \
	DECLARE_FUNCTION(execMultiply_DoubleDouble); \
	DECLARE_FUNCTION(execSubtract_DoubleDouble); \
	DECLARE_FUNCTION(execAdd_DoubleDouble); \
	DECLARE_FUNCTION(execFraction); \
	DECLARE_FUNCTION(execMultiply_IntFloat); \
	DECLARE_FUNCTION(execMultiplyMultiply_FloatFloat); \
	DECLARE_FUNCTION(execAbs_Int64); \
	DECLARE_FUNCTION(execClampInt64); \
	DECLARE_FUNCTION(execMaxInt64); \
	DECLARE_FUNCTION(execMinInt64); \
	DECLARE_FUNCTION(execRandomInteger64InRange); \
	DECLARE_FUNCTION(execRandomInteger64); \
	DECLARE_FUNCTION(execSignOfInteger64); \
	DECLARE_FUNCTION(execNot_Int64); \
	DECLARE_FUNCTION(execOr_Int64Int64); \
	DECLARE_FUNCTION(execXor_Int64Int64); \
	DECLARE_FUNCTION(execAnd_Int64Int64); \
	DECLARE_FUNCTION(execInRange_Int64Int64); \
	DECLARE_FUNCTION(execNotEqual_Int64Int64); \
	DECLARE_FUNCTION(execEqualEqual_Int64Int64); \
	DECLARE_FUNCTION(execGreaterEqual_Int64Int64); \
	DECLARE_FUNCTION(execLessEqual_Int64Int64); \
	DECLARE_FUNCTION(execGreater_Int64Int64); \
	DECLARE_FUNCTION(execLess_Int64Int64); \
	DECLARE_FUNCTION(execSubtract_Int64Int64); \
	DECLARE_FUNCTION(execAdd_Int64Int64); \
	DECLARE_FUNCTION(execPercent_Int64Int64); \
	DECLARE_FUNCTION(execDivide_Int64Int64); \
	DECLARE_FUNCTION(execMultiply_Int64Int64); \
	DECLARE_FUNCTION(execAbs_Int); \
	DECLARE_FUNCTION(execWrap); \
	DECLARE_FUNCTION(execClamp); \
	DECLARE_FUNCTION(execMax); \
	DECLARE_FUNCTION(execMin); \
	DECLARE_FUNCTION(execRandomIntegerInRange); \
	DECLARE_FUNCTION(execRandomInteger); \
	DECLARE_FUNCTION(execSignOfInteger); \
	DECLARE_FUNCTION(execNot_Int); \
	DECLARE_FUNCTION(execOr_IntInt); \
	DECLARE_FUNCTION(execXor_IntInt); \
	DECLARE_FUNCTION(execAnd_IntInt); \
	DECLARE_FUNCTION(execInRange_IntInt); \
	DECLARE_FUNCTION(execNotEqual_IntInt); \
	DECLARE_FUNCTION(execEqualEqual_IntInt); \
	DECLARE_FUNCTION(execGreaterEqual_IntInt); \
	DECLARE_FUNCTION(execLessEqual_IntInt); \
	DECLARE_FUNCTION(execGreater_IntInt); \
	DECLARE_FUNCTION(execLess_IntInt); \
	DECLARE_FUNCTION(execSubtract_IntInt); \
	DECLARE_FUNCTION(execAdd_IntInt); \
	DECLARE_FUNCTION(execPercent_IntInt); \
	DECLARE_FUNCTION(execDivide_IntInt); \
	DECLARE_FUNCTION(execMultiply_IntInt); \
	DECLARE_FUNCTION(execNotEqual_ByteByte); \
	DECLARE_FUNCTION(execEqualEqual_ByteByte); \
	DECLARE_FUNCTION(execGreaterEqual_ByteByte); \
	DECLARE_FUNCTION(execLessEqual_ByteByte); \
	DECLARE_FUNCTION(execGreater_ByteByte); \
	DECLARE_FUNCTION(execLess_ByteByte); \
	DECLARE_FUNCTION(execBMax); \
	DECLARE_FUNCTION(execBMin); \
	DECLARE_FUNCTION(execSubtract_ByteByte); \
	DECLARE_FUNCTION(execAdd_ByteByte); \
	DECLARE_FUNCTION(execPercent_ByteByte); \
	DECLARE_FUNCTION(execDivide_ByteByte); \
	DECLARE_FUNCTION(execMultiply_ByteByte); \
	DECLARE_FUNCTION(execBooleanNOR); \
	DECLARE_FUNCTION(execBooleanXOR); \
	DECLARE_FUNCTION(execBooleanOR); \
	DECLARE_FUNCTION(execBooleanNAND); \
	DECLARE_FUNCTION(execBooleanAND); \
	DECLARE_FUNCTION(execNotEqual_BoolBool); \
	DECLARE_FUNCTION(execEqualEqual_BoolBool); \
	DECLARE_FUNCTION(execNot_PreBool); \
	DECLARE_FUNCTION(execRandomBoolWithWeightFromStream); \
	DECLARE_FUNCTION(execRandomBoolWithWeight); \
	DECLARE_FUNCTION(execRandomBool);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUKismetMathLibrary(); \
	friend struct Z_Construct_UClass_UKismetMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMathLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMathLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMathLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetMathLibrary(UKismetMathLibrary&&); \
	UKismetMathLibrary(const UKismetMathLibrary&); \
public: \
	ENGINE_API virtual ~UKismetMathLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_182_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetMathLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMathLibrary_h


#define FOREACH_ENUM_EEASINGFUNC(op) \
	op(EEasingFunc::Linear) \
	op(EEasingFunc::Step) \
	op(EEasingFunc::SinusoidalIn) \
	op(EEasingFunc::SinusoidalOut) \
	op(EEasingFunc::SinusoidalInOut) \
	op(EEasingFunc::EaseIn) \
	op(EEasingFunc::EaseOut) \
	op(EEasingFunc::EaseInOut) \
	op(EEasingFunc::ExpoIn) \
	op(EEasingFunc::ExpoOut) \
	op(EEasingFunc::ExpoInOut) \
	op(EEasingFunc::CircularIn) \
	op(EEasingFunc::CircularOut) \
	op(EEasingFunc::CircularInOut) 

namespace EEasingFunc { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EEasingFunc::Type>();

#define FOREACH_ENUM_ELERPINTERPOLATIONMODE(op) \
	op(ELerpInterpolationMode::QuatInterp) \
	op(ELerpInterpolationMode::EulerInterp) \
	op(ELerpInterpolationMode::DualQuatInterp) 

namespace ELerpInterpolationMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELerpInterpolationMode::Type>();

#define FOREACH_ENUM_EMATRIXCOLUMNS(op) \
	op(EMatrixColumns::First) \
	op(EMatrixColumns::Second) \
	op(EMatrixColumns::Third) \
	op(EMatrixColumns::Fourth) 

namespace EMatrixColumns { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMatrixColumns::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
