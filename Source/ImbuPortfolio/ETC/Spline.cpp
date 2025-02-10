#include "Spline.h"

#include "Components/SplineComponent.h"

ASpline::ASpline()
{

	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	Spline=CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(Root);
}
void ASpline::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpline::IncrementPatrolRoute()
{
	PatrolIndex=PatrolIndex+Direction;
	float DecideDirection= Spline->GetNumberOfSplinePoints()-1;
	if (PatrolIndex==DecideDirection)
	{
		Direction=-1;
	}
	else
	{
		if (PatrolIndex==0)
		{
			Direction=1;
		}
	}
}

FVector ASpline::GetSplinePointAsWorldPosition()
{
	return Spline->GetLocationAtSplinePoint(PatrolIndex,ESplineCoordinateSpace::World);
}

void ASpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

