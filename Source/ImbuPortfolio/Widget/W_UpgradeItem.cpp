#include "W_UpgradeItem.h"

#include "Components/Image.h"

void UW_UpgradeItem::NativeConstruct()
{
	Super::NativeConstruct();
}

void UW_UpgradeItem::UpgradeItem()
{
	
}

void UW_UpgradeItem::UpdateSlot(FItemStruct UpgradeItemInfo)
{
	UpgradeReadyItemInfo = UpgradeItemInfo;
	if (UpgradeReadyItemImage)
	{
		UpgradeReadyItemImage->SetBrushFromTexture(UpgradeReadyItemInfo.Thumnail);
		// 어떻게 플레이어에게 UpgradeItemWidget을 넘길지 생각하기
	}
	
	
}
