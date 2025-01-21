#include "BaseEquippable.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Components\SkeletalMeshComponent.h"
#include "../Components/CombatComponent.h"
#include "Components/BoxComponent.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/CollisionComponent.h"

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

	CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("CollisionComponent"));

	
	

}

void ABaseEquippable::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionComponent!=nullptr)
	{
		CollisionComponent->Onhit.AddDynamic(this,&ThisClass::OnHitActor);
	}
	
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
	if (Character != nullptr) // 
	{
		FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, true);
		AttachToComponent(Character->GetMesh(), Rules, SocketName);
	}
}

void ABaseEquippable::OnEquipped()
{
	IsEquipped = true;
	IsAttachtoHand=true;
	CombatComponent = this->GetOwner()->FindComponentByClass<UCombatComponent>();
	if (CombatComponent != nullptr)
	{
		CombatComponent->SetMainWeapon(this);
	}
	if (CollisionComponent!=nullptr)
	{
		CollisionComponent->SetCollisionMesh(GetItemMesh());
		CollisionComponent->AddActorsToIgnore(this->GetOwner());

		//나중에 저장기능 생성 후 넣기
		//SaveEquippedWeapon();
	}
}

void ABaseEquippable::OnUnEquipped()
{
	SetIsEquipped(false);
	IsAttachtoHand=false;
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

void ABaseEquippable::OnHitActor(FHitResult HitResult)
{
	AIBCharBase* IBCharBase = Cast<AIBCharBase>( this->GetOwner());
	
}



