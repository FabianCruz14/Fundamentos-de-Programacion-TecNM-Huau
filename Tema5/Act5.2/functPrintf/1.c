// ​ En lenguaje C escribe una instrucción printf() para mostrar solamente el
// resultado de la función MaxColum que regrese el valor máximo de una
// columna de una matriz de enteros de dimensiones R x C

#include <stdio.h>
#include <limits.h>

// PROTOTIPO DE FUNCION
int MaxColum(int matriz[][100], int R, int C, int col_index);

int main()
{
    int R = 3, C = 4;
    int matriz[3][4] = {
        {1, 5, 3, 7},
        {4, 9, 6, 2},
        {8, 3, 0, 4}};
    int columna_a_analizar = 2; // Índice de columna a verificar

    // Llamada afuncion en un printf
    printf("%d\n", MaxColum(matriz, R, C, columna_a_analizar));

    return 0;
}

int MaxColum(int matriz[][100], int R, int C, int col_index)
{
    // Inicializar el máximo con el primer elemento de la columna
    int maximo = matriz[0][col_index];

    // Recorrer todas las filas de la columna especificada
    for (int i = 1; i < R; i++)
    {
        if (matriz[i][col_index] > maximo)
        {
            maximo = matriz[i][col_index];
        }
    }

    return maximo;
}