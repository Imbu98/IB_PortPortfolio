#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interface/Action_Interface.h"
#include "../Item/EItems.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"
#include "TargetSystemComponent.h"
#include "MotionWarpingComponent.h"
#include "IBCharBase.generated.h"


class UInputAction;

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusInteracting)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusIdle)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusDie)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusAction)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusActionAttack)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusActionDodge)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusActionBlock)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusActionSkill1)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_WeaponAxeThrow)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_WeaponSwordSlash)



UCLASS()
class IMBUPORTFOLIO_API AIBCharBase : public ACharacter, public IAction_Interface , public IDamageInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UCombatComponent* CombatComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UInventoryComponent* InventoryComponents;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UStateComponent* StateComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UDamageSystemComponent* DamageSystemComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UTargetSystemComponent* TargetSystemComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UMotionWarpingComponent* MotionWarpingComponent;
	
	

protected:
	FGameplayTagContainer GameplayContatiner;

protected:
	void SetupGamePlayTag();



public:
	AIBCharBase();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ABP)
	TSubclassOf<UAnimInstance> ABP_UnArmed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ABP)
	TSubclassOf<UAnimInstance> ABP_Axe;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ABP)
	TSubclassOf<UAnimInstance> ABP_Sword;

public:
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IMC_Default;
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IMC_Cannon;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Move;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Look;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Jump;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Dodge;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Interact;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_OpenInventory;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Attack;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Aiming;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_Blocking;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_SKill1;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* IA_IBChar_AngerState;

	UFUNCTION(BlueprintCallable,Category="Input")
	void Move(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable,Category="Input")
	void Look(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable,Category="Input")
	void Dodge();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Interact();
	UFUNCTION(BlueprintCallable,Category="Input")
	void OpenInventory();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Attack();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Aim_Start();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Aim_Completed();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Blocking();
	UFUNCTION(BlueprintCallable,Category="Input")
	void EndBlocking();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Skill1();
	UFUNCTION(BlueprintCallable,Category="Input")
	void Skill1End();
	UFUNCTION(BlueprintCallable,Category="Input")
	void AngerState();

	
	
public:
	FORCEINLINE  USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE  UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Dodge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Blocking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_ParryAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Stagger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_HitReaction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_BeginAngerSate;

	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractRadius=300.f;
	UPROPERTY()
	E_Weapon WeaponEnum;
	UPROPERTY()
	FItemStruct ItemStruct;
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ABaseEquippable> Equippable22;
	UPROPERTY(EditAnywhere,Category=combat)
	bool IsAiming=false;
	UPROPERTY(EditAnywhere,Category=combat)
	bool IsWeaponAttached=false;
	UPROPERTY(EditAnywhere,Category=combat)
	bool IsWithinParry;
	UPROPERTY(EditAnywhere,Category=combat)
	bool IsReactingToBlock;
	UPROPERTY(EditAnywhere,Category=combat)
	float ParryAttackDamage;
	UPROPERTY(EditAnywhere,Category=combat)
	UParticleSystem* ParryEffect;
	UPROPERTY(EditAnywhere,Category=combat)
	AActor* EnemyActor;
	UPROPERTY(EditAnywhere,Category=combat)
	FVector EnemyActorLocation;
	UPROPERTY(EditAnywhere,Category=combat)
	float DodgeDistance;
	
	UPROPERTY(EditAnywhere,Category=combat)
	float MaxAngerAmount;
	UPROPERTY(EditAnywhere,Category=combat)
	float CurrentAngerAmount;
	UPROPERTY(EditAnywhere,Category=combat)
	float AttackRate=1.0f;
	UPROPERTY(EditAnywhere,Category=combat)
	float OriginalMaxWalkSpeed;
	UPROPERTY(EditAnywhere,Category=combat)
	bool IsInAngerState;
	UPROPERTY(EditAnywhere,Category=combat)
	UMaterial* AngerStateOverlayMaterial;
	
	UPROPERTY(EditAnywhere,Category=Equip)
	UMaterialInstanceDynamic* LeftWeaponDynamicMaterial;
	UPROPERTY(EditAnywhere,Category=Equip)
	UMaterialInstanceDynamic* RightWeaponDynamicMaterial;
	UPROPERTY(EditAnywhere,Category=Equip)
	class UTimelineComponent* Timeline; 
	UPROPERTY(EditAnywhere,Category=Equip)
	UCurveFloat* FloatCurve;

	

	UFUNCTION()
	void TimelineUpdate(float Value);
	
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Cannon)
	bool IsOnCannon=false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Cannon)
	bool IsNearCannon=false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Cannon)
	bool IsFlying=false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Cannon)
	TArray<UAnimMontage*> FlyingAnimMontages;
	UPROPERTY(EditAnywhere)
	FVector DefaultCameraOffset;
	UPROPERTY(EditAnywhere)
	FVector NearCannonCameraOffset;
	UPROPERTY(EditAnywhere)
	int32 CurrentTargetIndex;

	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skill")
	FGameplayTagContainer ActiveWeaponTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skill")
	UAnimMontage* AxeSkill1StartMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skill")
	UAnimMontage* AxeSkill1EndMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Skill")
	float AxeSkill1_Cooldown=7.0f;
	UPROPERTY()
	float AxeSkill1_RemainingCooldown=0.0f;

public:
	UFUNCTION(BlueprintCallable,Category="Skill")
	void AxeSkill1_CooldownReset();
	
public:
	UFUNCTION()
	void SwitchController();
	UFUNCTION()
	void PlayFlyingAnimation();
	
	void PlayMontageOnCompleted(UAnimMontage* Montage, FOnMontageEnded MontageEndDelegate);
	UFUNCTION()
	void CallOnBlockingEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void CallOnParryEnded(UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION()
	void ParryAttack(AActor* AttackTarget);
	UFUNCTION()
	void HitCameraShake();
	UFUNCTION()
	void IncreaseAngerGauge(float Amount);
	UFUNCTION()
	void SetAngerStatus();
	UFUNCTION()
	void ResetStatus();
	UFUNCTION()
	void UpdatePlayerStatebar();
	
	UPROPERTY()
	class AAxe_Weapon* Axe;
	
	FOnMontageEnded OnBlockingEnded;
	FOnMontageEnded OnParryEnded;
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Character)
	float CharMaxHealth;

private:
	UFUNCTION()
	void AttackEvent();
	UFUNCTION()
	void PerformAttack(float InAttackCount,FGameplayTag InAttackType=TAG_StatusIdle);
	UFUNCTION()
	bool CanPerformToggleCombat();
	
	

	
	
public:
	UFUNCTION()
	void ResetAttack();
	UFUNCTION()
	virtual void DamageResponse(E_DamageResponse DamageResponse) override;
	UFUNCTION()
	virtual void OnBlocked(bool CanBeParried, AActor* DamageCursor) override;
	UFUNCTION()
	virtual void Dodged() override;



public:
	UFUNCTION()
	void UnEquip();
	UFUNCTION()
	ABaseEquippable* SpawnAndAttachWeapon(FItemStruct InventoryItemStruct,TSubclassOf<ABaseEquippable> EquippableClass,AActor* Caller,E_ItemRarity ItemRarity) ;

public:
	virtual void Equip(FItemStruct InventoryItemStruct, AActor* Caller) override;
	virtual bool TakeDamage(FDamageInfo& DamageInfo,AActor* Cursor) override;
	virtual float SetHealth() override;

};


