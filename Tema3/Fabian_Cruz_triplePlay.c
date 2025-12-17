#include <stdio.h>

int main()
{
    // Precios de los servicios
    const float PRECIO_INTERNET = 200.00;
    const float PRECIO_TELEFONIA = 100.00;
    const float PRECIO_STREAMING = 500.00;

    // Variables para selección de servicios y tipo de cliente
    int internet, telefonia, streaming;
    int tipoCliente;
    float costoTotal = 0.0, descuento = 0.0;

    // Bienvenida al usuario
    printf("--- CONTRATACIÓN DE SERVICIO TRIPLE PLAY ---\n");
    printf("Seleccione los servicios que desea contratar:\n");

    // Selección de servicios
    printf("¿Desea contratar Internet? (1 = Sí, 0 = No): ");
    scanf("%d", &internet);
    printf("¿Desea contratar Telefonía? (1 = Sí, 0 = No): ");
    scanf("%d", &telefonia);
    printf("¿Desea contratar Streaming? (1 = Sí, 0 = No): ");
    scanf("%d", &streaming);

    // Calcular costo total según servicios seleccionados (selecciona las estructuras de control necesarias y escribe la funcionalidad).

    // Aplicación de descuento (selecciona una estructura de control y escribe la funcionalidad).
    // REQUERIMIENTO 1: Calcular el monto total de la contratación
    // Justificación: Uso de if independientes porque cada servicio
    // se selecciona de forma independiente. No se requiere validación
    // compleja según las especificaciones del problema.
    if (internet == 1)
    {
        costoTotal += PRECIO_INTERNET;
    }
    else if (internet != 0)
    {
        printf("Advertencia: Valor no válido para Internet. Se considera como No.\n");
    }

    if (telefonia == 1)
    {
        costoTotal += PRECIO_TELEFONIA;
    }
    else if (telefonia != 0)
    {
        printf("Advertencia: Valor no válido para Telefonía. Se considera como No.\n");
    }

    if (streaming == 1)
    {
        costoTotal += PRECIO_STREAMING;
    }
    else if (streaming != 0)
    {
        printf("Advertencia: Valor no válido para Streaming. Se considera como No.\n");
    }

    // Verificación de tipo de cliente
    printf("¿Es un cliente nuevo o existente? (1 = Nuevo, 2 = Existente): ");
    scanf("%d", &tipoCliente);

    // REQUERIMIENTO 2: Calcular el monto del descuento
    // Justificación: Uso de if-else if-else porque hay dos opciones válidas
    // y necesito manejar valores inválidos como caso por omisión.
    if (tipoCliente == 1)
    {
        // Cliente nuevo: 10% de descuento
        descuento = costoTotal * 0.10;
    }
    else if (tipoCliente == 2)
    {
        // Cliente existente: 5% de descuento
        descuento = costoTotal * 0.05;
    }
    else
    {
        // Tipo de cliente no válido: no hay descuento
        printf("Tipo de cliente no válido. No se aplicará descuento.\n");
        descuento = 0.0;
    }

    // Cálculo final del costo después del descuento
    costoTotal -= descuento;

    // Mostrar el total a pagar
    printf("\n--- RESUMEN DE LA CONTRATACIÓN ---\n");
    printf("Costo total antes del descuento: $%.2f\n", costoTotal + descuento);
    printf("Descuento aplicado: $%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", costoTotal);

    return 0;
}

// aqui esta mi repositorio en github :
// https://github.com/FabianCruz14/Fundamentos-de-Programacion-TecNM-Huau/tree/main/Tema3
