// 4.​ En lenguaje C escribe el prototipo de una función llamada Salary que
//     calcula el sueldo de un trabajador con base en las horas trabajadas,
//     suponga que le pagan $120 por hora.

#include <stdio.h>

// PROTOTIPO DE FUNCION
int Salary(int hours);

int main()
{
    int hours;
    int salary;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &hours);

    salary = Salary(hours);
    printf("El sueldo del trabajador es: $%d\n", salary);

    return 0;
}

// DEFINICION DE LA FUNCION
int Salary(int hours)
{
    return hours * 120;
}