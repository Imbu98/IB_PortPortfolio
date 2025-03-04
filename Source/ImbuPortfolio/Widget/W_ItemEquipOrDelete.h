#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_ItemEquipOrDelete.generated.h"

UCLASS()
class IMBUPORTFOLIO_API UW_ItemEquipOrDelete : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	class UButton* BTN_Equip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(BindWidget))
	class UButton* BTN_Drop;
	
};

