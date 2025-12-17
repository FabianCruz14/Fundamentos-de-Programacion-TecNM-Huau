Algoritmo DistribucionPesas
    Definir peso_total, num, i Como Entero
    Definir pesas Como Entero
	Dimensionar pesas[9]
	
    Definir nombres Como Cadena
	Dimensionar nombres[9]
	
    // Inicializar valores y nombres de pesas
    pesas[1] = 1000
    pesas[2] = 500
    pesas[3] = 200
    pesas[4] = 100
    pesas[5] = 50
    pesas[6] = 10
    pesas[7] = 5
    pesas[8] = 2
    pesas[9] = 1
	
    nombres[1] = "1000 g"
    nombres[2] = "500 g"
    nombres[3] = "200 g"
    nombres[4] = "100 g"
    nombres[5] = "50 g"
    nombres[6] = "10 g"
    nombres[7] = "5 g"
    nombres[8] = "2 g"
    nombres[9] = "1 g"
	
    // Entrada del usuario
    Escribir "Ingrese el peso en gramos (max 10000):"
    Leer peso_total
	
    Si (peso_total <= 0 o peso_total > 10000 ) Entonces
        Escribir "Peso fuera de rango"
	FinSi

// Calcular distribución de pesas
Para i = 1 Hasta 9 Hacer
	num = Trunc(peso_total / pesas[i])
	Escribir nombres[i], ": ", num
	peso_total = peso_total MOD pesas[i]
FinPara
FinAlgoritmo
