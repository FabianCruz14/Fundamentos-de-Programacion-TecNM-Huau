// 2.​ En lenguaje C escribe una instrucción printf() para mostrar solamente el
// resultado de la función Position que reciba un arreglo de tamaño N de
// enteros y un valor y regrese la posición de valor en el arreglo.

#include <stdio.h>

int Get(int arr[], int pos);

int main()
{
    int nums[] = {2, 3, 7, 14, 5, 6, 8};
    int pos = 3;

    // LLAMADA A LA FUNCION Printf
    printf("El valor en el arreglo es: %d\n", Get(nums, pos));
    return 0;
}

int Get(int arr[], int pos)
{
    int num = arr[pos];
    return num;
}