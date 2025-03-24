#include "W_Skill1_Icon.h"

#include "Components/Image.h"
#include "Components/ProgressBar.h"

void UW_Skill1_Icon::NativeConstruct()
{
	Super::NativeConstruct();
}

void UW_Skill1_Icon::UpdateSkill1_Cooldown(float Cooldown)
{
	PB_Skill1CoolDown->SetPercent(Cooldown);
	
}

void UW_Skill1_Icon::UpdateSkill1_Thumbnail()
{
	if (IMG_Skill1_Icon!=nullptr)
	{
		if (IMG_AxeSkill1_Icon)
		{
			IMG_Skill1_Icon->SetBrushFromTexture(IMG_AxeSkill1_Icon);
		}
		
	}
	
}

void UW_Skill1_Icon::ClearSkill1_Thumbnail()
{
	if (IMG_Skill1_Icon!=nullptr)
	{
		if (IMG_AxeSkill1_Icon)
		{
			IMG_Skill1_Icon->SetBrushFromTexture(nullptr);
		}
		
	}
}
