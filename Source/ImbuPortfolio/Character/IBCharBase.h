#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interface/Action_Interface.h"
#include "../Item/EItems.h"
#include "IBCharBase.generated.h"

class UInputAction;


UCLASS()
class IMBUPORTFOLIO_API AIBCharBase : public ACharacter, public IAction_Interface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UCombatComponent* CombatComponent;
	class UInventoryComponent* InventoryComponent;
	

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

	ABaseEquippable* SpawnAndAttachWeapon(int32 WeaponNumber,TSubclassOf<ABaseEquippable> WeaponClass,AActor* Caller) ;
public:
	FORCEINLINE  USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE  UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Dodge;
	
private:
	float InteractRadius=20.f;
	UPROPERTY()
	E_Items ItemEnum;
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ABaseEquippable> Equippable22;


public:
	virtual void Equip(int32 WeaponNumber, AActor* Caller) override;
	void UnEquip();

};
