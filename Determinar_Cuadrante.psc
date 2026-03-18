Algoritmo Determinar_Cuadrante
    // Definir las variables
    Definir x, z Como Real      //se tuvo que reemplazar la letra y por la z para que funcione el programa 
    Definir r Como Entero
    
    // Inicializar r para evitar errores de variable no definida
    r <- 0
    
    // Solicitar entrada de datos
    Escribir "Ingrese la coordenada x:"
    Leer x
    Escribir "Ingrese la coordenada y:"
    Leer z
    
    // Evaluar los cuadrantes mediante condiciones anidadas
    Si x > 0 Y z > 0 Entonces
        r <- 1
    Sino
        Si x < 0 Y z > 0 Entonces
            r <- 2
        Sino
            Si x < 0 Y z < 0 Entonces
                r <- 3
            Sino
                Si x > 0 Y z < 0 Entonces
                    r <- 4
                Sino
                    Escribir "El punto se encuentra sobre un eje o en el origen."
                Fin Si
            Fin Si
        Fin Si
    Fin Si
    
    // Mostrar el resultado si r fue asignado
    Si r <> 0 Entonces
        Escribir "El punto pertenece al cuadrante: ", r
    Fin Si
    
FinAlgoritmo