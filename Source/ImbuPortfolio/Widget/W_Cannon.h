#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_Cannon.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_Cannon : public UUserWidget
{
	GENERATED_BODY()

	protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget",meta=(BindWidget))
	TObjectPtr<class UButton> BTN_ControlTakeCannon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget",meta=(BindWidget))
	TObjectPtr<class UTextBlock> T_ButtonText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget",meta=(BindWidget))
	TObjectPtr<class UProgressBar> PB_Power;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget",meta=(BindWidget))
	TObjectPtr<class UVerticalBox> VBox_KeyDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget",meta=(BindWidget))
	TObjectPtr<class UTextBlock>  T_EquipWeaponCaution;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	FText TakeOnText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	FText TakeOffText;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	class AIBCharBase* IBChar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	class AIB_PlayerController* IBPlayerController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
	class ACannon* IBCannon;
	
	

public:
	UFUNCTION()
	void OnPosses();
	UFUNCTION()
	void SetWidgetProperty();
	UFUNCTION()
	void UpdatePowerProgressBar();
	
};
