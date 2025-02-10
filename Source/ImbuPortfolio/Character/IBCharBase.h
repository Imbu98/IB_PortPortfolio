#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interface/Action_Interface.h"
#include "../Item/EItems.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"
#include "ImbuPortfolio/Interface/DamageInterface.h"
#include "IBCharBase.generated.h"


class UInputAction;

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusIdle)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusDie)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusAction)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_StatusActionAttack)


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
	class UInventoryComponent* InventoryComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UStateComponent* StateComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UDamageSystemComponent* DamageSystemComponent;

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

public:
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IMC_Asset;
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

	
public:
	FORCEINLINE  USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE  UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Dodge;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractRadius=20.f;
	UPROPERTY()
	E_Weapon WeaponEnum;
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ABaseEquippable> Equippable22;

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
	void DamageResponse(E_DamageResponse DamageResponse);



public:
	UFUNCTION()
	void UnEquip();
	UFUNCTION()
	ABaseEquippable* SpawnAndAttachWeapon(int32 WeaponNumber,TSubclassOf<ABaseEquippable> WeaponClass,AActor* Caller) ;

public:
	virtual void Equip(int32 WeaponNumber, AActor* Caller) override;
	virtual bool TakeDamage(FDamageInfo& DamageInfo,AActor* Cursor) override;
	virtual float SetHealth() override;

};
