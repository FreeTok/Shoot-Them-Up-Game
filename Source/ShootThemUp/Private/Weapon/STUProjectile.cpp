// Shoot Them Up The Game. All Rights Reserved.

#include "Weapon/STUProjectile.h"
#include "Components/SphereComponent.h"

ASTUProjectile::ASTUProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    CollisionComponent->InitSphereRadius(CollisionRadius);
    SetRootComponent(CollisionComponent);
}

void ASTUProjectile::BeginPlay()
{
    Super::BeginPlay();
}
