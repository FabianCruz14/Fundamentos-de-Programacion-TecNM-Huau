#include <stdio.h>

int main()
{
    int opcion, n, i, j;
    int serie[30];
    float sonidos, TempDiaria[24];
    float TempSem[7][24];

    do
    {
        printf("\nMENU:\n");
        printf("1. Serie de ULAM\n");
        printf("2. Termometro de grillo\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese un numero positivo para la serie de ULAM: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("El numero debe ser positivo.\n");
            }
            else
            {
                i = 0;
                serie[i] = n;
                i++;
                while (n != 1 && i < 30)
                {
                    if (n % 2 == 0)
                    {
                        n = n / 2;
                    }
                    else
                    {
                        n = n * 3 + 1;
                    }
                    serie[i] = n;
                    i++;
                }
                printf("Serie de ULAM: ");
                for (j = 0; j < i; j++)
                {
                    printf("%d ", serie[j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("=== TERMOMETRO DE GRILLO ===\n");
            // Para un día
            printf("Ingrese los sonidos por hora para un dia (24 valores):\n");
            for (j = 0; j < 24; j++)
            {
                printf("Hora %d: ", j);
                scanf("%f", &sonidos);
                TempDiaria[j] = sonidos / 4.0 + 40.0;
            }
            printf("\nTemperaturas del dia:\n");
            for (j = 0; j < 24; j++)
            {
                printf("Hora %d: %.2f °F\n", j, TempDiaria[j]);
            }

            // Para una semana
            printf("\nIngrese los sonidos para una semana (7 dias, 24 horas cada uno):\n");
            for (i = 0; i < 7; i++)
            {
                printf("Dia %d:\n", i + 1);
                for (j = 0; j < 24; j++)
                {
                    printf("Hora %d: ", j);
                    scanf("%f", &sonidos);
                    TempSem[i][j] = sonidos / 4.0 + 40.0;
                }
            }
            printf("\nMatriz de temperaturas de la semana:\n");
            for (i = 0; i < 7; i++)
            {
                printf("Dia %d: ", i + 1);
                for (j = 0; j < 24; j++)
                {
                    printf("%.1f ", TempSem[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion no valida.\n");
        }
    } while (opcion != 3);
    return 0;
}