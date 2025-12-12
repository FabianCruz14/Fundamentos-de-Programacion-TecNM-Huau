Algoritmo VelocidadOlimpiadas
    Definir minutos, segundos, centesimas, distancia, tseg, vms, vkh como Real
    
    Escribir "Ingrese el tiempo del participante:"
    Escribir "Minutos: "
    Leer minutos
    Escribir "Segundos: "
    Leer segundos
    Escribir "Centesimas de segundo: "
    Leer centesimas
    Escribir "Ingrese la distancia recorrida (metros): "
    Leer distancia
    
	tseg = (minutos * 60) + segundos + (centesimas / 100)
	vms = distancia / tseg
	vkh = vms * 3.6

	Escribir "Velocidad:    ", vkh, " km/h"
    
FinAlgoritmo