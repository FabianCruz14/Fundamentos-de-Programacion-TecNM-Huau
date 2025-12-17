// En una miscelánea se requiere que dado el peso en gramos (máximo 10000) se
// determine el número de pesas que hay que poner en una balanza cuyos pesos
// sean de 1000g, 500g, 200g, 100g, 50g, 10g, 5g, 2g y 1g, y que permitan
// equilibrar el peso..

#include <stdio.h>

int main()
{
    int peso_total;

    // Entrada
    printf("Ingrese el peso en gramos (max 10000): ");
    scanf("%d", &peso_total);

    // Validación
    if (peso_total < 0 || peso_total > 10000)
    {
        printf("Peso fuera de rango.\n");
        return 1;
    }

    // Arreglo de pesas disponibles
    int pesas[] = {1000, 500, 200, 100, 50, 10, 5, 2, 1};
    int n = sizeof(pesas) / sizeof(pesas[0]);

    printf("Distribución de pesas:\n");

    // Cálculo de cuántas pesas de cada tipo
    for (int i = 0; i < n; i++)
    {
        int num = peso_total / pesas[i]; // cuántas pesas de este tipo
        printf("%d g: %d\n", pesas[i], num);
        peso_total = peso_total % pesas[i]; // residuo para la siguiente pesa
    }

    return 0;
}
