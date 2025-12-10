// En lenguaje C escribe una instrucción para asignar a una variable el
// resultado de la función MCD que reciba dos números m y n y calcule el mcd
// de esos dos números recibidos como parámetro. Para ello usar el algoritmo
// de Euclides.

#include <stdio.h>

// Declaración de la función
int MCD(int m, int n);

int main()
{
    // Declaración de variables con valores de ejemplo
    int numero1 = 56;
    int numero2 = 98;

    // LLAMADO  A LA FUNCION
    int resultado = MCD(numero1, numero2);

    printf("El MCD de %d y %d es: %d\n", numero1, numero2, resultado);

    return 0;
}

// Implementación de la función MCD con algoritmo de Euclides
int MCD(int m, int n)
{
    int temp;

    // Algoritmo de Euclides usando división sucesiva
    while (n != 0)
    {
        temp = n;  // Guardar el valor actual de n
        n = m % n; // Calcular el residuo de m dividido por n
        m = temp;  // Asignar el valor guardado a m
    }

    return m; // Cuando n = 0, m contiene el MCD
}