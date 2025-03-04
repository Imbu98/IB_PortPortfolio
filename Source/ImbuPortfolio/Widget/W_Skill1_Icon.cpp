#include "W_Skill1_Icon.h"

#include "../../../../Unreal Engine/UE_5.5/Engine/Source/Runtime/UMG/Public/Components/ProgressBar.h"

void UW_Skill1_Icon::NativeConstruct()
{
	Super::NativeConstruct();
}

void UW_Skill1_Icon::UpdateSkill1_Cooldown(float Cooldown)
{
	PB_Skill1CoolDown->SetPercent(Cooldown);
	
}
