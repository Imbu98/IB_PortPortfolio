#pragma once

#include "CoreMinimal.h"

#include "Engine/DataTable.h"
#include "Struct_Probability.generated.h"

class IMBUPORTFOLIO_API Struct_Probability
{
public:
	
};



USTRUCT(Atomic,BlueprintType)
struct FStruct_Probability : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Probability;

	FStruct_Probability():Probability(0)
	{
		
	}
	

	
	
};