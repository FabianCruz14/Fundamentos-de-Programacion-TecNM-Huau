// En lenguaje C escribe una instrucción para asignar a una variable el
// resultado de la función Find que reciba un arreglo de tamaño N de enteros
// y un valor y regrese 1 si encuentra el valor en el arreglo y 0 en caso
// contrario.

#include <stdio.h>

// Declaración de la función
int Find(int arr[], int N, int valor);

int main()
{
    // Ejemplo de arreglo
    int numeros[] = {10, 20, 30, 40, 50};
    int tamaño = 5;
    int buscar = 33; // Valor a buscar

    // LLAMADO A LA FUNCION
    int encontrado = Find(numeros, tamaño, buscar);

    if (encontrado == 1)
    {
        printf("El valor %d SÍ está en el arreglo\n", buscar);
    }
    else
    {
        printf("El valor %d NO está en el arreglo\n", buscar);
    }

    return 0;
}

// DEFINICION DE LA FUNCION
int Find(int arr[], int N, int valor)
{
    // Recorrer todo el arreglo
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == valor)
        {
            return 1; // Encontrado
        }
    }
    return 0; // No encontrado
}