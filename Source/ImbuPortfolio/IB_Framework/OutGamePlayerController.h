#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OutGamePlayerController.generated.h"

UCLASS()
class IMBUPORTFOLIO_API AOutGamePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> WBP_BootScreen;
	UPROPERTY()
	class UW_BootScreen* BootScreen;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UUserWidget> WBP_MainMenu;
	UPROPERTY()
	class UW_MainMenu* MainMenu;

	UFUNCTION(BlueprintCallable)
	void OpenBootScreen();
	UFUNCTION(BlueprintCallable)
	void OpenMainMenu();
};
