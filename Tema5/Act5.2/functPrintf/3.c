// En lenguaje C escribe una instrucción printf() para mostrar solamente el
// resultado de la función AverageRow que regrese el promedio de una fila de
// una matriz de enteros de dimensiones R x C

#include <stdio.h>

// Prototipo de función
float promedio_fila(int matriz[][100], int filas, int columnas, int fila_buscar);

int main()
{
    // Matriz de ejemplo
    int matriz[3][4] = {
        {85, 92, 78, 90},
        {76, 88, 95, 82},
        {91, 84, 79, 87}};

    int filas = 3;
    int columnas = 4;
    int fila_a_promediar = 1; // Segunda fila (índice 1)

    // Mostrar solo el resultado con 2 decimales
    printf("%.2f\n", promedio_fila(matriz, filas, columnas, fila_a_promediar));

    return 0;
}

// Función que calcula el promedio de una fila
float promedio_fila(int matriz[][100], int filas, int columnas, int fila_buscar)
{
    // Validar índice de fila
    if (fila_buscar < 0 || fila_buscar >= filas)
    {
        printf("Error: Fila fuera de rango\n");
        return 0.0;
    }

    int suma = 0;

    // Sumar todos los elementos de la fila
    for (int col = 0; col < columnas; col++)
    {
        suma += matriz[fila_buscar][col];
    }

    // Calcular promedio (float para precisión)
    float promedio = (float)suma / columnas;

    return promedio;
}