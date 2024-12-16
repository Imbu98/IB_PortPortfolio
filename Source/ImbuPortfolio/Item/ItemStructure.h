#pragma once

#include "CoreMinimal.h"
#include "ItemStructure.generated.h"

class IMBUPORTFOLIO_API ItemStructure
{
public:
	ItemStructure();
	~ItemStructure();
};

USTRUCT(Atomic,BlueprintType)
struct FItemStruct
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Stackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemQuantity; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture* Thumnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeaponNumber;

};