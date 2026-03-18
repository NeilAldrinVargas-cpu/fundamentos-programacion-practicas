#include <stdio.h>

int main() {
    int edad, e;

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &edad);

    // Lógica de clasificación según la tabla
    if (edad >= 0 && edad <= 12) {
        e = 1;
        printf("Etapa: Infancia\n");
    }
    else if (edad >= 13 && edad <= 17) {
        e = 2;
        printf("Etapa: Adolescencia\n");
    }
    else if (edad >= 18 && edad <= 29) {
        e = 3;
        printf("Etapa: Juventud\n");
    }
    else if (edad >= 30 && edad <= 59) {
        e = 4;
        printf("Etapa: Adultez\n");
    }
    else if (edad >= 60) {
        e = 5;
        printf("Etapa: Persona Mayor\n");
    }
    else {
        printf("Error: La edad no puede ser negativa.\n");
        return 1;
    }
    printf("================================\n");
    printf("El resultado e es: %d\n", e);
    printf("================================\n");

    return 0;
}
