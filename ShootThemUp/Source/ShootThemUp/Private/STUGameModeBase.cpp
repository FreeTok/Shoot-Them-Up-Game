// Shoot Them Up The Game. All Rights Reserved.

#include "STUGameModeBase.h"

void ASTUGameModeBase::BeginPlay()
{
    int32 Varible = 0;
    if (Varible < 10)
    {
        for (int32 i = 0; i < 10; ++i)
        {
            UE_LOG(LogTemp, Display, TEXT("index: %i"), i);
        }
    }
}