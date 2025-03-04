#include "Enemy_Monster.h"

AEnemy_Monster::AEnemy_Monster()
{
	Widget=CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	Widget->SetupAttachment(GetMesh());
}
