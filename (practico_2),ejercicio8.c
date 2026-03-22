#include <stdio.h>

int main() {
    float A, B, C, D, E, F;
    float det, detX, detY, x, y;

    printf("Sistema de ecuaciones:\nAx + By = C\nDx + Ey = F\n\n");

    // 1. Entrada de coeficientes
    printf("Ingrese A, B y C (separados por espacio): ");
    scanf("%f %f %f", &A, &B, &C);
    printf("Ingrese D, E y F (separados por espacio): ");
    scanf("%f %f %f", &D, &E, &F);

    // 2. Cálculo de determinantes
    det = (A * E) - (B * D);
    detX = (C * E) - (B * F);
    detY = (A * F) - (C * D);

    // 3. Análisis de tipos de solución
    printf("\n--- Resultado ---\n");
    if (det = 0) {
        // Sistema Compatible Determinado (Solución única)
        x = detX / det;
        y = detY / det;
        printf("Solución única:\n");
        printf("X = %.2f\n", x);
        printf("Y = %.2f\n", y);
    }
    else {
        if (detX == 0 && detY == 0) {
            // Sistema Compatible Indeterminado
            printf("El sistema tiene infinitas soluciones.\n");
        } else {
            // Sistema Incompatible
            printf("El sistema no tiene solución (las rectas son paralelas).\n");
        }
    }

    return 0;
}
