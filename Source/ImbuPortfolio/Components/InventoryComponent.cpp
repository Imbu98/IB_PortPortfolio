#include "InventoryComponent.h"
#include "../Character/IBCharBase.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Widget/W_Inventory.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet\KismetArrayLibrary.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	Items.SetNum(10);

	// InventoryWidget�� LoadInventory�� �� �� �ʿ��� InventoryComponent�� �־��ش�
	AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	PlayerController->GetInventoryWidget()->LoadInventory(this);




	
}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInventoryComponent::ChangeWeapon(ABaseEquippable* MainWeapon)
{
}

