// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDecoradorCircular.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AEnemigoDecoradorCircular::AEnemigoDecoradorCircular()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentAngle = 0.0f;
}

// Called when the game starts or when spawned
void AEnemigoDecoradorCircular::BeginPlay()
{
	Super::BeginPlay();
	if (Enemigo)
	{
		InitialPosition = Enemigo->GetActorLocation();
	}
}

// Called every frame
void AEnemigoDecoradorCircular::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if (Enemigo)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("DECORADOR TRABAJANDO"));
        }
        CurrentAngle += AngularSpeed * DeltaTime;

        // Calcular la nueva posición en el círculo
        // Mantenemos X constante, y el círculo se forma en Y y Z
        float NewY = InitialPosition.Y + Radius * FMath::Cos(CurrentAngle);
        float NewZ = InitialPosition.Z + Radius * FMath::Sin(CurrentAngle);

        // Mantener la misma posición X
        FVector NewPosition(InitialPosition.X, NewY, NewZ);

        // Actualizar la posición del enemigo
        Enemigo->SetActorLocation(NewPosition);
    }
}

void AEnemigoDecoradorCircular::Vigilar()
{
    // Iniciar el movimiento circular
    if (Enemigo)
    {
        InitialPosition = Enemigo->GetActorLocation();
        CurrentAngle = 0.0f;
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("DECORADOR VIGILAR ACTIVADO"));
        }
    }
}

