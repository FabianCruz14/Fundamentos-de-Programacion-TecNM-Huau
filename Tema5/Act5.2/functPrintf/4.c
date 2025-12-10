// En lenguaje C escribe una instrucción printf() para mostrar solamente el
// resultado de la función Reflexive que reciba una matriz de enteros de
// dimensiones R x C y que regrese 1 si la matriz es reflexiva y 0 en caso
// contrario.

#include <stdio.h>

// Prototipo
int es_reflexiva(int matriz[][100], int filas, int columnas);

int main()
{
    // Ejemplo de matriz reflexiva (matriz identidad)
    int matriz_reflexiva[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    // Ejemplo de matriz NO reflexiva
    int matriz_no_reflexiva[3][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {0, 0, 1}};

    int tamaño = 3;

    // Mostrar resultados
    printf("Matriz 1 (reflexiva): %d\n", es_reflexiva(matriz_reflexiva, tamaño, tamaño));
    printf("Matriz 2 (no reflexiva): %d\n", es_reflexiva(matriz_no_reflexiva, tamaño, tamaño));

    return 0;
}

// Función que verifica si una matriz es reflexiva
int es_reflexiva(int matriz[][100], int filas, int columnas)
{
    // Una matriz debe ser cuadrada para ser reflexiva
    if (filas != columnas)
    {
        return 0; // No es cuadrada, no puede ser reflexiva
    }

    // Verificar que todos los elementos de la diagonal principal sean 1
    for (int i = 0; i < filas; i++)
    {
        if (matriz[i][i] != 1)
        {
            return 0; // No es reflexiva
        }
    }

    return 1; // Es reflexiva
}