// La ecuación del movimiento uniformemente acelerado para
// mostrar el efecto del desplazamiento inicial es la siguiente:
// s = s o + v o t + ½ at 2
// Donde:
// s= desplazamiento en el tiempo (m)
// s o = desplazamiento inicial (m)
// v o = velocidad inicial (m/s)
// a= aceleración (m/s 2 )
// t= tiempo (s)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float so, vo, a, t, s;

    printf("Ingrese el desplazamiento inicial en metros: ");
    scanf("%f", &so);

    printf("Ingrese la velocidad inicial en m/s: ");
    scanf("%f", &vo);

    printf("Ingrese la aceleracion en m/s²: ");
    scanf("%f", &a);

    printf("Ingrese el tiempo en segundos: ");
    scanf("%f", &t);

    // Cálculo del desplazamiento
    s = so + (vo * t) + (0.5 * a * t * t);

    printf("Desplazamiento inicial: %.2f m\n", so);
    printf("Velocidad inicial:      %.2f m/s\n", vo);
    printf("Aceleracion:             %.2f m/s²\n", a);
    printf("Tiempo:                  %.2f s\n", t);
    printf("DESPLAZAMIENTO FINAL:    %.2f metros\n", s);

    return 0;
}