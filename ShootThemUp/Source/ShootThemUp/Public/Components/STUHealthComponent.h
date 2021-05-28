// Shoot Them Up The Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUHealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeathSignature);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent)) class SHOOTTHEMUP_API USTUHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USTUHealthComponent();

    UFUNCTION(BlueprintCallable)
    bool IsDead() const { return Health <= 0.f; }

    UFUNCTION(BlueprintCallable)
    void Heal(float HealNum);

    void PassiveHeal(float HealUpdateT);

    float GetHealth() const { return Health; }

    FOnDeathSignature OnDeath;
    FOnHealthChangedSignature OnHealthChanged;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float MaxHealth = 100.f;

    UPROPERTY(EditAnywhere, Category = "Heal")
    bool bAutoHeal = true;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealUpdateTime = 0.3f;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealDelay = 3.f;

    UPROPERTY(EditAnywhere, Category = "Heal")
    float HealModifier = 1.f;

private:
    UFUNCTION()
    void OnTakeAnyDamage(
        AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

    void HealForPassiveHeal();

    float Health = 0.f;
    FTimerHandle PassiveHealTimerHandle;
};
