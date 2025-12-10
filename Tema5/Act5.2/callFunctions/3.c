// En lenguaje C escribe una instrucción para asignar a una variable el
//     resultado de la función Min que calcule el valor mínimo de un arreglo de
//         tamaño N de enteros

#include <stdio.h>
// PROTOTIPO DE FUNCION
int Min(int arr[], int n);

int main()
{
    int numeros[] = {2, 4, 6, 9, 12};
    int n = 6;

    // LLAMADO DE FUNCION
    int minimo = Min(numeros, n);

    printf("El valor mínimo del arreglo es: %d\n", minimo);

    return 0;
}

// DEFINICION DE FUNCION
int Min(int arr[], int N)
{
    int minimo = arr[0];

    // Recorrer el arreglo desde el segundo elemento
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < minimo)
        {
            minimo = arr[i]; // Actualizar si encontramos uno menor
        }
    }

    return minimo;
}