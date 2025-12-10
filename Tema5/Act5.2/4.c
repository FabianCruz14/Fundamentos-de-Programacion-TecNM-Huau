// 4.​ En lenguaje C escribe el prototipo de un procedimiento
// llamado Days que recibe el mes y día de la fecha de cumpleaños
// de una persona y calcula cuántos días del año transcurren
// desde el 1 de enero a la fecha de su cumpleaños.
//  Suponga que todos los meses son de 30 días

#include <stdio.h>

// PROTOTIPO DE PROCEDIMIENTO
void Days(int mes, int dia);

int main()
{
    int mes, dia;
    printf("Ingrese el mes de su cumpleaños (1-12): ");
    scanf("%d", &mes);
    printf("Ingrese el día de su cumpleaños (1-30): ");
    scanf("%d", &dia);

    Days(mes, dia);
    return 0;
}

// DEFINICION DEL PROCEDIMIENTO
void Days(int mes, int dia)
{
    int total_dias = (mes * 30) + dia;
    printf("Desde el 1 de enero hasta su cumpleaños han transcurrido %d días.\n", total_dias);
}
