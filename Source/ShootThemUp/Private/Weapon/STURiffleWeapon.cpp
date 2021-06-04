// Shoot Them Up The Game. All Rights Reserved.


#include "Weapon/STURiffleWeapon.h"
#include "DrawDebugHelpers.h"

void ASTURiffleWeapon::StartFire()
{
    GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &ASTURiffleWeapon::MakeShot, TimeBetweenShots, true, 0.f);
}

void ASTURiffleWeapon::StopFire()
{
    GetWorldTimerManager().ClearTimer(ShotTimerHandle);
}

void ASTURiffleWeapon::MakeShot()
{
    if (!GetWorld())
        return;

    FVector TraceStart, TraceEnd;
    if (!GetTraceData(TraceStart, TraceEnd))
        return;

    FHitResult HitResult;
    MakeHit(HitResult, TraceStart, TraceEnd);

    if (HitResult.bBlockingHit)
    {
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), HitResult.ImpactPoint, DebugColor, false, 3.f, 0, DebugLineThickness);

        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.f, 24, DebugColor, false, 5.f);

        const auto DamadegCharacter = HitResult.GetActor();
        if (!DamadegCharacter)
            return;
        DamadegCharacter->TakeDamage(Damage, FDamageEvent{}, GetPlayerController(), GetOwner());
    }

    else
    {
        DrawDebugLine(GetWorld(), GetMuzzleWorldLocation(), TraceEnd, DebugColor, false, 3.f, 0, DebugLineThickness);
    }
}

bool ASTURiffleWeapon::GetTraceData(FVector& TraceStart, FVector& TraceEnd) const
{
    FVector ViewLocation;
    FRotator ViewRotation;

    if (!GetPlayerViewPoint(ViewLocation, ViewRotation))
        return false;

    TraceStart = ViewLocation;
    const auto HalfRad = FMath::DegreesToRadians(BulletSpread);
    const FVector ShootDirection = FMath::VRandCone(ViewRotation.Vector(), HalfRad);
    TraceEnd = TraceStart + ShootDirection * TraceMaxDistance;

    return true;
}