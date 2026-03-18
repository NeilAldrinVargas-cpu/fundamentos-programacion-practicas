#include <stdio.h>

int main() {
    // Declaración de variables
    float base, altura, area;

    printf("--- CALCULO DE AREA DE TRIANGULO ---\n");

    // Entrada de datos
    printf("Ingrese la base: ");
    scanf("%f", &base);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    // Proceso: Aplicación de la fórmula
    area = (base * altura) / 2;

    // Salida de resultados
    printf("\n------------------------------------\n");
    printf("El area resultante es: %.2f unidades cuadradas\n", area);
    printf("------------------------------------\n");

    return 0;
}

