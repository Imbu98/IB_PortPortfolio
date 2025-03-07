#pragma once

#include "CoreMinimal.h"
#include "W_Skill1_Icon.h"
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
	UProgressBar* PlayerStaminaBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UProgressBar* PlayerAngerGaugeBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UW_Skill1_Icon* WBP_Skill1_Icon;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UDamageSystemComponent* DamageSystemComponent;
	
public:
	UFUNCTION(BlueprintCallable)
	void UpdatePlayerStateBar(AActor* Owner);
	UFUNCTION(BlueprintCallable)
	void BlinkBar();
	

	
	
};