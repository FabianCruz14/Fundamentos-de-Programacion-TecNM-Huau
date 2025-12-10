// En lenguaje C escribe el prototipo de un procedimiento llamado Running
// que calcule la distancia en kilómetros que va a correr una persona si su
// ritmo (velocidad) es de 0.16km/min, conociendo el tiempo que duró su
// carrera

#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Running(int tiempo);

int main()
{
    int tiempo;
    printf("Ingrese el tiempo de la carrera en minutos: ");
    scanf("%d", &tiempo);

    Running(tiempo);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void Running(int tiempo)
{
    float distancia = tiempo * 0.16;
    printf("La distancia recorrida en la carrera es: %.2f km\n", distancia);
}
