// En lenguaje C escribe una línea de código para hacer una llamada al
// procedimiento llamado SerieAddN que reciba n como parámetro y que
// calcule y muestre la suma de los números desde 1 hasta n.

#include <stdio.h>

void SerieAddN(int n);

int main()
{
    int n = 10; // Por ejemplo, suma del 1 al 10
    // llamdo a proceso
    SerieAddN(n);
    return 0;
}

void SerieAddN(int n)
{
    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    printf("La suma de 1 hasta %d es: %d\n", n, suma);
}