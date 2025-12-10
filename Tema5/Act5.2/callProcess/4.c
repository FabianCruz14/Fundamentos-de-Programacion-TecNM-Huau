// En lenguaje C escribe una línea de código para hacer una llamada al
//     procedimiento llamado ClasifyHours que reciba horas
//     trabajadas(entre 1 y 70),
//     y las clasifique en horas simples(de 0 a 40), horas extras dobles(de 41 a 50) y horas extras triples(mas de 50).

#include <stdio.h>

void ClasifyHours(int hours);

int main()
{
    int hours = 65;

    ClasifyHours(hours);
    return 0;
}

void ClasifyHours(int horas)
{
    int simples, dobles, triples;

    // Asegurar que esté en el rango
    if (horas < 0)
        horas = 0;
    if (horas > 70)
        horas = 70;

    // Clasificación
    if (horas <= 40)
    {
        simples = horas;
        dobles = 0;
        triples = 0;
    }
    else
    {
        simples = 40;

        if (horas <= 50)
        {
            dobles = horas - 40;
            triples = 0;
        }
        else
        {
            dobles = 10;
            triples = horas - 50;
        }
    }

    // Mostrar resultados
    printf("\n--- CLASIFICACION DE HORAS ---\n");
    printf("Horas simples (0-40): %d\n", simples);
    printf("Horas extras dobles (41-50): %d\n", dobles);
    printf("Horas extras triples (51-70): %d\n", triples);
    printf("Total horas: %d\n", simples + dobles + triples);
}
