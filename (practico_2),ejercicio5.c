#include <stdio.h>
#include <math.h> // Necesaria para la función pow()

int main() {
    // Definición de variables
    float C, T, N;
    float cuota_mensual, monto_total, interes_total;

    // Entrada de datos
    printf("Ingrese el capital prestado (C): ");
    scanf("%f", &C);

    printf("Ingrese la tasa de interes mensual (en decimal, ej: 0.02 para 2%%): ");
    scanf("%f", &T);

    printf("Ingrese el numero de cuotas (N): ");
    scanf("%f", &N);

    // Cálculo de la cuota mensual usando la fórmula proporcionada
    // Formula: C * (T * (1 + T)^N) / ((1 + T)^N - 1)
    float factor=pow(1 + T, N); // Calculamos (1 + T)^N una sola vez para eficiencia

    cuota_mensual = C * (T * factor) / (factor - 1);

    // Cálculo del monto total e interés total
    monto_total = cuota_mensual * N;
    interes_total = monto_total - C;

    // Salida de resultados
    printf("\n--- Resultados del Credito ---\n");
    printf("=========================================\n");
    printf("Cuota mensual: %.2f\n", cuota_mensual);
    printf("Monto total a pagar: %.2f\n", monto_total);
    printf("Total de intereses: %.2f\n", interes_total);
    printf("=========================================\n");


    return 0;}
