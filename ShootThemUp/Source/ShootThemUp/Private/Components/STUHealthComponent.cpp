// Shoot Them Up The Game. All Rights Reserved.

#include "Components/STUHealthComponent.h"
#include "GameFramework/Actor.h"

DEFINE_LOG_CATEGORY_STATIC(LogHealthComponent, All, All)

USTUHealthComponent::USTUHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void USTUHealthComponent::BeginPlay()
{
    Super::BeginPlay();

    Health = MaxHealth;
    OnHealthChanged.Broadcast(Health);

    AActor* ComponentOwner = GetOwner();

    if (ComponentOwner)
    {
        ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &USTUHealthComponent::OnTakeAnyDamage);
    }
}

void USTUHealthComponent::Heal(float HealNum)
{
    if (HealNum <= 0 || IsDead())
        return;
    Health = FMath::Clamp(Health + HealNum, 0.0f, MaxHealth);
    OnHealthChanged.Broadcast(Health);

    UE_LOG(LogHealthComponent, Warning, TEXT("Reagened %f health"), HealNum)
}

void USTUHealthComponent::PassiveHeal(float HealUpdateT)
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(
            PassiveHealTimerHandle, this, &USTUHealthComponent::HealForPassiveHeal, HealUpdateT, true, HealDelay);
        OnHealthChanged.Broadcast(Health);

        if (Health == MaxHealth)
        {
            GetWorld()->GetTimerManager().ClearTimer(PassiveHealTimerHandle);
        }
    }
}

void USTUHealthComponent::OnTakeAnyDamage(
    AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
    if (Damage <= 0 || IsDead())
        return;
    Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);
    OnHealthChanged.Broadcast(Health);

    if (bAutoHeal)
    {
        if (Health <= MaxHealth)
        {
            PassiveHeal(HealUpdateTime);
        }
    }

    if (IsDead())
    {
        OnDeath.Broadcast();
    }
}

void USTUHealthComponent::HealForPassiveHeal()
{
    Heal(HealModifier);
}
