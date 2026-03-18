Algoritmo Clasificador_Etapas_Vida
	Definir edad, e Como Entero
	
	Escribir "Ingrese la edad de la persona:"
	Leer edad
	
	Si edad >= 0 Y edad <= 12 Entonces
		e <- 1
		Escribir "Etapa: Infancia"
	Sino
		Si edad >= 13 Y edad <= 17 Entonces
			e <- 2
			Escribir "Etapa: Adolescencia"
		Sino
			Si edad >= 18 Y edad <= 29 Entonces
				e <- 3
				Escribir "Etapa: Juventud"
			Sino
				Si edad >= 30 Y edad <= 59 Entonces
					e <- 4
					Escribir "Etapa: Adultez"
				Sino
					Si edad >= 60 Entonces
						e <- 5
						Escribir "Etapa: Persona Mayor"
					Sino
						Escribir "Edad no válida"
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Si edad >= 0 Entonces
		Escribir "El valor de e es: ", e
	FinSi
	
FinAlgoritmo
