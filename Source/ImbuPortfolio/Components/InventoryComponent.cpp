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

	// InventoryWidget에 LoadInventory를 할 때 필요한 InventoryComponent를 넣어준다
	AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	UW_Inventory* PlayerInventory = PlayerController->GetInventoryWidget();
	PlayerInventory->LoadInventory(this);


	
}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UInventoryComponent::ChangeWeapon(ABaseEquippable* MainWeapon)
{
}

void UInventoryComponent::Interaction()
{
	// 스피어 트레이스 변수
	FHitResult OutHit;
	TArray<AActor*> ActorsToIgnore;
	float InteractRadius = 100.0f;

	// 스피어 위치 계산
	AIBCharBase* PlayerCharacter = Cast<AIBCharBase>(GetOwner());
	FVector VCharacterLocation = PlayerCharacter->GetActorLocation();
	FVector VLocation = VCharacterLocation - FVector(0.f, 0.f, 50.f);

	
	bool Hit = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), VLocation, VLocation, InteractRadius,
		ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHit, true, FLinearColor::Green, FLinearColor::Red, 10.0f);
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Interact")));

	// 무기 인벤토리에 넣기
	if (Hit)
	{
		ABaseEquippable* Weapon = Cast<ABaseEquippable>(OutHit.GetActor());

		if (Weapon != nullptr)
		{
			bool IsSameItem = UKismetTextLibrary::EqualEqual_TextText(Item.ItemName, Weapon->ItemInfo.ItemName);
			bool IsNotFull = (Item.ItemQuantity + Weapon->ItemInfo.ItemQuantity) <= 64;
			bool IsStackableItem = Weapon->ItemInfo.Stackable;

			for (int ArrayIndex=0; ArrayIndex<Items.Num();ArrayIndex++)
			{
				// 같은 아이템이고, 아이템이 다 안찼고, 스택형 아이템일 때 그대로 넣어준다
				if (IsSameItem && IsNotFull && IsStackableItem)
				{
					Item = Items[ArrayIndex];

					Item.ItemName = Weapon->ItemInfo.ItemName;
					Item.Stackable = Weapon->ItemInfo.Stackable;
					Item.ItemQuantity = Item.ItemQuantity+ Weapon->ItemInfo.ItemQuantity;
					Item.Thumnail = Weapon->ItemInfo.Thumnail;
					Item.Mesh = Weapon->ItemInfo.Mesh;
					Item.WeaponNumber = Weapon->ItemInfo.WeaponNumber;

					Items[ArrayIndex] = Item;

				}
				else
				{
					// 그게 아니고 아이템 수량이 0이면 
					if (Item.ItemQuantity == 0)
					{
						Item = Items[ArrayIndex];

						Item.ItemName = Weapon->ItemInfo.ItemName;
						Item.Stackable = Weapon->ItemInfo.Stackable;
						Item.ItemQuantity = Item.ItemQuantity + Weapon->ItemInfo.ItemQuantity;
						Item.Thumnail = Weapon->ItemInfo.Thumnail;
						Item.Mesh = Weapon->ItemInfo.Mesh;
						Item.WeaponNumber = Weapon->ItemInfo.WeaponNumber;

						Items[ArrayIndex] = Item;
					}
				}
				
			}
			AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			UW_Inventory* PlayerInventory = PlayerController->GetInventoryWidget();
			PlayerInventory->LoadInventory(this);
			Weapon->Destroy();
		}
		

	}
}

