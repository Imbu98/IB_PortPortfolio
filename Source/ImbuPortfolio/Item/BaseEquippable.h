#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemStructure.h"
#include "ImbuPortfolio/Components/CollisionComponent.h"
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
	virtual void OnConstruction(const FTransform& Transform) override;

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultSceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ItemStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* ItemSKeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FItemStruct ItemInfo;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FDataTableRowHandle Item;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UCombatComponent* CombatComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Component")
	class UCollisionComponent* CollisionComponent;

public:	
	UFUNCTION(BluePrintPure, Category = ItemMesh)
	UPrimitiveComponent* GetItemMesh();
	UFUNCTION(BluePrintCallable, Category = ItemMesh)
	void AttachActor(FName SocketName);
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemMesh)
	UMaterialInterface* ItemOverlayMaterial;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemMesh)
	TObjectPtr<USkeletalMesh> AxeAsset;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=ItemMesh)
	TObjectPtr<USkeletalMesh> SwordAsset;
	
	UFUNCTION(BluePrintCallable)
	void OnEquipped();
	UFUNCTION(BluePrintCallable)
	void OnUnEquipped();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName AttachSocketName;
	UPROPERTY(VisibleDefaultsOnly)
	bool IsEquipped = false;
	UPROPERTY(VisibleDefaultsOnly)
	bool IsAttachtoHand;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Damage;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Weight;

public:
	void SetIsEquipped(bool Equip) { IsEquipped = Equip; }
	bool GetIsEquipped(void) { return IsEquipped; }
	UFUNCTION(BlueprintCallable)
	void SaveEquippedWeapon(ABaseEquippable* Weapon);
	UFUNCTION()
	void OnHitActor(FHitResult HitResult);
	UFUNCTION()
	void SpawnRandomItem();
	UFUNCTION()
	void NearItem(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=AttackMontage)
	TArray<UAnimMontage*> AttackMontage;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Effects)
	UParticleSystem* HitEffects;

protected:
	FOnHitDelegate OnHit;
	

};


