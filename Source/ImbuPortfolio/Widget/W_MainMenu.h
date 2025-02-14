#pragma once

#include "CoreMinimal.h"
#include "W_PopUp.h"
#include "Blueprint/UserWidget.h"
#include "W_MainMenu.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_MainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UWidgetSwitcher* WidgetSwitcher;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UButton* BTN_StartNewGame;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UButton* BTN_StartLoadGame;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UButton* BTN_ExitGame;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UUserWidget> WBP_PopUp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UW_PopUp* PopUpMenu;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName L_StartName;
public:
	virtual void NativeConstruct() override;

public:
	UFUNCTION()
	void OnClickExit();
	UFUNCTION()
	void OnClickStartButton();

	
	
	UFUNCTION()
	UW_PopUp* CreatePopup(const FText& PopUpMessage,const FText& LeftButtonText,const FText& RightButtonText);

	UFUNCTION()
	void StartGame_Confirm();
	UFUNCTION()
	void StartGame_Cancel();
	
	
};
