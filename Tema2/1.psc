Algoritmo MovimientoAcelerado
    Definir so, vo, a, t, s como Real
	
    // Entrada de datos
    Escribir "Ingrese el desplazamiento inicial en metros: "
    Leer so
    
    Escribir "Ingrese la velocidad inicial en m/s: "
    Leer vo
    
    Escribir "Ingrese la aceleración en m/s²: "
    Leer a
    
    Escribir "Ingrese el tiempo en segundos: "
    Leer t
    
    // Proceso: cálculo del desplazamiento
    s = so + (vo * t) + (0.5 * a * t * t)
    
    // Salida del resultado
    Escribir " "
    Escribir "RESULTADO:"
    Escribir "El desplazamiento después de ", t, " segundos es: ", s, " metros"
    
FinAlgoritmo