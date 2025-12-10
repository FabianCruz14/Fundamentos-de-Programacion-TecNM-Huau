Algoritmo CalcularFactorial
    // Declaración de variables
	
	Definir n, i, factorial Como Entero
    
    // Entrada de datos
    Escribir "Ingrese un número entero no negativo: "
    Leer n
    
    // Validación
    Si n < 0 Entonces
        Escribir "Error: El número no puede ser negativo"
    Sino
        // Inicialización
        factorial <- 1
        
        // Cálculo del factorial
        Para i <- 1 Hasta n Con Paso 1 Hacer
            factorial <- factorial * i
        Fin Para
        
        // Salida del resultado
        Escribir "El factorial de ", n, " es: ", factorial
    Fin Si
FinAlgoritmo
