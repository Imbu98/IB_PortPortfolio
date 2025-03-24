#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_PauseMenu.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_PauseMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UWidgetSwitcher* WidgetSwitcher;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	class UButton* BTN_Resume;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UButton* BTN_MainMenu;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UButton* BTN_ExitGame;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UUserWidget> WBP_PopUp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UW_PopUp* PopUpMenu;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName L_MainMenuName;
public:
	virtual void NativeConstruct() override;

public:
	UFUNCTION()
	void OnClickResume();
	UFUNCTION()
	void OnClickMainMenuButton();
	UFUNCTION()
	void OnClickExit();
	
	UFUNCTION()
	UW_PopUp* CreatePopup(const FText& PopUpMessage,const FText& LeftButtonText,const FText& RightButtonText);

	UFUNCTION()
	void MainMenu_Confirm();
	UFUNCTION()
	void MainMenu_Cancel();

	
	UFUNCTION()
	void ExitGame_Confirm();
	UFUNCTION()
	void ExitGame_Cancel();
};
