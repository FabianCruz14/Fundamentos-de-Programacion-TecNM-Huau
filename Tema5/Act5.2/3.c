// 3.​ En lenguaje C escribe el prototipo de un procedimiento
// llamado Temperature que convierte la temperatura de una
// persona de grados Celsius a grados Fahrenheit.

#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Temperature(float celcius);

int main()
{
    float celcius;
    printf("Informe la temperatura en celcius: ");
    scanf("%f", &celcius);

    Temperature(celcius);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void Temperature(float celcius)
{
    float fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
}