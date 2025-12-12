Algoritmo VolumenTierra
    Definir a, b, volumen como Real
    
    a = 6378.137
    b = 6356.752
    
    // Calcular volumen usando fórmula V = (4/3)?a²b
    volumen = (4.0 / 3.0) * pi * (a * a )* b
    
    Escribir "Fórmula: V = (4/3)a²b"
    Escribir ""
    Escribir "Volumen calculado: ", volumen, " km³"
    
FinAlgoritmo
