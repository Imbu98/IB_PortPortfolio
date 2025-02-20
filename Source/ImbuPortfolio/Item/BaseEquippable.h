#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Structure/ItemStructure.h"
#include "ImbuPortfolio/Components/CollisionComponent.h"
#include "ImbuPortfolio/Structure/Struct_Probability.h"
#include "ImbuPortfolio/Structure/Probability/Structure_ArmorTypeProbability.h"
#include "ImbuPortfolio/Structure/Probability/Structure_ItemTypeProbability.h"
#include "ImbuPortfolio/Structure/Probability/Structure_PotionSizeProbability.h"
#include "ImbuPortfolio/Structure/Probability/Structure_RarityProbability.h"
#include "ImbuPortfolio/Structure/Probability/Structure_WeaponTypeProbability.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* ItemSKeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* NiagaraComponent;


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FItemStruct ItemInfo;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	UDataTable* DT_Item;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	class UNiagaraSystem* ItemDropEffect;

	UPROPERTY(BlueprintReadOnly,Category=DataTableText)
	FText DT_Item_AxeRawName=FText::FromString("Axe");
	UPROPERTY(BlueprintReadOnly,Category=DataTableText)
	FText DT_Item_SwordRawName=FText::FromString("Sword");
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Drop)
	UDataTable* DT_ItemTypeProbability;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Drop)
	UDataTable* DT_WeaponTypeProbability;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Drop)
	UDataTable* DT_ArmorTypeProbability;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Drop)
	UDataTable* DT_RarityProbability;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Drop)
	UDataTable* DT_PotionSizeProbability;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FDataTableRowHandle DT_ItemProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Equippable)
	FDataTableRowHandle AxeDataTableRow;
	
	

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
	void SelectItemType();
	UFUNCTION()
	void SetAppearance();
	UFUNCTION()
	void SetAxeWeight();
	UFUNCTION()
	void ItemImpulse();
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


