// Leer un sistema de ecuaciones lineales, e imprimir su solución
// sabiendo que:
// ax + by = c
// dx + ey =f
// x=ce-bfae-bd
// y=af-cdae-bd

#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, det, x, y;

    printf("Ingrese a: ");
    scanf("%f", &a);
    printf("Ingrese b: ");
    scanf("%f", &b);
    printf("Ingrese c: ");
    scanf("%f", &c);

    printf("\nIngrese d: ");
    scanf("%f", &d);
    printf("Ingrese e: ");
    scanf("%f", &e);
    printf("Ingrese f: ");
    scanf("%f", &f);

    // Calcular determinante
    det = a * e - b * d;

    if (det != 0)
    {
        x = (c * e - b * f) / det;
        y = (a * f - c * d) / det;

        printf("\nSolucion:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }
    else
    {
        printf("\nEl sistema no tiene solucion unica.\n");
    }

    return 0;
}