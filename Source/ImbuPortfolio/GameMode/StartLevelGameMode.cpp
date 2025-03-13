#include "StartLevelGameMode.h"

#include "Engine/TargetPoint.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "ImbuPortfolio/ETC/Cannon.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "Kismet/GameplayStatics.h"

class AGeometryCollectionActor;

void AStartLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	
	// Destory Next Gate
	IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance)
	{
		IsFirstCrossBridge=IBGameInstance->IGI_IsFirstGameStart;
		
		if (IBGameInstance->IGI_IsClearTempleDragon)
		{
			TArray<AActor*> CaveRuinGate;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("CaveRuinGate"),CaveRuinGate);

			for(AActor* Actors :CaveRuinGate)
			{
				Actors->Destroy();
			}
		}
		if (IBGameInstance->IGI_IsClearCaveRuins)
		{
			TArray<AActor*> NextLevelGate;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("NextLevelGate"),NextLevelGate);

			for(AActor* Actors :NextLevelGate)
			{
				Actors->Destroy();
			}
		}
	}

	// Hide Cannon When first GameStart
	if (IBGameInstance->IGI_IsFirstGameStart==true)
	{
		AActor* Cannon =UGameplayStatics::GetActorOfClass(GetWorld(),ACannon::StaticClass());
        	if (Cannon)
        	{
        		Cannon->SetActorHiddenInGame(true);
        		Cannon->SetActorEnableCollision(false);
        	}
	}
	
	
	// Destroy Bridge When Not Fist GameStart
	if (IBGameInstance->IGI_IsFirstGameStart==false)
	{
		TArray<AActor*> Bridges;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("Bridge"),Bridges);
		for (AActor* Bridge :Bridges)
		{
			Bridge->Destroy();
		}
	}
	
	
}

void AStartLevelGameMode::ShowCannon()
{
	AActor* Cannon =UGameplayStatics::GetActorOfClass(GetWorld(),ACannon::StaticClass());
	if (Cannon)
	{
		IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
		if (IBGameInstance)
		{
			IBGameInstance->IGI_IsFirstGameStart=false;
		}
		Cannon->SetActorHiddenInGame(false);
		Cannon->SetActorEnableCollision(true);
		TArray<AActor*> Bridges;
		UGameplayStatics::GetAllActorsWithTag(GetWorld(),TEXT("Bridge"),Bridges);
		for (AActor* Bridge :Bridges)
		{
			Bridge->Destroy();
		}
	}
}

void AStartLevelGameMode::SpawnTutorialItem()
{
	// AActor* TargetPoint = UGameplayStatics::GetActorOfClass(GetWorld(),ATargetPoint::StaticClass());
	// if (TargetPoint)
	// {
	// 	FActorSpawnParameters SpawnParams;
	// 	
	// 	ABaseEquippable* SpawnWeapon = GetWorld()->SpawnActor<ABaseEquippable>(ABaseEquippable::StaticClass());
	// 	if (SpawnWeapon)
	// 	{
	// 		SpawnWeapon->ItemInfo.ItemType=E_ItemType::Weapon;
	// 		SpawnWeapon->ItemInfo.WeaponType=E_Weapon::Axe;
	// 		SpawnWeapon->ItemInfo.ItemRarity=E_ItemRarity::Rare;
	// 	}
	// }
}
