// En lenguaje C escribe el prototipo de una función llamada Triangle que
// reciba el valor de los lados de un triángulo y que obtenga el perímetro del
// triángulo.

#include <stdio.h>

// PROTOTIPO DE FUNCION
float Triangle(float lado1, float lado2, float lado3);

int main()
{
    float lado1, lado2, lado3, perimetro;

    printf("Ingrese el valor del lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el valor del lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el valor del lado 3 del triángulo: ");
    scanf("%f", &lado3);

    perimetro = Triangle(lado1, lado2, lado3);
    printf("El perímetro del triángulo es: %.2f\n", perimetro);

    return 0;
}

// DEFINICION DE LA FUNCION
float Triangle(float lado1, float lado2, float lado3)
{
    return lado1 + lado2 + lado3;
}