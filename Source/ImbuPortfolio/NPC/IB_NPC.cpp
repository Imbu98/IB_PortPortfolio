#include "IB_NPC.h"

#include "Blueprint/UserWidget.h"
#include "ImbuPortfolio/Character/IBCharBase.h"
#include "../Components/StateComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "ImbuPortfolio/Widget/W_DungeonEnter.h"
#include "Kismet/GameplayStatics.h"

AIB_NPC::AIB_NPC()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this,&ThisClass::OnComponentBeginOverlap);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this,&ThisClass::OnComponentEndOverlap);

	WBP_Interact=CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	WBP_Interact->SetupAttachment(GetMesh());
	
	if (WBP_Interact)
	{
		WBP_Interact->SetVisibility(false);
	}

}

void AIB_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

void AIB_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIB_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AIB_NPC::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(),0))
	{
		if (WBP_Interact)
		{
			WBP_Interact->SetVisibility(true);
		}
		if (InteractOverlayMaterial)
		{
			GetMesh()->SetOverlayMaterial(InteractOverlayMaterial);
		}
	}
	
}

void AIB_NPC::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent ,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == UGameplayStatics::GetPlayerCharacter(GetWorld(),0))
	{
		if (WBP_Interact)
		{
			WBP_Interact->SetVisibility(false);
		}
	
		GetMesh()->SetOverlayMaterial(nullptr);
	}
	
}




