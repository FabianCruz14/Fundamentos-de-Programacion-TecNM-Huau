Algoritmo CalculoCFE
	definir lecturaActual, lecturaAnterior, consumo, pago, tarifa1, tarifa2 Como Real
    
    // Constantes de tarifas
    tarifa1 <- 0.757    // Para primeras 150 unidades
    tarifa2 <- 0.924    // Para unidades restantes
    
    // Entrada de datos
    Escribir "=== CALCULADORA DE PAGO CFE ==="
    Escribir "Ingrese lectura anterior (kWh): "
    Leer lecturaAnterior
    
    Escribir "Ingrese lectura actual (kWh): "
    Leer lectura_actual
    
    // Validación
    Si lecturaActual < lecturaAnterior Entonces
        Escribir "ERROR: La lectura actual no puede ser menor que la anterior"
    Sino
        // Calcular consumo
        consumo <- lecturaActual - lecturaAnterior
        
        // Calcular pago según rangos
        Si consumo <= 150 Entonces
            pago <- consumo * tarifa1
        Sino
            pago <- (150 * tarifa1) + ((consumo - 150) * tarifa2)
        Fin Si
        
        // Mostrar resultados
        Escribir ""
        Escribir "=== RECIBO DE PAGO ==="
        Escribir "Lectura anterior: ", lecturaAnterior, " kWh"
        Escribir "Lectura actual:   ", lecturaActual, " kWh"
        Escribir "Consumo total:    ", consumo, " kWh"
        Escribir "--------------------------------"
        
        // Mostrar desglose si consumo > 150
        Si consumo > 150 Entonces
            Escribir "Desglose:"
            Escribir "  150 kWh x $", tarifa1, " = $", (150 * tarifa1)
            Escribir "  ", (consumo - 150), " kWh x $", tarifa2, " = $", ((consumo - 150) * tarifa2)
        Fin Si
        
        Escribir "TOTAL A PAGAR:    $", pago
        Escribir "================================"
    Fin Si
FinAlgoritmo
