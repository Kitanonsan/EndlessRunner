// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include ...


UCLASS()
class ENDLESSRUNNER_API UGameHud : public UUserWidget {
	GENERATE_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CointCount;

public:
	UFUNCTION(BlueprintCallable)
		void InitializeHUD(AEndlessRunnerGameModeBase* RunGameMode);

	UFUNCTION(BlueprintCallable)
		void SetCoinCount(int32 Count)
};