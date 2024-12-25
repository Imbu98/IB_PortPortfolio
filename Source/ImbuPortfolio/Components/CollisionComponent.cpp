#include "CollisionComponent.h"

#include "KismetTraceUtils.h"
#include "Components/MeshComponent.h"

UCollisionComponent::UCollisionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	

}


void UCollisionComponent::BeginPlay()
{
	Super::BeginPlay();
}




void UCollisionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsCollisionEnabled)
	{
		CollisionTrace();
	}
}


void UCollisionComponent::EnableCollision()
{
	ClearHitActors();
	IsCollisionEnabled = true;
}

void UCollisionComponent::DisableCollision()
{
IsCollisionEnabled = false;	
}

void UCollisionComponent::ClearHitActors()
{
	
		AlreadyHitActors.Empty();
	
}

void UCollisionComponent::SetCollisionMesh(UPrimitiveComponent* MeshComponent)
{
	if (MeshComponent!=nullptr)
	{
		CollisionMeshComponent = MeshComponent;
	}
}

void UCollisionComponent::CollisionTrace()
{
	FVector StartLocation = CollisionMeshComponent->GetSocketLocation(StartSocketName);
	FVector EndLocation = CollisionMeshComponent->GetSocketLocation(EndSocketName);
	TArray<FHitResult> OutHits;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	
	bool hit = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(), StartLocation, EndLocation,SphereRadius,
		ObjectTypes, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHits, true, FLinearColor::Red, FLinearColor::Green, 2.f);

	if (hit)
	{
		for (FHitResult& Result : OutHits)
		{
			LastHit = Result;
			if (AlreadyHitActors.Contains(Result.GetActor())!=true)
				{
					HitActor= Result.GetActor();
					AlreadyHitActors.Add(HitActor);
				
				}
		}
		Onhit.Broadcast(LastHit);
	}
}

void UCollisionComponent::AddActorsToIgnore(AActor* InActors)
{
	ActorsToIgnore.AddUnique(InActors);
}
