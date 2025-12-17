// aqui esta mi repositorio
// https://github.com/FabianCruz14/Fundamentos-de-Programacion-TecNM-Huau/tree/c53abf5697e10d0345f8e47c62bb15c1c715e6af/Tema3
// Nombre del estudiante: Fabian Cruz Hernández
// Grupo: AED-1285_NUE_SVC_VET_CDV_HCG_UZA_TL1_2025C
// Nombre del Docente: Cupertino Luna Trejo
// Fecha de Entrega: 17 – diciembre –2025

#include <stdio.h>

int main()
{
    int numAlumnos, i;
    float calificacion, suma = 0.0, promedio;

    // Solicitar el número de alumnos
    printf("Ingresa el número de alumnos: ");
    scanf("%d", &numAlumnos);

    // Validar que el número de alumnos sea positivo
    if (numAlumnos <= 0)
    {
        printf("Número de alumnos no válido.\n");
        return 1; // Salir del programa
    }

    // Arreglo para almacenar las calificaciones
    float calificaciones[numAlumnos];

    // Ingresar las calificaciones de cada alumno
    for (i = 0; i < numAlumnos; i++)
    {
        do
        {
            printf("Ingresa la calificación del alumno %d (0-100): ", i + 1);
            scanf("%f", &calificacion);

            if (calificacion < 0 || calificacion > 100)
            {
                printf("Calificación inválida. Debe estar entre 0 y 100.\n");
            }

        } while (calificacion < 0 || calificacion > 100);

        calificaciones[i] = calificacion;
        suma += calificacion; // Sumar para cálculo de promedio
    }

    // Calcular el promedio grupal
    promedio = suma / numAlumnos;
    printf("\nPromedio grupal: %.2f\n", promedio);

    // Determinar tamaño del grupo
    if (numAlumnos >= 1 && numAlumnos <= 5)
    {
        printf("GRUPO PEQUEÑO\n");
    }
    else if (numAlumnos > 5 && numAlumnos <= 10)
    {
        printf("GRUPO MEDIANO\n");
    }
    else if (numAlumnos > 10 && numAlumnos <= 15)
    {
        printf("GRUPO GRANDE\n");
    }
    else
    {
        printf("GRUPO INAPROPIADO\n");
    }

    // Evaluar desempeño del profesor según el promedio
    if (promedio > 70)
    {
        printf("PROFESOR ADECUADO\n");
    }
    else
    {
        printf("PROFESOR INADECUADO\n");
    }

    return 0;
}
