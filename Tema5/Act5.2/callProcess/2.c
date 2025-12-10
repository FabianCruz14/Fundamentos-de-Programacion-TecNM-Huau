// 2.​ En lenguaje C escribe una línea de código para hacer una llamada al
// procedimiento llamado Season que reciba una fecha (dia y mes del año) y
// diga la estación (Spring, Summer, Autumn, Winter) que le corresponde
#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Season(int day, int month);

int main()
{
    int day, month;
    printf("dime el dia: ");
    scanf("%d", &day);

    printf("dime el mes: ");
    scanf("%d", &month);

    Season(day, month);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void Season(int dia, int mes)
{
    if ((mes == 3 && dia >= 21) || (mes > 3 && mes < 6) || (mes == 6 && dia < 21))
        printf("Estacion: Spring\n");
    else if ((mes == 6 && dia >= 21) || (mes > 6 && mes < 9) || (mes == 9 && dia < 23))
        printf("Estacion: Summer\n");
    else if ((mes == 9 && dia >= 23) || (mes > 9 && mes < 12) || (mes == 12 && dia < 21))
        printf("Estacion: Autumn\n");
    else
        printf("Estacion: Winter\n");
}