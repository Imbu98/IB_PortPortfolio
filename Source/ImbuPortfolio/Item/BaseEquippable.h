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

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Item)
	FItemStruct ItemInfo;

public:	
	UFUNCTION(BluePrintPure, Category = ItemMesh)
	UPrimitiveComponent* GetItemMesh();
	UFUNCTION(BluePrintCallable, Category = ItemMesh)
	void AttachActor(FName SocketName);
	UFUNCTION(BluePrintCallable, BlueprintNativeEvent)
	void OnEquipped();
	UFUNCTION(BluePrintCallable)
	void OnUnEquipped();

	UPROPERTY(BlueprintReadWrite)
	FName AttachSocketName;

	UPROPERTY(VisibleDefaultsOnly)
	bool IsEquipped = false;

public:
	void SetIsEquipped(bool Equip) { IsEquipped = Equip; }
	bool GetIsEquipped(void) { return IsEquipped; }
	UFUNCTION(BlueprintCallable)
	void SaveEquippedWeapon(ABaseEquippable* Weapon);

};
