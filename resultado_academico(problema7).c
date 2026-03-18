#include <stdio.h>

int main() {
    float nota;

    printf("--- SISTEMA DE RESULTADOS ACADEMICOS ---\n");

    // Entrada de datos
    printf("Ingrese la nota final obtenida: ");
    scanf("%f", &nota);

    // Proceso y Salida (Estructura Condicional)
    printf("\n=====================================\n");
    if (nota >= 51) {
        printf("Estado: APROBADO\n");
    } else {
        printf("Estado: REPROBADO\n");
    }
    printf("=======================================\n");

    return 0;
}
