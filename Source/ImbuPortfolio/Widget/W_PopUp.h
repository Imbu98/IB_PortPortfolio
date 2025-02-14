#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_PopUp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonOKClicked);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonCancelClicked);


UCLASS()
class IMBUPORTFOLIO_API UW_PopUp : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> T_PopupText;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta = (BindWidget))
	TObjectPtr<class UW_BaseButton> WBP_ButtonOK;
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonOKClicked ButtonOKDelegate;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta = (BindWidget))
	TObjectPtr<class UW_BaseButton> WBP_ButtonCancel;
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnButtonCancelClicked ButtonCancelDelegate;

public:
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn)) // 스폰시 노출
	FText Text_Popup;
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	FText Text_OKBtn;
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	FText Text_CancelBtn;
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	bool IsShowCancelBtn;

public:
	UFUNCTION(BlueprintCallable)
	void OnClickedOKBtn();
	UFUNCTION(BlueprintCallable)
	void OnClickedCancelBtn();
	
};
