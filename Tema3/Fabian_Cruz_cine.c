// Nombre del estudiante: Fabian Cruz Hernández
// Grupo: AED-1285_NUE_SVC_VET_CDV_HCG_UZA_TL1_2025C
// Nombre del Docente: Cupertino Luna Trejo
// Fecha de Entrega: 17 – diciembre –2025

#include <stdio.h>

#include <stdlib.h>

int main()
{
    // Declaración de variables
    int sala, horario, num_asientos, i;
    char tipo_asiento;
    float costo_total;
    float precio_adulto_normal = 50.0;
    float precio_nino_normal = 30.0;
    float precio_adulto_vip = 100.0;
    float precio_nino_vip = 60.0;
    char confirmar_pago;

    printf("Bienvenido al sistema de venta de boletos de CineMagico\n");

    while (1)
    {                    // Bucle principal para permitir cancelar y seleccionar de nuevo
        costo_total = 0; // Reiniciar costo total en cada selección

        // Selección de sala
        printf("\nSeleccione la sala:\n");
        printf("1. Normal\n");
        printf("2. VIP\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &sala);

        // Selección de horario
        printf("\nSeleccione el horario:\n");
        printf("1. 12:00 pm\n");
        printf("2. 3:00 pm\n");
        printf("3. 6:00 pm\n");
        printf("4. 9:00 pm\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &horario);

        // Número de asientos (máximo 4)
        do
        {
            printf("\nIngrese el número de boletos (1-4): ");
            scanf("%d", &num_asientos);
            if (num_asientos < 1 || num_asientos > 4)
                printf("Número inválido, debe ser entre 1 y 4.\n");
        } while (num_asientos < 1 || num_asientos > 4);

        // Selección de tipo de asiento (niño o adulto)
        for (i = 1; i <= num_asientos; i++)
        {
            printf("\nAsiento %d:\n", i);
            do
            {
                printf("Ingrese tipo de boleto (A=Adulto, N=Niño): ");
                scanf(" %c", &tipo_asiento);
                if (tipo_asiento != 'A' && tipo_asiento != 'N' && tipo_asiento != 'a' && tipo_asiento != 'n')
                    printf("Tipo inválido. Ingrese 'A' para adulto o 'N' para niño.\n");
            } while (tipo_asiento != 'A' && tipo_asiento != 'N' && tipo_asiento != 'a' && tipo_asiento != 'n');

            // Sumar precio según tipo y sala
            if (sala == 1)
            { // Sala Normal
                if (tipo_asiento == 'A' || tipo_asiento == 'a')
                    costo_total += precio_adulto_normal;
                else
                    costo_total += precio_nino_normal;
            }
            else if (sala == 2)
            { // Sala VIP
                if (tipo_asiento == 'A' || tipo_asiento == 'a')
                    costo_total += precio_adulto_vip;
                else
                    costo_total += precio_nino_vip;
            }
            else
            {
                printf("Sala inválida, reinicie la selección.\n");
                costo_total = 0;
                break;
            }
        }

        // Confirmar pago o cancelar
        printf("\nEl costo total de su compra es: $%.2f\n", costo_total);
        printf("¿Desea realizar el pago? (S=Sí, N=No, cancelar selección): ");
        scanf(" %c", &confirmar_pago);

        if (confirmar_pago == 'S' || confirmar_pago == 's')
        {
            printf("\nPago realizado con éxito.\n");
            printf("Gracias por su compra. Monto total: $%.2f\n", costo_total);
            break; // Salir del bucle principal y terminar el programa
        }
        else
        {
            printf("\nSelección cancelada. Puede realizar una nueva selección.\n");
        }
    }

    return 0;
}
