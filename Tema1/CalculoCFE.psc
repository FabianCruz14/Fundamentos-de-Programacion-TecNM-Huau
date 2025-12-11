Algoritmo CalculoCFE
	Definir lecturaActual, lecturaAnterior, consumo, pago, tarifa1, tarifa2 Como Real
	// Constantes de tarifas
	tarifa1 <- 0.757
	tarifa2 <- 0.924 // Para primeras 150 unidades
	// Entrada de datos
	Escribir '=== CALCULADORA DE PAGO CFE ===' // Para unidades restantes
	Escribir 'Ingrese lectura anterior (kWh): '
	Leer lecturaAnterior
	Escribir 'Ingrese lectura actual (kWh): '
	Leer lectura_actual
	// Validación
	Si lecturaActual<lecturaAnterior Entonces
		Escribir 'ERROR: La lectura actual no puede ser menor que la anterior'
	SiNo
		// Calcular consumo
		consumo <- lecturaActual-lecturaAnterior
		// Calcular pago según rangos
		Si consumo<=150 Entonces
			pago <- consumo*tarifa1
		SiNo
			pago <- (150*tarifa1)+((consumo-150)*tarifa2)
		FinSi
		// Mostrar resultados
		Escribir ''
		Escribir '=== RECIBO DE PAGO ==='
		Escribir 'Lectura anterior: ', lecturaAnterior, ' kWh'
		Escribir 'Lectura actual:   ', lecturaActual, ' kWh'
		Escribir 'Consumo total:    ', consumo, ' kWh'
		Escribir '--------------------------------'
		// Mostrar desglose si consumo > 150
		Si consumo>150 Entonces
			Escribir 'Desglose:'
			Escribir '  150 kWh x $', tarifa1, ' = $', (150*tarifa1)
			Escribir '  ', (consumo-150), ' kWh x $', tarifa2, ' = $', ((consumo-150)*tarifa2)
		FinSi
		Escribir 'TOTAL A PAGAR:    $', pago
		Escribir '================================'
	FinSi
FinAlgoritmo
