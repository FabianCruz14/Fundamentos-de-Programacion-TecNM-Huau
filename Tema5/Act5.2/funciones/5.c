// ​ En lenguaje C escribe el prototipo de una función llamada
// Leapyear que reciba un valor del año y determinar si el
// año recibido es bisiesto o no.

#include <stdio.h>

// PROTOTIPO DE FUNCION
int Leapyear(int year);

int main()
{
    int year;
    int esBisiesto;

    printf("Ingrese un año: ");
    scanf("%d", &year);

    esBisiesto = Leapyear(year);
    if (esBisiesto)
        printf("El año %d es bisiesto.\n", year);
    else
        printf("El año %d no es bisiesto.\n", year);

    return 0;
}

// DEFINICION DE LA FUNCION
int Leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // Es bisiesto
    else
        return 0; // No es bisiesto
}