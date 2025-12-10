// En lenguaje C escribe el prototipo de una función llamada Average que
// recibe tres números enteros y obtiene su promedio.

#include <stdio.h>

// PROTOTIPO DE FUNCION
int Average(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    int promedio;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número entero: ");
    scanf("%d", &num3);

    promedio = Average(num1, num2, num3);
    printf("El promedio de los tres números es: %d\n", promedio);

    return 0;
}

// DEFINICION DE LA FUNCION
int Average(int num1, int num2, int num3)
{
    return (num1 + num2 + num3) / 3;
}