#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "W_PlayerStateBar.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_PlayerStateBar : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UProgressBar* PlayerHealthBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UProgressBar* PlayerStatminaBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UDamageSystemComponent* DamageSystemComponent;
	
public:
	void UpdatePlayerStateBar(AActor* Owner);
	
};