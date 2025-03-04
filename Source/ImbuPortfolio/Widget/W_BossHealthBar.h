#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Boss.h"
#include "W_BossHealthBar.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_BossHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UTextBlock* BossName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UProgressBar* BossHealth;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UDamageSystemComponent* DamageSystemComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float InterpolatedHP = 0.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AEnemy_Boss* Enemy_Boss;
public:
	UFUNCTION()
	void UpdateBossHealthBar(AActor* Actor);

	
	
};
