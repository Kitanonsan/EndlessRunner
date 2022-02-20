// Copyright Epic Games, Inc. All Rights Reserved.

#include ...


#include "Components/TextBlock.h"

void UGameHud::Initialize(AEndlessRunnerGameMode* RunGameMode){
	if (RunGameMod{
		CoinCount->SetText(FText::AsNumber(Val0));
		RunGameMode->OnCoinsCountChanged.AddDynamic(this, &UGameHud::SetCoinsCount);
		}
}

void UGameHud::SetCoinsCount(int32 Count) {
	CoinsCount->SetText(FText::AsNumber(Count));
}