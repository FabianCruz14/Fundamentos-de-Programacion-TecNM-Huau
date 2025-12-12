// Número de segundos que hay en días (d), horas (h), minutos (m) y
// segundos (s).
#include <stdio.h>

int main()
{
    double dias, horas, minutos, segundos;
    double seg_dias, seg_horas, seg_minutos;
    double total_segundos;

    printf("CONVERSION SEGUNDOS\n");

    printf("Ingrese la cantidad de dias: ");
    scanf("%lf", &dias);

    printf("Ingrese la cantidad de horas: ");
    scanf("%lf", &horas);

    printf("Ingrese la cantidad de minutos: ");
    scanf("%lf", &minutos);

    printf("Ingrese la cantidad de segundos: ");
    scanf("%lf", &segundos);

    seg_minutos = minutos * 60;
    seg_horas = horas * 60 * 60;
    seg_dias = dias * 24 * 60 * 60;

    total_segundos = seg_dias + seg_horas + seg_minutos + segundos;

    printf("= %.2f segundos\n", total_segundos);
    return 0;
}
