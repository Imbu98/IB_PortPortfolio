#include "IBCharBase.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet\KismetSystemLibrary.h"
#include "../Components/CombatComponent.h"
#include "../Components/InventoryComponent.h"
#include "../Interface/Action_Interface.h"
#include "../IB_Framework/IB_PlayerController.h"
#include "../Item/BaseEquippable.h"
#include "../Item/EItems.h"
#include "../Item/Axe_Weapon.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/Item/Axe_Weapon.h"

UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusIdle,"Status.Idle","Tag Character In Idle")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusDie,"Status.Die","Tag Character In Die")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusAction,"Status.Action","Tag Character In Action")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusActionAttack,"Status.Action.Attack","Tag When Attacking")



AIBCharBase::AIBCharBase()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;
	

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
	StateComponent=CreateDefaultSubobject<UStateComponent>(TEXT("StateComponent"));
	

}

void AIBCharBase::BeginPlay()
{
	Super::BeginPlay();

	
	SetupGamePlayTag();

	StateComponent->SetState(TAG_StatusIdle);
	
}


void AIBCharBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIBCharBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(IMC_Asset, 0);
		}
	}
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(IA_IBChar_Move, ETriggerEvent::Triggered, this, &ThisClass::Move);
		EnhancedInputComponent->BindAction(IA_IBChar_Look, ETriggerEvent::Triggered, this, &ThisClass::Look);
		EnhancedInputComponent->BindAction(IA_IBChar_Jump, ETriggerEvent::Started, this, &ThisClass::Jump);
		EnhancedInputComponent->BindAction(IA_IBChar_Dodge, ETriggerEvent::Started, this, &ThisClass::Dodge);
		EnhancedInputComponent->BindAction(IA_IBChar_Interact, ETriggerEvent::Started, this, &ThisClass::Interact);
		EnhancedInputComponent->BindAction(IA_IBChar_OpenInventory, ETriggerEvent::Started, this, &ThisClass::OpenInventory);
		EnhancedInputComponent->BindAction(IA_IBChar_Attack,ETriggerEvent::Started,this,&AIBCharBase::Attack);
	}

}

void AIBCharBase::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AIBCharBase::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get< FVector2D >();
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
}

void AIBCharBase::Dodge()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		AnimInstance->Montage_Play(AM_Dodge);
	
}

void AIBCharBase::Interact()
{
	InventoryComponent->Interaction();
}

void AIBCharBase::OpenInventory()
{
	AIB_PlayerController* PlayerController = Cast<AIB_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	PlayerController->OpenInventory();
}

void AIBCharBase::Attack()
{
	if (CombatComponent==nullptr)
	{
		return;
	}
	if (StateComponent==nullptr)
	{
		return;
	}
	ABaseEquippable* MainWeapon= CombatComponent->GetMainWeapon();
	if (MainWeapon==nullptr)
	{
		return;
	}
	bool CanAttack = MainWeapon->IsAttachtoHand;
	if (CanAttack==true)
	{
		if (StateComponent->GetCurrentState() != TAG_StatusActionAttack)
		{
			AttackEvent();
		}
	}
	
}

void AIBCharBase::AttackEvent()
{
	if (CanPerformToggleCombat()==true)
	{
		if (CombatComponent!=nullptr)
		{
			float AttackCount = CombatComponent->AttackCount;
			PerformAttack(AttackCount);
		}
		bUseControllerRotationYaw=true;
	}
}

void AIBCharBase::PerformAttack(float InAttackCount, FGameplayTag InAttackType)
{
	if (StateComponent==nullptr)
	{
		return;
	}
	if (CombatComponent==nullptr)
	{
		return;
	}
		ABaseEquippable* MainWeapon= CombatComponent->GetMainWeapon();
		if (MainWeapon)
		{
			bool IsAttackMontageEmpty =  MainWeapon->AttackMontage.IsEmpty();
			if (!IsAttackMontageEmpty)
			{
				UAnimMontage* CurrentAttackMontage= MainWeapon->AttackMontage[InAttackCount];
				if (CurrentAttackMontage)
				{
					StateComponent->SetState(TAG_StatusActionAttack);
					StateComponent->SetCurrentAction(InAttackType);

					PlayAnimMontage(CurrentAttackMontage);
					CombatComponent->AttackCount++;
					float AttackMontageCount= MainWeapon->AttackMontage.Num()-1;
				
					if (CombatComponent->AttackCount > AttackMontageCount)
					{
						CombatComponent->AttackCount=0;
					}
				
				}
			}
			
		}
}

bool AIBCharBase::CanPerformToggleCombat()
{
	TArray<FGameplayTag> StatusTag;
	StatusTag.Add(TAG_StatusAction);
	StatusTag.Add(TAG_StatusDie);

	if (StateComponent==nullptr)
	{
		return false;
	}
	bool InActionOrDie = StateComponent->IsCurrentStateEqualtoAny(StatusTag);

	if (GetCharacterMovement()==nullptr)
	{
		return false;
	}
	bool IsFalling = GetCharacterMovement()->IsFalling();

	bool CharacterInIdle = StateComponent->GetCurrentState() == TAG_StatusIdle;

	return !InActionOrDie && !IsFalling && CharacterInIdle;
}

void AIBCharBase::ResetAttack()
{
	CombatComponent->ResetAttack();
	StateComponent->ResetState();
	StateComponent->SetCurrentAction(TAG_StatusIdle);
	bUseControllerRotationYaw = false;
}


void AIBCharBase::Equip(int32 WeaponNumber, AActor* Caller)
{
	
	if (CombatComponent&& WeaponNumber!=0&&InventoryComponent)
	{
		
		InventoryComponent->UnEquip();
		
		TSubclassOf<ABaseEquippable> WeaponClass = CombatComponent->WeaponArray[WeaponNumber];
		if (WeaponClass != nullptr)
		{
			ABaseEquippable* Weapon =  SpawnAndAttachWeapon(WeaponNumber,WeaponClass,Caller);
			if (Weapon)
			{
				Weapon->OnEquipped();
				if (InventoryComponent)
				{
					InventoryComponent->EquippedWeaponInfo=Weapon->ItemInfo;
				}
			}
		}
	}
}

void AIBCharBase::UnEquip()
{

	// 이제 장착 무기를 인벤토리에 넣어주는 것만 하면 된다 inventory component참고
	// inventory component에서 함수 만들고 그 함수 실행시켜줘도 될듯
}

// weaponNumber에 따라 스폰후 attach
ABaseEquippable* AIBCharBase::SpawnAndAttachWeapon(int32 WeaponNumber,TSubclassOf<ABaseEquippable> WeaponClass,AActor* Caller)
{
	// Parameter for Spawn
	APawn* Pawn = Cast<APawn>(Caller);
	if (Pawn!=nullptr)
	{
		FTransform SpawnTransform = Pawn->GetActorTransform();
		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		ActorSpawnParameters.TransformScaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;
		ActorSpawnParameters.Owner = Caller;
		ActorSpawnParameters.Instigator = Pawn;

		WeaponEnum = static_cast<E_Weapon>(WeaponNumber);
		
		switch (WeaponEnum)
		{
		case E_Weapon::None:
			{
				return nullptr;
				break;
			}
			// Weapon Axe
		case E_Weapon::Axe:
			{
				ABaseEquippable* Axe_L = GetWorld()->SpawnActor<ABaseEquippable>(WeaponClass, SpawnTransform, ActorSpawnParameters);
				if (Axe_L)
				{
					Axe_L->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandL_Axe"));
				}
				ABaseEquippable* Axe_R = GetWorld()->SpawnActor<ABaseEquippable>(WeaponClass, SpawnTransform, ActorSpawnParameters);
				if (Axe_R)
				{
					Axe_R->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandR_Axe"));
				}
				if (InventoryComponent!=nullptr)
				{
					InventoryComponent->EquippedWeapon.Add(Axe_L);
					InventoryComponent->EquippedWeapon.Add(Axe_R);
				}
				
				AAxe_Weapon* Axe_Weapon = Cast<AAxe_Weapon>(Axe_L);
				if (Axe_Weapon!=nullptr)
				{
					return Axe_Weapon;
				}
				break;
			}
			// Weapon Sword
		case E_Weapon::Sword:
			{
				return nullptr;
				break;
			}
		default:
			return nullptr;
			break;
		}
	}
	return nullptr;
}

void AIBCharBase::SetupGamePlayTag()
{
	GameplayContatiner.AddTag(TAG_StatusIdle);
	GameplayContatiner.AddTag(TAG_StatusDie);
	GameplayContatiner.AddTag(TAG_StatusAction);
	GameplayContatiner.AddTag(TAG_StatusActionAttack);
}