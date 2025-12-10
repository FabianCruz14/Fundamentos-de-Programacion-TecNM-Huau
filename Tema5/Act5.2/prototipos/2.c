// En lenguaje C escribe el prototipo de un procedimiento
// llamado Height que reciba la estatura de una persona en
// metros y centímetros y muestra su estatura en pulgadas
// NOTA: 1 metro=39.37 pulgadas

#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Height(float cm);

int main()
{
    float cm;
    printf("cual es tu estatura en cm; ");
    scanf("%f", &cm);

    Height(cm);
    return 0;
}

void Height(float cm)
{
    float pulgadas = cm / 2.54;
    printf("En pulgadas Mides %.2f \n", pulgadas);
}
