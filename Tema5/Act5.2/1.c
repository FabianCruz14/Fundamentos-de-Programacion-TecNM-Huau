// En lenguaje C escribe el prototipo de un
// procedimiento llamado Weight que reciba
// el peso de una persona en libras, y calcule
// y muestre su peso en kilogramos.
// NOTA: 1 libra es aproximadamente igual a 0.453592 Kg.

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
