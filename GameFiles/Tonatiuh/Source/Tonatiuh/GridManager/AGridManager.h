// Made by 'Les Paaztèques', check out game's credits for more information.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGridManager.generated.h"

UCLASS()
class TONATIUH_API AAGridManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int gridSize;
	int cellSize;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};