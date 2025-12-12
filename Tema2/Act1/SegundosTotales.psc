Algoritmo SegundosTotales
    Definir dias, horas, minutos, segundos, total_segundos como Real

    Escribir "Ingrese la cantidad de días: "
    Leer dias
    
    Escribir "Ingrese la cantidad de horas: "
    Leer horas
    
    Escribir "Ingrese la cantidad de minutos: "
    Leer minutos
    
    Escribir "Ingrese la cantidad de segundos: "
    Leer segundos
	
    total_segundos = (dias * 24 * 60 * 60) + (horas * 60 * 60) + (minutos * 60) + segundos
    Escribir "TOTAL: ", total_segundos, " segundos"
    
FinAlgoritmo