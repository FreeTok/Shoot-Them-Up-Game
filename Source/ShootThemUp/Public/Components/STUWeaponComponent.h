// Shoot Them Up The Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUWeaponComponent.generated.h"

class ASTUBaseWeapon;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SHOOTTHEMUP_API USTUWeaponComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USTUWeaponComponent();

    void StartFire();
    void StopFire();
    void NextWeapon();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "Weapons")
    TArray<TSubclassOf<ASTUBaseWeapon>> WeaponClasses;

    UPROPERTY(EditDefaultsOnly, Category = "Weapons")
    FName WeaponEquipSocketName = "WeaponSocket";

    UPROPERTY(EditDefaultsOnly, Category = "Weapons")
    FName WeaponArmorySocketName = "ArmorySocket";

private:
    void SpawnWeapons();
    void AttachWeaponToSocket(ASTUBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);
    void EquipWeapon(int32 WeaponIndex);

    UPROPERTY()
    ASTUBaseWeapon* CurrentWeapon;

    UPROPERTY()
    TArray<ASTUBaseWeapon*> Weapons;

    int32 CurrentWeaponIndex = 0;
};
