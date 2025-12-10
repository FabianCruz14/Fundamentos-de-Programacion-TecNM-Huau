// En lenguaje C escribe una instrucción para asignar a una variable el
// resultado de la función Get que recibe un arreglo de tamaño N de enteros, y
// una posición del arreglo y regrese el valor almacenado en la posición del
// arreglo.

#include <stdio.h>

int Get(int arr[], int pos);

int main()
{
    int nums[] = {2, 3, 7, 14, 5, 6, 8};
    int pos = 3;

    // LLAMADA A LA FUNCION
    int numberPos = Get(nums, pos);

    printf("El valor en el arreglo es: %d\n", numberPos);
    return 0;
}

int Get(int arr[], int pos)
{
    int num = arr[pos];
    return num;
}