#include <stdio.h>

int main()
{
    float minutos, segundos, centesimas;
    float distancia, t_segundos, v_ms, v_kmh;

    printf("Ingrese el tiempo del participante:\n");
    printf("  Minutos: ");
    scanf("%f", &minutos);

    printf("  Segundos: ");
    scanf("%f", &segundos);

    printf("  Centesimas de segundo: ");
    scanf("%f", &centesimas);

    printf("\nIngrese la distancia recorrida (metros): ");
    scanf("%f", &distancia);

    t_segundos = (minutos * 60) + segundos + (centesimas / 100);
    v_ms = distancia / t_segundos;
    v_kmh = v_ms * 3.6;

    printf("  Velocidad:     %.2f km/h\n", v_kmh);

    return 0;
}