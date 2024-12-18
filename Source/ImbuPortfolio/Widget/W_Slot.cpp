#include "W_Slot.h"
#include "Components\Button.h"



void UW_Slot::NativeConstruct()
{
	Super::NativeConstruct();

	ItemSlot->OnClicked.AddDynamic(this, &UW_Slot::OnButtonClicked);

	
}

void UW_Slot::OnButtonClicked()
{

}