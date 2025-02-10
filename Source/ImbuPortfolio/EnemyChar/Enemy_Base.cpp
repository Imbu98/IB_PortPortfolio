#include "Enemy_Base.h"
#include "../DefineDelegate.h"
#include "ImbuPortfolio/GameMode/CaveRuin_GameMode.h"

AEnemy_Base::AEnemy_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	DamageSystemComponent=CreateDefaultSubobject<UDamageSystemComponent>("DamageSystemComponent");

	Delegate = OnDamageResponse.AddUObject(this,&AEnemy_Base::DamageResponse);
	OnDeath.AddUObject(this,&ThisClass::Death);
	

}

void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void AEnemy_Base::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	OnDamageResponse.Remove(Delegate);
}

void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	

}

void AEnemy_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy_Base::Death()
{
	// AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	// ACaveRuin_GameMode* GM_CaveRuin = Cast<ACaveRuin_GameMode>(GameMode);
	// GM_CaveRuin->RemoveEnemyChar(this);

	if (DeathMontage)
	{
		PlayAnimMontage(DeathMontage);
	}
}

void AEnemy_Base::DamageResponse(E_DamageResponse DamageResponse)
{
	if (DamageResponseMontage)
	{
		PlayAnimMontage(DamageResponseMontage);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf(TEXT( "EnemyHp:%f is Remain"),DamageSystemComponent->CurrentHealth));
}

bool AEnemy_Base::TakeDamage(FDamageInfo& DamageInfo, AActor* Cursor)
{
	if (DamageSystemComponent==nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f,FColor::Red,TEXT("DamageSystemComponent is Null"));
		return false;
	}
	return DamageSystemComponent->TakeDamage(DamageInfo, Cursor);
}

float AEnemy_Base::SetHealth()
{
	return EnemyMaxHealth;
}

ASpline* AEnemy_Base::GetSpline()
{
	return Spline;
}


