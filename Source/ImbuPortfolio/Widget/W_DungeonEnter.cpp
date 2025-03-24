#include "W_DungeonEnter.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/IB_Framework/IBGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void UW_DungeonEnter::NativeConstruct()
{
	Super::NativeConstruct();

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,"[UW_DungeonEnter::NativeConstruct] : IBGameInstance is Nullptr");
		return;
	}
	

	if (BTN_EnterCaveRuin)
	{
		if (!IBGameInstance->IGI_IsClearCaveRuins)
		{
			BTN_EnterCaveRuin->SetVisibility(ESlateVisibility::Collapsed);
		}
		else
		{
			BTN_EnterCaveRuin->SetVisibility(ESlateVisibility::Visible);
		}
	}

	if (BTN_EnterTempleDragon)
	{
		if (!IBGameInstance->IGI_IsClearTempleDragon)
		{
			BTN_EnterTempleDragon->SetVisibility(ESlateVisibility::Collapsed);
		}
		else
		{
			BTN_EnterTempleDragon->SetVisibility(ESlateVisibility::Visible);
		}
	}

	
	if (T_DungeonClearCount)
	{
		FString String = FString::Printf(TEXT("ClearCount:%d/%d"),IBGameInstance->IGI_DungeonCurrentClearCount,IBGameInstance->IGI_DungeonMaxClearCount);
		T_DungeonClearCount->SetText(FText::FromString(String));
	}
	if (T_EnterTicket)
	{
		FString String = FString::Printf(TEXT("Ticket:%d"),IBGameInstance->IGI_DungeonTicket);
		T_EnterTicket->SetText(FText::FromString(String));
	}
	
	BTN_EnterTempleDragon->OnClicked.Clear();
	BTN_EnterCaveRuin->OnClicked.Clear();
	BTN_Close->OnClicked.Clear();
	
	BTN_EnterTempleDragon->OnClicked.AddDynamic(this,&ThisClass::EnterTempleDragon);
	BTN_EnterCaveRuin->OnClicked.AddDynamic(this,&ThisClass::EnterCaveRuin);
	BTN_Close->OnClicked.AddDynamic(this,&ThisClass::CloseWidget);
}

void UW_DungeonEnter::EnterTempleDragon()
{
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,"[UW_DungeonEnter::EnterTempleDragon] : IBGameInstance is Nullptr");
		return;
	}
	if (IBGameInstance->IGI_DungeonTicket>=1)
	{
		UGameplayStatics::OpenLevel(GetWorld(),TEXT("L_TempleDragon"));
		IBGameInstance->IGI_DungeonTicket-=1;
	}
	
}

void UW_DungeonEnter::EnterCaveRuin()
{
	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,"[UW_DungeonEnter::EnterCaveRuin] : IBGameInstance is Nullptr");
		return;
	}
	if (IBGameInstance->IGI_DungeonTicket>=1)
	{
		UGameplayStatics::OpenLevel(GetWorld(),TEXT("L_CaveRuins"));	
		IBGameInstance->IGI_DungeonTicket-=1;
	}
	
}

void UW_DungeonEnter::CloseWidget()
{
	AIBCharBase* IBChar =Cast<AIBCharBase>( GetOwningPlayer()->GetCharacter());
	if (IBChar!=nullptr)
	{
		IBChar->StateComponent->SetState(TAG_StatusIdle);
		GetOwningPlayer()->bShowMouseCursor=false;
		RemoveFromParent();
	}
	
}
