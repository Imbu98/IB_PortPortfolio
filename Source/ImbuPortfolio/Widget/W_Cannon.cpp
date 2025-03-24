#include "W_Cannon.h"
#include "Components//TextBlock.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/ETC/Cannon.h"
#include "ImbuPortfolio/IB_Framework/IB_PlayerController.h"
#include "Kismet/GameplayStatics.h"

class ACannon;

void UW_Cannon::NativeConstruct()
{
	Super::NativeConstruct();

	IBChar=Cast<AIBCharBase>( UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	
	APlayerController* PlayerController=UGameplayStatics::GetPlayerController(GetWorld(),0);
	if (PlayerController!=nullptr)
	{
		 IBPlayerController=Cast<AIB_PlayerController>(PlayerController);
	}

	IBCannon=Cast<ACannon>(UGameplayStatics::GetActorOfClass(GetWorld(),ACannon::StaticClass()));

	if (BTN_ControlTakeCannon)
	{
		BTN_ControlTakeCannon->OnClicked.RemoveDynamic(this,&ThisClass::OnPosses);
		BTN_ControlTakeCannon->OnClicked.AddDynamic(this,&ThisClass::OnPosses);
	}
	SetWidgetProperty();

	if (T_EquipWeaponCaution)
	{
		T_EquipWeaponCaution->SetVisibility(ESlateVisibility::Collapsed);
	}
	
}

void UW_Cannon::OnPosses()
{
	
	if (IBChar)
	{
		if (IBChar->IsWeaponAttached==false)
		{
			T_EquipWeaponCaution->SetVisibility(ESlateVisibility::Visible);
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle,[this]()
			{
				T_EquipWeaponCaution->SetVisibility(ESlateVisibility::Collapsed);
			},0.5f,false);
		}
		else
		{
			IBChar->SwitchController();
			SetWidgetProperty();
			
		}
		
	}
}

void UW_Cannon::SetWidgetProperty()
{
	if (T_ButtonText&&IBChar)
	{
		if (IBChar->IsOnCannon==false)
		{
			T_ButtonText->SetText(TakeOnText);
			VBox_KeyDescription->SetVisibility(ESlateVisibility::Collapsed);
		}
		else if (IBChar->IsOnCannon==true)
		{
			T_ButtonText->SetText(TakeOffText);
			VBox_KeyDescription->SetVisibility(ESlateVisibility::Visible);
		}
	}

	if (IBCannon!=nullptr)
	{
		if (IBCannon->IsOnCharging ||IBChar->IsFlying)
		{
			PB_Power->SetVisibility(ESlateVisibility::Visible);
			BTN_ControlTakeCannon->SetVisibility(ESlateVisibility::Collapsed);
			if (IBChar->IsFlying)
			{
				PB_Power->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
		else
		{
			PB_Power->SetVisibility(ESlateVisibility::Collapsed);
			BTN_ControlTakeCannon->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void UW_Cannon::UpdatePowerProgressBar()
{
	SetWidgetProperty();
	
		if (PB_Power!=nullptr)
		{
			PB_Power->SetPercent(IBCannon->CurrentCannonPower/IBCannon->MaxCannonPower);
		}
	
		
}



	 
