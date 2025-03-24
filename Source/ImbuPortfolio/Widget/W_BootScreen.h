#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_BootScreen.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_BootScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Widget,meta=(BindWidget))
	class UImage* Logo1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Widget,meta=(BindWidget))
	class UImage* Logo2;
	UPROPERTY(Transient,EditAnywhere, BlueprintReadWrite, Category = Widget,meta=(BindWidgetAnim))
	UWidgetAnimation* Load_In;

public:
	
	
public:
	virtual void NativeConstruct() override;
	UFUNCTION()
	void OnAnimationFinishedFunction() ;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Level")
	FName L_MainMenuName;

	FTimerHandle TimerHandle;

	UFUNCTION(BlueprintCallable)
	void OpenMainMenuLevel();
};
