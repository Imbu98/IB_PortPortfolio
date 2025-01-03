#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemStructure.h"
#include "BaseEquippable.generated.h"

UCLASS()
class IMBUPORTFOLIO_API ABaseEquippable : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseEquippable();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultSceneRoot;
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ItemStaticMesh;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* ItemSKeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FItemStruct ItemInfo;

	
	class UCombatComponent* CombatComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UCollisionComponent* CollisionComponent;

public:	
	UFUNCTION(BluePrintPure, Category = ItemMesh)
	UPrimitiveComponent* GetItemMesh();
	UFUNCTION(BluePrintCallable, Category = ItemMesh)
	void AttachActor(FName SocketName);
	UFUNCTION(BluePrintCallable)
	void OnEquipped();
	UFUNCTION(BluePrintCallable)
	void OnUnEquipped();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName AttachSocketName;

	UPROPERTY(VisibleDefaultsOnly)
	bool IsEquipped = false;

public:
	void SetIsEquipped(bool Equip) { IsEquipped = Equip; }
	bool GetIsEquipped(void) { return IsEquipped; }
	UFUNCTION(BlueprintCallable)
	void SaveEquippedWeapon(ABaseEquippable* Weapon);
	UFUNCTION()
	void OnHitActor(FHitResult HitResult);

};
