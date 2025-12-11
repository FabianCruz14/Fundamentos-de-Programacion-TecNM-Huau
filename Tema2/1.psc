Algoritmo SistemaEcuaciones
    Definir a, b, c, d, e, f, det, x, yy como Real
	
    Escribir "Ingrese los coeficientes de la primera ecuación:"
    Escribir "a: "
    Leer a
    Escribir "b: "
    Leer b
    Escribir "c: "
    Leer c
    
    Escribir ""
    Escribir "Ingrese los coeficientes de la segunda ecuación:"
    Escribir "d: "
    Leer d
    Escribir "e: "
    Leer e
    Escribir "f: "
    Leer f
	
	// Cacular determinante
    det = (a * e) - (b * d)

    Si det <> 0 Entonces
        // Sistema compatible determinado
        x = ((c * e) - (b * f)) / det
        yy = ((a * f) - (c * d)) / det
        
        Escribir "SOLUCIÓN:"
        Escribir "x = ", x
        Escribir "y = ", yy
		
		Escribir "\nSolucion:\n"
		Escribir "x = ", x
		Escribir "y = ", yy
    Sino
            Escribir "No tiene solución (rectas paralelas)"
    FinSi
    
FinAlgoritmo