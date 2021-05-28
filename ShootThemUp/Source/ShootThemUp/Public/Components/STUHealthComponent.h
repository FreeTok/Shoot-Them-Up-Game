// Shoot Them Up The Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUHealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeath)
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float)

    UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)) class SHOOTTHEMUP_API USTUHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USTUHealthComponent();

    float GetHealth() const { return Health; }

    UFUNCTION(BlueprintCallable)
    bool IsDead() const { return Health <= 0.f; }

    FOnDeath OnDeath;
    FOnHealthChanged OnHealthChanged;

    UPROPERTY(EditAnywhere, Category = "Heal")
    bool bAutoHeal = true;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealUpdateTime = 0.3f;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealDelay = 3.f;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealModifier = 1.f;

    UFUNCTION(BlueprintCallable)
    void Heal(float HealNum);

    void PassiveHeal(float HealUpdateT);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float MaxHealth = 100.f;

private:
    float Health = 0.f;

    UFUNCTION()
    void OnTakeAnyDamage(
        AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

    FTimerHandle PassiveHealTimerHandle;

    void HealForPassiveHeal();
};
