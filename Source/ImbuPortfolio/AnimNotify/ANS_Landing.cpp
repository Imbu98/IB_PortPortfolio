#include "ANS_Landing.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "ImbuPortfolio/Components/StateComponent.h"
#include "ImbuPortfolio/EnemyChar/Enemy_Boss.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UANS_Landing::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                               const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	AEnemy_Boss* Boss = Cast<AEnemy_Boss>(MeshComp->GetOwner());
	
	if (Boss != nullptr)
	{
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(Boss);
		FHitResult OutHit;
		FVector SphereLocation = Boss->GetActorLocation()+Boss->GetActorForwardVector()*300*FVector(1.0f,1.0f,0.0f);
		UWorld* World = MeshComp->GetWorld();
		if (World==nullptr)
		{
			return;
		}
		bool hit = UKismetSystemLibrary::SphereTraceSingleForObjects(World,SphereLocation,SphereLocation,200.0f,
			ObjectTypes,false,ActorsToIgnore,EDrawDebugTrace::None,OutHit,true,FColor::Red,FColor::Green,10.0f);
		if (hit)
		{
			if (OutHit.GetActor()->GetClass()->ImplementsInterface(UDamageInterface::StaticClass()))
			{
				IDamageInterface* DamageInterface = Cast<IDamageInterface>(OutHit.GetActor());
				if (DamageInterface==nullptr)
				{
					GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Red,TEXT("EnemyAttack:DamageInterface is Null"));
					return;
				}
				FDamageInfo DamageInfo;
				DamageInfo.DamageAmount= Boss->JumpAttackDamage;
				DamageInfo.DamageType=E_DamageType::Explosion;
				DamageInfo.DamageResponse=E_DamageResponse::Stagger;
				DamageInfo.ShouldDamageInvincible=true;
				DamageInfo.CanBeBlocked=false;
				DamageInfo.CanBeParried=false;
				DamageInfo.ShouldForceInterrupt=true;
				DamageInterface->TakeDamage(DamageInfo,Boss);
			}
		}
		Boss->StateComponent->SetState(TAG_StatusIdle);
	}
	
}

