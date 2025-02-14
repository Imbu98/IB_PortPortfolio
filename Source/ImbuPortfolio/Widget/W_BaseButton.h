#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_BaseButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonClickedDelegate);

UCLASS()
class IMBUPORTFOLIO_API UW_BaseButton : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnClicked_Base();
	UFUNCTION(BlueprintCallable)
	void SetButtonText(FString& Str);
	
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> T_BtnText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UButton> BTN_Base;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonClickedDelegate BTN_BaseDelegate;


};
