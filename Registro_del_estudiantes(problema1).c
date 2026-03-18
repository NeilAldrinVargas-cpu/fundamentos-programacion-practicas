#include <stdio.h>

int main() {
    char nombre[100];
    char carrera[100];
    int edad;
    int semestre;

    // Entrada de datos
    printf("Ingrese el nombre completo: ");
    scanf(" %[^\n]", nombre); // El espacio inicial limpia espacios en blanco previos

    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    getchar(); // Limpia el salto de línea que deja el %d

    printf("Ingrese la carrera: ");
    scanf(" %[^\n]", carrera);

    printf("Ingrese el semestre: ");
    scanf("%d", &semestre);
    getchar(); // Limpia el buffer (buena práctica constante)

    // Salida de datos
    printf("\n==================================\n");
    printf("      REGISTRO EXITOSO\n");
    printf("==================================\n");

    // Agregamos \n al final de los strings para que no se pegue la siguiente línea
    printf("Nombre:    %s\n", nombre);
    printf("Edad:      %d anios\n", edad);
    printf("Carrera:   %s\n", carrera);
    printf("Semestre:  %d\n", semestre);
    printf("==================================\n");

    return 0;
}
