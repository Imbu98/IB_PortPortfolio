#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_Skill1_Icon.generated.h"


UCLASS()
class IMBUPORTFOLIO_API UW_Skill1_Icon : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	class UProgressBar* PB_Skill1CoolDown;
	UPROPERTY(BlueprintReadWrite,meta=(BindWidget))
	TObjectPtr<class UImage> IMG_Skill1_Icon;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UTexture2D* IMG_AxeSkill1_Icon;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSkill1_Cooldown(float Cooldown);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSkill1_Thumbnail();
	UFUNCTION(BlueprintCallable)
	void ClearSkill1_Thumbnail();
};
