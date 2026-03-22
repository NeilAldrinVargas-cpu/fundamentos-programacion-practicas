#include <stdio.h>

int main() {
    char nombre[50];
    float salario, aguinaldo;
    int meses;

    printf("--- SISTEMA DE CÁLCULO DE AGUINALDO (BOLIVIA) ---\n");

    // Entrada de datos
    printf("Nombre del trabajador: ");
    scanf(" %[^\n]", nombre); // Captura el nombre incluyendo espacios

    printf("Salario mensual (Bs.): ");
    scanf("%f", &salario);

    printf("Meses trabajados en el año (1-12): ");
    scanf("%d", &meses);

    // Validación según normativa boliviana (Mínimo 3 meses para empleados)
    if (meses < 3) {
        printf("\nEl trabajador %s no cumple con el mínimo de meses (3) para recibir aguinaldo.\n", nombre);
    }
    else if (meses > 12) {
        printf("\nError: Los meses trabajados no pueden ser mayores a 12.\n");
    }
    else {
        // Fórmula: (Salario / 12) * Meses
        aguinaldo = (salario * meses) / 12.0;

        // Salida de resultados
        printf("\n-------------------------------------------\n");
        printf("RESUMEN DE BENEFICIO\n");
        printf("Trabajador: %s\n", nombre);
        printf("Salario Base: Bs. %.2f\n", salario);
        printf("Tiempo: %d meses\n", meses);
        printf("MONTO AGUINALDO: Bs. %.2f\n", aguinaldo);
        printf("-------------------------------------------\n");
        printf("Nota: El aguinaldo es libre de descuentos y embargos.\n");
    }

    return 0;
}
