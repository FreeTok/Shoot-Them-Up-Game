// Shoot Them Up The Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/STUBaseWeapon.h"
#include "STURiffleWeapon.generated.h"

UCLASS()
class SHOOTTHEMUP_API ASTURiffleWeapon : public ASTUBaseWeapon
{
    GENERATED_BODY()

public:
    virtual void StartFire() override;
    virtual void StopFire() override;

protected:
    virtual void MakeShot() override;
    virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSettings", meta = (ClampMin = "0.0", ClampMax = "10.0"))
    float TimeBetweenShots = 0.1f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSettings", meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float BulletSpread = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponSettings", meta = (ClampMin = "1.0", ClampMax = "1000.0"))
    float Damage = 10.f;

private:
    FTimerHandle ShotTimerHandle;
};
