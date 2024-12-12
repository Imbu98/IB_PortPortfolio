#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IBCharBase.generated.h"

class UInputAction;

UCLASS()
class IMBUPORTFOLIO_API AIBCharBase : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

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


	UFUNCTION(BlueprintCallable)
	void Move(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable)
	void Look(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable)
	void Dodge();
	UFUNCTION(BlueprintCallable)
	void Interact();
	
public:
	FORCEINLINE  USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE  UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation) 
	UAnimMontage* AM_Dodge;
private:
	float InteractRadius=20.f;

public:
	FHitResult OutHit;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuerry;

};
