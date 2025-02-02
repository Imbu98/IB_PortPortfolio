#pragma once

#include "CoreMinimal.h"
#include "BaseEquippable.h"
#include "Axe_Weapon.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AAxe_Weapon : public ABaseEquippable
{
	GENERATED_BODY()

public:
	AAxe_Weapon();

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemInfo)
	class UTexture2D* AxeThumnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemInfo)
	class UStaticMesh* AxeStaticMesh;



};
