#include <stdio.h>

int main() {
    // Declaración de variables (Objetos)
    float n1, n2, n3, promedio;

    printf("--- CALCULADORA DE PROMEDIOS ---\n");

    // Entrada de datos
    printf("Ingrese la nota 1: ");
    scanf("%f", &n1);

    printf("Ingrese la nota 2: ");
    scanf("%f", &n2);

    printf("Ingrese la nota 3: ");
    scanf("%f", &n3);

    // Proceso: Cálculo del promedio
    promedio = (n1 + n2 + n3) / 3;

    // Salida de resultados
    // Usamos %.2f para mostrar solo 2 decimales
    printf("\n-------------------------------\n");
    printf("El promedio del estudiante es: %.2f\n", promedio);
    printf("-------------------------------\n");

    return 0;
}
