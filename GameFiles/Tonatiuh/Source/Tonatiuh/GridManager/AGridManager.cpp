// Made by 'Les Paaztèques', check out game's credits for more information.


#include "AGridManager.h"


// Sets default values
AAGridManager::AAGridManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAGridManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGridManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

