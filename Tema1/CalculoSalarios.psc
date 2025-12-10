Algoritmo CalculoSalarios
	Definir contador, i Como Entero
    Definir sueldo, nuevo_sueldo, porcentaje, nomina_total Como Real
    
    // Inicialización
    contador <- 5
    nomina_total <- 0
    
    // Proceso para cada empleado
    Para i <- 1 Hasta contador Con Paso 1 Hacer
        // Entrada de datos
        Escribir "Ingrese el sueldo del empleado ", i, ": "
        Leer sueldo
        
        // Determinar porcentaje de aumento
        Si sueldo < 10000 Entonces
            porcentaje <- 10
        Sino
            Si sueldo <= 25000 Entonces
                porcentaje <- 7
            Sino
                porcentaje <- 8
            Fin Si
        Fin Si
        
        // Calcular nuevo sueldo
        nuevo_sueldo <- sueldo + (sueldo * porcentaje / 100)
        
        // Acumular en nómina total
        nomina_total <- nomina_total + nuevo_sueldo
        
        // Mostrar resultado individual (salida a)
        Escribir "Empleado ", i, ":"
        Escribir "  Sueldo anterior: $", sueldo
        Escribir "  Aumento: ", porcentaje, "%"
        Escribir "  Nuevo sueldo: $", nuevo_sueldo
        Escribir "----------------------------------"
    Fin Para
    
    // Mostrar nómina total (salida b)
    Escribir ""
    Escribir "=================================="
    Escribir "TOTAL DE NÓMINA PAGADA: $", nomina_total
    Escribir "=================================="
FinAlgoritmo
