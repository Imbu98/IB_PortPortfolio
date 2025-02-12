#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "W_EnemyHealthBar.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_EnemyHealthBar : public UUserWidget
{
	GENERATED_BODY()
public:
	
	
protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UProgressBar* EnemyHealthBar;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UDamageSystemComponent* DamageSystemComponent;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateHealthBar(AActor* Owner);

	
	
};
