// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ShaderCompiler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderCompiler() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerCounters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShaderStats();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShaderTimings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FShaderCompilerCounters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderCompilerCounters;
class UScriptStruct* FShaderCompilerCounters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerCounters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ShaderCompilerCounters"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FShaderCompilerCounters>()
{
	return FShaderCompilerCounters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedLocalWorkerIdleTime_MetaData[] = {
		{ "Comment", "/** This tracks accumulated wait time from local workers during the lifetime of the stats.\n\x09 *\n\x09 * Wait time is only counted for local workers that are alive and not between their invocations\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "This tracks accumulated wait time from local workers during the lifetime of the stats.\n\nWait time is only counted for local workers that are alive and not between their invocations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimesLocalWorkersWereIdle_MetaData[] = {
		{ "Comment", "/** How many times we registered idle time? */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "How many times we registered idle time?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobsAssigned_MetaData[] = {
		{ "Comment", "/** Number of jobs assigned to workers, no matter if they completed or not - used to average pending time. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Number of jobs assigned to workers, no matter if they completed or not - used to average pending time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JobsCompleted_MetaData[] = {
		{ "Comment", "/** Total number jobs completed. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number jobs completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedPendingTime_MetaData[] = {
		{ "Comment", "/** Amount of time a job had to spent in pending queue (i.e. waiting to be assigned to a worker). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Amount of time a job had to spent in pending queue (i.e. waiting to be assigned to a worker)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPendingTime_MetaData[] = {
		{ "Comment", "/** Max amount of time any single job was pending (waiting to be assigned to a worker). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Max amount of time any single job was pending (waiting to be assigned to a worker)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedJobExecutionTime_MetaData[] = {
		{ "Comment", "/** Amount of time job spent being processed by the worker. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Amount of time job spent being processed by the worker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxJobExecutionTime_MetaData[] = {
		{ "Comment", "/** Max amount of time any single job spent being processed by the worker. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Max amount of time any single job spent being processed by the worker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedJobLifeTime_MetaData[] = {
		{ "Comment", "/** Amount of time job spent being processed overall. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Amount of time job spent being processed overall." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxJobLifeTime_MetaData[] = {
		{ "Comment", "/** Max amount of time any single job spent being processed overall. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Max amount of time any single job spent being processed overall." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTaskSubmitJobs_MetaData[] = {
		{ "Comment", "/** Time spent in tasks generated in FShaderJobCache::SubmitJobs, plus stall time on mutex locks in those tasks */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Time spent in tasks generated in FShaderJobCache::SubmitJobs, plus stall time on mutex locks in those tasks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTaskSubmitJobsStall_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalJobBatchesSeen_MetaData[] = {
		{ "Comment", "/** Number of local job batches seen. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Number of local job batches seen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalJobsReportedInLocalJobBatches_MetaData[] = {
		{ "Comment", "/** Total jobs in local job batches. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total jobs in local job batches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributedJobBatchesSeen_MetaData[] = {
		{ "Comment", "/** Number of distributed job batches seen. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Number of distributed job batches seen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalJobsReportedInDistributedJobBatches_MetaData[] = {
		{ "Comment", "/** Total jobs in local job batches. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total jobs in local job batches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinShaderCodeSize_MetaData[] = {
		{ "Comment", "/** Size of the smallest output shader code. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Size of the smallest output shader code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShaderCodeSize_MetaData[] = {
		{ "Comment", "/** Size of the largest output shader code. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Size of the largest output shader code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedShaderCodeSize_MetaData[] = {
		{ "Comment", "/** Total accumulated size of all output shader codes. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total accumulated size of all output shader codes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAccumulatedShaderCodes_MetaData[] = {
		{ "Comment", "/** Number of accumulated output shader codes. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Number of accumulated output shader codes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderMapDDCMisses_MetaData[] = {
		{ "Comment", "/** Total number of DDC misses on shader maps. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of DDC misses on shader maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderMapDDCHits_MetaData[] = {
		{ "Comment", "/** Total number of DDC hits on shader maps. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of DDC hits on shader maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCacheSearchAttempts_MetaData[] = {
		{ "Comment", "/** Total number of job cache query attempts. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of job cache query attempts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCacheHits_MetaData[] = {
		{ "Comment", "/** Total number of hits in the job cache (i.e. input hashes seen >1 time) */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of hits in the job cache (i.e. input hashes seen >1 time)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCacheDuplicates_MetaData[] = {
		{ "Comment", "/** Total number of duplicate jobs (input hash matches an in-flight job, processed when in-flight job completes) */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of duplicate jobs (input hash matches an in-flight job, processed when in-flight job completes)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCacheDDCQueries_MetaData[] = {
		{ "Comment", "/** Total number of DDC queries in the job cache (per-shader DDC). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of DDC queries in the job cache (per-shader DDC)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCacheDDCHits_MetaData[] = {
		{ "Comment", "/** Total number of DDC hits in the job cache (per shader DDC, as opposed to shader map DDC stats above). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of DDC hits in the job cache (per shader DDC, as opposed to shader map DDC stats above)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueCacheInputHashes_MetaData[] = {
		{ "Comment", "/** Total number of unique input hashes seen in job cache queries */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of unique input hashes seen in job cache queries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueCacheOutputs_MetaData[] = {
		{ "Comment", "/** Total number of unique job outputs stored in the cache.\n\x09  * Outputs are deduplicated based on a content hash so this number is in practice smaller than UniqueCacheInputHashes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total number of unique job outputs stored in the cache.\nOutputs are deduplicated based on a content hash so this number is in practice smaller than UniqueCacheInputHashes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMemUsed_MetaData[] = {
		{ "Comment", "/** Total amount of memory currently used by the job cache */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Total amount of memory currently used by the job cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMemBudget_MetaData[] = {
		{ "Comment", "/** Memory budget allocated for the job cache */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Memory budget allocated for the job cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRemoteAgents_MetaData[] = {
		{ "Comment", "/** Maximum number of remote agents used during compilation. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Maximum number of remote agents used during compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveAgentCores_MetaData[] = {
		{ "Comment", "/** Maximum number of CPU cores active across all remote agents. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Maximum number of CPU cores active across all remote agents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedLocalWorkerIdleTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimesLocalWorkersWereIdle;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_JobsAssigned;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_JobsCompleted;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedPendingTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxPendingTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedJobExecutionTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxJobExecutionTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedJobLifeTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxJobLifeTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedTaskSubmitJobs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AccumulatedTaskSubmitJobsStall;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LocalJobBatchesSeen;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalJobsReportedInLocalJobBatches;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_DistributedJobBatchesSeen;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalJobsReportedInDistributedJobBatches;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinShaderCodeSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxShaderCodeSize;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_AccumulatedShaderCodeSize;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_NumAccumulatedShaderCodes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShaderMapDDCMisses;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShaderMapDDCHits;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_TotalCacheSearchAttempts;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_TotalCacheHits;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalCacheDuplicates;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalCacheDDCQueries;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalCacheDDCHits;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UniqueCacheInputHashes;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UniqueCacheOutputs;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CacheMemUsed;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CacheMemBudget;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxRemoteAgents;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxActiveAgentCores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderCompilerCounters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedLocalWorkerIdleTime = { "AccumulatedLocalWorkerIdleTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedLocalWorkerIdleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedLocalWorkerIdleTime_MetaData), NewProp_AccumulatedLocalWorkerIdleTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TimesLocalWorkersWereIdle = { "TimesLocalWorkersWereIdle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TimesLocalWorkersWereIdle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimesLocalWorkersWereIdle_MetaData), NewProp_TimesLocalWorkersWereIdle_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_JobsAssigned = { "JobsAssigned", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, JobsAssigned), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobsAssigned_MetaData), NewProp_JobsAssigned_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_JobsCompleted = { "JobsCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, JobsCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JobsCompleted_MetaData), NewProp_JobsCompleted_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedPendingTime = { "AccumulatedPendingTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedPendingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedPendingTime_MetaData), NewProp_AccumulatedPendingTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxPendingTime = { "MaxPendingTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxPendingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPendingTime_MetaData), NewProp_MaxPendingTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedJobExecutionTime = { "AccumulatedJobExecutionTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedJobExecutionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedJobExecutionTime_MetaData), NewProp_AccumulatedJobExecutionTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxJobExecutionTime = { "MaxJobExecutionTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxJobExecutionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxJobExecutionTime_MetaData), NewProp_MaxJobExecutionTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedJobLifeTime = { "AccumulatedJobLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedJobLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedJobLifeTime_MetaData), NewProp_AccumulatedJobLifeTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxJobLifeTime = { "MaxJobLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxJobLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxJobLifeTime_MetaData), NewProp_MaxJobLifeTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedTaskSubmitJobs = { "AccumulatedTaskSubmitJobs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedTaskSubmitJobs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTaskSubmitJobs_MetaData), NewProp_AccumulatedTaskSubmitJobs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedTaskSubmitJobsStall = { "AccumulatedTaskSubmitJobsStall", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedTaskSubmitJobsStall), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTaskSubmitJobsStall_MetaData), NewProp_AccumulatedTaskSubmitJobsStall_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_LocalJobBatchesSeen = { "LocalJobBatchesSeen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, LocalJobBatchesSeen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalJobBatchesSeen_MetaData), NewProp_LocalJobBatchesSeen_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalJobsReportedInLocalJobBatches = { "TotalJobsReportedInLocalJobBatches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalJobsReportedInLocalJobBatches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalJobsReportedInLocalJobBatches_MetaData), NewProp_TotalJobsReportedInLocalJobBatches_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_DistributedJobBatchesSeen = { "DistributedJobBatchesSeen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, DistributedJobBatchesSeen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributedJobBatchesSeen_MetaData), NewProp_DistributedJobBatchesSeen_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalJobsReportedInDistributedJobBatches = { "TotalJobsReportedInDistributedJobBatches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalJobsReportedInDistributedJobBatches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalJobsReportedInDistributedJobBatches_MetaData), NewProp_TotalJobsReportedInDistributedJobBatches_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MinShaderCodeSize = { "MinShaderCodeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MinShaderCodeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinShaderCodeSize_MetaData), NewProp_MinShaderCodeSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxShaderCodeSize = { "MaxShaderCodeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxShaderCodeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShaderCodeSize_MetaData), NewProp_MaxShaderCodeSize_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedShaderCodeSize = { "AccumulatedShaderCodeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, AccumulatedShaderCodeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedShaderCodeSize_MetaData), NewProp_AccumulatedShaderCodeSize_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_NumAccumulatedShaderCodes = { "NumAccumulatedShaderCodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, NumAccumulatedShaderCodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAccumulatedShaderCodes_MetaData), NewProp_NumAccumulatedShaderCodes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_ShaderMapDDCMisses = { "ShaderMapDDCMisses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, ShaderMapDDCMisses), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderMapDDCMisses_MetaData), NewProp_ShaderMapDDCMisses_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_ShaderMapDDCHits = { "ShaderMapDDCHits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, ShaderMapDDCHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderMapDDCHits_MetaData), NewProp_ShaderMapDDCHits_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheSearchAttempts = { "TotalCacheSearchAttempts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalCacheSearchAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCacheSearchAttempts_MetaData), NewProp_TotalCacheSearchAttempts_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheHits = { "TotalCacheHits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalCacheHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCacheHits_MetaData), NewProp_TotalCacheHits_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDuplicates = { "TotalCacheDuplicates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalCacheDuplicates), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCacheDuplicates_MetaData), NewProp_TotalCacheDuplicates_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDDCQueries = { "TotalCacheDDCQueries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalCacheDDCQueries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCacheDDCQueries_MetaData), NewProp_TotalCacheDDCQueries_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDDCHits = { "TotalCacheDDCHits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, TotalCacheDDCHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCacheDDCHits_MetaData), NewProp_TotalCacheDDCHits_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_UniqueCacheInputHashes = { "UniqueCacheInputHashes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, UniqueCacheInputHashes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueCacheInputHashes_MetaData), NewProp_UniqueCacheInputHashes_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_UniqueCacheOutputs = { "UniqueCacheOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, UniqueCacheOutputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueCacheOutputs_MetaData), NewProp_UniqueCacheOutputs_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_CacheMemUsed = { "CacheMemUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, CacheMemUsed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMemUsed_MetaData), NewProp_CacheMemUsed_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_CacheMemBudget = { "CacheMemBudget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, CacheMemBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMemBudget_MetaData), NewProp_CacheMemBudget_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxRemoteAgents = { "MaxRemoteAgents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxRemoteAgents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRemoteAgents_MetaData), NewProp_MaxRemoteAgents_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxActiveAgentCores = { "MaxActiveAgentCores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerCounters, MaxActiveAgentCores), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActiveAgentCores_MetaData), NewProp_MaxActiveAgentCores_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedLocalWorkerIdleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TimesLocalWorkersWereIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_JobsAssigned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_JobsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedPendingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxPendingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedJobExecutionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxJobExecutionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedJobLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxJobLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedTaskSubmitJobs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedTaskSubmitJobsStall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_LocalJobBatchesSeen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalJobsReportedInLocalJobBatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_DistributedJobBatchesSeen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalJobsReportedInDistributedJobBatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MinShaderCodeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxShaderCodeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_AccumulatedShaderCodeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_NumAccumulatedShaderCodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_ShaderMapDDCMisses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_ShaderMapDDCHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheSearchAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDDCQueries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_TotalCacheDDCHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_UniqueCacheInputHashes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_UniqueCacheOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_CacheMemUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_CacheMemBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxRemoteAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewProp_MaxActiveAgentCores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ShaderCompilerCounters",
	Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::PropPointers),
	sizeof(FShaderCompilerCounters),
	alignof(FShaderCompilerCounters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerCounters()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.InnerSingleton, Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerCounters.InnerSingleton;
}
// End ScriptStruct FShaderCompilerCounters

// Begin ScriptStruct FShaderCompilerMaterialCounters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters;
class UScriptStruct* FShaderCompilerMaterialCounters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ShaderCompilerMaterialCounters"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FShaderCompilerMaterialCounters>()
{
	return FShaderCompilerMaterialCounters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTranslateCalls_MetaData[] = {
		{ "Comment", "/** The total number of materials that have been translated.  */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "The total number of materials that have been translated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTranslateTotalTimeSec_MetaData[] = {
		{ "Comment", "/** The total time in seconds to translate all materials.  */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "The total time in seconds to translate all materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTranslateTranslationOnlyTimeSec_MetaData[] = {
		{ "Comment", "/** The total time spent actually translating materials (rather than for instance accessing the DDC cache). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "The total time spent actually translating materials (rather than for instance accessing the DDC cache)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTranslateSerializationOnlyTimeSec_MetaData[] = {
		{ "Comment", "/** The total time spent serializing DDC results. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "The total time spent serializing DDC results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCacheHits_MetaData[] = {
		{ "Comment", "/** The total number times a material translation was skipped because the the results were in the DDC. */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "The total number times a material translation was skipped because the the results were in the DDC." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialTranslateCalls;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaterialTranslateTotalTimeSec;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaterialTranslateTranslationOnlyTimeSec;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaterialTranslateSerializationOnlyTimeSec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialCacheHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderCompilerMaterialCounters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateCalls = { "MaterialTranslateCalls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerMaterialCounters, MaterialTranslateCalls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTranslateCalls_MetaData), NewProp_MaterialTranslateCalls_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateTotalTimeSec = { "MaterialTranslateTotalTimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerMaterialCounters, MaterialTranslateTotalTimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTranslateTotalTimeSec_MetaData), NewProp_MaterialTranslateTotalTimeSec_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateTranslationOnlyTimeSec = { "MaterialTranslateTranslationOnlyTimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerMaterialCounters, MaterialTranslateTranslationOnlyTimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTranslateTranslationOnlyTimeSec_MetaData), NewProp_MaterialTranslateTranslationOnlyTimeSec_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateSerializationOnlyTimeSec = { "MaterialTranslateSerializationOnlyTimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerMaterialCounters, MaterialTranslateSerializationOnlyTimeSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTranslateSerializationOnlyTimeSec_MetaData), NewProp_MaterialTranslateSerializationOnlyTimeSec_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialCacheHits = { "MaterialCacheHits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerMaterialCounters, MaterialCacheHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCacheHits_MetaData), NewProp_MaterialCacheHits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateCalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateTotalTimeSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateTranslationOnlyTimeSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialTranslateSerializationOnlyTimeSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewProp_MaterialCacheHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ShaderCompilerMaterialCounters",
	Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::PropPointers),
	sizeof(FShaderCompilerMaterialCounters),
	alignof(FShaderCompilerMaterialCounters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.InnerSingleton, Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters.InnerSingleton;
}
// End ScriptStruct FShaderCompilerMaterialCounters

// Begin ScriptStruct FShaderTimings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderTimings;
class UScriptStruct* FShaderTimings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderTimings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderTimings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderTimings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ShaderTimings"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderTimings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FShaderTimings>()
{
	return FShaderTimings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderTimings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure used to describe compiling time of a shader type (for all the instances of it that we have seen). */" },
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
		{ "ToolTip", "Structure used to describe compiling time of a shader type (for all the instances of it that we have seen)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPreprocessTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCompiled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageCompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCompileTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCompileTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalCompileTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalPreprocessTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCompiled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageCompileTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderTimings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_MinCompileTime = { "MinCompileTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, MinCompileTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCompileTime_MetaData), NewProp_MinCompileTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_MaxCompileTime = { "MaxCompileTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, MaxCompileTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCompileTime_MetaData), NewProp_MaxCompileTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_TotalCompileTime = { "TotalCompileTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, TotalCompileTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCompileTime_MetaData), NewProp_TotalCompileTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_TotalPreprocessTime = { "TotalPreprocessTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, TotalPreprocessTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPreprocessTime_MetaData), NewProp_TotalPreprocessTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_NumCompiled = { "NumCompiled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, NumCompiled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCompiled_MetaData), NewProp_NumCompiled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_AverageCompileTime = { "AverageCompileTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderTimings, AverageCompileTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageCompileTime_MetaData), NewProp_AverageCompileTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderTimings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_MinCompileTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_MaxCompileTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_TotalCompileTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_TotalPreprocessTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_NumCompiled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderTimings_Statics::NewProp_AverageCompileTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderTimings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderTimings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ShaderTimings",
	Z_Construct_UScriptStruct_FShaderTimings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderTimings_Statics::PropPointers),
	sizeof(FShaderTimings),
	alignof(FShaderTimings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderTimings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderTimings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderTimings()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderTimings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderTimings.InnerSingleton, Z_Construct_UScriptStruct_FShaderTimings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderTimings.InnerSingleton;
}
// End ScriptStruct FShaderTimings

// Begin ScriptStruct FShaderCompilerSinglePermutationStat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat;
class UScriptStruct* FShaderCompilerSinglePermutationStat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ShaderCompilerSinglePermutationStat"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FShaderCompilerSinglePermutationStat>()
{
	return FShaderCompilerSinglePermutationStat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermutationString_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compiled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDouble_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedDouble_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PermutationString;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Compiled;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Cooked;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CompiledDouble;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CookedDouble;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderCompilerSinglePermutationStat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_PermutationString = { "PermutationString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerSinglePermutationStat, PermutationString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermutationString_MetaData), NewProp_PermutationString_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_Compiled = { "Compiled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerSinglePermutationStat, Compiled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compiled_MetaData), NewProp_Compiled_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_Cooked = { "Cooked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerSinglePermutationStat, Cooked), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooked_MetaData), NewProp_Cooked_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_CompiledDouble = { "CompiledDouble", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerSinglePermutationStat, CompiledDouble), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledDouble_MetaData), NewProp_CompiledDouble_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_CookedDouble = { "CookedDouble", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderCompilerSinglePermutationStat, CookedDouble), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedDouble_MetaData), NewProp_CookedDouble_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_PermutationString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_Compiled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_Cooked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_CompiledDouble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewProp_CookedDouble,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ShaderCompilerSinglePermutationStat",
	Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::PropPointers),
	sizeof(FShaderCompilerSinglePermutationStat),
	alignof(FShaderCompilerSinglePermutationStat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.InnerSingleton, Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat.InnerSingleton;
}
// End ScriptStruct FShaderCompilerSinglePermutationStat

// Begin ScriptStruct FShaderStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShaderStats;
class UScriptStruct* FShaderStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShaderStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShaderStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ShaderStats"));
	}
	return Z_Registration_Info_UScriptStruct_ShaderStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FShaderStats>()
{
	return FShaderStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShaderStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermutationCompilations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compiled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDouble_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedDouble_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShaderCompiler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PermutationCompilations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PermutationCompilations;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Compiled;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Cooked;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CompiledDouble;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CookedDouble;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompileTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShaderStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_PermutationCompilations_Inner = { "PermutationCompilations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat, METADATA_PARAMS(0, nullptr) }; // 217603502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_PermutationCompilations = { "PermutationCompilations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, PermutationCompilations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermutationCompilations_MetaData), NewProp_PermutationCompilations_MetaData) }; // 217603502
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_Compiled = { "Compiled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, Compiled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compiled_MetaData), NewProp_Compiled_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_Cooked = { "Cooked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, Cooked), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooked_MetaData), NewProp_Cooked_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CompiledDouble = { "CompiledDouble", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, CompiledDouble), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledDouble_MetaData), NewProp_CompiledDouble_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CookedDouble = { "CookedDouble", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, CookedDouble), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedDouble_MetaData), NewProp_CookedDouble_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CompileTime = { "CompileTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShaderStats, CompileTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileTime_MetaData), NewProp_CompileTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShaderStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_PermutationCompilations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_PermutationCompilations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_Compiled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_Cooked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CompiledDouble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CookedDouble,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShaderStats_Statics::NewProp_CompileTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShaderStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ShaderStats",
	Z_Construct_UScriptStruct_FShaderStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderStats_Statics::PropPointers),
	sizeof(FShaderStats),
	alignof(FShaderStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShaderStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShaderStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShaderStats()
{
	if (!Z_Registration_Info_UScriptStruct_ShaderStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShaderStats.InnerSingleton, Z_Construct_UScriptStruct_FShaderStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShaderStats.InnerSingleton;
}
// End ScriptStruct FShaderStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ShaderCompiler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FShaderCompilerCounters::StaticStruct, Z_Construct_UScriptStruct_FShaderCompilerCounters_Statics::NewStructOps, TEXT("ShaderCompilerCounters"), &Z_Registration_Info_UScriptStruct_ShaderCompilerCounters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderCompilerCounters), 4166048377U) },
		{ FShaderCompilerMaterialCounters::StaticStruct, Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters_Statics::NewStructOps, TEXT("ShaderCompilerMaterialCounters"), &Z_Registration_Info_UScriptStruct_ShaderCompilerMaterialCounters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderCompilerMaterialCounters), 3184193383U) },
		{ FShaderTimings::StaticStruct, Z_Construct_UScriptStruct_FShaderTimings_Statics::NewStructOps, TEXT("ShaderTimings"), &Z_Registration_Info_UScriptStruct_ShaderTimings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderTimings), 2520825487U) },
		{ FShaderCompilerSinglePermutationStat::StaticStruct, Z_Construct_UScriptStruct_FShaderCompilerSinglePermutationStat_Statics::NewStructOps, TEXT("ShaderCompilerSinglePermutationStat"), &Z_Registration_Info_UScriptStruct_ShaderCompilerSinglePermutationStat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderCompilerSinglePermutationStat), 217603502U) },
		{ FShaderStats::StaticStruct, Z_Construct_UScriptStruct_FShaderStats_Statics::NewStructOps, TEXT("ShaderStats"), &Z_Registration_Info_UScriptStruct_ShaderStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShaderStats), 1265984033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ShaderCompiler_h_4264485892(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ShaderCompiler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ShaderCompiler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
