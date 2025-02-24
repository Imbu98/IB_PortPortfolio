#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_DungeonEnter.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_DungeonEnter : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	class UButton* BTN_EnterTempleDragon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	UButton* BTN_EnterCaveRuin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	class UTextBlock* T_DungeonClearCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	class UTextBlock* T_EnterTicket;

	UFUNCTION()
	void EnterTempleDragon();
	UFUNCTION()
	void EnterCaveRuin();
};
