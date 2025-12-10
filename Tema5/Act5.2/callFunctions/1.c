// En lenguaje C escribe una instrucción para asignar a una variable el
// resultado de la función Factorial que reciba n como parámetro y que
// muestre el producto de los números desde 1 hasta n. La función muestra el
// producto.

#include <stdio.h>

// PROTOTIPO DE FUNCION
int Factorial(int n);

int main()
{
    int n = 5;
    int resultado = Factorial(n);
    printf("El valor almacenado en resultado es: %d\n", resultado);
    return 0;
}

int Factorial(int n)
{
    int producto = 1;

    for (int i = 1; i <= n; i++)
    {
        producto *= i;
    }

    printf("El factorial de %d es: %d\n", n, producto);

    return producto;
}