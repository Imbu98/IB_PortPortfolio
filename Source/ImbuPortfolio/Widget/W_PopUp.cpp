#include "W_PopUp.h"
#include "W_BaseButton.h"
#include "Components/TextBlock.h"


void UW_PopUp::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (T_PopupText)
	{
		T_PopupText->SetText(Text_Popup);
	}

	
	if (WBP_ButtonOK && WBP_ButtonOK->T_BtnText)
	{
		WBP_ButtonOK->T_BtnText->SetText(Text_OKBtn);
	}
	
	if (WBP_ButtonCancel && WBP_ButtonCancel->T_BtnText)
	{
		WBP_ButtonOK->T_BtnText->SetText(Text_CancelBtn);
	}

	
}

void UW_PopUp::NativeConstruct()
{
	Super::NativeConstruct();

	if (WBP_ButtonOK)
	{
		WBP_ButtonOK->BTN_BaseDelegate.AddDynamic(this, &ThisClass::OnClickedOKBtn);
	}

	if (WBP_ButtonCancel)
	{
		WBP_ButtonCancel->BTN_BaseDelegate.AddDynamic(this, &ThisClass::OnClickedCancelBtn);
	}
	
}

void UW_PopUp::NativeDestruct()
{
	WBP_ButtonOK->BTN_BaseDelegate.Clear();
	WBP_ButtonCancel->BTN_BaseDelegate.Clear();
}

void UW_PopUp::OnClickedOKBtn()
{
	ButtonOKDelegate.Broadcast();
	RemoveFromParent();
}

void UW_PopUp::OnClickedCancelBtn()
{
	ButtonCancelDelegate.Broadcast();
	RemoveFromParent();
}