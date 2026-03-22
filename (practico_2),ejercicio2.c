#include <stdio.h>
#include <math.h>

int main() {
    // Definimos una constante para PI
    const float PI = 3.14159265358979323846;

    float R, H;
    float area_lateral, area_total, volumen;

    printf("--- Calculadora de Cilindro ---\n");

    // Entrada de datos
    printf("Introduce el radio (R): ");
    scanf("%f", &R);
    printf("Introduce la altura (H): ");
    scanf("%f", &H);

    area_lateral = 2 * PI * R * H;
    area_total   = 2 * PI * R * (R + H);
    volumen      = PI * pow(R, 2) * H;

    // Salida de resultados
    printf("\n--- Resultados ---\n");
    printf("Área lateral: %.2f\n", area_lateral);
    printf("Área total:   %.2f\n", area_total);
    printf("Volumen:      %.2f\n", volumen);

    return 0;
}
