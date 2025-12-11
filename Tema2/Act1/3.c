// El volumen de la Tierra considerando que es un esferoide: V=43*a2b  Donde:
// a= Radio ecuatorial = 6378.137 km
// b= Radio polar = 6356.752 km
#include <stdio.h>

int main()
{
    double a = 6378.137;
    double b = 6356.752;
    double pi = 3.141592653589793;
    double volumen;

    volumen = (4.0 / 3.0) * pi * a * a * b;

    printf("Volumen:          %.2f km³\n", volumen);
    printf("Volumen:          %.3e km³\n", volumen);
    return 0;
}
