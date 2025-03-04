#include "IBCharBase.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "IBCharAnimInstance.h"
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
#include "Shakes/LegacyCameraShake.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Components/TimelineComponent.h"
#include "ImbuPortfolio/Components/DamageSystemComponent.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Base.h"
#include "ImbuPortfolio/ETC/Cannon.h"
#include "ImbuPortfolio/ETC/MyLegacyCameraShake.h"
#include "ImbuPortfolio/IB_Framework/IBGameInstance.h"
#include "ImbuPortfolio/Item/Axe_Weapon.h"
#include "ImbuPortfolio/Item/Helmet_Armor.h"
#include "Slate/SGameLayerManager.h"

UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusIdle, "Status.Idle", "Tag Character In Idle")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusDie,"Status.Die","Tag Character In Die")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusAction,"Status.Action","Tag Character In Action")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusActionBlock,"Status.Action.Block","Tag When Blocking")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusActionAttack,"Status.Action.Attack","Tag When Attack")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusActionSkill1,"Status.Action.Skill1","Tag When Skill1")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusActionDodge,"Status.Action.Dodge","Tag When Dodge")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_StatusInteracting,"Status.Interaction","Tag When Interaction")


UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_WeaponAxeThrow,"Weapon.Axe.Throw","Tag Axe Skill1")
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_WeaponSwordSlash,"Weapon.Sword.Slash","Tag Sword Skill1")



AIBCharBase::AIBCharBase()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 600.0f;
	CameraBoom->bUsePawnControlRotation = true;
	

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));

	InventoryComponents = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
	
	StateComponent=CreateDefaultSubobject<UStateComponent>(TEXT("StateComponent"));
	
	DamageSystemComponent=CreateDefaultSubobject<UDamageSystemComponent>(TEXT("DamageSystemComponent"));

	TargetSystemComponent=CreateDefaultSubobject<UTargetSystemComponent>(TEXT("TargetSystemComponent"));

	MotionWarpingComponent=CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));

	Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));

	
	
	
	FGameplayTagContainer AxeTags;
	
	// Sword 무기의 태그들
	FGameplayTagContainer SwordTags;

	OnBlockingEnded.BindUObject(this,&ThisClass::CallOnBlockingEnded);
	OnParryEnded.BindUObject(this,&ThisClass::CallOnParryEnded);
	

}

void AIBCharBase::BeginPlay()
{
	Super::BeginPlay();

	
	SetupGamePlayTag();

	StateComponent->SetState(TAG_StatusIdle);

	if (ABP_UnArmed!=nullptr)
	{
		GetMesh()->LinkAnimClassLayers(ABP_UnArmed);
	}

	DefaultCameraOffset=GetCameraBoom()->TargetOffset;

	UIBGameInstance* IBGameInstance = Cast<UIBGameInstance>(GetGameInstance());
	if (IBGameInstance!=nullptr)
	{
		Equip(IBGameInstance->IGI_EquippedWeapon,this);
	}
	
	if (Timeline)
	{
	
	FOnTimelineFloat ProgressFunction;
	ProgressFunction.BindUFunction(this, FName("TimelineUpdate"));
	Timeline->AddInterpFloat(FloatCurve, ProgressFunction);
	
	}
	
	
	
}


void AIBCharBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsInAngerState)
	{
		CurrentAngerAmount-=DeltaTime*4.0f;
		if (CurrentAngerAmount <= 0.0f)
		{
			CurrentAngerAmount = 0.0f;
			
			ResetStatus();
		}
		UpdatePlayerStatebar();
	}

}

void AIBCharBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(IMC_Default, 0);
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
		EnhancedInputComponent->BindAction(IA_IBChar_Aiming,ETriggerEvent::Started,this,&AIBCharBase::Aim_Start);
		EnhancedInputComponent->BindAction(IA_IBChar_Aiming,ETriggerEvent::Completed,this,&AIBCharBase::Aim_Completed);
		EnhancedInputComponent->BindAction(IA_IBChar_Blocking,ETriggerEvent::Started,this,&AIBCharBase::Blocking);
		EnhancedInputComponent->BindAction(IA_IBChar_Blocking,ETriggerEvent::Completed,this,&AIBCharBase::EndBlocking);
		EnhancedInputComponent->BindAction(IA_IBChar_SKill1,ETriggerEvent::Started,this,&AIBCharBase::Skill1);
		EnhancedInputComponent->BindAction(IA_IBChar_AngerState,ETriggerEvent::Started,this,&AIBCharBase::AngerState);
		
		
		
	}

}

void AIBCharBase::Move(const FInputActionValue& Value)
{
	if (StateComponent->CurrentState==TAG_StatusInteracting||StateComponent->CurrentState==TAG_StatusActionDodge)
	{
		return;
	}
	if (StateComponent->CurrentState==TAG_StatusActionSkill1)
	{
		return;
	}
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
	if (IsNearCannon||StateComponent->CurrentState==TAG_StatusInteracting)
	{
		return;
	}
	FVector2D LookAxisVector = Value.Get< FVector2D >();
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
}

void AIBCharBase::Dodge()
{
	if (StateComponent->CurrentState==TAG_StatusActionDodge||GetCharacterMovement()->IsFalling())
	{
		return;
	}
	if (GetLastMovementInputVector().Length() <=0)
	{
		return;
	}
	
	if (bUseControllerRotationYaw==true)
	{
		bUseControllerRotationYaw = false;
	}
	
	FVector CurrentAcceleration = GetCharacterMovement()->GetCurrentAcceleration();
	FVector IBAcceleration2D=FVector(CurrentAcceleration.X,CurrentAcceleration.Y,0);
	
	IBAcceleration2D.Normalize(); // 방향을 정규화
	
	FRotator NewRotation = IBAcceleration2D.Rotation();
	// 캐릭터가 해당 방향을 바라보도록 설정
	SetActorRotation(NewRotation);
	
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [IBAcceleration2D,this]()
		{
		LaunchCharacter(IBAcceleration2D * DodgeDistance, true, true); // 1000.0f 값은 속도 조절 가능
		}, 0.1f, false);
	
	FVector DodgePoint = IBAcceleration2D*DodgeDistance;
	
	MotionWarpingComponent->AddOrUpdateWarpTargetFromLocationAndRotation(TEXT("Dodge"),DodgePoint,GetActorRotation());

	
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->Montage_Play(AM_Dodge,AttackRate);
	StateComponent->SetState(TAG_StatusActionDodge);
	
	
}

void AIBCharBase::Interact()
{
    FHitResult OutHit;
    TArray<AActor*> ActorsToIgnore;

    ActorsToIgnore.Add(this);
    // 장착한 아이템은 인터렉션 되지 않게
    if (!InventoryComponents->EquippedWeapon.IsEmpty())
    {
        for (auto EquippedWeapon : InventoryComponents->EquippedWeapon)
        {
            ActorsToIgnore.Add(EquippedWeapon);
        }
    }
    
    
    FVector VCharacterLocation = this->GetActorLocation();
    FVector VLocation = VCharacterLocation - FVector(0.f, 0.f, 50.f);

    
    bool Hit = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), VLocation, VLocation, InteractRadius,
         UEngineTypes::ConvertToTraceType(ECC_Visibility), false, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHit, true, FLinearColor::Green, FLinearColor::Red, 10.0f);
    GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Interact")));
    if (Hit)
    {
        AActor* HitActor = OutHit.GetActor();
        if (HitActor==nullptr)
        {
            return;
        }
        if (ACharacter* HitCharacter = Cast<ACharacter>(HitActor))
        {
            if (HitCharacter==nullptr)
            {
                return;
            }
            if (HitCharacter->GetClass()->ImplementsInterface(UAction_Interface::StaticClass()))
            {
                IAction_Interface* InteractionInterface = Cast<IAction_Interface>(HitCharacter);
                if (InteractionInterface)
                {
                    InteractionInterface->Interaction();
                }
            }
        }
        else if (ABaseEquippable* Item= Cast<ABaseEquippable>(HitActor))
        {
            if (InventoryComponents)
            {
                    for (AActor* Actor : InventoryComponents->EquippedWeapon)
                    {
                        ActorsToIgnore.Add(Actor);
                    }
                
                InventoryComponents->InteractionItem(OutHit.GetActor());
            }
        }
    }
    
    
	
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

void AIBCharBase::Aim_Start()
{
	if (IsWeaponAttached==true)
	{
		if (IsAiming==false)
		{
			IsAiming=true;
		
		
			UIBCharAnimInstance* IBCharAnimInstance = Cast<UIBCharAnimInstance>( GetMesh()->GetAnimInstance());
			if (IBCharAnimInstance!=nullptr)
			{
				IBCharAnimInstance->ReceiveIBIsAiming(IsAiming);
			}
			if (TargetSystemComponent)
			{
				TargetSystemComponent->TargetActor();
				EnemyActor= TargetSystemComponent->GetLockedOnTargetActor();

				if (EnemyActor)
				{
					EnemyActorLocation = EnemyActor->GetActorLocation();
				}
			}
		
		}
		else if (IsAiming==true)
		{
			IsAiming=false;	
			
			if (TargetSystemComponent)
			{
				TargetSystemComponent->TargetLockOff();
				EnemyActor=nullptr;
				EnemyActorLocation=FVector(0.0f,0.0f,0.0f);
			}
		}
	}
}

void AIBCharBase::Aim_Completed()
{
	
}

void AIBCharBase::Blocking()
{
	if (AM_Blocking!=nullptr)
	{
		PlayMontageOnCompleted(AM_Blocking,OnBlockingEnded);
	}
	
}

void AIBCharBase::EndBlocking()
{
	CallOnBlockingEnded(AM_Blocking,false);
}
void AIBCharBase::Skill1()
{
	if (StateComponent==nullptr)
	{
		return;
	}
	if (StateComponent->CurrentState.MatchesTag(TAG_StatusAction))
	{
		return;
	}
	if (EnemyActor!=nullptr&&ActiveWeaponTags.HasTag(FGameplayTag::RequestGameplayTag(FName("Weapon.Axe.Throw"))))
	{
		if (AxeSkill1StartMontage)
		{
			PlayAnimMontage(AxeSkill1StartMontage);
			if (InventoryComponents->RightWeapon)
			{
				Axe = Cast<AAxe_Weapon>(InventoryComponents->RightWeapon);
				if (Axe!=nullptr)
				{
					FVector MyLocation = GetActorLocation();
					FVector TargetLocation = EnemyActor->GetActorLocation();

					FVector Direction = (TargetLocation - MyLocation).GetSafeNormal();
					FRotator LooKAtRotation = Direction.Rotation();
					SetActorRotation(LooKAtRotation);
					
					StateComponent->SetState(TAG_StatusActionSkill1);
					
					Axe->ThrowToTarget(EnemyActor);
					
				}
				
			}
		}
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("You cannot throw an axe!"));
	}
}

void AIBCharBase::Skill1End()
{
	if (AxeSkill1EndMontage)
	{
		PlayAnimMontage(AxeSkill1EndMontage);
		Axe->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandR_Axe"));
		if (StateComponent)
		{
			StateComponent->SetState(TAG_StatusIdle);
		}
	}
}

void AIBCharBase::AngerState()
{
	if (CurrentAngerAmount==MaxAngerAmount)
	{
		IsInAngerState=true;

		if (AM_BeginAngerSate)
		{
			SetAngerStatus();
		}
	}
	
}

void AIBCharBase::SetAngerStatus()
{
	OriginalMaxWalkSpeed=GetCharacterMovement()->MaxWalkSpeed;
	GetMesh()->GetAnimInstance()->Montage_Play(AM_BeginAngerSate);
	GetMesh()->SetOverlayMaterial(AngerStateOverlayMaterial);
	AttackRate=1.5f;
	StateComponent->SetState(TAG_StatusInteracting);
	GetCharacterMovement()->MaxWalkSpeed=OriginalMaxWalkSpeed+300.0f;
}

void AIBCharBase::ResetStatus()
{
	AttackRate=1.0f;
	GetCharacterMovement()->MaxWalkSpeed=OriginalMaxWalkSpeed;
	IsInAngerState=false;
	GetMesh()->SetOverlayMaterial(nullptr);
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

					PlayAnimMontage(CurrentAttackMontage,AttackRate);
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

void AIBCharBase::DamageResponse(E_DamageResponse DamageResponse)
{
	AIB_PlayerController* IB_PlayerController= Cast<AIB_PlayerController>(GetController());
	if (IB_PlayerController==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,TEXT( "DamageResponse:AIController is Remain"));
		
	}
	IB_PlayerController->UpdatePlayerStateBar();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf(TEXT( "Char:%f is Remain"),DamageSystemComponent->CurrentHealth));

	switch (DamageResponse)
	{
	case E_DamageResponse::None:
		{
				
		}break;
	case E_DamageResponse::Stagger:
		{
			if (AM_Stagger)
			{
				PlayAnimMontage(AM_Stagger);
			}
		
		}break;
	case E_DamageResponse::HitReaction:
		{
			if (AM_HitReaction&&!GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
			{
				PlayAnimMontage(AM_HitReaction);
			}
		}break;
	default:
		{
				
		}break;
			
	}
}


// 방어구도 컴뱃컴포넌트에 넣어서 스폰할 때 쓰기
void AIBCharBase::Equip(FItemStruct InventoryItemStruct, AActor* Caller)
{
	
	if (CombatComponent&&InventoryComponents)
	{
		if (InventoryItemStruct.ItemType==E_ItemType::Weapon)
		{
			
			
			InventoryComponents->UnEquipWeapon();
			TSubclassOf<ABaseEquippable> WeaponClass = CombatComponent->WeaponArray[InventoryItemStruct.WeaponNumber];
			if (WeaponClass != nullptr)
			{
				ABaseEquippable* Weapon =  SpawnAndAttachWeapon(InventoryItemStruct,WeaponClass,Caller,InventoryItemStruct.ItemRarity);
				if (Weapon)
				{
					IsWeaponAttached=true;
					if (InventoryComponents)
					{
						InventoryComponents->EquippedWeaponInfo=Weapon->ItemInfo;
						for (auto Equippables : InventoryComponents->EquippedWeapon )
						{
							Equippables->OnEquipped();
						}
						if (InventoryComponents->EquippedWeapon[0])
						{
						    LeftWeaponDynamicMaterial = InventoryComponents->EquippedWeapon[0]->ItemSKeletalMesh->CreateDynamicMaterialInstance(0);
							Timeline->PlayFromStart();
						}
						if (InventoryComponents->EquippedWeapon[1])
						{
							RightWeaponDynamicMaterial = InventoryComponents->EquippedWeapon[1]->ItemSKeletalMesh->CreateDynamicMaterialInstance(0);
							Timeline->PlayFromStart();
						}
					
						InventoryComponents->OnInventoryUpdate.Broadcast();
					
						switch (InventoryComponents->EquippedWeaponInfo.WeaponType)
						{
						case E_Weapon::Axe:
							{
								if (InventoryComponents->EquippedWeaponInfo.ItemRarity==E_ItemRarity::Legendary)
								{
									ActiveWeaponTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Weapon.Axe.Throw")));
								}
								if (ABP_Axe!=nullptr)
								{
									GetMesh()->LinkAnimClassLayers(ABP_Axe);
								}
							}break;
						case E_Weapon::Sword:
							{
								if (InventoryComponents->EquippedWeaponInfo.ItemRarity==E_ItemRarity::Legendary)
								{
									ActiveWeaponTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Weapon.Sword.Slash")));
								}
								if (ABP_Sword!=nullptr)
								{
									GetMesh()->LinkAnimClassLayers(ABP_Sword);
								}
							}break;
						default:
							break;
						}
					}
				}
			}
		}
		else if (InventoryItemStruct.ItemType==E_ItemType::Armor)
		{
			if (CombatComponent->ArmorArray.IsEmpty())
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,TEXT("ArmorArray Is Null"));
				return;
			}
			InventoryComponents->UnEquipHelmet();
			TSubclassOf<ABaseEquippable> ArmorClass = CombatComponent->ArmorArray[InventoryItemStruct.WeaponNumber];
			if (ArmorClass != nullptr)
			{
				ABaseEquippable* Armor =  SpawnAndAttachWeapon(InventoryItemStruct,ArmorClass,Caller,InventoryItemStruct.ItemRarity);
				if (Armor)
				{
					if (InventoryComponents)
					{
						InventoryComponents->EquippedHelmetInfo=Armor->ItemInfo;
						
						InventoryComponents->OnInventoryUpdate.Broadcast();
					
					}
				}
			}
		}
	}
	
}

bool AIBCharBase::TakeDamage(FDamageInfo& DamageInfo, AActor* Cursor)
{
	
	
	return DamageSystemComponent->TakeDamage(DamageInfo, Cursor);
	
}

void AIBCharBase::OnBlocked(bool CanBeParried, AActor* DamageCursor)
{
	IsReactingToBlock=true;
	if (AM_ParryAttack!=nullptr)
	{
		PlayMontageOnCompleted(AM_ParryAttack,OnParryEnded);
	}
	if (CanBeParried&&IsWithinParry)
	{
		ParryAttack(DamageCursor);
	}
}

void AIBCharBase::Dodged()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(),0.2f);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, [this]()
			{
				UGameplayStatics::SetGlobalTimeDilation(GetWorld(),1.0f);
			}, 0.1f, false);
}

void AIBCharBase::ParryAttack(AActor* AttackTarget)
{
	FDamageInfo DamageInfo;
	DamageInfo.DamageAmount= ParryAttackDamage;
	DamageInfo.DamageType=E_DamageType::Melee;
	DamageInfo.DamageResponse=E_DamageResponse::Stagger;
	DamageInfo.ShouldDamageInvincible=false;
	DamageInfo.CanBeBlocked=false;
	DamageInfo.CanBeParried=false;
	DamageInfo.ShouldForceInterrupt=true;
	if (AttackTarget->GetClass()->ImplementsInterface(UDamageInterface::StaticClass())==true)
	{
		IDamageInterface* DamageInterface=Cast<IDamageInterface>(AttackTarget);
		if (DamageInterface==nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DamageInterface Is Null"));
			return;
		}
			DamageInterface->TakeDamage(DamageInfo,AttackTarget);
			if (ParryEffect!=nullptr)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ParryEffect,AttackTarget->GetActorLocation(),FRotator::ZeroRotator,FVector::ZeroVector,true);
			
			}
		
	}
}

void AIBCharBase::HitCameraShake()
{
		APlayerController* PlayerController= Cast<APlayerController>(GetController());
		if (PlayerController!=nullptr)
		{
			PlayerController->ClientStartCameraShake(UMyLegacyCameraShake::StaticClass());
		}
}

void AIBCharBase::IncreaseAngerGauge(float Amount)
{
	if (IsInAngerState)
	{
		return;
	}
	CurrentAngerAmount+=Amount;
	if (CurrentAngerAmount>=MaxAngerAmount)
	{
		CurrentAngerAmount=MaxAngerAmount;
	}
		UpdatePlayerStatebar();
	
	
}

float AIBCharBase::SetHealth()
{
	return CharMaxHealth;
}

void AIBCharBase::UnEquip()
{
	if (InventoryComponents->EquippedWeaponInfo.WeaponType==E_Weapon::Axe)
	{
		ActiveWeaponTags.Reset();
	}
	if (ABP_UnArmed!=nullptr)
	{
		GetMesh()->LinkAnimClassLayers(ABP_UnArmed);
		
		
	}
	IsWeaponAttached=false;
}

// weaponNumber에 따라 스폰후 attach
ABaseEquippable* AIBCharBase::SpawnAndAttachWeapon(FItemStruct InventoryItemStruct,TSubclassOf<ABaseEquippable> EquippableClass,AActor* Caller,E_ItemRarity ItemRarity)
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

		if (InventoryItemStruct.ItemType==E_ItemType::Weapon)
		{
			WeaponEnum = static_cast<E_Weapon>(InventoryItemStruct.WeaponNumber);
		
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
					ABaseEquippable* Axe_L = GetWorld()->SpawnActor<ABaseEquippable>(EquippableClass, SpawnTransform, ActorSpawnParameters);
					if (Axe_L)
					{
						 Axe = Cast<AAxe_Weapon>(Axe_L);
						if (Axe!=nullptr)
						{
							Axe->InitializeItem(ItemRarity);
							Axe->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandL_Axe"));	
						}
					}
					ABaseEquippable* Axe_R = GetWorld()->SpawnActor<ABaseEquippable>(EquippableClass, SpawnTransform, ActorSpawnParameters);
					if (Axe_R)
					{
						Axe = Cast<AAxe_Weapon>(Axe_R);
						if (Axe!=nullptr)
						{
							Axe->InitializeItem(ItemRarity);
							Axe->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandR_Axe"));	
						}
					}
					if (InventoryComponents!=nullptr)
					{
						InventoryComponents->EquippedWeapon.Add(Axe_L);
						InventoryComponents->EquippedWeapon.Add(Axe_R);
					
						InventoryComponents->LeftWeapon=Axe_L;
						InventoryComponents->RightWeapon=Axe_R;
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
		if (InventoryItemStruct.ItemType==E_ItemType::Armor)
		{
			E_Armor ArmorEnum = static_cast<E_Armor>(InventoryItemStruct.WeaponNumber);
		
			switch (ArmorEnum)
			{
			case E_Armor::None:
				{
					return nullptr;
				}
			case E_Armor::Top:
				{
					ABaseEquippable* Helmet = GetWorld()->SpawnActor<ABaseEquippable>(EquippableClass, SpawnTransform, ActorSpawnParameters);
					if (Helmet)
					{
						AHelmet_Armor* Helmet_Armor = Cast<AHelmet_Armor>(Helmet);
						if (Helmet_Armor!=nullptr)
						{
							Helmet_Armor->InitializeItem(ItemRarity);

							// 나중에 메쉬구하면 attach할 때 사용
							//Helmet_Armor->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("HandL_Axe"));	
						}
						if (InventoryComponents!=nullptr)
						{
							InventoryComponents->EquippedHelmet=Helmet;
							
						}
						AHelmet_Armor* ArmorHelmet = Cast<AHelmet_Armor>(Helmet);
						return ArmorHelmet;
					}
				}
			default:
				break;
			}
		}
		
	}
	
	return nullptr;
		
}


void AIBCharBase::TimelineUpdate(float Value)
{
	if (LeftWeaponDynamicMaterial)
	{
		LeftWeaponDynamicMaterial->SetScalarParameterValue("Bounds", Value);
	}
	if (RightWeaponDynamicMaterial)
	{
		RightWeaponDynamicMaterial->SetScalarParameterValue("Bounds", Value);
	}
}


void AIBCharBase::SwitchController()
{
	ACannon* IBCannon = Cast<ACannon>(UGameplayStatics::GetActorOfClass(GetWorld(),ACannon::StaticClass()));
	if (IBCannon==nullptr)
	{
		return;
	}
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	{
		if (PlayerController!=nullptr)
		{
			UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
			if (Subsystem!=nullptr)
			{
				if (IsOnCannon==false)
				{
					Subsystem->RemoveMappingContext(IMC_Default);
					Subsystem->AddMappingContext(IMC_Cannon,1);
					PlayerController->Possess(IBCannon);
					IsOnCannon=true;
				}
				else if (IsOnCannon==true)
				{
					Subsystem->RemoveMappingContext(IMC_Cannon);
					Subsystem->AddMappingContext(IMC_Default,0);
					PlayerController->Possess(this);
					IsOnCannon=false;
				}
			}
		}
		
	}
	
	
}

void AIBCharBase::PlayFlyingAnimation()
{
	if (FlyingAnimMontages.IsEmpty()!=true&&IsFlying)
	{
		int32 RandMax = FlyingAnimMontages.Num()-1;
		float RandomMontageIndex=FMath::RandRange(0,RandMax);
		UAnimMontage* FlyingAnimMontage = FlyingAnimMontages[RandomMontageIndex];
		if (FlyingAnimMontage!=nullptr)
		{
			PlayAnimMontage(FlyingAnimMontage);
		}
	}
	
	
}

void AIBCharBase::PlayMontageOnCompleted(UAnimMontage* Montage, FOnMontageEnded MontageEndDelegate)
{
	
		if (Montage)	
		{
			GetMesh()->GetAnimInstance()->Montage_Play(Montage);
			GetMesh()->GetAnimInstance()->Montage_SetEndDelegate(MontageEndDelegate,Montage);
		}
	
	
}

void AIBCharBase::CallOnBlockingEnded(UAnimMontage* Montage, bool bInterrupted)
{
	DamageSystemComponent->IsBlocking=false;
	StopAnimMontage();
	IsWithinParry=false;
	IsReactingToBlock=false;
	StateComponent->ResetState();
	
}

void AIBCharBase::CallOnParryEnded(UAnimMontage* Montage, bool bInterrupted)
{
	EndBlocking();
	if (StateComponent==nullptr)
	{
		return;
	}
	StateComponent->ResetState();
}


void AIBCharBase::UpdatePlayerStatebar()
{
	AIB_PlayerController* IBPlayerController=Cast<AIB_PlayerController>(GetController());
	if (IBPlayerController!=nullptr)
	{
		IBPlayerController->PlayerStateBar->UpdatePlayerStateBar(this);
	}
}



void AIBCharBase::SetupGamePlayTag()
{
	GameplayContatiner.AddTag(TAG_StatusIdle);
	GameplayContatiner.AddTag(TAG_StatusDie);
	GameplayContatiner.AddTag(TAG_StatusAction);
	GameplayContatiner.AddTag(TAG_StatusActionAttack);
}
