// En lenguaje C escribe una línea de código para hacer una
// llamada al procedimiento llamado IMC que reciba el
// peso y altura y calcule
// el índice de masa corporal (Body mass index BMI) de una persona
// (IMC = peso [kg]/altura 2 [m]), indicar el estado en el que
// se encuentra esa persona en función del valor de IMC.

#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void IMC(float weight, float height);

int main()
{
    float height;
    float weight;

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &weight);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &height);

    IMC(weight, height);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void IMC(float weight, float height)
{
    float imc = weight / (height * height);
    printf("Su índice de masa corporal (IMC) es: %.2f\n", imc);
    if (imc < 18.5)
        printf("Estado: Bajo peso\n");
    else if (imc >= 18.5 && imc < 24.9)
        printf("Estado: Normal\n");
    else if (imc >= 25 && imc < 29.9)
        printf("Estado: Sobrepeso\n");
    else
        printf("Estado: Obesidad\n");
}
