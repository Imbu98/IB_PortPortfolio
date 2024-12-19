#include "BaseEquippable.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components\SkeletalMeshComponent.h"

ABaseEquippable::ABaseEquippable()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(DefaultSceneRoot);

	/*ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
	SetRootComponent(ItemStaticMesh);*/

	ItemSKeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemSkeletalMesh"));
	ItemSKeletalMesh->SetupAttachment(DefaultSceneRoot);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->SetupAttachment(DefaultSceneRoot);

}

void ABaseEquippable::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABaseEquippable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UPrimitiveComponent* ABaseEquippable::GetItemMesh()
{

	if (ItemSKeletalMesh != nullptr)
	{
		return ItemSKeletalMesh;
	}

	return nullptr;
}

void ABaseEquippable::AttachActor(FName SocketName)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (Character != nullptr) // 무기를 소유한 오너가 있으면 소켓에 붙여준다
	{
		FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, true);
		AttachToComponent(Character->GetMesh(), Rules, SocketName);
	}
}

void ABaseEquippable::OnEquipped_Implementation()
{
	IsEquipped = true;
	AttachActor(AttachSocketName);
}

void ABaseEquippable::OnUnEquipped()
{
	SetIsEquipped(false);
}

void ABaseEquippable::SaveEquippedWeapon(ABaseEquippable* Weapon)
{
	/*UImbuGameInstance* IGI = Cast<UImbuGameInstance>(GetWorld()->GetGameInstance());
	if (IGI != nullptr)
	{
		IGI->CurrentWeaponNumber = this->WeaponNumber;
		IGI->SaveGame();
	}*/
}


