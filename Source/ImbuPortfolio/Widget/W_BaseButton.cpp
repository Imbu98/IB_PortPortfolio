#include "W_BaseButton.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UW_BaseButton::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UW_BaseButton::NativeConstruct()
{
	Super::NativeConstruct();

	if (BTN_Base)
	{
		BTN_Base->OnClicked.Clear();
		BTN_Base->OnClicked.AddDynamic(this, &ThisClass::OnClicked_Base);
	}
}

void UW_BaseButton::SetButtonText(FString& Str)
{
	if (T_BtnText)
	{
		T_BtnText->SetText(FText::FromString(Str));
	}
}

void UW_BaseButton::OnClicked_Base()
{
	BTN_BaseDelegate.Broadcast();
}