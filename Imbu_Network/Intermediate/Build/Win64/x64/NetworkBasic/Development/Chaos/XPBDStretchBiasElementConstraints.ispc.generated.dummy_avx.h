//
// D:\\Imbu_Network\\Intermediate\\Build\\Win64\\x64\\NetworkBasic\\Development\\Chaos\\XPBDStretchBiasElementConstraints.ispc.generated.dummy_avx.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>

#if !defined(__cplusplus)
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#include <stdbool.h>
#else
typedef int bool;
#endif
#endif



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector4f__
#define __ISPC_STRUCT_FVector4f__
struct FVector4f {
    struct float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
#if defined(__cplusplus)
    extern void ApplyXPBDStretchBiasConstraints(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const struct FVector3f &Stiffness, const float WarpScale, const float WeftScale, const int32_t NumConstraints);
#else
    extern void ApplyXPBDStretchBiasConstraints(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const struct FVector3f *Stiffness, const float WarpScale, const float WeftScale, const int32_t NumConstraints);
#endif // ApplyXPBDStretchBiasConstraints function declaraion
#if defined(__cplusplus)
    extern void ApplyXPBDStretchBiasConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const struct FVector3f &Stiffness, const float DampingRatio, const float WarpScale, const float WeftScale, const int32_t NumConstraints);
#else
    extern void ApplyXPBDStretchBiasConstraintsWithDamping(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const struct FVector3f *Stiffness, const float DampingRatio, const float WarpScale, const float WeftScale, const int32_t NumConstraints);
#endif // ApplyXPBDStretchBiasConstraintsWithDamping function declaraion
    extern void ApplyXPBDStretchBiasConstraintsWithDampingAndMaps(struct FVector4f * PandInvM, const struct FVector3f * X, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const bool StiffnessWarpHasMap, const uint8_t * StiffnessWarpIndices, const float * StiffnessWarpTable, const bool StiffnessWeftHasMap, const uint8_t * StiffnessWeftIndices, const float * StiffnessWeftTable, const bool StiffnessBiasHasMap, const uint8_t * StiffnessBiasIndices, const float * StiffnessBiasTable, const bool DampingHasMap, const uint8_t * DampingIndices, const float * DampingTable, const bool WarpScaleHasMap, const uint8_t * WarpScaleIndices, const float * WarpScaleTable, const bool WeftScaleHasMap, const uint8_t * WeftScaleIndices, const float * WeftScaleTable, const int32_t NumConstraints);
    extern void ApplyXPBDStretchBiasConstraintsWithMaps(struct FVector4f * PandInvM, const struct FIntVector * Constraints, const struct FVector3f * RestStretchLengths, const struct FVector4f * DeltaUVInverses, const struct FVector3f * StiffnessScales, struct FVector3f * Lambdas, const float Dt, const float MinStiffness, const bool StiffnessWarpHasMap, const uint8_t * StiffnessWarpIndices, const float * StiffnessWarpTable, const bool StiffnessWeftHasMap, const uint8_t * StiffnessWeftIndices, const float * StiffnessWeftTable, const bool StiffnessBiasHasMap, const uint8_t * StiffnessBiasIndices, const float * StiffnessBiasTable, const bool WarpScaleHasMap, const uint8_t * WarpScaleIndices, const float * WarpScaleTable, const bool WeftScaleHasMap, const uint8_t * WeftScaleIndices, const float * WeftScaleTable, const int32_t NumConstraints);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
