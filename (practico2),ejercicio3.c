#include <stdio.h>

int main() {
    // Declaración de variables
    float parcial1, parcial2, examenFinal, proyecto, notaFinal;

    printf("--- Calculadora de Nota Final ---\n");

    // Entrada de datos
    printf("Ingrese la nota del primer parcial (0-25): ");
    scanf("%f", &parcial1);

    printf("Ingrese la nota del segundo parcial (0-25): ");
    scanf("%f", &parcial2);

    printf("Ingrese la nota del examen final (0-30): ");
    scanf("%f", &examenFinal);

    printf("Ingrese la nota del proyecto integrador (0-20): ");
    scanf("%f", &proyecto);

    // Cálculo de la suma
    notaFinal = parcial1 + parcial2 + examenFinal + proyecto;

    // Resultados
    printf("\n----------------------------------\n");
    printf("Nota Final: %.2f / 100\n", notaFinal);

    // Estructura de control para determinar si aprobó
    if (notaFinal >= 51) {
        printf("Estado: APROBADO\n");
    } else {
        printf("Estado: REPROBÓ\n");
    }
    printf("----------------------------------\n");

    return 0;
}
