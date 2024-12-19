#include "W_Slot.h"
#include "Kismet\KismetTextLibrary.h"
#include "../Item/ItemStructure.h"
#include "Components\Button.h"
#include "Components/TextBlock.h"
#include "Widgets\Images\SImage.h"



void UW_Slot::NativePreConstruct()
{
	ItemImage->SetBrushFromTexture(Item.Thumnail,false);
	FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	ItemQuantity->SetText(TextItemQuantity);
	if (Item.ItemQuantity > 1)
	{
		ItemQuantity->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		ItemQuantity->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UW_Slot::NativeConstruct()
{
	Super::NativeConstruct();

	ItemSlot->OnClicked.AddDynamic(this, &UW_Slot::OnButtonClicked);
	
	
}

void UW_Slot::OnButtonClicked()
{
	FText TextItemQuantity = UKismetTextLibrary::Conv_IntToText(Item.ItemQuantity);
	FString StringItemQuantity = TextItemQuantity.ToString();
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("%s"), *StringItemQuantity));

}