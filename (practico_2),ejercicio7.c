#include <stdio.h>
#include <math.h> // Necesaria para usar la función pow()

int main() {
    double C, T, N, M, G;

    // 1. Entrada de datos
    printf("Ingrese el capital inicial (C): ");
    scanf("%lf", &C);

    printf("Ingrese la tasa de interes anual en %% (T): ");
    scanf("%lf", &T);

    printf("Ingrese el plazo en años (N): ");
    scanf("%lf", &N);

    // 2. Procesamiento
    // La fórmula es: M = C * (1 + T/12/100)^(N*12)
    // En C: pow(base, exponente)
    double tasa_mensual_decimal = (T / 12.0) / 100.0;
    double meses_totales = N * 12.0;

    M = C * pow(1 + tasa_mensual_decimal, meses_totales);

    // Ganancia neta: G = M - C
    G = M - C;

    // 3. Salida de resultados
    printf("\n--- Resumen de la Inversion ---\n");
    printf("Monto total acumulado (M): %.2f\n", M);
    printf("Ganancia neta (G): %.2f\n", G);

    return 0;
}
