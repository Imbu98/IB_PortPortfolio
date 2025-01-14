#include "InventoryComponent.h"
#include "../Character/IBCharBase.h"
#include "../Item/BaseEquippable.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Widget/W_Inventory.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet\KismetArrayLibrary.h"
#include "Kismet/KismetTextLibrary.h"


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
	PlayerInventory = PlayerController->GetInventoryWidget();
	PlayerInventory->LoadInventory(this);


	
}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInventoryComponent::UnEquip()
{
	TArray<ABaseEquippable*> WeaponsToDestroy = EquippedWeapon;
	float RetrieveWeaponIndex=0;
	ABaseEquippable* RetrieveWeapon = EquippedWeapon[RetrieveWeaponIndex];
	for (ABaseEquippable* Equippable : WeaponsToDestroy)
	{
		if (Equippable)
		{
			Equippable->Destroy();
		}
	}
	if (RetrieveWeapon!=nullptr)
	{
		ItemToInventory(RetrieveWeapon);
	}
	
	EquippedWeapon.Empty();
	
}


void UInventoryComponent::ChangeWeapon(ABaseEquippable* MainWeapon)
{
	if (MainWeapon != nullptr)
	{
		ItemToInventory(MainWeapon);
		
		AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		PlayerInventory = PlayerController->GetInventoryWidget();
		PlayerInventory->LoadInventory(this);
	}
}

void UInventoryComponent::Interaction()
{
	// ���Ǿ� Ʈ���̽� ����
	FHitResult OutHit;
	TArray<AActor*> ActorsToIgnore;
	float InteractRadius = 100.0f;

	// ���Ǿ� ��ġ ���
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(GetOwner());
	FVector VCharacterLocation = PlayerCharacter->GetActorLocation();
	FVector VLocation = VCharacterLocation - FVector(0.f, 0.f, 50.f);

	
	bool Hit = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), VLocation, VLocation, InteractRadius,
		ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHit, true, FLinearColor::Green, FLinearColor::Red, 10.0f);
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Interact")));

	// ���� �κ��丮�� �ֱ�
	if (Hit)
	{
		ABaseEquippable* Weapon = Cast<ABaseEquippable>(OutHit.GetActor());

		if (Weapon!=nullptr)
		{
			ItemToInventory(Weapon);
		
			AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			PlayerInventory = PlayerController->GetInventoryWidget();
			PlayerInventory->LoadInventory(this);
			Weapon->Destroy();
		}
			
	}
	
}


void UInventoryComponent::ItemToInventory(ABaseEquippable* RootedItem)
{
	if (RootedItem != nullptr)
	{
		for (FItemStruct& InventoryItem : Items)
		{
			bool IsSameItem = UKismetTextLibrary::EqualEqual_TextText(InventoryItem.ItemName, RootedItem->ItemInfo.ItemName);
			bool IsNotFull = (Item.ItemQuantity + RootedItem->ItemInfo.ItemQuantity) <= 64;
			bool IsStackableItem = RootedItem->ItemInfo.Stackable;

			// ���� �������̰�, �������� �� ��á��, ������ �������� �� �״�� �־��ش�
			if (IsSameItem && IsNotFull && IsStackableItem)
			{
				InventoryItem.ItemQuantity += RootedItem->ItemInfo.ItemQuantity;
					
				break;
			}
			else
			{
				// �װ� �ƴϰ� ������ ������ 0�̸� 
				if (InventoryItem.ItemQuantity == 0)
				{
					InventoryItem = RootedItem->ItemInfo;
						
					break;
				}

			}
				
		}
	}
}
