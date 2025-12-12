#include <stdio.h>
#include <math.h>

int main()
{
    double lado, perimetro, altura, area;
    const double RAIZ_TRES = 1.7320508075688772; // √3

    printf("Ingrese la longitud del lado del triangulo: ");
    scanf("%lf", &lado);

    perimetro = 3 * lado;
    altura = (lado * sqrt(3)) / 2;
    area = (pow(lado, 2) * sqrt(3)) / 4;

    printf("Perimetro: %.4f\n", perimetro);
    printf("Altura: %.4f\n", altura);
    printf("Area:   %.4f\n", area);

    return 0;
}
