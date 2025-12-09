// En lenguaje C escribe el prototipo de un procedimiento llamado Height que
// reciba la estatura de una persona en metros y centímetros y muestra su
// estatura en pulgadas NOTA: 1 metro=39.37 pulgadas

// PROTOTIPO DE PROCEDIMIENTO
#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Weight(float libras);

int main()
{
    float peso;
    printf("Informe el peso en libras: ");
    scanf("%f", &peso);

    Weight(peso);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void Weight(float libras)
{
    float kg = libras * 0.453592;
    printf("En Kilogramos pesas %.2f \n", kg);
}
